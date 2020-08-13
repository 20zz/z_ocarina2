/*
 * $Id: stddef64.h,v 1.1 2003/03/14 03:27:05 tong Exp $
 *
 * $Log: stddef64.h,v $
 * Revision 1.1  2003/03/14 03:27:05  tong
 * copied SRD dir from old tree to new tree.
 *
 * Revision 1.1.1.1  2003/01/17 21:07:07  tong
 * ZELDA-OCARINA OF TIME (20L) build from Nintendo
 *
 * Revision 2.3  2000-02-23 21:30:11+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.2  1999-05-14 16:12:01+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.1  1998-10-22 20:18:25+09  hayakawa
 * �ңϣͽФ��С������
 *
 * Revision 1.5  1998-04-01 11:39:14+09  hayakawa
 * ��������ͤ� __cplusplus �� _LANGUAGE_C_PLUS_PLUS ���ѹ�
 *
 * Revision 1.4  1996/11/21  06:38:42  hayakawa
 * c++ �ΤȤ��� NULL��0�ˤ���
 *
 */

#ifndef __STDDEF64_H_
#define __STDDEF64_H_

#ifndef NULL
/*
 * ANSI-C �Ǥ�, NULL �� 0 �ޤ��� (void *)0 �Τɤ����������Ƥ�褤�Τǡ�
 * �ݥ��󥿤�Ĵ��������Ū�ʥ��顼�򸺾������뤿�� (void *)0 ���������
 * ��������C++ �ˤ����ƤϷ�����̩�ʤΤǡ�0�Ȥ��롣
 */
#ifdef _LANGUAGE_C_PLUS_PLUS
#define NULL            0
#else
#define NULL		((void *)0)
#endif
#endif

#include <stddef.h>		/* ptrdiff_t, size_t, offsetof */

#endif /* __STDDEF64_H_ */
