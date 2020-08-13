/*
 * $Id: z_fbdemo_triforce.h,v 2.1 1998/10/22 12:17:25 zelda Exp $
 *
 * ��������� �� �ե졼��Хåե��ǥ�ʥȥ饤�ե�������
 *
 * $Log: z_fbdemo_triforce.h,v $
 * Revision 2.1  1998/10/22  12:17:25  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.7  1998/04/01 02:46:56  hayakawa
 * ��������ͤ� __cplusplus �� _LANGUAGE_C_PLUS_PLUS ���ѹ�
 *
 * Revision 1.6  1997/11/12  13:24:54  hayakawa
 * fbdemo_wipe_startup�ɲ�
 *
 * Revision 1.5  1997/11/11  07:43:01  hayakawa
 * fbdemo_wipe.move�ΰ����ѹ�
 *
 * Revision 1.4  1997/11/07  10:37:55  hayakawa
 * fbdemo_triforce_setscaletype
 *
 * Revision 1.3  1997/11/07  05:59:34  hayakawa
 * *** empty log message ***
 *
 * Revision 1.2  1997/10/16  11:15:11  hayakawa
 * ��ž
 *
 * Revision 1.1  1997/10/03  14:19:08  hayakawa
 * Initial revision
 *
 */

#ifndef _Z_FBDEMO_TRIFORCE_H_
#define _Z_FBDEMO_TRIFORCE_H_

#include "u64basic.h"

typedef struct {
    Mtx model_smtx;		/* ��������󥰹��� */
    Mtx model_rmtx;		/* ���ơ��ȹ��� */
    Mtx model_tmtx;		/* �ȥ�󥹥졼�ȹ��� */
} fbdemo_triforce_dynamic_t;

typedef struct {
    rgba8888_u_t color;		/* ɽ���� */
    float rate;			/* 1.0:���� 0.0:�Ǿ� */
    float rate_speed;		/* ®�� */
    int scale_type;		/* 0:�̾�̾� 1:ȿž�̾� 2:�̾���� 3:ȿž���� */
    int tri_type;		/* 1:�̾� 2:ȿž */
    Mtx project_mtx;		/* �ץ������������� */
    int bank;			/* dynamic�Х� */
    fbdemo_triforce_dynamic_t dynamic[2];
} fbdemo_triforce_t;

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif
    
    fbdemo_triforce_t *fbdemo_triforce_init(fbdemo_triforce_t *this);
    void fbdemo_triforce_cleanup(fbdemo_triforce_t *this);
    void fbdemo_triforce_startup(fbdemo_triforce_t *this);
    void fbdemo_triforce_draw(fbdemo_triforce_t *this, Gfx **gpp);
    void fbdemo_triforce_move(fbdemo_triforce_t *this, int frame);
    void fbdemo_triforce_setcolor_rgba8888(fbdemo_triforce_t *this, u32 c);
    void fbdemo_triforce_settype(fbdemo_triforce_t *this, int t);
    void fbdemo_triforce_setscaletype(fbdemo_triforce_t *this, int t);
    int  fbdemo_triforce_is_finish(fbdemo_triforce_t *this);

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C"  */
#endif

#endif /* _Z_FBDEMO_TRIFORCE_H_ */
