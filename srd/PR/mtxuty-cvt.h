/*
 * $Id: mtxuty-cvt.h,v 1.1 2003/03/14 03:27:05 tong Exp $
 *
 * $Log: mtxuty-cvt.h,v $
 * Revision 1.1  2003/03/14 03:27:05  tong
 * copied SRD dir from old tree to new tree.
 *
 * Revision 1.1.1.1  2003/01/17 21:07:07  tong
 * ZELDA-OCARINA OF TIME (20L) build from Nintendo
 *
 * Revision 2.1  1998-10-22 20:19:27+09  hayakawa
 * �ңϣͽФ��С������
 *
 * Revision 1.6  1998-04-01 11:40:47+09  hayakawa
 * ��������ͤ� __cplusplus �� _LANGUAGE_C_PLUS_PLUS ���ѹ�
 *
 * Revision 1.5  1996/11/26  05:58:08  hayakawa
 * header.h��Ϥ��������̤˥��󥯥롼�ɤ���褦�ˤ���
 *
 * Revision 1.4  1996/10/20  09:14:09  hayakawa
 * _LANGUAGE_C_PLUS_PLUS �� __cplusplus ���ѹ�
 *
 */

/*
 * ����黻�ٱ�ؿ� (�Ѵ�)
 */

#ifndef __MTXUTY_CVT_H_
#define __MTXUTY_CVT_H_

#include "ultra64.h"		/* n64���ܥإå� */
#include "u64types.h"		/* u64�ɲ÷���� */

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

void
guLoadMatrixf2i(
    Mtx *const m1,
    const Mtxf *const m2
);
void
guLoadMatrixi2f(
    Mtxf *const m1,
    const Mtx *const m2
);

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* __MTXUTY_CVT_H_ */
