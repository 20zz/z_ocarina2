/*
 * $Id: sys_ucode.h,v 2.1 1998-10-22 20:41:56+09 zelda Exp $
 *
 * �ޥ��������ɾ������
 *
 * $Log: sys_ucode.h,v $
 * Revision 2.1  1998-10-22 20:41:56+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.5  1998/09/05 11:13:58  zelda
 * *** empty log message ***
 *
 * Revision 1.4  1998-09-05 19:36:26+09  zelda
 * *** empty log message ***
 *
 * Revision 1.3  1998-09-05 18:53:06+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.2  1998-09-05 17:53:27+09  hayakawa
 * ���פʽ�����Ϥ����Ƥ���äȤǤ����򸺤餽��
 *
 * Revision 1.1  1998-06-17 19:46:11+09  hayakawa
 * Initial revision
 *
 *
 */

#ifndef SYS_UCODE_H
#define SYS_UCODE_H

#include "os.h"

extern u64 *ucode_GetRspBootTextStart(void);
extern u32  ucode_GetRspBootTextSize(void);

extern u64 *ucode_GetPolyTextStart(void);
extern u64 *ucode_GetPolyDataStart(void);

#ifndef NOUSE_LINE_UCODE
extern u64 *ucode_GetLineTextStart(void);
extern u64 *ucode_GetLineDataStart(void);
#endif /* NOUSE_LINE_UCODE */

#endif /* SYS_UCODE_H */
