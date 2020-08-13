/*  $Id: z_bgcheck_movebg.h,v 2.1 1998-10-22 20:45:49+09 zelda Exp $ */
/*============================================================================
 *
 * z_bgcheck_movebg.h
 *
 * Program:Kenji Matsutani
 * 1997ǯ 7��29��(������) 09��41ʬ28�� JST
 *
 *$Log: z_bgcheck_movebg.h,v $
 *Revision 2.1  1998-10-22 20:45:49+09  zelda
 *�ңϣͽФ��С������(NTSC)
 *
 *Revision 1.7  1998/08/27 07:24:40  matutani
 *SW�ѥӥåȽ���
 *
 *Revision 1.6  1998-03-18 10:32:38+09  takahata
 **** empty log message ***
 *
 * Revision 1.5  1998/03/11  05:32:28  matutani
 * �ץ쥤�䡼����ˤ���
 *
 * Revision 1.4  1998/02/17  07:49:40  umemiya
 * MoveBG_checkMoveArea�ɲ�
 *
 * Revision 1.3  1997/08/06  06:01:23  matutani
 * *** empty log message ***
 *
 * Revision 1.2  1997/08/06  05:17:24  matutani
 * ��äƤ��뤫�ӥå�
 *
 * Revision 1.1  1997/07/29  09:54:06  matutani
 * Initial revision
 *
 *
 *==========================================================================*/

#ifndef Z_BGCHECK_MOVEBG_H
#define Z_BGCHECK_MOVEBG_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#include"z_bgcheck_movebg_type.h"


/*----------------------------------------------------------------------------
 *
 * moveBG���쥯�饹 ���С��ѿ����ꥢ
 *
 *--------------------------------------------------------------------------*/
extern void MoveBG_ct(
    MoveBG_Actor *pmbg_actor,
    long func_mask);

/*=========================================================================
 *
 * status ��Ϣ����
 *
 *=========================================================================*/

/*--------------------------------------------------------------------------
 *
 * moveBG status ���ꥢ
 *
 *------------------------------------------------------------------------*/
extern void MoveBG_clearStatus(
    MoveBG_Actor *pmbg_actor);

/*--------------------------------------------------------------------------
 *
 * moveBG status ��äƤ���
 *
 *-------------------------------------------------------------------------*/
extern void MoveBG_setRideStatus(
    MoveBG_Actor *pmbg_actor);

/*----------------------------------------------------------------------------
 *
 * �ץ쥤�䡼����äƤ���status�ӥåȥ��å�
 *
 *---------------------------------------------------------------------------*/
extern void MoveBG_setRidePlayerStatus(
    MoveBG_Actor *pmbg_actor);

/*----------------------------------------------------------------------------
 *
 * �ץ쥤�䡼����Υץ쥤�䡼�ξ�äƤ��� status�ӥåȥ��å�
 *
 *---------------------------------------------------------------------------*/
extern void MoveBG_setRidePlayerStatus_ai(
    T_BGCheck *pbgcheck,
    int bg_actor_index);
/*----------------------------------------------------------------------------
 *
 * �ץ쥤�䡼����ˤ���status�ӥåȥ��å�
 *
 *---------------------------------------------------------------------------*/
extern void MoveBG_setOverPlayerStatus(
    MoveBG_Actor *pmvbg_actor);


/*-----------------------------------------------------------------------------
 *
 * �ץ쥤�䡼����Υץ쥤�䡼����ˤ��뤫�Ȥ����ӥåȥե饰
 *
 *---------------------------------------------------------------------------*/
extern void MoveBG_setOverPlayerStatus_ai(
    T_BGCheck *pbgcheck,
    int bg_actor_index);

/*----------------------------------------------------------------------------
 *
 * �����å��򲡤��줿�ե饰��
 *
 *--------------------------------------------------------------------------*/
extern void MoveBG_setSwOnStatus(
    MoveBG_Actor *pmvbg_actor);

/*=============================================================================
 *
 * status ��ǧ
 *
 *===========================================================================*/
/*----------------------------------------------------------------------------
 *
 * ��äƤ��뤫�����å�
 *
 *--------------------------------------------------------------------------*/
extern int MoveBG_checkRideStatus(
    MoveBG_Actor *pmbg_actor);

/*----------------------------------------------------------------------------
 *
 * �ץ쥤�䡼����äƤ��뤫�ɤ��������å�
 *
 *---------------------------------------------------------------------------*/
extern int MoveBG_checkRidePlayerStatus(
    MoveBG_Actor *pmbg_actor);

/*----------------------------------------------------------------------------
 *
 * �ץ쥤�䡼����ˤ��뤫�ɤ��������å�
 *
 *---------------------------------------------------------------------------*/
extern int MoveBG_checkOverPlayerStatus(
    MoveBG_Actor *pmvbg_actor);

/*--------------------------------------------------------------------------
 *
 * �����å��������줿�ե饰��ǧ
 *
 *--------------------------------------------------------------------------*/
extern int MoveBG_checkSwOnStatus(
    MoveBG_Actor *pmvbg_actor);

/*-----------------------------------------------------------------------
 *
 *	Ȣ����ư���ϰϥ����å�
 *	������Ĺ����0.1�Ҥ���ޤ���
 *
 *---------------------------------------------------------------------*/
extern int MoveBG_checkMoveArea(Game_play *game_play,
				MoveBG_Actor *moveBG,
				short width,
				short length,
				short offset_y);

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

/*** z_bgcheck_movebg.h end ***/