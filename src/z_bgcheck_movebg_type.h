/*  $Id: z_bgcheck_movebg_type.h,v 2.1 1998-10-22 20:45:49+09 zelda Exp $ */
/*============================================================================
 *
 * z_bgcheck_movebg_type.h
 *
 * Program:Kenji Matsutani
 * 1997ǯ 7��29��(������) 09��41ʬ28�� JST
 *
 *$Log: z_bgcheck_movebg_type.h,v $
 *Revision 2.1  1998-10-22 20:45:49+09  zelda
 *�ңϣͽФ��С������(NTSC)
 *
 *Revision 1.5  1998/03/18 01:32:22  takahata
 **** empty log message ***
 *
 * Revision 1.4  1997/11/16  14:09:19  matutani
 * moveBG�������餷
 *
 * Revision 1.3  1997/10/18  14:13:22  matutani
 * Bounding Sphere�ɲ�:������������
 *
 * Revision 1.2  1997/08/06  05:19:59  matutani
 * ��äƤ��뤫�ӥå�
 *
 * Revision 1.1  1997/07/29  09:57:49  matutani
 * Initial revision
 *
 *
 *==========================================================================*/

#ifndef Z_BGCHECK_MOVEBG_TYPE_H
#define Z_BGCHECK_MOVEBG_TYPE_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#include"z_actor.h" 
#include"sys_math3d.h"

/*---------------------------------------------------------------------------
 *
 * moveBG���쥯�饹
 *
 * ��⡧
 * 
 *
 *-------------------------------------------------------------------------*/
typedef struct {
    Actor actor; 		/* ���쥯�饹 */
    
    int bg_dyna_index;  /* �����ʥߥå��ݥꥴ�󥤥�ǥå��� */

    float powerF;
    float powerY;
    short power_angle_y;
    
    long func_mask; /* ������������ޥ�������z_bgcheck_movebg_param.h */

    unsigned char status; /* ���֥ޥ��� */
			    
} MoveBG_Actor;

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

/*** z_bgcheck_movebg_type.h end ***/
