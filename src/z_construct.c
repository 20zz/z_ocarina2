/* $Id: z_construct.c,v 2.6 1998/11/06 02:55:48 soejima Exp $
 *
 * parameter_dt( Game_play *game_play )
 * parameter_ct( Game_play *game_play )
 * message_ct( Game_play *game_play )
 * save_area_ct( Game_play *game_play )
 * ���󥹥ȥ饯��
 *
 * $Log: z_construct.c,v $
 * Revision 2.6  1998/11/06  02:55:48  soejima
 * ������
 *
 * Revision 2.5  1998-11-02 17:58:16+09  soejima
 * �У���
 *
 * Revision 2.4  1998-10-30 14:06:11+09  soejima
 * �У����ѹ�
 *
 * Revision 2.3  1998-10-29 18:18:14+09  soejima
 * �У����ѹ�
 *
 * Revision 2.2  1998-10-27 21:24:21+09  soejima
 * �У��̻���
 *
 * Revision 2.1  1998-10-22 20:45:49+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.128  1998/10/14 08:20:27  soejima
 * *** empty log message ***
 *
 * Revision 1.1  1998/03/05  02:23:23  soejima
 * Initial revision
 * $Log�ɲ�
 * */




/************************************************************************
 *									*
 *	�����64 ���󥹥ȥ饯����					*
 *				1998ǯ03��05��(������) 11��00ʬ00�� JST *
 *									*
 ************************************************************************/
#include "z_basic.h"
#include "z_play.h"
#include "assert64.h"		/* assert */
#include "padmgr.h"

#include "z_scene_table.h"
#include "z_save_area_h.h"
#include "z_parameter_h.h"
#include "z_message_h.h"
#include "z_map_exp.h"

#include "z_parameter.h"	/* map_textuer_dma alpha_clear */
#include "z_kanfont.h"		/* kscope_kanfont_get */
#include "z_lifemeter.h"	/* initial_LifeMeterColorAnimation */



EXTERN_DEFSEG_DATA(parameter_static);
EXTERN_DEFSEG_DATA(do_action_static);
EXTERN_DEFSEG_DATA(icon_item_static);


extern padmgr_t padmgr;



/************************************************************************
 *									*
 *	�ѥ�᡼����ɽ������ ���饹 ���󥹥ȥ饯��			*
 *									*
 ************************************************************************/
extern void
parameter_dt( Game_play *game_play )
{
    /* �ͣ��� */
    map_exp_dt( game_play );
}

extern void
parameter_ct( Game_play *game_play )
{
    Parameter		*parameter = (Parameter *)&game_play->parameter;

    u32		size0;
    unshort	jjj;
    short 	event_pt;


    ZCommonSet( sunmoon_flag, 0 );

    Z_ALPHA_TYPE =
	Z_PREV_ALPHA_TYPE = 0;
    /* �ӥ塼 ���˥���� */
    view_init( &parameter->view, game_play->g.graph );

    parameter->do_action_flg =
	parameter->do_action =
	parameter->do_action_old = 0;
    parameter->do_action_rotate = 0.0f;
/*    parameter->h_gage    =
      parameter->b_button  =
      parameter->a_button  =
      parameter->c_bottle  =
      parameter->c_warasibe =
      parameter->c_hook    =
      parameter->c_sunmoon =
      parameter->c_ocarina =
      parameter->c_warp    =
      parameter->m_wind    =
      parameter->m_magic   =
      parameter->another   =*/
    parameter->sp_action_flag =
	parameter->marathon_fg =
	parameter->sp_action = 0;
    

    parameter->magic_mp = 0;
    parameter->magic_frame = 16;

    parameter->active_heart_timer = XREG(95);


    parameter->fill_alpha =		/* �ƣ���ң��������� ��������� */
	parameter->a_alpha =    	/* ���ܥ��� ��������� */
	parameter->b_alpha =		/* �¥ܥ��� ��������� */
	parameter->c_alpha =		/* �åܥ��� ��������� */
	parameter->c_alpha1 =		/* �åܥ��� ��������� */
	parameter->c_alpha2 =		/* �åܥ��� ��������� */
	parameter->heart_alpha =	/* �ϡ��� ��������� */
	parameter->start_alpha =	/* �ӣԣ��ң� ��������� */
	parameter->meter_alpha = 0;	/* �᡼���� ��������� */
# if 0
    if ( game_play->room_info.now.type == ROOM_TYPE_DANGEON ) {
	parameter->map_alpha = 0;		/* �ͣ��� ��������� */
    } else {
	parameter->map_alpha = 0;		/* �ͣ��� ��������� */
    }
# endif
    parameter->map_alpha = 0;		/* �ͣ��� ��������� */

    parameter->hold_rod = 0;

    /* ����У��ң��ͣţԣţҥ������� */
    size0 = (u32)_parameter_staticSegmentRomEnd - (u32)_parameter_staticSegmentRomStart;
    PRINTF("����У��ң��ͣţԣţҥ�������=%x\n",size0);
    parameter->parameterSegment = (char *)game_alloc( &game_play->g, (size_t)size0 );
    PRINTF("parameter->parameterSegment=%x\n",parameter->parameterSegment);
    assert(parameter->parameterSegment != NULL);
    dmacopy_fg(parameter->parameterSegment, (u32)_parameter_staticSegmentRomStart, size0 );


    /* �ģϥ�������� �ƥ��������� */
    parameter->do_actionSegment = (char *)game_alloc(&game_play->g, (size_t)G_B_PT*3);
    PRINTF("�ģϥ�������� �ƥ���������=%x\n",G_B_PT*3);
    PRINTF("parameter->do_actionSegment=%x\n",parameter->do_actionSegment);
    assert(parameter->do_actionSegment != NULL);
#if defined(PAL_VERSION)
    if ( !J_N )          jjj = DO_Attack * G_B_PT;
    else if ( J_N == 1 ) jjj = (DO_Attack + DO_F_Navi) * G_B_PT;
    else                 jjj = (DO_Attack + DO_F_Navi + DO_F_Navi) * G_B_PT;
    dmacopy_fg(parameter->do_actionSegment, (u32)_do_action_staticSegmentRomStart+jjj, G_B_PT*2 );
    if ( !J_N )          jjj = G_B_PT*DO_Modoru;
    else if ( J_N == 1 ) jjj = G_B_PT*(DO_Modoru + DO_F_Navi);
    else                 jjj = G_B_PT*(DO_Modoru + DO_F_Navi + DO_F_Navi);
    dmacopy_fg(parameter->do_actionSegment+(G_B_PT*2), (u32)_do_action_staticSegmentRomStart+jjj, G_B_PT );
#else
    if ( !J_N ) jjj = DO_Attack * G_B_PT;
    else        jjj = (DO_Attack + DO_F_Navi) * G_B_PT;
    dmacopy_fg(parameter->do_actionSegment, (u32)_do_action_staticSegmentRomStart+jjj, G_B_PT*2 );
    if ( !J_N ) jjj = G_B_PT*DO_Modoru;
    else        jjj = G_B_PT*(DO_Modoru + DO_F_Navi);
    dmacopy_fg(parameter->do_actionSegment+(G_B_PT*2), (u32)_do_action_staticSegmentRomStart+jjj, G_B_PT );
#endif


    /* �������󥢥��ƥ� �ƥ��������� */
    parameter->icon_itemSegment = (char *)game_alloc(&game_play->g, (size_t)I_IT_PT*4);
    PRINTF("�������󥢥��ƥ� �ƥ���������=%x\n",I_IT_PT*4);
    PRINTF("parameter->icon_itemSegment=%x\n",parameter->icon_itemSegment);
    assert(parameter->icon_itemSegment != NULL);
    PRINTF("Register_Item[%x, %x, %x, %x]\n",Register_Item(0),Register_Item(1),Register_Item(2),Register_Item(3));
    if ( Register_Item(0) < 0xf0 ) {
	dmacopy_fg( parameter->icon_itemSegment+I_IT_PT*0,
		    (u32)_icon_item_staticSegmentRomStart+((Register_Item(0))*I_IT_PT),
		    I_IT_PT );
    } else {
	if ( Register_Item(0) != 0xff ) {
	    dmacopy_fg( parameter->icon_itemSegment+I_IT_PT*0,
			(u32)_icon_item_staticSegmentRomStart+((Register_Item(0))*I_IT_PT),
			I_IT_PT );
	}
    }
    if ( Register_Item(1) < 0xf0 ) {
	dmacopy_fg( parameter->icon_itemSegment+I_IT_PT*1,
		    (u32)_icon_item_staticSegmentRomStart+((Register_Item(1))*I_IT_PT),
		    I_IT_PT );
    }
    if ( Register_Item(2) < 0xf0 ) {
	dmacopy_fg( parameter->icon_itemSegment+I_IT_PT*2,
		    (u32)_icon_item_staticSegmentRomStart+((Register_Item(2))*I_IT_PT),
		    I_IT_PT );
    }
    if ( Register_Item(3) < 0xf0 ) {
	dmacopy_fg( parameter->icon_itemSegment+I_IT_PT*3,
		    (u32)_icon_item_staticSegmentRomStart+((Register_Item(3))*I_IT_PT),
		    I_IT_PT );
    }




    PRINTF("�ţ֣ţΣԡ�%d\n",ZCommonGet( event_fg ));
    if ( ZCommonGet( event_fg ) == Event_MD4 ||
	 ZCommonGet( event_fg ) == Event_MD20 ||
	 ZCommonGet( total_event_fg ) == TEvent_MD4 ||
	 ZCommonGet( total_event_fg ) == TEvent_MD14) {
	PRINTF("restart_flag=%d\n",ZCommonGet( game_info.restart_flag ) );
	if ( ZCommonGet( game_info.restart_flag ) == -1 || ZCommonGet( game_info.restart_flag ) == (RESTART_MODE_DOWN + 1) ) {
	    if (ZCommonGet( event_fg ) == Event_MD4 ) {
		EVENT_FG = Event_MD1;
		ZCommonSet( event_xp[0], 140 );	/* �����ޡ�ɽ���ذ��� */
		ZCommonSet( event_yp[0],  80 );	/* �����ޡ�ɽ���ٰ��� */
	    }
	}
	if ( ZCommonGet( event_fg ) == Event_MD4 || ZCommonGet( event_fg ) == Event_MD20 ) event_pt = 0;
	else                                                                               event_pt = 1;
	ZCommonSet( event_xp[event_pt], 26 );	/* �����ޡ�ɽ���ذ��� */
	if ( S_Private.max_life > LIFE_CT*10 )  ZCommonSet( event_yp[event_pt], 54);
	else                                    ZCommonSet( event_yp[event_pt], 46);
    }
    if ( ZCommonGet( event_fg ) >= Event_MD30 && ZCommonGet( event_fg ) <= Event_MD34 ) {
	/* �����ޡ���� */
	ZCommonSet( event_fg, Event_MD0 );
	PRINTF("�����ޡ���ߡ�����������������������������������������  = %d\n",ZCommonGet( event_fg ));
    }


    PRINTF("�У��ң��ͣţԣţ��ΰ��%x\n",size0+(G_B_PT*2)+(I_IT_PT*4)+4096);

    initial_LifeMeterColorAnimation( game_play );


    /* �ͣ��� */
    map_exp_ct( game_play );


    /* ήŭ�ϴط� */
    parameter->yabusame_score =
	parameter->yabu_score = 0;

# if 0
    TREG(10) = 1;	/* �ܥ������� */
# endif

/*    if ( !TREG(10) ) {*/
# if 0
	/* �¥ܥ��󥢥������  ���ܥ���� */
	ZREG(70) = 196;		//���ܥ���ذ���
	ZREG(43) = 90;		//���ܥ����طʣУ���ʣҡ�
	ZREG(44) = 90;      	//                    �ʣǡ�
	ZREG(45) = 255;     	//                    �ʣ¡�
	ZREG(82) = 196;		//�������ƥ��
	VREG(64) = 198;		// �����ƥ���ءʣ���
	
	XREG(17) = 158;		//�¥ܥ����ط� �̣�������
	XREG(20) = 158;		//�¥ܥ��󥢥��ƥ� �̣�������
	XREG(22) = 0;		//�¥ܥ����طʣУ���ʣҡ�
	XREG(23) = 150;		//                    �ʣǡ�
	XREG(24) = 0;		//                    �ʣ¡�
# else
/*	} else {*/
	/* �¥ܥ����  ���ܥ��󥢥������ */
	ZREG(70) = 160;		//�¥ܥ���ذ���
	ZREG(43) = 0;		//�¥ܥ����طʣУ���ʣҡ�
	ZREG(44) = 150;      	//                    �ʣǡ�
	ZREG(45) = 0;     	//                    �ʣ¡�
	ZREG(82) = 160;		//�¥����ƥ��
	VREG(64) = 162;		// �����ƥ���ءʣ���
	
	XREG(17) = 186;		//���ܥ����ط� �̣�������
	XREG(20) = 186;		//���ܥ��󥢥��ƥ� �̣�������
	XREG(22) = 90;		//���ܥ����طʣУ���ʣҡ�
	XREG(23) = 90;		//                    �ʣǡ�
	XREG(24) = 255;		//                    �ʣ¡�
# endif
/*	}*/

}




/************************************************************************
 *									*
 *	��å����� ���饹 ���󥹥ȥ饯��				*
 *									*
 ************************************************************************/
extern void
message_ct( Game_play *game_play )
{
    Message		*message = (Message *)&game_play->message;

    Kanfont		*kanfont = (Kanfont *)&message->kanfont;

#if 01
    message_tbl_p_init();		/* ��å������ݥ��󥿽���� */
#endif
    
    OCARINA_MODE( game_play ) = Oca_Null;
    message->msg_mode = M_NULL;
    message->msg_data = NULL;
    message->msgno =
	message->select =
	message->sel_pnt =
	message->ocarina_no =
	message->nonono_fg = 0;


    message->color_a = 255;
    
    view_init(&message->view, game_play->g.graph);

    message->fukidashiSegment = (char *)game_alloc( &game_play->g, ((size_t)((128*64)/2) + 96*48) );
    PRINTF("message->fukidashiSegment=%x\n",message->fukidashiSegment);
    PRINTF("�᤭�Ф�game_alloc=%x\n",((128*64)/2) + (96*48));
    assert(message->fukidashiSegment != NULL);

    /* ʸ���ե���� ���å� */
    kscope_kanfont_get( kanfont );

    YREG(31) = 0;	/* ��Ź���åե饰�ϣƣ� */
}



/************************************************************************
 *									*
 *	�٣ңţǥǡ��� ���󥹥ȥ饯��					*
 *									*
 ************************************************************************/
static void
YREG_data_ct( void )
{
    YREG(8) = 10;		// �ˣţ�Ϣ³���ϥե졼��
    YREG(14) = 0;		// ���δ֥�����ʥǥХå��ѥ�����
    YREG(15) = 0;  		// ������ԣ٣У�

    YREG(16) = 0;  		// �᤭�Ф���������
    YREG(17) = 0;  		//         ��������
    YREG(22) = 50;		// �᤭�Ф���������
    YREG(23) = 0;       	//         ��������  

    YREG(24) = -60;		// ���쥤�ɡر��β��̤آ��٣ذ���
    YREG(25) = 13;		//         �أ��ǥ��ǥ�ɽ���٣ذ���
    YREG(26) = 15;		//         �أ��ǥ��åȡ٣ذ���
    YREG(27) = 41;		//         �أäǥ��åȡ٣ذ���
    YREG(28) = 15;		//         �أ¤Ƿ���٣ذ���



//    YREG(31) = 0;		// ��Ź���åե饰

    YREG(32) = 265;	//
    YREG(33) = 55;	//
    YREG(34) = 0;    	//
    YREG(35) = 20;	//
    YREG(36) = 0;	//
    YREG(37) = 0;	//
    YREG(38) = 0;	//

    /********************  z_parameter.c  ********************/
    YREG(40) = 2;		/* ��ˡ�᡼�������ǥ����󥿡� �� */
    YREG(41) = 1;		/*                            �� */
    YREG(42) = 2;		/*                            �� */
    YREG(43) = 1;		/*                            �� */

    /********************  z_vr_box.c  ********************/
    YREG(44) = 0;		// �֣ҡ��£ϣ� ���󥰥��
    YREG(45) = 236;		//		        ��
    YREG(46) = 36;		//			��
    
    /********************  z_.c  ********************/
    YREG(47) = 0;	//

    YREG(48) = -45;		// �أäǥ��åȡ٣ذ���
    YREG(49) = -48;		//
    YREG(50) = 16;		// �أ��٣إ�����
    YREG(51) = 22;		//
    YREG(52) = -55;		// �أ��ǥ��ǥ�ɽ���٣ذ���
    YREG(53) = -53;		//
    YREG(54) = 43;		// �أá٣إ����� 
    YREG(55) = 47;		//
    YREG(56) = -33;		// �أ��Ƿ����ɽ���� 
    YREG(57) = -42;		//
    YREG(58) = -33;		// �أ��ǥ��åȡ٣ذ���
    YREG(59) = -37;		//

    YREG(60) = 14;
    YREG(61) = -2;
    YREG(62) = -2;
    YREG(63) = -18;
    YREG(64) = -18;
    
    YREG(67) = 0;
    YREG(68) = 0;
    YREG(69) = 0;
    YREG(70) = 0;

    YREG(71) = -6;		// ��å������ʣ����˥����ƥ������
    YREG(72) = 10;		//                           ������
    YREG(73) = -8;	        // ��å������ʣ����˥����ƥ������
    YREG(74) = 8;	        //                           ������
    YREG(75) = 24;		// ��å������ʣ����˥����ƥॵ����
    YREG(76) = 32;		// ��å������ʣ����˥����ƥॵ����
    YREG(77) = 0;	//
    YREG(78) = 0;	//
    YREG(79) = 0x30;		// �ǥХå��ѥ�å������Σ

    /********************  z_gameover.c  ********************/
    /*  */
    YREG(80) = 450;
    YREG(81) = 0;
    YREG(82) = -15;
    YREG(83) = 500;
    YREG(84) = 600;
    YREG(85) = 0;
    YREG(86) = -21;
    YREG(87) = 510;

    /********************  z_.c  ********************/
    YREG(88) = 247;	//
    YREG(89) = 20;	//

    /********************  z_parameter.c  ********************/
    /* �ϡ������ǥ����� */
    YREG(92) = 8;
    YREG(93) = 6;
    YREG(94) = 3;
    YREG(95) = 1;
 
    /****************************************/
    /****************************************/
    /****************************************/
    /****************************************/
    /****************************************/
    ZREG(0) = 0;		// ��ˡ�᡼���� �Уңɣ͡���
    ZREG(1) = 200;		//                        ��
    ZREG(2) = 0;		//                        ��
//    ZREG(3) = 0;		// �ե��������򥳡����Σ�.
 
//    ZREG(4) = 0;
//    ZREG(5) = 0;
//    ZREG(6) = 0;
     /* z_gameover.c */
//    ZREG(7) = 90;		/* �����४���С� �ե졼��� */
//    ZREG(8) = 20;		/*                        �� */
    ZREG(9) = 140;		/*                        �� */
    ZREG(10) = 200;		/*                        �� */
    /* z_kaleido_scope.c */
    ZREG(11) = 0;		/* ��������ټ���ž®�� */
    ZREG(12) = 200; 		/* �������� */
    ZREG(13) = 0;		/* ���쥤�ɡ��������� ��ž�ǥХå��ե饰 */
    /* z_parameter.c */
    ZREG(14) = 110;		/* �ܥ᡼����ɽ���� */
    ZREG(15) = 56;		/*               �� */

    /* z_message.c */
    ZREG(16) = 1;		/* z_message.c: */
    /* z_gameover.c */
    ZREG(17) = -50;    		/* �饤�� �� */
    ZREG(18) = -200; 		/*        �� */
    ZREG(19) = 0;		/*        �� */
    ZREG(20) = 0;		/* �ܰ��� �� */
    ZREG(21) = 50;		/*        �� */
    ZREG(22) = -50;		/*        �� */
    /* z_kaleido_*.c */
    ZREG(23) = 20;		/* �ϡ������ǥ����󥿡� */
    ZREG(24) = 20;		/*                     �� */
    ZREG(25) = 4;		/*                     �� */
    ZREG(26) = 20;		/*                     �� */
    ZREG(27) = 10;		/*                     �� */
    ZREG(28) = 20;		/*  �����������ǥ����󥿡� �� */
    ZREG(29) = 4;		/*                         �� */
    ZREG(30) = 20;		/*                         �� */
    ZREG(31) = 10;		/*                         �� */
  
    /* z_parameter.c */
    ZREG(32) = 0;
    ZREG(33) = 0;
    ZREG(34) = 0;
    ZREG(36) = 0;
    ZREG(37) = 0;
    ZREG(38) = 0;

    ZREG(39) = 255;		//�åܥ����طʣУ���ʣҡ�
    ZREG(40) = 160;     	//                    �ʣǡ�
    ZREG(41) = 0;		//		      �ʣ¡�
////////    ZREG(43) = 90;		//���ܥ����طʣУ���ʣҡ�
////////    ZREG(44) = 90;      	//                    �ʣǡ�
////////    ZREG(45) = 255;     	//                    �ʣ¡�
    ZREG(46) = 1;		// ���쥤�ɡ���������START-SCROLL���ԡ���
    ZREG(47) = 1;		//                   START-SCROLL���ԡ���

#if defined(PAL_VERSION)
    ZREG(48) = 100;
    ZREG(49) = 89;
    ZREG(50) = 92;

    ZREG(51) = 20;
    ZREG(52) = 20;
    ZREG(53) = 20;

    ZREG(54) = 120;
    ZREG(55) = 119;
    ZREG(56) = 119;

#else
    ZREG(49) = 86;
    ZREG(50) = 100;
    ZREG(51) = 0;
    ZREG(52) = 0;

    ZREG(53) = 21;
    ZREG(54) = 20;

    ZREG(55) = 122;
    ZREG(56) = 120;
#endif

# if 0
    ZREG(48) = 20;		// �ţѣգɣ��� �Ҷ���󥯣�
    ZREG(49) = -1300;	        //                        ��
    ZREG(50) = -1500;	        //                        ��
    ZREG(51) = 46;	        //                        ��������
    ZREG(52) = 250;	        //              ��ͥ�󥯣�
    ZREG(53) = -2280;	        //                        ��
    ZREG(54) = 600;	        //                        ��
    ZREG(55) = 56;	        //                        ��������
    ZREG(56) = 200;	        //              ��ͤΥʥ��գ�
    ZREG(57) = -1800;	        //                          �� 
    ZREG(58) = -400;	        //                          ��
    ZREG(59) = 47;	        //                        ��������
    ZREG(60) = 32300;	        //              �������
# endif
    
    ZREG(61) = 1;		//
    ZREG(62) = 254;		// �ʥ����ܥ����
    ZREG(63) = 16;		//             ��
    ZREG(64) = 20;	//
    ZREG(65) = 21;		// �ؤ�ɤ�٣�
    ZREG(66) = 122;		//           ��
    
////////////////    ZREG(68) = 132;		// �������ȥܥ����
 ////////////////   ZREG(69) = 17;		//               ��

////////    ZREG(70) = 196;		//���ܥ����
    ZREG(71) = 227;		//�ú�
    ZREG(72) = 249;		//�ò�
    ZREG(73) = 271;		//�ñ�
    ZREG(74) = 17; 		//���ܥ����
    ZREG(75) = 18;		//�ú�
    ZREG(76) = 34;		//�ò�
    ZREG(77) = 18;		//�ñ�
    ZREG(78) = 575;		//���ܥ��󥹥�����
    ZREG(79) = 620;		//�ú�
    ZREG(80) = 620;		//�ò�
    ZREG(81) = 620;		//�ñ�

////////    ZREG(82) = 196;		//�������ƥ��
    ZREG(83) = 227;		//�ú�
    ZREG(84) = 249;		//�ò�
    ZREG(85) = 271;		//�ñ�
    ZREG(86) = 17; 		//�������ƥ��
    ZREG(87) = 18;		//�ú�
    ZREG(88) = 34;		//�ò�
    ZREG(89) = 18;		//�ñ�
    ZREG(90) = 550;		//�������ƥॹ������
    ZREG(91) = 680;		//�ú�
    ZREG(92) = 680;		//�ò�
    ZREG(93) = 680;		//�ñ�

    ZREG(94) = 1;
    
    ZREG(95) = 0;		//�֣ҡ��£ϣإ��ꥸ���ɽ���ϣΡ��ϣƣ�

    /*
     * �أңţ�
     */
    XREG(0) = 26;		//���ܥ��󥢥��ƥॵ����
    XREG(1) = 22;		//�åܥ��󥢥��ƥॵ����
    XREG(2) = -11;		//���ܥ�����֥����ƥ������
    XREG(3) = -4;		//�åܥ�����֥����ƥ������
    XREG(4) = 3;		//�ܥ����طʼ���ʣ�����������
    XREG(5) = 0;		//���Ѷػߥ����ƥ�alpha��
    XREG(6) = 2;		/* ���쥤�ɡ��������ףף����ե졼�� */
    XREG(7) = 30; 		/*                   ���ĥ��ƥå����ϣ������ */
    XREG(8) = 10; 		//            ��
    XREG(9) = 0;		/*   */
    XREG(10) = -9550;		//�ɥ��ɥ��ذ���
    XREG(11) = 9950;		//        �ٰ���
    XREG(12) = 68;		//        ������
    XREG(13) = 36;		//�����˥᡼�����ե졼��
    XREG(14) = 4;		//�ɥ��ɥ��ե졼��
    XREG(15) = 1;		//�Уңɣ�,�ţΣ֥��顼����

    XREG(16) = 9;		//�¥ܥ����ط� �ԣ�����
////////    XREG(17) = 158;		//             �̣�������
    XREG(18) = -380;		// �¥ܥ����طʥ�����
    XREG(19) = 9;		//�¥ܥ��󥢥��ƥ� �ԣ�����
////////    XREG(20) = 158;		//                 �̣�������

    XREG(21) = 48;		//�¥ܥ��󥢥��ƥ�إ�����
////////    XREG(22) = 0;		//�¥ܥ����طʣУ���ʣҡ�
////////    XREG(23) = 150;		//                    �ʣǡ�
////////    XREG(24) = 0;		//                    �ʣ¡�
    XREG(25) = 0;
    XREG(26) = 0;
    XREG(27) = 0;
    XREG(28) = 16;		//�¥ܥ��󥢥��ƥ�٥�����
    XREG(29) = 50;		//�ɥ��ɥ�®�� ������
    XREG(30) = 15;		//             ����������
    XREG(31) = 8;		//		 ��������
    XREG(32) = 4;		//               ��������
    XREG(33) = 2;		//             ����
    XREG(34) = 100;		//����餰�餰�� ���ԡ���
    XREG(35) = 7;		//               ���ɤ�
    XREG(36) = 20;		//               ���ɤ�
    XREG(37) = 10;		//		 �ѡ���
    XREG(38) = 2;		//               �ե졼��
    XREG(39) = 140;		// �������ذ���
    XREG(40) = 20;		// �ֿ����ذ���
    XREG(41) = 300;		// �����˥᡼�����ե졼��ʥɥ��ɥ�®�� ��������
    XREG(42) = 100;		//                         ��             �����������
    XREG(43) = 70;		//                         ��             ��������
    XREG(44) = 50;		//                         ��             ��������
    XREG(45) = 36;		//                         ��             ����
    XREG(46) = 16;		//
    XREG(47) = 8;		//

    XREG(48) = 34;		//��ˡ�᡼������ʣٰ��֡�
    XREG(49) = 18;		//              �ʣذ��֡�
    XREG(50) = 42;		//		�ʣٰ��֡�
    XREG(51) = 26;		//              �ʣذ��֡�
    XREG(52) = 0;		//            �ͣ�����
    XREG(53) = 1;		//            ��

    XREG(54) = 65;		// ��å�����ɽ�����֣�
    XREG(55) = 60; 		//                   ��
    XREG(56) = 16;		// ���ԥ�����
////////    XREG(57) = 13;		// ʸ��������
////////    XREG(58) = 650;		// ʸ����������
    XREG(57) = 80;		// ʸ��������
    XREG(58) = 80;		// ʸ����������
    XREG(59) = 12;		// ʸ������
    XREG(60) = 1;		// ʸ�����쥵����
    XREG(61) = 3;		// ���糨ɽ�����֣�
    XREG(62) = 0;

    XREG(63) = 100;		// �ѥ�᡼����ȾƩ����������

    XREG(64) = 158;		// ���ԡ���λ�ޡ����ʣذ��֡�
    XREG(65) = 102; //96;  	//                 �ʣٰ��֡�
    XREG(66) = 48;		// ���򥫡�����ʣذ��֡�
    XREG(67) = 54;		// ������ʣٰ��֣���
    XREG(68) = 70;		//       �ʣٰ��֣��ˣ�����ʣٰ��֣���
    XREG(69) = 86;		//       �ʣٰ��֣���      �ʣٰ��֣���
    XREG(70) = -300; //-40;	// ���ʲ������ذ���
    XREG(71) = 0;		// ��å������ٰ���

    XREG(72) = 54;
    XREG(73) = 48;
    XREG(74) = 128;
    XREG(75) = 64;
    XREG(76) = 256*8;
    XREG(77) = 64*8;
    XREG(78) = 96;	
    XREG(79) = 98;

////////    XREG(80) = 25;	//�ɥ��ɥ��գ��͡������
    XREG(80) = 0;		//�ɥ��ɥ��գ��͡������
    XREG(81) = 50;		//              �ʷ������
    XREG(82) = 25;		//              �ʷ�ί�����
    XREG(83) = 100;		//              ��Ũ���ܿ���
    XREG(84) = 100;		//              �ʤӤä��ꥤ�٥�ȡ�

    XREG(85) = 0;		// �֣ҡ��£ϣ�  Matrix_translate�ʣء�
    XREG(86) = 0;		//                               �ʣ١�
    XREG(87) = 0;		//                               �ʣڡ�
 
    XREG(88) = -50;		//�ɥ��ɥ��ģϣף��͡��⤯��
    XREG(89) = -100;		//                  ����ߡ�
    XREG(90) = -500;		//                  ������夭���٥�ȡ�

    XREG(91) = 0;	//
    
    XREG(92) = 100;		// �᤭�Ф�ɽ�����֥����å��١ʣ֣ҡ��£ϣء�
    XREG(93) = 100;		// �᤭�Ф�ɽ�����֥����å��١ʥޡ����åȡ�����ۡ�
    XREG(94) = 160; /*100 (10/05/19�ѹ�) */	// �᤭�Ф�ɽ�����֥����å���
 
    XREG(95) = 200;		// �����ƥ��֥ϡ��ȥ����ޡ�

    /*
     * �ףңţ�
     */
    WREG(2) = -6080;		// Matrix_translate
    WREG(3) = 9355;		// Matrix_translate
    WREG(4) = 8;		// �и���������
    WREG(5) = 3;		// �ģϥ���������ž®��
    WREG(6) = 8;		// �ģϥ���������ž®�١ʥե졼���*/
    WREG(7) = 0;		// �¥ܥ���button_ud_rotate

    WREG(8) = 100;
    WREG(9) = 109;
    WREG(10) = 151;
    WREG(11) = 148;
    WREG(12) = 23;
    WREG(13) = 22;

    WREG(14) = -380;
    WREG(15) = -350;

    WREG(16) = -175;		// ���쥤�ɡ��������ףڡ�����
    WREG(17) = 155;		//                   �ҡ�����
    WREG(18) = 10;		//                       ����
    
    WREG(19) = 10;		// �ӣ��֣��̲�ž®��
    WREG(20) = -50;		// ���쥤���̡أäǥ��åȡ�ɽ����
    WREG(21) = -54;		//           �أ����ڤ��ؤ���ɽ����
    WREG(22) = -32;		//           �أ¤Ƿ����ɽ����
    WREG(23) = -38;		//           �أ��ǥ��åȡ�ɽ����
    WREG(24) = -36;		//           �أڣ� �ǲ�ž��ɽ����
 
    WREG(25) = 40;		// ���쥤�ɡ��������ףڥ���������
    WREG(26) = -40;		//                   �ҥ���������
    WREG(27) = 0;
    WREG(28) = 0;

    WREG(29) = 238; //204;	// �Ͼ�ͣ���ɽ����
    WREG(30) = 164; //140;	//               ��
    WREG(31) = 0;		//           on/off�ե饰
 
    WREG(32) = 122;		// ήŭ��
    WREG(33) = 60;		// ήŭ��

    WREG(35) = 0;		/* TOTAL_EVENT �����ޡ�ɽ���ذ��� */
    WREG(36) = 0;		/*                     ɽ���ٰ��� */
    
    
#if defined(PAL_VERSION)    
    WREG(37) = 100;
    WREG(38) = 99;
    WREG(39) = 109;

    WREG(40) = 151;
    WREG(41) = 149;
    WREG(42) = 148;

    WREG(43) = 23;
    WREG(44) = 22;
    WREG(45) = 22;

    WREG(46) = -380;
    WREG(47) = -360;
    WREG(48) = -350;

    WREG(49) = -48;		// �أäǥ��åȡ٣ذ���
    WREG(50) =  16;		//
    WREG(51) = -62;		//
    WREG(52) =  22;		// �أ��٣إ�����
    WREG(53) = -84;		//
    WREG(54) =  20;		//
    WREG(55) = -53;		// �أ��ǥ��ǥ�ɽ���٣ذ���
    WREG(56) =  40;		//
    WREG(57) = -64;		//
    WREG(58) =  47;		// �أá٣إ����� 
    WREG(59) = -84;		//
    WREG(60) =  44;		//
    WREG(61) = -42;		// �أ��Ƿ����ɽ���� 
    WREG(62) =  32;		//
    WREG(63) = -45;		//
    WREG(64) = -37;		// �أ��ǥ��åȡ٣ذ���
    WREG(65) =  30;		//
    WREG(66) = -50;		//

#endif  
    
    
    WREG(68) = 204;		// ���󥸥��ͣ���ɽ�����֣�
    WREG(69) = 140;		//                         ��

    WREG(87) = 80;		//
    WREG(88) = 70;		//
    WREG(89) = 40;		//
    WREG(90) = 320;		//
    WREG(91) = 40;		//

    WREG(92) = 3;
    WREG(93) = 6;
    WREG(94) = 3;
    WREG(95) = 6;

    /*
     * �֣ңţ�
     */
    if ( z_common_data.game_info.mode == GAME_INFO_GAME ) {
    VREG(0) = 52;		// �᤭�Ф��ذ���
    VREG(1) = 36;		//         �ٰ���
    VREG(2) = 214;		//         ��������
    VREG(3) = 76;		//               ��
    VREG(4) = 304;		//         ���եȣ�
    VREG(5) = 430;		//               ��
    VREG(6) = 1;		//         ���ե�
    VREG(7) = 78;		// �Ȳ������
    VREG(8) = 166;		//         ��
    VREG(9) = 40;	//
////////    VREG(10) = 0;	// �ͣ��Хǡ��������Σϡ�
////////    Scene_ID = 0;	// �ͣ��Хǡ����ݥ��󥿡�
////////    VREG(12) = 0;	// �ͣ��Хǡ����ʴ��ܡ�
////////    VREG(13) = 0;	// �ͣ��Хǡ����ʽ������
    VREG(14) = 32;		// �ͣ��Х���ѥ��ʣ������͡�
    VREG(15) = 32;		// �ͣ��Х���ѥ��ʣ������͡�
    VREG(16) = 110;		// �ͣ��Х���ѥ���translate�ء�
    VREG(17) = -740;		// �ͣ��Х���ѥ���translate�١�

    VREG(18) =   0; //170;		// �Ͼ�ͣ��� �Уңɣͨ���
    VREG(19) = 255; //190;		//                      ��
    VREG(20) = 255; //255;		//                      ��
    }

    VREG(21) = 0;		// ����ɽ�����ٰ���
    VREG(22) = 0;		//         �ò�
    VREG(23) = 0;		//         �ñ�
    VREG(24) = 0;		//         �ú�
    VREG(25) = 0;		//         �þ�
    
    VREG(26) = 0;		// �����ƥ�ͣ��У�����
    VREG(27) = 0;		// �����ƥॳ��ѥ�������

    VREG(28) = 98;		// �����
    VREG(29) = 18;		//     ��

    VREG(30) = 0;		// ��󥯳�����

    VREG(31) = 0;
    VREG(32) = 0;

    VREG(33) = 70;		// ��å������Уңɣͨ���
    VREG(34) = 255;		//                     ��
    VREG(35) = 80;		//                     ��
    VREG(36) = 70;		//                     ��
    VREG(37) = 255;		//                     ��
    VREG(38) = 80;              //                     ��
    VREG(40) = 9;		/* �����ޡ�ɽ���إ����� */
    VREG(42) = 250;		/* �����ޡ�ɽ���٥����� */
    VREG(43) = 440;		/* �������� */
    VREG(44) = 10;		/* ������ */
    VREG(45) = 190;		// ����ɽ�����ٰ���
    VREG(46) = 184;		//         �ò�
    VREG(47) = 176;		//         �ñ�
    VREG(48) = 172;		//         �ú�
    VREG(49) = 170;		//         �þ�
    VREG(50) = 30;		// ������̣Уȣ�®��
    VREG(51) = 0;		// �����®��

    VREG(52) = -16;

    VREG(53) = 230;		// ����ͣ��Уإ��ե�
    VREG(54) = 230;		//           ��
    VREG(55) = 120;		//           �ذ���
    VREG(56) = -720;		//           �ٰ���

    VREG(57) = 255;		// �ͣ����� ����
    VREG(58) = 255;		//            ��
    VREG(59) = 255;		//            ��

    VREG(60) = 20;		// �ӣ��֣��� ��������
    VREG(61) = 100;		//            ��������������
    VREG(62) = 0;		//            �ݥ���
    VREG(63) = 10;		//            ������
    
////////    VREG(64) = 198;		// �����ƥ���ءʣ���
    VREG(65) = 228;		//             �ʣú���
    VREG(66) = 250;		//             ��  ����
    VREG(67) = 272;		//             ��  ����
    VREG(68) = 35;		// �����ƥ���١ʣ���
    VREG(69) = 35;		//             �ʣú���
    VREG(70) = 51;		//             ��  ����
    VREG(71) = 35;		//             ��  ����
    VREG(72) = 0;
    VREG(73) = 0;
    VREG(74) = 0;
    VREG(75) = 0;
    
    VREG(76) = 30;		//�������ƥॵ����
    VREG(77) = 24;		//�ú�
    VREG(78) = 24;		//�ò�
    VREG(79) = 24;		//�ñ�
    VREG(80) = 29;		//���ܥ��󥵥���
    VREG(81) = 27;		//�ú�
    VREG(82) = 27;		//�ò�
    VREG(83) = 27;		//�ñ�

    VREG(84) = 0;

    VREG(85) = 50;		// �ǣ��ͣš��ϣ֣ţ� ������

    VREG(86) = 0;

    VREG(87) = 64;		// �ǣ��ͣš��ϣ֣ţ� ɽ����
    VREG(88) = 66;		//                        ��
    VREG(89) = 0;		//                        �̣��𥫥���
    VREG(90) = 126;		//
    VREG(91) = 124;		//
    VREG(92) = -63;		//

////////    VREG(93) = 0;
////////    VREG(94) = 0;		// �Ϸ��ϣ�ϣ��
////////    VREG(95) = 0;		// �֣ҡ��£�� �ϣ�ϣ��
}

/************************************************************************
 *									*
 *	�����֡����ꥢ ���󥹥ȥ饯��					*
 *									*
 ************************************************************************/
extern void
save_area_ct( Game_play *game_play )
{
    game_play;
    
    /* �٣ңţǥǡ��� ���󥹥ȥ饯�� */
    YREG_data_ct( );
}


