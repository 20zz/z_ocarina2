/*
 * $Id: sys_yield_buffer.h,v 2.1 1998/10/22 11:41:56 zelda Exp $
 * �ңãФΣ٣ɣţ̣��ѥХåե��ΰ�
 * $Log: sys_yield_buffer.h,v $
 * Revision 2.1  1998/10/22  11:41:56  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.2  1996/11/01 04:56:23  hayakawa
 * �ңãӥإå��ѹ�
 *
 */

#ifndef __GRAPH_YIELD_BUFFER_H_
#define __GRAPH_YIELD_BUFFER_H_

#include "u64basic.h"

#define SYS_YIELD_TYPE 	u64	/* �Хåե�����������Ǥη� */
#define SYS_YIELD_SIZE 	OS_YIELD_DATA_SIZE /* �Хåե��ΥХ��ȥ����� */
#define	SYS_YIELD_BOUND	16	/* �Х������:16�Х��� */

extern SYS_YIELD_TYPE sys_yield_buffer[SYS_YIELD_SIZE / sizeof(SYS_YIELD_TYPE)];

#endif /* __GRAPH_YIELD_BUFFER_H_ */
