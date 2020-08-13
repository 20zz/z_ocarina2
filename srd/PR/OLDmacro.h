/*
 * $Id: OLDmacro.h,v 1.1 2003/03/14 03:27:04 tong Exp $
 *
 * ������ɥ�����ʥޥ���
 *
 * $Log: OLDmacro.h,v $
 * Revision 1.1  2003/03/14 03:27:04  tong
 * copied SRD dir from old tree to new tree.
 *
 * Revision 1.1.1.1  2003/01/17 21:06:42  tong
 * ZELDA-OCARINA OF TIME (20L) build from Nintendo
 *
 * Revision 2.3  2000-07-14 18:05:46+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.2  1999-07-26 17:36:28+09  hayakawa
 * �ޥ���̾�ѹ� Max/Min��MAX/MIN
 * SGN�ޥ���ΰ���ɾ������򤫤ʤ餺����ˤʤ�褦�ˤ���
 * Number�ޥ���η�����(signed��unsigned)
 *
 * Revision 2.1  1998-10-22 20:19:27+09  hayakawa
 * �ңϣͽФ��С������
 *
 * Revision 1.16  1997-08-28 19:34:46+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.15  1997/05/16  02:38:30  hayakawa
 * UPBOUND��DOWNBOUND�˥��㥹���ɲ�
 * SIZE2LOG2�������ѹ�
 *
 * Revision 1.14  1997/01/29  12:11:35  hayakawa
 * WRAP,CLAMP���ɲ�
 *
 * Revision 1.13  1996/11/26  10:17:13  hayakawa
 * �� ���� �饸�����Ѵ���math64.h�˰�ư������
 *
 * Revision 1.12  1996/11/21  06:31:45  hayakawa
 * TRUE,True,true,FALSE,False,false�����
 * �����ޥ����math64.h�˰�ư
 *
 * Revision 1.11  1996/11/07  02:38:44  hayakawa
 * ���󡢥ݥ��󥿹�®���ޥ�����ɲ�
 *
 * Revision 1.10  1996/11/07  02:37:30  hayakawa
 * �������Ϣ��u64types.h�˰�ư����
 *
 * Revision 1.9  1996/10/20  09:22:57  hayakawa
 * _LANGUAGE_C_PLUS_PLUS �� __cplusplus ���ѹ�
 *
 * Revision 1.8  1996/10/01  05:28:08  hayakawa
 * UPBOUND��DOWNBOUND���ɲ�
 *
 */

#ifndef __MACRO_H_
#define __MACRO_H_

/*
 * Misc constants
 */

#ifndef TRUE
#define TRUE			(0 == 0)
#endif
#ifndef FALSE
#define FALSE			(!TRUE)
#endif
#ifndef true
#define true TRUE
#endif
#ifndef True
#define True TRUE
#endif
#ifndef false
#define false FALSE
#endif
#ifndef False
#define False FALSE
#endif

/*
 * ��®���Τ���Υޥ���
 */

/*
 * type�Υ������򣲤��п��ˤ���
 * �����������Τ٤���Ǥʤ���Фʤ�ʤ�
 * ��������1,2,4,8,16,32,64,128,256�Τ����줫�Ǥʤ���Фʤ�ʤ�
 * ����ʳ��ξ��� -1 ���֤�
 * �����ͤ� int �Ǥ���
 */
#define _SIZE2LOG2(type, n, m) ((sizeof(type) == (1 << (n))) ? (n) : (m))
#define SIZE2LOG2(type) \
        _SIZE2LOG2(type, 0, \
        _SIZE2LOG2(type, 1, \
	_SIZE2LOG2(type, 2, \
	_SIZE2LOG2(type, 3, \
	_SIZE2LOG2(type, 4, \
	_SIZE2LOG2(type, 5, \
	_SIZE2LOG2(type, 6, \
	_SIZE2LOG2(type, 7, \
	_SIZE2LOG2(type, 8, \
	_SIZE2LOG2(type, 9, \
	_SIZE2LOG2(type, 10, \
        _SIZE2LOG2(type, 11, \
	_SIZE2LOG2(type, 12, \
	_SIZE2LOG2(type, 13, \
	_SIZE2LOG2(type, 14, \
	_SIZE2LOG2(type, 15, \
		   -1))))))))))))))))
//
/*
 * char*�Ǥʤ��ݥ��󥿤�int��­�������®������
 * t:�ݥ��󥿤�������(��:int *p �ʤ� int)
 * p:�ݥ�����
 * i:�û�������
 */
#define XPOINTER(t, p, i) \
	((1 << -(sizeof(t) != sizeof(*(p)))), \
	 ((t *)((char *)(p) + ((i) << SIZE2LOG2(*(p))))))
//
/*
 * char*�Ǥʤ��ݥ��󥿤�int��­�������®������
 * t:�ݥ��󥿷�(��:typedef int *(int_p) �ʤ� int_p)
 * p:�ݥ�����
 * i:�û�������
 */
#define XPOINTER_P(t, p, i) \
	((1 << (sizeof(t) != sizeof(p))), \
	 ((t)((char *)(p) + ((i) << SIZE2LOG2(*(p))))))
//
/*
 * char�Ǥʤ�������������®������
 * t:����η�(��:int)
 * a:����
 * i:ź��
 */
#define XARRAY1(t, a, i) \
	((1 << (sizeof(t) != sizeof((a)[0]))), \
	 (*(t *)((char *)(a) + \
		 ((i) << SIZE2LOG2((a)[0])))))
//
/*
 * char�Ǥʤ�������������®������
 * t:����η�(��:int)
 * a:����
 * i:ź��1
 * j:ź��2
 */
#define XARRAY2(t, a, i, j) \
	((1 << (sizeof(t) != sizeof((a)[0][0]))), \
	 (*(t *)((char *)(a) + \
		 ((i) << SIZE2LOG2((a)[0])) + \
		 ((j) << SIZE2LOG2((a)[0][0])))))
//
/*
 * char�Ǥʤ�������������®������
 * t:����η�(��:int)
 * a:����
 * i:ź��1
 * j:ź��2
 * k:ź��3
 */
#define XARRAY3(t, a, i, j, k) \
	((1 << (sizeof(t) != sizeof((a)[0][0][0]))), \
	 (*(t *)((char *)(a) + \
		 ((i) << SIZE2LOG2((a)[0])) + \
		 ((j) << SIZE2LOG2((a)[0][0])) + \
		 ((k) << SIZE2LOG2((a)[0][0][0])))))
//}

/*
 * ���ѤΥޥ���ʤɤ����
 */
/*#define Max(a, b)	(((a) > (b)) ? (a) : (b))*/
/*#define Min(a, b)	(((a) < (b)) ? (a) : (b))*/
#ifndef MAX
#define MAX(a, b)	(((a) > (b)) ? (a) : (b))
#endif
#ifndef MIN
#define MIN(a, b)	(((a) < (b)) ? (a) : (b))
#endif
/*#define SGN(X)		(((X) > 0) ? 1 : (((X) == 0) ? 0 : -1))*/
#ifndef SGN
#define SGN(X)		(((X) > 0) - ((X) < 0)))
#endif

#define SSizeof(a)	((int)sizeof(a))
#define number(a)	(sizeof(a) / sizeof(a[0])) /* ��������ǿ����֤� */
#define Number(a)	(sizeof(a) / sizeof(a[0])) /* ��������ǿ����֤� */
#define SNumber(a)	(SSizeof(a) / SSizeof(a[0])) /* ��������ǿ����֤� */

#define UPBOUND(n, b)	DOWNBOUND((unsigned long)(n) + (unsigned long)(b) - 1ul, b) /* �Х�������ڤ�夲Ĵ�� */
#define DOWNBOUND(n, b)	((unsigned long)(n) & ~((unsigned long)(b) - 1ul)) /* �Х�������ڤ�Τ�Ĵ�� */

#define WRAP(no, min, max) (((no) - (min) + ((max) - (min))) % ((max) - (min)))
#define CLAMP(no, min, max) (((no) < (min)) ? (min) : (((no) > (max)) ? (max) : (no)))

#if 0
/*
 * �ӥå����
 * �ޤ����ͤ��ǤޤäƤ��ʤ�
 */
#define BIT_TEST(a, b)	(~((a)|~(b)) == 0) /* 3 nor, nor, sltiu */
#define BIT_SET(a, b)	((a) |= (b))
#define BIT_CLEAR(a, b)	((a) &= ~(b))
#endif

#endif
