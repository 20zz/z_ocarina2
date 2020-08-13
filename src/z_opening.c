/* $Id: z_opening.c,v 2.2 1998/11/06 04:57:46 soejima Exp $
 *
 * ����������ȥ�
 *
 * $Log: z_opening.c,v $
 * Revision 2.2  1998/11/06  04:57:46  soejima
 * ������
 *
 * Revision 2.1  1998-10-22 20:51:48+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.19  1998/08/12 10:19:24  soejima
 * *** empty log message ***
 *
 * Revision 1.18  1998-08-03 22:27:41+09  sasaki
 * *** empty log message ***
 *
 * Revision 1.17  1998/07/18 10:50:22  soejima
 * *** empty log message ***
 *
 * Revision 1.16  1998-07-18 16:46:32+09  soejima
 * *** empty log message ***
 *
 * Revision 1.15  1998-07-18 15:16:23+09  soejima
 * *** empty log message ***
 *
 * Revision 1.14  1998-07-18 15:14:10+09  soejima
 * *** empty log message ***
 *
 * $Log�ɲ�
 * */

/************************************************************************
 *
 *	����������ȥ�
 *
 ************************************************************************/
#include "z_basic.h"
#include "sys_segment.h"
////////#include "z_sram.h"
////////#include "z_sram_h.h"

#include "z_title.h"
#include "z_select.h"
#include "z_opening.h"
#include "z_play.h"
#include "z_common_data.h"	/* z_common_data_t */
#include "z_save_area_h.h"
#include "z_file_choose.h"




extern void save_initialize999( void );


/*===============================================================
  =	�����ץ˥�						=
 ===============================================================*/
static void
opening_move( Game *thisx )
{
    Game_opening	*this = (Game_opening *)thisx;


# if 0
    /* �Σ�������� */
    game_set_next_game_name(thisx, file_choose);
    thisx->_doing = 0;
# endif
# ifdef SCENE_TOOL
    VREG(9) = 255;
    z_common_data.game_info.mode = GAME_INFO_GAME;
    game_set_next_game_name(&this->g, select);
    this->g._doing = 0;
    /* �����೫�ϣӣң��� �̣ϣ��ġ��ãȣţã� */
    Z_BTN_ITEM(0) = 
	Z_BTN_ITEM(1) = 
	Z_BTN_ITEM(2) = 
	Z_BTN_ITEM(3) =
	Z_BTN_ITEM(4) = 0;
    Z_CK_FG =
	Z_ALPHA_TYPE =
	Z_PREV_ALPHA_TYPE =
	Z_ALPHA_COUNT =
	Z_MAGIC_NOW_MAX = 0;
# else
    z_common_data.game_info.mode = GAME_INFO_OPENING_DEMO;
    this->g._doing = 0;
    ZCommon_LinkAgeBeAdult();
    save_initialize999( );
/*    ZCommonSet( day_time, 0xFFF0+VREG(94) );	*/
    ZCommonSet(day_time, 0xfff3);	/* �����ȥ�ǥ�		*/
    ZCommonSet(game_info.counter, 7);	/* �ǥ�Σ糧�å�	*/
    game_set_next_game_name(&this->g, play);
# endif
}

/*-----------------------------------------------------------------------
 *
 *	�����ץ˥�
 *
 *----------------------------------------------------------------------*/
static void
opening_draw( Game *thisx )
{
    thisx;
}



/************************************************************************
 *	�����ץ˥� �ᥤ�����						*
 ************************************************************************/
static void
opening_main( Game *thisx )
{
    Game_opening	*this = (Game_opening *)thisx;
    

    /*
     * �������ȥ��ɥ쥹����
     */
//??    gSPSegment( NEXT_DISP, 0, 0x0 );	/* Physical address segment */
//??    gSPSegment( NEXT_DISP, STATIC_SEGMENT, this->staticSegment );

    /*
     * �ǥ����ץ쥤�ꥹ�Ƚ������
     */
    DisplayList_initialize( this->g.graph, 0, 0, 0 );


    /*
     * �ͣϣ֣Ž���
     */
    opening_move( thisx );

    /*
     * �ģң��׽���
     */
    opening_draw( thisx );
}



/************************************************************************
 *	�����ץ˥󥰲��̸����						*
 * 	�������ѿ��θ����						*
 ************************************************************************/
extern void
opening_cleanup( Game *thisx )
{
    Game_opening	*this = (Game_opening *)thisx;

#define view_cleanup(view) ((void)(view))
    view_cleanup(&this->view);
}



/************************************************************************
 *	�����ץ˥󥰽����						*
 * 	��exec, cleanup���Ф�����					*
 * 	��¾�Υ����ѿ��ν����					*
 * 	���ңϣͥǡ����Σģͣ�ž����ɬ�פʤ��				*
 * 	����ա�����䥭�����ϤϤǤ��ޤ���				*
 ************************************************************************/
extern void
opening_init( Game *thisx )
{
    Game_opening	*this = (Game_opening *)thisx;

    
    /*
     * �����
     */
    SetGameFrame(1);	/* ������ե졼��ᣱ */

    /*
     * ����׻����饹���
     */
    new_Matrix( thisx );
    
    /*
     * �ӥ��������
     */ 
    view_init( &this->view, this->g.graph );

    /*
     * Gameɬ���ѿ������
     */
    this->g.exec	= opening_main;
    this->g.cleanup	= opening_cleanup;

    /*
     * �ӣң��ͥ��饹 ���󥹥ȥ饯�� 
     */
///////    sram_title_ct( thisx, &this->sram );
}
