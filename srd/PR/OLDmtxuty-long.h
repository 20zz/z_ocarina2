/*
 * $Id: OLDmtxuty-long.h,v 1.1 2003/03/14 03:27:04 tong Exp $
 *
 * $Log: OLDmtxuty-long.h,v $
 * Revision 1.1  2003/03/14 03:27:04  tong
 * copied SRD dir from old tree to new tree.
 *
 * Revision 1.1.1.1  2003/01/17 21:06:42  tong
 * ZELDA-OCARINA OF TIME (20L) build from Nintendo
 *
 * Revision 2.1  1998-10-22 20:19:27+09  hayakawa
 * �ңϣͽФ��С������
 *
 * Revision 1.7  1998-04-01 11:38:54+09  hayakawa
 * ��������ͤ� __cplusplus �� _LANGUAGE_C_PLUS_PLUS ���ѹ�
 * IdentityMtx���
 *
 * Revision 1.6  1996/11/21  06:34:28  hayakawa
 * ���󥯥롼�ɤ���٤��ե�����򥤥󥯥롼�ɤ��Ƥ��ʤ��ä�
 *
 * Revision 1.5  1996/10/20  09:15:30  hayakawa
 * _LANGUAGE_C_PLUS_PLUS �� __cplusplus ���ѹ�
 *
 */

/*
 * ����黻�ٱ�ؿ� (long)
 */

#ifndef __MTXUTY_LONG_H_
#define __MTXUTY_LONG_H_

#include "u64types.h"

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

void
guLoadIdentityi(
    Mtx *const m1
);
void
guLoadMatrixi(
    Mtx *const m1,
    const Mtx *const m2
);
void
guMultMatrixi(
    Mtx *const m1,
    const Mtx *const m2
);
void
guRotatei(
    Mtx *const m1,
    const float angle,		/* ��ž���� */  
    const float x,
    const float y,
    const float z
);
void
guScale3i(
    Mtx *const m1,
    const float x,
    const float y,
    const float z
);
void
guScale2i(
    Mtx *const m1,
    const float x,
    const float y
);
void
guRotateZi(
    Mtx *const m1,
    const float angle		/* ��ž���� */  
);
void
guRotateYi(
    Mtx *const m1,
    const float angle		/* ��ž���� */  
);
void
guRotateXi(
    Mtx *const m1,
    const float angle		/* ��ž���� */  
);
void
guTranslate2i(
    Mtx *const m1,
    const float x,
    const float y
);
void
guTranslate3i(
    Mtx *const m1,
    const float x,
    const float y,
    const float z
);

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* __MTXUTY_LONG_H_ */
