/* $Id: z_collision_param.h,v 2.1 1998-10-22 20:45:49+09 zelda Exp $ */
/*=============================================================================
 *
 * z_collision_param.h
 *
 * �ѥ�᡼���ǡ���
 *
 *
 *$Log: z_collision_param.h,v $
 *Revision 2.1  1998-10-22 20:45:49+09  zelda
 *�ңϣͽФ��С������(NTSC)
 *
 *Revision 1.81  1998/10/13 14:29:26  matutani
 *SPOT04��Ź�ξ�ν��λ�������
 *
 *Revision 1.80  1998-10-12 22:25:28+09  matutani
 *CL_OC_BIT2_AC_JNT_SPH_ALL_CHECK�ɲ�
 *
 *Revision 1.79  1998-10-11 01:23:30+09  tarukado
 **** empty log message ***
 *
 *Revision 1.78  1998-10-10 15:23:42+09  matutani
 *�����ץϥ�ޡ�
 *
 *Revision 1.77  1998-10-08 20:23:18+09  matutani
 **** empty log message ***
 *
 *Revision 1.76  1998-10-07 21:40:29+09  matutani
 **** empty log message ***
 *
 *Revision 1.75  1998-09-29 23:13:44+09  matutani
 *CLE_AT_SPL_DAIDMG_FIRE�ɲ�
 *
 *Revision 1.74  1998-09-24 19:36:17+09  matutani
 *CLE_AC_SPL_RTN_ELEC_PLAYER�ɲ�
 *
 *Revision 1.73  1998-09-24 15:52:32+09  matutani
 *CLE_MTRL_NO_SE�ɲ�
 *
 *Revision 1.72  1998-09-18 20:56:51+09  matutani
 **** empty log message ***
 *
 *Revision 1.71  1998-09-17 00:36:10+09  matutani
 **** empty log message ***
 *
 *Revision 1.70  1998-09-05 22:58:00+09  matutani
 *OC �饤��
 *
 *Revision 1.69  1998-08-31 23:10:55+09  matutani
 **** empty log message ***
 *
 *Revision 1.68  1998-07-09 15:01:22+09  matutani
 *�����ҥåȥޡ����б�
 *
 *Revision 1.67  1998-07-08 16:32:16+09  sumiyosi
 **** empty log message ***
 *
 *Revision 1.66  1998-06-12 20:10:44+09  umemiya
 *�Хȥ�ǡ����˸��ɲ�
 *
 *Revision 1.65  1998-06-08 11:50:36+09  tarukado
 **** empty log message ***
 *
 *Revision 1.64  1998-06-04 21:05:08+09  nisiwaki
 **** empty log message ***
 *
 *Revision 1.63  1998-06-03 22:25:39+09  matutani
 *������ȥҥåȥޥ���
 *
 *Revision 1.62  1998-06-02 17:34:22+09  matutani
 *�ҥåȥޡ�������̵��
 *
 *Revision 1.61  1998-06-02 11:32:29+09  matutani
 *cl_elem
 *AT�ؤΥҥåȾ���Ϣ��ػ�,�Хȥ�ǡ����׻��ػ�,��󥯥ҥåȻ�������ɶػ�
 *at_special
 *�����᡼���⡼�����򵯤���
 *
 *Revision 1.60  1998-05-28 19:41:53+09  matutani
 *�ϼ��̡��Ϥ���ȴ���ϣåӥå�
 *
 *Revision 1.59  1998-05-18 17:46:16+09  matutani
 *�������ɲ�
 *
 *Revision 1.58  1998-05-13 13:50:41+09  kuzuhara
 *����ޥ������ɲ�
 *
 *Revision 1.57  1998-05-13 11:40:08+09  matutani
 **** empty log message ***
 *
 *Revision 1.56  1998-05-06 17:09:04+09  tarukado
 **** empty log message ***
 *
 *Revision 1.55  1998/05/01 06:10:51  umemiya
 *�ޥ����z_collision_btl_tbl.c�����ư�ʳƸĿͤ�C�ե����������Ǥ���褦��
 *
 *Revision 1.54  1998-05-01 10:54:33+09  matutani
 *�����ȡʥ��ɥХ������ɲ�
 *
 *Revision 1.53  1998-04-29 15:46:21+09  matutani
 *�ޥ�������
 *
 *Revision 1.52  1998-04-29 15:28:45+09  matutani
 *�ޥ�������
 *
 *Revision 1.51  1998-04-29 15:00:55+09  matutani
 *�ץ쥤�䡼�Ȥ�OC�ҥåȻ�Ω�ĥӥå�
 *�ƥ����å��ޥ���
 *
 *Revision 1.50  1998-04-28 22:20:15+09  umemiya
 *��٥롧�Ǥ���ˡ��¿ʬ���סˤ������ˡ���ѹ�
 *
 *Revision 1.49  1998-04-28 20:41:55+09  umemiya
 *�Хȥ�ǡ����ѹ�
 *
 *Revision 1.48  1998-04-28 19:47:01+09  umemiya
 **** empty log message ***
 *
 *Revision 1.47  1998-04-28 19:45:32+09  umemiya
 *�Хȥ�ǡ������ѹ�
 *
 *Revision 1.46  1998-04-28 17:00:55+09  umemiya
 *�Хȥ�ǡ������ѹ�
 *
 *Revision 1.45  1998-04-28 14:11:25+09  matutani
 **** empty log message ***
 *
 *Revision 1.44  1998-04-28 11:25:24+09  matutani
 **** empty log message ***
 *
 *Revision 1.43  1998-04-28 10:40:29+09  matutani
 *�ǥ��μ� ��
 *
 *Revision 1.42  1998-04-23 22:32:00+09  matutani
 *��ž�ڤ�
 *
 *Revision 1.41  1998-04-23 22:31:30+09  matutani
 **** empty log message ***
 *
 *Revision 1.40  1998-04-21 19:20:44+09  matutani
 *�ŷ�ӥ�ӥ������Ф�
 *
 *Revision 1.39  1998-04-21 18:09:25+09  sumiyosi
 **** empty log message ***
 *
 *Revision 1.38  1998/04/18 11:15:23  matutani
 **** empty log message ***
 *
 *Revision 1.37  1998-04-18 21:15:08+10  matutani
 **** empty log message ***
 *
 *Revision 1.36  1998-04-18 21:14:20+10  matutani
 *CLE_AT_SPL_TW_FIRE, 
 *CLE_AT_SPL_TW_ICE,
 *
 *Revision 1.35  1998-04-08 23:46:19+10  matutani
 *����᡼���⡼�����򵯤���
 *
 * Revision 1.34  1998/04/06  05:32:37  matutani
 * CLE_AC_BIT_HOOK_PULL�ɲ�
 *
 * Revision 1.33  1998/04/04  14:09:04  matutani
 * *** empty log message ***
 *
 * Revision 1.32  1998/03/30  12:44:11  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.31  1998/03/30  06:46:01  matutani
 * *** empty log message ***
 *
 * Revision 1.30  1998/03/26  01:50:54  matutani
 * ��Ƥ���ʥѥ���ȴ���ˤΥӥåȥ������ɲ�
 *
 * Revision 1.29  1998/03/24  01:52:46  umemiya
 * CoCh_getPipeATType�ΥХ�����
 *
 * Revision 1.28  1998/03/24  01:50:56  umemiya
 * CoCh_getPipeATType�ΥХ�����
 *
 * Revision 1.27  1998/03/23  01:02:21  nisiwaki
 * *** empty log message ***
 *
 * Revision 1.26  1998/03/21  11:59:58  matutani
 * ɹ���ŷ�
 *
 * Revision 1.25  1998/03/18  03:00:15  ogawa
 * *** empty log message ***
 *
 * Revision 1.24  1998/03/09  13:37:47  matutani
 * �ϣå����å��ѹ�
 *
 * Revision 1.23  1998/03/09  04:32:14  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.22  1998/02/26  06:05:19  matutani
 * �ŷ��֤��ɲ�
 *
 * Revision 1.21  1998/02/21  10:51:36  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.20  1998/01/26  12:01:36  morita
 * CLE_ATC_BIT_ANY_ARROW �ɲ�
 *
 * Revision 1.19  1998/01/22  04:45:27  matutani
 * CLE_ATC_BIT_SHIELD���ɲ�
 *
 * Revision 1.18  1997/12/18  08:13:49  sumiyosi
 * CL_EN_LBL_TYPE�ɲ�->CL_EN_SW(�����륦������)
 *
 * Revision 1.17  1997/11/18  09:22:20  matutani
 * CoCh_SwrdGetMtrl()���顼
 *
 * Revision 1.16  1997/11/17  09:06:02  matutani
 * ���� CLE_MTRL_KANTSU ���ɲ�
 *
 * Revision 1.15  1997/11/14  14:27:46  iwawaki
 * *** empty log message ***
 *
 * Revision 1.14  1997/11/14  13:40:39  iwawaki
 * p���
 *
 * Revision 1.13  1997/11/14  11:35:46  matutani
 * *** empty log message ***
 *
 * Revision 1.12  1997/11/14  11:23:47  matutani
 * CoCh_ClObjSwrd_setAtType()�ɲ�
 *
 * Revision 1.11  1997/11/14  00:59:00  umemiya
 * Ũ��٥�ʥݥ����ǥ��ʥåġ��ɲ�
 *
 * Revision 1.10  1997/11/13  05:51:55  matutani
 * �ɲá����ꥢ��߽���
 *
 * Revision 1.9  1997/11/11  08:18:21  matutani
 * ��ֲ��ɲ�
 *
 * Revision 1.8  1997/11/10  13:56:01  matutani
 * *** empty log message ***
 *
 * Revision 1.7  1997/11/10  06:40:47  matutani
 * ������ʥӥåȡ��ʰ׵�Υ�׻��ˡ��Хȥ�ǡ�������
 *
 * Revision 1.6  1997/11/04  12:54:11  matutani
 * �ҥåȥޡ�������
 *
 * Revision 1.5  1997/10/31  07:51:49  matutani
 * CLE_MTRL_CORE�ɲ�
 *
 * Revision 1.4  1997/10/30  14:14:08  matutani
 * ����
 *
 * Revision 1.3  1997/10/30  07:59:30  matutani
 * *** empty log message ***
 *
 * Revision 1.2  1997/10/30  02:36:03  matutani
 * *** empty log message ***
 *
 * Revision 1.1  1997/10/29  13:52:13  matutani
 * Initial revision
 *
 *
 *===========================================================================*/

#ifndef INCLUDE_Z_COLLISION_PARAM_H
#define INCLUDE_Z_COLLISION_PARAM_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

/*==========================================================================
 *
 * ���ꥸ�������å���¤�� status�ӥå�
 *
 *=========================================================================*/
/*
 * �ǥե����
 */
#define CLCH_STATUS_DEFAULT 0
/*
 * ���ꥸ��������ɲäȥ��ꥢ�ζػߥӥå�
 * ��߻����ѥС�����󥳥ꥸ����ɲôؿ����ꡣ
 */
#define CLCH_STATUS_ALL_STOP_ADD_CLEAR (1<<0)


/*==========================================================================
 *
 * ClObj�ӥåȾ���
 *
 *=========================================================================*/

/*---------------------------------------------------------------------------
 *
 * at_bit�ӥåȾ���
 *
 *--------------------------------------------------------------------------*/
/* �ǥե���� */
#define CL_AT_BIT_NONE 0
/* ����Ƚ�ꤢ��:���ʤ� */
#define CL_AT_BIT_CHECK (1<<0)
/* �������ä���:���������� */
#define CL_AT_BIT_HIT (1<<1)
/* ��˥ҥå�:�����ǤϽ����̤����Τ˥ҥåȤ�������ҥåȥӥåȤ�Ω�� */
#define CL_AT_BIT_SHIELD_HIT (1<<2)
/* ����Լ��̥ӥå�:�ץ쥤�䡼 */
#define CL_AT_BIT_GRP_PLAYER (1<<3)
/* ����Լ��̥ӥå�:Ũ */
#define CL_AT_BIT_GRP_ENEMY (1<<4)
/* ����Լ��̥ӥå�:����¾ */
#define CL_AT_BIT_GRP_OTHER (1<<5)
/* ��ƤΥ��롼�� */
#define CL_AT_BIT_GRP_ALL (CL_AT_BIT_GRP_PLAYER|CL_AT_BIT_GRP_ENEMY| \
CL_AT_BIT_GRP_OTHER)
/* ƱActor��AC�ˤ�ҥåȵ���(AT��Ʊ��AC�ˤϥҥåȤ��ʤ�) */
#define CL_AT_BIT_SELFAT (1<<6)

/*----------------------------------------------------------------------------
 *
 * ac_bit�ӥåȾ���
 *
 *---------------------------------------------------------------------------*/
/* �ǥե���� */
#define CL_AC_BIT_NONE 0
/* ������Ф�������Ƚ�ꤢ�� �Τʤ� */
#define CL_AC_BIT_CHECK (1<<0)
/* �������ä��� */
#define CL_AC_BIT_HIT (1<<1)
/* ����AC����Ǥ��뤫��̵�����ǥե���Ȥϥ��� */
#define CL_AC_BIT_SHIELD (1<<2)
/* ����ԤȤ����оݤȤ�����̥ӥå� (1<<3):�ץ쥤�䡼 */
#define CL_AC_BIT_GRP_PLAYER CL_AT_BIT_GRP_PLAYER
/* ����ԤȤ����оݤȤ������ӥå� (1<<4):Ũ */
#define CL_AC_BIT_GRP_ENEMY CL_AT_BIT_GRP_ENEMY
/* ����ԤȤ����оݤȤ������ӥå� (1<<5):����¾ */
#define CL_AC_BIT_GRP_OTHER CL_AT_BIT_GRP_OTHER
/* ���᡼���׻������򤷤ʤ� */
#define CL_AC_BIT_AUTO_DMG_CALC_OFF (1<<6)
/* �ɸ������ӥå�:�ä���������(�Ȥˤ��������ҥåȤ����Ȥ�Ω�ġ� */
#define CL_AC_BIT_SHIELD_SUCCESS (1<<7)
    
/*----------------------------------------------------------------------------
 *
 * oc_bit�ӥåȾ���
 *
 *---------------------------------------------------------------------------*/
/* �ǥե���� */
#define CL_OC_BIT_NONE 0
/* OBJ����Ƚ�ꤢ��:ŨƱ�Τʤɤ��ܿ������å� */
#define CL_OC_BIT_CHECK (1<<0)
/* OBJ���ܿ������ä� */
#define CL_OC_BIT_HIT (1<<1)
/* OBJ��������Ԥ�ʤ�(�����å��ϹԤ��� */
#define CL_OC_BIT_NO_POS_CORRECT (1<<2)
/* ���ꥸ����оݼ��̥ӥå� (1<<3):�ץ쥤�䡼 */
#define CL_OC_BIT_GRP_PLAYER CL_AT_BIT_GRP_PLAYER
/* ���ꥸ����оݼ��̥ӥå� (1<<4):Ũ */
#define CL_OC_BIT_GRP_ENEMY CL_AT_BIT_GRP_ENEMY
/* ���ꥸ����оݼ��̥ӥå� (1<<5):����¾ */
#define CL_OC_BIT_GRP_OTHER CL_AT_BIT_GRP_OTHER
/* ��ƤΥ��롼�� */
#define CL_OC_BIT_GRP_ALL (CL_OC_BIT_GRP_PLAYER|CL_OC_BIT_GRP_ENEMY| \
CL_OC_BIT_GRP_OTHER)
/*
 * �ü�������:�ץ쥤�䡼�Υ��ԡ��ɤ򣰤ˤ��ơ�
 * ��������Ƥ�ץ쥤�䡼�����ä���
 */
#define CL_OC_BIT_SPL1 (1<<6)

/*-----------------------------------------------------------------------------
 *
 * oc_bit2�ӥåȾ���
 *
 *---------------------------------------------------------------------------*/
/* ���ꥸ��󼫸ʼ��̥ӥå� */
/* �ǥե���� */
#define CL_OC_BIT2_NONE 0
/* �ץ쥤�䡼��OC�ҥåȤ����� ���ΥӥåȤ�Ω�� */
#define CL_OC_BIT2_PLAYER_HIT (1<<0)
/* ����oc���ϥӥå� */
#define CL_OC_BIT2_HORSE (1<<1)
/* ����oc���Ϥ���ȴ�� */
#define CL_OC_BIT2_HORSE_THROUGH (1<<2)
/* �ץ쥤�䡼 (1<<3) */
#define CL_OC_BIT2_SELF_PLAYER CL_AT_BIT_GRP_PLAYER
/* Ũ (1<<4) */
#define CL_OC_BIT2_SELF_ENEMY CL_AT_BIT_GRP_ENEMY
/* ����¾ (1<<5) */
#define CL_OC_BIT2_SELF_OTHER CL_AT_BIT_GRP_OTHER
/*
 * ���å����å��Ǵ�������ƥ����å����롣
 * �����å����Ǥ��ڤ�ػ�
 */
#define CL_OC_BIT2_AC_JNT_SPH_ALL_CHECK (1<<6)
/* (1<<7) */

/*===========================================================================
 *
 * ClObjElem��
 * ������������Ǥδ��ܹ�¤��
 * ��⡧�����������Ĥ���Υѡ��Ĥ��Ф��������Ԥ������Ȥ��д����ξ��
 * �Ƶ头�Ȥ˥ǡ�������ġ�
 *
 *==========================================================================*/
/*----------------------------------------------------------------------------
 *
 * �����٥�
 *
 *---------------------------------------------------------------------------*/
typedef enum {
    CLE_MTRL_NONE, /* �ä�̵�� */
    CLE_MTRL_SKIN, /* ȩ */
    CLE_MTRL_METAL, /* ��° */
    CLE_MTRL_CORE, /* �޽� */
    CLE_MTRL_KANTSU, /* ���� */
    CLE_MTRL_NO_SE, /* �����ޤ��� */
    CLE_MTRL_LAST_INDEX /* ��٥�� */
} CLE_MTRL_LBL_TYPE;

/*--------------------------------------------------------------------------
 *
 * ���⥿����/�ޥ����ӥå�
 * �����Ǥ��ΥӥåȤ��ѿ����ݻ�����Τʤ顢����bit���ΰ��ɬ�פȤ���Τ�,
 * unsigned long��ȤäƤ���������
 *
 *-------------------------------------------------------------------------*/
/*** �ץ쥤�䡼 ***/
#define CLE_ATC_BIT_DEKU_NUT (1<<0) /* �ǥ��μ� */
#define CLE_ATC_BIT_DEKU_ROD (1<<1) /* �ǥ����� */
#define CLE_ATC_BIT_SLINGSHOT (1<<2) /* �ѥ��� */
#define CLE_ATC_BIT_BOMB (1<<3) /* ���� */
#define CLE_ATC_BIT_BOOMERANG (1<<4) /* �֡����� */

#define CLE_ATC_BIT_FAIRY_ARROW (1<<5) /* �����ε��� */
#define CLE_ATC_BIT_HAMMER (1<<6) /* �ϥ�ޡ� */
#define CLE_ATC_BIT_HOOK_SHOT (1<<7) /* �եå�����å� */
#define CLE_ATC_BIT_KNIFE (1<<8) /* �ʥ��� */
#define CLE_ATC_BIT_MASTER_SWRD (1<<9) /* �ޥ����������� */

#define CLE_ATC_BIT_GIANT_KNIFE (1<<10) /* ��ͤΥʥ��� */
#define CLE_ATC_BIT_FIRE_ARROW (1<<11) /* ����� */
#define CLE_ATC_BIT_ICE_ARROW (1<<12) /* ɹ���� */
#define CLE_ATC_BIT_LIGHT_ARROW (1<<13) /* ������ */
#define CLE_ATC_BIT_WIND_ARROW (1<<14) /* ������ */
    
#define CLE_ATC_BIT_SOUL_ARROW (1<<15) /* ������ */
#define CLE_ATC_BIT_DARK_ARROW (1<<16) /* �Ǥ��� */
#define CLE_ATC_BIT_FIRE_MAGIC (1<<17) /* �����ˡ */
#define CLE_ATC_BIT_ICE_MAGIC (1<<18) /* ɹ����ˡ */
#define CLE_ATC_BIT_LIGHT_MAGIC (1<<19) /* ������ˡ */

#define CLE_ATC_BIT_SHIELD (1<<20) /* �� */
#define CLE_ATC_BIT_MIR_RAY (1<<21) /* ���ν� */

#define CLE_ATC_BIT_ROLLING_KIRU_KF (1<<22) /* ��ž����:�ʥ��� */
#define CLE_ATC_BIT_ROLLING_KIRU_LS (1<<23) /* ��ž����:��󥰥����� */
#define CLE_ATC_BIT_ROLLING_KIRU_MS (1<<24) /* ��ž����:�ޥ����������� */

#define CLE_ATC_BIT_ROLLING_KIRU_DKF (1<<25) /* ���ž�ڤ�:�ʥ��� */
#define CLE_ATC_BIT_ROLLING_KIRU_DLS (1<<26) /* ���ž�ڤ�:��󥰥����� */
#define CLE_ATC_BIT_ROLLING_KIRU_DMS (1<<27) /* ���ž�ڤ�:�ޥ����������� */

#define CLE_ATC_BIT_DARK_MAGIC (1<<28) 	/* �Ǥ���ˡ */
#define CLE_ATC_BIT_PL_NON_DEF (1<<29) 	/* �ץ쥤�䡼��������ǽ */
#define CLE_ATC_BIT_JUMP_HAMMER (1<<30) /* �����ץϥ�ޡ� */

/*
 * �����å��ѥޥ���
 */
/* ��ž���� */
#define CLE_ATC_BIT_ROLLING_KIRU (CLE_ATC_BIT_ROLLING_KIRU_KF|CLE_ATC_BIT_ROLLING_KIRU_LS|CLE_ATC_BIT_ROLLING_KIRU_MS)  

/* ���ž�ڤ� */
#define CLE_ATC_BIT_ROLLING_KIRU_D (CLE_ATC_BIT_ROLLING_KIRU_DKF|CLE_ATC_BIT_ROLLING_KIRU_DLS|CLE_ATC_BIT_ROLLING_KIRU_DMS)

/*  "���Ǥ⤢��"�Ǥ�����CLE_ATC_BIT_SHIELD,CLE_ATC_BIT_MIR_RAY ��ʤ� */
#define CLE_ATC_BIT_ANY_TYPE (0xFFFFFFFF & ~(CLE_ATC_BIT_SHIELD | CLE_ATC_BIT_MIR_RAY))

/* ���٤Ƥ��� */
#define CLE_ATC_BIT_ANY_ARROW (CLE_ATC_BIT_FAIRY_ARROW | CLE_ATC_BIT_FIRE_ARROW | CLE_ATC_BIT_ICE_ARROW | CLE_ATC_BIT_LIGHT_ARROW | CLE_ATC_BIT_WIND_ARROW | CLE_ATC_BIT_SOUL_ARROW | CLE_ATC_BIT_DARK_ARROW | CLE_ATC_BIT_SLINGSHOT)

/* ��Ƥ���ʳ� */
#define CLE_ATC_BIT_NO_ARROW (0xFFFFFFFF & ~CLE_ATC_BIT_ANY_ARROW)

/* ��Ƥ���ʥѥ���ȴ����*/
#define CLE_ATC_BIT_ANY_ARROW_NO_SLSH (CLE_ATC_BIT_FAIRY_ARROW | CLE_ATC_BIT_FIRE_ARROW | CLE_ATC_BIT_ICE_ARROW | CLE_ATC_BIT_LIGHT_ARROW | CLE_ATC_BIT_WIND_ARROW | CLE_ATC_BIT_SOUL_ARROW | CLE_ATC_BIT_DARK_ARROW)

/* ���٤Ƥη� */
#define CLE_ATC_BIT_ANY_SWORD (CLE_ATC_BIT_DEKU_ROD | CLE_ATC_BIT_KNIFE | CLE_ATC_BIT_MASTER_SWRD | CLE_ATC_BIT_GIANT_KNIFE)

/*===========================================================================
 *
 * CleAtBtlInfo�ѥ�٥�
 *
 *==========================================================================*/
/*---------------------------------------------------------------------------
 *
 * AT�ü�ǡ���
 *
 *--------------------------------------------------------------------------*/
typedef enum cle_at_specail_type {
    CLE_AT_SPL_NONE, /* �ʤ� */
    CLE_AT_SPL_FIRE, /* �� */
    CLE_AT_SPL_ICE, /* ɹ */
    CLE_AT_SPL_ELEC, /* �ŷ� */
    CLE_AT_SPL_DAIDMG, /* ����᡼���⡼�����򵯤��� */
    CLE_AT_SPL_TW_FIRE, /* TW�й��� */
    CLE_AT_SPL_TW_ICE, /* TWɹ���� */
    CLE_AT_SPL_ELEC_DAIDMG, /* �ŷ�ӥ�ӥ�,�դäȤФ� */
    CLE_AT_SPL_SHOUDMG, /* �����᡼���⡼�����򵯤��� */
    CLE_AT_SPL_DAIDMG_FIRE, /* ����᡼���Ȳ� */
    CLE_AT_SPL_LAST_INDEX
} CLE_AT_SPECIAL_TYPE;

/*===========================================================================
 *
 * CleAcBtlInfo�ѥ�٥�
 *
 *=========================================================================*/
/*---------------------------------------------------------------------------
 *
 * AC�ü�ǡ���
 *
 *-------------------------------------------------------------------------*/
typedef enum cle_ac_specail_type {
    CLE_AC_SPL_NONE, /* ̵�� */
    CLE_AC_SPL_RTN_ELEC, /* �ŷ��֤� */
    CLE_AC_SPL_RTN_ELEC_PLAYER, /* �ץ쥤�䡼�ȥҥåȤ����Ȥ��Τ��ŷ��֤� */
    CLE_AC_SPL_LAST_INDEX
} CLE_AC_SPECIAL_TYPE;

/*=========================================================================
 *
 * �������ǥӥåȾ���ӥå�����
 * ClObjElem��
 *
 *=========================================================================*/
/*
 * AT�ӥåȾ���
 *
 * 76543210
 * |||| ||+---- CLE_AT_BIT_CHECK
 * |||| |+---- CLE_AT_BIT_HIT
 * |||| +--- CLE_AT_BIT_SWRD_NEAR
 * |||+---  AT���åҥåȥޡ���
 * ||+---- �ҥåȥޡ��� AT���� ���� 
 * |+--- �ҥåȥޡ���ɽ���Ѥ� (work)
 * +--- CLE_AT_BIT_SWRD_ROOT_NEAR
 */
/* ����̵��:�ǥե���� */
#define CLE_AT_BIT_NONE 0
/* ����Ƚ�꤬���뤫 */
#define CLE_AT_BIT_CHECK (1<<0)
/* ̿�椷�����ɤ��� */
#define CLE_AT_BIT_HIT (1<<1)
/*
 * ����̿��Ƚ���prev�������˶ᤤ̾������ͥ�衣
 */
#define CLE_AT_BIT_SWRD_NEAR (1<<2)
/* AT���åҥåȥޡ��� */
/*
 * ���:AC�Υҥåȥޡ��������å����פ�ʪ�����ä����ˤɤΥҥåȥޡ�����
 * �Ф���������ꤹ��
 * 76543210
 * ---**--- 4,3���եȤ���������
 */
/* ��ȥޥ��� */
#define CLE_AT_AR(x, y) (((x) << 4) | ((y) << 3))
/* PASS�ޥ��� */
#define CLE_AT_AR_HM_PASS_MASK CLE_AT_AR(1, 1)
/* �в֤�Ф�:����¦����°��Фʤ���������ˤʤ�ޤ���(��°��) */
#define CLE_AT_AR_HM_SPARK CLE_AT_AR(0, 0)
/* ���� */
#define CLE_AT_AR_HM_FLASH CLE_AT_AR(0, 1)
/* ��:�Ǥ������ʤɡ�����䤷���ޡ��� */
#define CLE_AT_AR_HM_SMOKE CLE_AT_AR(1, 0)
/* �ʤ� */
#define CLE_AT_AR_HM_NONE CLE_AT_AR(1, 1)

/* AT�ҥåȥޡ�������:���åҥåȥޡ���ͥ��ػ� */
#define CLE_AT_HMC_NO_AR (1<<5)
/* �ҥåȥޡ���ɽ���Ѥ� */
#define CLE_AT_HMC_DISP_END (1<<6)
/* ����̿��Ƚ���prev��root�˶ᤤ����ͥ�� */
#define CLE_AT_BIT_SWRD_ROOT_NEAR (1<<7)

/*
 * AC�ӥåȾ���
 */
/* ����̵��:�ǥե���� */
#define CLE_AC_BIT_NONE 0
/* ���ꤢ�� */
#define CLE_AC_BIT_CHECK (1<<0)
/* ���꤬���ä� */
#define CLE_AC_BIT_HIT (1<<1)
/* �եå�����åȤǰ����� */
#define CLE_AC_BIT_HOOK_PULL (1<<2)
/* AT�ؤΥҥåȾ���Ϣ��ػ� */
#define CLE_AC_BIT_NO_AT_HIT_INFO (1<<3)
/* �Хȥ�ǡ����׻��ػ�:���᡼���׻� */
#define CLE_AC_BIT_NO_BTL_CALC (1<<4)
/* ��󥯥ҥåȻ�������ɶػ� */
#define CLE_AC_BIT_NO_LINK_HIT_SOUND (1<<5)
/* �ҥåȥޡ�������̵�� */
#define CLE_AC_BIT_NO_HM (1<<6)
/* �ҥåȥޡ���ɽ���Ԥ� */
#define CLE_AC_BIT_HM_WAIT (1<<7)

/*
 * �̲�ޥ���
 * ������Υ����å��ϤǤ��뤬������̲᤹�롣
 */
#define CLE_AC_BIT_THROUGH \
(CLE_AC_BIT_NO_AT_HIT_INFO|CLE_AC_BIT_NO_BTL_CALC|CLE_AC_BIT_NO_LINK_HIT_SOUND|CLE_AC_BIT_NO_HM)
    
/*
 * OBJ�ӥåȾ���
 */
/* �ǥե���� */
#define CLE_OC_BIT_NONE 0
/* ¾��OBJ�ӥåȾ���Ω�äƤ����Τȥ��ꥸ�������å� */
#define CLE_OC_BIT_CHECK (1<<0)
/* OBJ���ܿ����� */
#define CLE_OC_BIT_HIT (1<<1)

/*=========================================================================
 *
 * ClOCLine��Ϣ
 *
 *========================================================================*/
/* status �ӥå� */
/* �ǥե���� */
#define CL_OC_LINE_STTS_DEFAULT 0
/* �� */
#define CL_OC_LINE_STTS_CROSS (1<<0)
    
/*=========================================================================
 *
 * Status����ѥ�᡼��;
 *
 *========================================================================*/
/*-------------------------------------------------------------------------
 *
 * hit�ޡ����ѥ�᡼��
 * ��ο����ҥåȥޡ���
 * z_collision_check.c ��hitmark_function�Ȥ�������äƤ���������
 *
 *------------------------------------------------------------------------*/
typedef enum {
    CL_HM_BB_HM1, /* �Ĥ���,�ҥåȥޡ����� */
    CL_HM_HM2, /* �ҥåȥޡ����� */
    CL_HM_GB_HM2, /* �Фη�,�ҥåȥޡ����� */
    CL_HM_HM1, /* �ҥåȥޡ�����:����ǥե���� */
    CL_HM_WB, /* ��줷�֤� */
    CL_HM_HM3, /* �ҥåȥޡ����� */
    CL_HM_GB_HM1, /* �Фη�,�ҥåȥޡ����� */
    CL_HM_BE_HM1, /* ��������,�ҥåȥޡ�����*/
    CL_HM_BB_HM3, /* �Ĥ���,�ҥåȥޡ����� */
    CL_HM_SH, /* ��°��:for ���å����� */
    CL_HM_NONE, /* �Ф��ʤ�:�ǥХå��Ѥޤ����ü������ */
    CL_HM_WOOD, /* ��:for ���å����� */
    CL_HM_SHELL, /* ��,��,����,�ó�:for ���å����� */
    CL_HM_HM4, /* ��°����,�ܤ��á� */
    CL_HM_LAST_INDEX
} CL_HM_TYPE;

/*----------------------------------------------------------------------------
 *
 * ��շ�(�٤������ҡ�
 *
 *--------------------------------------------------------------------------*/
typedef enum {
    CL_BLOOD_NONE, /* ��̵�� */
    CL_BLOOD_BLUE, /* �Ĥ��� */
    CL_BLOOD_GREEN, /* �Фη� */
    CL_BLOOD_WHITE, /* �򤤷� */
    CL_BLOOD_BREAK, /* ��ǤϤʤ��������� */
    CL_BLOOD_RED, /* �֤���:����Ȥ�ʤ��� */
    CL_BLOOD_LAST_INDEX
} CL_BLOOD_TYPE;

/*---------------------------------------------------------------------------
 *
 * �ҥåȥޡ���
 *
 *-------------------------------------------------------------------------*/
typedef enum {
    CL_LBL_HM1, /* �ҥåȥޡ����� */
    CL_LBL_HM2, /*             �� */
    CL_LBL_HM3, /*             �� */
    CL_LBL_HM_SH, /* ����� */
    CL_LBL_HM4, /* ��ܤܤ��á� */
    CL_LBL_HM_LAST_INDEX
} CL_LBL_HM_TYPE;

/*============================================================================
 *
 * �Хȥ�ǡ���
 * Ũȿ���ǡ�����٥�:
 * Ũ��ͭ���ü�����ξ�硢CL_BTD_WORK_0������Ѥ��Ʋ�������
 * ���ѤǤ���Ȼפ����Τ�CL_BTD_WORK_11����缡�ä��ơ�
 * ��������٥�򤭤äƲ�������
 * ������������WORK�Υ�٥��ï����Ѥ��Ƥ��ʤ����Ȥ��ǧ���Ʋ�������
 *
 *===========================================================================*/
typedef enum {
    CL_BTD_NONE,			/* ̵�� */
    CL_BTD_STOP,			/* �ߤޤ� */
    CL_BTD_FIRE,			/* ǳ���� */
    CL_BTD_ICE,				/* ��� */
    CL_BTD_LIGHT,			/* �� */
    CL_BTD_WORK_10,
    CL_BTD_WORK_9,
    CL_BTD_WORK_8,
    CL_BTD_WORK_7,
    CL_BTD_WORK_6,
    CL_BTD_WORK_5,
    CL_BTD_WORK_4,
    CL_BTD_WORK_3,
    CL_BTD_WORK_2,
    CL_BTD_WORK_1,
    CL_BTD_WORK_0,
    CL_BTD_LAST_INDEX			/* ����ʾ����䤵�ʤ����� */
} CL_BTD_TYPE;

#define NON(x) ((CL_BTD_NONE << 4) | x)
#define STP(x) ((CL_BTD_STOP << 4) | x)
#define FIR(x) ((CL_BTD_FIRE << 4) | x)
#define ICE(x) ((CL_BTD_ICE << 4) | x)
#define LIG(x) ((CL_BTD_LIGHT << 4) | x)
#define W10(x) ((CL_BTD_WORK_10 << 4) | x)
#define W09(x) ((CL_BTD_WORK_9 << 4) | x)
#define W08(x) ((CL_BTD_WORK_8 << 4) | x)
#define W07(x) ((CL_BTD_WORK_7 << 4) | x)
#define W06(x) ((CL_BTD_WORK_6 << 4) | x)
#define W05(x) ((CL_BTD_WORK_5 << 4) | x)
#define W04(x) ((CL_BTD_WORK_4 << 4) | x)
#define W03(x) ((CL_BTD_WORK_3 << 4) | x)
#define W02(x) ((CL_BTD_WORK_2 << 4) | x)
#define W01(x) ((CL_BTD_WORK_1 << 4) | x)
#define W00(x) ((CL_BTD_WORK_0 << 4) | x)

#if 0
/*============================================================================
 *
 * �Хȥ�ǡ���
 * Ũȿ���ǡ�����٥�:���᡼�����ü�����ξ��,��������٥�򤭤äƲ�������
 *
 *===========================================================================*/
typedef enum {
    CL_BTD_NONE = 0, /* ̵�� */
    CL_BTD_MAX_DMG = 20, /* ���᡼���ޥå����� */
    CL_BTD_STOP, /* �ߤޤ� */
    CL_BTD_KO, /* KO */
    CL_BTD_FADE_OUT, /* �ä��� */
    CL_BTD_KOKERU, /* ������ */
    CL_BTD_SHRINK, /* ���ܤ� */
    CL_BTD_ROT, /* ��ž */
    CL_BTD_DROP, /* � */
    CL_BTD_BLOCK, /* �֥�å� */
    CL_BTD_RUN, /* ƨ���� */
    CL_BTD_LAST_INDEX
} CL_BTD_TYPE;
#endif

/*============================================================================
 *
 * Ũ��٥�
 * z_collision_btl_tbl.c�ΥХȥ�ǡ����ȴ�Ϣ������;����
 *
 *==========================================================================*/
typedef enum {
    CL_EN_DEKUBABA,		/* �ǥ��Х�		*/
    CL_EN_BIG_DEKUBABA,		/* �ӥå��ǥ��Х�	*/
    CL_EN_ST,			/* ����������		*/
    CL_EN_COGOMA,		/* ��������		*/
    CL_EN_DODOJR,		/* �ɥɥ�Jr		*/
    /* 5 */

    CL_EN_FIREFLY,		/* �ե����䡼�ե饤	*/
    CL_EN_REEBA,		/* �꡼��		*/
    CL_EN_WALLMAS,		/* ��������ޥ�����	*/
    CL_EN_OKUTA_ROCK,		/* ��������å�		*/
    CL_EN_BUBBLE,		/* ˢ			*/

    /* 10 */
    
    CL_EN_BILI,			/* �ӥ�			*/
    CL_EN_HORSE,		/* ���Ϥ���ʥƥ��ȡ�	*/
    CL_EN_POH,			/* �ݥ�			*/
    CL_EN_DEKUNUTS,		/* �ǥ��ʥå�		*/
    CL_EN_SW,			/* �����륦������	*/

    /* 15 */
    
    CL_EN_FD,			/* �ե쥤����󥵡�	*/
    CL_EN_FW,			/* �ե쥤�०��������	*/
    CL_EN_NPC2,			/* �ΣУã�		*/
    CL_EN_BB,			/* ˢ			*/
    CL_EN_VALI,			/* �Х�			*/

    /* 20 */

    CL_EN_EIYER,		/* �����䡼		*/
    CL_EN_BIGOKUTA,		/* ����������		*/
    CL_EN_NPC,			/* �ʹ�			*/

    /* 25 */
    
    /* 30 */

    
    /* z_collision_btl_tbl.c���������䤷�Ƥ�������:������Ǥ� */
    /*
     * ���ɥХ���:����Υե��������Ͽ���뤳�Ȥ����ɤ��ʾ��䡢
     * ���Υե������z_collision_btl_tbl.c������ʤ����ʤ�,
     * �Хȥ�ǡ������Actor��.c�ե������ƥ��������ι�¤�Ρ�
     * �����ʥߥå����Ѥ���ޤ��ˤ��ΰ��Ĥ��äƥݥ��󥿡����Ϥ�
     * ��Ʊ������������ޤ���(BtlData�ι�¤�Τ��Ѳ��������κ��
     * �����Ѥʲ�ǽ���Ϥ���ޤ�����
     */
    
    CL_EN_LAST_INDEX		/* ��٥��(�ʤ���	*/
} CL_EN_LBL_TYPE;
#define CL_EN_NONE CL_EN_LAST_INDEX

/*-----------------------------------------------------------------------------
 *
 * �����å��ޥ���
 * Check Macros
 *
 *---------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
 *
 * �ƥ�����AT,AC,OC�ҥåȥ����å��ޥ���
 *
 * ������ClObjx = ClObjPipe, ClObjTris,...
 *
 * ���Υǡ����Τɤ줫���ҥåȤ������ɤ����ΥӥåȤ�����å���
 *
 *--------------------------------------------------------------------------*/
#define CollisionCheck_ClObjxATHit(x) \
(((x).cl_obj.at_bit & CL_AT_BIT_HIT) != 0)

#define CC_ATHIT(x) CollisionCheck_ClObjxATHit(x)
    
#define CollisionCheck_ClObjxACHit(x) \
    (((x).cl_obj.ac_bit & CL_AC_BIT_HIT) != 0)

#define CC_ACHit(x) CollisionCheck_ClObjxACHit(x)
    
#define CollisionCheck_ClObjxOCHit(x) \
    (((x).cl_obj.oc_bit & CL_OC_BIT_HIT) != 0)

#define CC_OCHit(x) CollisionCheck_ClObjxOCHit(x)

/*--- �ץ쥤�䡼�Ȥ�OC�ҥå�:OC�μ��ʥ��롼�׻��꤬�ץ쥤�䡼�ȥҥå� ---*/
#define CC_OCPlayerHit(x) \
    (((x).cl_obj.oc_bit2 & CL_OC_BIT2_PLAYER_HIT) != 0)

/*---------------------------------------------------------------------------
 *
 * ���륨����Ȥ˥ҥåȤ�������
 *
 *-------------------------------------------------------------------------*/
    
/* �����AT */
#define CC_JntSphElemATHit(x, i) \
    ((x).elem_tbl[(i)].cl_elem.at_bit & CLE_AT_BIT_HIT)
  
/* �����AC */
#define CC_JntSphElemACHit(x, i) \
    ((x).elem_tbl[(i)].cl_elem.ac_bit & CLE_AC_BIT_HIT)
    
/* �����OC */
#define CC_JntSphElemOCHit(x, i) \
    ((x).elem_tbl[(i)].cl_elem.oc_bit & CLE_OC_BIT_HIT)
    
/*----------------------------------------------------------------------------
 *
 * ���륨����Ȥ˥ҥåȤ���AT�Υ����ץӥåȾ���������
 * ���Υ�����ȤΥҥåȥ����å��򤷤Ƥ����Ʋ�������
 * ��⡧
 * ac_hit_elem��NULL��̵�����Ȥϳ�ǧ���Ƥޤ���
 *
 *--------------------------------------------------------------------------*/
/*
 * ClObjJntSph *pjs: �����ǡ����ؤΥݥ��󥿡�
 * int index : ��ǡ����ؤΥ���ǥå���
 */
#define CoCh_getJntSphATType(pjs, index) \
    ((pjs)->elem_tbl[(index)].cl_elem.ac_hit_elem->at_btl_info.at_type)

#define CC_getJntSphATType(pjs, index) CoCh_getJntSphATType(pjs, index)
    
/*
 * ClObjPipe *ppipe: �ѥ��׾���ؤΥݥ��󥿡�
 */
#define CoCh_getPipeATType(ppipe) \
    ((ppipe)->cl_elem.ac_hit_elem->at_btl_info.at_type)

#define CC_getPipeATType(ppipe) CoCh_getPipeATType(ppipe)

/*
 * ClObjTris *ptris:���ѷ�����ؤΥݥ��󥿡�
 * int index : ���ѷ��ǡ������ǤؤΥݥ��󥿡�
 */
#define CoCh_getTrisATType(ptris, index) \
    ((ptris)->elem_tbl[(index)].cl_elem.ac_hit_elem->at_btl_info.at_type)

#define CC_getTrisATType(ptris, index) CoCh_getTrisATType(ptris, index)
    
/*
 * ClObjSwrd *pswrd:������ؤΥݥ��󥿡�
 */
#define CoCh_getSwrdATType(pswrd) \
    ((pswrd)->cl_elem.ac_hit_elem->at_btl_info.at_type)

#define CC_getSwrdATType(pswrd) CoCh_getSwrdATType(pswrd)

/*--------------------------------------------------------------------------
 *
 * ��˥ҥåȤ������ɤ�����
 *
 * ������ClObjx = ClObjPipe, ClObjTris,...
 *
 *--------------------------------------------------------------------------*/
       
#define CoCh_ClObjxATShieldHit(x) \
    (((x).cl_obj.at_bit & CL_AT_BIT_SHIELD_HIT) != 0)

#define CC_ATShieldHit(x) CoCh_ClObjxATShieldHit(x)

/*---------------------------------------------------------------------------
 *
 * ����ɸ椷�����ɤ�����
 *
 *  ������ClObjx = ClObjPipe, ClObjTris,...
 *
 *-------------------------------------------------------------------------*/
#define CoCh_ClObjxACShieldSuccess(x) \
    (((x).cl_obj.ac_bit & CL_AC_BIT_SHIELD_SUCCESS) != 0)

#define CC_ACShieldSuccess(x) CoCh_ClObjxACShieldSuccess(x)
    
/*----------------------------------------------------------------------------
 *
 * ����¤�ΤΥӥåȥ����ץ��å�
 * ��⡧clobjswrd ClObjSwrd
 *       at_type ���⥿���ץӥå�
 *
 *--------------------------------------------------------------------------*/
#define CoCh_ClObjSwrd_setAtType(clobjswrd, x) \
    ((clobjswrd).cl_elem.at_btl_info.at_type = (x))

#define CC_ClObjSwrd_setAtType(clobjswrd, x) \
    CoCh_ClObjSwrd_setAtType(clobjswrd, x)
    
/*----------------------------------------------------------------------------
 *
 * ���륨����Ȥ˥ҥåȤ����ޥƥꥢ��������
 * ���Υ�����ȤΥҥåȥ����å��򤷤Ƥ����Ʋ�������
 * ��⡧
 * ac_hit_elem��NULL��̵�����Ȥϳ�ǧ���Ƥޤ���
 *
 *--------------------------------------------------------------------------*/
/*
 * ClObjJntSph *pjs: �����ǡ����ؤΥݥ��󥿡�
 * int index : ��ǡ����ؤΥ���ǥå���
 */
#define CoCh_JntSphGetMtrl(pjs, index) \
    ((pjs)->elem_tbl[(index)].cl_elem.ac_hit_elem->material)

#define CC_JntSphGetMtrl(pjs, index) CoCh_JntSphGetMtrl(pjs, index)
    
/*
 * ClObjPipe *ppipe: �ѥ��׾���ؤΥݥ��󥿡�
 */
#define CoCh_PipeGetMtrl(ppipe) \
    ((ppipe)->cl_elem.ac_hit_elem->material)

#define CC_PipeGetMtrl(ppipe) CoCh_PipeGetMtrl(ppipe)

/*
 * ClObjTris *ptris:���ѷ�����ؤΥݥ��󥿡�
 * int index : ���ѷ��ǡ������ǤؤΥݥ��󥿡�
 */
#define CoCh_TrisGetMtrl(ptris, index) \
    ((ptris)->elem_tbl[(index)].cl_elem.ac_hit_elem->material)

#define CC_TrisGetMtrl(ptris, index) CoCh_TrisGetMtrl(ptris, index)
    
/*
 * ClObjSwrd *pswrd:������ؤΥݥ��󥿡�
 */
#define CoCh_SwrdGetMtrl(pswrd) \
    ((pswrd)->cl_elem.at_hit_elem->material)

#define CC_SwrdGetMtrl(pswrd) CoCh_SwrdGetMtrl(pswrd)

/*============================================================================
 *
 * OC�饤���ѥޥ���
 *
 *===========================================================================*/
/* �򺹥����å� */
#define CC_OCLineCross(pocline) ((pocline)->status & CL_OC_LINE_STTS_CROSS)
    
#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

/* z_collision_param.h end */
