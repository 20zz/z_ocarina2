/* $Id: z_file_copy_del.c,v 1.2 2003/03/14 02:53:56 tong Exp $
 *
 * ファイル選択処理『ファイル（ＣＯＰＹ／ＥＲＡＳＥ）』
 *
 * $Log: z_file_copy_del.c,v $
 * Revision 1.2  2003/03/14 02:53:56  tong
 * more source from Nintendo including cheat obj code.
 *
 * Revision 2.2  1998/11/06  03:06:48  soejima
 * コメント
 *
 * Revision 2.1  1998-10-22 21:17:25+09  zelda
 * ＲＯＭ出しバージョン(NTSC)
 *
 * Revision 1.41  1998/10/14 02:10:18  soejima
 * *** empty log message ***
 *
 * Revision 1.40  1998-10-13 23:06:45+09  soejima
 * *** empty log message ***
 *
 * Revision 1.39  1998-10-13 22:59:36+09  soejima
 * *** empty log message ***
 *
 * Revision 1.38  1998-10-12 23:02:35+09  soejima
 * *** empty log message ***
 *
 * Revision 1.37  1998-10-06 23:07:56+09  soejima
 * *** empty log message ***
 *
 * Revision 1.36  1998-10-05 23:01:10+09  soejima
 * *** empty log message ***
 *
 * Revision 1.1  1997/07/31  09:57:11  soejima
 * Initial revision
 * $Log追加
 * */


/************************************************************************
 *									*
 *	名前登録処理 ＭＡＩＮ						*
 *				1997年04月15日(火曜日) 14時00分00秒 JST *
 ************************************************************************/
#include "z_basic.h"

#include "z_file_choose.h"
#include "z_file_choose_h.h"
#include "z_file_choose_data.h"
#include "z_file_copy_del.h"
#include "z_file_nameset.h"
#include "z_kaleido_moji.h"
#include "z_define1.h"
#include "z_sram.h"
#include "z_sram_h.h"



/*
 * this->file_alpha[0] : ファイル１
 * this->file_alpha[1] : ファイル２
 * this->file_alpha[2] : ファイル３
 * this->decision_alpha[0] : 拡張決定プレート１
 * this->decision_alpha[1] : 拡張決定プレート２
 * this->decision_alpha[2] : 拡張決定プレート３
 * this->plate_alpha[0] : 名前プレート１
 * this->plate_alpha[1] : 名前プレート２
 * this->plate_alpha[2] : 名前プレート３
 * this->name_alpha[0] : 名前１
 * this->name_alpha[1] : 名前２
 * this->name_alpha[2] : 名前３
 * this->connect_alpha[0] : コネクタ１
 * this->connect_alpha[1] : コネクタ２
 * this->connect_alpha[2] : コネクタ３
 * this->panel_alpha[0] : コピー
 * this->panel_alpha[1] : 消す
 * this->panel_alpha[2] : はい
 * this->panel_alpha[3] : やめる
 * this->option_alpha   : オプション
 */



/* ＳＴＡＲＴ─ＣＬＥＡＲ */
extern void
sram_start_clear( Game_file_choose *this, Sram *sram );
/* ＳＴＡＲＴ─ＣＯＰＹ */
extern void
sram_start_copy( Game_file_choose *this, Sram *sram );




static short	move_ypd[] = {
    -48, -48, -48, -24, -24,
};
static short	move_ypd0[][3] = {
    {   0, -48, -48, },
    { -64,  16, -48, },
    { -64, -64,  32, },
};


static short wait_frame = 15;




/*=======================================================================
  =	ＣＯＰＹ（イニシャル ＆ 移動）					=
  =======================================================================*/
extern void
menu_copy_init( Game *thisx )
{
    Game_file_choose	*this = (Game_file_choose *)thisx;


    short	i, k;


    for ( i = 0; i < 5; i++ ) {
        short *s = this->cpdl_yp;
	k = (ABS(s[i] - move_ypd[i])) / this->cpdl_mct;
	if ( s[i] >= move_ypd[i] ) {
            s[i] -= k;
        } else {
            s[i] += k;
        }
    }
    
    this->panel_alpha[0] -= B_A_CT;
    this->panel_alpha[1] -= B_A_CT;
    this->option_alpha -= B_A_CT;
    this->panel_alpha[3] += B_A_CT;
    this->frame_title_alpha[0] -= F_A_CT;
    this->frame_title_alpha[1] += F_A_CT;
    
    if ( !(--this->cpdl_mct) ) {
	this->cpdl_mct = FRAME_CT;
	this->panel_alpha[0] =
	    this->panel_alpha[1] =
	    this->option_alpha = 0;
	this->panel_alpha[3] = BASE_ALPHA;
	this->title_no0 = this->title_no1;
	this->frame_title_alpha[0] = FRAME_ALPHA;
	this->frame_title_alpha[1] = 0;
	this->no = 3;		/* カーソル位置『やめる』*/
	this->menu_pos++;
    }
}


/*=======================================================================
  =	ＣＯＰＹ（どれをコピーしますか？）				=
  =======================================================================*/
extern void
menu_copy_which( Game *thisx )
{
    Game_file_choose	*this = (Game_file_choose *)thisx;

    Sram	*sram = (Sram *)&this->sram;

    pad_t	*pad = &this->g.pads[0];


    if ( (this->no == 3 && (Pad_trigger() & (START_BUTTON | A_BUTTON))) || Pad_on_trigger(B_BUTTON) ) {
	this->cpdl_mct = FRAME_CT;
	this->no = 3;
	this->title_no1 = 0;
	this->menu_pos = Menu_Copy_R;
	this->caution_no = -1;
	Na_StartSystemSe(NA_SE_SY_FSEL_CANCEL);
    } else if ( Pad_trigger() & (START_BUTTON | A_BUTTON) ) {
	if ( REGCK_ALL( this->no ) ) {
	    this->cpdl_mct = FRAME_CT;
	    this->decision_no = this->no;
	    this->menu_pos = Menu_Copy_2;
	    this->title_no1 = 3;
	    Na_StartSystemSe(NA_SE_SY_FSEL_DECIDE_L);
	} else {
	    Na_StartSystemSe(NA_SE_SY_FSEL_ERROR);
	}
    } else {
	if ( ABS(this->wkey_y) >= KEY_ANGLE_3D ) {
	    Na_StartSystemSe(NA_SE_SY_FSEL_CURSOR);
	    if ( this->wkey_y >= KEY_ANGLE_3D ) {
		if ( (--this->no) <  0 ) this->no = 3;
	    } else {
		if ( (++this->no) >= 4 ) this->no = 0;
	    }
	}
	if ( this->no != 3 ) {
	    if ( !(REGCK_ALL( this->no )) ) {
		/* 「これは空きファイルです」 */
		this->caution_no = 3;
		this->caution_pt = this->no;
		this->caution_alpha = FRAME_ALPHA;
	    } else this->caution_no = -1;
	}
    }
}


/*=======================================================================
  =	ＣＯＰＹ（移動１:どれを→どこに）				=
  =======================================================================*/
extern void
menu_copy_move1( Game *thisx )
{
    Game_file_choose	*this = (Game_file_choose *)thisx;

    short	i, k;
    short *s = this->cpdl_yp;

    for ( i = 0; i < 3; i++ ) {
	k = (ABS(s[i] - move_ypd0[this->no][i])) / this->cpdl_mct;
	if ( s[i] <= move_ypd0[this->no][i] ) s[i] += k;
	else                                              s[i] -= k;
    }

    s = this->frame_title_alpha;
    s[0] -= F_A_CT;
    s[1] += F_A_CT;		/* ＴＩＴＬＥ入れ替え */

    s = this->plate_alpha; 
    s[this->no] -= B_A_CT;		/* 選択プレート消去 */


    if ( !(--this->cpdl_mct) ) {
        s = this->cpdl_yp;
	s[this->no] = move_ypd0[this->no][this->no];
	this->title_no0 = this->title_no1;
	s = this->frame_title_alpha;
        s[0] = FRAME_ALPHA;
	s[1] = 0;
	this->cpdl_mct = FRAME_CT;
	this->menu_pos++;
    }
}


/*=======================================================================
  =	ＣＯＰＹ（フェードイン１:どれを→どこに）			=
  =======================================================================*/
extern void
menu_copy_fdin1( Game *thisx )
{
    Game_file_choose	*this = (Game_file_choose *)thisx;
    short *s;

    
    /* 選択プレート消去 */
    s = this->plate_alpha;
    s[this->no] -= B_A_CT;
    /* 決定プレート表示 */
    s = this->decision_alpha;
    s[this->no] += B_A_CT;
    if ( !(--this->cpdl_mct) ) {
	s = this->plate_alpha;
        s[this->no] = 0;
	s = this->decision_alpha;
        s[this->no] = BASE_ALPHA;
	this->no = 3;
	this->cpdl_mct = FRAME_CT;
	this->menu_pos = Menu_Copy_5;
    }
}


/*=======================================================================
  =	ＣＯＰＹ（どこにコピーしますか？）				=
  =======================================================================*/
extern void
menu_copy_where( Game *thisx )
{
    Game_file_choose	*this = (Game_file_choose *)thisx;

    Sram	*sram = (Sram *)&this->sram;

    pad_t	*pad = &this->g.pads[0];


    if ( (this->no == 3 && (Pad_trigger() & (START_BUTTON | A_BUTTON))) || Pad_on_trigger(B_BUTTON) ) {
	this->no = this->decision_no;
	this->title_no1 = 2;
	this->cpdl_mct = FRAME_CT;
	this->menu_pos = Menu_Copy_6;
	Na_StartSystemSe(NA_SE_SY_FSEL_CANCEL);
    } else if ( Pad_trigger() & (START_BUTTON | A_BUTTON) ) {
	if ( !(REGCK_ALL( this->no )) ) {
	    this->copy_no = this->no;
	    this->title_no1 = 4;
	    this->cpdl_mct = FRAME_CT;
	    this->menu_pos = Menu_Copy_8;
	    Na_StartSystemSe(NA_SE_SY_FSEL_DECIDE_L);
	} else {
	    Na_StartSystemSe(NA_SE_SY_FSEL_ERROR);
	}
    } else {
	if ( ABS(this->wkey_y) >= KEY_ANGLE_3D ) {
	    Na_StartSystemSe(NA_SE_SY_FSEL_CURSOR);
	    if ( this->wkey_y >= KEY_ANGLE_3D ) {
		if ( (--this->no) == this->decision_no ) {
		    if ( (--this->no) < 0 ) this->no = 3;
		} else if ( this->no < 0 ) this->no = 3;
	    } else {
		if ( (++this->no) >= 4 ) this->no = 0;
		if ( this->no == this->decision_no ) this->no++;
	    }
	}
	if ( this->no != 3 ) {
	    if ( REGCK_ALL( this->no ) ) {
		/* 「これは使用しています」 */
		this->caution_no = 4;
		this->caution_pt = this->no;
		this->caution_alpha = FRAME_ALPHA;
	    } else this->caution_no = -1;
	}
    }
}


/*=======================================================================
  =	ＣＯＰＹ（フェードアウト１:どれを←どこに）			=
  =======================================================================*/
extern void
menu_copy_fdout1( Game *thisx )
{
    Game_file_choose	*this = (Game_file_choose *)thisx;
    short *s;

    
    s = this->decision_alpha;
    s[this->no] -= B_A_CT;
    s = this->plate_alpha;
    s[this->no] += B_A_CT;
    if ( !(--this->cpdl_mct) ) {
	this->title_no1 = 2;
	s = this->plate_alpha;
        s[this->no] = BASE_ALPHA;
	s = this->decision_alpha;
        s[this->no] = 0;
	this->cpdl_mct = FRAME_CT;
	this->menu_pos++;
    }
}


/*=======================================================================
  =	ＣＯＰＹ（キャンセル１:どれを←どこに）		       		=
  =======================================================================*/
extern void
menu_copy_cancel1( Game *thisx )
{
    Game_file_choose	*this = (Game_file_choose *)thisx;


    short	i, k;
    short *s = this->cpdl_yp;


    for ( i = 0; i < 3; i++ ) {
	k = (ABS(s[i] - move_ypd[i])) / this->cpdl_mct;
	if ( s[i] >= move_ypd[i] ) s[i] -= k;
	else                                   s[i] += k;
    }
    
    s = this->frame_title_alpha;
    s[0] -= F_A_CT;
    s = this->frame_title_alpha;
    s[1] += F_A_CT;
    if ( !(--this->cpdl_mct) ) {
	this->title_no0 = this->title_no1;
	s = this->frame_title_alpha;
        s[0] = FRAME_ALPHA;
        s[1] = 0;
	this->no = 3;		/* カーソル位置『やめる』*/
	this->menu_pos = Menu_Copy_1;
    }
}


/*=======================================================================
  =	ＣＯＰＹ（移動２:どこに→本当に）				=
  =======================================================================*/
extern void
menu_copy_move2( Game *thisx )
{
    Game_file_choose	*this = (Game_file_choose *)thisx;

    Sram	*sram = (Sram *)&this->sram;

    static short	move_ypd[] = {
	-56, -40, -24,
    };
    short	i, kkk;
    short *s;


    s = this->frame_title_alpha;
    s[0] -= F_A_CT;
    s[1] += F_A_CT;		/* ＴＩＴＬＥ入れ替え */
    for ( i = 0; i < 3; i++ ) {
	if ( i != this->copy_no && i != this->decision_no ) {
	    s = this->file_alpha;
            s[i] -= B_A_CT;
	    if ( REGCK_ALL( i ) ) {
                short *s1, *s2, *s3;
		s1 = this->plate_alpha;
                s2 = this->name_alpha;
                s3 = this->file_alpha;
                s1[i] = s2[i] = s3[i];
		s = this->connect_alpha;
                s[i] -= F_A_CT;
	    }
	} else if ( i == this->copy_no ) {
            s = this->cpdl_yp;
	    kkk = (ABS(s[i] - move_ypd[i])) / this->cpdl_mct;
	    s[i] += kkk;
	    if ( s[i] >= move_ypd[i] ) s[i] = move_ypd[i];
	}
    }
    if ( !(--this->cpdl_mct) ) {
	this->title_no0 = this->title_no1;
	s = this->frame_title_alpha;
        s[0] = FRAME_ALPHA;
	s[1] = 0;
	this->cpdl_mct = FRAME_CT;
	this->menu_pos++;
    }
}


/*=======================================================================
  =	ＣＯＰＹ（フェードイン２:どこに→本当に）			=
  =======================================================================*/
extern void
menu_copy_fdin2( Game *thisx )
{
    Game_file_choose	*this = (Game_file_choose *)thisx;


    this->panel_alpha[2] += B_A_CT;
    if ( !(--this->cpdl_mct) ) {
	this->menu_pos = Menu_Copy_A;
	this->no = 1;
    }
}


/*=======================================================================
  =	ＣＯＰＹ（本当にコピーしますか？）				=
  =======================================================================*/
extern void
menu_copy_ok( Game *thisx )
{
    Game_file_choose	*this = (Game_file_choose *)thisx;

    Sram	*sram = (Sram *)&this->sram;

    pad_t	*pad = &this->g.pads[0];

    unshort	keep_time;


    if ( (this->no && (Pad_trigger() & (START_BUTTON | A_BUTTON)))  || Pad_on_trigger(B_BUTTON) ) {
	/* やめる */
	this->cpdl_mct = FRAME_CT;
	this->title_no1 = 3;
	this->menu_pos = Menu_Copy_B;
	Na_StartSystemSe(NA_SE_SY_FSEL_CANCEL);
    } else if ( Pad_trigger() & (START_BUTTON | A_BUTTON) )  {
	/* はい */
	keep_time = ZCommonGet(zelda_time);
	sram_start_copy( this, sram );
	ZCommonSet( zelda_time, keep_time );
	this->decision_alpha[this->copy_no] =
	    this->name_alpha[this->copy_no] = 0;
	this->title_no1 = 5;
	this->cpdl_mct = FRAME_CT;
	this->menu_pos = Menu_Copy_D;
	RUMBLE_ENTRY2_TYPE_B( 300.0f );
	Na_StartSystemSe(NA_SE_SY_FSEL_DECIDE_L);
    } else {
	if ( ABS(this->wkey_y) >= KEY_ANGLE_3D ) {
	    Na_StartSystemSe(NA_SE_SY_FSEL_CURSOR);
	    this->no ^= 1;
	}
    }
}


/*=======================================================================
  =	ＣＯＰＹ（キャンセル１:どこに←本当に）		       		=
  =======================================================================*/
extern void
menu_copy_fdout2( Game *thisx )
{
    Game_file_choose	*this = (Game_file_choose *)thisx;

    Sram	*sram = (Sram *)&this->sram;

    short	i, k;
    short *s;
    
    
    s = this->frame_title_alpha;
    s[0] -= F_A_CT;
    s = this->frame_title_alpha;
    s[1] += F_A_CT;
    s = this->panel_alpha;
    s[2] -= B_A_CT;
    for ( i = 0; i < 3; i++ ) {
	if ( i != this->copy_no && i != this->decision_no ) {
	    s = this->file_alpha;
            s[i] += B_A_CT;
	    if ( REGCK_ALL( i ) ) {
                short *s1, *s2, *s3;
		s1 = this->plate_alpha;
                s2 = this->name_alpha;
                s3 = this->file_alpha;
                s1[i] = s2[i] = s3[i];
		s = this->connect_alpha;
                s[i] += F_A_CT;
	    }
	}
        s = this->cpdl_yp;
	k = (ABS(s[i] - move_ypd0[this->decision_no][i])) / this->cpdl_mct;
	if ( s[i] <= move_ypd0[this->decision_no][i] ) s[i] += k;
	else                                           s[i] -= k;
    }
    if ( !(--this->cpdl_mct) ) {
	this->title_no0 = this->title_no1;
	s = this->frame_title_alpha;
        s[0] = FRAME_ALPHA;
	s = this->frame_title_alpha;
        s[1] = 0;
	this->cpdl_mct = FRAME_CT;
	this->no = 3;		/* カーソル位置『やめる』*/
	this->menu_pos = Menu_Copy_5;
    }
}


/*=======================================================================
  =	ＣＯＰＹ（移動３）						=
  =======================================================================*/
extern void
menu_copy_move3( Game *thisx )
{
    Game_file_choose	*this = (Game_file_choose *)thisx;


    this->frame_title_alpha[0] -= F_A_CT;
    this->panel_alpha[2] -= B_A_CT;
    this->panel_alpha[3] -= B_A_CT;
    if ( !(--this->cpdl_mct) ) {
	this->frame_title_alpha[0] = 0;
	this->cpdl_mct = FRAME_CT;
	this->menu_pos++;
	PRINTF("connect_alpha=%d  decision_alpha[%d]=%d\n",this->connect_alpha[this->copy_no], this->copy_no, this->decision_alpha[this->copy_no]);
    }
}


/*=======================================================================
  =	ＣＯＰＹ（フェードイン３）					=
  =======================================================================*/
extern void
menu_copy_fdin3( Game *thisx )
{
    Game_file_choose	*this = (Game_file_choose *)thisx;


    short	kkk;
    short *s;
#define	MOVE_Y		-56
    s = this->decision_alpha;
    s[this->copy_no] += B_A_CT;
    s = this->name_alpha;
    s[this->copy_no] += B_A_CT;
    s = this->frame_title_alpha;
    s[1] += F_A_CT;
    s = this->decision_ypd;
    kkk = (ABS(s[this->copy_no] - MOVE_Y)) / this->cpdl_mct;
    s[this->copy_no] -= kkk;
    if ( s[this->copy_no] <= MOVE_Y ) s[this->copy_no] = MOVE_Y;
    if ( !(--this->cpdl_mct) ) {
	this->cpdl_mct = (60/2)*3; //FRAME_CT;
	this->title_no0 = this->title_no1;
	s = this->frame_title_alpha;
        s[0] = FRAME_ALPHA;
	s = this->frame_title_alpha;
        s[1] = 0;
//??????	this->connect_alpha[this->copy_no] = FRAME_ALPHA;
	this->menu_pos++;
    }
}


/*=======================================================================
  =	ＣＯＰＹ（コピーが終了しました）				=
  =======================================================================*/
extern void
menu_copy_end( Game *thisx )
{
    Game_file_choose	*this = (Game_file_choose *)thisx;

    pad_t	*pad = &this->g.pads[0];


    if ( this->cpdl_mct == 75 ) {
	this->connect_alpha[this->copy_no] = FRAME_ALPHA;
	Na_StartSystemSe(NA_SE_EV_DIAMOND_SWITCH);
    }
    this->cpdl_mct--;
    if ( this->cpdl_mct < 74 ) {
	if ( (Pad_trigger() & (START_BUTTON | A_BUTTON | B_BUTTON)) || !this->cpdl_mct ) {
	    this->cpdl_mct = FRAME_CT;
/*	this->decision_ypd[0] =
	this->decision_ypd[1] =
	this->decision_ypd[2] =*/
	    this->title_no1 = 0;
	    this->menu_pos++;
	    Na_StartSystemSe(NA_SE_SY_FSEL_DECIDE_L);
	}
    }
}


/*=======================================================================
  =	ＣＯＰＹ（コピーが終了しました）				=
  =======================================================================*/
extern void
menu_copy_end1( Game *thisx )
{
    Game_file_choose	*this = (Game_file_choose *)thisx;
    short *s;


    s = this->decision_alpha;
    s[this->decision_no] -= B_A_CT;
    s = this->decision_alpha;
    s[this->copy_no] -= B_A_CT;
    s = this->plate_alpha;
    s[this->decision_no] += B_A_CT;
    s = this->plate_alpha;
    s[this->copy_no] += B_A_CT;
    s = this->frame_title_alpha;
    s[0] -= F_A_CT;
    if ( !(--this->cpdl_mct) ) {
        s = this->decision_ypd;
	s[this->copy_no] = 0;
        s = this->cpdl_yp;
        s[3] = 0;
	this->cpdl_mct = FRAME_CT;
	this->frame_title_alpha[0] = 0;
	this->menu_pos++;
    }
}


/*=======================================================================
  =	ＣＯＰＹ（コピーが終了しました）				=
  =======================================================================*/
extern void
menu_copy_end2( Game *thisx )
{
    Game_file_choose	*this = (Game_file_choose *)thisx;

    Sram	*sram = (Sram *)&this->sram;

    short	i, k;
    short *s = this->cpdl_yp;


    for ( i = 0; i < 5; i++ ) {
	k = (ABS(s[i])) / this->cpdl_mct;
	if ( s[i] >= 0 ) s[i] -= k;
	else             s[i] += k;
    }
    
    for ( i = 0; i < 3; i++ ) {
	if ( i != this->no ) {
	    s = this->file_alpha;
            s[i] += B_A_CT;
	    if ( REGCK_ALL( i ) ) {
	        short *s1, *s2, *s3;
		s1 = this->plate_alpha;
                s2 = this->name_alpha;
                s3 = this->file_alpha;
                s1[i] = s2[i] = s3[i];
		s = this->connect_alpha;
                s[i] += F_A_CT;
	    }
	}
    }
    s = this->panel_alpha;
    s[0] += B_A_CT;
    s = this->panel_alpha;
    s[1] += B_A_CT;
    this->option_alpha += B_A_CT;
    s = this->frame_title_alpha;
    s[1] += F_A_CT;
    
    if ( !(--this->cpdl_mct) ) {
	for ( i = 0; i < 3; i++ ) {
	    s = this->file_alpha;
            s[i] = BASE_ALPHA;
	    s = this->plate_alpha;
            s[i] = 0;
            s = this->name_alpha;
            s[i] = 0;
            s = this->connect_alpha;
            s[i] = 0;
	    if ( REGCK_ALL( i ) ) {
                short *s1, *s2, *s3;
		s1 = this->plate_alpha;
                s2 = this->name_alpha;
                s3 = this->file_alpha;
                s1[i] = s2[i] = s3[i];
		s = this->connect_alpha;
                s[i] = FRAME_ALPHA;
	    }
	}
	s = this->decision_ypd;
        s[this->decision_no] = 0;
	s = this->cursor_rgba;
        s[3] = 70;
	this->cursor_pt = 1;
	XREG(35) = XREG(36);
	this->title_no0 = this->title_no1;
	s = this->frame_title_alpha;
        s[0] = FRAME_ALPHA;
        s[1] = 0;
	this->menu_pos = Menu_Select;
    }
}


/*=======================================================================
  =	ＣＯＰＹ（ＲＥTＵＲＮ）						=
  =======================================================================*/
extern void
menu_copy_return( Game *thisx )
{
    Game_file_choose	*this = (Game_file_choose *)thisx;


    short	i, k;
    short *s = this->cpdl_yp;


    for ( i = 0; i < 5; i++ ) {
	k = (ABS(s[i])) / this->cpdl_mct;
	if ( s[i] >= 0 ) s[i] -= k;
	else             s[i] += k;
    }
    
    s = this->panel_alpha;
    s[0] += B_A_CT;
    s[3] -= B_A_CT;
    s = this->frame_title_alpha;
    s[0] -= F_A_CT;
    s[1] += F_A_CT;
    
    if ( !(--this->cpdl_mct) ) {
	s = this->panel_alpha;
        s[0] = BASE_ALPHA;
        s[3] = 0;
	this->title_no0 = this->title_no1;
	s = this->frame_title_alpha;
        s[0] = FRAME_ALPHA;
        s[1] = 0;
	this->menu_pos = Menu_Select;
    }
    s = this->panel_alpha;
    this->option_alpha = s[1] = s[0];
}















































/*
  ＤＤＤＤＤ      ＥＥＥＥＥＥ  Ｌ
  Ｄ        Ｄ    Ｅ            Ｌ
  Ｄ         Ｄ   Ｅ            Ｌ
  Ｄ          Ｄ  Ｅ            Ｌ
  Ｄ          Ｄ  ＥＥＥＥＥ    Ｌ
  Ｄ          Ｄ  Ｅ            Ｌ
  Ｄ         Ｄ   Ｅ            Ｌ
  Ｄ        Ｄ    Ｅ            Ｌ
  ＤＤＤＤＤ      ＥＥＥＥＥＥ  ＬＬＬＬＬＬ
 */



/*=======================================================================
  =	Ｄｅｌ（イニシャル ＆ 移動）					=
  =======================================================================*/
extern void
menu_delt_init( Game *thisx )
{
    Game_file_choose	*this = (Game_file_choose *)thisx;


    short	i, k;
    short *s = this->cpdl_yp;


    /* ファイル移動 */
    for ( i = 0; i < 5; i++ ) {
	k = (ABS(s[i] - move_ypd[i])) / this->cpdl_mct;
	if ( s[i] >= move_ypd[i] ) s[i] -= k;
	else                                   s[i] += k;
    }
    
    s = this->panel_alpha;
    s[0] -= B_A_CT*2;	/*『コピー』フェードアウト */
    s[1] -= B_A_CT*2;	/*『消す』フェードアウト */ 
    this->option_alpha -= B_A_CT*2;	/*『オプション』フェードアウト */ 
    s = this->panel_alpha;
    s[3] += B_A_CT;	/*『やめる』フェードイン */
    if ( this->panel_alpha[0] <= 0 ) {
	this->panel_alpha[0] = 
	    this->panel_alpha[1] =
	    this->option_alpha = 0;
    }
    s = this->frame_title_alpha;
    s[0] -= F_A_CT;
    s[1] += F_A_CT;		/* ＴＩＴＬＥ入れ替え */

    if ( !(--this->cpdl_mct) ) {
	/* （どれを消しますか？） */
	s = this->cursor_rgba;
        s[3] = 70;
	this->cursor_pt = 1;
	XREG(35) = XREG(36);
	this->panel_alpha[0] =
	    this->panel_alpha[1] =
	    this->option_alpha = 0;
	s = this->panel_alpha;
        s[3] = BASE_ALPHA;
	this->title_no0 = this->title_no1;
	s = this->frame_title_alpha;
        s[0] = FRAME_ALPHA;
        s[1] = 0;
	this->no = 3;				/* カーソル位置『やめる』*/
	this->menu_pos++;
    }
}


/*=======================================================================
  =	Ｄｅｌ（どれを消しますか？）					=
  =======================================================================*/
extern void
menu_delt_where( Game *thisx )
{
    Game_file_choose	*this = (Game_file_choose *)thisx;

    Sram	*sram = (Sram *)&this->sram;

    pad_t	*pad = &this->g.pads[0];


    if ( (this->no == 3 && (Pad_trigger() & (START_BUTTON | A_BUTTON))) || Pad_on_trigger(B_BUTTON) ) {
	/* （ＲＥＴＵＲＮ） */
	this->no = 4;
	this->cpdl_mct = FRAME_CT;
	this->title_no1 = 0;
	this->menu_pos = Menu_Delt_R;
	this->caution_no = -1;
	Na_StartSystemSe(NA_SE_SY_FSEL_CANCEL);
    } else if ( (Pad_trigger() & (START_BUTTON | A_BUTTON)) ) {
	if ( REGCK_ALL( this->no ) ) {
	    /* （移動） */
	    this->cpdl_mct = FRAME_CT;
	    this->decision_no = this->no;
	    this->menu_pos = Menu_Delt_2;
	    this->title_no1 = 7;
	    Na_StartSystemSe(NA_SE_SY_FSEL_DECIDE_L);
	} else {
	    Na_StartSystemSe(NA_SE_SY_FSEL_ERROR);
	}
    } else {
	if ( ABS(this->wkey_y) >= KEY_ANGLE_3D ) {
	    Na_StartSystemSe(NA_SE_SY_FSEL_CURSOR);
	    if ( this->wkey_y >= KEY_ANGLE_3D ) {
		if ( (--this->no) <  0 ) this->no = 3;
	    } else {
		if ( (++this->no) >= 4 ) this->no = 0;
	    }
	}
	if ( this->no != 3 ) {
	    if ( !(REGCK_ALL( this->no )) ) {
		/* 「これは空きファイルです」 */
		this->caution_no = 3;
		this->caution_pt = this->no;
		this->caution_alpha = FRAME_ALPHA;
	    } else this->caution_no = -1;
	} else this->caution_no = -1;
    }
}


/*=======================================================================
  =	Ｄｅｌ（移動）							=
  =======================================================================*/
extern void
menu_delt_move( Game *thisx )
{
    Game_file_choose	*this = (Game_file_choose *)thisx;

    Sram	*sram = (Sram *)&this->sram;

    static short	move_ypd[] = {
	0, 16, 32,
    };

    short	i, k;
    short *s;


    for ( i = 0; i < 3; i++ ) {
	if ( i != this->no ) {
	    s = this->file_alpha;
            s[i] -= B_A_CT;
	    if ( REGCK_ALL( i ) ) {
                short *s1, *s2, *s3;
		s1 = this->plate_alpha;
                s2 = this->name_alpha;
                s3 = this->file_alpha;
                s1[i] = s2[i] = s3[i];
		s = this->connect_alpha;
                s[i] -= F_A_CT;
	    }
	} else  {
            s = this->plate_alpha;
            s[i] -= B_A_CT;
        }
    }
    s = this->frame_title_alpha;
    s[0] -= (F_A_CT/2);
    s[1] += (F_A_CT/2);

    s = this->cpdl_yp;
    k = (ABS(s[this->no] - move_ypd[this->no])) / this->cpdl_mct;
    if ( s[this->no] >= move_ypd[this->no] ) s[this->no] -= k;
    else                                     s[this->no] += k;
    if ( !(--this->cpdl_mct) ) {
	for ( i = 0; i < 3; i++ ) {
	    if ( i != this->no ) {
		s = this->file_alpha;
                s[i] = 0;
		if ( REGCK_ALL( i ) ) {
                    short *s1, *s2, *s3;
                    s1 = this->plate_alpha;
                    s2 = this->name_alpha;
                    s3 = this->file_alpha;
                    s1[i] = s2[i] = s3[i];
		    s = this->connect_alpha;
                    s[i] = 0;
		}
	    } else {
                s = this->plate_alpha;
                s[i] = 0;
            }
	}
	s = this->cpdl_yp;
        s[this->no] = move_ypd[this->no];
	this->cpdl_mct = FRAME_CT;
	this->menu_pos++;
    }
}



/*=======================================================================
  =	Ｄｅｌ（フェードイン）						=
  =======================================================================*/
extern void
menu_delt_fdin( Game *thisx )
{
    Game_file_choose	*this = (Game_file_choose *)thisx;
    short *s;

    
    s = this->panel_alpha;
    s[2] += B_A_CT;		/*『はい』フェードイン */
    s = this->frame_title_alpha;
    s[0] -= (F_A_CT/2);
    s[1] += (F_A_CT/2);
    s = this->decision_alpha;
    s[this->no] += B_A_CT;
    if ( !(--this->cpdl_mct) ) {
	this->cpdl_mct = FRAME_CT;
	this->title_no0 = this->title_no1;
        s = this->frame_title_alpha;
	this->decision_alpha[this->no] = s[0] = FRAME_ALPHA;
	s = this->frame_title_alpha;
        s[1] = 0;
	s = this->panel_alpha;
        s[2] = BASE_ALPHA;
	this->no = 1;
	this->menu_pos = Menu_Delt_4;
    }
}


/*=======================================================================
  =	Ｄｅｌ（本当に消しますか？）					=
  =======================================================================*/
extern void
menu_delt_ok( Game *thisx )
{
    Game_file_choose	*this = (Game_file_choose *)thisx;

    pad_t	*pad = &this->g.pads[0];


    if ( (this->no && (Pad_trigger() & (START_BUTTON | A_BUTTON))) || Pad_on_trigger(B_BUTTON) ) {
	/* キャンセル */
	this->no = this->decision_no;
	this->title_no1 = 6;
	this->menu_pos = Menu_Delt_5;
	this->cpdl_mct = FRAME_CT;
	Na_StartSystemSe(NA_SE_SY_FSEL_CANCEL);
    } else if ( Pad_trigger() & (START_BUTTON | A_BUTTON) ) {
	/* ＦＩＬＥ ─ ＤＥＬ */
	this->f_64dd[this->decision_no] = 
	    this->connect_alpha[this->decision_no] = 0;
	Na_StartSystemSe(NA_SE_EV_DIAMOND_SWITCH);
	this->cpdl_mct = FRAME_CT;
	this->menu_pos = Menu_Delt_7;
	this->title_no1 = 8;
	RUMBLE_ENTRY2_TYPE_A( 200.0f );
	wait_frame = 15;
    } else {
	if ( ABS(this->wkey_y) >= KEY_ANGLE_3D ) {
	    Na_StartSystemSe(NA_SE_SY_FSEL_CURSOR);
	    this->no ^= 1;
	}
    }
}


/*=======================================================================
  =	Ｄｅｌ（フェードアウト）					=
  =======================================================================*/
extern void
menu_delt_fdout( Game *thisx )
{
    Game_file_choose	*this = (Game_file_choose *)thisx;
    short *s;


    s = this->decision_alpha;
    s[this->no] -= B_A_CT;
    s = this->plate_alpha;
    s[this->no] += B_A_CT;
    s = this->panel_alpha;
    s[2] -= B_A_CT;		/*『はい』フェードアウト */
    if ( !(--this->cpdl_mct) ) {
	this->cpdl_mct = FRAME_CT;
	s = this->decision_alpha;
        s[this->no] = 0;
	this->menu_pos++;
    }
}


/*=======================================================================
  =	Ｄｅｌ（キャンセル）						=
  =======================================================================*/
extern void
menu_delt_cancel( Game *thisx )
{
    Game_file_choose	*this = (Game_file_choose *)thisx;

    Sram	*sram = (Sram *)&this->sram;


    short	i, k;
    short *s;


    s = this->cpdl_yp;
    k = (ABS(s[this->no] - move_ypd[this->no])) / this->cpdl_mct;
    if ( s[this->no] >= move_ypd[this->no] ) s[this->no] -= k;
    else                                     s[this->no] += k;

    for ( i = 0; i < 3; i++ ) {
	if ( i != this->no ) {
	    s = this->file_alpha;
            s[i] += B_A_CT;
	    if ( REGCK_ALL( i ) ) {
                short *s1, *s2, *s3;
                s1 = this->plate_alpha;
                s2 = this->name_alpha;
                s3 = this->file_alpha;
                s1[i] = s2[i] = s3[i];
		s = this->connect_alpha;
                s[i] += F_A_CT;
	    }
	}
    }
    s = this->frame_title_alpha;
    s[0] -= F_A_CT;
    s[1] += F_A_CT;

    if ( !(--this->cpdl_mct) ) {
	s = this->cpdl_yp;
        s[this->no] = move_ypd[this->no];
	this->cpdl_mct = FRAME_CT;
	this->no = 3;
	this->title_no0 = this->title_no1;
	s = this->frame_title_alpha;
        s[0] = FRAME_ALPHA;
        s[1] = 0;
	this->menu_pos = Menu_Delt_1;
    }
}



/*=======================================================================
  =	Ｄｅｌ（消去しました）						=
  =======================================================================*/
extern void
menu_delt_end( Game *thisx )
{
    Game_file_choose	*this = (Game_file_choose *)thisx;

    Sram	*sram = (Sram *)&this->sram;

    static short	m;
    short *s;


    if ( !wait_frame ) {
	if ( this->cpdl_mct == FRAME_CT ) m = 1;
	if ( this->cpdl_mct ) {
	    s = this->frame_title_alpha;
            s[0] -= F_A_CT;
            s[1] += F_A_CT;		/* ＴＩＴＬＥ入れ替え */
	    
	    s = this->decision_alpha;
            s[this->decision_no] -= B_A_CT;
////////	    this->plate_alpha[this->decision_no] -= B_A_CT;
	    s = this->panel_alpha;
            s[2] -= B_A_CT;
            s[3] -= B_A_CT;
	}
	s = this->decision_ypd;
        s[this->decision_no] -= m;
	m += 2;
	if ( !(--this->cpdl_mct) ) {
	    sram_start_clear( this, sram );
	    
	    this->title_no0 = this->title_no1;
	    s = this->frame_title_alpha;
            s[0] = FRAME_ALPHA;
	    s[1] = this->connect_alpha[this->decision_no] = 0;
	    s = this->decision_alpha;
            s[this->decision_no] =0;
            s = this->plate_alpha;
            s[this->decision_no] =0;
            s = this->panel_alpha;
            s[2] = s[3] = 0;
	    this->menu_pos++;
	    this->cpdl_mct = (60/2)*3;
	}
    } else {
	wait_frame--;
	if ( !wait_frame ) Na_StartSystemSe(NA_SE_SY_FSEL_ERASE);
    }

}
/*=======================================================================
  =	Ｄｅｌ（消去しました）						=
  =======================================================================*/
extern void
menu_delt_end1( Game *thisx )
{
    Game_file_choose	*this = (Game_file_choose *)thisx;

    pad_t	*pad = &this->g.pads[0];


    if ( (Pad_trigger() & (START_BUTTON | A_BUTTON | B_BUTTON)) || !(--this->cpdl_mct) ) {
	this->cpdl_yp[3] = 0;
	this->cpdl_mct = FRAME_CT;
	this->title_no1 = 0;
	this->menu_pos++;
	Na_StartSystemSe(NA_SE_SY_FSEL_CANCEL);
    }
}
/*=======================================================================
  =	Ｄｅｌ（消去しました）						=
  =======================================================================*/
extern void
menu_delt_end2( Game *thisx )
{
    Game_file_choose	*this = (Game_file_choose *)thisx;

    Sram	*sram = (Sram *)&this->sram;

    short	i, k;
    short *s;


    s = this->cpdl_yp;
    for ( i = 0; i < 5; i++ ) {
	k = (ABS(s[i])) / this->cpdl_mct;
	if ( s[i] >= 0 ) s[i] -= k;
	else             s[i] += k;
    }
    
    for ( i = 0; i < 3; i++ ) {
	s = this->file_alpha;
        s[i] += B_A_CT;
	if ( REGCK_ALL( i ) ) {
            short *s1, *s2, *s3;
            s1 = this->plate_alpha;
            s2 = this->name_alpha;
            s3 = this->file_alpha;
            s1[i] = s2[i] = s3[i];
	    s = this->connect_alpha;
            s[i] += F_A_CT;
	}
    }
    s = this->file_alpha;
    if ( s[this->decision_no] >= BASE_ALPHA ) 
        s[this->decision_no] = BASE_ALPHA;
    s = this->frame_title_alpha;
    s[0] -= F_A_CT;
    s[1] += F_A_CT;
    
    if ( !(--this->cpdl_mct) ) {
	s = this->decision_ypd;
        s[this->decision_no] = 0;
	s = this->cursor_rgba;
        s[3] = 70;
	this->cursor_pt = 1;
	XREG(35) = XREG(36);
	s = this->panel_alpha;
        s[0] = BASE_ALPHA;
        s[2] = s[3] = 0;
	this->title_no0 = this->title_no1;
	s = this->frame_title_alpha;
        s[0] = FRAME_ALPHA;
        s[1] = 0;
	this->menu_pos = Menu_Select;
    }
    s = this->panel_alpha;
    this->option_alpha = s[1] = s[0];
}


/*=======================================================================
  =	Ｄｅｌ（ＲＥＴＵＲＮ）						=
  =======================================================================*/
extern void
menu_delt_return( Game *thisx )
{
    Game_file_choose	*this = (Game_file_choose *)thisx;


    short	i, k;
    short *s;


    s = this->cpdl_yp;
    for ( i = 0; i < 5; i++ ) {
	k = (ABS(s[i])) / this->cpdl_mct;
	if ( s[i] >= 0 ) s[i] -= k;
	else             s[i] += k;
    }
    
    s = this->panel_alpha;
    s[0] += B_A_CT;
    s[1] += B_A_CT;
    this->option_alpha += B_A_CT;
    s = this->panel_alpha;
    s[3] -= B_A_CT*2;
    if ( s[3] <= 0 ) s[3] = 0;
    s = this->frame_title_alpha;
    s[0] -= F_A_CT;
    s[1] += F_A_CT;
    
    if ( !(--this->cpdl_mct) ) {
	s = this->cursor_rgba;
        s[3] = 70;
	this->cursor_pt = 1;
	XREG(35) = XREG(36);
	s = this->panel_alpha;
        s[0] = BASE_ALPHA;
        s[3] = 0;
	this->title_no0 = this->title_no1;
	s = this->frame_title_alpha;
        s[0] = FRAME_ALPHA;
        s[1] = 0;
	this->menu_pos = Menu_Select;
    }
    s = this->panel_alpha;
    this->option_alpha = s[1] = s[0];
}
