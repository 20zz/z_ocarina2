/* $Id: z_vr_box.h,v 1.1.1.1 2003/03/10 22:42:52 tong Exp $ */	
/* $Log: z_vr_box.h,v $
 * Revision 1.1.1.1  2003/03/10 22:42:52  tong
 * new OBJ tree for ocarina from Nintendo
 *
 * Revision 2.1  1998/10/22  11:51:48  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.39  1998/10/10 13:47:07  sasaki
 * *** empty log message ***
 *
 * Revision 1.38  1998-09-19 23:07:13+09  soejima
 * *** empty log message ***
 *
 * Revision 1.1  1996/09/28  04:37:58  soejima
 * Initial revision
 * $Log�ɲ�
 * */

#ifndef INCLUDE_Z_VR_BOX_H
#define INCLUDE_Z_VR_BOX_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#include "z_kankyo.h"


/************************************************************************
 *									*
 *	�֣ҡ��£ϣ�							*
 *				1996ǯ 7��31��(������) 18��00ʬ00�� JST *
 ************************************************************************/
typedef struct zelda_vr_box_struct {
    View	view;

    char	*vr_box_staticSegment[3];	/* �����ƥ��å��������ȥݥ��󥿣� */

    void	*dpList;

    Gfx 	*roomDLp;

    Vtx_t	*roomVtx;


    short	vr_box_draw_flag;	/* �ģ����ե饰 */

    float	rotateX;
    float	rotateY;
    float	rotateZ;

    xyz_t	eye;			/* LookAt �������� */
    short	angle;			/* ����� */
} Vr_box;




extern void
vr_box_ct( Game *game, Vr_box *vr_box, short type );	/* ���ۻҡʥ��󥹥ȥ饯����*/

extern void
vr_box_move( Vr_box *vr_box );

extern void
vr_box_draw( Vr_box *vr_box, Graph *graph, short type, short overcnt, float eye_x, float eye_y, float eye_z );

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

/*** z_vr_box.h ***/
