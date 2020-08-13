/*  $Id: z_skin.h,v 2.1 1998-10-22 20:51:48+09 zelda Exp $ */
/*---------------------------------------------------------------------------
 *
 * ���������
 *
 * Program:Kenji Matsutani
 *
 * $Log: z_skin.h,v $
 * Revision 2.1  1998-10-22 20:51:48+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.11  1998/06/29 13:08:31  matutani
 * �ɥåڥ�⡼���б�
 *
 * Revision 1.10  1998-06-18 21:23:40+09  matutani
 * �ʰ�ɽ���⡼��
 *
 * Revision 1.9  1998-04-08 11:59:39+09  matutani
 * ���른�祤��ȤΥǥ����ץ쥤�ꥹ�Ȥ���ɽ���ˤ��ơ��������Υǥ����ץ쥤�ꥹ�Ȥ�ɽ����
 *
 * Revision 1.8  1998/03/19  13:03:21  komatu
 * *** empty log message ***
 *
 * Revision 1.7  1998/02/13  14:01:00  matutani
 * *** empty log message ***
 *
 * Revision 1.6  1997/10/06  10:39:07  matutani
 * *** empty log message ***
 *
 * Revision 1.5  1997/10/02  12:54:55  matutani
 * *** empty log message ***
 *
 * Revision 1.4  1997/08/18  00:46:03  matutani
 * ˡ������
 *
 * Revision 1.3  1997/08/07  07:02:00  matutani
 * from:��������100�ܰ��� ������
 *
 * Revision 1.2  1997/03/28  12:14:07  matutani
 * ������Υ������׾�Υ����Х���֤�׻�
 *
 * Revision 1.1  1997/03/25  07:46:06  matutani
 * Initial revision
 *
 *
 *-------------------------------------------------------------------------*/

#ifndef INCLUDE_Z_SKIN_H
#define INCLUDE_Z_SKIN_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#include"z_skin_type.h"
#include"z_skin_awb.h"

/*============================================================================
 *
 * �����ޥ���
 *
 *==========================================================================*/
/* �ǥե���� */
#define SKIN_DISP_DEFAULT 0
/* �ޥȥ�å����׻���ĺ���׻���ľ���ʤ� */
#define SKIN_DISP_NO_CALC (1 << 0)
/* root�ޥȥ�å�������ɤ��ʤ� */
#define SKIN_DISP_NO_ROOT_MTX (1 << 1)

/*=============================================================================
 *
 * ���С������
 *
 *===========================================================================*/

/*---------------------------------------------------------------------------
 *
 * gfx�Υǥ����ץ쥤�ꥹ��ɽ��
 *
 *--------------------------------------------------------------------------*/
extern void Skin_gfx_mesh2_disp(
    Graph *graph,
    Skin_AnimationWorkBuffer2 *pskin_awb,
    int index_mdl,
    Gfx *change_gfx,
    unsigned int proc_mask);
    
    
/*-----------------------------------------------------------------------------
 * 
 * skin�ǡ�������ǥ����ץ쥤�ꥹ�Ȥ��Ѵ�
 *
 * ����:
 * Actor *thisx : ���������ݥ��󥿡�
 * Game *pgame : ������ݥ��󥿡�
 * Skin_AnimationWorkBuffer2 *pskin_awb : �������ȥХåե���
 * void (*pos_func)(Actor *, Game *, Skin_AnimationWorkBuffer2 *) : �׻�����
 * int root_trs_flag : �롼�ȤΥȥ�󥹥졼�����ǡ�������Ѥ��뤫��
 *
 * ��⡧
 * pos_func == NULL�ξ��¹Ԥ��ʤ�
 *
 *---------------------------------------------------------------------------*/
extern void Skin_disp2( 
    Actor *thisx,
    Game *pgame, 
    Skin_AnimationWorkBuffer2 *pskin_awb,
    void (*pos_func)(Actor *, Game *, Skin_AnimationWorkBuffer2 *),
    int root_trs_flag);

/*-----------------------------------------------------------------------------
 * 
 * skin�ǡ�������ǥ����ץ쥤�ꥹ�Ȥ��Ѵ�
 *
 * ����:
 * Actor *thisx : ���������ݥ��󥿡�
 * Game *pgame : ������ݥ��󥿡�
 * Skin_AnimationWorkBuffer2 *pskin_awb : �������ȥХåե���
 * void (*pos_func)(Actor *, Game *, Skin_AnimationWorkBuffer2 *) : �׻�����
 * int (*joint_func)(Actor *, Game *, int, Skin_AnimationWorkBuffer2 *):
 *   �ƥ��祤���ɽ��������
 * �֤��ͤ�FALSE�λ��Ϥ��Υ��祤��Ȥ�ɽ�����ʤ���
 * int root_trs_flag : �롼�ȤΥȥ�󥹥졼�����ǡ�������Ѥ��뤫��
 *
 * ��⡧
 * pos_func == NULL�ξ��¹Ԥ��ʤ�
 *
 *---------------------------------------------------------------------------*/
extern void Skin_disp3( 
    Actor *thisx,
    Game *pgame, 
    Skin_AnimationWorkBuffer2 *pskin_awb,
    void (*pos_func)(Actor *, Game *, Skin_AnimationWorkBuffer2 *),
    int (*joint_func)(Actor *, Game *, int, Skin_AnimationWorkBuffer2 *),
    int root_trs_flag);

/*---------------------------------------------------------------------------
 *
 * ���륰���Х�ޥȥ�å����ʥ롼�ȥޥȥ�å����ޤ�)�ˤ�ꡢ
 * �Ѵ����줿���֤�׻����롣
 * ������ǡ����ǤϤʤ�
 * gfx�ѡ�skin�Ǥ�Ȥ��뤬)
 * from:��������100�ܰ���
 *
 *---------------------------------------------------------------------------*/
extern void Skin_MatrixPosition2_gfx(
    Skin_AnimationWorkBuffer2 *pskin_awb2,
    int jyoint, xyz_t *from, xyz_t *to);

/*==========================================================================
 *
 * ��С������
 *
 *========================================================================*/

/*---------------------------------------------------------------------------
 *
 * mesh�Υǡ�������ǥ����ץ쥤�ꥹ�Ȥ��Ѵ�
 *
 *--------------------------------------------------------------------------*/
extern void Skin_Mesh_disp(
    Graph *graph,
    Skin_AnimationWorkBuffer *pskin_awb,
    int index_mdl);

/*---------------------------------------------------------------------------
 *
 * ���륰���Х�ޥȥ�å����ʥ롼�ȥޥȥ�å����ޤ�)�ˤ�ꡢ
 * �Ѵ����줿���֤�׻����롣
 * ������ǡ����ǤϤʤ�
 * gfx�ѡ�skin�Ǥ�Ȥ��뤬)
 * from:��������100�ܰ���
 *
 *---------------------------------------------------------------------------*/
extern void Skin_MatrixPosition_gfx(
    Skin_AnimationWorkBuffer *pskin_awb,
    int jyoint, xyz_t *from, xyz_t *to);

/*----------------------------------------------------------------------------
 *
 * ����������Υ�ǥ��ĺ���Υ����Х���֤����뤳�Ȥ��Ǥ��롣
 * skin��ǥ�����
 *
 *--------------------------------------------------------------------------*/
extern void Skin_MatrixPosition_skin(
      Skin_AnimationWorkBuffer *pskin_awb,
      int jyoint, int vtx_index, xyz_t *to);

/*-----------------------------------------------------------------------------
 * 
 * skin�ǡ�������ǥ����ץ쥤�ꥹ�Ȥ��Ѵ�
 *
 *---------------------------------------------------------------------------*/
extern void Skin_disp(
    Actor *thisx,
    Game *game, 
    Skin_AnimationWorkBuffer *pskin_awb,
    void (*pos_func)(Actor *, Game *, Skin_AnimationWorkBuffer *),
    int root_trs_flag);

/*-----------------------------------------------------------------------------
 * 
 * skin�ǡ�������ǥ����ץ쥤�ꥹ�Ȥ��Ѵ�
 *
 * ����:
 * Actor *thisx : ���������ݥ��󥿡�
 * Game *pgame : ������ݥ��󥿡�
 * Skin_AnimationWorkBuffer2 *pskin_awb : �������ȥХåե���
 * void (*pos_func)(Actor *, Game *, Skin_AnimationWorkBuffer2 *) : �׻�����
 * int (*joint_func)(Actor *, Game *, int, Skin_AnimationWorkBuffer2 *):
 *   �ƥ��祤���ɽ��������
 * �֤��ͤ�FALSE�λ��Ϥ��Υ��祤��Ȥ�ɽ�����ʤ���
 * int root_trs_flag : �롼�ȤΥȥ�󥹥졼�����ǡ�������Ѥ��뤫��
 * int simple_flag:�ʰ�ɽ���򤹤뤫�ɤ�����
 * 
 * ��⡧
 * pos_func == NULL�ξ��¹Ԥ��ʤ�
 *
 *---------------------------------------------------------------------------*/
extern void Skin_disp4( 
    Actor *thisx,
    Game *pgame, 
    Skin_AnimationWorkBuffer2 *pskin_awb,
    void (*pos_func)(Actor *, Game *, Skin_AnimationWorkBuffer2 *),
    int (*joint_func)(Actor *, Game *, int, Skin_AnimationWorkBuffer2 *),
    int root_trs_flag,
    int simple_flag);

/*-----------------------------------------------------------------------------
 * 
 * skin�ǡ�������ǥ����ץ쥤�ꥹ�Ȥ��Ѵ�
 *
 * ����:
 * Actor *thisx : ���������ݥ��󥿡�
 * Game *pgame : ������ݥ��󥿡�
 * Skin_AnimationWorkBuffer2 *pskin_awb : �������ȥХåե���
 * void (*pos_func)(Actor *, Game *, Skin_AnimationWorkBuffer2 *) : �׻�����
 * int (*joint_func)(Actor *, Game *, int, Skin_AnimationWorkBuffer2 *):
 *   �ƥ��祤���ɽ��������
 * �֤��ͤ�FALSE�λ��Ϥ��Υ��祤��Ȥ�ɽ�����ʤ���
 * int root_trs_flag : �롼�ȤΥȥ�󥹥졼�����ǡ�������Ѥ��뤫��
 * int simple_flag:�ʰ�ɽ���򤹤뤫�ɤ�����
 * 
 * ��⡧
 * pos_func == NULL�ξ��¹Ԥ��ʤ�
 *
 *---------------------------------------------------------------------------*/
extern void Skin_disp5( 
    Actor *thisx,
    Game *pgame, 
    Skin_AnimationWorkBuffer2 *pskin_awb,
    void (*pos_func)(Actor *, Game *, Skin_AnimationWorkBuffer2 *),
    int (*joint_func)(Actor *, Game *, int, Skin_AnimationWorkBuffer2 *),
    int root_trs_flag,
    int simple_flag,
    unsigned int proc_mask);

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

/*** z_skin.h ***/

