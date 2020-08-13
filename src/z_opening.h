/* $Id: z_opening.h,v 2.1 1998-10-22 20:51:48+09 zelda Exp $ */	
/* $Log: z_opening.h,v $
 * Revision 2.1  1998-10-22 20:51:48+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.6  1998/05/20 08:40:25  soejima
 * *** empty log message ***
 *
 * Revision 1.5  1998-05-20 17:09:30+09  soejima
 * *** empty log message ***
 *
 * Revision 1.4  1998-03-25 20:50:09+09  yoshida
 * �áܡܤ���Υ��󥯥롼�ɤ��б�
 *
 * Revision 1.3  1997/05/29  08:22:08  soejima
 * *** empty log message ***
 *
 * Revision 1.2  1997/05/29  08:18:29  soejima
 * TITLE��OPENING��FILE_CHOOSE��ʬ��
 *
 * Revision 1.1  1997/05/28  10:05:54  soejima
 * Initial revision
 *
 * $Log�ɲ�
 * */


#ifndef INCLUDE_Z_OPENING_H
#define INCLUDE_Z_OPENING_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif



/************************************************************************
 *
 *	����������ȥ�
 *
 ************************************************************************/
				/* �������饹����� */
typedef struct {
    Game	g;		/* ���쥯�饹 */

    char	*staticSegment;	/* �����ƥ��å��������ȥݥ��� */

    View	view;		/* �ӥ����饹 */
} Game_opening;
    


/*==============================================================*/
extern void
opening_cleanup( Game *thisx );

extern void
opening_init( Game *thisx );
/*==============================================================*/



#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

/*** z_opening.h end ***/

