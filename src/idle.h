/*
 * $Id: idle.h,v 2.6 1998/10/30 05:57:26 hayakawa Exp $
 *
 * $Log: idle.h,v $
 * Revision 2.6  1998/10/30  05:57:26  hayakawa
 * viextendvstart�Υƥ���
 *
 * Revision 2.5  1998-10-29 15:12:24+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.4  1998-10-28 17:19:23+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.3  1998-10-27 21:56:52+09  zelda
 * *** empty log message ***
 *
 * Revision 2.2  1998-10-27 20:08:27+09  hayakawa
 * ���������б��ƥ���
 *
 * Revision 2.1  1998-10-22 20:41:56+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.3  1998/04/01 02:47:11  hayakawa
 * ��������ͤ� __cplusplus �� _LANGUAGE_C_PLUS_PLUS ���ѹ�
 *
 * Revision 1.2  1998/03/25  14:15:28  hayakawa
 * ɬ�פʥإå��򥤥󥯥롼�ɤ���褦�ˤ���
 *
 * Revision 1.1  1997/03/17  10:37:26  hayakawa
 * Initial revision
 *
 */

#ifndef __IDLE_H_
#define __IDLE_H_

#include "os.h"		/* OSViMode */

#define IDLE_STACKSIZE 1024

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

    extern void	idleproc(void *);
    extern u8 vimode_no;
    extern u8 viblack;
    extern u8 viextendvstart;
    extern u8 vidirty;
    extern OSViMode vimode;
    extern u32 vispecial;
    extern float vixscale;
    extern float viyscale;
#if DEBUG
    extern int 	debugflag;
#endif

    extern void viRetrace(void);
    extern void viUpdate(void);

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* __IDLE_H_ */
