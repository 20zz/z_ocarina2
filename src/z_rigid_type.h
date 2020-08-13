/*  $Id: z_rigid_type.h,v 2.1 1998/10/22 11:51:48 zelda Exp $ */
/*-----------------------------------------------------------------------------
 *
 *  ��å��ɥ�ǥ빽¤��
 *
 * Program:Kenji Matsutani
 *
 *$Log: z_rigid_type.h,v $
 * Revision 2.1  1998/10/22  11:51:48  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 *Revision 1.9  1998/03/18 04:25:26  komatu
 *_LANGUAGE_C_PLUS_PLUS���ɲ�
 *
 * Revision 1.8  1998/01/08  09:50:58  matutani
 * Rigid_Mdl_Info_SV�ɲ�
 *
 * Revision 1.7  1997/06/18  06:14:01  iwawaki
 * *** empty log message ***
 *
 * Revision 1.6  1997/06/18  02:48:39  matutani
 * Rigid_Mdl_Info���ɲ�
 *
 * Revision 1.5  1997/06/18  01:36:29  matutani
 * ��ǥ�����ɲ�
 *
 * Revision 1.4  1997/05/06  11:28:49  matutani
 * gfx�������gfx�Υݥ��󥿡������������
 *
 * Revision 1.3  1997/05/06  10:53:05  matutani
 * gfx������ˤ��ޤ�����
 *
 * Revision 1.2  1997/04/30  00:50:22  iwawaki
 * �䤬����
 *
 * Revision 1.1  1997/04/25  07:29:13  matutani
 * Initial revision
 *
 *
 *---------------------------------------------------------------------------*/

#ifndef INCLUDE_Z_RIGID_TYPE_H
#define INCLUDE_Z_RIGID_TYPE_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#include "u64basic.h"
#include"z_types.h"
#include"z_soft_anim_tbl_type.h"
#include"z_skin_type_base.h"

typedef enum {
    NORMAL, /* �Ρ��ޥ�ǥ����ץ쥤�ꥹ�� */
    NORMAL_T, /* �Ρ��ޥ��Ʃ�� */
    LOD, /* �Ρ��ޥ� �� LOD */
    LOD_T /* (�Ρ��ޥ��Ʃ��) + (LOD + Ʃ��) */
} Gfx_Type;

/*----------------------------------------------------------------------------
 *
 * model
 *
 *---------------------------------------------------------------------------*/
/*
 * ��¤��
 */
typedef struct rigid_model {
    s_xyz trs; /* �����ȥ�󥹥졼��:���ƣ��������� */
    unsigned char child_index; /* �Ҷ��Υ�ǥ��ֹ� */
    unsigned char sibling_index; /* ����Υ�ǥ��ֹ� */
} Rigid_Model;

/*
 * ��ǥ�ơ��֥��ѥݥ��󥿡������ 
 */
typedef void * Rigid_ModelPointer;

/*---------------------------------------------------------------------------
 *
 * �Ρ��ޥ�ǥ����ץ쥤�ꥹ��
 *
 *-------------------------------------------------------------------------*/
typedef struct rigid_model_NORMAL {
    Rigid_Model mdl;

    Gfx *gfx[1]; /* �Ρ��ޥ� */
} Rigid_Model_NORMAL;

/*--------------------------------------------------------------------------
 *
 * �ʥΡ��ޥ��Ʃ���˥ǥ����ץ쥤�ꥹ��
 *
 *--------------------------------------------------------------------------*/
typedef struct rigid_mode_NORMAL_T {
    Rigid_Model mdl;

    Gfx *gfx[2]; /* �Ρ��ޥ롢Ʃ�� */
} Rigid_Model_NORMAL_T;

/*----------------------------------------------------------------------------
 *
 * �ʥΡ��ޥ�ܣ̣ϣġ˥ǥ����ץ쥤�ꥹ��
 *
 *--------------------------------------------------------------------------*/
typedef struct rigid_model_LOD {
    Rigid_Model mdl;

    Gfx *gfx[2]; /* �Ρ��ޥ�,�̣ϣ� */
} Rigid_Model_LOD;

/*---------------------------------------------------------------------------
 *
 * (�Ρ��ޥ��Ʃ��) + (LOD + Ʃ��)
 *
 *--------------------------------------------------------------------------*/
typedef struct rigid_model_LOD_T {
    Rigid_Model mdl;

    Gfx *gfx[4]; /* �Ρ��ޥ롢Ʃ�����̣ϣ�,Ʃ�� */
} Rigid_Model_LOD_T;

/*---------------------------------------------------------------------------
 *
 * ��ǥ����
 *
 *--------------------------------------------------------------------------*/
typedef struct rigid_mdl_info {
    Rigid_ModelPointer *mdl_tbl; /* ��ǥ�ơ��֥�ؤΥݥ��󥿡� */
    unsigned char mdl_num; /* ��ǥ�� */
} Rigid_Mdl_Info;

/*---------------------------------------------------------------------------
 *
 * shared vertex�ѥ�ǥ����
 *
 *--------------------------------------------------------------------------*/
typedef struct rigid_mdl_info_sv {
    Rigid_Mdl_Info mdl_info; /* ��ǥ���� */
    unsigned char shape_num; /* �������׿� */
} Rigid_Mdl_Info_SV;

/*---------------------------------------------------------------------------
 *
 * ����¤��
 *
 *---------------------------------------------------------------------------*/
typedef struct Rigid_Info {
    Rigid_Model **mdl_tbl; /* ��ǥ�ơ��֥�ؤΥݥ��󥿡� */
    Gfx_Type gfx_type_mask; /* ��ǥ빽¤�ǥ����ץ쥤�ꥹ�ȥ����� */
    unsigned char mdl_num; /* ��ǥ�� */
    
    unsigned char root_mdl_index; /* �롼�ȥ�ǥ�Υ���ǥå��� */

    SoftAnimTblInfo *anm_tbl; /* ���˥᡼�����¤�ΤؤΥݥ����� */
} Rigid_Info;
    
#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

/*** z_rigid_type.h end ***/
