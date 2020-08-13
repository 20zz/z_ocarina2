/*
 ******************************************************************************
 *              
 *      �ǥ��ѡɥ��Υ��良����ɤγ������ȥإå����ե�����
 * 	$Id: z_en_zl3_dousa.h,v 2.1 1998-10-22 21:13:45+09 zelda Exp $
 ******************************************************************************
 */
#ifndef INCLUDE_Z_EN_ZL3_DOUSA_H
#define INCLUDE_Z_EN_ZL3_DOUSA_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#include "z_en_zl3.h"    
#include "z_save_area_h.h"    

    
/****************���������ѥޥ����ѿ�****************/
/* ���Υ�ȥ������Ϣ���value ��u8���Ǥ���*/
#define SET_GANON_ORDER_FOR_ZL3(actor_p, value)	\
    		((((En_Zl3_Misc *)(actor_p))->order_ganon) = (value))
#define GET_GANON_ORDER_FOR_ZL3(actor_p)	(((En_Zl3_Misc *)(actor_p))->order_ganon)
    
/* ���������ΰ���(xyz_t��¤��) */
#define EN_ZL3_HAND_POS_FORGANON(actor_p)	(((En_Zl3_Misc *)(actor_p))->hand_pos)
#define EN_ZL3_HAND_POSX_FORGANON(actor_p)	((((En_Zl3_Misc *)(actor_p))->hand_pos).x)
#define EN_ZL3_HAND_POSY_FORGANON(actor_p)	((((En_Zl3_Misc *)(actor_p))->hand_pos).y)
#define EN_ZL3_HAND_POSZ_FORGANON(actor_p)	((((En_Zl3_Misc *)(actor_p))->hand_pos).z)

/* �ɤ��ͤ���Ȥ��äȻߤäƤޤ� */    
///* ����������ư���ߤä�(�ȤޤäƤ��ʤ��ʤ�"False") */
//#define EN_ZL3_HAND_STOP_FORGANON(actor_p)	\
//    			((EN_ZL3_SKELETON((En_Nb_Misc *)(actor_p)).flag) == ANIME_FRAME_REPEAT)


/****************"Actor_info_make_child_actor"�Ǥΰ����λ���****************/
#define EN_ZL3_INFINAL_ARG_DATA 	0x2000
#define EN_ZL3_INFINAL_ANGLE_Z 		0x0000

#define EN_ZL3_INFINAL2_ARG_DATA 	0x0001
    
/****************̿�����****************/

/* ���Υ��(EN_ZL3_INFINAL_ARG_DATA �� En_Zl3) */    
enum {
    DOUSA_IS_LOOKHAND_IN_EN_ZL3_INFINAL,	/* "��򸫤�"��ԡ��Ȥ� */
    DOUSA_IS_SURPRISE_IN_EN_ZL3_INFINAL,	/* "�ȥ饤�ե��������Ф�"�� */
    DOUSA_IS_DISAPPEAR_ALL_IN_EN_ZL3_INFINAL,	/* �����ʤꥼ����ȥ��ꥹ����
						   ���ä���(Actor_delete�Ƥ�) */

    DOUSA_IS_SWOOP_IN_EN_ZL3_INFINAL,		/* "���Υ�򸫤�"���ե졼��Τޤ� */
    DOUSA_IS_LOOKGANON_IN_EN_ZL3_INFINAL,	/* "���Υ�򸫤�"��ԡ��Ȥ� */
    DOUSA_IS_LOOKUP_IN_EN_ZL3_INFINAL,		/* "���Υ�򸫤�"����"���夲��"��ԡ��Ȥ� */
    DOUSA_IS_STAND_IN_EN_ZL3_INFINAL,		/* "���夲��"����"Ω��"��ԡ��Ȥ� */
    DOUSA_IS_WALK_IN_EN_ZL3_INFINAL,		/* "Ω��"����"�⤭"��ԡ��Ȥ� */

    DOUSA_IS_DISAPPEAR_CRYST_IN_EN_ZL3_INFINAL,	/* �����˥��ꥹ����Τ�
						   ���ä���(Actor_delete�Ƥ�) */
    
    TOTAL_DOUSA_IN_EN_ZL3_INFINAL
};
    
/* ���Υ��(EN_ZL3_INFINAL2_ARG_DATA �� En_Zl3) */    
enum {
    DOUSA_IS_STAND_IN_EN_ZL3_INFINAL2,		/* "Ω��"��ԡ���(s_wait)�� */
    DOUSA_IS_PRESS_IN_EN_ZL3_INFINAL2,		/* "�羸"��ԡ���(a_wait)�� */
    DOUSA_IS_LOOKUP_IN_EN_ZL3_INFINAL2,		/* "���夲��"��ԡ���(u_wait)�� */
    DOUSA_IS_RELIEF_IN_EN_ZL3_INFINAL2,		/* "�¿�"��ԡ���(ha_m����otituku_w)��
						   (�������������ʬ��ư���ޤ�) */
    
    DOUSA_IS_HANDDOWN_IN_EN_ZL3_INFINAL2,	/* "�԰�"��ԡ���(f_wait)�� */
    DOUSA_IS_SURPRISE_IN_EN_ZL3_INFINAL2,	/* "�ä�"��ԡ���(odo_wait)�� */
    DOUSA_IS_LOOKSWORD_IN_EN_ZL3_INFINAL2,	/* "������"��ԡ���(mousaigo)�� */
    
    DOUSA_IS_WATCH_IN_EN_ZL3_INFINAL2,		/* "�����"��ԡ���(uemuki_wait)�� */

    DOUSA_IS_AVERT_IN_EN_ZL3_INFINAL2,		/* "���ऱ��"��ԡ���
						   (kao_kakusu����uemuki_wait)�� */

    DOUSA_IS_MAGIC_IN_EN_ZL3_INFINAL2,		/* "��ˡȯ��"��ԡ���(bibibi)�� */
    DOUSA_IS_ENDMAGIC_IN_EN_ZL3_INFINAL2,	/* "��ˡ��λ"��ԡ���(f_wait)�� */
    DOUSA_IS_CALLSAGE_IN_EN_ZL3_INFINAL2,	/* "�����Ƥӳݤ�"��ԡ���(k_wait)�� */
    DOUSA_IS_SEAL_IN_EN_ZL3_INFINAL2,		/* "�����ݡ���"��ԡ���(syu_wait)�� */
    DOUSA_IS_DISHEART_IN_EN_ZL3_INFINAL2,	/* "�ϿԤ���"��ԡ���(gaku_wait)�� */
    
    DOUSA_IS_DISAPPEAR_IN_EN_ZL3_INFINAL2,	/* �����ʤꥼ������ä���(Actor_delete�Ƥ�) */
    
    TOTAL_DOUSA_IN_EN_ZL3_INFINAL2
};

/****************�����֥ե饰���****************/
#if 0
#define GET_ESCAPE_EVENT_STATE_IN_ZL3()	\
	Get_Event_Chk_Inf(9, 0x0080)		/* �����æ�Х����ॹ�����Ȥ����� */
#define SET_ESCAPE_EVENT_STATE_IN_ZL3()	\
	Set_Event_Chk_Inf(9, 0x0080)		/* �����æ�Х����ॹ�����Ȥ��� */
#else
#define GET_ESCAPE_EVENT_STATE_IN_ZL3(game_play_p)	\
	(Actor_Environment_sw_Check((game_play_p), 55) &&\
	 ( (game_play_p->scene_data_ID == GANON_DEMO) ||\
	   (game_play_p->scene_data_ID == GANON_FINAL) ||\
	   (game_play_p->scene_data_ID == GANON_SONOGO) ||\
	   (game_play_p->scene_data_ID == GANONTIKA_SONOGO) )\
	    )
#define SET_ESCAPE_EVENT_STATE_IN_ZL3(game_play_p)	\
	(Actor_Environment_sw_On((game_play_p), 55))
#endif
	    
#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif
