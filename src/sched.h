/*
 * $Id: sched.h,v 2.3 1998/11/09 08:41:33 zelda Exp $
 *
 * ������ѥ������������塼��
 * �ӣǣɤΥ������塼��򸵤˺������ޤ�����
 *
 * $Log: sched.h,v $
 * Revision 2.3  1998/11/09  08:41:33  zelda
 * *** empty log message ***
 *
 * Revision 2.2  1998-11-06 17:59:33+09  hayakawa
 * �����å������䤷��
 *
 * Revision 2.1  1998-10-22 20:41:56+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.9  1998/04/10 11:49:01  hayakawa
 * �̥륿�����Υޥ����ɲ�
 * �����å��������̾�
 *
 * Revision 1.8  1998-04-01 11:47:06+09  hayakawa
 * ��������ͤ� __cplusplus �� _LANGUAGE_C_PLUS_PLUS ���ѹ�
 *
 * Revision 1.7  1997/11/21  08:41:55  hayakawa
 * USE_IRQMGR��ɸ��Ƴ������
 *
 * Revision 1.6  1997/11/19  08:55:50  hayakawa
 * USE_IRQMGR�ν����ɲ�
 *
 * Revision 1.5  1997/11/06  07:07:22  hayakawa
 * USE_IRQMGR�Ǿ�拾��ѥ��뤹��褦�ˤ���
 *
 * Revision 1.4  1997/03/17  01:02:03  hayakawa
 * ��¤�Τ���framebuffer���Ф���
 * gfx��graph���ѹ�
 * ��¤�Τ�current_swapbuffer��pending_swapbuffer1��pending_swapbuffer2���ɲ�
 * osScGetIntQ��osScGetIntQ��ޥ�������
 *
 * Revision 1.3  1997/03/13  11:56:40  hayakawa
 * �ӣǣɤΥ������塼��إå��μ����ߤ��ʤ��褦�ˤ���
 *
 * Revision 1.2  1997/02/12  01:14:27  hayakawa
 * �áܡܥ���ѥ����б�
 *
 * Revision 1.1  1997/02/06  01:18:34  hayakawa
 * Initial revision
 *
 */

#ifndef __SCHED_H_
#define __SCHED_H_

#include "ultra64.h"
#include "cfbinfo.h"
#include "irqmgr.h"		/* iramgr_t */

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#define OS_SC_STACKSIZE      (0x400+0x100+0x100) /* ���� 0x144 */

#define OS_SC_RETRACE_MSG       1
#define OS_SC_DONE_MSG          2
#define OS_SC_RDP_DONE_MSG      3
#define OS_SC_PRE_NMI_MSG       4
#define OS_SC_LAST_MSG          4	/* this should have highest number */
#define OS_SC_MAX_MESGS         8

typedef struct {
    short type;
    char  misc[30];
} OSScMsg;

typedef struct OSScTask_s {
    struct OSScTask_s   *next;          /* note: this must be first */
    u32                 state;
    u32			flags;
    cfbinfo_t		*cfbinfo;	/* used by graphics tasks */

    OSTask              list;
    OSMesgQueue         *msgQ;
    OSMesg              msg;
#ifndef _FINALROM                       /* all #ifdef items should    */
    OSTime              startTime;      /* remain at the end!!, or    */
    OSTime              totalTime;      /* possible conflict if       */
#endif                                  /* FINALROM library used with */
} OSScTask;                             /* non FINALROM code          */


#define M_NULTASK 0

/*
 * OSScTask flags:
 */
#define OS_SC_NEEDS_RDP	        0x0001	/* uses the RDP */
#define OS_SC_NEEDS_RSP	        0x0002  /* uses the RSP */
#define OS_SC_DRAM_DLIST        0x0004  /* SP & DP communicate through DRAM */
#define OS_SC_PARALLEL_TASK     0x0010	/* must be first graph task on list */
#define OS_SC_LAST_TASK	        0x0020	/* last task in queue for frame */
#define OS_SC_SWAPBUFFER        0x0040	/* swapbuffers when graph task done */

#define OS_SC_RCP_MASK		0x0003	/* mask for needs bits */
#define OS_SC_TYPE_MASK		0x0007	/* complete type mask */

/*
 * OSScClient:
 *
 * Data structure used by threads that wish to communicate to the
 * scheduling thread
 *
 */
typedef struct SCClient_s {
    struct SCClient_s   *next;  /* next client in the list      */
    OSMesgQueue         *msgQ;  /* where to send the frame msg  */
} OSScClient;

typedef struct {
    OSMesgQueue interruptQ;
    OSMesg      intBuf[OS_SC_MAX_MESGS];
    OSMesgQueue cmdQ;
    OSMesg      cmdMsgBuf[OS_SC_MAX_MESGS];
    OSThread    thread;
    OSScTask    *audioListHead;
    OSScTask    *graphListHead;
    OSScTask    *audioListTail;
    OSScTask    *graphListTail;
    OSScTask    *curRSPTask;
    OSScTask    *curRDPTask;
    u32         frameCount;
    s32         doAudio;
    cfbinfo_t 	*current_swapbuffer; /* ɽ����ե졼��Хåե� */
    cfbinfo_t 	*pending_swapbuffer1; /* ɽ���Ԥ��ե졼��Хåե��� */
    cfbinfo_t 	*pending_swapbuffer2; /* ɽ���Ԥ��ե졼��Хåե��� */
    int 	firsttime;	/* �ǽ��ɽ������osViBlack(FALSE)���� */
    irqmgr_client_t irqclient;
} OSSched;

extern void
osCreateScheduler(OSSched *s, void *stack, OSPri priority,
		  u8 mode, u8 numFields, irqmgr_t *irqmgr);
extern OSMesgQueue *
osScGetCmdQ(OSSched *s);

extern void
osScKickEntryMsg(OSSched *s);

#define osScGetCmdQ(sc) (&(sc)->cmdQ)
#define osScGetIntQ(sc) (&(sc)->interruptQ)

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* __SCHEDX_H_ */
