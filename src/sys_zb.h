/* $Id: sys_zb.h,v 2.1 1998/10/22 11:41:56 zelda Exp $ */

/*
 * �ڥХåե��ΰ�
 * ���ɥåȤΥӥåȿ�:�����ʸ����
 * ���ɥåȿ�:�������ɥåȡʥ��顼�ե졼��Хåե���Ʊ����
 * �ĥɥåȿ�:�������ɥåȡʥ��顼�ե졼��Хåե���Ʊ����
 *
 * ����:���ϥ���������ˤʤäƤ��뤬,���ȹ⤵����ѤˤǤ���褦�ˤ�����
 */

#ifndef __SYS_ZB_H_
#define __SYS_ZB_H_

#include "u64basic.h"
#include "sys_cfb.h"

#define SYS_ZB_TYPE	u16	/* ��������Ǥη� */
#define SYS_ZB_PIXBIT	16	/* ���ɥåȤΥӥåȿ�:���� */
#define	SYS_ZB_WD	SYS_CFB_WD	/* ���ɥåȿ� */
#define	SYS_ZB_HT	SYS_CFB_HT	/* �ĥɥåȿ� */
#define	SYS_ZB_BOUND	64	/* �Х������:�����Х��ȡ� */

extern SYS_ZB_TYPE sys_zb[SYS_ZB_HT][SYS_ZB_WD]; 

#endif /* __SYS_ZB_H_ */
