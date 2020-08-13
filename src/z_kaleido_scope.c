/* $Id: z_kaleido_scope.c,v 2.7 2001/04/04 07:21:47 zelda Exp $
 *
 * ���쥤�ɡ��������סأͣ��ɣΡ�
 *
 * $Log: z_kaleido_scope.c,v $
 * Revision 2.7  2001/04/04  07:21:47  zelda
 * �ɥ�ե��󥨥ߥ�졼���Ѳ������� CIC��64DD�б���ʬ��Ϥ������С������
 *
 * Revision 2.6  1999-01-19 11:15:30+09  soejima
 * �ǣ��ԣţף��ٻ���
 *
 * Revision 2.5  1999-01-07 13:27:30+09  soejima
 * �ǣ��ԣţף��ٻ���
 *
 * Revision 2.4  1998-11-17 17:59:43+09  soejima
 * *** empty log message ***
 *
 * Revision 2.3  1998-11-17 17:18:28+09  soejima
 * *** empty log message ***
 *
 * Revision 2.2  1998-11-06 13:34:45+09  soejima
 * ������
 *
 * Revision 2.1  1998-10-22 21:17:25+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.352  1998/10/19 06:07:59  soejima
 * *** empty log message ***
 *
 * Revision 1.351  1998-10-17 21:40:47+09  soejima
 * *** empty log message ***
 *
 * Revision 1.350  1998-10-17 16:04:07+09  soejima
 * *** empty log message ***
 *
 * Revision 1.349  1998-10-16 18:13:58+09  soejima
 * *** empty log message ***
 *
 * Revision 1.348  1998-10-16 14:27:01+09  soejima
 * *** empty log message ***
 *
 * Revision 1.1  1997/02/06  04:46:59  soejima
 * Initial revision
 * $Log�ɲ�
 * */



#define	NEW_KALEIDOSCOPE



/************************************************************************
 *									*
 *	���쥤�ɡ��������� �ͣ��ɣ�					*
 *				1997ǯ02��06��(������) 09��00ʬ00�� JST *
 ************************************************************************/
#include "audio.h"
#include "assert64.h"		/* assert */
#include "PreRender.h"
#include "padmgr.h"
#include "sleep.h"             /* msleep */

#include "game.h"
#include "z_common_data.h"
#include "z_sram.h"
#include "z_file_choose.h"
#include "z_sram_h.h"
#include "z_hilite.h"
#include "z_actor.h"
#include "z_play.h"
#include "z_player.h"
#include "z_player_lib.h"
#include "z_player_shape.h"
#include "z_room.h"
#include "z_define1.h"

#include "z_kaleido_scope_h.h"
#include "z_kaleido_moji.h"
#include "z_map_mark.h"

#include "z_opening.h"
#include "z_parameter_h.h"
#include "z_parameterd.h"
#include "z_map_exp.h"
#include "z_save_area_h.h"
#include "z_shrink_window.h"
#include "gfxalloc.h"		/* gfxopen/gfxclose */

extern void
a_item_dma_change( Game_play *game_play, unshort type  );

#define PR_KAREIDOSCOPE_MODE 	SREG(94) /* ���쥤�ɥ������ץ⡼�� */



EXTERN_DEFSEG_DATA(item_name_static);
EXTERN_DEFSEG_DATA(icon_item_static);
EXTERN_DEFSEG_DATA(icon_item_24_static);
EXTERN_DEFSEG_DATA(icon_item_field_static);
EXTERN_DEFSEG_DATA(icon_item_dungeon_static);
EXTERN_DEFSEG_DATA(icon_item_gameover_static);
EXTERN_DEFSEG_DATA(icon_item_jpn_static);
EXTERN_DEFSEG_DATA(icon_item_nes_static);
EXTERN_DEFSEG_DATA(map_48x85_static);
EXTERN_DEFSEG_DATA(map_56x73_static);
EXTERN_DEFSEG_DATA(map_name_static);

extern padmgr_t padmgr;

#ifdef U_hayakawa_U
#define WHAT_IS_IT_NOW() PRINTF("�����ƥ���� %10llu us %s %d\n", OS_CYCLES_TO_USEC(osGetTime()), __FILE__, __LINE__)
#else
#define WHAT_IS_IT_NOW() ((void)0)
#endif

#ifdef NEW_KALEIDOSCOPE

extern unsigned char	sf_00_txt[];
extern unsigned char	sf_01_txt[];
extern unsigned char	sf_02_txt[];
extern unsigned char	sf_03_txt[];
extern unsigned char	sf_04_txt[];
extern unsigned char	sf_05_txt[];
extern unsigned char	sf_06_txt[];
extern unsigned char	sf_07_txt[];
extern unsigned char	sf_08_txt[];
extern unsigned char	sf_09_txt[];
extern unsigned char	sf_0a_txt[];
extern unsigned char	sf_0b_txt[];
extern unsigned char	sf_0c_txt[];
extern unsigned char	sf_0d_txt[];
extern unsigned char	sf_0e_txt[];
extern unsigned char	sf_0f_txt[];

extern unsigned char	sf_10_txt[];
extern unsigned char	sf_11_txt[];
extern unsigned char	sf_12_txt[];
extern unsigned char	sf_13_txt[];
extern unsigned char	sf_14_txt[];
extern unsigned char	sf_15_txt[];
extern unsigned char	sf_16_txt[];
extern unsigned char	sf_17_txt[];
extern unsigned char	sf_18_txt[];
extern unsigned char	sf_19_txt[];
extern unsigned char	sf_1a_txt[];
extern unsigned char	sf_1b_txt[];
extern unsigned char	sf_1c_txt[];
extern unsigned char	sf_1d_txt[];
extern unsigned char	sf_1e_txt[];

extern unsigned char	sf_20_txt[];
extern unsigned char	sf_21_txt[];
extern unsigned char	sf_22_txt[];
extern unsigned char	sf_23_txt[];
extern unsigned char	sf_24_txt[];
extern unsigned char	sf_25_txt[];
extern unsigned char	sf_26_txt[];
extern unsigned char	sf_27_txt[];
extern unsigned char	sf_28_txt[];
extern unsigned char	sf_29_txt[];
extern unsigned char	sf_2a_txt[];
extern unsigned char	sf_2b_txt[];
extern unsigned char	sf_2c_txt[];
extern unsigned char	sf_2d_txt[];
extern unsigned char	sf_2e_txt[];

extern unsigned char	sf_30_txt[];
extern unsigned char	sf_31_txt[];
extern unsigned char	sf_32_txt[];
extern unsigned char	sf_33_txt[];
extern unsigned char	sf_34_txt[];
extern unsigned char	sf_35_txt[];
extern unsigned char	sf_36_txt[];
extern unsigned char	sf_37_txt[];
extern unsigned char	sf_38_txt[];
extern unsigned char	sf_39_txt[];
extern unsigned char	sf_3a_txt[];
extern unsigned char	sf_3b_txt[];
extern unsigned char	sf_3c_txt[];
extern unsigned char	sf_3d_txt[];
extern unsigned char	sf_3e_txt[];

extern unsigned char	sf_40_txt[];
extern unsigned char	sf_41_txt[];
extern unsigned char	sf_42_txt[];
extern unsigned char	sf_43_txt[];
extern unsigned char	sf_44_txt[];
extern unsigned char	sf_45_txt[];
extern unsigned char	sf_46_txt[];
extern unsigned char	sf_47_txt[];
extern unsigned char	sf_48_txt[];
extern unsigned char	sf_49_txt[];
extern unsigned char	sf_4a_txt[];
extern unsigned char	sf_4b_txt[];
extern unsigned char	sf_4c_txt[];
extern unsigned char	sf_4d_txt[];
extern unsigned char	sf_4e_txt[];

extern unsigned char	sf_01_nes_txt[];
extern unsigned char	sf_03_nes_txt[];
extern unsigned char	sf_04_nes_txt[];
extern unsigned char	sf_05_nes_txt[];
extern unsigned char	sf_07_nes_txt[];
extern unsigned char	sf_09_nes_txt[];
extern unsigned char	sf_0a_nes_txt[];
extern unsigned char	sf_0b_nes_txt[];
extern unsigned char	sf_0d_nes_txt[];

static unsigned char *KaleidoScope_Equipment_Tex[] = {
	sf_00_txt, sf_10_txt, sf_20_txt, sf_30_txt, sf_40_txt,
	sf_01_txt, sf_11_txt, sf_21_txt, sf_31_txt, sf_41_txt,
	sf_02_txt, sf_12_txt, sf_22_txt, sf_32_txt, sf_42_txt,
};
static unsigned char *KaleidoScope_Item_Tex[] = {
	sf_03_txt, sf_13_txt, sf_23_txt, sf_33_txt, sf_43_txt,
	sf_04_txt, sf_14_txt, sf_24_txt, sf_34_txt, sf_44_txt,
	sf_05_txt, sf_15_txt, sf_25_txt, sf_35_txt, sf_45_txt,
};
static unsigned char *KaleidoScope_Map_Tex[] = {
	sf_06_txt, sf_16_txt, sf_26_txt, sf_36_txt, sf_46_txt,
	sf_07_txt, sf_17_txt, sf_27_txt, sf_37_txt, sf_47_txt,
	sf_08_txt, sf_18_txt, sf_28_txt, sf_38_txt, sf_48_txt,
};
static unsigned char *KaleidoScope_Collect_Tex[] = {
	sf_09_txt, sf_19_txt, sf_29_txt, sf_39_txt, sf_49_txt,
	sf_0a_txt, sf_1a_txt, sf_2a_txt, sf_3a_txt, sf_4a_txt,
	sf_0b_txt, sf_1b_txt, sf_2b_txt, sf_3b_txt, sf_4b_txt,
};
static unsigned char *KaleidoScope_Save_Tex[] = {
	sf_0c_txt, sf_1c_txt, sf_2c_txt, sf_3c_txt, sf_4c_txt,
	sf_0d_txt, sf_1d_txt, sf_2d_txt, sf_3d_txt, sf_4d_txt,
	sf_0e_txt, sf_1e_txt, sf_2e_txt, sf_3e_txt, sf_4e_txt,
};

static unsigned char *KaleidoScope_Equipment_Nes_Tex[] = {
	sf_00_txt, sf_10_txt, sf_20_txt, sf_30_txt, sf_40_txt,
	sf_01_nes_txt, sf_11_txt, sf_21_txt, sf_31_txt, sf_41_txt,
	sf_02_txt, sf_12_txt, sf_22_txt, sf_32_txt, sf_42_txt,
};
static unsigned char *KaleidoScope_Item_Nes_Tex[] = {
	sf_03_nes_txt, sf_13_txt, sf_23_txt, sf_33_txt, sf_43_txt,
	sf_04_nes_txt, sf_14_txt, sf_24_txt, sf_34_txt, sf_44_txt,
	sf_05_nes_txt, sf_15_txt, sf_25_txt, sf_35_txt, sf_45_txt,
};
static unsigned char *KaleidoScope_Map_Nes_Tex[] = {
	sf_06_txt, sf_16_txt, sf_26_txt, sf_36_txt, sf_46_txt,
	sf_07_nes_txt, sf_17_txt, sf_27_txt, sf_37_txt, sf_47_txt,
	sf_08_txt, sf_18_txt, sf_28_txt, sf_38_txt, sf_48_txt,
};
static unsigned char *KaleidoScope_Collect_Nes_Tex[] = {
	sf_09_nes_txt, sf_19_txt, sf_29_txt, sf_39_txt, sf_49_txt,
	sf_0a_nes_txt, sf_1a_txt, sf_2a_txt, sf_3a_txt, sf_4a_txt,
	sf_0b_nes_txt, sf_1b_txt, sf_2b_txt, sf_3b_txt, sf_4b_txt,
};
static unsigned char *KaleidoScope_Save_Nes_Tex[] = {
	sf_0c_txt, sf_1c_txt, sf_2c_txt, sf_3c_txt, sf_4c_txt,
	sf_0d_nes_txt, sf_1d_txt, sf_2d_txt, sf_3d_txt, sf_4d_txt,
	sf_0e_txt, sf_1e_txt, sf_2e_txt, sf_3e_txt, sf_4e_txt,
};

static unsigned char *KaleidoScope_Save_Gameover_Tex[] = {
	sf_0c_txt, sf_1c_txt, sf_2c_txt, sf_3c_txt, sf_4c_txt,
	sf_0f_txt, sf_1d_txt, sf_2d_txt, sf_3d_txt, sf_4d_txt,
	sf_0e_txt, sf_1e_txt, sf_2e_txt, sf_3e_txt, sf_4e_txt,
};
#endif	/* NEW_KALEIDOSCOPE */

extern short partvtx_mapg_xsz[] = {
    // �ͣ��Сʣǣ�����
/*  16   15   14   13   12   11   10    9    8  */
    32, 112,  32,  48,  32,  32,  32,  48,  32,
/*   7    6    5    4    3    2    1            */
    64,  32,  48,  48,  48,  48,  64,			/* ��(16) */
    8,  8,  8,  8,  8,  8,  8,   8,  8,  8,  8,  8,	/* �Σ�����ݥ����(12) */
    8,							/* ���ꥢɽ��(1) */
    8,							/* ��餷��(1) */
    80,							/* ������̾ */
    64,							/* ������ */
};
extern short partvtx_mapg_ysz[] = {
    // �ͣ��Сʣǣ�����
/*  16   15   14   13   12   11   10    9    8  */
    24,  72,  13,  22,  19,  20,  19,  27,  14,
/*   7    6    5    4    3    2    1            */
    26,  22,  21,  49,  32,  45,  60, 
    8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,
    8,
    16,
    32,
    8,
};




static unchar button_modeZR[][5] = {
/*      ��  �ú�  �ò�  �ñ�    ��  */
    {    0, 0xff, 0xff, 0xff,    0, },	/* Display_Equipment */
    {    0,    0,    0,    0, 0xff, },	/* Display_Item */
    {    0, 0xff, 0xff, 0xff, 0xff, },	/* Display_Map */
    {    0, 0xff, 0xff, 0xff,    0, },	/* Display_Collect */
    {    0, 0xff, 0xff, 0xff,    0, },	/* Display_Equipment */
    {    0,    0,    0,    0, 0xff, },	/* Display_Item */
};



static short	red = 0, green = 0, blue = 0, alpha = 255;
static short	ered = 255, egreen = 0, eblue = 0; 
static short	FIELD_DUNGEON = 0;	/* �ᣰ���ե������ , �⣰�����󥸥�� */
static unchar	button_item[5];		/* ��¸�£��������ɣԣţ͡ʣ¡ˡʺ��ˡʲ��ˡʱ��ˡʣ���*/

//extern void LargeMapMarkDisplay( Game_play *game_play );
#include "z_lmap_mark.h"	/* LargeMapMarkDisplay */

extern size_t Player_Shape_Read(
    Game_play     *game_play,
    char          *segment,
    Skeleton_Info *skeleton
);

extern void
equipment_player_disp( Game_play *game_play );


static float	eye_xdt[] = {
    -4.0f,   4.0f,  4.0f,   4.0f,  4.0f,  -4.0f, -4.0f,  -4.0f,
};
static float	eye_zdt[] = {
    -4.0f,  -4.0f, -4.0f,   4.0f,  4.0f,   4.0f,  4.0f,  -4.0f,
};
static unshort	next_pos_data[] = {
/*	    1,      3,     2,      0,     3,      1,     0,      2, */
    Display_Map,       Display_Equipment, Display_Collect, Display_Item,
    Display_Equipment, Display_Map,       Display_Item,    Display_Collect,
};




PreRender_t kaleido_prerender_link;
char *cvgbuf;

extern void
anti( Game_play *game_play )
{
    Gfx *glistp, *glistp_save;
    void *fbuf = (void *)game_play->g.graph->FrameBufferP;


    OPEN_DISP( game_play->g.graph );
    glistp = gfxopen( glistp_save = NOW_DISP );
    gSPDisplayList(NEXT_WORK_DISP, glistp);
    PreRender_setup_renderbuf( &kaleido_prerender_link, 64, 112, fbuf, 0 );
    PreRender_saveFrameBuffer( &kaleido_prerender_link, &glistp );
    PreRender_saveCVG( &kaleido_prerender_link, &glistp );
    gSPEndDisplayList(glistp++);

    gfxclose( glistp_save, glistp );
    SET_NOW_DISP( glistp );

    DisableNextSwapFrame();	/* ���̤�����Τǡ�����åץХåե����������� */

    CLOSE_DISP( game_play->g.graph );
}
extern void
anti_end( void )
{
    msleep(50);		/* ���̼������Ԥ�50ms��Ŭ���Ǥ� */
    PreRender_ConvertFrameBuffer2( &kaleido_prerender_link );
    PreRender_cleanup( &kaleido_prerender_link );
}




/*=======================================================================
  =	ǯ������å��ǡ����ʣ������, �����Ҷ�, ������ǯ��� 		=
  =======================================================================*/
/* �ӣ��������ɣ������̣У�𡼣գ�����å��ǡ��� */
extern char
select_popup_data[] = {
    1, 9, 9, 0, 0, 9,
    1, 9, 9, 0, 0, 9,
    1, 9, 1, 0, 0, 9,
    9, 9, 9, 9, 0, 1,
};
/* �ţ������������ɣ������̣У�𡼣գ�����å��ǡ��� */
extern char
equipment_popup_data[][4] = {
    { 0, 1, 0, 0, },		/* ����� */
    { 9, 1, 9, 0, },
    { 0, 9, 0, 0, },
    { 9, 9, 0, 0, },
# if 0
    { 1, 1, 0, 0, },		/* �Ҷ��� */
    { 9, 1, 9, 0, },
    { 1, 9, 0, 0, },
    { 9, 9, 0, 0, },
# endif
};

/* ���Ѳ�ǯ������å��ǡ����ʥƥ������㳥������ */
static char
checkcheck_wb_data[] = {
    1,		// �إǥ�������
    9,		// �إǥ��μ¡�
    9,		// �إܥ��
    0,		// �������εݡ�
    0,		// �ر�����
    9,		// �إǥ���α��
    1,		// �إѥ��󥳡�
    9,		// �������Υ�����ʡ�
    9,		// �ػ��Υ�����ʡ�
    9,		// �ؼ������ơ�
    0,		// �إ��硼�ȡ��եå�����åȡ�
    0,		// �إ�󥰡��եå�����åȡ�
    0,		// ��ɹ�����
    9,		// �إե�������
    1,		// �إ֡������
    9,		// �ؤޤ��Ȥ���ᥬ�͡�
    1,		// ����ˡ�Υޥ��
    0,		// �إᥬ�ȥ�ϥ�ޡ���
    0,		// �ظ������
    9,		// �إ͡���ΰ���
    9,		// �ض��ӡ�
    9,		// ���֡ʥ饤�աˡ�
    9,		// ���ġ���ˡ�ˡ�
    9,		// ���С�ξ���ˡ�
    9,		// �������κ���
    9,		// �ص���
    9,		// �إ���������
    9,		// �إ�Ȥμ���
    9,		// �ر��
    9,		// ��˪��
    9,		// �ء��ʥϥƥʡˡ�
    9,		// �إ���������Ⱦʬ�ˡ�
    9,		// ��ͽ������
    1,          /* 33��餷�ٻҶ��ؤᤶ�ޤ����ޥ��� */
    1,          /* 34        �Ҷ��ؤᤶ�ޤ��ȥ�� */
    1,          /* 35        �Ҷ��إ�����μ��� */
    1,          /* 36        �Ҷ��إɥ���Τ��̡� */
    1,          /* 37        �Ҷ��ؤ��綠���ʤ��̡� */
    1,          /* 38        �Ҷ��إ�������Τ��̡� */
    1,          /* 39        �Ҷ��إ������������ */
    1,          /* 40        �Ҷ��إ����Τ��̡� */
    1,          /* 41        �Ҷ��إ�����Τ��̡� */
    1,          /* 42        �Ҷ��إ���ɤΤ��̡� */
    1,          /* 43        �Ҷ��ؤޤ��Ȥβ��̡� */
    1,          /* 44        �Ҷ��أӣϣ̣Ĩ��ϣգԡ� */
    0,		/* 45��餷����͡إݥ��åȥ��ޥ��� */
    0,		/* 46        ��͡ؤƤΤꥳ�å��� */
    0,		/* 47        ��͡إ������� */
    0,		/* 48        ��͡ؤ��䤷�����Υ��� */
    0,		/* 49        ��͡ؤ��䤷������ */
    0,		/* 50        ��͡�̩�ļԤΥΥ������ */
    0,		/* 51        ��͡��ޤ줿�������� */
    0,		/* 52        ��͡ؽ�������� */
    0,		/* 53        ��͡إ���ޥ������ */
    0,		/* 54        ��͡��������������� */
    0,		/* 55        ��͡إ������������� */
    0,		// �ر�ε����
    0,		// ��ɹ�ε����
    0,		// �ظ��ε����
    1,		// �إʥ��ա�
    0,		// �إޥ����������ɡ�
    0,		// �ص�ͤΥʥ��ա�
    1,		// �إǥ��ν��
    9,		// �إϥ��ꥢ�ν��
    0,		// �إߥ顼������ɡ�
    9,		// �ؤ��Ĥ������
    0,		// �إ���������
    0,		// �إ����������
    9,		// �ؤ��Ĥ�Υ֡��ġ�
    0,		// �إإӥ��֡��ġ�
    0,		// �إۥС��֡��ġ�
    1,		// �إǥ��Υ����ޡʣ����ˡ�
    1,		// �إǥ��Υ����ޡʣ����ˡ�
    1,		// �إǥ��Υ����ޡʣ����ˡ�
    0,		// �ؾ�������Ω�ơʣ����ˡ�
    0,		// ���礭����Ω�ơʣ����ˡ�
    0,		// �ؤ�ä��礭����Ω�ơʣ����ˡ�
    9,		// �ؾ������ޡʣ����ˡ�
    9,		// ���礭���ޡʣ����ˡ�
    9,		// �ؤ�ä��礭���ޡʣ����ˡ�
    1,		// ��Ƽ�Υ֥쥹��åȡ�
    0,		// �ض�Υ����֡�
    0,		// �ض�Υ����֡�
    9,		// �ض�Υ�����
    9,		// �ض�Υ�����
    0,		// ���ޤ줿��ͤΥʥ��ա�
};
    

/* �⥹�������������ץơ��֥� */
extern unchar kin_sta_suu[] = {
    0x0f, 0x1f, 0x0f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x07, 0x07,
    0x03, 0x0f, 0x07, 0x0f, 0x0f, 0xff, 0xff, 0xff, 0x1f, 0x0f, 0x03, 0x0f,
};



/*===============================================================
  =	�ʣɣ������ˣԣ�������塲�ѣ����������	=
  ===============================================================*/
extern Gfx
*texture_QuadrangleIA4( Gfx *gp, void *timg,
			short width, short height,
			unshort pt )
{
    gDPLoadTextureBlock_4b( gp++,
			    timg, G_IM_FMT_IA,
			    width, height, 0,
			    G_TX_NOMIRROR, G_TX_NOMIRROR,
			    G_TX_NOMASK,   G_TX_NOMASK,
			    G_TX_NOLOD,    G_TX_NOLOD );
    gSP1Quadrangle( gp++,
		    pt+0, pt+2, pt+3, pt+1, 0 );
    
    return gp;
}
/*===============================================================
  =	�ʣɣ������ˣԣ�������塲�ѣ����������	=
  ===============================================================*/
extern Gfx
*texture_QuadrangleIA8( Gfx *gp, void *timg,
			short width, short height,
			unshort pt )
{
    gDPLoadTextureBlock( gp++,
			 timg, G_IM_FMT_IA, G_IM_SIZ_8b,
			 width, height, 0,
			 G_TX_NOMIRROR, G_TX_NOMIRROR,
			 G_TX_NOMASK,   G_TX_NOMASK,
			 G_TX_NOLOD,    G_TX_NOLOD );
    gSP1Quadrangle( gp++,
		    pt+0, pt+2, pt+3, pt+1, 0 );

    return gp;
}




/*======================================================================*
 *	�ãɣ��Υƥ������㡼�Υ���ǥå������ѹ�����			*
 *======================================================================*/
static void
ci4_chg(
    char	*p,	/* �ǡ����Υݥ��󥿡� */
    int		size,	/* �ƥ������㡼�Υ�����(�Х��ȿ�) */
    int		a,	/* �ѹ����Υ���ǥå��� */
    int		b	/* �ѹ���Υ���ǥå��� */
    )
{
    int		i, h, l;

    a &= 0xf;
    b &= 0xf;

    if(size == 0 || a == b || p == 0) {
	return;
    }

    for(i = 0; i < size; i += 1) {
	h = l = (int)p[i];
	h = (h >> 4) & 0xf;
	l &= 0xf;
	if(h == a) {
	    h = b;
	}
	if(l == a) {
	    l = b;
	}
	p[i] = (char)((h << 4) | l);
    }
}



/*=======================================================================
  =	�����ƥॻ�å�							=
  =======================================================================*/
extern void
key_arrangement( Game_play *game_play, unshort arrangement )
{
    Kscope		*kscope = (Kscope *)&game_play->kscope;

    kscope->key_angle = arrangement;
    kscope->key_frame = 0;
    Na_StartSystemSe( NA_SE_SY_DECIDE );
}




/*=======================================================================
  =	�����ƥॻ�å�							=
  =======================================================================*/
extern void
kaleido_scope_item_set( Graph *graph, void *data, unshort width, unshort height, unshort pt )
{
    OPEN_DISP( graph );

    gDPLoadTextureBlock( NEXT_DISP,
			 data, G_IM_FMT_RGBA, G_IM_SIZ_32b, width, height, 0,
			 G_TX_WRAP | G_TX_NOMIRROR,
			 G_TX_WRAP | G_TX_NOMIRROR,
			 G_TX_NOMASK, G_TX_NOMASK,
			 G_TX_NOLOD, G_TX_NOLOD);
    gSP1Quadrangle( NEXT_DISP, pt+0, pt+2, pt+3, pt+1, 0 );

    CLOSE_DISP( graph );
}

# if 0
/*=======================================================================
  =	�����ƥ��طʥ��å�						=
  =======================================================================*/
extern void
item_back_set( Graph *graph, void *data, unshort width, unshort height )
{
    OPEN_DISP( graph );

    gDPLoadTextureBlock( NEXT_DISP,
			 data, G_IM_FMT_IA, G_IM_SIZ_8b, width, height, 0,
			 G_TX_WRAP | G_TX_NOMIRROR,
			 G_TX_WRAP | G_TX_NOMIRROR,
			 G_TX_NOMASK, G_TX_NOMASK,
			 G_TX_NOLOD, G_TX_NOLOD);
    gSP1Quadrangle( NEXT_DISP, 0, 2, 3, 1, 0 );

    CLOSE_DISP( graph );
}
# endif




/*===============================================================
  =	   �����������������å�				=
 ===============================================================*/
static void
cursor_init_check( Game_play *game_play )
{
    Kscope		*kscope = (Kscope *)&game_play->kscope;

    short	i, j;


    switch( kscope->kscp_pos ) {
    case 0:	// �����ƥॻ�쥯����
	j = kscope->select_pt[0];
	if ( Item_Register(j) == 0xff ) {
	    i = j + 1;
	    do {
		if ( Item_Register(i) != 0xff ) break;
		i++;
		if ( i >= (6 * 4) ) i = 0;
		if ( i == j ) {
		    kscope->select_name[0] = 
			kscope->zoom_name = 999;
		    return;
		}
	    } while ( 1 );
	    kscope->select_name[0] = Item_Register(i);
	    kscope->select_pt[0] = i;
	}
    case 1:	// �ͣ�����
    case 2:	// �ãϣ̣̣ţã���
    case 3:	// �ţѣգɣУͣţΣ���
	break;
    }
}



# if 0
/*===============================================================
  =	   �ҥ�������						=
 ===============================================================*/
static void
r_scroll( Kscope *kscope )
{
    kscope->kscp_status = 1;
    kscope->kscp_scroll = 0;
    kscope->kscp_mode = (unshort)(kscope->kscp_pos<<1);
    Na_StartSystemSe( NA_SE_SY_WIN_SCROLL_RIGHT );
    kscope->key_angle = 10;
    Z_BTN_ITEM(0) = button_modeR[kscope->kscp_pos][0];
    Z_BTN_ITEM(1) = button_modeR[kscope->kscp_pos][1];
    Z_BTN_ITEM(2) = button_modeR[kscope->kscp_pos][2];
    Z_BTN_ITEM(3) = button_modeR[kscope->kscp_pos][3];
    Z_PREV_ALPHA_TYPE = 0;
    alpha_change( 50 );
}
/*===============================================================
  =	   �ڥ�������						=
 ===============================================================*/
static void
z_scroll( Kscope *kscope )
{
    kscope->kscp_status = 1;
    kscope->kscp_scroll = 0;
    kscope->kscp_mode = (unshort)((kscope->kscp_pos<<1)+1);
    Na_StartSystemSe( NA_SE_SY_WIN_SCROLL_LEFT );
    kscope->key_angle = 11;
    Z_BTN_ITEM(0) = button_modeZ[kscope->kscp_pos][0];
    Z_BTN_ITEM(1) = button_modeZ[kscope->kscp_pos][1];
    Z_BTN_ITEM(2) = button_modeZ[kscope->kscp_pos][2];
    Z_BTN_ITEM(3) = button_modeZ[kscope->kscp_pos][3];
    Z_PREV_ALPHA_TYPE = 0;
    alpha_change( 50 );
}
# endif
/*===============================================================
  =	   �ڣҥ�������					=
 ===============================================================*/
static void
z_r_scroll( Kscope *kscope, unchar pt )
{
    kscope->kscp_status = 1;
    kscope->kscp_scroll = 0;
    if ( !pt ) {
	kscope->kscp_mode = (unshort)((kscope->kscp_pos<<1)+1);
	Na_StartSystemSe( NA_SE_SY_WIN_SCROLL_LEFT );
	kscope->key_angle = 11;
    } else {
	kscope->kscp_mode = (unshort)(kscope->kscp_pos<<1);
	Na_StartSystemSe( NA_SE_SY_WIN_SCROLL_RIGHT );
	kscope->key_angle = 10;
    }
#if defined(GATEWAY_VERSION)
	Z_BTN_ITEM(0) = 0xff;
#else
    Z_BTN_ITEM(0) = button_modeZR[kscope->kscp_pos+pt][0];
#endif	/* GATEWAY_VERSION */
    Z_BTN_ITEM(1) = button_modeZR[kscope->kscp_pos+pt][1];
    Z_BTN_ITEM(2) = button_modeZR[kscope->kscp_pos+pt][2];
    Z_BTN_ITEM(3) = button_modeZR[kscope->kscp_pos+pt][3];
    Z_BTN_ITEM(4) = button_modeZR[kscope->kscp_pos+pt][4];
    PRINTF("kscope->kscp_pos+pt = %d\n",kscope->kscp_pos+pt);
    Z_PREV_ALPHA_TYPE = 0;
    alpha_change( 50 );
}
/*===============================================================
  =	   �ڡ��ҥܥ��� ��������				=
 ===============================================================*/
#define KEY_FRAME	10
static void
z_r_button_scroll( Kscope *kscope, pad_t *pad )
{
    if ( !kscope->debug && Pad_on_trigger(L_TRIG) ) {
#if !defined(ROM_F)
	    kscope->debug = 1;
#endif
    } else {
	if ( Pad_on_trigger(R_TRIG) ) {
	    z_r_scroll( kscope, 2 );
	} else if ( Pad_on_trigger(Z_TRIG) ) {
	    z_r_scroll( kscope, 0 );
	} else {
	    if ( kscope->key_angle == 10 ) {
		if ( kscope->wkey_x < -KEY_ANGLE_3D ) {
		    if ( (++kscope->key_frame) >= KEY_FRAME || !kscope->key_frame ) {
			z_r_scroll( kscope, 0 );
		    }
		} else kscope->key_frame = -1;
	    } else  if ( kscope->key_angle == 11 ) {
		if ( kscope->wkey_x > KEY_ANGLE_3D ) {
		    if ( (++kscope->key_frame) >= KEY_FRAME || !kscope->key_frame ) {
			z_r_scroll( kscope, 2 );
		    }
		} else  kscope->key_frame = -1;
	    }
	}
    }
}

/*===============================================================
  =	��������ɽ��						=
  ===============================================================*/
extern void
cursor_draw( Game_play *game_play, unshort pos  )
{
    Kscope		*kscope = (Kscope *)&game_play->kscope;
    
    static unchar *cursor_data[] = {
	h_cursor0_txt, h_cursor1_txt, h_cursor2_txt, h_cursor3_txt,
    };
    static short cursol_color_prim[][3] = {
    	{255, 255, 255, },		/* �� */

    	{255, 255,   0, },		/* �� */

    	{  0,  50, 255, },		/* �� */
    };
    short		i, j;
    
    
    OPEN_DISP( game_play->g.graph );

    if ( (!kscope->kscp_status || kscope->kscp_status == 0x8) && kscope->pause == Pause_Play ||
	 (kscope->kscp_pos == Display_Collect &&
	  (kscope->kscp_status < 0x03 || kscope->kscp_status == 0x5 || kscope->kscp_status == 0x8) ) ) {
	if ( kscope->kscp_pos == pos ) {
	    gDPPipeSync( NEXT_DISP );
	    gDPSetCombineMode( NEXT_DISP, G_CC_INT9, G_CC_INT9 );
	    gDPSetPrimColor( NEXT_DISP, 0, 0,
			     cursol_color_prim[kscope->cursor_colp>>2][0],
			     cursol_color_prim[kscope->cursor_colp>>2][1],
			     cursol_color_prim[kscope->cursor_colp>>2][2],
			     255 );
	    gDPSetEnvColor( NEXT_DISP, red, green, blue, 255 );
	    gSPVertex( NEXT_DISP, &(kscope->cursolVtx[0]), 16, 0);
	    for ( i = j = 0; i < 4; i++, j+=4 ) {
		gDPLoadTextureBlock_4b( NEXT_DISP,
					cursor_data[i], G_IM_FMT_IA, 16, 16, 0,
					G_TX_WRAP | G_TX_NOMIRROR,
					G_TX_WRAP | G_TX_NOMIRROR,
					G_TX_NOMASK, G_TX_NOMASK,
					G_TX_NOLOD, G_TX_NOLOD);
		gSP1Quadrangle( NEXT_DISP, j+0, j+2, j+3, j+1, 0 );
	    }
	}
	gDPPipeSync( NEXT_DISP );
	gDPSetEnvColor( NEXT_DISP, 0, 0, 0, 255 );

    }

    CLOSE_DISP( game_play->g.graph );
}

#ifdef NEW_KALEIDOSCOPE
/*----------------------------------------------------------------------*/
/*									*/
/*----------------------------------------------------------------------*/
static Gfx *Set_KaleidoScope_DisplayList( Gfx *graph, Vtx *vtx, unsigned char *tex[] )
{
    register int	i, j;

    gSPVertex( graph++, vtx, 32, 0 );
    i = j = 0;
    while ( i < 32 ) {
	gDPPipeSync( graph++ );
	gDPLoadTextureBlock( graph++, tex[j], G_IM_FMT_IA, G_IM_SIZ_8b, 80, 32, 0,
			     G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR,
			     G_TX_NOMASK, G_TX_NOMASK,
			     G_TX_NOLOD, G_TX_NOLOD );
	gSP1Quadrangle( graph++, i+0, i+2, i+3, i+1, 0 );
	i += 4;
	j ++;
    }
    gSPVertex( graph++, vtx+32, 28, 0 );
    i = 0;
    while ( i < 28 ) {
	gDPPipeSync( graph++ );
	gDPLoadTextureBlock( graph++, tex[j], G_IM_FMT_IA, G_IM_SIZ_8b, 80, 32, 0,
			     G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR,
			     G_TX_NOMASK, G_TX_NOMASK,
			     G_TX_NOLOD, G_TX_NOLOD );
	gSP1Quadrangle( graph++, i+0, i+2, i+3, i+1, 0 );
	i += 4;
	j ++;
    }

    return graph;
}
#endif	/* NEW_KALEIDOSCOPE */

/*===============================================================
  =	���쥤�ɡ��������� ���̺���				=
  ===============================================================*/
static void
kaleido_scope_set( Game_play *game_play, Graph *graph  )
{
    Kscope		*kscope = (Kscope *)&game_play->kscope;

    static unchar *mes_save_data[] = {
	h_mes_save_txt, h_mes_save_nes_txt,
    };
    static unchar *mes_save2_data[] = {
	h_mes_save2_txt, h_mes_save2_nes_txt,
    };
    static unchar *mes_save3_data[] = {
	h_mes_save3_txt, h_mes_save3_nes_txt,
    };
# if 0
    static unchar *save_comment1_data[] = {
	h_save_comment_1_txt, h_save_comment_1_nes_txt,
    };
    static unchar *save_comment2_data[] = {
	h_save_comment_2_txt, h_save_comment_2_nes_txt,
    };
# endif
    static unchar *save_yes_no_data[][2] = {
	{ h_save_yes_txt, h_save_no_txt, },
	{ h_save_yes_nes_txt, h_save_no_nes_txt, },
    };

    static short cursol_color_env[][3] = {
    	{  0,   0,   0, },		/* �� */
    	{  0,   0,   0, },
    	{  0,   0,   0, },
    	{  0,   0,   0, },		/* �� */

    	{255, 255,   0, },		/* �� */
    	{  0,   0,   0, },
    	{  0,   0,   0, },
    	{255, 255,   0, },		/* �� */

    	{  0,  50, 255, },		/* �� */
    	{  0,   0,   0, },
    	{  0,   0,   0, },
    	{  0,  50, 255, },		/* �� */
    };

    static short	mc = 20, mp = 0;
    short		rc, gc, bc;

#if !HAYAKAWA_TESTkk				/* ### delete by hayakawa */
    static short	key_wait_x = 0, key_wait_y = 0;	/* �ˣţ٥����ޡ� */
    static short	old_key_x = 0, old_key_y = 0;	/* �����å��ˣ�� */
#endif

    OPEN_DISP( graph );

    if ( !(kscope->pause >= Pause_Gameover_C && kscope->pause <= Pause_Gameover_E) ) {
	if ( kscope->pause != Pause_Save ) {
	    /* �إ�������ɽ�� */
	    rc = (ABS(red - cursol_color_env[kscope->cursor_colp+mp][0] )) / mc;
	    gc = (ABS(green - cursol_color_env[kscope->cursor_colp+mp][1] )) / mc;
	    bc = (ABS(blue - cursol_color_env[kscope->cursor_colp+mp][2] )) / mc;
	    if ( red >= cursol_color_env[kscope->cursor_colp+mp][0] ) red -= rc;
	    else						      red += rc;
	    if ( green >= cursol_color_env[kscope->cursor_colp+mp][1] ) green -= gc;
	    else						        green += gc;
	    if ( blue >= cursol_color_env[kscope->cursor_colp+mp][2] ) blue -= bc;
	    else						       blue += bc;
	    if ( !(--mc) ) {
		red = cursol_color_env[kscope->cursor_colp+mp][0];
		green = cursol_color_env[kscope->cursor_colp+mp][1];
		blue = cursol_color_env[kscope->cursor_colp+mp][2];
		mc = ZREG(28 + mp);
		if ( ++mp >= 4 ) mp = 0;
	    }
	    
#if !HAYAKAWA_TESTkk				/* ### delete by hayakawa */
	    /* ���ϣˣţ٥����å� */
	    if ( kscope->wkey_x < -KEY_ANGLE_3D ) {
		if (  old_key_x == -1 ) {
		    if ( --key_wait_x < 0 ) key_wait_x = XREG(6);
		    else kscope->wkey_x = 0;
		} else {
		    key_wait_x = XREG(8);
		    old_key_x  = -1;
		}
	    } else if ( kscope->wkey_x > KEY_ANGLE_3D ) {
		if (  old_key_x == 1 ) {
		    if ( --key_wait_x < 0 ) key_wait_x = XREG(6);
		    else kscope->wkey_x = 0;
		} else {
		    key_wait_x = XREG(8);
		    old_key_x  = 1;
		}
	    } else old_key_x = 0;
	    if ( kscope->wkey_y < -KEY_ANGLE_3D ) {
		if (  old_key_y == -1 ) {
		    if ( --key_wait_y < 0 ) key_wait_y = XREG(6);
		    else kscope->wkey_y = 0;
		} else {
		    key_wait_y = XREG(8);
		    old_key_y  = -1;
		}
	    } else if ( kscope->wkey_y > KEY_ANGLE_3D ) {
		if (  old_key_y == 1 ) {
		    if ( --key_wait_y < 0 ) key_wait_y = XREG(6);
		    else kscope->wkey_y = 0;
		} else {
		    key_wait_y = XREG(8);
		    old_key_y  = 1;
		}
	    } else old_key_y = 0;
#endif
	}


	/*
	 * ����ɽ������
	 */
	if ( kscope->kscp_pos ) {
	    /*================= �����ƥॻ�쥯���� =================*/
	    gDPPipeSync( NEXT_DISP );
	    gDPSetCombineMode( NEXT_DISP, G_CC_MODULATEIA, G_CC_MODULATEIA );
////////	Matrix_translate( 0.0f, (float)WREG(2)/100.0f, -kscope->translate/10.0f, SET_MTX );
	    Matrix_translate( 0.0f, (float)WREG(2)/100.0f, -(float)WREG(3)/100.0f, SET_MTX );
	    Matrix_scale( (float)SCALE_X/10000.0f, (float)SCALE_Y/10000.0f, (float)SCALE_Z/10000.0f, MULT_MTX );
	    Matrix_rotateX( -kscope->angle_i/100.0f, MULT_MTX );
	    gSPMatrix( NEXT_DISP, Matrix_to_Mtx_new(graph), G_MTX_MODELVIEW | G_MTX_LOAD | G_MTX_NOPUSH );
#ifdef NEW_KALEIDOSCOPE
	    SET_NOW_DISP(Set_KaleidoScope_DisplayList( NOW_DISP, (Vtx *)kscope->item_frame_Vtx,
			    ( J_N ) ? KaleidoScope_Item_Nes_Tex : KaleidoScope_Item_Tex ));
#endif	/* NEW_KALEIDOSCOPE */
#ifndef NEW_KALEIDOSCOPE
	    gSPVertex( NEXT_DISP, &(kscope->item_frame_Vtx[0]), 32, 0);
	    gSPDisplayList( NEXT_DISP, item_frame_dl100 );
	    gSPVertex( NEXT_DISP, &(kscope->item_frame_Vtx[32]), 28, 0);
	    gSPDisplayList( NEXT_DISP, item_frame_dl101 );
#endif	/* !NEW_KALEIDOSCOPE */
	    item_select_disp( game_play );
	}
	
	if ( kscope->kscp_pos != Display_Equipment ) {
	    /*================ �ţѣգɣУͣţΣ��� ================*/
	    gDPPipeSync( NEXT_DISP );
	    gDPSetCombineMode( NEXT_DISP, G_CC_MODULATEIA, G_CC_MODULATEIA );
////////	Matrix_translate( -kscope->translate/10.0f, (float)WREG(2)/100.0f, 0.0f, SET_MTX );
	    Matrix_translate( -(float)WREG(3)/100.0f, (float)WREG(2)/100.0f, 0.0f, SET_MTX );
	    Matrix_scale( (float)SCALE_X/10000.0f, (float)SCALE_Y/10000.0f, (float)SCALE_Z/10000.0f, MULT_MTX );
	    Matrix_rotateZ( kscope->angle_e/100.0f, MULT_MTX );
	    Matrix_rotateY( (float)MAP_Y_ANGLE/100.0f, MULT_MTX );
	    gSPMatrix( NEXT_DISP, Matrix_to_Mtx_new(graph), G_MTX_MODELVIEW | G_MTX_LOAD | G_MTX_NOPUSH );
#ifdef NEW_KALEIDOSCOPE
	    SET_NOW_DISP(Set_KaleidoScope_DisplayList( NOW_DISP, (Vtx *)kscope->equipment_frame_Vtx,
			    ( J_N ) ? KaleidoScope_Equipment_Nes_Tex : KaleidoScope_Equipment_Tex ));
#endif	/* NEW_KALEIDOSCOPE */
#ifndef NEW_KALEIDOSCOPE
	    gSPVertex( NEXT_DISP, &(kscope->equipment_frame_Vtx[0]), 32, 0);
	    gSPDisplayList( NEXT_DISP, equipment_frame_dl100 );
	    gSPVertex( NEXT_DISP, &(kscope->equipment_frame_Vtx[32]), 28, 0);
	    gSPDisplayList( NEXT_DISP, equipment_frame_dl101 );
#endif	/* !NEW_KALEIDOSCOPE */
	    equipment_disp( game_play );
	}
	
	if ( kscope->kscp_pos != Display_Collect ) {
	    /*================== �ãϣ̣̣ţã��� ==================*/
	    gDPPipeSync( NEXT_DISP );
	    gDPSetTextureFilter( NEXT_DISP, G_TF_BILERP );
	    gDPSetCombineMode( NEXT_DISP, G_CC_MODULATEIA, G_CC_MODULATEIA );
////////	Matrix_translate( 0.0f, (float)WREG(2)/100.0f, kscope->translate/10.0f, SET_MTX );
	    Matrix_translate( 0.0f, (float)WREG(2)/100.0f, (float)WREG(3)/100.0f, SET_MTX );
	    Matrix_scale( (float)SCALE_X/10000.0f, (float)SCALE_Y/10000.0f, (float)SCALE_Z/10000.0f, MULT_MTX );
	    Matrix_rotateX( kscope->angle_c/100.0f, MULT_MTX );
	    Matrix_rotateY( (float)COLLECT_Y_ANGLE/100.0f, MULT_MTX );
	    gSPMatrix( NEXT_DISP, Matrix_to_Mtx_new(graph), G_MTX_MODELVIEW | G_MTX_LOAD | G_MTX_NOPUSH );
#ifdef NEW_KALEIDOSCOPE
	    SET_NOW_DISP(Set_KaleidoScope_DisplayList( NOW_DISP, (Vtx *)kscope->collect_frame_Vtx,
			    ( J_N ) ? KaleidoScope_Collect_Nes_Tex : KaleidoScope_Collect_Tex ));
#endif	/* NEW_KALEIDOSCOPE */
#ifndef NEW_KALEIDOSCOPE
	    gSPVertex( NEXT_DISP, &(kscope->collect_frame_Vtx[0]), 32, 0);
	    gSPDisplayList( NEXT_DISP, collectitems_frame_dl100 );
	    gSPVertex( NEXT_DISP, &(kscope->collect_frame_Vtx[32]), 28, 0);
	    gSPDisplayList( NEXT_DISP, collectitems_frame_dl101 );
#endif	/* !NEW_KALEIDOSCOPE */
	    collect_disp( game_play, graph );
	}
	
	if ( kscope->kscp_pos != Display_Map ) {
	    /*===================== �ͣ����� =======================*/
	    gDPPipeSync( NEXT_DISP );
	    gDPSetCombineMode( NEXT_DISP, G_CC_MODULATEIA, G_CC_MODULATEIA );
////////	Matrix_translate( kscope->translate/10.0f, (float)WREG(2)/100.0f, 0.0f, SET_MTX );
	    Matrix_translate( (float)WREG(3)/100.0f, (float)WREG(2)/100.0f, 0.0f, SET_MTX );
	    Matrix_scale( (float)SCALE_X/10000.0f, (float)SCALE_Y/10000.0f, (float)SCALE_Z/10000.0f, MULT_MTX );
	    Matrix_rotateZ( -kscope->angle_m/100.0f, MULT_MTX );
	    Matrix_rotateY( (float)EQUIPMENT_Y_ANGLE/100.0f, MULT_MTX );
	    gSPMatrix( NEXT_DISP, Matrix_to_Mtx_new(graph), G_MTX_MODELVIEW | G_MTX_LOAD | G_MTX_NOPUSH );
#ifdef NEW_KALEIDOSCOPE
	    SET_NOW_DISP(Set_KaleidoScope_DisplayList( NOW_DISP, (Vtx *)kscope->map_frame_Vtx,
			    ( J_N ) ? KaleidoScope_Map_Nes_Tex : KaleidoScope_Map_Tex ));
#endif	/* NEW_KALEIDOSCOPE */
#ifndef NEW_KALEIDOSCOPE
	    gSPVertex( NEXT_DISP, &(kscope->map_frame_Vtx[0]), 32, 0);
	    gSPDisplayList( NEXT_DISP, map_frame_dl100 );
	    gSPVertex( NEXT_DISP, &(kscope->map_frame_Vtx[32]), 28, 0);
	    gSPDisplayList( NEXT_DISP, map_frame_dl101 );
#endif	/* !NEW_KALEIDOSCOPE */
/*	if ( game_play->room_info.now.type == ROOM_TYPE_DANGEON && game_play->scene_data_ID != MEN ) {*/
	    if ( FIELD_DUNGEON ) {
		/* ���󥸥��ͣ��� */
		dungeon_map_disp( game_play, graph );
		kaleido_scope_prim( graph );
		gDPSetCombineMode( NEXT_DISP, G_CC_MODULATERGBA_PRIM, G_CC_MODULATERGBA_PRIM );
		if ( GetKeyCompassMap(Scene_ID,H_compass) ) {
		    LargeMapMarkDisplay( game_play );
		}
	    } else {
		/* �ե�����ɣͣ��� */
		field_map_disp( game_play, graph );
	    }
	}
	
	
	gDPPipeSync( NEXT_DISP );
	gDPSetCombineMode( NEXT_DISP, G_CC_MODULATEIA, G_CC_MODULATEIA );
	
	switch ( kscope->kscp_pos ) {
	case Display_Item:
	    /*================= �����ƥॻ�쥯���� =================*/
////////	Matrix_translate( 0.0f, (float)WREG(2)/100.0f, -kscope->translate/10.0f, SET_MTX );
	    Matrix_translate( 0.0f, (float)WREG(2)/100.0f, -(float)WREG(3)/100.0f, SET_MTX );
	    Matrix_scale( (float)SCALE_X/10000.0f, (float)SCALE_Y/10000.0f, (float)SCALE_Z/10000.0f, MULT_MTX );
	    /* ���� */
	    Matrix_rotateX( -kscope->angle_i/100.0f, MULT_MTX );
	    gSPMatrix( NEXT_DISP, Matrix_to_Mtx_new(graph), G_MTX_MODELVIEW | G_MTX_LOAD | G_MTX_NOPUSH );
#ifdef NEW_KALEIDOSCOPE
	    SET_NOW_DISP(Set_KaleidoScope_DisplayList( NOW_DISP, (Vtx *)kscope->item_frame_Vtx,
			    ( J_N ) ? KaleidoScope_Item_Nes_Tex : KaleidoScope_Item_Tex ));
#endif	/* NEW_KALEIDOSCOPE */
#ifndef NEW_KALEIDOSCOPE
	    gSPVertex( NEXT_DISP, &(kscope->item_frame_Vtx[0]), 32, 0);
	    gSPDisplayList( NEXT_DISP, item_frame_dl100 );
	    gSPVertex( NEXT_DISP, &(kscope->item_frame_Vtx[32]), 28, 0);
	    gSPDisplayList( NEXT_DISP, item_frame_dl101 );
#endif	/* !NEW_KALEIDOSCOPE */
	    item_select_disp( game_play );
	    break;
	    
	case Display_Map:
	    /*===================== �ͣ����� =======================*/
////////	Matrix_translate( kscope->translate/10.0f, (float)WREG(2)/100.0f, 0.0f, SET_MTX );
	    Matrix_translate( (float)WREG(3)/100.0f, (float)WREG(2)/100.0f, 0.0f, SET_MTX );
	    Matrix_scale( (float)SCALE_X/10000.0f, (float)SCALE_Y/10000.0f, (float)SCALE_Z/10000.0f, MULT_MTX );
	    /* ���� */
	    Matrix_rotateZ( -kscope->angle_m/100.0f, MULT_MTX );
	    Matrix_rotateY( (float)EQUIPMENT_Y_ANGLE/100.0f, MULT_MTX );
	    gSPMatrix( NEXT_DISP, Matrix_to_Mtx_new(graph), G_MTX_MODELVIEW | G_MTX_LOAD | G_MTX_NOPUSH );
#ifdef NEW_KALEIDOSCOPE
	    SET_NOW_DISP(Set_KaleidoScope_DisplayList( NOW_DISP, (Vtx *)kscope->map_frame_Vtx,
			    ( J_N ) ? KaleidoScope_Map_Nes_Tex : KaleidoScope_Map_Tex ));
#endif	/* NEW_KALEIDOSCOPE */
#ifndef NEW_KALEIDOSCOPE
	    gSPVertex( NEXT_DISP, &(kscope->map_frame_Vtx[0]), 32, 0);
	    gSPDisplayList( NEXT_DISP, map_frame_dl100 );
	    gSPVertex( NEXT_DISP, &(kscope->map_frame_Vtx[32]), 28, 0);
	    gSPDisplayList( NEXT_DISP, map_frame_dl101 );
#endif	/* NEW_KALEIDOSCOPE */
/*	if ( game_play->room_info.now.type == ROOM_TYPE_DANGEON && game_play->scene_data_ID != MEN ) {*/
	    if ( FIELD_DUNGEON ) {
		/* ���󥸥��ͣ��� */
		dungeon_map_disp( game_play, graph );
		kaleido_scope_prim( graph );
		gDPSetCombineMode( NEXT_DISP, G_CC_MODULATERGBA_PRIM, G_CC_MODULATERGBA_PRIM );
		if ( !kscope->key_angle ) {
		    cursor_draw( game_play, Display_Map );
		}
		if ( GetKeyCompassMap(Scene_ID,H_compass) ) {
		    LargeMapMarkDisplay( game_play );
		}
	    } else {
		/* �ե�����ɣͣ��� */
		field_map_disp( game_play, graph );
////////	    if ( !kscope->key_angle ) {
////////		cursor_draw( game_play, Display_Map );
////////	    }
	    }
	    break;

	case Display_Collect:
	    /*================== �ãϣ̣̣ţã��� ==================*/
	    gDPSetTextureFilter( NEXT_DISP, G_TF_BILERP );
////////	Matrix_translate( 0.0f, (float)WREG(2)/100.0f, kscope->translate/10.0f, SET_MTX );
	    Matrix_translate( 0.0f, (float)WREG(2)/100.0f, (float)WREG(3)/100.0f, SET_MTX );
	    Matrix_scale( (float)SCALE_X/10000.0f, (float)SCALE_Y/10000.0f, (float)SCALE_Z/10000.0f, MULT_MTX );
	    Matrix_rotateX( kscope->angle_c/100.0f, MULT_MTX );
	    Matrix_rotateY( (float)COLLECT_Y_ANGLE/100.0f, MULT_MTX );
	    gSPMatrix( NEXT_DISP, Matrix_to_Mtx_new(graph), G_MTX_MODELVIEW | G_MTX_LOAD | G_MTX_NOPUSH );
#ifdef NEW_KALEIDOSCOPE
	    SET_NOW_DISP(Set_KaleidoScope_DisplayList( NOW_DISP, (Vtx *)kscope->collect_frame_Vtx,
			    ( J_N ) ? KaleidoScope_Collect_Nes_Tex : KaleidoScope_Collect_Tex ));
#endif	/* NEW_KALEIDOSCOPE */
#ifndef NEW_KALEIDOSCOPE
	    gSPVertex( NEXT_DISP, &(kscope->collect_frame_Vtx[0]), 32, 0);
	    gSPDisplayList( NEXT_DISP, collectitems_frame_dl100 );
	    gSPVertex( NEXT_DISP, &(kscope->collect_frame_Vtx[32]), 28, 0);
	    gSPDisplayList( NEXT_DISP, collectitems_frame_dl101 );
#endif	/* !NEW_KALEIDOSCOPE */
	    collect_disp( game_play, graph );
	    if ( !kscope->key_angle ) {
		cursor_draw( game_play, Display_Collect );
	    }
	    break;
	    
	case Display_Equipment:
	    /*================ �ţѣգɣУͣţΣ��� ================*/
////////	Matrix_translate( -kscope->translate/10.0f, (float)WREG(2)/100.0f, 0.0f, SET_MTX );
	    Matrix_translate( -(float)WREG(3)/100.0f, (float)WREG(2)/100.0f, 0.0f, SET_MTX );
	    Matrix_scale( (float)SCALE_X/10000.0f, (float)SCALE_Y/10000.0f, (float)SCALE_Z/10000.0f, MULT_MTX );
	    Matrix_rotateZ( kscope->angle_e/100.0f, MULT_MTX );
	    Matrix_rotateY( (float)MAP_Y_ANGLE/100.0f, MULT_MTX );
	    gSPMatrix( NEXT_DISP, Matrix_to_Mtx_new(graph), G_MTX_MODELVIEW | G_MTX_LOAD | G_MTX_NOPUSH );
#ifdef NEW_KALEIDOSCOPE
	    SET_NOW_DISP(Set_KaleidoScope_DisplayList( NOW_DISP, (Vtx *)kscope->equipment_frame_Vtx,
			    ( J_N ) ? KaleidoScope_Equipment_Nes_Tex : KaleidoScope_Equipment_Tex ));
#endif	/* NEW_KALEIDOSCOPE */
#ifndef NEW_KALEIDOSCOPE
	    gSPVertex( NEXT_DISP, &(kscope->equipment_frame_Vtx[0]), 32, 0);
	    gSPDisplayList( NEXT_DISP, equipment_frame_dl100 );
	    gSPVertex( NEXT_DISP, &(kscope->equipment_frame_Vtx[32]), 28, 0);
	    gSPDisplayList( NEXT_DISP, equipment_frame_dl101 );
#endif	/* !NEW_KALEIDOSCOPE */
	    equipment_disp( game_play );
	    if ( !kscope->key_angle ) {
		cursor_draw( game_play, Display_Equipment );
	    }
	    break;
	}
    }

    /*================= �ӣ��֣��� =================*/
    kaleido_scope_prim( graph );
    if ( kscope->pause == Pause_Save || (kscope->pause >= Pause_Gameover_C && kscope->pause <= Pause_Gameover_E) ) {
	reset_disp( game_play );

/*	parameter->a_alpha = XREG(63);
	parameter->c_alpha = XREG(63);
	parameter->c_alpha1 = XREG(63);
	parameter->c_alpha2 = XREG(63);*/
	gDPSetCombineMode( NEXT_DISP, G_CC_MODULATEIA, G_CC_MODULATEIA );
	if ( !kscope->kscp_pos ) {
	    /* �ɣԣţ��� */
	    kscope->angle_i = kscope->angle_s + 314.0f;
	    Matrix_translate( 0.0f, (float)WREG(2)/100.0f, -kscope->translate/10.0f, SET_MTX );
	    Matrix_scale( (float)SCALE_X/10000.0f, (float)SCALE_Y/10000.0f, (float)SCALE_Z/10000.0f, MULT_MTX );
	    Matrix_rotateX( -kscope->angle_s/100.0f, MULT_MTX );
	} else if ( kscope->kscp_pos == Display_Map ) {
	    /* �ͣ����� */
	    kscope->angle_m = kscope->angle_s + 314.0f;
	    Matrix_translate( kscope->translate/10.0f, (float)WREG(2)/100.0f, 0.0f, SET_MTX );
	    Matrix_scale( (float)SCALE_X/10000.0f, (float)SCALE_Y/10000.0f, (float)SCALE_Z/10000.0f, MULT_MTX );
	    Matrix_rotateZ( -kscope->angle_s/100.0f, MULT_MTX );
	    Matrix_rotateY( (float)EQUIPMENT_Y_ANGLE/100.0f, MULT_MTX );
	} else if ( kscope->kscp_pos == Display_Collect ) {
	    /* �ãϣ̣̣ţã��� */
	    kscope->angle_c = kscope->angle_s + 314.0f;
	    Matrix_translate( 0.0f, (float)WREG(2)/100.0f, kscope->translate/10.0f, SET_MTX );
	    Matrix_scale( (float)SCALE_X/10000.0f, (float)SCALE_Y/10000.0f, (float)SCALE_Z/10000.0f, MULT_MTX );
	    Matrix_rotateX( kscope->angle_s/100.0f, MULT_MTX );
	    Matrix_rotateY( (float)COLLECT_Y_ANGLE/100.0f, MULT_MTX );
	} else {
	    /* �ţѣգɣ��� */
	    kscope->angle_e = kscope->angle_s + 314.0f;
	    Matrix_translate( -kscope->translate/10.0f, (float)WREG(2)/100.0f, 0.0f, SET_MTX );
	    Matrix_scale( (float)SCALE_X/10000.0f, (float)SCALE_Y/10000.0f, (float)SCALE_Z/10000.0f, MULT_MTX );
	    Matrix_rotateZ( kscope->angle_s/100.0f, MULT_MTX );
	    Matrix_rotateY( (float)MAP_Y_ANGLE/100.0f, MULT_MTX );
	}
	gSPMatrix( NEXT_DISP, Matrix_to_Mtx_new(graph), G_MTX_MODELVIEW | G_MTX_LOAD | G_MTX_NOPUSH );
////////	gSPVertex( NEXT_DISP, &(kscope->save_frame_Vtx[0]), 32, 0);
////////	gSPDisplayList( NEXT_DISP, save_frame_dl100 );
////////	gSPVertex( NEXT_DISP, &(kscope->save_frame_Vtx[32]), 28, 0);
////////	gSPDisplayList( NEXT_DISP, save_frame_dl101 );
////////	gSPVertex( NEXT_DISP, &(kscope->save_frame_Vtx[60]), 12, 0);
////////	gSPDisplayList( NEXT_DISP, save_frame_dl102 );
#ifdef NEW_KALEIDOSCOPE
	if ( kscope->pause >= Pause_Gameover_C && kscope->pause <= Pause_Gameover_E ) {
	    SET_NOW_DISP(Set_KaleidoScope_DisplayList( NOW_DISP, (Vtx *)kscope->saveVtx,
			    KaleidoScope_Save_Gameover_Tex ));
	} else {
	    SET_NOW_DISP(Set_KaleidoScope_DisplayList( NOW_DISP, (Vtx *)kscope->saveVtx,
			    ( J_N ) ? KaleidoScope_Save_Nes_Tex : KaleidoScope_Save_Tex ));
	}
#endif	/* NEW_KALEIDOSCOPE */
#ifndef NEW_KALEIDOSCOPE
	gSPVertex( NEXT_DISP, &(kscope->saveVtx[0]), 32, 0);
	gSPDisplayList( NEXT_DISP, save_frame_dl000 );
	gSPVertex( NEXT_DISP, &(kscope->saveVtx[32]), 28, 0);
	gSPDisplayList( NEXT_DISP, save_frame_dl001 );
#endif	/* !NEW_KALEIDOSCOPE */
////////	gSPDisplayList( NEXT_DISP, save_frame_dl001 );
//	PRINTF("kscp_status=%d\n",kscope->kscp_status);
	gSPVertex( NEXT_DISP, &(kscope->saveVtx[60]), 32, 0);
	if ( (kscope->pause == Pause_Save && kscope->save_status < Save_Save) || kscope->pause == Pause_Gameover_P ) {
////////	    gSPDisplayList( NEXT_DISP, save_frame_dl100 );
/*	    gDPLoadTextureBlock ( NEXT_DISP, mes_save_data[J_N], G_IM_FMT_IA, G_IM_SIZ_8b, 152, 16, 0,
	    G_TX_WRAP | G_TX_NOMIRROR,
	    G_TX_WRAP | G_TX_NOMIRROR,
	    G_TX_NOMASK, G_TX_NOMASK,
	    G_TX_NOLOD, G_TX_NOLOD);
	    gSP1Quadrangle( NEXT_DISP, 0, 2, 3, 1, 0 );*/
	    SET_NOW_DISP( texture_QuadrangleIA8( NOW_DISP, mes_save_data[J_N],
						 152, 16,
						 0 )
		);
////////	    gDPSetCombineMode( NEXT_DISP, G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM );
	    gDPSetCombineMode( NEXT_DISP, G_CC_INT2, G_CC_INT2 );
	    gDPSetPrimColor( NEXT_DISP, 0, 0, 100, 100, 255, VREG(61) );
	    if ( !kscope->save_cursor ) {
////////		gSPVertex( NEXT_DISP, &(kscope->saveVtx[64]), 4, 0);
		gSPDisplayList( NEXT_DISP, save_frame_dl200 );
	    } else {
////////		gSPVertex( NEXT_DISP, &(kscope->saveVtx[68]), 4, 0);
		gSPDisplayList( NEXT_DISP, save_frame_dl201 );
	    }
	    gDPPipeSync( NEXT_DISP );
	    gDPSetCombineMode( NEXT_DISP, G_CC_MODULATEIA, G_CC_MODULATEIA );
	    gDPSetPrimColor( NEXT_DISP, 0, 0, 255, 255, 255, kscope->alpha );
////////	    gSPVertex( NEXT_DISP, &(kscope->saveVtx[72]), 8, 0);
////////	    gSPDisplayList( NEXT_DISP, save_frame_dl300 );
/*	    gDPLoadTextureBlock ( NEXT_DISP, save_yes_no_data[J_N][0],
	    G_IM_FMT_IA, G_IM_SIZ_8b, 48, 16, 0,
	    G_TX_WRAP | G_TX_NOMIRROR,
	    G_TX_WRAP | G_TX_NOMIRROR,
	    G_TX_NOMASK, G_TX_NOMASK,
	    G_TX_NOLOD, G_TX_NOLOD);
	    gSP1Quadrangle( NEXT_DISP, 12, 14, 15, 13, 0 );*/
	    SET_NOW_DISP( texture_QuadrangleIA8( NOW_DISP, save_yes_no_data[J_N][0],
						 48, 16,
						 12 )
		);
/*	    gDPLoadTextureBlock ( NEXT_DISP, save_yes_no_data[J_N][1],
	    G_IM_FMT_IA, G_IM_SIZ_8b, 48, 16, 0,
	    G_TX_WRAP | G_TX_NOMIRROR,
	    G_TX_WRAP | G_TX_NOMIRROR,
	    G_TX_NOMASK, G_TX_NOMASK,
	    G_TX_NOLOD, G_TX_NOLOD);
	    gSP1Quadrangle( NEXT_DISP, 16, 18, 19, 17, 0 );*/
	    SET_NOW_DISP( texture_QuadrangleIA8( NOW_DISP, save_yes_no_data[J_N][1],
						 48, 16,
						 16 )
		);
	} else if ( (kscope->pause == Pause_Save && kscope->save_status >= Save_Save) || kscope->pause == Pause_Gameover_S ) {
////////	    gSPDisplayList( NEXT_DISP, save_frame_dl101 );
/*	    gDPLoadTextureBlock ( NEXT_DISP, mes_save2_data[J_N], G_IM_FMT_IA, G_IM_SIZ_8b, 152, 16, 0,
	    G_TX_WRAP | G_TX_NOMIRROR,
	    G_TX_WRAP | G_TX_NOMIRROR,
	    G_TX_NOMASK, G_TX_NOMASK,
	    G_TX_NOLOD, G_TX_NOLOD);
	    gSP1Quadrangle( NEXT_DISP, 0, 2, 3, 1, 0 );*/
	    SET_NOW_DISP( texture_QuadrangleIA8( NOW_DISP, mes_save2_data[J_N],
						 152, 16,
						 0 )
		);
	} else if ( kscope->pause == Pause_Gameover_N || kscope->pause == Pause_Gameover_E ) {
	    SET_NOW_DISP( texture_QuadrangleIA8( NOW_DISP, mes_save3_data[J_N],
						 152, 16,
						 0 )
		);
	    gDPSetCombineMode( NEXT_DISP, G_CC_INT2, G_CC_INT2 );
	    gDPSetPrimColor( NEXT_DISP, 0, 0, 100, 100, 255, VREG(61) );
	    if ( !kscope->save_cursor ) {
		gSPDisplayList( NEXT_DISP, save_frame_dl200 );
	    } else {
		gSPDisplayList( NEXT_DISP, save_frame_dl201 );
	    }
	    gDPPipeSync( NEXT_DISP );
	    gDPSetCombineMode( NEXT_DISP, G_CC_MODULATEIA, G_CC_MODULATEIA );
	    gDPSetPrimColor( NEXT_DISP, 0, 0, 255, 255, 255, kscope->alpha );
	    SET_NOW_DISP( texture_QuadrangleIA8( NOW_DISP, save_yes_no_data[J_N][0],
						 48, 16,
						 12 )
		);
	    SET_NOW_DISP( texture_QuadrangleIA8( NOW_DISP, save_yes_no_data[J_N][1],
						 48, 16,
						 16 )
		);
	}
	gDPPipeSync( NEXT_DISP );
	gDPSetCombineMode( NEXT_DISP, G_CC_INT9, G_CC_INT9 );
	if ( !(kscope->pause == Pause_Gameover_N || kscope->pause == Pause_Gameover_E) ) {
////////	gSPVertex( NEXT_DISP, &(kscope->saveVtx[80]), 8, 0);
	    gDPSetPrimColor( NEXT_DISP, 0, 0, 255, 255,   0, kscope->alpha );
	    gDPSetEnvColor( NEXT_DISP, 0, 0, 0, 0 );
////////	gSPDisplayList( NEXT_DISP, save_frame_dl400 );
# if 0
/*	gDPLoadTextureBlock ( NEXT_DISP, save_comment1_data[J_N], G_IM_FMT_IA, G_IM_SIZ_8b, 144, 16, 0,
	G_TX_WRAP | G_TX_NOMIRROR,
	G_TX_WRAP | G_TX_NOMIRROR,
	G_TX_NOMASK, G_TX_NOMASK,
	G_TX_NOLOD, G_TX_NOLOD);
	gSP1Quadrangle( NEXT_DISP, 20, 22, 23, 21, 0 );*/
	    SET_NOW_DISP( texture_QuadrangleIA8( NOW_DISP, save_comment1_data[J_N],
						 144, 16,
						 20 )
		);
/*	gDPLoadTextureBlock ( NEXT_DISP, save_comment2_data[J_N], G_IM_FMT_IA, G_IM_SIZ_8b, 144, 16, 0,
	G_TX_WRAP | G_TX_NOMIRROR,
	G_TX_WRAP | G_TX_NOMIRROR,
	G_TX_NOMASK, G_TX_NOMASK,
	G_TX_NOLOD, G_TX_NOLOD);
	gSP1Quadrangle( NEXT_DISP, 24, 26, 27, 25, 0 );*/
	    SET_NOW_DISP( texture_QuadrangleIA8( NOW_DISP, save_comment2_data[J_N],
						 144, 16,
						 24 )
		);
# endif
	}
    }

    CLOSE_DISP( graph );
}





/*===============================================================
  =	��˥塼�ѥåɣģң���					=
  ===============================================================*/
static void
menu_pad_draw( Game_play *game_play )
{
#define MBASE_XPOS	(-72)
#define MNAME_XPOS	(-63)
    
    Kscope		*kscope = (Kscope *)&game_play->kscope;

    static unchar *g_sp_others_0[] = {
	g_sp_others_0_txt, g_sp_nes_others_0_txt,
    };
    static unchar *g_sp_others_1[] = {
	g_sp_others_1_txt, g_sp_nes_others_1_txt,
    };
    static unchar *g_sp_others_2[] = {
	g_sp_others_2_txt, g_sp_nes_others_2_txt,
    };
    static unchar *g_sp_others_3[][2] = {
	{ g_sp_others_6_txt, g_sp_nes_others_6_txt, },
	{ g_sp_others_3_txt, g_sp_nes_others_3_txt, },
	{ g_sp_others_4_txt, g_sp_nes_others_4_txt, },
	{ g_sp_others_5_txt, g_sp_nes_others_5_txt, },
    };
    static unchar *g_sp_others_4[][2] = {
	{ g_sp_others_4_txt, g_sp_nes_others_4_txt, },
	{ g_sp_others_5_txt, g_sp_nes_others_5_txt, },
	{ g_sp_others_6_txt, g_sp_nes_others_6_txt, },
	{ g_sp_others_3_txt, g_sp_nes_others_3_txt, },
    };
    static unshort g_sp_others_0_size[] = {
	56, 56,
    };
    static unshort g_sp_others_1_size[] = {
	48, 64,
    };
    static unshort g_sp_others_2_size[] = {
	96, 80,
    };

    short	i, j, yp;

    static short cursol_color[][4] = {
    	{180, 210, 255, 220, },
    	{100, 100, 150, 220, },	
    };
    static short	red, green, blue, alpha;
    static short	mc = 20, mp = 0;
    short		rc, gc, bc, ac;

    /* �⥹��������ơ��֥������ */
    static short spot_table[] = {
	10,		/* SPOT00 */
	16,		/* SPOT01 */
	16,		/* SPOT02 */
	17,		/* SPOT03 */
	12,		/* SPOT04 */
	13,		/* SPOT05 */
	18,		/* SPOT06 */
	17,		/* SPOT07 */
	17,		/* SPOT08 */
	19,		/* SPOT09 */
	13,		/* SPOT10 */
	21,		/* SPOT11 */
	20,		/* SPOT12 */
	21,		/* SPOT13 */
	14,		/* SPOT15 */
	15,		/* SPOT16 */
	15,		/* SPOT17 */
	15,		/* SPOT18 */
	11,		/* SPOT20 */
	14,		/* GANONTOU */
    };
    static short map_index_table[] = {	/* �ͣ��о奫������ݥ���� */
	21,			/* ���Ƥκ��� */
	20,			/* ����ɤκ� */
	19,			/* ����ɤ�ë */
	18,			/* �ϥ��ꥢ���� */
	11,			/* ������Ҿ� */
	14,			/* �벼Į */
	10,			/* �ϥ����ʿ�� */
	15,			/* �ǥ��ޥ���ƥ� */
	16,			/* �����ꥳ¼ */
	13,			/* �¤��ο� */
	12,			/* ������ο� */
	17,			/* �������Τ */
    };
    
    
    
    OPEN_DISP( game_play->g.graph );

    rc = (ABS(red - cursol_color[mp][0] )) / mc;
    gc = (ABS(green - cursol_color[mp][1] )) / mc;
    bc = (ABS(blue - cursol_color[mp][2] )) / mc;
    ac = (ABS(alpha - cursol_color[mp][3] )) / mc;
    if ( red >= cursol_color[mp][0] ) red -= rc;
    else                              red += rc;
    if ( green >= cursol_color[mp][1] ) green -= gc;
    else                                green += gc;
    if ( blue >= cursol_color[mp][2] ) blue -= bc;
    else                               blue += bc;
    if ( alpha >= cursol_color[mp][3] ) alpha -= ac;
    else                                alpha += ac;
    if ( !(--mc) ) {
	red = cursol_color[mp][0];
	green = cursol_color[mp][1];
	blue = cursol_color[mp][2];
	alpha = cursol_color[mp][3];
	mc = ZREG(28);
	mp ^= 1;
    }

    yp = -76 + kscope->menu_myp;
    for ( i = j = 0; i < 7; i++, j+=4 ) {
	kscope->menuVtx[j+0].ob[0] = kscope->menuVtx[j+2].ob[0] = MBASE_XPOS;
	kscope->menuVtx[j+1].ob[0] = kscope->menuVtx[j+3].ob[0] = (short)(MBASE_XPOS+72);
	kscope->menuVtx[j+0].ob[1] = kscope->menuVtx[j+1].ob[1] = yp;
	kscope->menuVtx[j+2].ob[1] = kscope->menuVtx[j+3].ob[1] = (short)(yp-24);
	kscope->menuVtx[j+0].ob[2] = kscope->menuVtx[j+1].ob[2] =
	    kscope->menuVtx[j+2].ob[2] = kscope->menuVtx[j+3].ob[2] = 0;
	kscope->menuVtx[j+0].flag = kscope->menuVtx[j+1].flag =
	    kscope->menuVtx[j+2].flag = kscope->menuVtx[j+3].flag = 0;
	kscope->menuVtx[j+0].tc[0] = kscope->menuVtx[j+0].tc[1] =
	    kscope->menuVtx[j+1].tc[1] = kscope->menuVtx[j+2].tc[0] = 0;
	kscope->menuVtx[j+1].tc[0] = kscope->menuVtx[j+3].tc[0] = 72 << 5;
	kscope->menuVtx[j+2].tc[1] = kscope->menuVtx[j+3].tc[1] = 24 << 5;
	kscope->menuVtx[j+0].cn[0] = kscope->menuVtx[j+2].cn[0] = 
	    kscope->menuVtx[j+0].cn[1] = kscope->menuVtx[j+2].cn[1] = 
	    kscope->menuVtx[j+0].cn[2] = kscope->menuVtx[j+2].cn[2] = 
	    kscope->menuVtx[j+1].cn[0] = kscope->menuVtx[j+3].cn[0] = 
	    kscope->menuVtx[j+1].cn[1] = kscope->menuVtx[j+3].cn[1] = 
	    kscope->menuVtx[j+1].cn[2] = kscope->menuVtx[j+3].cn[2] = 200;
	kscope->menuVtx[j+0].cn[3] = kscope->menuVtx[j+2].cn[3] =
	    kscope->menuVtx[j+1].cn[3] = kscope->menuVtx[j+3].cn[3] = (unchar)kscope->alpha;
    }

    kscope->menuVtx[4].ob[0] = kscope->menuVtx[6].ob[0] = (short)(kscope->menuVtx[0].ob[0] + 72);
    kscope->menuVtx[5].ob[0] = kscope->menuVtx[7].ob[0] = (short)(kscope->menuVtx[4].ob[0] + 72);

    if ( kscope->key_angle == 10 && !kscope->kscp_status ) {
	kscope->menuVtx[8].ob[0] = kscope->menuVtx[10].ob[0] = WREG(16);
	kscope->menuVtx[9].ob[0] = kscope->menuVtx[11].ob[0] = (short)(kscope->menuVtx[8].ob[0] + 24);
	kscope->menuVtx[8].ob[1] = kscope->menuVtx[9].ob[1] = WREG(18);
	kscope->menuVtx[10].ob[1] = kscope->menuVtx[11].ob[1] = (short)(kscope->menuVtx[8].ob[1] - 32);
    } else {
	kscope->menuVtx[8].ob[0] = kscope->menuVtx[10].ob[0] = WREG(16) + 3;
	kscope->menuVtx[9].ob[0] = kscope->menuVtx[11].ob[0] = (short)(kscope->menuVtx[8].ob[0] + (24-6));
	kscope->menuVtx[8].ob[1] = kscope->menuVtx[9].ob[1] = WREG(18) - 3;
	kscope->menuVtx[10].ob[1] = kscope->menuVtx[11].ob[1] = (short)(kscope->menuVtx[8].ob[1] - (32-6));
    }
    if ( kscope->key_angle == 11 && !kscope->kscp_status ) {
	kscope->menuVtx[12].ob[0] = kscope->menuVtx[14].ob[0] = WREG(17);
	kscope->menuVtx[13].ob[0] = kscope->menuVtx[15].ob[0] = (short)(kscope->menuVtx[12].ob[0] + 24);
	kscope->menuVtx[12].ob[1] = kscope->menuVtx[13].ob[1] = WREG(18);
	kscope->menuVtx[14].ob[1] = kscope->menuVtx[15].ob[1] = (short)(kscope->menuVtx[12].ob[1] - 32);
    } else {
	kscope->menuVtx[12].ob[0] = kscope->menuVtx[14].ob[0] = WREG(17) + 3;
	kscope->menuVtx[13].ob[0] = kscope->menuVtx[15].ob[0] = (short)(kscope->menuVtx[12].ob[0] + (24-6));
	kscope->menuVtx[12].ob[1] = kscope->menuVtx[13].ob[1] = WREG(18) - 3;
	kscope->menuVtx[14].ob[1] = kscope->menuVtx[15].ob[1] = (short)(kscope->menuVtx[12].ob[1] - (32-6));
    }
    kscope->menuVtx[9].tc[0] = kscope->menuVtx[11].tc[0] =
	kscope->menuVtx[13].tc[0] = kscope->menuVtx[15].tc[0] = 24 << 5;
    kscope->menuVtx[10].tc[1] = kscope->menuVtx[11].tc[1] =
	kscope->menuVtx[14].tc[1] = kscope->menuVtx[15].tc[1] = 32 << 5;
    gDPSetCombineMode(NEXT_DISP, G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM);
    Matrix_translate( 0.0f, 0.0f, -CURSOL_TRANSLATE_E, SET_MTX );
    Matrix_scale( (float)CURSOL_SCALE_X/10000.0f, (float)CURSOL_SCALE_Y/10000.0f, (float)CURSOL_SCALE_Z/10000.0f, MULT_MTX );
    gSPMatrix( NEXT_DISP, Matrix_to_Mtx_new(game_play->g.graph), G_MTX_MODELVIEW | G_MTX_LOAD | G_MTX_NOPUSH );
#define	MW_PR	90
#define	MW_PG	100
#define	MW_PB	130
#define	MW_PA	255
    /* ��å������� */
    gDPSetPrimColor( NEXT_DISP, 0, 0, MW_PR, MW_PG, MW_PB, MW_PA );
    gSPVertex( NEXT_DISP, &(kscope->menuVtx[0]), 16, 0 );
    gSPDisplayList( NEXT_DISP, menu_data_dl0 );

    if ( kscope->key_angle == 10 && !kscope->kscp_status ) {
	gDPSetPrimColor( NEXT_DISP, 0, 0, red, green, blue, alpha );
    }
    gSPDisplayList( NEXT_DISP, menu_data_dl0_1 );
#define	MW_R	180
#define	MW_G	210
#define	MW_B	255
#define	MW_A	220
    gDPSetPrimColor( NEXT_DISP, 0, 0, MW_R, MW_G, MW_B, MW_A );
    if ( kscope->key_angle == 11 && !kscope->kscp_status ) {
	gDPSetPrimColor( NEXT_DISP, 0, 0, red, green, blue, alpha );
    }
    gSPDisplayList( NEXT_DISP, menu_data_dl0_2 );

    if ( kscope->key_angle ) {
	/* ���򥫡����� �ǥե���Ȱ��� */
	j = (kscope->key_angle-10+2)*4;
	kscope->cursolVtx[0].ob[0] = kscope->menuVtx[j+0].ob[0];
	kscope->cursolVtx[0].ob[1] = kscope->menuVtx[j+0].ob[1];
	cursor_draw( game_play, kscope->kscp_pos );
    }


    yp = -80 + kscope->menu_myp;
    kscope->menuVtx[16].ob[1] = kscope->menuVtx[17].ob[1] = yp;
    kscope->menuVtx[18].ob[1] = kscope->menuVtx[19].ob[1] = (short)(kscope->menuVtx[16].ob[1] - 16);
    kscope->menuVtx[18].tc[1] = kscope->menuVtx[19].tc[1] = 16 << 5;
    gDPPipeSync( NEXT_DISP );
    gDPSetCombineMode(NEXT_DISP, G_CC_INT9, G_CC_INT9);
    gDPSetEnvColor( NEXT_DISP, 20, 30, 40, 0 );
    if ( kscope->pause == Pause_Play &&
	 kscope->zoom_name != 999 &&
	 kscope->name_flush < WREG(89) &&
	 (!kscope->kscp_status || kscope->kscp_status == 0x02 || (kscope->kscp_status >= 0x04 && kscope->kscp_status <= 0x07) || kscope->kscp_status == 0x08) &&
////////	 (kscope->kscp_pos == Display_Map && kscope->key_angle) || !kscope->key_angle ) {
	 !kscope->key_angle ) {
	if ( !kscope->kscp_status || kscope->kscp_status == 0x02 || (kscope->kscp_status >= 0x04 && kscope->kscp_status <= 0x07) || kscope->kscp_status == 0x08 ) {
	    /* �����ƥ�̾ɽ�� */
	    kscope->menuVtx[16].ob[0] = kscope->menuVtx[18].ob[0] = MNAME_XPOS;
	    kscope->menuVtx[17].ob[0] = kscope->menuVtx[19].ob[0] = (short)(kscope->menuVtx[16].ob[0] + 128);
	    kscope->menuVtx[17].tc[0] = kscope->menuVtx[19].tc[0] = 128 << 5;
	    gSPVertex( NEXT_DISP, &(kscope->menuVtx[16]), 4, 0 );
# if 0
	    if ( kscope->kscp_pos == Display_Map && !FIELD_DUNGEON && kscope->zoom_name>= (H_place00 - H_map00) ) {
		gDPSetPrimColor( NEXT_DISP, 0, 0, 0, 255, 255, 255 );
	    } else if ( kscope->name_hold == 1 ) {
		gDPSetPrimColor( NEXT_DISP, 0, 0, 70, 70, 70, 255 );
	    } else {
		gDPSetPrimColor( NEXT_DISP, 0, 0, 255, 255, 255, 255 );
	    }
# endif
	    if ( kscope->name_hold == 1 ) {
		gDPSetPrimColor( NEXT_DISP, 0, 0, 70, 70, 70, 255 );
	    } else {
		gDPSetPrimColor( NEXT_DISP, 0, 0, 255, 255, 255, 255 );
	    }
/*	    gDPLoadTextureBlock ( NEXT_DISP,
	    kscope->item_nameSegment,
	    G_IM_FMT_IA, G_IM_SIZ_8b, 128, 16, 0,
	    G_TX_WRAP | G_TX_NOMIRROR,
	    G_TX_WRAP | G_TX_NOMIRROR,
	    G_TX_NOMASK, G_TX_NOMASK,
	    G_TX_NOLOD, G_TX_NOLOD);
	    gSP1Quadrangle( NEXT_DISP, 0, 2, 3, 1, 0 );*/
/*	    SET_NOW_DISP( texture_QuadrangleIA8( NOW_DISP, kscope->item_nameSegment,*/
	    SET_NOW_DISP( texture_QuadrangleIA4( NOW_DISP, kscope->item_nameSegment,
						 128, 16,
						 0 )
		);
	}
	
#if !defined(ROM_F)
	if ( kscope->kscp_pos == Display_Map ) {
	    if ( YREG(7) ) {
		COLOR_YELLOW();
		PRINTF("���󥹥���(%d) Get_KIN_STA=%x (%x)  (%x)\n", YREG(6), Get_KIN_STA(YREG(6)), kin_sta_suu[YREG(6)], Room_Inf[126][YREG(6)>>2]  );
		COLOR_NORMAL();
		YREG(7) = 0;
	    }
	}
# endif
	if ( kscope->kscp_pos == Display_Map && !FIELD_DUNGEON ) {
////////	    PRINTF("Scene_ID=%d  cursor_point=%d  map_index_table=%d  Get_KIN_STA=%x, kin_sta_suu=%x\n",Scene_ID, kscope->cursor_point[Display_Map_Field], map_index_table[kscope->cursor_point[Display_Map_Field]], Get_KIN_STA( map_index_table[kscope->cursor_point[Display_Map_Field]] ), kin_sta_suu[map_index_table[kscope->cursor_point[Display_Map_Field]]] );
	    if ( Get_KIN_STA( map_index_table[kscope->cursor_point[Display_Map_Field]] ) == kin_sta_suu[map_index_table[kscope->cursor_point[Display_Map_Field]]] ) {
		/* �⥹���ޡ��� */
		kscope->menuVtx[24+0].ob[0] = kscope->menuVtx[24+2].ob[0] = MBASE_XPOS - 2;
		kscope->menuVtx[24+1].ob[0] = kscope->menuVtx[24+3].ob[0] = (short)(kscope->menuVtx[24+0].ob[0]+19);
		kscope->menuVtx[24+0].ob[1] = kscope->menuVtx[24+1].ob[1] = (short)(kscope->menuVtx[24+0].ob[1]-2);
		kscope->menuVtx[24+2].ob[1] = kscope->menuVtx[24+3].ob[1] = (short)(kscope->menuVtx[24+0].ob[1]-19);
		kscope->menuVtx[24+1].tc[0] = kscope->menuVtx[24+3].tc[0] = 24 << 5;
		gDPPipeSync( NEXT_DISP );
		gSPVertex( NEXT_DISP, &(kscope->menuVtx[24]), 4, 0 );
		gDPSetCombineMode(NEXT_DISP, G_CC_INT9, G_CC_INT9);
		gDPSetPrimColor( NEXT_DISP, 0, 0, 255, 255, 255, kscope->alpha );
		gDPSetEnvColor( NEXT_DISP, 0, 0, 0, 0 );
		kaleido_scope_item_set( game_play->g.graph, h_24_item_3_txt, 24, 24, 0 );
	    }
	}
    } else {
	if ( kscope->kscp_status < 0x03 || kscope->kscp_status == 0x7 || kscope->kscp_status == 0x8 ) {
	    kscope->menuVtx[20].ob[1] = kscope->menuVtx[21].ob[1] = yp;
	    kscope->menuVtx[22].ob[1] = kscope->menuVtx[23].ob[1] = (short)(kscope->menuVtx[20].ob[1] - 16);
	    kscope->menuVtx[22].tc[1] = kscope->menuVtx[23].tc[1] = 16 << 5;
	    gSPVertex( NEXT_DISP, &(kscope->menuVtx[16]), 8, 0 );
	    if ( kscope->pause == Pause_Save ) {
		/* ���Ƿ��� */
		kscope->menuVtx[16].ob[0] = kscope->menuVtx[18].ob[0] = YREG(56+J_N);
		kscope->menuVtx[17].ob[0] = kscope->menuVtx[19].ob[0] = (short)(kscope->menuVtx[16].ob[0] + 24);
		kscope->menuVtx[20].ob[0] = kscope->menuVtx[22].ob[0] = (short)(kscope->menuVtx[16].ob[0] + YREG(50+J_N));
		kscope->menuVtx[21].ob[0] = kscope->menuVtx[23].ob[0] = (short)(kscope->menuVtx[20].ob[0] + g_sp_others_1_size[J_N]);
		kscope->menuVtx[17].tc[0] = kscope->menuVtx[19].tc[0] = 24 << 5;
		kscope->menuVtx[21].tc[0] = kscope->menuVtx[23].tc[0] = g_sp_others_1_size[J_N] << 5;
////////		gSPDisplayList( NEXT_DISP, menu_data_dl8 );
		gSPDisplayList( NEXT_DISP, menu_data_dl3 );
////////		gSPDisplayList( NEXT_DISP, menu_data_dl6 );
		gDPPipeSync( NEXT_DISP );
		gDPSetPrimColor( NEXT_DISP, 0, 0, 255, 255, 255, 255 );
		SET_NOW_DISP( texture_QuadrangleIA8( NOW_DISP, g_sp_others_1[J_N],	/* �Ƿ��� */
						     g_sp_others_1_size[J_N], 16,
						     4 )
		    );
	    } else if ( kscope->key_angle ) {
# if 0
		/* �ڣ� �ǲ�ž */
		kscope->menuVtx[16].ob[0] = kscope->menuVtx[18].ob[0] = WREG(24);
		kscope->menuVtx[17].ob[0] = kscope->menuVtx[19].ob[0] = 
		    kscope->menuVtx[20].ob[0] = kscope->menuVtx[22].ob[0] = (short)(kscope->menuVtx[16].ob[0] + 32);
		kscope->menuVtx[21].ob[0] = kscope->menuVtx[23].ob[0] = (short)(kscope->menuVtx[20].ob[0] + 56);
		kscope->menuVtx[17].tc[0] = kscope->menuVtx[19].tc[0] = 32 << 5;
		gSPDisplayList( NEXT_DISP, menu_data_dl5 );
////////		if ( !kscope->kscp_status ) --kscope->kscp_scroll;
////////		kscope->name_flush = 0;
# endif
		/* �أأؤβ��̤� */
		if ( kscope->pause == Pause_Play && !kscope->kscp_status ) {
# if 0
		    if ( kscope->key_angle == 10 ) {
			kscope->menuVtx[16].ob[0] = kscope->menuVtx[18].ob[0] = YREG(58); //MNAME_XPOS;
		    } else {
			kscope->menuVtx[16].ob[0] = kscope->menuVtx[18].ob[0] = YREG(24);
		    }
# endif
		    kscope->menuVtx[16].ob[0] = kscope->menuVtx[18].ob[0] = MNAME_XPOS;
		    kscope->menuVtx[17].ob[0] = kscope->menuVtx[19].ob[0] = (short)(kscope->menuVtx[16].ob[0] + 128);
		    kscope->menuVtx[17].tc[0] = kscope->menuVtx[19].tc[0] = 128 << 5;
		    gDPPipeSync( NEXT_DISP );
		    gDPSetPrimColor( NEXT_DISP, 0, 0, 255, 200,   0, 255 );
		    if ( kscope->key_angle == 10 ) {
			SET_NOW_DISP( texture_QuadrangleIA8( NOW_DISP, g_sp_others_3[kscope->kscp_pos][J_N],	/* �����β��̤� */
							     128, 16,
							     0 )
			    );
		    } else {
			SET_NOW_DISP( texture_QuadrangleIA8( NOW_DISP, g_sp_others_4[kscope->kscp_pos][J_N],	/* ���β��̤آ� */
							     128, 16,
							     0 )
			    );
		    }
		}
	    } else {
		if ( !kscope->kscp_pos ) {
		    /* �äǥ��å� */
		    kscope->menuVtx[16].ob[0] = kscope->menuVtx[18].ob[0] = YREG(48+J_N);
		    kscope->menuVtx[17].ob[0] = kscope->menuVtx[19].ob[0] = (short)(kscope->menuVtx[16].ob[0] + 48);
		    kscope->menuVtx[20].ob[0] = kscope->menuVtx[22].ob[0] = (short)(kscope->menuVtx[16].ob[0] + YREG(54+J_N));
		    kscope->menuVtx[21].ob[0] = kscope->menuVtx[23].ob[0] = (short)(kscope->menuVtx[20].ob[0] + g_sp_others_0_size[J_N]);
		    kscope->menuVtx[17].tc[0] = kscope->menuVtx[19].tc[0] = 48 << 5;
		    kscope->menuVtx[21].tc[0] = kscope->menuVtx[23].tc[0] = g_sp_others_0_size[J_N] << 5;
		    gSPDisplayList( NEXT_DISP, menu_data_dl2 );
		    gDPPipeSync( NEXT_DISP );
		    gDPSetPrimColor( NEXT_DISP, 0, 0, 255, 255, 255, 255 );
		    SET_NOW_DISP( texture_QuadrangleIA8( NOW_DISP, g_sp_others_0[J_N],	/* �ǥ��å� */
							 g_sp_others_0_size[J_N], 16,
							 4 )
			);
/*		} else if ( kscope->kscp_pos == Display_Map && game_play->room_info.now.type == ROOM_TYPE_DANGEON ) {*/
		} else if ( kscope->kscp_pos == Display_Map && FIELD_DUNGEON ) {
# if 0
		    /* �����ڤ��ؤ� */
		    kscope->menuVtx[16].ob[0] = kscope->menuVtx[18].ob[0] = WREG(21);
		    kscope->menuVtx[17].ob[0] = kscope->menuVtx[19].ob[0] = 
			kscope->menuVtx[20].ob[0] = kscope->menuVtx[22].ob[0] = (short)(kscope->menuVtx[16].ob[0] + 24);
		    kscope->menuVtx[21].ob[0] = kscope->menuVtx[23].ob[0] = (short)(kscope->menuVtx[20].ob[0] + 72);
		    kscope->menuVtx[17].tc[0] = kscope->menuVtx[19].tc[0] = 24 << 5;
		    kscope->menuVtx[21].tc[0] = kscope->menuVtx[23].tc[0] = 80 << 5;
		    gSPDisplayList( NEXT_DISP, menu_data_dl3 );
		    gDPPipeSync( NEXT_DISP );
		    gDPSetPrimColor( NEXT_DISP, 0, 0, 255, 255, 255, 255 );
		    SET_NOW_DISP( texture_QuadrangleIA8( NOW_DISP, g_sp_others_2[J_N],	/* �ǥ��ǥ����� */
							 g_sp_others_2_size[J_N], 16,
							 4 )
			);
# endif
		} else if ( kscope->kscp_pos == Display_Collect && (kscope->select_pt[Display_Collect] >= (C_SEAL) && kscope->select_pt[Display_Collect] < (C_SEAL+C_MELODY)) ) {
		    if ( kscope->zoom_name != 999 ) {
			/* ���ǥ��ǥ�ɽ�� */
			kscope->menuVtx[16].ob[0] = kscope->menuVtx[18].ob[0] = YREG(52+J_N);
			kscope->menuVtx[17].ob[0] = kscope->menuVtx[19].ob[0] = (short)(kscope->menuVtx[16].ob[0] + 24);
			kscope->menuVtx[20].ob[0] = kscope->menuVtx[22].ob[0] = (short)(kscope->menuVtx[16].ob[0] + YREG(50+J_N));
			kscope->menuVtx[21].ob[0] = kscope->menuVtx[23].ob[0] = (short)(kscope->menuVtx[20].ob[0] + g_sp_others_2_size[J_N]);
			kscope->menuVtx[17].tc[0] = kscope->menuVtx[19].tc[0] = 24 << 5;
			kscope->menuVtx[21].tc[0] = kscope->menuVtx[23].tc[0] = g_sp_others_2_size[J_N] << 5;
			gSPDisplayList( NEXT_DISP, menu_data_dl3 );
			gDPPipeSync( NEXT_DISP );
			gDPSetPrimColor( NEXT_DISP, 0, 0, 255, 255, 255, 255 );
			SET_NOW_DISP( texture_QuadrangleIA8( NOW_DISP, g_sp_others_2[J_N],	/* �ǥ��ǥ����� */
							     g_sp_others_2_size[J_N], 16,
							     4 )
			    );
		    }
		} else if ( kscope->kscp_pos == Display_Equipment ) {
		    /* ���ǥ��å� */
		    kscope->menuVtx[16].ob[0] = kscope->menuVtx[18].ob[0] = YREG(58+J_N);
		    kscope->menuVtx[17].ob[0] = kscope->menuVtx[19].ob[0] = (short)(kscope->menuVtx[16].ob[0] + 24);
		    kscope->menuVtx[20].ob[0] = kscope->menuVtx[22].ob[0] = (short)(kscope->menuVtx[16].ob[0] + YREG(50+J_N));
		    kscope->menuVtx[21].ob[0] = kscope->menuVtx[23].ob[0] = (short)(kscope->menuVtx[20].ob[0] + g_sp_others_0_size[J_N]);
		    kscope->menuVtx[17].tc[0] = kscope->menuVtx[19].tc[0] = 24 << 5;
		    kscope->menuVtx[21].tc[0] = kscope->menuVtx[23].tc[0] = g_sp_others_0_size[J_N] << 5;
		    gSPDisplayList( NEXT_DISP, menu_data_dl3 );
////////		    gSPDisplayList( NEXT_DISP, menu_data_dl4 );
		    gDPPipeSync( NEXT_DISP );
		    gDPSetPrimColor( NEXT_DISP, 0, 0, 255, 255, 255, 255 );
		    SET_NOW_DISP( texture_QuadrangleIA8( NOW_DISP, g_sp_others_0[J_N],	/* �ǥ��å� */
							 g_sp_others_0_size[J_N], 16,
							 4 )
			);
		}
	    }
	}
    }

    CLOSE_DISP( game_play->g.graph );
}


/*===============================================================
  =	��˥塼�ѥåɣͣϣ֣�					=
  ===============================================================*/
static void
menu_pad_move( Game_play *game_play )
{
    Kscope		*kscope = (Kscope *)&game_play->kscope;

    unshort		point;
    
    if ( kscope->zoom_name != kscope->select_name[kscope->kscp_pos] || (kscope->kscp_pos == Display_Map && kscope->key_angle) ) {
	kscope->zoom_name = kscope->select_name[kscope->kscp_pos];
	point = kscope->zoom_name;
	osCreateMesgQueue(&kscope->mq, &kscope->m, 1);
/*	if ( kscope->kscp_pos == Display_Map && kscope->key_angle ) {
	    point = ZCommonGet( area_type ) + ((H_place00 - H_map00) << 1);
	    if ( J_N ) point += (H_Botton_Select - H_place00);
	    kscope->zoom_name = point;
	    dmacopy_bg( &kscope->k_dma,
			kscope->item_nameSegment,
			(u32)(_map_name_staticSegmentRomStart + (I_N_PT * point ) ),
			I_N_PT,
			NULL,
			&kscope->mq,
			NULL );
	} else */
	if ( kscope->zoom_name != 999 ) {
/*	    if ( kscope->kscp_pos == Display_Map && (game_play->room_info.now.type != ROOM_TYPE_DANGEON || game_play->scene_data_ID == MEN) ) {*/
	    if ( kscope->kscp_pos == Display_Map && !FIELD_DUNGEON ) {
		/* �ե��������̾ �ƥ�������ģͣ� */
/*		if ( point >= (H_place00 - H_map00) ) {
		    if ( J_N ) point += (H_Botton_Select - H_place00);
		    dmacopy_bg( &kscope->k_dma,
				kscope->item_nameSegment+I_N_PT,
				(u32)(_map_name_staticSegmentRomStart + (I_N_PT * point ) ),
				I_N_PT,
				NULL,
				&kscope->mq,
				NULL );
		} else {*/
		    if ( J_N ) point += (H_place00 - H_map00);
/*
		    dmacopy_bg( &kscope->k_dma,
				kscope->item_nameSegment,
# if TS8
				(u32)(_map_name_staticSegmentRomStart + (I_N_PT * point ) ),
				I_N_PT,
# else
				(u32)(_map_name_staticSegmentRomStart + ((I_N_PT/2) * point ) ),
				(I_N_PT/2),
# endif
				NULL,
				&kscope->mq,
				NULL );*/
		    dmacopy_fg( kscope->item_nameSegment,
				(u32)(_map_name_staticSegmentRomStart + ((I_N_PT/2) * point ) ),
				(I_N_PT/2) );
/*		}*/
	    } else {
		PRINTF("zoom_name=%d\n",kscope->zoom_name);
/*		if ( kscope->zoom_name == H_sword_2 ) {
		    if ( Equip_Register & check_bit[3] ) {
			kscope->zoom_name = H_sword_3;
		    }
		}*/
		if ( J_N ) point += H_heart_2;
		PRINTF("J_N=%d  point=%d\n",J_N,point);
		/* �����ƥ�̾ �ƥ�������ģͣ� */
/*		dmacopy_bg( &kscope->k_dma,
			    kscope->item_nameSegment,
# if TS8
			    (u32)(_item_name_staticSegmentRomStart + (I_N_PT * point ) ),
			    I_N_PT,
# else
			    (u32)(_item_name_staticSegmentRomStart + ((I_N_PT/2) * point ) ),
			    (I_N_PT/2),
# endif
			    NULL,
			    &kscope->mq,
			    NULL );*/
		dmacopy_fg( kscope->item_nameSegment,
			    (u32)(_item_name_staticSegmentRomStart + ((I_N_PT/2) * point ) ),
			    (I_N_PT/2) );
	    }
	    kscope->name_flush = 0;
////////	    Na_StartSystemSe( NA_SE_SY_CURSOR );
	}
    } else {
	if ( !kscope->name_hold ) {
	    if ( ((kscope->kscp_pos == Display_Collect && (kscope->select_pt[Display_Collect] >= (C_SEAL) && kscope->select_pt[Display_Collect] < (C_SEAL+C_MELODY))) &&  kscope->kscp_status == 8) || kscope->kscp_pos == Display_Item || (kscope->kscp_pos == Display_Equipment && kscope->cur_xpt[Display_Equipment]) ) {
		if ( kscope->zoom_name != H_reserve_11 ) {
		    kscope->name_flush++;
		    if ( kscope->name_flush > WREG(88) ) kscope->name_flush = 0;
		}
	    } else kscope->name_flush = 0;
	} else kscope->name_flush = 0;
    }
}




/*===============================================================
  =	���쥤�ɡ��������� ��������				=
  ===============================================================*/
static void
kaleido_scope_scroll( Game_play *game_play, pad_t *pad )
{
    Kscope		*kscope = (Kscope *)&game_play->kscope;

/*
    static short	tranlate_xdt0[] = {
	 2700,  2450,  2200,  1900,  1450,  1000,  500,
	    0,
	 -500, -1000, -1450, -1900, -2200, -2450, -2700,  3600,
    };
    static short	angle_ydt0[] = {
	   40,    50,    60,    80,    90 ,  110,   130,
	  150,
	  170,   190,   210,   220,   240,   260,   270,     0,
    };
    static short	scale_dt0[] = {
	  300,   300,   250,   200,   180,   150,   130,
	  100,
	  130,   150,   180,   200,   250,   300,   300,    300,
    };

    static short	tranlate_xdt1[] = {
	-2700, -2450, -2200, -1900, -1450, -1000,  -500,
	    0,
	  500,  1000,  1450,  1900,  2200,  2450,  2700, -3600,
    };
    */
    unchar		x = 0;

    if ( ZREG(13) ) {
	if ( !(Pad_on_trigger(L_TRIG)) ) x = 1;
    }
    if ( !x ) {
	kscope->eye.x += eye_xdt[kscope->kscp_mode];
	kscope->eye.z += eye_zdt[kscope->kscp_mode];
	x = (unchar)(kscope->kscp_scroll / 4);
	if ( !(kscope->kscp_mode & 0x01) ) {
////////	    YREG(41) = tranlate_xdt0[x];
////////	    YREG(39) = angle_ydt0[x];
////////	    YREG(32) = -6000;
////////////////	    kscope->xbuff -= 15*KEY_SHIFT;
	} else {
////////	    YREG(32) = tranlate_xdt1[x];
////////	    YREG(36) = (short)-(angle_ydt0[x]);
////////	    YREG(41) = 6000;
////////////////	    kscope->xbuff += 15*KEY_SHIFT;
	}
////////	kscope->mouse_xpos = (short)(kscope->xbuff/10);
	if ( kscope->kscp_scroll < 64/2 ) {
	    WREG(16) -= (WREG(25)/WREG(6));
	    WREG(17) -= (WREG(26)/WREG(6));
	} else {
	    WREG(16) += (WREG(25)/WREG(6));
	    WREG(17) += (WREG(26)/WREG(6));
	}
	kscope->kscp_scroll+=4;
	if ( kscope->kscp_scroll == 64 ) {
////////	    kscope->kscp_scroll = 15;
	    kscope->kscp_scroll = 0;
	    kscope->kscp_pos = next_pos_data[kscope->kscp_mode];
	    kscope->kscp_status = 0x00;
////////	    YREG(39) = 0;
////////	    YREG(41) = 3600;
////////	    YREG(36) = 0;
////////	    YREG(32) = -3600;
	}
    }
}
	


/*===============================================================
  =	���쥤�ɡ��������� �ӥ塼����				=
 ===============================================================*/
static void
kaleido_scope_view( Kscope *kscope, float e_x, float e_y, float e_z )
{
    xyz_t	eye, center, up;


    /*
     * �ӥ塼����
     */
    eye.x = e_x;
    eye.y = e_y;
    eye.z = e_z;
    center.x = center.y = center.z = 0.0f;
    up.x = up.z = 0.0f;
    up.y = 1.0f;
	
    setLookAtView(&kscope->view, &eye, &center, &up);

    showView(&kscope->view, VIEW_DO_PERSALL);
}




/*===============================================================
  =	���쥤�ɡ��������� �ե졼��֣�������			=
 ===============================================================*/
static short
vtx_frame_set( Game_play *game_play, Vtx_t *Vtx, short pt, short ic )
{
    Kscope		*kscope = (Kscope *)&game_play->kscope;


    /* �֣������顼 */
    static unchar vtx_col_r[][4] = {
    	{  10,  70,  70,  10. },	// �ɣԣţ�
	{  10,  90,  90,  10, },	// �ţѣգɣУͣţΣ�
    	{  80, 140, 140,  80, },	// �ͣ��Сʣģ��������
    	{  80, 120, 120,  80, },	// �ãϣ̣̣ţã�
    	{  80, 140, 140,  80, },	// �ͣ��Сʣǣ�����
    	{  50, 110, 110,  50, },	// �ӣ��֣�
    };
    static unchar vtx_col_g[][4] = {
    	{  50, 100, 100,  50, },	// �ɣԣţ�
    	{  50, 100, 100,  50, },	// �ţѣգɣУͣţΣ�
    	{  40,  60,  60,  40, },	// �ͣ��Сʣģ��������
    	{  80, 120, 120,  80, },	// �ãϣ̣̣ţã�
    	{  40,  60,  60,  40, },	// �ͣ��Сʣǣ�����
    	{  50, 110, 110,  50, },	// �ӣ��֣�
    };
    static unchar vtx_col_b[][4] = {
    	{  80, 130, 130,  80, },	// �ɣԣţ�
    	{  40,  60,  60,  40, },	// �ţѣգɣУͣţΣ�
    	{  30,  60,  60,  30, },	// �ͣ��Сʣģ��������
    	{  50,  70,  70,  50, },	// �ãϣ̣̣ţã�
    	{  30,  60,  60,  30, },	// �ͣ��Сʣǣ�����
    	{  50, 110, 110,  50, },	// �ӣ��֣�
    };

    /* �ե졼����°�ʰ��� */
    static short partvtx_item_xpd[] = {
	// �ɣԣţ�
	0,
    };
    static short partvtx_equipment_xpd[] = {
	// �ţѣգɣУͣţΣ�
	0,
    };
    static short partvtx_mapd_xpd[] = {
	// �ͣ��Сʣģ��������
	 -36,  12,					/* �ͣ��� */
	 -18,						/* ���󥸥��̾ */
	  70,  70,  70,					/* ����� */
	 -88, -88, -88, -88, -88, -88, -88, -88,	/* ���� */
	-106, -62,					/* ��󥯡��ܥ� */
	 -40,						/* �⥹���ޡ��� */
    };
    static short partvtx_collect_xpd[] = {
	// �ãϣ̣̣ţã�
	0,
    };
    static short partvtx_mapg_xpd[] = {
	// �ͣ��Сʣǣ�����
/*       16   15   14   13   12   11   10    9    8  */
	 47, -49, -17, -15,  -9,  24,  43,  14,   9,
/*        7    6    5    4    3    2    1            */
	 38,  82,  71, -76, -87,-108, -54,				/* ��(18) */
	-93, -67, -56, -33, -10,   1,  14,  24,  35,  58,  74,  89,	/* �Σ�����ݥ����(12) */
	  0,								/* ���ꥢɽ��(1) */
	-58,								/* ��餷��(1) */
	 19,								/* ������̾ */
	 28,								/* ������ */
    };
    static short partvtx_save_xpd[] = {
	// �ӣ��֣�
	-76,
	-58,  10,
	-58,  10,
////////	-72, -72,
    };

    static short partvtx_item_xsz[] = {
	// �ɣԣţ�
	0,

   };
    static short partvtx_equipment_xsz[] = {
	// �ţѣգɣУͣţΣ�
	0,
    };
    static short partvtx_mapd_xsz[] = {
	// �ͣ��Сʣģ��������
	48, 48,
	96,
	24, 24, 24,
	24, 24, 24, 24, 24, 24, 24, 24,
	16, 16,
	24,
    };
    static short partvtx_collect_xsz[] = {
	// �ãϣ̣̣ţã�
	0,
    };
    static short partvtx_save_xsz[] = {
	// �ӣ��֣�
	152,
	 48,  48,
	 48,  48,
////////	144, 144,
    };

    static short partvtx_item_ypd[] = {
	// �ɣԣţ�
	0,
    };
    static short partvtx_equipment_ypd[] = {
	// �ţѣգɣУͣţΣ�
	0,
    };
    static short partvtx_mapd_ypd[] = {
	// �ͣ��Сʣģ��������
	  28,  28,
	  46,
	  28,  -2, -32,
	  50,  36,  22,  8,  -6, -20, -34, -48,
	  18,  18,
	  50,
    };
    static short partvtx_collect_ypd[] = {
	// �ãϣ̣̣ţã�
	0,
    };
    static short partvtx_mapg_ypd[] = {
	// �ͣ��Сʣǣ�����
/*       16   15   14   13   12   11   10    9    8  */
	 15,  40,  11,  45,  52,  37,  36,  57,  54,
/*        7    6    5    4    3    2    1            */
	 33,  31,  45,  32,  42,  49, -10,
	31,  27,  15, -49,   8,  38,   7,  47,  30,   1,  -9,  25,
	 0,
	 1,
	-32,
	-26,
    };
    static short partvtx_save_ypd[] = {
	// �ӣ��֣�
	 36, 		//50,
	 10, 10,	//34,  34,
	 -6, -6,	//18,  18,
////////	-34, -50,
    };

    static short partvtx_item_ysz[] = {
	// �ɣԣţ�
	0,
    };
    static short partvtx_equipment_ysz[] = {
	// �ţѣգɣУͣţΣ�
	0,
    };
    static short partvtx_mapd_ysz[] = {
	// �ͣ��Сʣģ��������
	85, 85,
	16,
	24, 24, 24,
	16, 16, 16, 16, 16, 16, 16, 16,
	16, 16,
	24,
    };
    static short partvtx_collect_ysz[] = {
	// �ãϣ̣̣ţã�
	0,
    };
    static short partvtx_save_ysz[] = {
	// �ӣ��֣�
	16,
	48, 48,
	16, 16,
////////	16, 16,
    };
    /* �ե졼����°�ʰ��� */
    static short *partvtx_xpd[] = {
	partvtx_item_xpd,
	partvtx_equipment_xpd,
	partvtx_mapd_xpd,
	partvtx_collect_xpd,
	partvtx_mapg_xpd,
	partvtx_save_xpd,
    };
    static short *partvtx_xsz[] = {
	partvtx_item_xsz,
	partvtx_equipment_xsz,
	partvtx_mapd_xsz,
	partvtx_collect_xsz,
	partvtx_mapg_xsz,
	partvtx_save_xsz,
    };
    static short *partvtx_ypd[] = {
	partvtx_item_ypd,
	partvtx_equipment_ypd,
	partvtx_mapd_ypd,
	partvtx_collect_ypd,
	partvtx_mapg_ypd,
	partvtx_save_ypd,
    };
    static short *partvtx_ysz[] = {
	partvtx_item_ysz,
	partvtx_equipment_ysz,
	partvtx_mapd_ysz,
	partvtx_collect_ysz,
	partvtx_mapg_ysz,
	partvtx_save_ysz,
    };
    
    static short spot_mark_xd[] = {
//	   0     1     2     3     4     5     6     7     8     9		
	 -58,   11,   30,   30,   15,   38,  -62,   60,   61,  -78,
//	  10    11    12    13    14    15    16    17    18    19    20
	-300,  -86,  -65, -300, -300,  -21,   14,   13,   20,  -34, -300,
    };
    static short spot_mark_xs[] = {
//	  0   1   2   3   4   5   6   7   8   9		
	 89, 20, 14, 35, 32, 17, 50, 16, 21, 20,
//	 10  11  12  13  14  15  16  17  18  19  20
	 -1, 32, 16, -1, -1, 19, 19, 21, 16, 20, -1,
    };
    static short spot_mark_yd[] = {
//	   0     1     2     3     4     5     6     7     8     9		
	   1,   15,   20,    9,  -30,  -17,  -34,   15,   30,    1,
//	  10    11    12    13    14    15    16    17    18    19    20
	-300,   42,    7, -300, -300,   24,   36,   53,   37,  -13, -300,
    };
    static short spot_mark_ys[] = {
//	  0   1   2   3   4   5   6   7   8   9		
	 36, 15, 16, 23, 23, 16, 24, 13, 17, 18,
//	 10  11  12  13  14  15  16  17  18  19  20
	  1, 25, 13,  1,  1, 13, 21, 15, 13, 12,  1,
    };
    
    short	i, j, jj, k, xp, yp;
    short	*k_xpd,	*k_xsz, *k_ypd, *k_ysz;

    static short	wara_yps = 0;
    static short	wara_ct = 1;
    static short	wara_pt = 0;


    /* �ե졼�� */
    xp = -120 - 80;
    for ( i = j = 0; i < 3; i++ ) {
	xp += 80;
////////	if ( kscope->pause == Pause_In || kscope->pause >= Pause_Out ) yp = 160;
////////	else				                               yp = 80;
	yp = 80;
	for ( k = 0; k < 5; j+=4, k++, yp -= 32 ) {
	    Vtx[j+0].ob[0] = Vtx[j+2].ob[0] = xp;
	    Vtx[j+1].ob[0] = Vtx[j+3].ob[0] = (short)(Vtx[j+0].ob[0] + 80);
	    Vtx[j+0].ob[1] = Vtx[j+1].ob[1] = yp + kscope->yp;
	    Vtx[j+2].ob[1] = Vtx[j+3].ob[1] = (short)(Vtx[j+0].ob[1] - 32);
	    Vtx[j+0].ob[2] = Vtx[j+1].ob[2] =
		Vtx[j+2].ob[2] = Vtx[j+3].ob[2] = 0;
	    Vtx[j+0].flag = Vtx[j+1].flag =
		Vtx[j+2].flag = Vtx[j+3].flag = 0;
	    Vtx[j].tc[0] = Vtx[j].tc[1] =
		Vtx[j+1].tc[1] = Vtx[j+2].tc[0] = 0;
	    Vtx[j+1].tc[0] = Vtx[j+3].tc[0] = 80 << 5;
	    Vtx[j+2].tc[1] = Vtx[j+3].tc[1] = 32 << 5;
# if 0
	    Vtx[j+0].cn[0] = Vtx[j+2].cn[0] = VREG(pt+0+m); //vtx_col_r[0][i];
	    Vtx[j+0].cn[1] = Vtx[j+2].cn[1] = VREG(pt+1+m); //vtx_col_g[0][i];
	    Vtx[j+0].cn[2] = Vtx[j+2].cn[2] = VREG(pt+2+m); //vtx_col_b[0][i];
	    Vtx[j+1].cn[0] = Vtx[j+3].cn[0] = VREG(pt+3+m); //vtx_col_r[0][i+1];
	    Vtx[j+1].cn[1] = Vtx[j+3].cn[1] = VREG(pt+4+m); //vtx_col_g[0][i+1];
	    Vtx[j+1].cn[2] = Vtx[j+3].cn[2] = VREG(pt+5+m); //vtx_col_b[0][i+1];
# else
	    Vtx[j+0].cn[0] = Vtx[j+2].cn[0] = vtx_col_r[pt][i];
	    Vtx[j+0].cn[1] = Vtx[j+2].cn[1] = vtx_col_g[pt][i];
	    Vtx[j+0].cn[2] = Vtx[j+2].cn[2] = vtx_col_b[pt][i];
	    Vtx[j+1].cn[0] = Vtx[j+3].cn[0] = vtx_col_r[pt][i+1];
	    Vtx[j+1].cn[1] = Vtx[j+3].cn[1] = vtx_col_g[pt][i+1];
	    Vtx[j+1].cn[2] = Vtx[j+3].cn[2] = vtx_col_b[pt][i+1];
# endif
	    Vtx[j+0].cn[3] = Vtx[j+2].cn[3] =
		Vtx[j+1].cn[3] = Vtx[j+3].cn[3] = (unchar)kscope->alpha;
	}
    }



    /* �ե졼����°�ʰ��� */
    jj = j;
    if ( ic ) {
	k_xpd = partvtx_xpd[pt];
	k_xsz = partvtx_xsz[pt];
	k_ypd = partvtx_ypd[pt];
	k_ysz = partvtx_ysz[pt];
////////	for ( i = is; i < is+ic; i++, j+=4 ) {
	for ( i = 0; i < ic; i++, j+=4 ) {
	    Vtx[j+0].ob[0] = Vtx[j+2].ob[0] = k_xpd[i]; //partvtx_xpd[i];
	    Vtx[j+1].ob[0] = Vtx[j+3].ob[0] = (short)(Vtx[j+0].ob[0] + k_xsz[i]/*partvtx_xsz[i]*/);
	    if ( !(kscope->pause >= Pause_Gameover_C && kscope->pause <= Pause_Gameover_E) ) {
		Vtx[j+0].ob[1] = Vtx[j+1].ob[1] = k_ypd[i]/*partvtx_ypd[i]*/ + kscope->yp;
	    } else {
		Vtx[j+0].ob[1] = Vtx[j+1].ob[1] = YREG(60+i)/*partvtx_ypd[i]*/ + kscope->yp;
	    }
	    Vtx[j+2].ob[1] = Vtx[j+3].ob[1] = (short)(Vtx[j+0].ob[1] - k_ysz[i]/*partvtx_ysz[i]*/);
	    Vtx[j+0].ob[2] = Vtx[j+1].ob[2] =
		Vtx[j+2].ob[2] = Vtx[j+3].ob[2] = 0;
	    Vtx[j+0].flag = Vtx[j+1].flag =
		Vtx[j+2].flag = Vtx[j+3].flag = 0;
	    Vtx[j].tc[0] = Vtx[j].tc[1] =
		Vtx[j+1].tc[1] = Vtx[j+2].tc[0] = 0;
	    Vtx[j+1].tc[0] = Vtx[j+3].tc[0] = (short)(k_xsz[i]/*partvtx_xsz[i]*/ << 5);
	    Vtx[j+2].tc[1] = Vtx[j+3].tc[1] = (short)(k_ysz[i]/*partvtx_ysz[i]*/ << 5);
	    Vtx[j+0].cn[0] = Vtx[j+2].cn[0] = 
		Vtx[j+0].cn[1] = Vtx[j+2].cn[1] = 
		Vtx[j+0].cn[2] = Vtx[j+2].cn[2] = 
		Vtx[j+1].cn[0] = Vtx[j+3].cn[0] = 
		Vtx[j+1].cn[1] = Vtx[j+3].cn[1] = 
		Vtx[j+1].cn[2] = Vtx[j+3].cn[2] = 255;
	    Vtx[j+0].cn[3] = Vtx[j+2].cn[3] =
		Vtx[j+1].cn[3] = Vtx[j+3].cn[3] = (unchar)kscope->alpha;
	}
	if ( pt == 4 ) {
	    /* �ͣ��Сʣǣ�����*/
////////	    if ( game_play->scene_data_ID >= SPOT00 &&  game_play->scene_data_ID <= SPOT20 ) {
	    j -= 12;
////////		i = game_play->scene_data_ID - SPOT00;
	    i = ZCommonGet( area_type ); /*YREG(21);*/
	    Vtx[j+0].ob[0] = Vtx[j+2].ob[0] = spot_mark_xd[i];
	    Vtx[j+1].ob[0] = Vtx[j+3].ob[0] = (short)(Vtx[j+0].ob[0] + spot_mark_xs[i]);
/*
  if ( kscope->pause == Pause_In || kscope->pause >= Pause_Out ) {
  Vtx[j+0].ob[1] = Vtx[j+1].ob[1] = spot_mark_yd[i] + 80;
  } else {
  Vtx[j+0].ob[1] = Vtx[j+1].ob[1] = spot_mark_yd[i];
  }*/
	    Vtx[j+0].ob[1] = Vtx[j+1].ob[1] = spot_mark_yd[i] + kscope->yp;
	    Vtx[j+2].ob[1] = Vtx[j+3].ob[1] = (short)(Vtx[j+0].ob[1] - spot_mark_ys[i]);
	    j += 12;
	    
	    if ( kscope->warashibe_flag != 0xff ) {	/* ��餷�٥ޡ���ɽ�� */
		if ( !wara_ct ) {
		    wara_pt++;
		    switch ( wara_pt ) {
		    case 1:
			wara_yps = 3;
			wara_ct = 8;
			break;
		    case 2:
			wara_yps =
			    wara_pt = 0;
			wara_ct = 6;
			break;
		    }
		} else --wara_ct;
		i = jj + ((16 + kscope->warashibe_flag) * 4);
		k = jj + ((16 + 12 + 1) * 4);
		Vtx[k+0].ob[0] = Vtx[k+2].ob[0] = Vtx[i+0].ob[0];
		Vtx[k+1].ob[0] = Vtx[k+3].ob[0] = (short)(Vtx[k+0].ob[0] + 8);
		Vtx[k+0].ob[1] = Vtx[k+1].ob[1] = (short)(Vtx[i+0].ob[1] + 10 - wara_yps);
		Vtx[k+2].ob[1] = Vtx[k+3].ob[1] = (short)(Vtx[k+0].ob[1] - 8);
		Vtx[k+0].ob[2] = Vtx[k+1].ob[2] =
		    Vtx[k+2].ob[2] = Vtx[k+3].ob[2] = 0;
		Vtx[k+0].flag = Vtx[k+1].flag =
		    Vtx[k+2].flag = Vtx[k+3].flag = 0;
		Vtx[j].tc[0] = Vtx[j].tc[1] =
		    Vtx[k+1].tc[1] = Vtx[k+2].tc[0] = 0;
		Vtx[k+1].tc[0] = Vtx[k+3].tc[0] = (short)(8 << 5);
		Vtx[k+2].tc[1] = Vtx[k+3].tc[1] = (short)(8 << 5);
		Vtx[k+0].cn[0] = Vtx[k+2].cn[0] = 
		    Vtx[k+0].cn[1] = Vtx[k+2].cn[1] = 
		    Vtx[k+0].cn[2] = Vtx[k+2].cn[2] = 
		    Vtx[k+1].cn[0] = Vtx[k+3].cn[0] = 
		    Vtx[k+1].cn[1] = Vtx[k+3].cn[1] = 
		    Vtx[k+1].cn[2] = Vtx[k+3].cn[2] = 255;
		Vtx[k+0].cn[3] = Vtx[k+2].cn[3] =
		    Vtx[k+1].cn[3] = Vtx[k+3].cn[3] = (unchar)kscope->alpha;
	    }
	}
    }
    return( j );
}


/*===============================================================
  =	�֣����ǡ��� ������					=
 ===============================================================*/
static void
vtx_data_inital( Game_play *game_play, Graph *graph )
{
    Kscope		*kscope = (Kscope *)&game_play->kscope;


    /* �ɣԣţ� �ӣţ̣ţã��� */
    static short item_count_index[] = {
	0*4, 1*4, 2*4, 3*4, 6*4, 8*4, 14*4,
    };
/*    static short c_set_itemVtx_p[] = {
	 0*4,  1*4,  2*4,  3*4,
	 6*4,  7*4,  8*4,  9*4,
	12*4, 13*4, 14*4, 15*4,
				22*4, 23*4, 
				 4*4,  5*4,
				10*4, 11*4,
				16*4, 17*4,
	18*4, 19*4, 20*4, 21*4,
    };*/

    /* �ţѣգɣУͣţΣ��� */
    static short equip_itemvtx_xpd[] = {
	-114, 12, 44, 76,
    };
    static unchar equip_pnt[] = {
	1, 5, 9, 13,
    };

    /* �ͣ����� */

    /* �ãϣ̣̣ţã��� */
    static short collect_itemvtx_xpd[] = {
	 74,  74,  46,  18,  18,  46,  //42,
	-108, -90, -72, -54, -36, -18,
	-108, -90, -72, -54, -36, -18,
	 20,  46,  72,
	-110, -86,-110,////////-86,
	-54,
////////	-92, -78,
	-98, -86, -74, -62, -50, -38, -26, -14,
	-98, -86, -74, -62, -50, -38, -26, -14,
	-88, -81, -72, -90, -83, -74,
    };
    static short collect_itemvtx_ypd[] = {
 	 38,   6, -12,   6,  38,  56,  //30,
	-20, -20, -20, -20, -20, -20,
	  2,   2,   2,   2,   2,   2,
	-46, -46, -46,
	 58,  58,  34,////////  34,
	 58,
////////	-48, -48,
	-52, -52, -52, -52, -52, -52, -52, -52,
	-52, -52, -52, -52, -52, -52, -52, -52,
	 34,  34,  34,  36,  36,  36,
    };
    static short collect_itemvtx_size[] = {
	24,  24,  24,  24,  24,  24,  //32,
	24,  24,  24,  24,  24,  24,
	24,  24,  24,  24,  24,  24,
	24,  24,  24,
	24,  24,  24,////////  24,
	48,
////////	16,  16,
	16,  16,  16,  16,  16, 16,  16,  16, 
	16,  16,  16,  16,  16, 16,  16,  16,
	16,  16,  16,  16,  16,  16,
    };

    short	i, j, k;
    short	xp, yp;

    
    /*
     * �ե졼�� �֣����ǡ���������
     */
    kscope->yp = 0;
    if ( kscope->pause == Pause_In || kscope->pause >= Pause_Out ||
	 (kscope->pause == Pause_Save && (kscope->save_status == Save_Cancel0 ||kscope->save_status == Save_Cancel1)) ||
	 (kscope->pause >= Pause_Gameover_C && kscope->pause <= Pause_Gameover_I) ) kscope->yp = 80;
    /* �ɣԣţͥե졼�� */
    kscope->item_frame_Vtx = (Vtx_t *)Graph_alloc( sizeof(Vtx_t) * ((5*3) * 4) );
    j = vtx_frame_set( game_play, kscope->item_frame_Vtx, 0, 0 );


    /* �ţѣգɣУͣţΣԥե졼�� */
    kscope->equipment_frame_Vtx = (Vtx_t *)Graph_alloc( sizeof(Vtx_t) * ((5*3) * 4) );
    j = vtx_frame_set( game_play, kscope->equipment_frame_Vtx, 1, 0 );


    /* �ͣ��Хե졼�� */
/*    if ( game_play->room_info.now.type != ROOM_TYPE_DANGEON || game_play->scene_data_ID == MEN ) {*/
    if ( !FIELD_DUNGEON ) {
	/* �ƣɣţ̣Ĩ��ͣ��� */
	kscope->map_frame_Vtx = (Vtx_t *)Graph_alloc( sizeof(Vtx_t) * (((5*3)+16+12+1+1+1+1+15) * 4) );
	j = vtx_frame_set( game_play, kscope->map_frame_Vtx, 4, 16+12+1+1+1+1 );
	for ( i = 0, yp = 58; i < 15; i++, j+=4, yp-=9 ) {
	    kscope->map_frame_Vtx[j+0].ob[0] = kscope->map_frame_Vtx[j+2].ob[0] = -108;
	    kscope->map_frame_Vtx[j+1].ob[0] = kscope->map_frame_Vtx[j+3].ob[0] = (short)(kscope->map_frame_Vtx[j+0].ob[0] + 216);
	    kscope->map_frame_Vtx[j+0].ob[1] = kscope->map_frame_Vtx[j+1].ob[1] = yp + kscope->yp;
	    kscope->map_frame_Vtx[j+2].ob[1] = kscope->map_frame_Vtx[j+3].ob[1] = (short)(kscope->map_frame_Vtx[j+0].ob[1] - 9);
	    kscope->map_frame_Vtx[j+0].ob[2] = kscope->map_frame_Vtx[j+1].ob[2] =
		kscope->map_frame_Vtx[j+2].ob[2] = kscope->map_frame_Vtx[j+3].ob[2] = 0;
	    kscope->map_frame_Vtx[j+0].flag = kscope->map_frame_Vtx[j+1].flag =
		kscope->map_frame_Vtx[j+2].flag = kscope->map_frame_Vtx[j+3].flag = 0;
	    kscope->map_frame_Vtx[j].tc[0] = kscope->map_frame_Vtx[j].tc[1] =
		kscope->map_frame_Vtx[j+1].tc[1] = kscope->map_frame_Vtx[j+2].tc[0] = 0;
	    kscope->map_frame_Vtx[j+1].tc[0] = kscope->map_frame_Vtx[j+3].tc[0] = 216 << 5;
	    kscope->map_frame_Vtx[j+2].tc[1] = kscope->map_frame_Vtx[j+3].tc[1] = 9 << 5;
	    kscope->map_frame_Vtx[j+0].cn[0] = kscope->map_frame_Vtx[j+2].cn[0] = 
		kscope->map_frame_Vtx[j+0].cn[1] = kscope->map_frame_Vtx[j+2].cn[1] = 
		kscope->map_frame_Vtx[j+0].cn[2] = kscope->map_frame_Vtx[j+2].cn[2] = 
		kscope->map_frame_Vtx[j+1].cn[0] = kscope->map_frame_Vtx[j+3].cn[0] = 
		kscope->map_frame_Vtx[j+1].cn[1] = kscope->map_frame_Vtx[j+3].cn[1] = 
		kscope->map_frame_Vtx[j+1].cn[2] = kscope->map_frame_Vtx[j+3].cn[2] = 
		kscope->map_frame_Vtx[j+0].cn[3] = kscope->map_frame_Vtx[j+2].cn[3] =
		kscope->map_frame_Vtx[j+1].cn[3] = kscope->map_frame_Vtx[j+3].cn[3] = (unchar)kscope->alpha;
	}
	kscope->map_frame_Vtx[j+2-4].ob[1] = kscope->map_frame_Vtx[j+3-4].ob[1] = (short)(kscope->map_frame_Vtx[j+0-4].ob[1] - 2);
	kscope->map_frame_Vtx[j+2-4].tc[1] = kscope->map_frame_Vtx[j+3-4].tc[1] = 2 << 5;
/*
	kscope->map_frame_Vtx = (Vtx_t *)Graph_alloc( sizeof(Vtx_t) * (((5*3)+9+1+16) * 4) );
	j = vtx_frame_set( game_play, kscope->map_frame_Vtx, 4, 9+1 );
	for ( i = 0, yp = 58; i < 16; i++, j+=4, yp-=8 ) {
	    kscope->map_frame_Vtx[j+0].ob[0] = kscope->map_frame_Vtx[j+2].ob[0] = -114;
	    kscope->map_frame_Vtx[j+1].ob[0] = kscope->map_frame_Vtx[j+3].ob[0] = (short)(kscope->map_frame_Vtx[j+0].ob[0] + 228);
	    kscope->map_frame_Vtx[j+0].ob[1] = kscope->map_frame_Vtx[j+1].ob[1] = yp + kscope->yp;
	    kscope->map_frame_Vtx[j+2].ob[1] = kscope->map_frame_Vtx[j+3].ob[1] = (short)(kscope->map_frame_Vtx[j+0].ob[1] - 8);
	    kscope->map_frame_Vtx[j+0].ob[2] = kscope->map_frame_Vtx[j+1].ob[2] =
		kscope->map_frame_Vtx[j+2].ob[2] = kscope->map_frame_Vtx[j+3].ob[2] = 0;
	    kscope->map_frame_Vtx[j+0].flag = kscope->map_frame_Vtx[j+1].flag =
		kscope->map_frame_Vtx[j+2].flag = kscope->map_frame_Vtx[j+3].flag = 0;
	    kscope->map_frame_Vtx[j].tc[0] = kscope->map_frame_Vtx[j].tc[1] =
		kscope->map_frame_Vtx[j+1].tc[1] = kscope->map_frame_Vtx[j+2].tc[0] = 0;
	    kscope->map_frame_Vtx[j+1].tc[0] = kscope->map_frame_Vtx[j+3].tc[0] = 228 << 5;
	    kscope->map_frame_Vtx[j+2].tc[1] = kscope->map_frame_Vtx[j+3].tc[1] = 8 << 5;
	    kscope->map_frame_Vtx[j+0].cn[0] = kscope->map_frame_Vtx[j+2].cn[0] = 
		kscope->map_frame_Vtx[j+0].cn[1] = kscope->map_frame_Vtx[j+2].cn[1] = 
		kscope->map_frame_Vtx[j+0].cn[2] = kscope->map_frame_Vtx[j+2].cn[2] = 
		kscope->map_frame_Vtx[j+1].cn[0] = kscope->map_frame_Vtx[j+3].cn[0] = 
		kscope->map_frame_Vtx[j+1].cn[1] = kscope->map_frame_Vtx[j+3].cn[1] = 
		kscope->map_frame_Vtx[j+1].cn[2] = kscope->map_frame_Vtx[j+3].cn[2] = 
		kscope->map_frame_Vtx[j+0].cn[3] = kscope->map_frame_Vtx[j+2].cn[3] =
		kscope->map_frame_Vtx[j+1].cn[3] = kscope->map_frame_Vtx[j+3].cn[3] = (unchar)kscope->alpha;
	}
	*/
    } else {
	/* �ģգΣǣţϣΨ��ͣ��� */
	kscope->map_frame_Vtx = (Vtx_t *)Graph_alloc( sizeof(Vtx_t) * (((5*3)+DG_VTX) * 4) );
	j = vtx_frame_set( game_play, kscope->map_frame_Vtx, 2, DG_VTX );
    }

    /* �ãϣ̣̣ţãԥե졼�� */
    kscope->collect_frame_Vtx = (Vtx_t *)Graph_alloc( sizeof(Vtx_t) * ((5*3) * 4) );
    j = vtx_frame_set( game_play, kscope->collect_frame_Vtx, 3, 0 );


    /*
     * �������� �֣����ǡ���������
     */
    kscope->cursolVtx = (Vtx_t *)Graph_alloc( sizeof(Vtx_t) * (5 * 4) );
    for( i = 0; i < 5*4; i++ ) {
	kscope->cursolVtx[i].ob[0] = kscope->cursolVtx[i].ob[1] = kscope->cursolVtx[i].ob[2] = 0;
	kscope->cursolVtx[i].flag = 0;
	kscope->cursolVtx[i].tc[0] = kscope->cursolVtx[i].tc[1] = 0;
	kscope->cursolVtx[i].cn[0] = kscope->cursolVtx[i].cn[1] = kscope->cursolVtx[i].cn[2] = kscope->cursolVtx[i].cn[3] = 255;
    }
    kscope->cursolVtx[1].tc[0] = kscope->cursolVtx[2].tc[1] = kscope->cursolVtx[3].tc[0] = kscope->cursolVtx[3].tc[1] =
	kscope->cursolVtx[5].tc[0] = kscope->cursolVtx[6].tc[1] = kscope->cursolVtx[7].tc[0] = kscope->cursolVtx[7].tc[1] =
	kscope->cursolVtx[9].tc[0] = kscope->cursolVtx[10].tc[1] = kscope->cursolVtx[11].tc[0] = kscope->cursolVtx[11].tc[1] =
	kscope->cursolVtx[13].tc[0] = kscope->cursolVtx[14].tc[1] = kscope->cursolVtx[15].tc[0] = kscope->cursolVtx[15].tc[1] = 16<<5;
    kscope->cursolVtx[17].tc[0] = kscope->cursolVtx[18].tc[1] = kscope->cursolVtx[19].tc[0] = kscope->cursolVtx[19].tc[1] = 32<<5;


    /*
     * �ɣԣţ� �ӣţ̣ţã��� �֣����ǡ���������
     */
    kscope->itemVtx = (Vtx_t *)Graph_alloc( sizeof(Vtx_t) * ((6*4)+3+(2*7)) * 4 );
    /* �����ƥ� */
    for ( i = k = 0, yp = 58; k < 4; k++, yp -= 32 ) {
	xp = -96;
	for ( j = 0; j < 6; j++, i+=4, xp += 32 ) {
	    kscope->itemVtx[i].ob[0]   = kscope->itemVtx[i+2].ob[0] = (short)(xp + 2);
	    kscope->itemVtx[i+1].ob[0] = kscope->itemVtx[i+3].ob[0] = (short)(kscope->itemVtx[i].ob[0] + 32 - 4 );
	    kscope->itemVtx[i].ob[1]   = kscope->itemVtx[i+1].ob[1] = (short)(yp + kscope->yp - 2);
	    kscope->itemVtx[i+2].ob[1] = kscope->itemVtx[i+3].ob[1] = (short)(kscope->itemVtx[i].ob[1] - 32 + 4);
	    kscope->itemVtx[i].ob[2] = kscope->itemVtx[i+1].ob[2] = 
		kscope->itemVtx[i+2].ob[2] = kscope->itemVtx[i+3].ob[2] = 0;
	    kscope->itemVtx[i].flag = kscope->itemVtx[i+1].flag = 
		kscope->itemVtx[i+2].flag = kscope->itemVtx[i+3].flag = 0;
	    kscope->itemVtx[i].tc[0] = kscope->itemVtx[i].tc[1] = 
		kscope->itemVtx[i+1].tc[1] = kscope->itemVtx[i+2].tc[0] = 0;
	    kscope->itemVtx[i+1].tc[0] = kscope->itemVtx[i+2].tc[1] = 
		kscope->itemVtx[i+3].tc[0] = kscope->itemVtx[i+3].tc[1] = 32 << 5;
	    kscope->itemVtx[i].cn[0] = kscope->itemVtx[i+1].cn[0] = 
		kscope->itemVtx[i+2].cn[0] = kscope->itemVtx[i+3].cn[0] =
		kscope->itemVtx[i].cn[1] = kscope->itemVtx[i+1].cn[1] = 
		kscope->itemVtx[i+2].cn[1] = kscope->itemVtx[i+3].cn[1] =
		kscope->itemVtx[i].cn[2] = kscope->itemVtx[i+1].cn[2] = 
		kscope->itemVtx[i+2].cn[2] = kscope->itemVtx[i+3].cn[2] = 255;
	    kscope->itemVtx[i].cn[3] = kscope->itemVtx[i+1].cn[3] = 
		kscope->itemVtx[i+2].cn[3] = kscope->itemVtx[i+3].cn[3] = 255;
	}
    }
    /* �طʣåܥ��� */
    for ( j = 1; j < 4; i+=4, j++ ) {
/*	if ( Register_Item(j) != 0xff ) {
   	    if ( Register_Item(j) >= H_bottle && Register_Item(j) <= H_bottle_6 ) {
	    }
	    k = c_set_itemVtx_p[Register_Item(j)];
	    if ( Register_Item(j) >= H_m_arrow_1 ) k = c_set_itemVtx_p[H_bow];*/
/*	PRINTF("PT[%d]=%d  ",j, Register_Item_Pt(j) );*/
	if ( Register_Item_Pt(j) != 0xff ) {
	    k = Register_Item_Pt(j) * 4;
	    kscope->itemVtx[i].ob[0]   = kscope->itemVtx[i+2].ob[0] = (short)(kscope->itemVtx[k].ob[0] - 2);
	    kscope->itemVtx[i+1].ob[0] = kscope->itemVtx[i+3].ob[0] = (short)(kscope->itemVtx[i].ob[0] + 32 );
	    kscope->itemVtx[i].ob[1]   = kscope->itemVtx[i+1].ob[1] = (short)(kscope->itemVtx[k].ob[1] + 2);
	    kscope->itemVtx[i+2].ob[1] = kscope->itemVtx[i+3].ob[1] = (short)(kscope->itemVtx[i].ob[1] - 32);
	    kscope->itemVtx[i].ob[2] = kscope->itemVtx[i+1].ob[2] = 
		kscope->itemVtx[i+2].ob[2] = kscope->itemVtx[i+3].ob[2] = 0;
	    kscope->itemVtx[i].flag = kscope->itemVtx[i+1].flag = 
		kscope->itemVtx[i+2].flag = kscope->itemVtx[i+3].flag = 0;
	    kscope->itemVtx[i].tc[0] = kscope->itemVtx[i].tc[1] = 
		kscope->itemVtx[i+1].tc[1] = kscope->itemVtx[i+2].tc[0] = 0;
	    kscope->itemVtx[i+1].tc[0] = kscope->itemVtx[i+2].tc[1] = 
		kscope->itemVtx[i+3].tc[0] = kscope->itemVtx[i+3].tc[1] = 32 << 5;
	    kscope->itemVtx[i].cn[0] = kscope->itemVtx[i+1].cn[0] = 
		kscope->itemVtx[i+2].cn[0] = kscope->itemVtx[i+3].cn[0] =
		kscope->itemVtx[i].cn[1] = kscope->itemVtx[i+1].cn[1] = 
		kscope->itemVtx[i+2].cn[1] = kscope->itemVtx[i+3].cn[1] =
		kscope->itemVtx[i].cn[2] = kscope->itemVtx[i+1].cn[2] = 
		kscope->itemVtx[i+2].cn[2] = kscope->itemVtx[i+3].cn[2] = 255;
	    kscope->itemVtx[i].cn[3] = kscope->itemVtx[i+1].cn[3] = 
		kscope->itemVtx[i+2].cn[3] = kscope->itemVtx[i+3].cn[3] = (unchar)kscope->alpha;
	} else {
	    kscope->itemVtx[i].ob[0]   = kscope->itemVtx[i+2].ob[0] = -300;
	    kscope->itemVtx[i+1].ob[0] = kscope->itemVtx[i+3].ob[0] = (short)(kscope->itemVtx[i].ob[0] + 32 );
	    kscope->itemVtx[i].ob[1]   = kscope->itemVtx[i+1].ob[1] =  300;
	    kscope->itemVtx[i+2].ob[1] = kscope->itemVtx[i+3].ob[1] = (short)(kscope->itemVtx[i].ob[1] - 32);
	}
    }
/*    PRINTF("\n");*/
    /* �����ƥ���ʣ���� */
    for ( i = ((6*4)+3)*4, j = 0; j < 7; j++ ) {
	k = item_count_index[j];
	kscope->itemVtx[i].ob[0]   = kscope->itemVtx[i+2].ob[0] = (short)(kscope->itemVtx[k].ob[0]);
	kscope->itemVtx[i+1].ob[0] = kscope->itemVtx[i+3].ob[0] = (short)(kscope->itemVtx[i].ob[0] + 8 );
	kscope->itemVtx[i].ob[1]   = kscope->itemVtx[i+1].ob[1] = (short)(kscope->itemVtx[k].ob[1] - 22 );
	kscope->itemVtx[i+2].ob[1] = kscope->itemVtx[i+3].ob[1] = (short)(kscope->itemVtx[i].ob[1] - 8 );
	kscope->itemVtx[i+4].ob[0]   = kscope->itemVtx[i+6].ob[0] = (short)(kscope->itemVtx[i].ob[0] + 6 );
	kscope->itemVtx[i+5].ob[0] = kscope->itemVtx[i+7].ob[0] = (short)(kscope->itemVtx[i+4].ob[0] + 8 );
	kscope->itemVtx[i+4].ob[1]   = kscope->itemVtx[i+5].ob[1] = (short)(kscope->itemVtx[i].ob[1]);
	kscope->itemVtx[i+6].ob[1] = kscope->itemVtx[i+7].ob[1] = (short)(kscope->itemVtx[i+4].ob[1] - 8 );
	for ( k = 0; k < 2; k++, i+=4 ) {
	    kscope->itemVtx[i].ob[2] = kscope->itemVtx[i+1].ob[2] = 
		kscope->itemVtx[i+2].ob[2] = kscope->itemVtx[i+3].ob[2] = 0;
	    kscope->itemVtx[i].flag = kscope->itemVtx[i+1].flag = 
		kscope->itemVtx[i+2].flag = kscope->itemVtx[i+3].flag = 0;
	    kscope->itemVtx[i].tc[0] = kscope->itemVtx[i].tc[1] = 
		kscope->itemVtx[i+1].tc[1] = kscope->itemVtx[i+2].tc[0] = 0;
	    kscope->itemVtx[i+1].tc[0] = kscope->itemVtx[i+2].tc[1] = 
		kscope->itemVtx[i+3].tc[0] = kscope->itemVtx[i+3].tc[1] = 8<<5;
	    kscope->itemVtx[i].cn[0] = kscope->itemVtx[i+1].cn[0] = 
		kscope->itemVtx[i+2].cn[0] = kscope->itemVtx[i+3].cn[0] =
		kscope->itemVtx[i].cn[1] = kscope->itemVtx[i+1].cn[1] = 
		kscope->itemVtx[i+2].cn[1] = kscope->itemVtx[i+3].cn[1] =
		kscope->itemVtx[i].cn[2] = kscope->itemVtx[i+1].cn[2] = 
		kscope->itemVtx[i+2].cn[2] = kscope->itemVtx[i+3].cn[2] = 255;
	    kscope->itemVtx[i].cn[3] = kscope->itemVtx[i+1].cn[3] = 
	    kscope->itemVtx[i+2].cn[3] = kscope->itemVtx[i+3].cn[3] = (unchar)kscope->alpha;
	}
    }


    /*
     * �ţѣգɣУͣţΣ��� �֣����ǡ���������
     */
    kscope->equipVtx = (Vtx_t *)Graph_alloc( sizeof(Vtx_t) * ((4+(4*3)+4+8) * 4) );
    /* �����ƥ� */
    for ( i = k = 0, yp = 58; i < 4; i++, yp -= 32 ) {
	for ( j = 0; j < 4; j++, k+=4 ) {
	    kscope->equipVtx[k].ob[0] = kscope->equipVtx[k+2].ob[0] = (short)(equip_itemvtx_xpd[j] + 2);
	    kscope->equipVtx[k+1].ob[0] = kscope->equipVtx[k+3].ob[0] = (short)(kscope->equipVtx[k].ob[0] + 32 - 4);
	    kscope->equipVtx[k].ob[1] = kscope->equipVtx[k+1].ob[1] = (short)(yp + kscope->yp - 2);
	    kscope->equipVtx[k+2].ob[1] = kscope->equipVtx[k+3].ob[1] = (short)(kscope->equipVtx[k].ob[1] - 32 + 4);
	    kscope->equipVtx[k].ob[2] = kscope->equipVtx[k+1].ob[2] = 
		kscope->equipVtx[k+2].ob[2] = kscope->equipVtx[k+3].ob[2] = 0;
	    kscope->equipVtx[k].flag = kscope->equipVtx[k+1].flag = 
		kscope->equipVtx[k+2].flag = kscope->equipVtx[k+3].flag = 0;
	    kscope->equipVtx[k].tc[0] = kscope->equipVtx[k].tc[1] = 
		kscope->equipVtx[k+1].tc[1] = kscope->equipVtx[k+2].tc[0] = 0;
	    kscope->equipVtx[k+1].tc[0] = kscope->equipVtx[k+2].tc[1] = 
		kscope->equipVtx[k+3].tc[0] = kscope->equipVtx[k+3].tc[1] = 32<<5;
	    kscope->equipVtx[k].cn[0] = kscope->equipVtx[k+1].cn[0] = 
		kscope->equipVtx[k+2].cn[0] = kscope->equipVtx[k+3].cn[0] =
		kscope->equipVtx[k].cn[1] = kscope->equipVtx[k+1].cn[1] = 
		kscope->equipVtx[k+2].cn[1] = kscope->equipVtx[k+3].cn[1] =
 		kscope->equipVtx[k].cn[2] = kscope->equipVtx[k+1].cn[2] = 
		kscope->equipVtx[k+2].cn[2] = kscope->equipVtx[k+3].cn[2] = 255;
	    kscope->equipVtx[k].cn[3] = kscope->equipVtx[k+1].cn[3] = 
		kscope->equipVtx[k+2].cn[3] = kscope->equipVtx[k+3].cn[3] = (unchar)kscope->alpha;
	}
    }
    /* �طʣåܥ��� */
    for ( j = 0; j < 4; k+=4, j++ ) {
	if ( EQUIPMENT_ITEM( j ) ) {
	    i = (EQUIPMENT_ITEM( j ) + equip_pnt[j] - 1) * 4;
	    kscope->equipVtx[k].ob[0]   = kscope->equipVtx[k+2].ob[0] = (short)kscope->equipVtx[i].ob[0] - 2;
	    kscope->equipVtx[k+1].ob[0] = kscope->equipVtx[k+3].ob[0] = (short)(kscope->equipVtx[k].ob[0] + 32 );
	    kscope->equipVtx[k].ob[1]   = kscope->equipVtx[k+1].ob[1] = (short)kscope->equipVtx[i].ob[1] + 2;
	    kscope->equipVtx[k+2].ob[1] = kscope->equipVtx[k+3].ob[1] = (short)(kscope->equipVtx[k].ob[1] - 32 );
	    kscope->equipVtx[k].ob[2] = kscope->equipVtx[k+1].ob[2] = 
		kscope->equipVtx[k+2].ob[2] = kscope->equipVtx[k+3].ob[2] = 0;
	    kscope->equipVtx[k].flag = kscope->equipVtx[k+1].flag = 
		kscope->equipVtx[k+2].flag = kscope->equipVtx[k+3].flag = 0;
	    kscope->equipVtx[k].tc[0] = kscope->equipVtx[k].tc[1] = 
		kscope->equipVtx[k+1].tc[1] = kscope->equipVtx[k+2].tc[0] = 0;
	    kscope->equipVtx[k+1].tc[0] = kscope->equipVtx[k+2].tc[1] = 
		kscope->equipVtx[k+3].tc[0] = kscope->equipVtx[k+3].tc[1] = 32<<5;
	    kscope->equipVtx[k].cn[0] = kscope->equipVtx[k+1].cn[0] = 
		kscope->equipVtx[k+2].cn[0] = kscope->equipVtx[k+3].cn[0] =
		kscope->equipVtx[k].cn[1] = kscope->equipVtx[k+1].cn[1] = 
		kscope->equipVtx[k+2].cn[1] = kscope->equipVtx[k+3].cn[1] =
		kscope->equipVtx[k].cn[2] = kscope->equipVtx[k+1].cn[2] = 
		kscope->equipVtx[k+2].cn[2] = kscope->equipVtx[k+3].cn[2] = 255;
	    kscope->equipVtx[k].cn[3] = kscope->equipVtx[k+1].cn[3] = 
		kscope->equipVtx[k+2].cn[3] = kscope->equipVtx[k+3].cn[3] = (unchar)kscope->alpha;
	}
    }
    /* ��󥯥ݡ��� */
    xp = 112;
    yp = 50;
    do {
	kscope->equipVtx[k].ob[0]   = kscope->equipVtx[k+2].ob[0] = -64; /* �ţѣգɣ��̥�󥯣ذ��� */
	kscope->equipVtx[k+1].ob[0] = kscope->equipVtx[k+3].ob[0] = (short)(kscope->equipVtx[k].ob[0] + 64);
	kscope->equipVtx[k].ob[1] = kscope->equipVtx[k+1].ob[1] = (short)(yp + kscope->yp);
	kscope->equipVtx[k+2].ob[1] = kscope->equipVtx[k+3].ob[1] = (short)(kscope->equipVtx[k].ob[1] - 32);
	kscope->equipVtx[k].ob[2] = kscope->equipVtx[k+1].ob[2] = 
	    kscope->equipVtx[k+2].ob[2] = kscope->equipVtx[k+3].ob[2] = 0;
	kscope->equipVtx[k].flag = kscope->equipVtx[k+1].flag = 
	    kscope->equipVtx[k+2].flag = kscope->equipVtx[k+3].flag = 0;
	kscope->equipVtx[k].tc[0] = kscope->equipVtx[k].tc[1] = 
	    kscope->equipVtx[k+1].tc[1] = kscope->equipVtx[k+2].tc[0] = 0;
	kscope->equipVtx[k+1].tc[0] = kscope->equipVtx[k+3].tc[0] = 64 << 5;
	kscope->equipVtx[k+2].tc[1] = kscope->equipVtx[k+3].tc[1] = 32 << 5;
	kscope->equipVtx[k].cn[0] = kscope->equipVtx[k+1].cn[0] = 
	    kscope->equipVtx[k+2].cn[0] = kscope->equipVtx[k+3].cn[0] =
	    kscope->equipVtx[k].cn[1] = kscope->equipVtx[k+1].cn[1] = 
	    kscope->equipVtx[k+2].cn[1] = kscope->equipVtx[k+3].cn[1] =
	    kscope->equipVtx[k].cn[2] = kscope->equipVtx[k+1].cn[2] = 
	    kscope->equipVtx[k+2].cn[2] = kscope->equipVtx[k+3].cn[2] = 255;
	kscope->equipVtx[k].cn[3] = kscope->equipVtx[k+1].cn[3] = 
	    kscope->equipVtx[k+2].cn[3] = kscope->equipVtx[k+3].cn[3] = (unchar)kscope->alpha;

	if ( (xp -= 32) < 0 ) {
	    kscope->equipVtx[k+2].ob[1] = kscope->equipVtx[k+3].ob[1] = (short)(kscope->equipVtx[k].ob[1] - 16);
	    kscope->equipVtx[k+2].tc[1] = kscope->equipVtx[k+3].tc[1] = 16 << 5;
	    break;
	}
	yp -= 32;
	k += 4;
    } while ( 1 );

    
    /*
     * �ãϣ̣̣ţã��� �֣����ǡ���������
     */
    kscope->collectVtx = (Vtx_t *)Graph_alloc( sizeof(Vtx_t) * ((COLLECT_MAX+8+8+6) * 4) );
    /* �����ƥ� */
    for ( j = k = 0; j < (COLLECT_MAX+8+8+6); j++, k+=4 ) {
	short size = collect_itemvtx_size[j];
	if ( j < C_SEAL || j >= (COLLECT_MAX+8+8) ) {
	    kscope->collectVtx[k].ob[0] = kscope->collectVtx[k+2].ob[0] = collect_itemvtx_xpd[j];
	    kscope->collectVtx[k+1].ob[0] = kscope->collectVtx[k+3].ob[0] = (short)(kscope->collectVtx[k].ob[0] + collect_itemvtx_size[j]);
	    kscope->collectVtx[k].ob[1] = kscope->collectVtx[k+1].ob[1] = (short)(collect_itemvtx_ypd[j] + kscope->yp);
	    kscope->collectVtx[k+2].ob[1] = kscope->collectVtx[k+3].ob[1] = (short)(kscope->collectVtx[k].ob[1] - collect_itemvtx_size[j]);
	    if ( j >= (COLLECT_MAX+8+8) ) {
		size = 8;
		kscope->collectVtx[k+1].ob[0] = kscope->collectVtx[k+3].ob[0] = (short)(kscope->collectVtx[k].ob[0] + size);
		kscope->collectVtx[k].ob[1] = kscope->collectVtx[k+1].ob[1] = (short)(collect_itemvtx_ypd[j] + kscope->yp - 6);
		kscope->collectVtx[k+2].ob[1] = kscope->collectVtx[k+3].ob[1] = (short)(kscope->collectVtx[k].ob[1] - 16);
	    }
	} else {
	    if ( j >= (C_SEAL) && j < (C_SEAL+C_MELODY) ) size = 16;
	    kscope->collectVtx[k].ob[0] = kscope->collectVtx[k+2].ob[0] = (short)(collect_itemvtx_xpd[j] + 2);
	    kscope->collectVtx[k+1].ob[0] = kscope->collectVtx[k+3].ob[0] = (short)(kscope->collectVtx[k].ob[0] + (size - 4));
	    kscope->collectVtx[k].ob[1] = kscope->collectVtx[k+1].ob[1] = (short)(collect_itemvtx_ypd[j] + kscope->yp - 2);
	    kscope->collectVtx[k+2].ob[1] = kscope->collectVtx[k+3].ob[1] = (short)(kscope->collectVtx[k].ob[1] - (collect_itemvtx_size[j] - 4));
	}
	kscope->collectVtx[k].ob[2] = kscope->collectVtx[k+1].ob[2] = 
	    kscope->collectVtx[k+2].ob[2] = kscope->collectVtx[k+3].ob[2] = 0;
	kscope->collectVtx[k].flag = kscope->collectVtx[k+1].flag = 
	    kscope->collectVtx[k+2].flag = kscope->collectVtx[k+3].flag = 0;
	kscope->collectVtx[k].tc[0] = kscope->collectVtx[k].tc[1] = 
	    kscope->collectVtx[k+1].tc[1] = kscope->collectVtx[k+2].tc[0] = 0;
	kscope->collectVtx[k+1].tc[0] = kscope->collectVtx[k+3].tc[0] = size << 5;
	kscope->collectVtx[k+2].tc[1] = kscope->collectVtx[k+3].tc[1] = collect_itemvtx_size[j] << 5;
	kscope->collectVtx[k].cn[0] = kscope->collectVtx[k+1].cn[0] = 
	    kscope->collectVtx[k+2].cn[0] = kscope->collectVtx[k+3].cn[0] =
	    kscope->collectVtx[k].cn[1] = kscope->collectVtx[k+1].cn[1] = 
	    kscope->collectVtx[k+2].cn[1] = kscope->collectVtx[k+3].cn[1] =
	    kscope->collectVtx[k].cn[2] = kscope->collectVtx[k+1].cn[2] = 
	    kscope->collectVtx[k+2].cn[2] = kscope->collectVtx[k+3].cn[2] = 255;
	kscope->collectVtx[k].cn[3] = kscope->collectVtx[k+1].cn[3] = 
	    kscope->collectVtx[k+2].cn[3] = kscope->collectVtx[k+3].cn[3] = (unchar)kscope->alpha;
    }



    /*
     * ��˥塼 �֣����ǡ���������
     */
    kscope->menuVtx = (Vtx_t *)Graph_alloc( sizeof(Vtx_t) * ((6+1) * 4) );


    /*
     * �ӣ��֣� �֣����ǡ���������
     */
    kscope->saveVtx = (Vtx_t *)Graph_alloc( sizeof(Vtx_t) * (((5*3)+1+2+2/*+2*/) * 4) );
    j = vtx_frame_set( game_play, kscope->saveVtx, 5, 1+2+2/*+2*/ );

}







# if 0
/************************************************************************
 *	�ǣ��ͣš��ϣ֣ţ� ɽ��						*
 ************************************************************************/
static void
gover_draw( Game_play *game_play )
{
    Graph 		*graph = game_play->g.graph;

    OPEN_DISP(graph);

#define	G_CC_MORPH1	TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, 0, 0, 0, TEXEL0
#define	G_CC_MORPH2	PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0
    overlay_rectangle_a_prim(graph);
    gDPSetCycleType( NEXT_OVERLAY_DISP, G_CYC_2CYCLE );
    gDPSetRenderMode( NEXT_OVERLAY_DISP, G_RM_PASS, G_RM_XLU_SURF2 );
    gDPSetCombineMode( NEXT_OVERLAY_DISP, G_CC_MORPH1, G_CC_MORPH2 );
    gDPSetPrimColor( NEXT_OVERLAY_DISP, 0, 80, red, green, blue, alpha );
    gDPSetEnvColor( NEXT_OVERLAY_DISP, ered, egreen, eblue, 255 );
    VREG(89) -= 2;
    gDPLoadMultiBlock( NEXT_OVERLAY_DISP, g_go_font1_txt, 0, G_TX_RENDERTILE,
		       G_IM_FMT_IA, G_IM_SIZ_8b, 64, 32, 0,
		       G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR,
		       G_TX_NOMASK, G_TX_NOMASK,
		       G_TX_NOLOD, G_TX_NOLOD );
    gDPLoadMultiBlock( NEXT_OVERLAY_DISP, g_go_mable_txt, 256, G_TX_RENDERTILE+1,
		       G_IM_FMT_IA, G_IM_SIZ_8b, 64, 32, 0,
		       G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR,
		       G_TX_NOMASK, 5,
		       G_TX_NOLOD, G_TX_NOLOD );
    gDPSetTileSize( NEXT_OVERLAY_DISP, G_TX_RENDERTILE+1, 0,  VREG(89)&0x7f, 63<<2, (VREG(89)&0x7f) + (31<<2) );
    gSPTextureRectangle( NEXT_OVERLAY_DISP,
			 VREG(87) << 2, VREG(88) << 2,
			 VREG(87) + 64 << 2, VREG(88) + 32 << 2,
			 G_TX_RENDERTILE, 0, 0, 1 << 10, 1 << 10 );
    
    gDPLoadMultiBlock( NEXT_OVERLAY_DISP, g_go_font2_txt, 0, G_TX_RENDERTILE,
		       G_IM_FMT_IA, G_IM_SIZ_8b, 64, 32, 0,
		       G_TX_CLAMP, G_TX_CLAMP,
		       G_TX_NOMASK, G_TX_NOMASK,
		       G_TX_NOLOD, G_TX_NOLOD );
    gSPTextureRectangle( NEXT_OVERLAY_DISP,
			 (VREG(87)+64) << 2, VREG(88) << 2,
			 (VREG(87)+64)+64 << 2, VREG(88) + 32 << 2,
			 G_TX_RENDERTILE, 0, 0, 1 << 10, 1 << 10 );
    
    gDPLoadMultiBlock( NEXT_OVERLAY_DISP, g_go_font3_txt, 0, G_TX_RENDERTILE,
		       G_IM_FMT_IA, G_IM_SIZ_8b, 64, 32, 0,
		       G_TX_CLAMP, G_TX_CLAMP,
		       G_TX_NOMASK, G_TX_NOMASK,
		       G_TX_NOLOD, G_TX_NOLOD );
    gSPTextureRectangle( NEXT_OVERLAY_DISP,
			 (VREG(87)+64+64) << 2, VREG(88) << 2,
			 (VREG(87)+64+64)+64 << 2, VREG(88) + 32 << 2,
			 G_TX_RENDERTILE, 0, 0, 1 << 10, 1 << 10 );

    CLOSE_DISP(graph);
}
# endif
/************************************************************************
 *	�ǣ��ͣš��ϣ֣ţ� ɽ��						*
 ************************************************************************/
static void
gover_draw( Game_play *game_play )
{
    Graph 		*graph = game_play->g.graph;

    OPEN_DISP(graph);

#define	G_CC_MORPH1	TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, 0, 0, 0, TEXEL0
#define	G_CC_MORPH2	PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0
    rectangle_a_prim(graph);
    gDPSetCycleType( NEXT_DISP, G_CYC_2CYCLE );
    gDPSetRenderMode( NEXT_DISP, G_RM_PASS, G_RM_XLU_SURF2 );
    gDPSetCombineMode( NEXT_DISP, G_CC_MORPH1, G_CC_MORPH2 );
    gDPSetPrimColor( NEXT_DISP, 0, 80, red, green, blue, alpha );
    gDPSetEnvColor( NEXT_DISP, ered, egreen, eblue, 255 );
    VREG(89) -= 2;
    gDPLoadMultiBlock( NEXT_DISP, g_go_font1_txt, 0, G_TX_RENDERTILE,
		       G_IM_FMT_IA, G_IM_SIZ_8b, 64, 32, 0,
		       G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR,
		       G_TX_NOMASK, G_TX_NOMASK,
		       G_TX_NOLOD, G_TX_NOLOD );
    gDPLoadMultiBlock( NEXT_DISP, g_go_mable_txt, 256, G_TX_RENDERTILE+1,
		       G_IM_FMT_IA, G_IM_SIZ_8b, 64, 32, 0,
		       G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR,
		       G_TX_NOMASK, 5,
		       G_TX_NOLOD, G_TX_NOLOD );
    gDPSetTileSize( NEXT_DISP, G_TX_RENDERTILE+1, 0,  VREG(89)&0x7f, 63<<2, (VREG(89)&0x7f) + (31<<2) );
    gSPTextureRectangle( NEXT_DISP,
			 VREG(87) << 2, VREG(88) << 2,
			 VREG(87) + 64 << 2, VREG(88) + 32 << 2,
			 G_TX_RENDERTILE, 0, 0, 1 << 10, 1 << 10 );
    
    gDPLoadMultiBlock( NEXT_DISP, g_go_font2_txt, 0, G_TX_RENDERTILE,
		       G_IM_FMT_IA, G_IM_SIZ_8b, 64, 32, 0,
		       G_TX_CLAMP, G_TX_CLAMP,
		       G_TX_NOMASK, G_TX_NOMASK,
		       G_TX_NOLOD, G_TX_NOLOD );
    gSPTextureRectangle( NEXT_DISP,
			 (VREG(87)+64) << 2, VREG(88) << 2,
			 (VREG(87)+64)+64 << 2, VREG(88) + 32 << 2,
			 G_TX_RENDERTILE, 0, 0, 1 << 10, 1 << 10 );
    
    gDPLoadMultiBlock( NEXT_DISP, g_go_font3_txt, 0, G_TX_RENDERTILE,
		       G_IM_FMT_IA, G_IM_SIZ_8b, 64, 32, 0,
		       G_TX_CLAMP, G_TX_CLAMP,
		       G_TX_NOMASK, G_TX_NOMASK,
		       G_TX_NOLOD, G_TX_NOLOD );
    gSPTextureRectangle( NEXT_DISP,
			 (VREG(87)+64+64) << 2, VREG(88) << 2,
			 (VREG(87)+64+64)+64 << 2, VREG(88) + 32 << 2,
			 G_TX_RENDERTILE, 0, 0, 1 << 10, 1 << 10 );

    CLOSE_DISP(graph);
}
/************************************************************************
 *									*
 *	���쥤�ɡ��������ףģң���					*
 *									*
 ************************************************************************/
extern void
kaleido_scope_draw( Game_play *game_play )
{
    Kscope		*kscope = (Kscope *)&game_play->kscope;

    Parameter		*parameter = (Parameter *)&game_play->parameter;

#if !HAYAKAWA_TESTkk				/* ### delete by hayakawa */
    pad_t		*pad = &game_play->g.pads[0];
#endif


    OPEN_DISP( game_play->g.graph );



    
#if !HAYAKAWA_TESTkk				/* ### delete by hayakawa */
    kscope->wkey_x = Pad_stick_x();
    kscope->wkey_y = Pad_stick_y();
#endif

    /*
     * �ӣ����������
     */
    gSPSegment ( NEXT_DISP, DYNAMIC_SEGMENT,    	parameter->parameterSegment );
    gSPSegment ( NEXT_DISP, PARAMETER0_SEGMENT, 	kscope->playerSegment );
    gSPSegment ( NEXT_DISP, ICON_ITEM_SEGMENT,  	kscope->icon_itemSegment );
    gSPSegment ( NEXT_DISP, ICON_ITEM_24_SEGMENT,	kscope->icon_item24Segment );
    gSPSegment ( NEXT_DISP, ITEM_NAME_SEGMENT,  	kscope->item_nameSegment );
    gSPSegment ( NEXT_DISP, ICON_ITEM_MAP_SEGMENT,  kscope->icon_item_map_Segment );
    gSPSegment ( NEXT_DISP, ICON_ITEM_JPN_NES_SEGMENT,  kscope->icon_item_jpn_nes_Segment );
    
    
    if ( !kscope->debug ) {
	/* �ӥ塼���� */
	kaleido_scope_view( kscope, kscope->eye.x, kscope->eye.y, kscope->eye.z );
	
	    
	/* �ңģн���� */
	kaleido_scope_prim( game_play->g.graph );
	
	
	/* �֣����ǡ��������� */
	vtx_data_inital( game_play, game_play->g.graph );
	
	
	/* ���̺��� */
	kaleido_scope_set( game_play, game_play->g.graph );
	
	kaleido_scope_prim( game_play->g.graph );
	gDPSetCombineMode( NEXT_DISP, G_CC_INT9, G_CC_INT9 );
	
	
	/* �ӥ塼���� */
	kaleido_scope_view( kscope, 0.0f, 0.0f, 64.0f );
	
	
	/* ��˥塼���ѥåɣģң��� */
	if ( !(kscope->pause >= Pause_Gameover_C && kscope->pause <= Pause_Gameover_E) ) {
	    menu_pad_draw( game_play );
	}
	
    }
    if ( (kscope->pause >= Pause_Gameover_10 && kscope->pause <= Pause_Gameover_E) ) {
	gover_draw( game_play );

    }

    

    
    /*--------------------------------------------------------------*
     * �����ƥ��ѹ�����ɽ��					    *
     *--------------------------------------------------------------*/
    if ( kscope->debug == 1 || kscope->debug == 2 ) {
	kaleido_scope_debug_draw( game_play );
    }
    CLOSE_DISP( game_play->g.graph );
}




/*===============================================================
  =	�ƥ�����������Ѵ�					=
 ===============================================================*/
static void
black_white_data( unsigned int  *image, unshort size )
{
    unsigned int kk;
    unshort 	j;
    unshort	ar;

    
    for ( j = 0; j < (size); j++ ) {
////////	if ( !WREG(66) ) {
////////	    if ( (image[j] & 0xffffff00) ) {
////////		kk = image[j] >> 8;
////////		ar = ((((kk & 0x00ff0000) >> 15) + ((kk & 0x0000ff00) >> 6) + (kk & 0x000000ff)) / 7) & 0x00ff;
////////		kk = ar << 8;
////////		kk |= ar;
////////		kk <<= 8;
////////		kk |= ar;
////////		image[j] = (kk << 8) | (image[j] & 0x000000ff);
////////	    }
////////	} else if ( WREG(66) == 1 ) {
	    if ( (image[j] & 0xffffff00) ) {
		kk = image[j] >> 8;
		ar = ((((kk & 0x00ff0000) >> 16) + ((kk & 0x0000ff00) >> 7) + (kk & 0x000000ff)) / 7) & 0x00ff;
		kk = ar << 8;
		kk |= ar;
		kk <<= 8;
		kk |= ar;
		image[j] = (kk << 8) | (image[j] & 0x000000ff);
	    }
////////	} else if ( WREG(66) == 2 ) {
////////	    if ( (image[j] & 0xffffff00) ) {
////////		kk = image[j] >> 8;
////////		ar = ((((kk & 0x00ff0000) >> 16) + ((kk & 0x0000ff00) >> 6) + (kk & 0x000000ff)) / 7) & 0x00ff;
////////		kk = ar << 8;
////////		kk |= ar;
////////		kk <<= 8;
////////		kk |= ar;
////////		image[j] = (kk << 8) | (image[j] & 0x000000ff);
////////	    }
////////	} else if ( WREG(66) == 3 ) {
////////	    if ( (image[j] & 0xffffff00) ) {
////////		kk = image[j] >> 8;
////////		ar = ((((kk & 0x00ff0000) >> 15) + ((kk & 0x0000ff00) >> 7) + (kk & 0x000000ff)) / 7) & 0x00ff;
////////		kk = ar << 8;
////////		kk |= ar;
////////		kk <<= 8;
////////		kk |= ar;
////////		image[j] = (kk << 8) | (image[j] & 0x000000ff);
////////	    }
////////	} else  {
////////	    if ( (image[j] & 0xffffff00) ) {
////////		kk = image[j] >> 8;
////////		ar = ((((kk & 0x00ff0000) >> 16) + ((kk & 0x0000ff00) >> 8) + (kk & 0x000000ff)) / 7) & 0x00ff;
////////		kk = ar << 8;
////////		kk |= ar;
////////		kk <<= 8;
////////		kk |= ar;
////////		image[j] = (kk << 8) | (image[j] & 0x000000ff);
////////	    }
////////	}
    }
}


/*===============================================================
  =	���쥤�ɡ��������� ��������				=
  ===============================================================*/
static void
start_scroll( Game_play *game_play )
{
    Kscope		*kscope = (Kscope *)&game_play->kscope;


    kscope->eye.x += eye_xdt[kscope->kscp_mode] * ZREG(46);
    kscope->eye.z += eye_zdt[kscope->kscp_mode] * ZREG(46);
    kscope->kscp_scroll += (4 * ZREG(46));
    if ( kscope->kscp_scroll == 64*ZREG(47) ) {
	a_item_dma_change( game_play, 1 );
	Z_BTN_ITEM(0) = button_modeZR[kscope->kscp_pos][0];
	Z_BTN_ITEM(1) = button_modeZR[kscope->kscp_pos][1];
	Z_BTN_ITEM(2) = button_modeZR[kscope->kscp_pos][2];
	Z_BTN_ITEM(3) = button_modeZR[kscope->kscp_pos][3];
	Z_BTN_ITEM(4) = button_modeZR[kscope->kscp_pos][4];
	kscope->kscp_pos = next_pos_data[kscope->kscp_mode];
	kscope->kscp_status = 0x00;
	kscope->pause++;
	kscope->alpha = 255;
#if defined(GATEWAY_VERSION)
	Z_BTN_ITEM(0) = 0xff;
#endif	/* GATEWAY_VERSION */
	DO_ACTION_SPECIAL( game_play, DO_Save );
    } else if ( kscope->kscp_scroll == 64 ) {
	kscope->kscp_pos = next_pos_data[kscope->kscp_mode];
	kscope->kscp_mode = (unshort)(kscope->kscp_pos<<1)+1;
    }
}

/*===============================================================
  =	   �����ƥ������� �����������				=
 ===============================================================*/
static void
item_cursol_disp( Game_play *game_play )
{
    Kscope		*kscope = (Kscope *)&game_play->kscope;

    short		shift_x, shift_y, shift_d1, shift_d2;


    if ( !kscope->key_angle ) {
	shift_x = -1;
	shift_y =  1;
	shift_d1 = 
	    shift_d2 = 14;
	if (  kscope->kscp_pos == Display_Map ) {
/*	    if ( game_play->room_info.now.type != ROOM_TYPE_DANGEON || game_play->scene_data_ID == MEN ) {*/
	    if ( !FIELD_DUNGEON ) {
		shift_x = -6;
		shift_y =  6;
		shift_d1 = 
		    shift_d2 = 4;
	    } else if ( kscope->select_pt[kscope->kscp_pos] >= 3 ) {
		shift_x = -6;
		shift_y = 5;
		shift_d1 = 7;
		shift_d2 = 19;
	    } else {
		shift_x = -3;
		shift_y =  3;
		shift_d1 = 
		    shift_d2 = 13;
	    }
	} else if ( kscope->kscp_pos == Display_Collect  ) {
	    shift_x = -4;
	    shift_y =  4;
	    shift_d1 = 
		shift_d2 = 12;
	    if ( kscope->select_pt[kscope->kscp_pos] == (COLLECT_MAX-1) ) {
		/* ���쥯���̡��ϡ��ȷ��� */
		shift_x = -2;
		shift_y =  2;
		shift_d1 =
		    shift_d2 = 32;
	    } else if ( kscope->select_pt[kscope->kscp_pos] == (COLLECT_MAX - 1 - 1) ) {
		/* ���쥯���̡��⥹���� */
		shift_x = -4;
		shift_y =  4;
		shift_d1 = 13;
		shift_d2 = 34;
	    } else if ( kscope->select_pt[kscope->kscp_pos] < C_SEAL ) {
		/* ���쥯���̡����� */
		shift_x = -1;
		shift_y =  1;
		shift_d1 = 
		    shift_d2 = 10;
	    } else if ( kscope->select_pt[kscope->kscp_pos] >= (C_SEAL) && kscope->select_pt[kscope->kscp_pos] < (C_SEAL+C_MELODY)) {
		/* ���쥯���̡����ǥ� */
		shift_x = -5;
		shift_y = 3;
		shift_d1 = 
		    shift_d2 = 8;
	    }
	}
    } else {
	shift_x = -4;
	shift_y =  4;
	shift_d1 = 
	    shift_d2 = 16;
    }
    kscope->cursolVtx[0].ob[0] = kscope->cursolVtx[2].ob[0] = (short)(kscope->cursolVtx[0].ob[0] + shift_x);
    kscope->cursolVtx[1].ob[0] = kscope->cursolVtx[3].ob[0] = (short)(kscope->cursolVtx[0].ob[0] + 16);
    kscope->cursolVtx[0].ob[1] = kscope->cursolVtx[1].ob[1] = (short)(kscope->cursolVtx[0].ob[1] + shift_y);
    kscope->cursolVtx[2].ob[1] = kscope->cursolVtx[3].ob[1] = (short)(kscope->cursolVtx[0].ob[1] - 16);
								  
    kscope->cursolVtx[4].ob[0] = kscope->cursolVtx[6].ob[0] = (short)(kscope->cursolVtx[0].ob[0] + shift_d2);
    kscope->cursolVtx[5].ob[0] = kscope->cursolVtx[7].ob[0] = (short)(kscope->cursolVtx[4].ob[0] + 16);
    kscope->cursolVtx[4].ob[1] = kscope->cursolVtx[5].ob[1] = (short)(kscope->cursolVtx[0].ob[1]);
    kscope->cursolVtx[6].ob[1] = kscope->cursolVtx[7].ob[1] = (short)(kscope->cursolVtx[4].ob[1] - 16);
	
    kscope->cursolVtx[8].ob[0] = kscope->cursolVtx[10].ob[0] = (short)(kscope->cursolVtx[0].ob[0]);
    kscope->cursolVtx[9].ob[0] = kscope->cursolVtx[11].ob[0] = (short)(kscope->cursolVtx[8].ob[0] + 16);
    kscope->cursolVtx[8].ob[1] = kscope->cursolVtx[9].ob[1] = (short)(kscope->cursolVtx[0].ob[1] - shift_d1);
    kscope->cursolVtx[10].ob[1] = kscope->cursolVtx[11].ob[1] = (short)(kscope->cursolVtx[8].ob[1] - 16);
	
    kscope->cursolVtx[12].ob[0] = kscope->cursolVtx[14].ob[0] = (short)(kscope->cursolVtx[0].ob[0] + shift_d2);
    kscope->cursolVtx[13].ob[0] = kscope->cursolVtx[15].ob[0] = (short)(kscope->cursolVtx[12].ob[0] + 16);
    kscope->cursolVtx[12].ob[1] = kscope->cursolVtx[13].ob[1] = (short)(kscope->cursolVtx[0].ob[1] - shift_d1);
    kscope->cursolVtx[14].ob[1] = kscope->cursolVtx[15].ob[1] = (short)(kscope->cursolVtx[12].ob[1] - 16);
}

/*===============================================================
  =	   �ͣ��� �ģͣ�					=
 ===============================================================*/
#if 01
extern void
rom_map_dma( Game_play *game_play )
{
    Parameter		*parameter = (Parameter *)&game_play->parameter;

//    Kscope		*kscope = (Kscope *)&game_play->kscope;


    /* �ͣ��� �ģͣ� �� �ץ쥤�䡼�Τ���ң���ο��� */
    dmacopy_fg( parameter->mapSegment,
		(u32)_map_48x85_staticSegmentRomStart+(SIZE2*VREG(13)),
		SIZE2 );
    /* �ͣ��� �ģͣ� �� �ץ쥤�䡼�Τ���ң���ο��� */
    dmacopy_fg( parameter->mapSegment+4096/2,
		(u32)_map_48x85_staticSegmentRomStart+(SIZE2*(VREG(13)+1)),
		SIZE2 );
//    map_floor_check( game_play, kscope->dungeon_map_pt-3 );
}
#if defined(USE_N64DD)
#include "z_n64dd_function.h"
#endif /* defined(USE_N64DD) */
extern void
map_dma( Game_play *game_play )
{
    Parameter		*parameter = (Parameter *)&game_play->parameter;

    Kscope		*kscope = (Kscope *)&game_play->kscope;


    PRINTF("�ͣ��� �ģͣ� = %d\n",parameter->map_palete_no );
    /* �ͣ��� �ģͣ� */
#if defined(USE_N64DD)
    if (n64dd_function_ok(map_dma) && n64dd_function_call(map_dma)(game_play)) {
	/* DISK MAP */
    } else
#endif /* defined(USE_N64DD) */
    {
	rom_map_dma(game_play);	/* ROM MAP */
    }
    map_floor_check( game_play, kscope->dungeon_map_pt-3 );

    /* �ץ쥤�䡼�Τ���ң���ο��� */
    if ( game_play->scene_data_ID >= YDAN && game_play->scene_data_ID < YDAN_BOSS ) {
	if ( VREG(30) == (kscope->cursor_point[Display_Map] - 3) )
	    ci4_chg( parameter->mapSegment, SIZE2, parameter->map_palete_no, 0xE );
    }
    /* �ץ쥤�䡼�Τ���ң���ο��� */
    if ( game_play->scene_data_ID >= YDAN && game_play->scene_data_ID < YDAN_BOSS ) {
	if ( VREG(30) == (kscope->cursor_point[Display_Map] - 3) )
	    ci4_chg( parameter->mapSegment+4096/2, SIZE2, parameter->map_palete_no, 0xE );
    }
}
#else
extern void
map_dma( Game_play *game_play )
{
    Parameter		*parameter = (Parameter *)&game_play->parameter;

    Kscope		*kscope = (Kscope *)&game_play->kscope;


    PRINTF("�ͣ��� �ģͣ� = %d\n",parameter->map_palete_no );
    /* �ͣ��� �ģͣ� �� �ץ쥤�䡼�Τ���ң���ο��� */
    dmacopy_fg( parameter->mapSegment,
		(u32)_map_48x85_staticSegmentRomStart+(SIZE2*VREG(13)),
		SIZE2 );
    if ( game_play->scene_data_ID >= YDAN && game_play->scene_data_ID < YDAN_BOSS ) {
	if ( VREG(30) == (kscope->cursor_point[Display_Map] - 3) )
	    ci4_chg( parameter->mapSegment, SIZE2, parameter->map_palete_no, 0xE );
    }
    /* �ͣ��� �ģͣ� �� �ץ쥤�䡼�Τ���ң���ο��� */
    dmacopy_fg( parameter->mapSegment+4096/2,
		(u32)_map_48x85_staticSegmentRomStart+(SIZE2*(VREG(13)+1)),
		SIZE2 );
    if ( game_play->scene_data_ID >= YDAN && game_play->scene_data_ID < YDAN_BOSS ) {
	if ( VREG(30) == (kscope->cursor_point[Display_Map] - 3) )
	    ci4_chg( parameter->mapSegment+4096/2, SIZE2, parameter->map_palete_no, 0xE );
    }
    map_floor_check( game_play, kscope->dungeon_map_pt-3 );
}
#endif


/************************************************************************
 *									*
 *	���쥤�ɡ��������ףͣϣ֣�					*
 *									*
 ************************************************************************/
#define	EVENT_OFF	0	/* �ä��� */
#define EVENT_ON	1	/* �դ� */
#define EVENT_GO	2	/* ���� */

extern void
kaleido_scope_move( Game_play *game_play )
{
    Kscope		*kscope = (Kscope *)&game_play->kscope;

    Parameter		*parameter = (Parameter *)&game_play->parameter;

    Gover		*gover = (Gover *)&game_play->gover;

    Player_actor	*player = (Player_actor *)get_player_actor(game_play);

    pad_t		*pad = &game_play->g.pads[0];


    u32		size, size0, size1, size2;
    unshort	i;
    static short	next_kscp_status = 0, next_kscp_status_ct = 10;
    static short	go_ct = 0;
    short	rc, gc, bc, ac/*, point*/;


////////    if ( PR_KAREIDOSCOPE_MODE >= 3 && ( (kscope->pause >= Pause_In && kscope->pause < Pause_End) ) ) {
    if ( PR_KAREIDOSCOPE_MODE >= 3 &&
	 ( (kscope->pause >= Pause_In && kscope->pause <= Pause_Save) || 
	   (kscope->pause >= Pause_Gameover_00 && kscope->pause < Pause_End) )
	){
	/*===================== ���������� =====================*/
	if ( (!kscope->kscp_status || kscope->kscp_status == 0x8) && kscope->pause == Pause_Play ) {
	    kscope->wkey_x = (short)Pad_stick_x();
	    kscope->wkey_y = (short)Pad_stick_y();
	    
	    item_cursol_disp( game_play );
#if HAYAKAWA_TESTkk				/* ### delete by hayakawa */
	    {
#if HAYAKAWA_TESTkk				/* ### delete by hayakawa */
		static short	key_wait_x = 0, key_wait_y = 0;	/* �ˣţ٥����ޡ� */
		static short	old_key_x = 0, old_key_y = 0;	/* �����å��ˣ�� */
#endif
		/* ���ϣˣţ٥����å� */
		if ( kscope->wkey_x < -KEY_ANGLE_3D ) {
		    if (  old_key_x == -1 ) {
			if ( --key_wait_x < 0 ) key_wait_x = XREG(6);
			else kscope->wkey_x = 0;
		    } else {
			key_wait_x = XREG(8);
			old_key_x  = -1;
		    }
		} else if ( kscope->wkey_x > KEY_ANGLE_3D ) {
		    if (  old_key_x == 1 ) {
			if ( --key_wait_x < 0 ) key_wait_x = XREG(6);
			else kscope->wkey_x = 0;
		    } else {
			key_wait_x = XREG(8);
			old_key_x  = 1;
		    }
		} else old_key_x = 0;
		if ( kscope->wkey_y < -KEY_ANGLE_3D ) {
		    if (  old_key_y == -1 ) {
			if ( --key_wait_y < 0 ) key_wait_y = XREG(6);
			else kscope->wkey_y = 0;
		    } else {
			key_wait_y = XREG(8);
			old_key_y  = -1;
		    }
		} else if ( kscope->wkey_y > KEY_ANGLE_3D ) {
		    if (  old_key_y == 1 ) {
			if ( --key_wait_y < 0 ) key_wait_y = XREG(6);
			else kscope->wkey_y = 0;
		    } else {
			key_wait_y = XREG(8);
			old_key_y  = 1;
		    }
		} else old_key_y = 0;
	    }
#endif
	    z_r_button_scroll( kscope, pad );
	} else if ( (kscope->kscp_pos == Display_Collect && (kscope->kscp_status < 0x03 || kscope->kscp_status == 0x5)) ) {
	    item_cursol_disp( game_play );
	}
/*	if ( !(kscope->pause >= Pause_Gameover_C && kscope->pause <= Pause_Gameover_E) ) {*/
	if ( kscope->pause == Pause_Play ) {
	    /* ��˥塼���ѥåɣͣϣ֣� */
	    menu_pad_move( game_play );
	}
    }
    switch ( kscope->pause ) {
    case Pause_Wait1:
	button_item[0] = Z_BTN_ITEM(0);
	button_item[1] = Z_BTN_ITEM(1);
	button_item[2] = Z_BTN_ITEM(2);
	button_item[3] = Z_BTN_ITEM(3);
	button_item[4] = Z_BTN_ITEM(4);	/* ��¸�£�������� */

	/* �ͣ��� �ģͣ� */
	kscope->cur_xpt[Display_Map] = 0;
	kscope->select_pt[Display_Map] =
	    kscope->cursor_point[Display_Map] =
	    kscope->dungeon_map_pt = VREG(30) + 3;
	
	WREG(16) = -175;		// ���쥤�ɡ��������ףڡ�����
	WREG(17) = 155;		//                   �ҡ�����
	kscope->angle_s = -314.0f; 	/* ���� */


	/* �ץ쥤�䡼 �ģͣ� */
	kscope->playerSegment = (char *)((unsigned int)(game_play->object_exchange.startSegment + 0x30) & ~0x3f);
	size1 = Player_Shape_Read( game_play, kscope->playerSegment, &kscope->skeleton );
	PRINTF("�ץ쥤�䡼 size1��%x\n", size1);
	/* ���쥤�ɡ��������� �ģͣ� */
	size0 = (u32)_icon_item_staticSegmentRomEnd - (u32)_icon_item_staticSegmentRomStart;
	kscope->icon_itemSegment = (char *)((unsigned int)(kscope->playerSegment + size1 + 0xf) & ~0xf);
	PRINTF("icon_item size0=%x\n",size0);
	dmacopy_fg( kscope->icon_itemSegment,
		    (u32)_icon_item_staticSegmentRomStart,
		    size0 );
	SetSegmentK0( ICON_ITEM_SEGMENT, kscope->icon_itemSegment );
	for ( i = 0; i < sizeof(checkcheck_wb_data)/sizeof(char); i++ ) {
	    if ( checkcheck_wb_data[i] != 9 && checkcheck_wb_data[i] != ZCommonGet(link_age) ) {
		black_white_data( (unsigned int *)SEGMENT_TO_KSEG0(item_data[i]), (32*32) );
	    }
	}
	/* ���쥤�ɡ��������� �ģͣ� */
	kscope->icon_item24Segment = (char *)((unsigned int)(kscope->icon_itemSegment + size0 + 0xf) & ~0xf);
	size = (u32)_icon_item_24_staticSegmentRomEnd - (u32)_icon_item_24_staticSegmentRomStart;
	PRINTF("icon_item24 size=%x\n",size);
	dmacopy_fg( kscope->icon_item24Segment,
		    (u32)_icon_item_24_staticSegmentRomStart,
		    size );
# if 0
	SetSegmentK0( ICON_ITEM_24_SEGMENT, kscope->icon_item24Segment );
	for ( i = 0; i < 3; i++ ) {	/* �����е��������å� */
	    if ( ZCommon_LinkAgeIsAdult() ) {
		if ( !Get_Event_Chk_Inf( 4, check_bit[8+i] ) ) {
		    black_white_data( (unsigned int *)SEGMENT_TO_KSEG0(item_data[H_holystone_1+i]), (24*24) );
		}
	    }
	}
# endif
	    
	kscope->icon_item_map_Segment = (char *)((unsigned int)(kscope->icon_item24Segment + size + 0xf) & ~0xf);
	switch  ( game_play->scene_data_ID ) {
	case YDAN:		/* �������ڤΥ��󥸥��		*/
	case DDAN:		/* �ɥɥ󥴥��󥸥��		*/
	case BDAN:		/* �����󥸥��			*/
	case MORI1:		/* ���ο���			*/
	case HIDAN:		/* ��ο���			*/
	case MIZUSIN:		/* ��ο���			*/
	case JYASINZOU:		/* ����ٿ������󥸥��         */
	case HAKADAN:		/* �貼���󥸥��       	*/
	case HAKADAN_CH:	/* �貼���󥸥�� ���ɤ�      	*/
	case ICE_DOUKUTU:	/* ɹ��ƶ��                     */
	case YDAN_BOSS:
	case DDAN_BOSS:
	case BDAN_BOSS:
	case MORIBOSS:
	case FIRE_BOSS:
	case MIZUSIN_BOSS:
	case JYASINZOU_BOSS:
	case HAKADAN_BOSS:
	    FIELD_DUNGEON = 1;
	    size2 = (u32)_icon_item_dungeon_staticSegmentRomEnd - (u32)_icon_item_dungeon_staticSegmentRomStart;
	    PRINTF("icon_item_dungeon dungeon-size2=%x\n", size2);
	    dmacopy_fg( kscope->icon_item_map_Segment,
			(u32)_icon_item_dungeon_staticSegmentRomStart,
			size2 );
	    
	    parameter->map_palete[28] = LINK_MAP_H;
	    parameter->map_palete[29] = LINK_MAP_L;
	    /* �ͣ��� �ģͣ� */
	    map_dma( game_play );
	    break;
	    
	default :
	    FIELD_DUNGEON = 0;
	    size2 = (u32)_icon_item_field_staticSegmentRomEnd - (u32)_icon_item_field_staticSegmentRomStart;
	    PRINTF("icon_item_field field-size2=%x\n",size2);
	    dmacopy_fg( kscope->icon_item_map_Segment,
			(u32)_icon_item_field_staticSegmentRomStart,
			size2 );
	    
	    break;
	}

	/* ���ܸ졿�Ѹ� �ģͣ� */
	kscope->icon_item_jpn_nes_Segment = (char *)((unsigned int)(kscope->icon_item_map_Segment + size2 + 0xf) & ~0xf);
	if ( !J_N ) {
	    /* ���ܸ� */
	    size = (u32)_icon_item_jpn_staticSegmentRomEnd - (u32)_icon_item_jpn_staticSegmentRomStart;
	    PRINTF("icon_item_jpn dungeon-size=%x\n", size);
	    dmacopy_fg( kscope->icon_item_jpn_nes_Segment,
			(u32)_icon_item_jpn_staticSegmentRomStart,
			size );
	} else {
	    /* �Ѹ� */
	    size = (u32)_icon_item_nes_staticSegmentRomEnd - (u32)_icon_item_nes_staticSegmentRomStart;
	    PRINTF("icon_item_dungeon dungeon-size=%x\n", size);
	    dmacopy_fg( kscope->icon_item_jpn_nes_Segment,
			(u32)_icon_item_nes_staticSegmentRomStart,
			size );
	}
	
	/* �����ƥ�Σ��ͣ� �ģͣ� */
	kscope->item_nameSegment = (char *)((unsigned int)(kscope->icon_item_jpn_nes_Segment + size + 0xf) & ~0xf);
	PRINTF("��������%x\n",size2 + size1 + size0 + size );
	PRINTF("item_name I_N_PT=%x\n", I_N_PT);
/*	dmacopy_fg( kscope->item_nameSegment,
		    (u32)_item_name_staticSegmentRomStart,
# if TS8
		    I_N_PT );
# else
		    (I_N_PT/2) );
# endif*/
/////////////	    DO_ACTION_POINT_SET( game_play, DO_Save );
	DO_ACTION_POINT_SET( game_play, DO_Kettei );
	PRINTF("��������%x\n",size2 + size1 + size0 + size + I_N_PT );
	
	/* ������̾�ģͣ� */
	if ( ZCommonGet( area_type ) <= 21 ) {
	    if ( !J_N) {
		dmacopy_fg( kscope->item_nameSegment + (I_N_PT/2),
			    (u32)_map_name_staticSegmentRomStart + ((H_place00 - H_map00)*2*(I_N_PT/2)) + (ZCommonGet( area_type )*(80*32)),
			    (80 * 32) );
	    } else {
		dmacopy_fg( kscope->item_nameSegment + (I_N_PT/2),
			    (u32)_map_name_staticSegmentRomStart + ((H_place00 - H_map00)*2*(I_N_PT/2)) + ((H_Botton_Select-H_place00+ZCommonGet( area_type ))*(80*32)),
			    (80 * 32) );
	    }
	}
	WHAT_IS_IT_NOW();

	/* ���Х�å��Хåե� */
////////	    cvgbuf = (char *)((unsigned int)(kscope->item_nameSegment + I_N_PT + 0xf) & ~0xf);
# if TS8
	cvgbuf = (char *)((unsigned int)(kscope->item_nameSegment + I_N_PT + (80 * 32) + 0xf) & ~0xf);
# else
	cvgbuf = (char *)((unsigned int)(kscope->item_nameSegment + (I_N_PT/2) + (80 * 32) + 0xf) & ~0xf);
# endif
	
	/* ����� */
	PreRender_init( &kaleido_prerender_link );
	/* ��󥯥ƥ�������Хåե����� */
	PreRender_setup_savebuf( &kaleido_prerender_link, 64, 112, kscope->playerSegment, 0, cvgbuf );
	/* ���*/
	equipment_player_disp( game_play );
	anti( game_play );

	/* ���ιԤ�������å� */
	for ( i = 0; i < 20; i++ ) {	/*  */
	    kscope->field_map_evt[i] = EVENT_OFF;
	}
	/* ���Ƥκ��� */
	if ( GetCollect_ITEM( H_gerudoC ) )		/* ����ɤβ�������� */
	    kscope->field_map_evt[0] = EVENT_GO;
	if ( GetCollect_SEAL( H_seal_medal_4 ) )	/* ���ο��¥��ꥢ�� :�إʥܡ����������*/
	    kscope->field_map_evt[0] = EVENT_ON;
	/* ����ɤκ֡���±�ĤΥ����ȡ� */
	if ( Get_Item_Register( H_L_hookshot ) == H_L_hookshot )	/* ��󥰥եå�����å����� */
	    kscope->field_map_evt[1] = EVENT_GO;
	if ( GetCollect_ITEM( H_gerudoC ) )		/* ����ɤβ�������� */
	    kscope->field_map_evt[1] = EVENT_ON;
	/* ����ɤ�ë */
	if ( Get_Event_Chk_Inf( 11, 0x0004 ) )	/* ����ɤ�ë�Ҳ�ǥ� */
	    kscope->field_map_evt[2] = EVENT_ON;
	if ( Get_Item_Register( H_L_hookshot ) == H_L_hookshot )	/* ��󥰥եå�����å����� */
	    kscope->field_map_evt[2] = EVENT_GO;
	if ( GetCollect_ITEM( H_gerudoC ) )		/* ����ɤβ�������� */
	    kscope->field_map_evt[2] = EVENT_ON;
	/* �ϥ��ꥢ���ʡʥϥ��ꥢ�С� */
# if 0
	if ( Get_Event_Chk_Inf( 11, 0x0002 ) )	/* �ϥ��ꥢ�оҲ�ǥ� */
	    kscope->field_map_evt[3] = EVENT_ON;
# endif
	if ( Equip_Scale )			/* �������� */
	    kscope->field_map_evt[3] = EVENT_ON;
	if ( Equip_Boots_CK( H_boots_2 ) )		/* �إӡ��֡������� */
	    kscope->field_map_evt[3] = EVENT_GO;
	if ( GetCollect_SEAL( H_seal_medal_3 ) )	/* ��ο��¡���͡˥��ꥢ�� :�إ�Ȥ�������*/
	    kscope->field_map_evt[3] = EVENT_ON;
	/* ������Ҿ� */
	if ( Get_Event_Chk_Inf( 0, 0x0200 ) )	/* �ǥ��μ����ꥢ�� */
	    kscope->field_map_evt[4] = EVENT_ON;
# if 0
	if ( Get_Event_Chk_Inf( 6, 0x8000 ) )	/* ������ο�����Ф��Ȥ���ǥǥܥ�Ȳ��� */
	    kscope->field_map_evt[4] = EVENT_GO;
	if ( Get_Event_Chk_Inf( 1, 0x0004 ) )	/* �ޥ�󤫤�ؤᤶ�ޤ����ޥ��٤��ä� */
	    kscope->field_map_evt[4] = EVENT_ON;
# endif
	if ( Get_Item_Register( H_ocarina_1 ) != 0xff )	/* ���ꥢ���������Υ���������� */
	    kscope->field_map_evt[4] = EVENT_GO;
	if ( GetCollect_MELODY( H_melody_8 ) )	/*�إ��ݥʤβΡ����� */
	    kscope->field_map_evt[4] = EVENT_ON;
	if ( Get_Event_Chk_Inf( 6, 0x0400 ) )	/* �����ꥳ¼�Υ���󵯤����� */
	    kscope->field_map_evt[4] = EVENT_GO;
	if ( Get_Event_Chk_Inf( 1, 0x0100 ) )	/* �Ҿ�æ�С����ݥ����� */
	    kscope->field_map_evt[4] = EVENT_ON;
	/* �벼Į�ʥϥ����벼�� */
	if ( Get_Event_Chk_Inf( 0, 0x0200 ) )	/* �ǥ��μ����ꥢ�� */
	    kscope->field_map_evt[5] = EVENT_GO;
	if ( Get_Event_Chk_Inf( 4, 0x0001 ) )	/* ������μ������ */
	    kscope->field_map_evt[5] = EVENT_ON;
# if 0
	if ( Get_Event_Chk_Inf( 2, 0x0020 ) )	/* �ɥɥ�ƶ�����ꥢ�� */
	    kscope->field_map_evt[5] = EVENT_GO;
	if ( GetCollect_MELODY(H_melody_9) )	/*�إ�����λҼ�Ρ����� */
	    kscope->field_map_evt[5] = EVENT_ON;
# endif
# if 0
	if ( Get_Event_Chk_Inf( 3, 0x0080 ) )	/* ����֥�����ͥ��ꥢ�� */
	    kscope->field_map_evt[5] = EVENT_GO;
# endif
	if ( Get_Item_Register( H_ocarina_2 ) == H_ocarina_2 )	/* ���Υ���������� */
	    kscope->field_map_evt[5] = EVENT_GO;
	if ( Get_Event_Chk_Inf( 4, 0x0020 ) )	/* �ޥ��������������� */
	    kscope->field_map_evt[5] = EVENT_ON;
# if 0
	if ( Get_Event_Chk_Inf( 4, 0x0100 ) && Get_Event_Chk_Inf( 4, 0x0200 ) && Get_Event_Chk_Inf( 4, 0x0400 ) )	/* ��,��,��γƿ��¥��ꥢ�� */
	    kscope->field_map_evt[5] = EVENT_GO;
	if ( Get_Event_Chk_Inf( 4, 0x0080 ) )	/* ������ͤ���Ҷ�����ä� */
	    kscope->field_map_evt[5] = EVENT_ON;
# endif
	if ( Get_Item_Register( H_arrow_3 ) == H_arrow_3 )	/*�ظ���������� */
	    kscope->field_map_evt[5] = EVENT_GO;
	/* �ϥ����ʿ���ʥϥ��ꥢʿ���� */
	if ( Get_Event_Chk_Inf( 0, 0x0200 ) )	/* �ǥ��μ����ꥢ�� */
	    kscope->field_map_evt[6] = EVENT_ON;
	/* �ǥ��ޥ���ƥ� */
	if ( Get_Event_Chk_Inf( 4, 0x0001 ) )	/* ������μ������ */
	    kscope->field_map_evt[7] = EVENT_GO;
	if ( Get_Event_Chk_Inf( 2, 0x0020 ) )	/* �ɥɥ�ƶ�����ꥢ�� */
	    kscope->field_map_evt[7] = EVENT_ON;
	if ( Get_Item_Register( H_S_hookshot ) == H_S_hookshot )	/* ���硼�ȥեå�����å����� */
	    kscope->field_map_evt[7] = EVENT_GO;
	if ( Get_Event_Chk_Inf( 4, 0x0200 ) )	/* ��ο��¥��ꥢ�� */
	    kscope->field_map_evt[7] = EVENT_ON;
	/* �����ꥳ¼ */
	if ( S_Information.area_arrival & check_bit[SPOT01-SPOT00] ) /* �����ꥳ¼���褿���Ȥ����� */
	    kscope->field_map_evt[8] = EVENT_ON;
	if ( GetCollect_MELODY(H_melody_9) )	/*�إ�����λҼ�Ρ����� */
	    kscope->field_map_evt[8] = EVENT_GO;
	if ( GetCollect_MELODY(H_melody_10) )	/*�����ۤβΡ����� */
	    kscope->field_map_evt[8] = EVENT_ON;
	if ( Get_Event_Chk_Inf( 4, 0x0020 ) )	/* �ޥ��������������� */
	    kscope->field_map_evt[8] = EVENT_GO;
	if ( Get_Item_Register( H_S_hookshot ) == H_S_hookshot ) /* ���硼�ȥեå�����å����� */
	    kscope->field_map_evt[8] = EVENT_ON;
	if ( GetCollect_MELODY(H_melody_12) )	/*����βΡ����� */
	    kscope->field_map_evt[8] = EVENT_GO;
# if 0
	if ( Get_Item_Register( H_magicglass ) == H_magicglass ) /* �Ǥο��¡ʻҶ��˥��ꥢ�����ޤ��Ȥ���ᥬ������ */
	    kscope->field_map_evt[8] = EVENT_ON;
# endif
	if ( Get_Event_Chk_Inf( 6, 0x0080 ) )	/* ��Ϳ�̵���ʤä� */
	    kscope->field_map_evt[8] = EVENT_ON;
	if ( Get_Event_Chk_Inf( 10, 0x0400 ) )	/* �������ɥ��ȡ������ǥ� */
	    kscope->field_map_evt[8] = EVENT_GO;
	if ( GetCollect_SEAL( H_seal_medal_5 ) ) 	/* �Ǥο��¡���͡˥��ꥢ�� :�إ���Ѥ�������*/
	    kscope->field_map_evt[8] = EVENT_ON;
	/* �¤��ο� */
	if ( S_Information.area_arrival & check_bit[SPOT10-SPOT00] )/* �¤��ο����褿���Ȥ����� */
	    kscope->field_map_evt[9] = EVENT_ON;
	if ( Get_Event_Chk_Inf( 0, 0x8000 ) )	/* ������μ�������ΥߥɤȤβ��� */
	    kscope->field_map_evt[9] = EVENT_GO;
# if 0
	if ( Get_Event_Chk_Inf( 0, 0x4000 ) )	/* ���ꥢ���������Υ���������� */
	    kscope->field_map_evt[9] = EVENT_ON;
# endif
	if ( GetCollect_MELODY(H_melody_7) )	/*�إ��ꥢ�βΡ����� */
	    kscope->field_map_evt[9] = EVENT_ON;
	if ( Get_Item_Register( H_S_hookshot ) == H_S_hookshot )	/* ���硼�ȥեå�����å����� */
	    kscope->field_map_evt[9] = EVENT_GO;
	if ( Get_Event_Chk_Inf( 4, 0x0100 ) )	/* ���ο��¥��ꥢ�� */
	    kscope->field_map_evt[9] = EVENT_ON;
	/* ������ο� */
	kscope->field_map_evt[10] = EVENT_GO;	/* ̵������� */
	if ( Get_Event_Chk_Inf( 0, 0x0200 ) )	/* �ǥ��μ����ꥢ�� */
	    kscope->field_map_evt[10] = EVENT_ON;
	if ( Get_Event_Chk_Inf( 6, 0x4000 ) )	/* �ǥܥ顧������μ�������β��� */
	    kscope->field_map_evt[10] = EVENT_GO;
	if ( Get_Event_Chk_Inf( 0, 0x8000 ) )	/* ������μ�������ΥߥɤȤβ��� */
	    kscope->field_map_evt[10] = EVENT_ON;
	/* �������Τ */
	if ( GetCollect_MELODY(H_melody_9) )	/*�إ�����λҼ�Ρ����� */
	    kscope->field_map_evt[11] = EVENT_ON;
	if ( Get_Event_Chk_Inf( 2, 0x0020 ) )	/* �ɥɥ󥴥��󥸥�󥯥ꥢ�� */
	    kscope->field_map_evt[11] = EVENT_GO;
	if ( Get_Event_Chk_Inf( 3, 0x0080 ) )	/* ����֥�����ͥ��ꥢ�� */
	    kscope->field_map_evt[11] = EVENT_ON;
	if ( Get_Item_Register( H_S_hookshot ) == H_S_hookshot )	/* ���硼�ȥեå�����å����� */
	    kscope->field_map_evt[11] = EVENT_GO;
	if ( Equip_Boots_CK( H_boots_2 ) )		/* �إӡ��֡������� */
	    kscope->field_map_evt[11] = EVENT_ON;
	
	/* ��餷�� */
	kscope->warashibe_flag = 0xff;
	i = Get_Item_Register(H_reserve_20);
	if ( ZCommon_LinkAgeIsAdult() ) {
	    if ( i <= H_reserve_21 || i == H_reserve_23 )	/* �ݥ��åȥ��ޥ�,�ƤΤꥳ�å�,���䤷�����Υ� �� �����ꥳ¼ */
		kscope->warashibe_flag = 8;
	    if ( i == H_reserve_22 || i == H_reserve_24 )	/* ������,���䤷���� �� �¤��ο� */
		kscope->warashibe_flag = 9;
	    if ( i == H_reserve_25 )	/* ̩�ļԤΥΥ����� �� ����ɤ�ë */
		kscope->warashibe_flag = 2;
	    if ( i == H_reserve_26 || i == H_reserve_29 )	/* �ޤ줿�������,������������ �� �ǥ��ޥ���ƥ� */
		kscope->warashibe_flag = 7;
	    if ( i == H_reserve_27 )	/* �������� �� �������Τ */
		kscope->warashibe_flag = 11;
	    if ( i == H_reserve_28 )	/* ����ޥ����� �� �ϥ��ꥢ�� */
		    kscope->warashibe_flag = 3;
	    if ( i == H_reserve_30 && !LAST_SWORD )	/* ������������ �� �ǥ��ޥ���ƥ� */
		kscope->warashibe_flag = 7;
	}
	
	kscope->pause = Pause_In;
	WHAT_IS_IT_NOW();
	break;

    case Pause_In:
	if ( kscope->angle_i == ANGLE_XZ ) {
	    cursor_init_check( game_play );
	    anti_end( );
	    WHAT_IS_IT_NOW();
	}
	/* ���쥤�ɡ��������׽и� */
	kscope->angle_i =
	kscope->angle_e =
	kscope->angle_m =
	kscope->angle_c -= ANGLE_XZ/WREG(6);
////////	kscope->translate -= TRANSLATE_S_0;
	kscope->menu_myp += (MENU_MYP/WREG(6));
	parameter->start_alpha += (255/WREG(6));
	WREG(16) += (WREG(25)/WREG(6));
	WREG(17) += (WREG(26)/WREG(6));
	XREG(5) += (150/WREG(6));
	kscope->alpha += (unshort)(255/(WREG(6)+WREG(4)));
	if ( !kscope->angle_i ) {
	    parameter->start_alpha = 255;
	    WREG(2) = 0;
	    kscope->pause = Pause_Fade;
	}
	start_scroll( game_play );
	break;

    case Pause_Fade:
	WHAT_IS_IT_NOW();
	kscope->alpha += (unshort)(255/(WREG(6)+WREG(4)));
////////	if ( kscope->alpha >= 255 ) {
////////	    kscope->alpha = 255;
//////////	    kscope->pause++;
////////	    a_item_dma_change( game_play, 1 );
////////	}
	start_scroll( game_play );
	WHAT_IS_IT_NOW();
	if ( kscope->pause == Pause_Play ) {
	    /* ��˥塼���ѥåɣͣϣ֣� */
	    menu_pad_move( game_play );
	}
	break;
	
    case Pause_Play:
	switch ( kscope->kscp_status ) {
	case 0x00:
	    /* �̾���� */
	    if ( Pad_on_trigger(START_BUTTON) ) {
		DO_ACTION_POINT_SET( game_play, DO_Navi );
		kscope->pause = Pause_Out;
		WREG(2) = -6240; //-608;
		Na_SetWindowSound(0);
	    } else if ( Pad_on_trigger(B_BUTTON) ) {
#if defined(GATEWAY_VERSION)
#else
		kscope->kscp_mode = 0;
		kscope->save_cursor = 0;
		Na_StartSystemSe( NA_SE_SY_DECIDE );
		Z_BTN_ITEM(0) =
		    Z_BTN_ITEM(1) =
		    Z_BTN_ITEM(2) =
		    Z_BTN_ITEM(3) = 0xff;
		Z_BTN_ITEM(4) = 0;
		Z_PREV_ALPHA_TYPE = 0;
		alpha_change( 50 );
		kscope->save_status = Save_In;
		kscope->pause = Pause_Save;
# endif	/* GATEWAY_VERSION */
	    }
	    break;
	    
	case 0x01:
	    /* �������� */
	    kaleido_scope_scroll( game_play, pad );
	    break;

	case 0x02:
	    /* ����������ϥ��ǥ����� */
	    kscope->info = Na_GetOcarinaSeqInfoWork();
	    if ( kscope->info->status == NA_OCA_SEQ_STOP ) {
		kscope->kscp_status = 4;
		Na_StopOcarinaMode();
	    }
	    break;

	case 0x03:
	    /* ���򥢥��ƥ��ư */
	    item_move( game_play );
	    break;

	case 0x04:
	    /* ������ʱ������������ */
	    break;

	case 0x05:
	    kscope->info = Na_GetOcarinaInfoWork();
	    /* ������ʱ������� */
	    if ( Pad_on_trigger(START_BUTTON) ) {
		Na_StopOcarinaMode();
		DO_ACTION_POINT_SET( game_play, DO_Navi );
		kscope->pause = Pause_Out;
		WREG(2) = -6240; //-608;
		Na_SetWindowSound(0);
		kscope->kscp_status = 0;
	    } else if ( Pad_on_trigger(B_BUTTON) ) {
#if defined(GATEWAY_VERSION)
#else
		Na_StopOcarinaMode();
# if 0
		kscope->kscp_status = 0;
		kscope->kscp_mode = 0;
		kscope->save_cursor = 0;
		DO_ACTION_POINT_SET( game_play, DO_Modoru );	/* ���硼�� */
		Na_StartSystemSe( NA_SE_SY_DECIDE );
		kscope->pause = Pause_Save;
# endif
		kscope->kscp_status = 0;
		kscope->kscp_mode = 0;
		kscope->save_cursor = 0;
		Na_StartSystemSe( NA_SE_SY_DECIDE );
		Z_BTN_ITEM(0) =
		    Z_BTN_ITEM(1) =
		    Z_BTN_ITEM(2) =
		    Z_BTN_ITEM(3) = 0xff;
		Z_BTN_ITEM(4) = 0;
		Z_PREV_ALPHA_TYPE = 0;
		alpha_change( 50 );
		kscope->save_status = Save_In;
		kscope->pause = Pause_Save;
# endif	/* GATEWAY_VERSION */
	    } else if ( kscope->info->status == kscope->ocarina_no ) {
		Na_StartSystemSe( NA_SE_SY_TRE_BOX_APPEAR );
		next_kscp_status = 0;
		next_kscp_status_ct = 30;
		kscope->kscp_status = 6;
	    } else if ( kscope->info->status == NA_OCA_CHK_STOP ) {
		Na_StartSystemSe( NA_SE_SY_OCARINA_ERROR );
		next_kscp_status = 4;
		next_kscp_status_ct = 20;
		kscope->kscp_status = 6;
	    }
	    break;

	case 0x06:
	    /* ������ʣף��� */
	    if ( !(--next_kscp_status_ct) ) {
		kscope->kscp_status = next_kscp_status;
		if ( !kscope->kscp_status ) {
		    Na_StopOcarinaMode();
		}
	    }
	    break;

	case 0x07:
	    /* �ţѣգɣ��̥����ƥ����� */
	    break;

	case 0x08:
////////	    kscope->info = Na_GetOcarinaInfoWork();
	    /* �������Ÿ�� */
	    if ( Pad_on_trigger(START_BUTTON) ) {
		Na_StopOcarinaMode();
		DO_ACTION_POINT_SET( game_play, DO_Navi );
		kscope->pause = Pause_Out;
		WREG(2) = -6240; //-608;
		Na_SetWindowSound(0);
		kscope->kscp_status = 0;
	    } else if ( Pad_on_trigger(B_BUTTON) ) {
#if defined(GATEWAY_VERSION)
#else
		Na_StopOcarinaMode();
# if 0
		kscope->kscp_status = 0;
		kscope->save_status = 0;
		kscope->kscp_mode = 0;
		kscope->save_cursor = 0;
		DO_ACTION_POINT_SET( game_play, DO_Modoru );	/* ���硼�� */
		Na_StartSystemSe( NA_SE_SY_DECIDE );
		kscope->pause = Pause_Save;
# endif
		kscope->kscp_status = 0;
		kscope->kscp_mode = 0;
		kscope->save_cursor = 0;
		Na_StartSystemSe( NA_SE_SY_DECIDE );
		Z_BTN_ITEM(0) =
		    Z_BTN_ITEM(1) =
		    Z_BTN_ITEM(2) =
		    Z_BTN_ITEM(3) = 0xff;
		Z_BTN_ITEM(4) = 0;
		Z_PREV_ALPHA_TYPE = 0;
		alpha_change( 50 );
		kscope->save_status = Save_In;
		kscope->pause = Pause_Save;
# endif	/* GATEWAY_VERSION */
	    }
	    break;

	case 0x09:
	    /* ������� */
	    break;

	default:
	    kscope->kscp_status = 0;
	    break;
	}
	break;
	
    case Pause_Save:
	WHAT_IS_IT_NOW();
	switch ( kscope->save_status ) {
	case Save_In:
	    kscope->angle_s -= (314.0f/WREG(6));
	    WREG(16) -= (WREG(25)/WREG(6));
	    WREG(17) -= (WREG(26)/WREG(6));
	    if ( kscope->angle_s <= -628.0f ) {
		kscope->angle_s = -628.0f;
		kscope->save_status = Save_Play;
	    }
	    break;

	case Save_Play:
	    if ( Pad_on_trigger(A_BUTTON)) {
		if ( kscope->save_cursor ) {
# if 0
		    Na_StartSystemSe( NA_SE_SY_CANCEL );
////////		DO_ACTION_POINT_SET( game_play, DO_Reset );	/* ���硼�� */
		    DO_ACTION_POINT_SET( game_play, DO_Save );
		    kscope->save_status = Save_Out0;
# endif
		    DO_ACTION_POINT_SET( game_play, DO_Navi );
		    Z_BTN_ITEM(0) =
			Z_BTN_ITEM(1) =
			Z_BTN_ITEM(2) =
			Z_BTN_ITEM(3) = 0;
		    Z_PREV_ALPHA_TYPE = 0;
		    alpha_change( 50 );
		    kscope->save_status = Save_Cancel0;
		    WREG(2) = -6240; //-608;
		    YREG(8) = kscope->angle_s;
		    Na_SetWindowSound(0);
		} else {
#ifdef SHOW_VERSION
		    if ( (padmgr_GetPadPattern(&padmgr) & 0x4) )
#endif /* SHOW_VERSION */
		    {
			Na_StartSystemSe( NA_SE_SY_PIECE_OF_HEART );
//////////////////			if ( (++Save_Ct) >= 1000 ) Save_Ct = 999;
			Game_play_room_inf_set( game_play );
			SCENE_DATA_ID = game_play->scene_data_ID;
			sram_save( &game_play->sram );
			kscope->save_status = Save_Save;
			next_kscp_status_ct = (60/2)*3;
#ifdef SHOW_VERSION
		    } else {
			game_play->g._doing = 0;
////////			game_set_next_game_name((Game *)game_play, opening);
			game_set_next_game_name( &game_play->g, opening);
#endif /* SHOW_VERSION */
		    }
		}
	    } else if ( Pad_on_trigger(START_BUTTON) || Pad_on_trigger(B_BUTTON) ) {
		DO_ACTION_POINT_SET( game_play, DO_Navi );
		kscope->save_status = Save_Cancel0;
		WREG(2) = -6240; //-608;
		YREG(8) = kscope->angle_s;
		Na_SetWindowSound(0);
		Z_BTN_ITEM(0) =
		    Z_BTN_ITEM(1) =
		    Z_BTN_ITEM(2) =
		    Z_BTN_ITEM(3) = 0;
		Z_PREV_ALPHA_TYPE = 0;
		alpha_change( 50 );
	    }
	    break;

	case Save_Save:
# if 0
	    if ( Pad_on_trigger(B_BUTTON) || Pad_on_trigger(A_BUTTON) ) {
		Na_StartSystemSe( NA_SE_SY_CANCEL );
		DO_ACTION_POINT_SET( game_play, DO_Save );
		PRINTF("case 0x03 : kscp_status=%d  --->  ",kscope->kscp_status);
		kscope->kscp_status = Save_Out1;
		PRINTF("kscp_status=%d\n",kscope->kscp_status);
	    }else if ( Pad_on_trigger(START_BUTTON) ) {
		DO_ACTION_POINT_SET( game_play, DO_Navi );
		kscope->kscp_status = Save_Cancel1;
		PRINTF("case 0x02 : kscp_status=%d  -->  ",kscope->kscp_status);
		WREG(2) = -6240; //-608;
		YREG(8) = kscope->angle_s;
		Na_SetWindowSound(0);
		PRINTF("kscp_status=%d\n",kscope->kscp_status);
	    } else {
		if ( !(--next_kscp_status_ct) ) {
		    Na_StartSystemSe( NA_SE_SY_CANCEL );
		    DO_ACTION_POINT_SET( game_play, DO_Save );
		    kscope->kscp_status = Save_Out1;
		}
	    }
# endif
	    if ( Pad_on_trigger(B_BUTTON) || Pad_on_trigger(A_BUTTON) || Pad_on_trigger(START_BUTTON) || !(--next_kscp_status_ct) ) {
		DO_ACTION_POINT_SET( game_play, DO_Navi );
		Z_BTN_ITEM(0) =
		    Z_BTN_ITEM(1) =
		    Z_BTN_ITEM(2) =
		    Z_BTN_ITEM(3) = 0;
		Z_PREV_ALPHA_TYPE = 0;
		alpha_change( 50 );
		kscope->save_status = Save_Cancel1;
////////		PRINTF("case 0x02 : save_status=%d  -->  ",kscope->save_status);
		WREG(2) = -6240; //-608;
		YREG(8) = kscope->angle_s;
		Na_SetWindowSound(0);
////////		PRINTF("save_status=%d\n",kscope->save_status);
	    }
	    break;

	case Save_Out0:
	case Save_Out1:
	    kscope->angle_s += (314.0f/WREG(6));
	    WREG(16) += (WREG(25)/WREG(6));
	    WREG(17) += (WREG(26)/WREG(6));
	    if ( kscope->angle_s >= -314.0f ) {
		kscope->pause = Pause_Play;
		kscope->save_status = 0;
		kscope->angle_i =
		kscope->angle_e =
		kscope->angle_m =
		kscope->angle_c = 0.0f;
		kscope->angle_s = -314.0f;
	    }
	    break;
	    
	case Save_Cancel0:
	case Save_Cancel1:
	    /* ���쥤�ɡ��������׽�λ */
	    if ( kscope->angle_s != (YREG(8)+ANGLE_XZ) ) {
		kscope->angle_i = 
		    kscope->angle_e = 
		    kscope->angle_m = 
		    kscope->angle_c  += ANGLE_XZ/WREG(6); 
		    kscope->angle_s += ANGLE_XZ/WREG(6);
		kscope->menu_myp -= (MENU_MYP/WREG(6));
		WREG(16) -= (WREG(25)/WREG(6));
		WREG(17) -= (WREG(26)/WREG(6));
		XREG(5) -= (150/WREG(6));
		kscope->alpha -= (unshort)(255/WREG(6));
		if ( kscope->angle_s == (YREG(8)+ANGLE_XZ) ) kscope->alpha = 0;
	    } else {
		kscope->debug = 0;
		kscope->pause = Pause_End;
		kscope->angle_i =
		    kscope->angle_e =
		    kscope->angle_m =
		    kscope->angle_c = ANGLE_XZ;
		    kscope->angle_s = -434;		/* ���� */
		kscope->zoom_name = 999;
		kscope->kscp_status = 0x00;
	    }
	    break;

	default:
	    break;
	}
	WHAT_IS_IT_NOW();
	break;


    case Pause_Gameover_00:
	kscope->select_pt[Display_Map] =
	    kscope->cursor_point[Display_Map] =
	    kscope->dungeon_map_pt = VREG(30) + 3;
	
	WREG(16) = -175;		// ���쥤�ɡ��������ףڡ�����
	WREG(17) = 155;			//                   �ҡ�����
	kscope->angle_s = -434;		/* ���� */
	alpha_change( 1 );

	/* ���쥤�ɡ��������� �ģͣ� */
	size0 = (u32)_icon_item_staticSegmentRomEnd - (u32)_icon_item_staticSegmentRomStart;
	kscope->icon_itemSegment = (char *)((unsigned int)(game_play->object_exchange.startSegment + 0x30) & ~0x3f);
	PRINTF("icon_item size0=%x\n",size0);
	dmacopy_fg( kscope->icon_itemSegment,
		    (u32)_icon_item_staticSegmentRomStart,
		    size0 );
	/* ���쥤�ɡ��������� �ģͣ� */
	kscope->icon_item24Segment = (char *)((unsigned int)(kscope->icon_itemSegment + size0 + 0xf) & ~0xf);
	size = (u32)_icon_item_24_staticSegmentRomEnd - (u32)_icon_item_24_staticSegmentRomStart;
	PRINTF("icon_item24 size=%x\n",size);
	dmacopy_fg( kscope->icon_item24Segment,
		    (u32)_icon_item_24_staticSegmentRomStart,
		    size );
	/* �ǣ��ͣţϣ֣ţ� �ģͣ� */
	kscope->icon_item_map_Segment = (char *)((unsigned int)(kscope->icon_item24Segment + size + 0xf) & ~0xf);
	size2 = (u32)_icon_item_gameover_staticSegmentRomEnd - (u32)_icon_item_gameover_staticSegmentRomStart;
	PRINTF("icon_item_dungeon gameover-size2=%x\n", size2);
	dmacopy_fg( kscope->icon_item_map_Segment,
		    (u32)_icon_item_gameover_staticSegmentRomStart,
		    size2 );
	/* ���ܸ졿�Ѹ� �ģͣ� */
	kscope->icon_item_jpn_nes_Segment = (char *)((unsigned int)(kscope->icon_item_map_Segment + size2 + 0xf) & ~0xf);
	if ( !J_N ) {
	    /* ���ܸ� */
	    size = (u32)_icon_item_jpn_staticSegmentRomEnd - (u32)_icon_item_jpn_staticSegmentRomStart;
	    PRINTF("icon_item_jpn dungeon-size=%x\n", size);
	    dmacopy_fg( kscope->icon_item_jpn_nes_Segment,
			(u32)_icon_item_jpn_staticSegmentRomStart,
			size );
	} else {
	    /* �Ѹ� */
	    size = (u32)_icon_item_nes_staticSegmentRomEnd - (u32)_icon_item_nes_staticSegmentRomStart;
	    PRINTF("icon_item_dungeon dungeon-size=%x\n", size);
	    dmacopy_fg( kscope->icon_item_jpn_nes_Segment,
			(u32)_icon_item_nes_staticSegmentRomStart,
			size );
	}
	red = 255;
	green = 130;
	blue = 0;
	alpha = 0;
	ered = 30;
	egreen = 0;
	eblue = 0;
	go_ct = 30;
	VREG(88) = 98;
	kscope->save_cursor = 0;
	kscope->pause++;
	break;

    case Pause_Gameover_10:
	rc = (ABS(red - 30)) / go_ct;
	gc = (ABS(green - 0)) / go_ct;
	bc = (ABS(blue - 0)) / go_ct;
	ac = (ABS(alpha - 255)) / go_ct;
	if ( red >= 30 ) red -= rc;
	else		 red += rc;
	if ( green >= 0 ) green -= gc;
	else		  green += gc;
	if ( blue >= 0 ) blue -= bc;
	else		 blue += bc;
	if ( alpha >= 255 ) alpha -= ac;
	else		    alpha += ac;
	rc = (ABS(ered - 255)) / go_ct;
	gc = (ABS(egreen - 130)) / go_ct;
	bc = (ABS(eblue - 0)) / go_ct;
	if ( ered >= 255 ) ered -= rc;
	else		  ered += rc;
	if ( egreen >= 130 ) egreen -= gc;
	else		   egreen += gc;
	if ( eblue >= 0 ) eblue -= bc;
	else		  eblue += bc;

	if ( !(--go_ct) ) {
	    red = 30;
	    green = 0;
	    blue = 0;
	    alpha = 255;
	    ered = 255;
	    egreen = 130;
	    eblue = 0;
	    go_ct = 40;
	    kscope->pause++;
	}
	break;

    case Pause_Gameover_20:
	if ( !(--go_ct) ) kscope->pause = Pause_Gameover_I;
	break;
	
    case Pause_Gameover_I:
	/* ���쥤�ɡ��������׽и� */
	kscope->angle_i =
	kscope->angle_e =
	kscope->angle_m =
	kscope->angle_c =
	    kscope->angle_s -= ANGLE_XZ/WREG(6);
////////	kscope->translate -= TRANSLATE_S_0;
	kscope->menu_myp += (MENU_MYP/WREG(6));
	parameter->start_alpha += (255/WREG(6));
	VREG(88) -= 3;
	WREG(16) += (WREG(25)/WREG(6));
	WREG(17) += (WREG(26)/WREG(6));
	XREG(5) += (150/WREG(6));
	kscope->alpha += (unshort)(255/(WREG(6)+WREG(4)));
	if ( kscope->angle_s < -628.0f ) {
	    kscope->angle_s = -628.0f;
	    parameter->start_alpha = 255;
	    VREG(88) = 66;
	    WREG(2) = 0;
	    kscope->alpha = 255;
#if defined(GATEWAY_VERSION)
	    kscope->pause = Pause_Gameover_N;
	    gover->gover_mode++;
#else
	    kscope->pause = Pause_Gameover_P;
#endif	/* GATEWAY_VERSION */
	    if ( (++Save_Ct) >= 1000 ) Save_Ct = 999;
	}
	PRINTF("kscope->angle_s = %f\n",kscope->angle_s);
	break;

    case Pause_Gameover_P:
	if ( Pad_on_trigger(A_BUTTON)) {
	    if ( kscope->save_cursor ) {
		kscope->save_cursor = 0;
		Na_StartSystemSe( NA_SE_SY_DECIDE );
		kscope->pause = Pause_Gameover_N;
		gover->gover_mode++;
	    } else {
		Na_StartSystemSe( NA_SE_SY_PIECE_OF_HEART );
		kscope->save_cursor = 0;
		Game_play_room_inf_set( game_play );
		SCENE_DATA_ID = game_play->scene_data_ID;
		sram_save( &game_play->sram );
		kscope->pause = Pause_Gameover_S;
		next_kscp_status_ct = (60/2)*3;
	    }
	}
	break;

    case Pause_Gameover_S:
	if ( !(--next_kscp_status_ct) ) {
	    kscope->pause = Pause_Gameover_N;
	    gover->gover_mode++;
	} else if ( next_kscp_status_ct <= ((60/2)*3 - 10) ) {
	    if ( Pad_on_trigger(A_BUTTON) || Pad_on_trigger(START_BUTTON) ) {
		kscope->pause = Pause_Gameover_N;
		gover->gover_mode++;
		Na_SetWindowSound(0);
	    }
	}
	break;

    case Pause_Gameover_N:
	if ( Pad_on_trigger(A_BUTTON) || Pad_on_trigger(START_BUTTON) ) {
	    if ( !kscope->save_cursor ) {
		Na_StartSystemSe( NA_SE_SY_PIECE_OF_HEART );
		Game_play_room_inf_set( game_play );
		switch( z_common_data.scene_no ) {
		case YDAN_0:		/* �������ڤΥ��󥸥��		*/
		case DDAN_0:		/* �ɥɥ󥴥��󥸥��		*/
		case BDAN_0:		/* �����󥸥��			*/
		case MORI1_0:		/* ���ο���			*/
		case HIDAN_0:		/* ��ο���			*/
		case MIZUSIN_0:		/* ��ο���			*/
		case JYASINZOU_0:	/* ����ٿ������󥸥��         */
		case HAKADAN_0:		/* �貼���󥸥��       	*/
		case GANON_0:		/* ���Υ����			*/
		case MEN_0:		/* �̥�����󥸥��		*/
		case ICE_DOUKUTU_0:	/* ɹ��ƶ��                     */
		case GERUDOWAY_0:	/* �������ϩ			*/
		case HAKADAN_CH_0:	/* �貼���󥸥�� ���ɤ�      	*/
		case GANONTIKA_0:	/* ���Υ��ϲ�		        */
		case GANON_SONOGO_0:	/* ���Υ���㤽�θ�		*/
		    break;
		    
		case YDAN_BOSS_0:
		    ZCommon_SceneNoSet( YDAN_0 );
		    break;
		    
		case DDAN_BOSS_0:
		    ZCommon_SceneNoSet( DDAN_0 );
		    break;
		    
		case BDAN_BOSS_0:
		    ZCommon_SceneNoSet( BDAN_0 );
		    break;
		    
		case MORIBOSS_0:
		    ZCommon_SceneNoSet( MORI1_0 );
		    break;
		    
		case FIRE_BOSS_0:
		    ZCommon_SceneNoSet( HIDAN_0 );
		    break;
		    
		case MIZUSIN_BOSS_0:
		    ZCommon_SceneNoSet( MIZUSIN_0 );
		    break;
		    
		case JYASINZOU_BOSS_0:
		    ZCommon_SceneNoSet( JYASINZOU_0 );
		    break;
		    
		case HAKADAN_BOSS_0:
		    ZCommon_SceneNoSet( HAKADAN_0 );
		    break;
		    
		case GANON_BOSS_0:
		    ZCommon_SceneNoSet( GANON_0 );
		    break;
		    
		default:
		break;
		}
	    } else {
		Na_StartSystemSe( NA_SE_SY_DECIDE );
	    }
	    kscope->pause = Pause_Gameover_E;
	}
	break;

    case Pause_Gameover_E:
	if ( parameter->fill_alpha != 255 ) {
	    parameter->fill_alpha += 10;
	    if ( parameter->fill_alpha >= 255 ) {
		parameter->fill_alpha = 255;
		kscope->pause = Pause_None;
		SetGameFrame(3);	/* ������ե졼��ᣳ */
		PR_KAREIDOSCOPE_MODE = 0;	/* �ץ��������� */
		Object_Exchange_read_all( &game_play->object_exchange );
		DynaPolyInfo_resetBGDataInfo(&game_play->BGCheck, game_play);
////??????		Skeleton_Info_dt( &kscope->skeleton, &game_play->g );
		if ( !kscope->save_cursor ) {
		    /* ������³���� */
		    Game_play_down_restart_top(game_play);	/* �ƥ������������� */
		    ZCommonSet(game_info.restart_flag, -2);	/* �饤�ո�̵���� */
		    ZCommonSet( next_wipe, 2 );
		    S_Private.now_life = (LIFE_CT * 3);
		    Na_ChangeSoundMode( NA_MODE_TITLE );
		    ZCommonSet(life_mode, 0);
		    ZCommonSet(magic_flag, 0);
		    ZCommonSet(keep_magic_flag, 0);
		    COLOR_YELLOW();
		    PRINTF("MAGIC_NOW=%d ",MAGIC_NOW);
		    PRINTF("Z_MAGIC_NOW_NOW=%d   ��  ",Z_MAGIC_NOW_NOW);
		    Z_MAGIC_NOW_MAX = 0;
		    Z_MAGIC_NOW_NOW = MAGIC_NOW;
		    MAGIC_MAX =
			MAGIC_NOW = 0;
		    PRINTF("MAGIC_NOW=%d ",MAGIC_NOW);
		    PRINTF("Z_MAGIC_NOW_NOW=%d\n",Z_MAGIC_NOW_NOW);
		    COLOR_NORMAL();
		} else {
		    /* ��������� */
		    game_play->g._doing = 0;
		    game_set_next_game_name((Game *)game_play, opening);
		}
	    }
	}
	break;

    case Pause_Out:
	/* ���쥤�ɡ��������׽�λ */
////////	if ( kscope->translate != TRANSLATE_S ) {
	if ( kscope->angle_i != ANGLE_XZ ) {
	    kscope->angle_i = 
	    kscope->angle_e = 
	    kscope->angle_m = 
	    kscope->angle_c += ANGLE_XZ/WREG(6);
////////	    kscope->translate += TRANSLATE_S_0;
	    kscope->menu_myp -= (MENU_MYP/WREG(6));
	    parameter->start_alpha -= (255/WREG(6));
	    WREG(16) -= (WREG(25)/WREG(6));
	    WREG(17) -= (WREG(26)/WREG(6));
	    XREG(5) -= (150/WREG(6));
	    kscope->alpha -= (unshort)(255/WREG(6));
	    if ( kscope->angle_i == ANGLE_XZ ) kscope->alpha = 0;
	} else {
	    kscope->debug = 0;
	    kscope->pause = Pause_End;
	    kscope->angle_i =
		kscope->angle_e =
		kscope->angle_m =
		kscope->angle_c = ANGLE_XZ; 		/* ���� */
////////	    kscope->select_name[kscope->kscp_pos] =
	    kscope->zoom_name = 999;
	    parameter->start_alpha = 0;
	}
	break;
	
    case Pause_End:
	/* ��λ */
	kscope->pause = Pause_None;
	SetGameFrame(3);	/* ������ե졼��ᣳ */
	PR_KAREIDOSCOPE_MODE = 0;	/* �ץ��������� */
////////	gamealloc_free( &game_play->g.gamealloc, kscope->cvg );
	Object_Exchange_read_all( &game_play->object_exchange );
	DynaPolyInfo_resetBGDataInfo(&game_play->BGCheck, game_play);
////????	Skeleton_Info_dt( &kscope->skeleton, &game_play->g );

//	parameter->map_alpha = MAP_ALPHA;		/* �ͣ��� ��������� */
	switch  ( game_play->scene_data_ID ) {
	case YDAN:		/* �������ڤΥ��󥸥��		*/
	case DDAN:		/* �ɥɥ󥴥��󥸥��		*/
	case BDAN:		/* �����󥸥��			*/
	case MORI1:		/* ���ο���			*/
	case HIDAN:		/* ��ο���			*/
	case MIZUSIN:		/* ��ο���			*/
	case JYASINZOU:		/* ����ٿ������󥸥��         */
	case HAKADAN:		/* �貼���󥸥��       	*/
	case HAKADAN_CH:	/* �貼���󥸥�� ���ɤ�      	*/
	case ICE_DOUKUTU:	/* ɹ��ƶ��                     */
	case YDAN_BOSS:
	case DDAN_BOSS:
	case BDAN_BOSS:
	case MORIBOSS:
	case FIRE_BOSS:
	case MIZUSIN_BOSS:
	case JYASINZOU_BOSS:
	case HAKADAN_BOSS:
	    map_textuer_dma( game_play, parameter->room_no );
	default :
	    break;
	}
	Z_BTN_ITEM(0) = button_item[0];
	Z_BTN_ITEM(1) = button_item[1];
	Z_BTN_ITEM(2) = button_item[2];
	Z_BTN_ITEM(3) = button_item[3];
	Z_BTN_ITEM(4) = button_item[4];	/* ��¸�£������������ */
	
	parameter->sp_action_flag =
	    parameter->sp_action = 0;
////////	i = LAST_TIME_TYPE;
	COLOR_YELLOW();
////////	PRINTF("i=%d   LAST_TIME_TYPE=%d    ",i, LAST_TIME_TYPE );
////////////////////////	a_item_dma_change( game_play, 0 );
////////	if ( !Z_ALPHA_TYPE ) {
////////	    if ( !Yabusame_Mode ) alpha_change( 50 );
////////	}
	PRINTF("i=%d  LAST_TIME_TYPE=%d\n",i, LAST_TIME_TYPE );
	Z_PREV_ALPHA_TYPE = 0;
	alpha_change( LAST_TIME_TYPE );
	/* �ץ쥤�䡼��ǽ������� */
	player->talk_actor = NULL;
	player_ability_init( game_play, player );
	
//	parameter->a_alpha =
//	    parameter->c_alpha =
//	    parameter->c_alpha1 =
//	    parameter->c_alpha2 = 255;

/*	PRINTF("?????????????   ");
	shrink_window_setval( XREG(9) );
	PRINTF("&&&&&&&&&&&&&&&&\n");*/
	COLOR_NORMAL();
	break;

//    case Pause_Show:
//	break;
	
    default:
	break;
    }

}
