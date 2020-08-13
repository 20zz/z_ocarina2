/*
 * $Id: z_fbdemo_wipe1.h,v 2.1 1998/10/22 12:17:25 zelda Exp $
 *
 * �磻�ץǥ�
 *
 * $Log: z_fbdemo_wipe1.h,v $
 * Revision 2.1  1998/10/22  12:17:25  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.8  1998/06/26 13:16:50  hayakawa
 * ��¤�ι�������
 *
 * Revision 1.7  1998-04-23 19:33:35+09  hayakawa
 * alt_color�ɲ�
 *
 * Revision 1.6  1998-04-01 11:46:55+09  hayakawa
 * ��������ͤ� __cplusplus �� _LANGUAGE_C_PLUS_PLUS ���ѹ�
 *
 * Revision 1.5  1997/11/12  13:27:34  hayakawa
 * fbdemo_wipe_startup�ɲ�
 *
 * ������������
 *
 * Revision 1.4  1997/11/11  13:34:51  hayakawa
 * fbdemo_wipe1_setcolor_rgba8888
 *
 * Revision 1.3  1997/11/11  07:43:12  hayakawa
 * fbdemo_wipe.move�ΰ����ѹ�
 *
 * Revision 1.2  1997/11/10  13:50:56  hayakawa
 * �ͱƹ�����б�
 *
 * Revision 1.1  1997/11/08  08:17:49  hayakawa
 * Initial revision
 *
 */

#ifndef _Z_FBDEMO_WIPE1_H_
#define _Z_FBDEMO_WIPE1_H_

#include "u64basic.h"

typedef struct {
    Mtx model_smtx;		/* ��������󥰹��� */
    Mtx model_rmtx;		/* ���ơ��ȹ��� */
    Mtx model_tmtx;		/* �ȥ�󥹥졼�ȹ��� */
} fbdemo_wipe1_dynamic_t;

typedef struct {
#if 0
    rgba8888_u_t color;		/* ɽ���� */
    rgba8888_u_t alt_color;	/* �ѹ��� */
    int Wipein;			/* !0:Wipein 0:Wipeout */
    int txt_s;			/* �ƥ������㥹������� */
    int txt_t;			/* �ƥ������㥹������� */
    u16 normal;
    Mtx project_mtx;		/* �ץ������������� */
    Mtx lookat_mtx;		/* �ץ������������� */
    int bank;			/* dynamic�Х� */
    fbdemo_wipe1_dynamic_t dynamic[2];
    int finished;
#else
    rgba8888_u_t color;		/* ɽ���� */
    rgba8888_u_t alt_color;	/* �ѹ��� */
    u8 Wipein;			/* !0:Wipein 0:Wipeout */
    u8 bank;			/* dynamic�Х� */
    u8 finished;
    u8 __aligner;
    u16 txt_s;			/* �ƥ������㥹������� */
    u16 txt_t;			/* �ƥ������㥹������� */
    u16 normal;
    u16 __aligner16;
    Mtx project_mtx;		/* �ץ������������� */
    Mtx lookat_mtx;		/* �ץ������������� */
    fbdemo_wipe1_dynamic_t dynamic[2];
#endif
} fbdemo_wipe1_t;

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif
    
    extern fbdemo_wipe1_t *fbdemo_wipe1_init(fbdemo_wipe1_t *this);
    extern void fbdemo_wipe1_cleanup(fbdemo_wipe1_t *this);
    extern void fbdemo_wipe1_startup(fbdemo_wipe1_t *this);
    extern void fbdemo_wipe1_draw(fbdemo_wipe1_t *this, Gfx **gpp);
    extern void fbdemo_wipe1_move(fbdemo_wipe1_t *this, int frame);
    extern void fbdemo_wipe1_setcolor_rgba8888(fbdemo_wipe1_t *this, u32 c);
    extern void fbdemo_wipe1_setaltcolor_rgba8888(fbdemo_wipe1_t *this, u32 c);
    extern void fbdemo_wipe1_settype(fbdemo_wipe1_t *this, int t);
    extern void fbdemo_wipe1_setscaletype(fbdemo_wipe1_t *this, int t);
    extern int  fbdemo_wipe1_is_finish(fbdemo_wipe1_t *this);

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C"  */
#endif

#endif /* _Z_FBDEMO_WIPE1_H_ */
