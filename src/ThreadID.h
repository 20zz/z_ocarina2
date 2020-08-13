/*
 * $Id: ThreadID.h,v 2.1 1998/10/22 11:41:56 zelda Exp $
 *
 * ����åɣɣĤ��������
 * ��˥ǥХå��Ѥǡ�ͥ���̤Ȥϴط��ʤ��Ǥ�
 *
 * $Log: ThreadID.h,v $
 * Revision 2.1  1998/10/22  11:41:56  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.10  1998/10/06 08:31:16  hayakawa
 * *** empty log message ***
 *
 * Revision 1.9  1998-07-03 16:23:35+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.8  1998-04-28 21:06:33+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.7  1998-04-21 22:39:00+09  hayakawa
 * 64DD���ѹ�
 *
 * Revision 1.6  1997-11-16 22:26:37+09  hayakawa
 * IRQMGR�Σɣ��ѹ�
 *
 * Revision 1.5  1997/11/08  08:19:58  hayakawa
 * THREAD_ID_IRQMGR
 *
 * Revision 1.4  1996/10/12  08:11:10  hayakawa
 * �إå����ѹ�
 *
 * revision 1.3	locked by: hayakawa;
 * date: 1996/10/12 08:09:46;  author: hayakawa;  state: Exp;  lines: +2 -1
 * THREAD_ID_RMON���ɲ�
 */

#ifndef __THREADID_H_
#define __THREADID_H_

typedef enum threadid_e {
    THREAD_ID_RMON   = 0,	/* rmon */
    THREAD_ID_IDLE   = 1,	/* �����ɥ�  */
    THREAD_ID_MAIN   = 3,	/* �ᥤ�� */
    THREAD_ID_GRAPH  = 4,	/* ����ե��å��ʥ������ */
    THREAD_ID_SCHED  = 5,	/* �������塼�� */
    THREAD_ID_PADMGR = 7,	/* �ѥåɥޥ͡����� */
    THREAD_ID_N64DD = 8,	/* 64DD�ޥ͡����� */
    THREAD_ID_DDMSG = 9,	/* DDMSG�ޥ͡����� */
    THREAD_ID_DDMEDIUM = 12,	/* DDMEDIUM�ޥ͡����� */
    THREAD_ID_AUDIO  = 10,	/* �����ǥ��� */
    THREAD_ID_MSGMGR = 11,	/* ��å������ޥ͡����� */
    THREAD_ID_FAULTMGR = 17,	/* �ե���ȥޥ͡����� */
    THREAD_ID_DMAMGR = 18,	/* �ģͣ��ޥ͡����� */
    THREAD_ID_IRQMGR = 19,	/* �ɣңѥޥ͡����� */
    THREAD_ID_MAX		/* ����ɣġܣ� */
} threadid_t;

#endif /* __THREADID_H_ */
