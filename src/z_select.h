/*
 * $Id: z_select.h,v 2.1 1998-10-22 20:51:48+09 zelda Exp $
 *
 * ��������쥯�Ȳ��̡ʵ�ǽ�ƥ��ȡ�
 *
 * $Log: z_select.h,v $
 * Revision 2.1  1998-10-22 20:51:48+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.10  1998/06/22 09:40:19  okajima
 * *** empty log message ***
 *
 * Revision 1.9  1998-04-02 13:40:46+09  okajima
 * *** empty log message ***
 *
 * Revision 1.8  1998/03/30  09:05:59  okajima
 * *** empty log message ***
 *
 * Revision 1.7  1998/03/19  13:02:50  komatu
 * *** empty log message ***
 *
 * Revision 1.6  1997/10/04  08:42:33  hayakawa
 * option_no
 *
 * Revision 1.5  1997/05/29  01:31:46  hayakawa
 * select_cleanup�ץ�ȥ������ɲ�
 *
 * Revision 1.4  1997/05/21  09:45:52  hayakawa
 * �����ƥ��å��������ȤΥǡ�����ңϣ��ɤ߹��ߤˤ���
 *
 * Revision 1.3  1996/12/17  04:17:11  hayakawa
 * ���������Ѥ��ѿ��ɲ�
 *
 * Revision 1.2  1996/10/24  07:55:24  hayakawa
 * �إå��ե������ɲ�
 *
 * Revision 1.1  1996/10/22  08:46:55  hayakawa
 * Initial revision
 *
 */

#ifndef __Z_SELECT_H_
#define __Z_SELECT_H_

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#include "z_basic.h"		/* rgba_t */

typedef struct {
    char *name;			/* ̾�� */
    void (*func)(Game *, void *); /* �ؿ� */
    void *parm;			/* �ѥ�᡼�� */
} namefunc_t;

				/* �������饹����� */
typedef struct {
    Game	g;		/* ���쥯�饹 */
    View	view;		/* �ӥ����饹 */
    int		namefunc_num;	/* namefunc�ο� */
    namefunc_t *namefunc;
    int 	select_no;	/* ���ߤΥ��쥯�Ȱ��� */
    int 	select2_no;	/* ���ߤΥ��쥯�Ȱ��� */
    int 	select_pos[10];	/* ���ߤΥ��쥯�Ȱ��� */
    int		option_no;	/* ���ץ�����ֹ� */
    int		now_pos;
    xy_t	base_pos;
    rgba_t	color;
    int yy, yyy;		/* ���������� */
    int work[5];		/* work */
//    char *ptr;			/* free */
    char *staticSegment;	/* �����ƥ��å��������ȥݥ��� */
} Game_select;
    
extern void select_init(Game *thisx);
extern void select_cleanup(Game *thisx);

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* __Z_SELECT_H_ */
