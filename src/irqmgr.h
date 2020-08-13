/*
 * $Id: irqmgr.h,v 2.1 1998/10/22 11:41:56 zelda Exp $
 *
 * ���󥿥�ץȥ�å������ޥ͡�����
 * �������塼��Υ��֥��åȤǤ���
 *
 * ���ݡ��Ȥ���ɣңѥ�å�����
 *   ����ľ��ȥ졼��
 *   ��PRE_NMI
 *
 * $Log: irqmgr.h,v $
 * Revision 2.1  1998/10/22  11:41:56  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.3  1998/04/27 04:24:32  hayakawa
 * irqmgr_WaitMesg����ʤ�
 *
 * Revision 1.2  1998-04-01 11:47:10+09  hayakawa
 * ��������ͤ� __cplusplus �� _LANGUAGE_C_PLUS_PLUS ���ѹ�
 *
 * Revision 1.1  1997/11/19  08:55:21  hayakawa
 * Initial revision
 *
 * Revision 1.5  1997/11/18  06:29:55  hayakawa
 * �����å�������Ĵ��
 *
 * Revision 1.4  1997/11/14  11:18:41  hayakawa
 * RetraceTime��RetraceCount�ɲ�
 *
 * Revision 1.3  1997/10/30  05:00:05  hayakawa
 * ResetTime
 * ResetStatus
 *
 * Revision 1.2  1997/10/14  11:57:19  hayakawa
 * ����
 *
 * Revision 1.1  1997/10/10  01:42:53  hayakawa
 * Initial revision
 *
 */

#ifndef __IRQMGR_H_
#define __IRQMGR_H_

#include "ultra64.h"

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#define IRQMGR_STACKSIZE      0x500 /* ���� 0x314 */

#define IRQMGR_RETRACE_MSG       1
#define IRQMGR_DONE_MSG          2
#define IRQMGR_PRENMI500_MSG     3
#define IRQMGR_PRE_NMI_MSG       4
#define IRQMGR_LAST_MSG          4	/* this should have highest number */
#define IRQMGR_MAX_MESGS         8

typedef struct {
    short type;
    char  misc[30];
} irqmgr_msg_t;			/* OSScMsg��Ʊ�� */

/*
 * irqmgr_client_t:
 */
typedef struct irqmgr_client_s { /* SCClient_s��Ʊ�� */
    struct irqmgr_client_s   *next;  /* next client in the list      */
    OSMesgQueue         *msgQ;  /* where to send the frame msg  */
} irqmgr_client_t;		/* OSScClient��Ʊ�� */

typedef struct {
    irqmgr_msg_t     retraceMsg;
    irqmgr_msg_t     prenmiMsg;
    irqmgr_msg_t     prenmi500Msg;
    OSMesgQueue interruptQ;
    OSMesg      intBuf[IRQMGR_MAX_MESGS];
    OSThread    thread;
    irqmgr_client_t  *clientList;
    u8		recieved_prenmi; /* PreNMI��������ȣ��ˤʤ� */
    OSTime	time_prenmi; /* PreNMI�������ä����� */
    OSTimer     timer;
    OSTime	retraceTimeWork;
} irqmgr_t;

extern void CreateIRQManager(irqmgr_t *, void *stack, OSPri priority, u8 numFields);
extern void irqmgr_AddClient(irqmgr_t *, irqmgr_client_t *c, OSMesgQueue *msgQ);
extern void irqmgr_RemoveClient(irqmgr_t *, irqmgr_client_t *c);

/*
 * �ꥻ�åȥ����å���������Ƥ��뤫��
 */
#define irqmgr_is_recieved_prenmi(irqmgr) ((irqmgr)->recieved_prenmi)
#define irqmgr_get_time_prenmi(irqmgr) ((irqmgr)->time_prenmi)
#define irqmgr_get_time_after_prenmi(irqmgr) (osGetTime() - irqmgr_get_time_prenmi(irqmgr))

/*
 * �����Х��ѿ�
 */
extern volatile int ResetStatus; /* 0:�̾� 1:PRENMI 2:0.5�÷в� */
extern volatile OSTime ResetTime; /* PRENMI��ȯ���������� */
extern volatile OSTime RetraceTime;	/* ��ȥ졼���ֳ֤μ�¬�� */
extern volatile int RetraceCount;	/* ��ȥ졼��ȯ����� */

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* __IRQMGRX_H_ */
