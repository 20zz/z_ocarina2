/*
 * $Id: z_fbdemo_fade.h,v 2.1 1998/10/22 12:17:25 zelda Exp $
 *
 * �ե����ɥ�����
 *
 * $Log: z_fbdemo_fade.h,v $
 * Revision 2.1  1998/10/22  12:17:25  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.8  1998/06/26 13:13:24  hayakawa
 * ��¤�й�������
 *
 * Revision 1.7  1998-04-01 11:46:57+09  hayakawa
 * ��������ͤ� __cplusplus �� _LANGUAGE_C_PLUS_PLUS ���ѹ�
 *
 * Revision 1.6  1997/11/14  08:05:26  hayakawa
 * SREG(82)��Ȥ�ʤ��褦�ˤ���
 *
 * Revision 1.5  1997/11/13  07:06:09  hayakawa
 * type�ɲ�
 *
 * Revision 1.4  1997/11/12  13:25:09  hayakawa
 * fbdemo_wipe_startup�ɲ�
 *
 * Revision 1.3  1997/11/11  07:43:45  hayakawa
 * fbdemo_wipe.move�ΰ����ѹ�
 *
 * Revision 1.2  1997/11/11  05:06:37  hayakawa
 * *** empty log message ***
 *
 * Revision 1.1  1997/11/11  01:26:10  hayakawa
 * Initial revision
 *
 */

#ifndef _Z_FBDEMO_FADE_H_
#define _Z_FBDEMO_FADE_H_

#include "u64basic.h"

typedef struct {
#if 0
    int type;			/* ���������� */
    int finished;		/* ��λ�ե饰 */
    rgba8888_u_t color;		/* ɽ���� */
    int frame;			/* �ե졼��� */
    int frame_max;		/* ��λ�ե졼��� */
    int FadeIn;			/* !0:FadeIn */
    short SREG82;
#else
    unsigned char type;		/* ���������� */
    unsigned char finished;	/* ��λ�ե饰 */
    unsigned char FadeIn;	/* !0:FadeIn */
    unsigned char __aligner;	/*  */
    rgba8888_u_t color;		/* ɽ���� */
    unsigned short frame;	/* �ե졼��� */
    unsigned short frame_max;	/* ��λ�ե졼��� */
#endif
} fbdemo_fade_t;

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif
    
    extern fbdemo_fade_t *fbdemo_fade_init(fbdemo_fade_t *this);
    extern void fbdemo_fade_cleanup(fbdemo_fade_t *this);
    extern void fbdemo_fade_startup(fbdemo_fade_t *this);
    extern void fbdemo_fade_draw(fbdemo_fade_t *this, Gfx **gpp);
    extern void fbdemo_fade_move(fbdemo_fade_t *this, int frame);
    extern void fbdemo_fade_setcolor_rgba8888(fbdemo_fade_t *this, u32 c);
    extern void fbdemo_fade_settype(fbdemo_fade_t *this, int t);
    extern void fbdemo_fade_setscaletype(fbdemo_fade_t *this, int t);
    extern int  fbdemo_fade_is_finish(fbdemo_fade_t *this);

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C"  */
#endif

#endif /* _Z_FBDEMO_FADE_H_ */
