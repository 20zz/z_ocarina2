/*
 * $Id: fault.h,v 1.1.1.1 2003/03/10 22:42:25 tong Exp $
 * ��¤��
 * $Log: fault.h,v $
 * Revision 1.1.1.1  2003/03/10 22:42:25  tong
 * new OBJ tree for ocarina from Nintendo
 *
 * Revision 2.11  2001-02-05 21:51:54+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.10  2001-02-05 10:42:43+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.9  2001-01-09 19:55:28+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.8  2000-10-12 11:43:02+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.7  2000-03-07 22:40:54+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.6  1999-10-20 17:38:53+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.5  1999-10-19 15:56:43+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.4  1999-09-14 09:28:55+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.3  1999-09-13 15:28:45+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.2  1999-09-13 11:25:08+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.1  1998-10-22 20:46:20+09  hayakawa
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.11  1998-10-22 20:45:56+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.10  1998-10-01 18:22:19+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.9  1998-05-27 16:30:17+09  hayakawa
 * ������Ȥ��˥��饤����ȴؿ���Ƥ٤�褦�ˤ���
 *
 * Revision 1.8  1997/11/18  12:48:59  hayakawa
 * DEBUG��FAULT
 *
 * Revision 1.7  1997/11/18  02:07:36  hayakawa
 * fault_display_enable�ɲ�
 * �ޥ����ɲ�
 *
 * Revision 1.6  1997/11/05  12:46:23  hayakawa
 * fault_recieded_fault��fault_recieved_fault
 *
 * Revision 1.5  1997/11/04  02:10:55  hayakawa
 * fault_partner_debug�ɲ�
 * fault_recieded_fault�ɲ�
 * SetUpFrameBuffer�ѹ�
 *
 * Revision 1.4  1997/10/08  05:37:16  hayakawa
 * ROMDEBUG
 *
 * Revision 1.3  1997/07/11  07:09:14  hayakawa
 * �¸����桩
 *
 * Revision 1.2  1997/03/27  00:24:45  hayakawa
 * fault_partner_debug�ե饰�ο���
 *
 * Revision 1.1  1996/10/14  05:57:08  hayakawa
 * Initial revision
 *
 */
/********************************************************************************
    debug.h: NINTENDO64 game system header

    October 9, 1996
 ********************************************************************************/

#ifndef FAULT_H
#define FAULT_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif
#if 0
}
#endif

#include "pad.h"		/* pad_t */
    
#define FAULT_THREAD_ID		2
#define FAULT_CB_THREAD_ID	2
#define FAULT_NMESSAGES		1
#define FAULT_STACKSIZE		0x600 /* ���� 0x2dc(yoshi) */
#define FAULT_STACKSIZE64	(FAULT_STACKSIZE / 8)
#define FAULT_PRIORITY		OS_PRIORITY_APPMAX
#define FAULT_CB_PRIORITY	(OS_PRIORITY_APPMAX - 1)

/************************************************************************/
/*									*/
/*  Debugger record							*/
/*									*/
/************************************************************************/

typedef struct fault_client_s {
    struct fault_client_s   *next;
    void (*callback)(void *arg1, void *arg2);
    void *arg1;
    void *arg2;
} fault_client_t;
typedef struct fault_client2_s {
    struct fault_client2_s   *next;
    void *(*callback)(void *ptr, void *arg2);
    void *arg2;
} fault_client2_t;

typedef struct DebugThread {
    OSThread	thread;				/* thread record	*/
    u64		stack[FAULT_STACKSIZE64];	/* thread stack memory	*/
    OSMesgQueue mesgque;			/* thread message queue	*/
    OSMesg	mesgbuf[FAULT_NMESSAGES];	/* thread message buffer */

    u8 fault_partner_debug; /* !0:�ǥХå��������ɽ��������ѡ��ȥʡ��������ܤ� */
    u8 fault_recieved_fault; /* 0:�۾�̵�� 1:OS_EVENT_CPU_BREAK����� 2:OS_EVENT_FAULT����� 3:�����ʥ�å���������� 4:fault_HungUpMsg�ƽФ� */
    u8 fault_display_enable;	/* !0:�ǥХå�ɽ���򤹤� */
    u8 auto_key_mode;		/* !0:�����򲡤��ʤ��Ƥ⼫ưŪ��ɽ������ */
    OSThread *fault_thread; /* ���������åɤؤΥݥ��� */
    void (*callback_get_pads)(pad_t *pads); /* ������Хå��ؿ�:�ѥåɥǡ������� */
    fault_client_t  *clientList; /* �桼��ɽ���ѥ�����Хå� */
    fault_client2_t  *clientList2; /* ���ɥ쥹�Ѵ��ѥ�����Хå� */
    fault_client_t  *clientList3; /* ��ȥ졼�������ѥ�����Хå� */
    pad_t pads[MAXCONTROLLERS];	/* �ѥåɤξ������¸�����ΰ� */
    void *debugger_framebuffer;	/* !NULL:�ǥХå������ѤǤ���Хåե� */
    void *callback_stack;	/* !NULL:������Хå����̥���åɤ�ư�������ѥ����å� */
} DebugThread;

/************************************************************************/
/*									*/
/*  �ؿ��ץ�ȥ�����							*/
/*									*/
/************************************************************************/
   
extern void DbStartDebugger(void);
extern void DbSetFrameBuffer(u16 *framebuf, u16 width, u16 height);
extern void fault_RemoveClient(fault_client_t *c);
extern void fault_AddClient(fault_client_t *c, void (*callback)(void *, void *), void *arg1, void *arg2);
extern void fault_AddressConverterAddClient(fault_client2_t *c, void *(*callback)(void *, void *), void *arg2);
extern void fault_AddressConverterRemoveClient(fault_client2_t *c);
extern void fault_KeyWait(void);
extern void fault_PrintStackTrace(OSThread *thread, int base_x, int base_y, int maxnum);
extern void *fault_AddressConvert(void *ptr);

/*
 * �����Х��ѿ����
 */
extern DebugThread  debugger;	/* �ǥХå����饹 */

#define DbSetPartnerDebug()	(void)(debugger.fault_partner_debug = 1)
#define DbIsRecievedFault()	(void)(debugger.fault_recieved_fault != 0)
#define DbIsDisplayEnable()	(void)(debugger.fault_display_enable != 0)
#define DbSetDisplayEnable()	(void)(debugger.fault_display_enable = 1)
#define DbSetDisplayDisable()	(void)(debugger.fault_display_enable = 0)
#define DbSetAutoKeyMode()	(void)(debugger.auto_key_mode = 1)
#define DbSetManualKeyMode()	(void)(debugger.auto_key_mode = 0)
#define DbSetCallBackStack(x)	(void)(debugger.callback_stack = (x))

#define FAULT_MESG_RETRACE	((OSMesg)3) /* ��ȥ졼����Ȥ򤵤��뤿��Υ�å����� */

/*
 * SwapBuffer���Ƥ�褤���ɤ������֤��ؿ�
 * ����ե��å�����åɤ���ߤλ���¾�Υ���åɤ�����Ƥ⡢�ǥХå�ɽ����
 * ������Ƥ��ޤ���
 */
#define DbKeepFrameBuffer() 	((this)->fault_FaultedThreadId != 0)
#define DbFaultAnyThread() 	((this)->fault_FaultedThreadId != 0)
#define DbFaultWait() 		((DbFaultAnyThread(this)?osDestroyThread():(void)0))
				 
#ifdef HungUp
#undef HungUp
#endif

extern void fault_HungUpMsg(const char *msg1, const char *msg2);
extern void fault_HungUp(const char *srcfile, int line);
#define HungUp()		fault_HungUp(__FILE__, __LINE__)
#define Defined_fault_HungUp

#if 0
{
#endif
#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* FAULT_H */
