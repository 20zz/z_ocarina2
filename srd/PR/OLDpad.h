/*
 * $Id: OLDpad.h,v 1.1 2003/03/14 03:27:04 tong Exp $
 *
 * �ѥåɥ��������Ѵؿ�
 * �������ɤ�������Ƥ��뤫�䡢���ξ����ꥻ�åȤ���ؿ�������ޤ�
 *
 * �áܡ��Ѥ˥���饤��ؿ��ˤʤäƤ�����ΤʤΤǡ�
 * ����ޥ���ˤʤ��ǽ�����礭��
 *
 * �ʤ����ѥåɤΥӥåȥѥ������
 * /usr/include/PR/os.h �� Nintendo's official button names ��
 * �ͤ��Ѥ��뤳��
 *
 * $Log: OLDpad.h,v $
 * Revision 1.1  2003/03/14 03:27:04  tong
 * copied SRD dir from old tree to new tree.
 *
 * Revision 1.1.1.1  2003/01/17 21:06:42  tong
 * ZELDA-OCARINA OF TIME (20L) build from Nintendo
 *
 * Revision 2.6  2000-03-28 22:11:49+09  hayakawa
 * ����Х���
 *
 * Revision 2.5  2000-03-28 20:08:51+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.4  2000-03-28 20:04:33+09  hayakawa
 * Pad_set_logical_stick
 *
 * Revision 2.3  2000-01-14 15:30:33+09  hayakawa
 * ̵��̣�ʤΤ�pad_relative_stick��᤿
 *
 * Revision 2.2  1999-07-26 17:47:56+09  hayakawa
 * �ӥåȥ����å���ޥ���
 *
 * Revision 2.1  1998-10-22 20:19:27+09  hayakawa
 * �ңϣͽФ��С������
 *
 * Revision 1.18  1998-07-23 11:26:21+09  hayakawa
 * Pad_stick_x() Pad_stick_y() ��ʪ���ͤ��֤��Ƥ���
 *
 * Revision 1.17  1998-07-22 22:11:29+09  hayakawa
 * �褯�ͤ�����ޥ�����ɬ�פ�̵�����
 *
 * Revision 1.16  1998-07-22 22:07:42+09  hayakawa
 * �ޥ���С�����󤬴ؿ���ƤФʤ��褦�ˤ���
 *
 * Revision 1.15  1998-04-01 11:40:40+09  hayakawa
 * ��������ͤ� __cplusplus �� _LANGUAGE_C_PLUS_PLUS ���ѹ�
 *
 * Revision 1.14  1997/12/18  08:00:10  hayakawa
 * �ؿ��ץ�ȥ����פ�extern���ղ�
 * C++�б�
 *
 * Revision 1.13  1997/10/09  12:59:19  hayakawa
 * include�ե������ѹ�
 *
 * Revision 1.12  1997/07/08  01:53:35  hayakawa
 * ���ʥ����ƥ��å���ͷ�Ӥ򣷤��ѹ�
 *
 * Revision 1.11  1997/02/12  01:13:47  hayakawa
 * �áܡܥ���ѥ����б�
 *
 * Revision 1.10  1996/12/02  01:21:05  hayakawa
 * controller.h��pad_t���Хåƥ��󥰤��Ƥ���Τ��к���֤���
 *
 * Revision 1.9  1996/11/27  04:37:49  hayakawa
 * �����Ȥ��ɲ�
 *
 */

#ifndef __PAD_H_
#define __PAD_H_

#include "os.h"			/* OSContPad */

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

    /*
      now.button
      now.stick_x
      now.stick_y
      now.errno
      before.button
      on.button
      off.button
     */
#ifndef __PAD_T_
#define __PAD_T_
typedef struct pad_s {
    OSContPad	now;		/* �ǿ��Υѥåɤξ��� */
    OSContPad	before;		/* ����Υѥåɤξ��� */
    OSContPad	on;		/* ����ȥꥬ */
    OSContPad	off;		/* ���եȥꥬ */
} pad_t;
#endif /* __PAD_T_ */
typedef pad_t Pad;
    
#if 0
typedef struct padex_s {
    u16		now_button;
    s8		now_stick_x;	/* -128 <= stick_x <= 127 */
    s8		now_stick_y;	/* -128 <= stick_y <= 127 */
    u8		now_errno;
    u8		flags;
    u16		before_button;
    s8		before_stick_x;	/* -128 <= stick_x <= 127 */
    s8		before_stick_y;	/* -128 <= stick_y <= 127 */
    u16		on_button;
    u16		off_button;
    s8		on_stick_x;	/* -64 <= on_stick_x <= +64 */
    s8		on_stick_y;	/* -64 <= on_stick_y <= +64 */
    s8		stick_angle;	/* -128 <= stick_angle <= 127 */
    u8		stick_length;	/* 0 <= stick_length <= 255 */
    float	f_stick_x;	/* -1.0f <= f_stick_x <= 1.0f */
    float	f_stick_y;	/* -1.0f <= f_stick_y <= 1.0f */
} padex_t;
typedef padex_t Padex;
#endif

#define CBUTTONS_MASK	(U_CBUTTONS|L_CBUTTONS|R_CBUTTONS|D_CBUTTONS)
#define JPAD_MASK	(U_JPAD|L_JPAD|R_JPAD|D_JPAD)
#define TRIG_MASK	(L_TRIG|R_TRIG|Z_TRIG)
#define BUTTON_MASK	(A_BUTTON|B_BUTTON|START_BUTTON)
#define PAD_MASK	(CBUTTONS_MASK|JPAD_MASK|TRIG_MASK|BUTTON_MASK)

/* ����� */
extern void pad_init(pad_t *__this);
/* ���� */
extern void pad_cleanup(void);
/* �ȥꥬ����򥯥ꥢ���� */
extern void pad_flush(pad_t *__this);
/* ���ʥ����ƥ��å������� */
extern void pad_correct_stick(pad_t *__this);

#if defined(__PAD_C__)

/* ���ꤵ�줿����������������Ƥ��뤫 */
extern int pad_push_only(pad_t *__this, u16 bit);
/* ���ꤵ�줿������������Ƥ��뤫 */
extern int pad_push_also(pad_t *__this, u16 bit);
/* ���ꤵ�줿�����������줿�� */
extern int pad_on_trigger(pad_t *__this, u16 bit);
/* ���ꤵ�줿������Υ���줿�� */
extern int pad_off_trigger(pad_t *__this, u16 bit);

extern int pad_button(pad_t *__this);
extern int pad_trigger(pad_t *__this);
extern int pad_stick_x(pad_t *__this);
extern int pad_stick_y(pad_t *__this);
#if 0
extern int pad_relative_stick_x(pad_t *__this);
extern int pad_relative_stick_y(pad_t *__this);
#endif
extern int pad_physical_stick_x(pad_t *__this);
extern int pad_physical_stick_y(pad_t *__this);
extern void pad_set_logical_stick(pad_t *__this, int x, int y);
extern int pad_logical_stick_x(pad_t *__this);
extern int pad_logical_stick_y(pad_t *__this);

#else  /* defined(__PAD_C__) */

/*#define __Pad__BitTest(button, bit) (((button) & (bit)) == (bit))*/
#define __Pad__BitTest(button, bit)	(~((button) | ~(bit)) == 0)
#define pad_push_only(pad, bit) 	((pad)->now.button == (bit))
#define pad_push_also(pad, bit) 	__Pad__BitTest((pad)->now.button, bit)
#define pad_on_trigger(pad, bit) 	__Pad__BitTest((pad)->on.button, bit)
#define pad_off_trigger(pad, bit) 	__Pad__BitTest((pad)->off.button, bit)
#define pad_button(pad) 		(int)((pad)->now.button)
#define pad_trigger(pad) 		(int)((pad)->on.button)
#define pad_stick_x(pad) 		pad_logical_stick_x(pad)
#define pad_stick_y(pad) 		pad_logical_stick_y(pad)
#if 0
#define pad_relative_stick_x(pad) 	(int)((pad)->on.stick_x)
#define pad_relative_stick_y(pad) 	(int)((pad)->on.stick_y)
#endif
#define pad_physical_stick_x(pad) 	(int)((pad)->now.stick_x)
#define pad_physical_stick_y(pad) 	(int)((pad)->now.stick_y)
#define pad_set_logical_stick(pad, x, y) (void)((pad)->off.stick_x = (s8)(x), (pad)->off.stick_y = (s8)(y))
#define pad_logical_stick_x(pad) 	(int)((pad)->off.stick_x)
#define pad_logical_stick_y(pad) 	(int)((pad)->off.stick_y)

#endif /* defined(__PAD_C__) */


/*
 * ���饹�ѿ���ά�С������Υޥ���
 * pad_t *pad;
 */
#define Pad_push_only(bit) 	pad_push_only(pad, bit)
#define Pad_push_also(bit) 	pad_push_also(pad, bit)
#define Pad_on_trigger(bit) 	pad_on_trigger(pad, bit)
#define Pad_off_trigger(bit) 	pad_off_trigger(pad, bit)
#define Pad_button() 		pad_button(pad)
#define Pad_trigger() 		pad_trigger(pad)
#define Pad_stick_x() 		pad_stick_x(pad)
#define Pad_stick_y() 		pad_stick_y(pad)
#if 0
#define Pad_relative_stick_x() 	pad_relative_stick_x(pad)
#define Pad_relative_stick_y() 	pad_relative_stick_y(pad)
#endif
#define Pad_physical_stick_x() 	pad_physical_stick_x(pad)
#define Pad_physical_stick_y() 	pad_physical_stick_y(pad)
#define Pad_set_logical_stick(x, y) pad_set_logical_stick(pad, x, y)
    
#define Pad_logical_stick_x() 	pad_logical_stick_x(pad)
#define Pad_logical_stick_y() 	pad_logical_stick_y(pad)


#define INDEF  7  /* ���ʥ����ƥ��å���ͷ��(StarFox64��16) */
#define JMAX   60  /* ���ʥ����ƥ��å������������ͤ������� */

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* __PAD_H_ */
