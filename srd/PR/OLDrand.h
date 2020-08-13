/*
 * $Id: OLDrand.h,v 1.1 2003/03/14 03:27:04 tong Exp $
 *
 * ���Σӣ�����ؿ�
 *
 * $Log: OLDrand.h,v $
 * Revision 1.1  2003/03/14 03:27:04  tong
 * copied SRD dir from old tree to new tree.
 *
 * Revision 1.1.1.1  2003/01/17 21:06:42  tong
 * ZELDA-OCARINA OF TIME (20L) build from Nintendo
 *
 * Revision 2.1  1998-10-22 20:18:25+09  hayakawa
 * �ңϣͽФ��С������
 *
 * Revision 1.2  1998-04-01 11:39:32+09  hayakawa
 * ��������ͤ� __cplusplus �� _LANGUAGE_C_PLUS_PLUS ���ѹ�
 *
 * Revision 1.1  1997/04/09  10:15:43  hayakawa
 * Initial revision
 *
 */

#ifndef __RAND_H_
#define __RAND_H_

#if    (_MIPS_SZLONG != 32)
#error (_MIPS_SZLONG != 32)
#endif

/* Maximum value returned by rand(3C). */
#define RAND_MAX	32767

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

extern int rand(void);		/* ������֤� */
extern void srand(unsigned int seed); /* ��ν���� */

extern int rand_r(unsigned long *next); /* ��ؤΥݥ��󥿤��Ϥ���Ω�� */

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* __RAND_H_ */
