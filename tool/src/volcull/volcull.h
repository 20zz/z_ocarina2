/*
 * $Id: volcull.h,v 1.1.1.1 2003/03/10 23:12:46 tong Exp $
 *
 * ��ư�ܥ�塼�५���
 *
 * gSPDisplayList ����Υǥ����ץ쥤�ꥹ�Ȥ˴ޤޤ��ĺ�����顢
 * ������Ѥ�ĺ������Ф�������󥰥ǥ����ץ쥤�ꥹ�Ȥ������Ϣ�뤹��
 *
 *
 * $Log: volcull.h,v $
 * Revision 1.1.1.1  2003/03/10 23:12:46  tong
 * new OBJ tree for ocarina from Nintendo
 *
 * Revision 1.1  1996/10/11  02:08:27  hayakawa
 * Initial revision
 *
 *
 */
#ifndef __VOLCULL_H_
#define __VOLCULL_H_

#include "ultra64.h"

#if __cplusplus
extern "C" {
#endif

    Gfx *create_volume_culling(Gfx *gfxp);

#if __cplusplus
}
#endif

#endif /* __VOLCULL_H_ */
