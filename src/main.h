/*
 * $Id: main.h,v 2.2 1998/11/06 08:59:38 hayakawa Exp $
 *
 * $Log: main.h,v $
 * Revision 2.2  1998/11/06  08:59:38  hayakawa
 * �����å������䤷��
 *
 * Revision 2.1  1998-10-22 20:41:56+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.6  1998/04/01 02:47:08  hayakawa
 * ��������ͤ� __cplusplus �� _LANGUAGE_C_PLUS_PLUS ���ѹ�
 *
 * Revision 1.5  1998/03/25  14:15:37  hayakawa
 * ɬ�פʥإå��򥤥󥯥롼�ɤ���褦�ˤ���
 *
 * Revision 1.4  1997/11/18  12:45:59  hayakawa
 * MAIN_STACKSIZE�����䤷��
 *
 * Revision 1.3  1997/11/16  13:35:49  hayakawa
 * MAIN_STACKSIZEĴ��
 *
 * Revision 1.2  1997/11/15  13:02:31  hayakawa
 * ����ȥ���ѥå���˥塼���拾��ѥ���ˤ���
 *
 * Revision 1.1  1997/03/18  00:15:46  hayakawa
 * Initial revision
 *
 */

#ifndef __MAIN_H_
#define __MAIN_H_

#include "ultratypes.h"		/* u8 */

#ifdef USE_NOSPAKMENU
#define MAIN_STACKSIZE (0x400+2048+1024) /* nosPakMenu�Ѥ˾������䤷�� */
#else
#define MAIN_STACKSIZE (0x400+1024+0x100) /* ���� 0x2f4 */
#endif

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

    extern void	mainproc(void *);
    extern u8 	vimode_no;
#if DEBUG
    extern int 	debugflag;
#endif

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* __MAIN_H_ */
