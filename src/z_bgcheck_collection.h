/*  $Id: z_bgcheck_collection.h,v 2.1 1998-10-22 20:45:49+09 zelda Exp $ */
/*=============================================================================
 *
 * z_bgcheck_collection.h
 * ����������
 *
 * Program:Kenji Matsutani
 * date:1997ǯ 7��25��(������) 16��50ʬ35�� JST
 *
 *$Log: z_bgcheck_collection.h,v $
 *Revision 2.1  1998-10-22 20:45:49+09  zelda
 *�ңϣͽФ��С������(NTSC)
 *
 *Revision 1.4  1998/08/27 07:20:44  matutani
 *SW�ѥӥåȽ����ɲ�
 *
 *Revision 1.3  1998-03-18 10:32:45+09  takahata
 **** empty log message ***
 *
 * Revision 1.2  1997/09/27  06:21:49  matutani
 * *** empty log message ***
 *
 * Revision 1.1  1997/07/29  09:54:21  matutani
 * Initial revision
 *
 *
 *===========================================================================*/

#ifndef INCLUDE_Z_BGCHECK_COLLECTION_H
#define INCLUDE_Z_BGCHECK_COLLECTION_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#include"z_bgcheck_type.h"

/*---------------------------------------------------------------------------
 *
 * BGCheckCollection_proc()�����
 * ������Ԥä����ɤ���
 *
 *------------------------------------------------------------------------*/
typedef enum {
    BG_COLLECT_NO_MOVE,
    BG_COLLECT_MOVE,
    BG_COLLECT_LAST_INDEX
} BG_COLLECT_STATUS;

/*----------------------------------------------------------------------------
 * ������������
 * ŵ��Ū�ʤ���,BG����������ä�,BG����������ΰ��֤��Ѥ��ʤ��褦���������롣
 * BG���������ΰ��ְ�ư/��ž/����������б�
 *
 * 
 * T_BGCheck *pbgcheck: BG�����å���¤��
 * int bg_actor_index: BG��¿����BG�����������̤Τ���Υ�����������ǥå���
 * Actor *pmove_actor: ������������������ 
 *
 *---------------------------------------------------------------------------*/
extern void BGCheckCollection_typicalActorPos(
    T_BGCheck *pbgcheck,
    int bg_actor_index,
    Actor *pmove_actor);


/*---------------------------------------------------------------------------
 * ��������y��ž ��������
 * ��եȤν��������
 *
 * ���������Ϥ����Ǥ��ʤ���������ե�¦���Ѳ��̤�ä���Τߡ�
 * 
 * T_BGCheck *pbgcheck: BG�����å���¤��
 * int bg_actor_index: BG��¿����BG�����������̤Τ���Υ�����������ǥå���
 * Actor *pmove_actor: ������������������ 
 *
 *---------------------------------------------------------------------------*/
extern void BGCheckCollection_typicalActorRotY(
    T_BGCheck *pbgcheck,
    int bg_actor_index,
    Actor *pmove_actor);

/*============================================================================
 *
 * ��äƤ��뤫�Υӥåȥ��å�
 *
 * T_BGCheck *pbgcheck: BG�����å���¤��
 * int bg_actor_index: BG��¿����BG�����������̤Τ���Υ�����������ǥå���
 *
 *==========================================================================*/
extern void BGCheckCollection_setRideStatus(
    T_BGCheck *pbgcheck,
    Actor *actor,
    int bg_actor_index);

/*============================================================================
 *
 * ��������
 *
 * ��äƤ��եȤΥ����פ˱�����ɬ�פ������ؿ���ƤӽФ���
 *
 * T_BGCheck *pbgcheck: BG�����å���¤��
 * int bg_actor_index: BG��¿����BG�����������̤Τ���Υ�����������ǥå���
 * Actor *pmove_actor: ������������������ 
 *
 *---------------------------------------------------------------------------*/
extern BG_COLLECT_STATUS BGCheckCollection_proc(
    T_BGCheck *pbgcheck,
    int bg_actor_index,
    Actor *pmove_actor);


#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

/*** z_bgcheck_collection.h end ***/
