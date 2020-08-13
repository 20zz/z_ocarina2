/*
 * $Id: sys_cfb.h,v 2.1 1998/10/22 11:41:56 zelda Exp $
 *
 * ���顼�ե졼��Хåե��ΰ�
 * �Хåե���:��
 * ���ɥåȤΥӥåȿ�:����
 * ���ɥåȿ�:������
 * �ĥɥåȿ�:������
 *
 * ����:���ϥ���������ˤʤäƤ��뤬,���ȹ⤵����ѤˤǤ���褦�ˤ�����
 * $Log: sys_cfb.h,v $
 * Revision 2.1  1998/10/22  11:41:56  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.7  1998/09/04 05:38:06  hayakawa
 * sys_cfb_init�ΰ����ɲ�
 *
 * Revision 1.6  1998-06-08 22:00:14+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.5  1998-04-30 20:53:06+09  hayakawa
 * ưŪ���ɥ쥹�ãƣ�
 *
 * Revision 1.4  1997-03-19 22:47:37+09  hayakawa
 * �����꡼�󥵥���������̥ե�����ˤ���
 *
 * Revision 1.3  1997/03/17  12:21:20  hayakawa
 * �ե졼��Хåե����򣲤ˤ�����������
 *
 */

#ifndef __SYS_CFB_H_
#define __SYS_CFB_H_

#include "u64basic.h"

#define SYS_CFB_TYPE	u16	/* ��������Ǥη� */
#define SYS_CFB_PIXBIT	16	/* ���ɥåȤΥӥåȿ�:���� */
#define SYS_CFB_MAX 	2	/* �Хåե���:�� */
#define	SYS_CFB_WD	320	/* ���ɥåȿ�:������ */
#define	SYS_CFB_HT	240	/* �ĥɥåȿ�:������ */
#define	SYS_CFB_BOUND	64	/* �Х������:�����Х��� */

extern void sys_cfb_init(int rammode); /* 0:4M 1:8M */
extern void sys_cfb_cleanup(void);
extern void *sys_cfb_getptr(int page);
extern void *sys_cfb_get_bottom(void);

#endif /* __SYS_CFB_H_ */
