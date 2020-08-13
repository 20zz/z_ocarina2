/*
 * $Id: OLDaprintf.h,v 1.1 2003/03/14 03:27:04 tong Exp $
 *
 * ���ץꥱ�������УңɣΣ�
 * ������ɽ���ؿ����Ѥ� printf, vprintf
 *
 * �Ȥ�������� gfxprint.c �򻲾�
 *
 * $Log: OLDaprintf.h,v $
 * Revision 1.1  2003/03/14 03:27:04  tong
 * copied SRD dir from old tree to new tree.
 *
 * Revision 1.1.1.1  2003/01/17 21:06:42  tong
 * ZELDA-OCARINA OF TIME (20L) build from Nintendo
 *
 * Revision 2.2  1999-05-14 16:13:03+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.1  1998-10-22 20:18:25+09  hayakawa
 * �ңϣͽФ��С������
 *
 * Revision 1.4  1998-04-01 11:40:27+09  hayakawa
 * ��������ͤ� __cplusplus �� _LANGUAGE_C_PLUS_PLUS ���ѹ�
 *
 * Revision 1.3  1997/03/05  05:04:02  hayakawa
 * ���ѹ�
 *
 * Revision 1.2  1996/12/18  02:36:18  hayakawa
 * �������������Τ���
 *
 * Revision 1.1  1996/12/18  02:08:40  hayakawa
 * Initial revision
 *
 */

#ifndef __APRINTF_H_
#define __APRINTF_H_

#include <stdarg.h>		/* va_list, va_start, va_end */

typedef struct aprintf_prout_s {
    void *(*prout_func)(void *, const char *, int); /* �ץ��ȥ����ȴؿ��ؤΥݥ��� */
    /* ���θ�������ؿ��ѤΥǡ��� */
} aprintf_prout_t;

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

int vaprintf(aprintf_prout_t *a, const char *fmt, va_list ap);
int aprintf(aprintf_prout_t *a, const char *fmt, ...);

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* __APRINTF_H_ */
