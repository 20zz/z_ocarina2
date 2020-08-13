/* $Id: z_title.h,v 1.2 2003/03/14 02:53:56 tong Exp $ */	
/* $Log: z_title.h,v $
 * Revision 1.2  2003/03/14 02:53:56  tong
 * more source from Nintendo including cheat obj code.
 *
 * Revision 2.1  1998/10/22  11:51:48  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.34  1998/10/03 12:07:32  hayakawa
 * *** empty log message ***
 *
 * Revision 1.33  1998-09-19 23:07:08+09  soejima
 * *** empty log message ***
 *
 * $Log�ɲ�
 * */


#ifndef INCLUDE_Z_TITLE_H
#define INCLUDE_Z_TITLE_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#include "z_sram.h"


/************************************************************************
 *
 *	����������ȥ�
 *
 ************************************************************************/
#define Buf_Ct   	(128/8)

				/* �������饹����� */
typedef struct {
    Game	g;		/* ���쥯�饹 */

    char	*staticSegment;	/* �����ƥ��å��������ȥݥ��� */

    View	view;		/* �ӥ����饹 */

    Sram	sram;		/* �ӣң��� ���饹 */


    short	timer;		/* �����ޡ� */
    short	alpha;		/* ����ե��� */
    short	alpha_data;	/* ����ե������� */
    short	wait_timer;	/* �����ޡ� */

    short	counter;	/*  */
    short	work;		/*  */
    unsigned char n64dd_inital_background; /* �����ģĤ������� */
    unsigned char done;		/* ��λ�ե饰 */
} Game_title;
    




/*==============================================================*/
extern void Display_Fillter(
    Graph    *graph,
    unsigned char r,
    unsigned char g,
    unsigned char b,
    unsigned char a,
    unsigned char mode
);

extern void
title_cleanup( Game *thisx );

extern void
title_init( Game *thisx );
/*==============================================================*/


#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

/*** z_title.h end ***/

