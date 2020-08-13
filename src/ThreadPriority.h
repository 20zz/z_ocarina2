/*
 * $Id: ThreadPriority.h,v 2.1 1998/10/22 11:41:56 zelda Exp $
 *
 * ����å�ͥ���̤��������
 * �����ͤϡ���տ������ʤ���Фʤ�ʤ�
 *
 * $Log: ThreadPriority.h,v $
 * Revision 2.1  1998/10/22  11:41:56  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.11  1998/10/19 07:19:44  hayakawa
 * PRIORITY_DDMSG��ͥ���٤�PRIORITY_N64DD��Ʊ���ˤ���
 *
 * Revision 1.10  1998-10-06 23:13:41+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.9  1998-10-06 17:31:10+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.8  1998-09-14 23:01:46+09  hayakawa
 * PRIORITY_N64DD��ͥ���٤򲼤���
 *
 * Revision 1.7  1998-07-03 16:23:31+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.6  1998-04-28 21:06:39+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.5  1998-04-21 22:39:15+09  hayakawa
 * 64DD���ѹ�
 *
 * Revision 1.4  1997-11-08 17:20:15+09  hayakawa
 * PRIORITY_IRQMGR
 *
 * Revision 1.3  1996/10/12  08:12:28  hayakawa
 * �إå����ѹ�
 *
 */

#ifndef __THREADPRIORITY_H_
#define __THREADPRIORITY_H_

#undef USE_DDMEDIUM		/* �����褷�ʤ��ä��ΤǷ�ɻȤ�ʤ� */

typedef enum threadpriority_e {
#if defined(USE_DDMEDIUM)
    PRIORITY_DDMEDIUM = 13,
#endif /* defined(USE_DDMEDIUM) */
    PRIORITY_MAIN = 10,		/* �������� */
    PRIORITY_GRAPH,		/* �������� */
    PRIORITY_AUDIO,		/* �������� */
    PRIORITY_N64DD,		
    PRIORITY_DDMSG = PRIORITY_N64DD, /* GRAPH,AUDIO,N64DD��ߤޤäƤ���֤ǤΤ߽������� */
    PRIORITY_PADMGR,
    PRIORITY_SCHEDULER,
    PRIORITY_DMAMGR,		
    PRIORITY_IRQMGR,		
    PRIORITY_FAULTMGR,		/* ��äȤ�⤤ɬ�פ����� */
    PRIORITY_MSGMGR,		/* ��äȤ�⤤ɬ�פ����� */
    PRIORITY_MAX
} threadpriority_t;

#endif
