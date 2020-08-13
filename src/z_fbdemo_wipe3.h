/*
 * $Id: z_fbdemo_wipe3.h,v 2.1 1998/10/22 12:17:25 zelda Exp $
 *
 * �磻�ץǥ�
 *
 * $Log: z_fbdemo_wipe3.h,v $
 * Revision 2.1  1998/10/22  12:17:25  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.2  1998/04/24 06:31:55  hayakawa
 * �����ɲá�����
 *
 * Revision 1.1  1998-04-22 23:13:31+09  hayakawa
 * Initial revision
 *
 */

#ifndef _Z_FBDEMO_WIPE3_H_
#define _Z_FBDEMO_WIPE3_H_

#include "u64basic.h"

typedef struct {
    Mtx model_smtx;		/* ��������󥰹��� */
    Mtx model_rmtx;		/* ���ơ��ȹ��� */
    Mtx model_tmtx;		/* �ȥ�󥹥졼�ȹ��� */
} fbdemo_wipe3_dynamic_t;

typedef struct {
    rgba8888_u_t color;		/* ɽ���� */
    rgba8888_u_t alt_color;	/* �ѹ��� */
    int txt_s;			/* �ƥ������㥹������� */
    int txt_t;			/* �ƥ������㥹������� */
    int speed;			/* ®�� /3frame */
    u8  wipeType;		/* �磻�ץ�����   0:Wipeout 1:Wipein */
    u8  colorType;		/* ��������       0:�� 1:�� 2:�������� */
    u8  speedType;		/* ®�٥�����     0:ɸ��® 1:��® 2:��® 3:��������? */
    u8  textureNo;		/* �ƥ��������ֹ� 0-3 */
    u8  finished;		/* !0:�磻�״�λ */
    u8  bank;			/* dynamic�Х� */
    u16 normal;
    Mtx project_mtx;		/* �ץ������������� */
    Mtx lookat_mtx;		/* �ץ������������� */
    void *texture;		/* �ƥ�������ݥ��� */
    fbdemo_wipe3_dynamic_t dynamic[2];
} fbdemo_wipe3_t;

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif
    
    extern fbdemo_wipe3_t *fbdemo_wipe3_init(fbdemo_wipe3_t *this);
    extern void fbdemo_wipe3_cleanup(fbdemo_wipe3_t *this);
    extern void fbdemo_wipe3_startup(fbdemo_wipe3_t *this);
    extern void fbdemo_wipe3_draw(fbdemo_wipe3_t *this, Gfx **gpp);
    extern void fbdemo_wipe3_move(fbdemo_wipe3_t *this, int frame);
    extern void fbdemo_wipe3_setcolor_rgba8888(fbdemo_wipe3_t *this, u32 c);
    extern void fbdemo_wipe3_setaltcolor_rgba8888(fbdemo_wipe3_t *this, u32 c);
    extern void fbdemo_wipe3_settype(fbdemo_wipe3_t *this, int t);
    extern void fbdemo_wipe3_setscaletype(fbdemo_wipe3_t *this, int t);
    extern int  fbdemo_wipe3_is_finish(fbdemo_wipe3_t *this);

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C"  */
#endif

#endif /* _Z_FBDEMO_WIPE3_H_ */
