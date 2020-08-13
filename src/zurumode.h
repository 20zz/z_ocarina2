/*
 * $Id: zurumode.h,v 2.1 1998-10-22 21:31:42+09 zelda Exp $
 *
 * ����⡼��
 * ZURUMODE == 0 : ����ʤ��������ǡ�
 * ZURUMODE == 1 : ���뤢��ʳ�ȯ�ǡ�
 * ZURUMODE == 2 : �������ޤ��äƤ���Ф��뤢��ʥǥХå��ǡ�
 *
 * isZuruMode() ���뤬�Ǥ���Ȥ��Ͽ�
 *
 * extern void zurumode_init(void); * ����� *
 * extern void zurumode_cleanup(void); * ����� *
 *
 * $Log: zurumode.h,v $
 * Revision 2.1  1998-10-22 21:31:42+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.4  1998/08/26 05:13:14  zelda
 * *** empty log message ***
 *
 * Revision 1.3  1998-08-26 09:24:01+09  zelda
 * *** empty log message ***
 *
 * Revision 1.2  1998-08-25 23:09:54+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.1  1998-08-25 21:21:56+09  hayakawa
 * Initial revision
 *
 */

#ifndef __ZURUMODE_H_
#define __ZURUMODE_H_

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#ifndef ZURUMODE
#define ZURUMODE 0
#endif

#if (ZURUMODE == 0) || (ZURUMODE == 1)
#define isZuruMode() 		ZURUMODE
#define zurumode_init() 	(void)0
#define zurumode_cleanup() 	(void)0
#else
extern int zurumode_flag;
#define isZuruMode() 		(zurumode_flag != 0)
extern void zurumode_init(void);
extern void zurumode_cleanup(void);
#endif /* ZURUMODE */

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* __ZURUMODEX_H_ */
