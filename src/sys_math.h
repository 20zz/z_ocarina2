/*
 * $Id: sys_math.h,v 2.1 1998/10/22 11:41:56 zelda Exp $
 *
 * �����ޥ� �����ޥ� �����ޥ� �����ޥ� �������ޥ�
 *
 * $Log: sys_math.h,v $
 * Revision 2.1  1998/10/22  11:41:56  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.12  1998/08/10 12:03:47  hayakawa
 * cosf_table sinf_table �ɲ�
 *
 * Revision 1.11  1998-03-17 20:13:16+09  hayakawa
 * �áܡܤ���Υ��󥯥롼�ɤ��б�
 *
 * Revision 1.10  1998/02/05  06:07:28  hayakawa
 * atans_table atanf_table �ɲ�
 *
 * Revision 1.9  1997/11/14  00:55:43  hayakawa
 * math.h���Ȥ߹���ȥ��顼�ˤʤä��ΤǶ۵޲���
 *
 * Revision 1.8  1997/11/14  00:27:27  hayakawa
 * fabsf����
 * fatan3����
 * math.h��Ʊ���˥��󥯥롼�ɤ���褦�ˤ��Ƥߤ�
 * �ޥ����Ǥ�Ifact����
 *
 * Revision 1.7  1997/11/05  13:59:55  hayakawa
 * fmodf���
 *
 * Revision 1.6  1997/07/11  08:17:38  hayakawa
 * *** empty log message ***
 *
 * Revision 1.5  1997/03/25  14:05:08  hayakawa
 * ����ط�����
 *
 * Revision 1.4  1996/11/27  04:39:08  hayakawa
 * math64.h�Ȥ��֤äƤ���ޥ���򥳥��ȹ礦�Ȥ���
 *
 * Revision 1.3  1996/10/18  08:04:26  iwawaki
 * *** empty log message ***
 *
 * Revision 1.2  1996/09/18  08:56:29  iwawaki
 * Log�ɲ�
 */


#ifndef INCLUDE_SYS_MATH_H
#define INCLUDE_SYS_MATH_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

/************************************************************************
 *
 *	sys_math.c �� extern �ʤ�
 *
 ************************************************************************/

    /*
     * ���ˤ��꤬���������ͥޥ���
     * ��ˤ�ä������Ѥ���ĤΤ����
     */
#define ABS(x) (((x) >= 0) ? (x) : -(x))

    /*
     * fox�ߴ��Ѥ����ȯ����
     * ���������������˸ߴ����������ʤ�
     */
#include "qrand.h"
#define init_rnd() 	sqrand((unsigned long)osGetTime())
#define rnd() 		fqrand()

#include "math64.h"

/*======================================================================*
 *	         							*
 *	����                                                            *
 *									*
 *======================================================================*/
extern float ffact(
    float x
);

/*======================================================================*
 *	         							*
 *	����                                                            *
 *									*
 *======================================================================*/
extern float ifact(
    int x
);

/*======================================================================*
 *	         							*
 *	�Ҿ�(�Ҿ��ͤ�int)                                               *
 *									*
 *======================================================================*/
extern float powi(
    float z,
    int x
);

/*
 * �ơ��֥����Ѥ�����®�ʥ��������󥸥����
 * ������:sys_math_atan.c
 */
extern short atans_table(float x, float y);
extern float atanf_table(float x, float y);

/*
 * �ơ��֥����Ѥ� sinf
 * �ơ��֥����Ѥ� cosf
 * ���٤ϰ�������®�Ǥ���������78% up��
 */
extern float sinf_table(float rad);
extern float cosf_table(float rad);

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

/*** sys_math.h end ***/
