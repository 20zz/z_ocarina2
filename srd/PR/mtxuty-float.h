/*
 * $Id: mtxuty-float.h,v 1.1 2003/03/14 03:27:05 tong Exp $
 *
 * $Log: mtxuty-float.h,v $
 * Revision 1.1  2003/03/14 03:27:05  tong
 * copied SRD dir from old tree to new tree.
 *
 * Revision 1.1.1.1  2003/01/17 21:07:07  tong
 * ZELDA-OCARINA OF TIME (20L) build from Nintendo
 *
 * Revision 2.1  1998-10-22 20:19:27+09  hayakawa
 * �ңϣͽФ��С������
 *
 * Revision 1.8  1998-04-01 11:40:44+09  hayakawa
 * ��������ͤ� __cplusplus �� _LANGUAGE_C_PLUS_PLUS ���ѹ�
 *
 * Revision 1.7  1996/11/21  06:33:50  hayakawa
 * ���󥯥롼�ɤΤ�������ѹ�
 *
 * Revision 1.6  1996/10/20  09:14:36  hayakawa
 * _LANGUAGE_C_PLUS_PLUS �� __cplusplus ���ѹ�
 *
 */

/*
 * ����黻�ٱ�ؿ� (float)
 */

#ifndef __MTXUTY_FLOAT_H_
#define __MTXUTY_FLOAT_H_

#include "u64types.h"

extern Mtxf IdentityMtxf;

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

void
guLoadIdentityf(
    Mtxf *const m1
);
void
guLoadMatrixf(
    Mtxf *const m1,
    const Mtxf *const m2
);
void
guMultMatrixf(
    Mtxf *const m1,
    const Mtxf *const m2
);
void
guScale2f(
    Mtxf *const m1,
    const float x,
    const float y
);
void
guRotateZf(
    Mtxf *const m1,
    const float angle		/* ��ž���� */  
);
void
guRotateYf(
    Mtxf *const m1,
    const float angle		/* ��ž���� */  
);
void
guRotateXf(
    Mtxf *const m1,
    const float angle		/* ��ž���� */  
);
void
guTranslate2f(
    Mtxf *const m1,
    const float x,
    const float y
);
void
guScale3f(
    Mtxf *const m1,
    const float x,
    const float y,
    const float z
);
void
guRotatef(
    Mtxf *const m1,
    const float angle,		/* ��ž���� */  
    const float x,
    const float y,
    const float z
);
void
guTranslate3f(
    Mtxf *const m1,
    const float x,
    const float y,
    const float z
);
void
guScale2Rf(
    Mtxf *const m1,
    const float x,
    const float y
);
void
guRotateXRf(
    Mtxf *const m1,
    const float angle		/* ��ž���� */  
);
void
guRotateYRf(
    Mtxf *const m1,
    const float angle		/* ��ž���� */  
);
void
guRotateZRf(
    Mtxf *const m1,
    const float angle		/* ��ž���� */  
);
void
guTranslate2Rf(
    Mtxf *const m1,
    const float x,
    const float y
);
void
guTranslate3Rf(
    Mtxf *const m1,
    const float x,
    const float y,
    const float z
);
void
guXYZ(
    xyz_t *const p1,
    xyz_t *const p2,
    const Mtxf *const m1
);
void
guXY(
    xy_t *const p1,
    xy_t *const p2,
    const Mtxf *const m1
);

#define guX(m1, x1, y1 ,z1) ((x1) * (m1)->mf[0][0] + (y1) * (m1)->mf[1][0] + (z1) * (m1)->mf[2][0] + (m1)->mf[3][0])
#define guY(m1, x1, y1 ,z1) ((x1) * (m1)->mf[0][1] + (y1) * (m1)->mf[1][1] + (z1) * (m1)->mf[2][1] + (m1)->mf[3][1])
#define guZ(m1, x1, y1 ,z1) ((x1) * (m1)->mf[0][2] + (y1) * (m1)->mf[1][2] + (z1) * (m1)->mf[2][2] + (m1)->mf[3][2])

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* __MTXUTY_FLOAT_H_ */
