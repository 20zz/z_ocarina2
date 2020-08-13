/* $Id: z_fcurve_data_skelanime_type.h,v 2.1 1998-10-22 21:17:25+09 zelda Exp $ */
/*=============================================================================
 *
 * z_fcurve_data_skelanime_type.h
 *
 * Program:Kenji Matsutani
 * Date:1998ǯ 1��30��(������) 21��04ʬ23�� JST
 *
 *$Log: z_fcurve_data_skelanime_type.h,v $
 *Revision 2.1  1998-10-22 21:17:25+09  zelda
 *�ңϣͽФ��С������(NTSC)
 *
 *Revision 1.3  1998/02/25 10:47:40  matutani
 **** empty log message ***
 *
 * Revision 1.2  1998/02/23  13:38:44  matutani
 * *** empty log message ***
 *
 * Revision 1.1  1998/02/09  05:11:33  matutani
 * Initial revision
 * 
 *
 *===========================================================================*/

#ifndef INCLUDE_Z_FCURVE_DATA_SKELANIME_TYPE_H 
#define INCLUDE_Z_FCURVE_DATA_SKELANIME_TYPE_H

#include"z_fcurve_data_type.h"
#include"z_types.h"

typedef struct fc_skeleton_info {
    unsigned char joint_num ;/* ������� */
    void **list; /* ��ǥ�ꥹ�� */
    
    /* ���˥�ե졼��ط� */
    FcurveData *fc_data;
    float start_frame; /* �������� */
    float end_frame; /* ����� */
    float frame_speed; /* ��������ե졼����������Ѳ��� */
    float anime_frame; /* ���ߤΥե졼�� */

    /* ���祤��ȥǡ����Ϥʤ������ξ�׻� */
    s_xyz *now_joint;
    /* ���� ��֤Ϲͤ��ʤ�,���ذƤȤ��Ƥ�����ѥǡ����⤽�ξ�׻��� */

    
} FcSkeletonInfo;


#endif

/*** z_fcurve_data_skelanime_type.h EOF ***/
