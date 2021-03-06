/* $Id: z_en_mag.c,v 2.5 2002/05/27 07:18:44 zelda Exp $ 
 *
 * タイトル表示
 *
 * $Log: z_en_mag.c,v $
 * Revision 2.5  2002/05/27  07:18:44  zelda
 * *** empty log message ***
 *
 * Revision 2.4  2001-04-04 16:21:47+09  zelda
 * ドルフィンエミュレータ用仮ぐみ版 CICと64DD対応部分をはずしたバージョン
 *
 * Revision 2.3  1998-11-06 11:57:55+09  soejima
 * コメント
 *
 * Revision 2.2  1998-10-27 21:25:07+09  soejima
 * ＰＡＬ仕様
 *
 * Revision 2.1  1998-10-22 21:13:45+09  zelda
 * ＲＯＭ出しバージョン(NTSC)
 *
 * Revision 1.38  1998/10/09 13:27:34  sasaki
 * *** empty log message ***
 *
 * Revision 1.37  1998-10-07 21:52:24+09  soejima
 * *** empty log message ***
 *
 * Revision 1.36  1998-10-07 15:40:24+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.35  1998-10-06 18:46:57+09  soejima
 * *** empty log message ***
 *
 * Revision 1.34  1998-10-05 23:00:30+09  soejima
 * *** empty log message ***
 *
 * Revision 1.33  1998-10-02 23:06:43+09  soejima
 * *** empty log message ***
 *
 * Revision 1.32  1998-09-30 23:00:27+09  soejima
 * *** empty log message ***
 *
 * Revision 1.31  1998-09-30 19:58:02+09  soejima
 * *** empty log message ***
 *
 * Revision 1.1  1998-07-16 21:24:27+09  soejima
 * Initial revision
 *
 */

/*-----------------------------------------------------------------------
 *
 *----------------------------------------------------------------------*/
/*-----------------------------------------------------------------------
 *
 *	インクルードファイル
 *
 *----------------------------------------------------------------------*/
#include "z_basic.h"
#include "sys_segment.h"
#include "z_play.h"
#include "z_player.h"
#include "z_en_part.h"
#include "z_collision_check.h"
#include "z_skelanime.h"
#include "z_actor_files.h"
#include "z_common_data.h"	/* z_common_data_t */
#include "z_save_area_h.h"
#include "z_define1.h"
#include "gfxprint.h"		/* gfxprint */
#include "z_event.h"
#include "z_wipe.h"
#include "z_sram.h"
#include "z_file_choose.h"
#include "z_sram_h.h"
#include "ssSRAMrdwt.h"

#include "z_en_mag.h"
#include "z_file_choose.h"
#include "z_kaleido_moji.h"
#include "gfxalloc.h"		/* gfxopen/gfxclose */

#if defined(USE_N64DD)
/* メディアチェック */
#include "z_n64dd.h"
#endif /* defined(USE_N64DD) */

static void En_Mag_Actor_ct(Actor *thisx, Game *game);
static void En_Mag_Actor_dt(Actor *thisx, Game *game);
static void En_Mag_Actor_move(Actor *thisx, Game *game);
static void En_Mag_Actor_draw(Actor *thisx, Game *game);


/*-----------------------------------------------------------------------
 *
 *	プロフィール
 *
 *----------------------------------------------------------------------*/
extern Actor_profile En_Mag_Profile = {
    ACTOR_NAME_EN_MAG,		/* 名前					*/
    ACTOR_PART_OBJ,		/* 役柄					*/
    (ACTOR_STATUS_NO_CULL_MOVE |
     ACTOR_STATUS_NO_CULL_DRAW),/* 情報					*/
    Object_Bank_Mag,		/* オブジェクトシェイプバンクデータ	*/
    sizeof(En_Mag_Actor),	/* クラスサイズ				*/
    En_Mag_Actor_ct,		/* コンストラクト関数ポインタ		*/
    En_Mag_Actor_dt,		/* デストラクト関数ポインタ		*/
    En_Mag_Actor_move,		/* 処理関数ポインタ			*/
    En_Mag_Actor_draw		/* 表示関数ポインタ			*/
};

static short check_time = 0;
/************************************************************************
 *	ＳＲＡＭマニュアルイニシャライズ				*
 *									*
 *	ＳＲＡＭサイズ【256Ｋｂｉｔ ＝ 32Ｋｂｙｔｅ ＝ 32768ｂｙｔｅ】	*
 ************************************************************************/
#define SRAM_DIV_SIZE    0x0800 	/* 容量 */

static void
sram_manual_initialize( void )
{
    static unsigned char	*read_buff[SRAM_DIV_SIZE];

    
    /*
     *  ＳＲＡＭ初期化
     */
    PRINTF("\n\n\n＝＝＝＝＝＝＝＝＝＝\n  ＳＲＡＭ初期化\n\n＝＝＝＝＝＝＝＝＝＝\n\n\n");
    /* ＳＲＡＭ初期化用バッファＺＥＲＯクリアー */
    bzero( read_buff, SRAM_DIV_SIZE );

//    PRINTF("クリアー０〜０x０８００\n");
    ssSRAMWrite((void *)((int)SRAM_START_ADDR+(SRAM_DIV_SIZE*0)), read_buff, SRAM_DIV_SIZE);
//    PRINTF("クリアー０x０８００〜０x１０００\n");
    ssSRAMWrite((void *)((int)SRAM_START_ADDR+(SRAM_DIV_SIZE*1)), read_buff, SRAM_DIV_SIZE);
//    PRINTF("クリアー０x１０００〜０x１８００\n");
    ssSRAMWrite((void *)((int)SRAM_START_ADDR+(SRAM_DIV_SIZE*2)), read_buff, SRAM_DIV_SIZE);
//    PRINTF("クリアー０x１８００〜０x２０００\n");
    ssSRAMWrite((void *)((int)SRAM_START_ADDR+(SRAM_DIV_SIZE*3)), read_buff, SRAM_DIV_SIZE);
//    PRINTF("クリアー０x２０００〜０x２８００\n");
    ssSRAMWrite((void *)((int)SRAM_START_ADDR+(SRAM_DIV_SIZE*4)), read_buff, SRAM_DIV_SIZE);
//    PRINTF("クリアー０x２８００〜０x３０００\n");
    ssSRAMWrite((void *)((int)SRAM_START_ADDR+(SRAM_DIV_SIZE*5)), read_buff, SRAM_DIV_SIZE);
//    PRINTF("クリアー０x３０００〜０x３８００\n");
    ssSRAMWrite((void *)((int)SRAM_START_ADDR+(SRAM_DIV_SIZE*6)), read_buff, SRAM_DIV_SIZE);
//    PRINTF("クリアー０x３８００〜０x４０００\n");
    ssSRAMWrite((void *)((int)SRAM_START_ADDR+(SRAM_DIV_SIZE*7)), read_buff, SRAM_DIV_SIZE);
//    PRINTF("クリアー０x４０００〜０x４８００\n");
    ssSRAMWrite((void *)((int)SRAM_START_ADDR+(SRAM_DIV_SIZE*8)), read_buff, SRAM_DIV_SIZE);
//    PRINTF("クリアー０x４８００〜０x５０００\n");
    ssSRAMWrite((void *)((int)SRAM_START_ADDR+(SRAM_DIV_SIZE*9)), read_buff, SRAM_DIV_SIZE);
//    PRINTF("クリアー０x５０００〜０x５８００\n");
    ssSRAMWrite((void *)((int)SRAM_START_ADDR+(SRAM_DIV_SIZE*10)), read_buff, SRAM_DIV_SIZE);
//    PRINTF("クリアー０x５８００〜０x５０００\n");
    ssSRAMWrite((void *)((int)SRAM_START_ADDR+(SRAM_DIV_SIZE*11)), read_buff, SRAM_DIV_SIZE);
//    PRINTF("クリアー０x６０００〜０x６８００\n");
    ssSRAMWrite((void *)((int)SRAM_START_ADDR+(SRAM_DIV_SIZE*12)), read_buff, SRAM_DIV_SIZE);
//    PRINTF("クリアー０x６８００〜０x７０００\n");
    ssSRAMWrite((void *)((int)SRAM_START_ADDR+(SRAM_DIV_SIZE*13)), read_buff, SRAM_DIV_SIZE);
//    PRINTF("クリアー０x７０００〜０x７８００\n");
    ssSRAMWrite((void *)((int)SRAM_START_ADDR+(SRAM_DIV_SIZE*14)), read_buff, SRAM_DIV_SIZE);
//    PRINTF("クリアー０x７８００〜０x８０００\n");
    ssSRAMWrite((void *)((int)SRAM_START_ADDR+(SRAM_DIV_SIZE*15)), read_buff, SRAM_DIV_SIZE);
//    PRINTF("クリアー０x００００〜０x８０００\n");

    S_SOUND = 			/* ＳＯＵＮＤ ステレオ／モノラル／ヘッドホン／３Ｄ */
	Z_ATTENTION = 0;	/* Ｚ注目方法 ０：スイッチ／１：ホールド */
////////    J_N = read_buff[2] & 0x1;		/* ０：ＪＡＰＡＮ ／ １：ＮＥＳ */
//    COLOR_BLUE();
//    PRINTF("Na_SetSoundOutputMode = %d\n",NA_SOUT_STEREO + S_SOUND);
//    PRINTF("Na_SetSoundOutputMode = %d\n",NA_SOUT_STEREO + S_SOUND);
//    PRINTF("Na_SetSoundOutputMode = %d\n",NA_SOUT_STEREO + S_SOUND);
//    COLOR_NORMAL();
    Na_SetSoundOutputMode( NA_SOUT_STEREO + S_SOUND );	/* サウンド出力セット */
}
/************************************************************************
 *
 *	初期設定処理
 *			
 ************************************************************************/
static void En_Mag_Actor_ct(Actor *thisx, Game *game)
{
    En_Mag_Actor *this=(En_Mag_Actor *)thisx;
    Kanfont	*kanfont = (Kanfont *)&this->kanfont;
    (void *)game;

    YREG(1) = 63;
    YREG(3) = 80;
    YREG(4) = 255;
    YREG(5) =  30;
    YREG(6) =  30;
    YREG(7) = 119;
    YREG(8) = 7;
    YREG(9) = 5;
    YREG(10) = 3;
#define EFFECT_CT	40.0f
#define EFFECT_ALPHA	160
#define TITLE_ALPHA	210
#define SUB_ALPHA	200
    VREG(4) =  1;		// エフェクトフェードイン速度
    VREG(5) =  6;		// タイトルフェードイン速度
    VREG(6) =  2;		// サブタイトルフェードイン速度
    this->alpha_fdin =  6;		// "１９９７Ｎｉｎｔｅｎｄｏ" フェードイン速度
    this->alpha_fdout = 10;

    VREG(19) = 99;
    VREG(21) =  9;
    VREG(23) = 10;
    VREG(24) = 8;
#define	NO_ALPHA	26
#define YPOS		171
    this->scroll_y = 0;
    this->scroll_x = 0;



    this->effect_prim[0] = 0;
    this->effect_prim[1] = 100;
    this->effect_prim[2] = 170;
    this->effect_env[0] = 0;
    this->effect_env[1] = 100;
    this->effect_env[2] = 0;
    this->effect_rgb_ct = (short)EFFECT_CT;
    this->effect_rgb_fg =
	this->effect_prim_f =
	this->title_mode =		/* タイトルＭＯＤＥ */
	this->effect_alpha =		/* エフェクト アルファ値 */
	this->title_alpha =		/* タイトル アルファ値 */
	this->sub_alpha =		/* 日本語タイトル アルファ値 */
	this->copy_alpha = 0;		/* "１９９７Ｎｉｎｔｅｎｄｏ" アルファ値 */

    if ( Z_CK_FG ) {
	this->title_alpha = 210;
	this->sub_alpha = 255;
	this->copy_alpha = 255;
	
	this->effect_prim_f = 128.0f;
	this->effect_alpha = 255.0f;
#if defined(USE_NEW_DUNGEON)
	this->effect_prim[0] = 255.0f;
	this->effect_prim[1] = 170.0f;
	this->effect_prim[2] = 255.0f;
	this->effect_env[0] = 150.0f;
	this->effect_env[1] = 100.0f;
	this->effect_env[2] = 150.0f;
#else /* defined(USE_NEW_DUNGEON) */
	this->effect_prim[0] = 255.0f;
	this->effect_prim[1] = 255.0f;
	this->effect_prim[2] = 170.0f;
	this->effect_env[0] = 255.0f;
	this->effect_env[1] = 100.0f;
#endif /* defined(USE_NEW_DUNGEON) */
	
	Z_CK_FG = 0;
	this->title_mode = 2;
	check_time = 20;
	ZCommonSet( fade_speed, 1 );
	ZCommonSet( wipe_speed, 255 );
    }
    /* 文字フォント セット */
    kscope_kanfont_get( kanfont );


    /*
     *	ＳＲＡＭオールクリアー関係
     */
    this->key_point = 0;
    this->key_frame = 0;

    this->old_key = 0;
    this->key_wait = 0;
}

/************************************************************************
 *
 *	デストラクター
 *			
 ************************************************************************/
static void En_Mag_Actor_dt(Actor *thisx, Game *game)
{
(void *)thisx;
(void *)game;
}
/************************************************************************
 *
 *	ＳＲＡＭマニュアルＲＥＳＥＴ
 *			
 ************************************************************************/
static void Sram_manual_reset( Game_play *game_play, En_Mag_Actor *this )
{
    pad_t		*pad = &game_play->g.pads[2];


    /* ＳＲＡＭクリアー入力コマンド */
    static int key_input_data[] = {
	U_JPAD,			/* 十字（上）*/
	D_JPAD,			/* 十字（下）*/
	L_JPAD,			/* 十字（左）*/
	R_JPAD,			/* 十字（右）*/
	START_BUTTON,		/* スタートボタン */
	B_BUTTON,		/* Ｂボタン */
	D_CBUTTONS,		/* Ｃボタン（下）*/
	L_TRIG,			/* Ｌボタン */
	R_CBUTTONS,		/* Ｃボタン（右）*/
	L_CBUTTONS,		/* Ｃボタン（左）*/
	A_BUTTON,		/* Ａボタン */
	U_CBUTTONS,		/* Ｃボタン（上）*/
	R_TRIG,			/* Ｒボタン */
	Z_TRIG,			/* Ｚボタン */
    };
    int	wkey;

    wkey = Pad_button() & (U_JPAD | L_JPAD | R_JPAD | D_JPAD | START_BUTTON | A_BUTTON | B_BUTTON | L_TRIG | R_TRIG | Z_TRIG | U_CBUTTONS | D_CBUTTONS | L_CBUTTONS | R_CBUTTONS); 
    
    if ( wkey == this->old_key ) {
	if ( --(this->key_wait) < 0 ) {
	    this->key_wait = DEBUG_KEYWAIT_T;
	} else {
	    wkey ^= this->old_key;
	}
    } else {
	this->key_wait = DEBUG_KEYWAIT;
	this->old_key  = wkey;
    }
    if ( this->key_point < 4 ) {
//	PRINTF("???? (wkey=%x) key_point=%d\n", wkey, this->key_point );
	if ( wkey & key_input_data[this->key_point] ) this->key_point++;
	else {
	    if ( wkey ) {
		this->key_point = 0;
//		COLOR_YELLOW();
//		PRINTF("wkey=%x  →  this->key_point = 0\n",wkey);
//		COLOR_NORMAL();
	    }

	}
    } else {
//	PRINTF("!!!! (wkey=%x) key_point=%d\n", wkey, this->key_point );
	if ( Pad_on_trigger( key_input_data[this->key_point] ) ) this->key_point++;
	else {
	    if ( wkey ) {
		this->key_point = 0;
//		COLOR_RED();
//		PRINTF("wkey=%x  →  this->key_point = 0\n",wkey);
//		COLOR_NORMAL();
	    }
	}
    }
    if ( this->key_point == 14 ) {
	sram_manual_initialize( );
	this->key_point = 0;
    }
}

/************************************************************************
 *
 *	動作処理
 *			
 ************************************************************************/
static void En_Mag_Actor_move(Actor *thisx, Game *game)
{
    En_Mag_Actor 	*this = (En_Mag_Actor *)thisx;
    Game_play 		*game_play = (Game_play *)game;
    pad_t		*pad = &game_play->g.pads[0];


    /* ＳＲＡＭマニュアルＲＥＳＥＴ */
    Sram_manual_reset( game_play, this );


    if ( !NO_CONTROLLER ) {
	if ( this->title_mode <= 1 ) {
	    if ( Pad_on_trigger(START_BUTTON) || Pad_on_trigger(A_BUTTON) || Pad_on_trigger(B_BUTTON) ) {	/* 選択画面へ */
		Na_StartSystemSe(NA_SE_SY_PIECE_OF_HEART);
		this->title_alpha = 210;
		this->sub_alpha = 255;
		this->copy_alpha = 255;
		
		this->effect_prim_f = 128.0f;
		this->effect_alpha = 255.0f;
#if defined(USE_NEW_DUNGEON)
		this->effect_prim[0] = 255.0f;
		this->effect_prim[1] = 170.0f;
		this->effect_prim[2] = 255.0f;
		this->effect_env[0] = 150.0f;
		this->effect_env[1] = 100.0f;
		this->effect_env[2] = 150.0f;
#else /* defined(USE_NEW_DUNGEON) */
		this->effect_prim[0] = 255.0f;
		this->effect_prim[1] = 255.0f;
		this->effect_prim[2] = 170.0f;
		this->effect_env[0] = 255.0f;
		this->effect_env[1] = 100.0f;
#endif /* defined(USE_NEW_DUNGEON) */

		this->title_mode = 2;
		check_time = 20;
		ZCommonSet( fade_speed, 1 );
		ZCommonSet( wipe_speed, 255 );
	    }
	} else if ( this->title_mode >= 2 ) {	/* 選択画面へ */
	    if ( !check_time ) {
		if ( Pad_on_trigger(START_BUTTON) || Pad_on_trigger(A_BUTTON) || Pad_on_trigger(B_BUTTON) ) {	/* 選択画面へ */
		    if ( game_play->fade_direction != GAME_PLAY_FADE_OUT ) {
			/* サウンド  デモ状態終了通知	*/
			Na_ClearDemoSceneFlag();

			Na_StartSystemSe(NA_SE_SY_PIECE_OF_HEART);
			ZCommonSet(game_info.mode, GAME_INFO_OPENING_SELECT);
			game_play->fade_direction = GAME_PLAY_FADE_OUT;	/*フェードアウトセット*/
			WIPE_SET(2);
		    }
////////		ZCommonSet(scene_no, 0);
////////		game_play->g._doing = 0;
////////		game_set_next_game_name((Game *)game_play, file_choose);
		    this->alpha_fdin = 15;
		    this->alpha_fdout = 25;
		    this->title_mode = 3;
		}
	    } else check_time--;
# if 0
	} else if ( Pad_on_trigger(B_BUTTON) ) {
	    ZCommonSet(scene_no, 0);
	    game_play->g._doing = 0;
	    game_set_next_game_name((Game *)game_play, file_choose);
# endif
	}
    }
    if ( this->title_mode == 1 ) {
	if ( !this->effect_rgb_fg ) {
	    this->effect_prim_f += (32.0f/EFFECT_CT);
	    this->effect_alpha += (255.0f/EFFECT_CT);
#if defined(USE_NEW_DUNGEON)
	    this->effect_prim[0] += (255.0f/EFFECT_CT);
	    this->effect_prim[1] += ((255.0f-100.0f)/EFFECT_CT);
	    this->effect_prim[2] += ((255.0f-170.0f)/EFFECT_CT);
	    this->effect_env[0] += (255.0f/EFFECT_CT);
	    this->effect_env[1] += ((255.0f-100.0f)/EFFECT_CT);
#else /* defined(USE_NEW_DUNGEON) */
	    this->effect_prim[0] += (255.0f/EFFECT_CT);
	    this->effect_prim[1] += ((255.0f-100.0f)/EFFECT_CT);
	    this->effect_prim[2] += ((255.0f-170.0f)/EFFECT_CT);
	    this->effect_env[0] += (255.0f/EFFECT_CT);
	    this->effect_env[1] += ((255.0f-100.0f)/EFFECT_CT);
#endif /* defined(USE_NEW_DUNGEON) */
	    if ( !(--this->effect_rgb_ct) ) {
		this->effect_prim_f = 32.0f;
		this->effect_alpha = 255.0f;
		this->effect_prim[0] = 255.0f;
		this->effect_prim[1] = 255.0f;
		this->effect_prim[2] = 255.0f;
		this->effect_env[0] = 255.0f;
		this->effect_env[1] = 255.0f;
		this->effect_rgb_ct = (short)EFFECT_CT;
		this->effect_rgb_fg = 1;
	    }
////////	    PRINTF("０ prim[0]=%f,prim[1]=%f,prim[2]=%f  env[0]=%f,env[1]=%f  prim_f=%f  effect_alpha=%f\n",this->effect_prim[0],this->effect_prim[1],this->effect_prim[2],this->effect_env[0],this->effect_env[1],this->effect_prim_f,this->effect_alpha);
	} else if ( this->effect_rgb_fg == 1 ) {
	    this->effect_prim_f += ((128.0f-32.0f)/EFFECT_CT);
#if defined(USE_NEW_DUNGEON)
	    this->effect_prim[1] += ((170.0f-255.0f)/EFFECT_CT);
	    this->effect_env[0] += ((150.0f-255.0f)/EFFECT_CT);
	    this->effect_env[1] += ((100.0f-255.0f)/EFFECT_CT);
	    this->effect_env[2] += ((150.0f-  0.0f)/EFFECT_CT);
#else /* defined(USE_NEW_DUNGEON) */
	    this->effect_prim[2] += ((170.0f-255.0f)/EFFECT_CT);
	    this->effect_env[1] += ((100.0f-255.0f)/EFFECT_CT);
#endif /* defined(USE_NEW_DUNGEON) */
	    if ( !(--this->effect_rgb_ct) ) {
		this->effect_prim_f = 128.0f;
#if defined(USE_NEW_DUNGEON)
		this->effect_prim[1] = 170.0f;
		this->effect_env[0] = 150.0f;
		this->effect_env[1] = 100.0f;
		this->effect_env[2] = 150.0f;
#else /* defined(USE_NEW_DUNGEON) */
		this->effect_prim[2] = 170.0f;
		this->effect_env[1] = 100.0f;
#endif /* defined(USE_NEW_DUNGEON) */
		this->effect_rgb_ct = 32.0f;
		this->effect_rgb_fg = 2.0f;
	    }
////////	    PRINTF("１ prim[0]=%f,prim[1]=%f,prim[2]=%f  env[0]=%f,env[1]=%f  prim_f=%f  effect_alpha=%f\n",this->effect_prim[0],this->effect_prim[1],this->effect_prim[2],this->effect_env[0],this->effect_env[1],this->effect_prim_f,this->effect_alpha);
	}
	if ( this->effect_alpha > EFFECT_ALPHA ) {	
	    if ( (this->title_alpha += VREG(5)) >= 210.0f ) this->title_alpha = 210.0f;	/* タイトル フェードイン */
	    if ( this->title_alpha >= TITLE_ALPHA ) {
		if ( (this->sub_alpha += VREG(6)) >= 255.0f ) this->sub_alpha = 255.0f;	/* 日本語タイトル フェードイン */
		if ( this->sub_alpha >= SUB_ALPHA ) {
		    if ( (this->copy_alpha += this->alpha_fdin) >= 255.0f ) {	/* "１９９７Ｎｉｎｔｅｎｄｏ" フェードイン */
			this->copy_alpha = 255.0f;
			this->title_mode = 2;
			check_time = 20;
		    }
		}
	    }
	}
    } else if ( this->title_mode == 3 ) {
	if ( (this->effect_alpha -= this->alpha_fdout) < 0 ) this->effect_alpha = 0;
	if ( (this->title_alpha -= this->alpha_fdout) < 0 ) this->title_alpha = 0;
	if ( (this->sub_alpha -= this->alpha_fdout) < 0 ) this->sub_alpha = 0;
	if ( (this->copy_alpha -= this->alpha_fdin) < 0 ) {
	    this->copy_alpha = 0;
	    this->title_mode = 4;
	}
# if 0
	if ( !this->copy_alpha ) {
	    if ( !this->sub_alpha ) {
		if ( !this->title_alpha ) {
		    if ( !this->effect_alpha ) {
		    } else if ( (this->effect_alpha -= this->alpha_fdout) < 0 ) {
			this->effect_alpha = 0;
			this->title_mode = 0;
		    }
		} else if ( (this->title_alpha -= VREG(5)) < 0 ) this->title_alpha = 0;
	    } else if ( (this->sub_alpha -= VREG(6)) < 0 ) this->sub_alpha = 0;
	} else if ( (this->copy_alpha -= this->alpha_fdin) < 0 ) this->copy_alpha = 0;
# endif
    }


    if ( !this->title_mode ) {
	if( eventbit_check( game_play, 3 ) ) {    /* 表示 指令 */
	    this->effect_rgb_ct = 40.0f;
	    this->title_mode = 1;
	}
    } else if ( this->title_mode == 2 ) {
	if( eventbit_check( game_play, 4 ) )    /* 消去 指令 */
	    this->title_mode = 3;
    }
//    PRINTF("P_R=%f, P_G=%f, P_B=%f   E_P=%f, E_G=%f, E_B=%f  P_F=%f  P_A=%f\n",this->effect_prim[0],this->effect_prim[1],this->effect_prim[2],this->effect_env[0],this->effect_env[1],this->effect_env[2],this->effect_prim_f,this->effect_alpha);
}

/************************************************************************
 *
 *	表示処理
 *		
 ************************************************************************/
/*===============================================================
  =	（Ｉ／８）Ｔｅｃｔｕｒｅ＿Ｒｅｃｔａｎｇｌｅ		=
  ===============================================================*/
static Gfx
*texture_rectangleI8( Gfx **glistp, void *timg,
		       short width, short height,
		       short xpos,  short ypos,
		       short xsize, short ysize,
		       unshort xscale, unshort yscale )
{
    Gfx 		*gp = *glistp;

    gDPLoadTextureBlock( gp++,
			 timg, G_IM_FMT_I, G_IM_SIZ_8b,
			 width, height, 0,
			 G_TX_NOMIRROR, G_TX_NOMIRROR,
			 G_TX_NOMASK,   G_TX_NOMASK,
			 G_TX_NOLOD,    G_TX_NOLOD );
    gSPTextureRectangle( gp++,
			 ((xpos) * 0x4), ((ypos) * 0x4),
			 ((xpos + xsize) * 0x4), ((ypos + ysize) * 0x4),
			 G_TX_RENDERTILE, 0, 0, xscale, yscale );

    *glistp = gp;
}
/*===============================================================================
  =	（Ｉ/４＆ＩＡ/８）Ｔｅｃｔｕｒｅ＿Ｍｕｌｔｉ＿Ｒｅｃｔａｎｇｌｅ	=
  ===============================================================================*/
static Gfx
*texture_multi_rectangle( Gfx **glistp, void *timg1, void *timg2,
			  short width1, short height1,
			  short width2, short height2,
			  short xpos,  short ypos,
			  short xsize, short ysize,
			  unshort xscale, unshort yscale,
			  unshort xscale2, unshort yscale2,
			  unshort flag, En_Mag_Actor *this )
{
    Gfx 		*gp = *glistp;

    gDPLoadMultiBlock_4b( gp++,
			  timg1, 0, G_TX_RENDERTILE,
			  G_IM_FMT_I, width1, height1, 0,
			  G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR,
			  G_TX_NOMASK, G_TX_NOMASK,
			  G_TX_NOLOD, G_TX_NOLOD );
    if ( !flag ) {
	gDPLoadMultiBlock( gp++,
			   timg2, 256, G_TX_RENDERTILE+1,
			   G_IM_FMT_I, G_IM_SIZ_8b, width2, height2, 0,
			   G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR,
			   G_TX_NOMASK, 5,
			   xscale2, yscale2 );
	gDPSetTileSize( gp++, G_TX_RENDERTILE+1, 0,  this->scroll_y&0x7f, 31<<2, (this->scroll_y&0x7f) + (31<<2) );
    }
    gSPTextureRectangle( gp++,
			 ((xpos) * 0x4), ((ypos) * 0x4),
			 ((xpos + xsize) * 0x4), ((ypos + ysize) * 0x4),
			 G_TX_RENDERTILE, 0, 0, xscale, yscale );

    *glistp = gp;
}



/*=======================================================================
  =	ＲＧＢＡテクスチャ─ セット【３２ビット用】			=
  =======================================================================*/
static void
display_rgba32b ( Gfx **glistp, short cx, short cy, unchar *addr, unint sizex, unint sizey )
{
    Gfx 		*gp = *glistp;

    int		i, cnt, sx, sy;
    int		cuty, size, amari, texsize;
    unchar	*imageaddr;


    /* モード設定 */
    gp_overlay_rgba32texture( &gp );

    imageaddr = addr;

////    PRINTF("\n=============(%3d)==(%3d)====================\n",sizex,sizey);
    size    = (int)(sizex*sizey*4);
    sx      = cx - (int)(sizex/2);
    sy      = cy - (int)(sizey/2);
    cuty    = (int)(4096/(sizex*4));
    texsize = (int)sizex*cuty*4;
    
    cnt     = (int)size/texsize;
    amari   = size%texsize;
    if (amari) cnt++;
////    PRINTF("size=%d, cuty=%d, texsize=%d, shou=%d, amari=%d cnt=%d\n",size,cuty,texsize,shou,amari,cnt);
    

    gDPSetImageTile (gp++,G_IM_FMT_RGBA,G_IM_SIZ_32b,
		     0,0,(sizex-1),(cuty-1),0,
		     G_TX_NOMIRROR| G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP,
		     G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    
    size -= texsize;

    for	( i =0; i< cnt; i++ ) {
////	PRINTF("size=%d    ",size);
	gDPSetTextureImage(gp++,G_IM_FMT_RGBA,G_IM_SIZ_32b,sizex,imageaddr);
	gDPLoadSync(gp++);
	gDPLoadTile(gp++, G_TX_LOADTILE,
		    0,
		    0,
		    (sizex-1)<<G_TEXTURE_IMAGE_FRAC,
		    (cuty-1)<<G_TEXTURE_IMAGE_FRAC);
	
	gSPTextureRectangle ( gp++, sx<<2, sy<<2,
			     (sx+(int)sizex)<<2, (sy+(int)cuty)<<2,
			     0, 0<<5, 0<<5, 1<<10, 1<<10 );
	

	imageaddr += texsize;
	sy        += cuty;

////	PRINTF("size-texsize=%d\n",size-texsize);
	if (size-texsize < 0){
	    if (size > 0){
		cuty  = size/(int)(sizex*4);
		size -= texsize;
////		PRINTF("cuty=%d,  size=%d\n",cuty,size);
		gDPSetImageTile ( gp++, G_IM_FMT_RGBA, G_IM_SIZ_32b,
				  0,0,(sizex-1),(cuty-1),0,
				  G_TX_NOMIRROR| G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP,
				  G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
	    }      	
	}      	
	else 	size -= texsize;
	
    }
    *glistp = gp;
}


#if defined(USE_N64DD)
/*----------------------------------------------------------------------*/
/*									*/
/*----------------------------------------------------------------------*/
static void display_64DD( Gfx **glistp, short cx, short cy, unsigned int alpha )
{
    if ( n64dd_isInitialized() && n64dd_isInMedium() ) {
	Gfx		*g = *glistp;
	unsigned int	x1, y1, x2, y2;	

	gDPPipeSync( g++ );
	gDPSetCycleType( g++, G_CYC_1CYCLE );
	x1 = ( cx + 64 ) << 2;
	y1 = ( cy + 5 ) << 2;
	x2 = x1 + ( 48 << 2 );
	y2 = y1 + ( 16 << 2 );
	gDPSetRenderMode( g++, G_RM_XLU_SURF, G_RM_XLU_SURF2 );
	gDPSetCombineLERP(
		g++,
		PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT,
		TEXEL0, 0, PRIMITIVE, 0,
		PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT,
		TEXEL0, 0, PRIMITIVE, 0
	);
	gDPSetPrimColor( g++, 0, 0, 255, 255, 255, alpha );
	gDPSetEnvColor( g++, 48, 36, 146, 255 );
	gDPLoadTextureBlock( g++, g_dd_txt, G_IM_FMT_IA, G_IM_SIZ_8b, 48, 16, 0,
			     G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR,
			     G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD );
	gSPTextureRectangle( g++, x1, y1, x2, y2,
			     G_TX_RENDERTILE, 0, 0, 1 << 10, 1 << 10 );

	gDPPipeSync( g++ );
	gDPSetCycleType( g++, G_CYC_2CYCLE );
	*glistp = g;
    }
}
#endif /* defined(USE_N64DD) */


unsigned char press_txt[] = {
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x08,0x80,0x00,0x08,0x85,0x00,0x00,
    0x00,0x0f,0xf0,0x00,0x0f,0xf8,0x00,0x00,
    0x00,0x0f,0xf0,0xff,0x78,0x88,0xef,0x60,
    0x02,0x8f,0xf8,0xff,0x50,0x01,0xaf,0x80,
    0x00,0x0f,0xf0,0xaf,0xc0,0x05,0xfe,0x50,
    0x00,0x0f,0xf0,0xaf,0xe8,0x8a,0xfe,0x70,
    0x00,0x0f,0xf1,0x7f,0xc0,0x05,0xfc,0x00,
    0x02,0x8f,0xf8,0x5f,0xc0,0x05,0xfc,0x00,
    0x01,0x5f,0xf0,0x2f,0xf7,0x1d,0xf9,0x00,
    0x00,0x0f,0xf0,0x07,0xff,0xef,0xd1,0x00,
    0x00,0x0f,0xf0,0x00,0x7f,0xfc,0x10,0x00,
    0x00,0x1f,0xf0,0x04,0xdf,0xff,0x70,0x00,
    0x02,0xdf,0xf0,0x6f,0xf7,0x4f,0xf9,0x00,
    0x00,0x58,0x62,0x87,0x20,0x02,0x78,0x50,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};

/*===============================================================
  =	文字テクスチャ─表示					=
 ===============================================================*/
static void
moji_display( Gfx **glistp, unchar *data, int xpos, int ypos )
{
    Gfx 		*gp = *glistp;

    YREG(0) = ((int)(1024.0f / ((float)YREG(1)/100.0f)));
    YREG(2) = ((int)(16.0f * ((float)YREG(1)/100.0f)));
    
    gDPLoadTextureBlock_4b ( gp++,
			     data, G_IM_FMT_I, 16, 16, 0,
			     G_TX_CLAMP, G_TX_CLAMP,
			     G_TX_NOMASK, G_TX_NOMASK,
			     G_TX_NOLOD, G_TX_NOLOD);
    gSPTextureRectangle( gp++,
			 xpos << 2, ypos << 2,
			 (xpos + YREG(2)) << 2, (ypos + YREG(2)) << 2,
			 G_TX_RENDERTILE, 0, 0, YREG(0), YREG(0) );
    *glistp = gp;
}






/*===============================================================================
  =================================  タイトル   =================================
  ===============================================================================*/

/*
 *
 */

static void En_Mag_Actor_draw_Sub( Actor *thisx, Game *game, Gfx **glistp )
{	
    En_Mag_Actor *this=(En_Mag_Actor *)thisx;
    Game_play *game_play=(Game_play *)game;
    Kanfont	*kanfont = (Kanfont *)&this->kanfont;

    Gfx 		*gp = *glistp;


    unshort	i, j, k, xpos, ypos;
    static short	no_alpha = 0;
    static short	no_alpha_mode = 0;
    static short	no_alpha_ct = 0;
    static unchar no_controller[] = {
	AAN, AAO, AAC, AAO, AAN, AAT, AAR, AAO, AAL, AAL, AAE, AAR,
    };
#ifdef CHINA
    static unchar press_start[] = {
	AAS, AAT, AAA, AAR, AAT,
    };
#else
    static unchar press_start[] = {
	AAP, AAR, AAE, AAS, AAS, AAS, AAT, AAA, AAR, AAT,
    };
#endif
    static unchar *g_title_efc_txt_data[] = {
	g_title_efc_1_txt, g_title_efc_2_txt, g_title_efc_3_txt,
	g_title_efc_4_txt, g_title_efc_5_txt, g_title_efc_6_txt,
	g_title_efc_7_txt, g_title_efc_8_txt, g_title_efc_9_txt,
    };


    gSPSegment( gp++,
		GAMEPLAY_OBJECT_EXCHANGE_SEGMENT,
		game_play->object_exchange.status[thisx->bank_ID].Segment);
    /*
     * タイトル表示
     */
    gp_overlay_rectangle_a_prim( &gp );
    /* ロゴ本体を覆う光のエフェクト */
#define G_CC_INT550	TEXEL1, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, TEXEL1, 1, PRIM_LOD_FRAC, TEXEL0
#define G_CC_INT551	PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0
    this->scroll_y -= 2;
    gDPSetCycleType( gp++, G_CYC_2CYCLE );
    gDPSetAlphaCompare( gp++, G_AC_THRESHOLD );
    gDPSetRenderMode( gp++, G_RM_PASS, G_RM_CLD_SURF2 );
    gDPSetCombineMode( gp++, G_CC_INT550, G_CC_INT551 );
    gDPSetPrimColor( gp++, 0, (short)this->effect_prim_f,
		     (short)this->effect_prim[0],
		     (short)this->effect_prim[1],
		     (short)this->effect_prim[2],
		     (short)this->effect_alpha );
    gDPSetEnvColor( gp++,
		    (short)this->effect_env[0],
		    (short)this->effect_env[1],
		    (short)this->effect_env[2],
		    255 );
    if ( (short)this->effect_prim_f ) {
	for ( i = k = 0, ypos = 0; i < 3; i++ ) {
	    for ( j = 0, xpos = 64; j < 3; j++, k++, xpos += 64 ) {
		texture_multi_rectangle( &gp,
					 g_title_efc_txt_data[k],
					 g_title_mable_txt,
					 64, 64,
					 32, 32,
					 xpos, ypos,
					 64, 64,
					 1 << 10, 1 << 10,
					 1, 1,
					 k,this );
	    }
	    ypos += 64;
	}
    }
    
    /* 剣と盾、『ZELDA』 */
//    gDPPipeSync( gp++ );
    gDPSetPrimColor( gp++, 0, 0, 255, 255, 255, (short)this->title_alpha );
    if ( (short)this->title_alpha ) {
#if defined(USE_NEW_DUNGEON)
	display_rgba32b ( &gp, 160, 100, g_title_ura_txt, 160, 160 );
#else /* defined(USE_NEW_DUNGEON) */
	display_rgba32b ( &gp, 160, 100, g_title_txt, 160, 160 );
#endif /* defined(USE_NEW_DUNGEON) */
#if defined(USE_N64DD)
	display_64DD ( &gp, 160, 100, (unsigned int)this->title_alpha );
#endif /* defined(USE_N64DD) */
    }
    
    gp_overlay_rectangle_a_prim( &gp );
    /* サブタイトルの影 */
    gDPPipeSync( gp++ );
    gDPSetAlphaCompare( gp++, G_AC_NONE );
    gDPSetCombineMode( gp++, G_CC_INT9, G_CC_INT9 );
    if ( (short)this->title_alpha < 100 ) {
	gDPSetRenderMode( gp++, G_RM_CLD_SURF, G_RM_CLD_SURF2 );
    } else {
	gDPSetRenderMode( gp++, G_RM_XLU_SURF, G_RM_XLU_SURF2 );
    }
    gDPSetPrimColor( gp++, 0, 0, 0, 0, 0, (short)this->title_alpha );
    gDPSetEnvColor( gp++, 100, 0, 100, 255 );
    if ( (short)this->title_alpha ) {
	texture_rectangleI8( &gp, g_title_sub_1_txt,
			     72, 8,
			     154, 73,
			     72, 8,
			     1 << 10, 1 << 10 );
	texture_rectangleI8( &gp, g_title_sub_2_txt,
			     96, 8,
			     152, 127,
			     96, 8,
			     1 << 10, 1 << 10 );
	/* サブタイトル */
	gDPPipeSync( gp++ );
#if defined(USE_NEW_DUNGEON)
	gDPSetPrimColor( gp++, 0, 0, 200, 150, 200, (short)this->title_alpha );
	gDPSetEnvColor( gp++, 100, 50, 100, 255 );
#else /* defined(USE_NEW_DUNGEON) */
	gDPSetPrimColor( gp++, 0, 0, 200, 200, 150, (short)this->title_alpha );
	gDPSetEnvColor( gp++, 100, 100, 50, 255 );
#endif /* defined(USE_NEW_DUNGEON) */
	texture_rectangleI8( &gp, g_title_sub_1_txt,
			     72, 8,
			     154-1, 73-1,
			     72, 8,
			     1 << 10, 1 << 10 );
	texture_rectangleI8( &gp, g_title_sub_2_txt,
			     96, 8,
			     152-1, 127-1,
			     96, 8,
			     1 << 10, 1 << 10 );
    }
#if defined(PAL_VERSION)
#else
#ifdef CHINA
    if (1)
#else
    if ( !J_N )
#endif
    {
#define G_CC_INT552	TEXEL1, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, 0, 0, 0, TEXEL0
#define G_CC_INT553	PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0
	this->scroll_x += 1;
	gDPPipeSync( gp++ );
	gDPSetCycleType( gp++, G_CYC_2CYCLE );
	if ( (short)this->sub_alpha < 100 ) {
	    gDPSetRenderMode( gp++, G_RM_PASS, G_RM_CLD_SURF2 );
	} else {
	    gDPSetRenderMode( gp++, G_RM_PASS, G_RM_XLU_SURF2 );
	}
	gDPSetCombineMode( gp++, G_CC_INT552, G_CC_INT553 );
#if defined(USE_NEW_DUNGEON)
	gDPSetPrimColor( gp++, 0, 128, 255, 170, 255, (short)this->sub_alpha );
	gDPSetEnvColor( gp++, 0, 150, 200, 255 );
#else /* defined(USE_NEW_DUNGEON) */
	gDPSetPrimColor( gp++, 0, 128, 255, 255, 170, (short)this->sub_alpha );
	gDPSetEnvColor( gp++, 255, 150,   0, 255 );
#endif /* defined(USE_NEW_DUNGEON) */
	if ( (short)this->sub_alpha ) {
	    gDPLoadMultiBlock( gp++,
			       g_title_sub_j_txt, 0, G_TX_RENDERTILE,
			       G_IM_FMT_I, G_IM_SIZ_8b, 128, 16, 0,
			       G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR,
			       G_TX_NOMASK, G_TX_NOMASK,
			       G_TX_NOLOD, G_TX_NOLOD );
	    gDPLoadMultiBlock( gp++,
			       g_title_mable_txt, 256, G_TX_RENDERTILE+1,
			       G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0,
			       G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR,
			       5, 5,
			       2, 1 );
	    gDPSetTileSize( gp++, G_TX_RENDERTILE+1, this->scroll_x&0x7f,  this->scroll_y&0x7f, (this->scroll_x&0x7f) + (31<<2), (this->scroll_y&0x7f) + (31<<2) );
	    gSPTextureRectangle( gp++,
				 (106 * 0x4), (144 * 0x4),
				 ((106 + 128) * 0x4), ((144 + 16) * 0x4),
				 G_TX_RENDERTILE, 0, 0, 1 << 10, 1 << 10 );
	}
    }
#endif
    /* １９９７Ｎｉｎｔｅｎｄｏ */
    gp_overlay_rectangle_a_prim( &gp );
    gDPSetAlphaCompare( gp++, G_AC_NONE );
#define  G_CC_INT444	0, 0, 0, TEXEL0, TEXEL0, 0, PRIMITIVE, 0
    gDPSetCombineMode( gp++, G_CC_INT3, G_CC_INT3 );
////////    gDPSetPrimColor( gp++, 0, 0, 255, 255, 255, (short)this->copy_alpha );
    gDPSetPrimColor( gp++, 0, 0, (short)this->copy_alpha, (short)this->copy_alpha, (short)this->copy_alpha, (short)this->copy_alpha );
    if ( (short)this->copy_alpha ) {
#if defined(USE_NEW_DUNGEON)
	gDPLoadTextureBlock ( gp++,
			      g_title_cpr_ura_txt, G_IM_FMT_IA, G_IM_SIZ_8b, 128, 16, 0,
			      G_TX_CLAMP, G_TX_CLAMP,
			      G_TX_NOMASK, G_TX_NOMASK,
			      G_TX_NOLOD, G_TX_NOLOD);
#else /* defined(USE_NEW_DUNGEON) */
#ifdef CHINA
	gDPLoadTextureBlock ( gp++,
			      g_title_cpr_txt, G_IM_FMT_IA, G_IM_SIZ_8b, 128, 32, 0,
			      G_TX_CLAMP, G_TX_CLAMP,
			      G_TX_NOMASK, G_TX_NOMASK,
			      G_TX_NOLOD, G_TX_NOLOD);
#else
	gDPLoadTextureBlock ( gp++,
			      g_title_cpr_txt, G_IM_FMT_IA, G_IM_SIZ_8b, 128, 16, 0,
			      G_TX_CLAMP, G_TX_CLAMP,
			      G_TX_NOMASK, G_TX_NOMASK,
			      G_TX_NOLOD, G_TX_NOLOD);
#endif
#endif /* defined(USE_NEW_DUNGEON) */
#ifdef CHINA
	gSPTextureRectangle( gp++,
			     94 << 2, 198 << 2,
			 (94 + 128) << 2, (198 + 32) << 2,
			     G_TX_RENDERTILE, 0, 0, 1 <<10, 1 << 10 );
#else
	gSPTextureRectangle( gp++,
			     94 << 2, 198 << 2,
			 (94 + 128) << 2, (198 + 16) << 2,
			     G_TX_RENDERTILE, 0, 0, 1 <<10, 1 << 10 );
#endif
    }
    
    if ( NO_CONTROLLER ) {
	no_alpha = (260/NO_ALPHA) * no_alpha_ct;
	if ( no_alpha >= 255 ) no_alpha = 255;
	gDPPipeSync( gp++ );
	gDPSetCombineMode( gp++, G_CC_INT4, G_CC_INT4 );
	gDPSetPrimColor( gp++, 0, 0,   0,   0,   0, no_alpha );
	xpos = VREG(19) + 1;
	for ( i = 0; i < 12; i++ ) {
	    moji_display( &gp, ((unchar *)kanfont->kbuffer4)+(BUF_CT*no_controller[i]), xpos, YPOS+1+YREG(10) );
	    xpos += VREG(21);
	    if ( i == 1 ) xpos += VREG(23);
	}
	gDPPipeSync( gp++ );
	gDPSetPrimColor( gp++, 0, 0, 100, 255, 255, no_alpha );
	xpos = VREG(19);
	for ( i = 0; i < 12; i++ ) {
	    moji_display( &gp, ((unchar *)kanfont->kbuffer4)+(BUF_CT*no_controller[i]), xpos, YPOS+YREG(10) );
	    xpos += VREG(21);
	    if ( i == 1 ) xpos += VREG(23);
	}
    } else {
	if ( this->copy_alpha >= 200 ) {
	    no_alpha = (260/NO_ALPHA) * no_alpha_ct;
	    if ( no_alpha >= 255 ) no_alpha = 255;
	    gDPPipeSync( gp++ );
	    gDPSetCombineMode( gp++, G_CC_INT4, G_CC_INT4 );
	    gDPSetPrimColor( gp++, 0, 0,   0,   0,   0, no_alpha );
	    xpos = YREG(7) + 1;
#ifdef CHINA
            xpos += YREG(8)*2;
            moji_display(&gp, press_txt, xpos, YPOS+1+YREG(10));
            xpos += YREG(9) + YREG(8);
#endif
	    for ( i = 0; i < sizeof(press_start)/sizeof(press_start[0]); i++ ) {
		moji_display( &gp, ((unchar *)kanfont->kbuffer4)+(BUF_CT*press_start[i]), xpos, YPOS+1+YREG(10) );
		xpos += YREG(8);
#ifndef CHINA
		if ( i == 4 ) xpos += YREG(9);
#endif
	    }
	    gDPPipeSync( gp++ );
	    gDPSetPrimColor( gp++, 0, 0, YREG(4), YREG(5), YREG(6), no_alpha );
	    xpos = YREG(7);
#ifdef CHINA
            xpos += YREG(8)*2;
            moji_display(&gp, press_txt, xpos, YPOS+YREG(10));
            xpos += YREG(9) + YREG(8);
#endif
	    for ( i = 0; i < sizeof(press_start)/sizeof(press_start[0]); i++ ) {
		moji_display( &gp, ((unchar *)kanfont->kbuffer4)+(BUF_CT*press_start[i]), xpos, YPOS+YREG(10) );
		xpos += YREG(8);
#ifndef CHINA
		if ( i == 4 ) xpos += YREG(9);
#endif
	    }
	}
    }
    if ( no_alpha_mode ) {
	if ( !(--no_alpha_ct) ) no_alpha_mode = 0;
    } else {
	if ( (++no_alpha_ct) >= NO_ALPHA ) no_alpha_mode = 1;
    }

    *glistp = gp;
}
/************************************************************************
 *									*
 *	メッセージＤＲＡＷ						*
 *									*
 ************************************************************************/
static void En_Mag_Actor_draw(Actor *thisx, Game *game)
{	
    Game_play *game_play=(Game_play *)game;
    Gfx *glistp, *glistp_save;


    OPEN_DISP( game_play->g.graph );

    glistp = gfxopen( glistp_save = NOW_DISP );
    gSPDisplayList( NEXT_OVERLAY_DISP, glistp );
    En_Mag_Actor_draw_Sub( thisx, game, &glistp );

    gSPEndDisplayList( glistp++ );
    gfxclose( glistp_save, glistp );
    SET_NOW_DISP( glistp );

    CLOSE_DISP( game_play->g.graph );
}
