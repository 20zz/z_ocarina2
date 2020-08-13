/*
 * $Id: padmgr.h,v 2.1 1998-10-22 20:41:56+09 zelda Exp $
 *
 * �ѥåɥޥ͡�����
 *
 * $Log: padmgr.h,v $
 * Revision 2.1  1998-10-22 20:41:56+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.21  1998/07/17 12:29:03  hayakawa
 * padmgr_AddClient, padmgr_RemoveClient�ɲ�
 *
 * Revision 1.20  1998-04-09 18:34:19+09  hayakawa
 * �����å����������������̡��������
 *
 * Revision 1.19  1998/04/01  02:47:07  hayakawa
 * ��������ͤ� __cplusplus �� _LANGUAGE_C_PLUS_PLUS ���ѹ�
 *
 * Revision 1.18  1997/11/21  08:42:14  hayakawa
 * USE_IRQMGR��ɸ��Ƴ������
 *
 * Revision 1.17  1997/11/18  05:07:18  hayakawa
 * *** empty log message ***
 *
 * Revision 1.16  1997/11/16  13:39:07  hayakawa
 * STACKSIZEĴ��
 *
 * Revision 1.15  1997/11/10  13:52:20  hayakawa
 * MotorLifeTime
 *
 * Revision 1.14  1997/11/06  07:06:33  hayakawa
 * USE_IRQMGR�Ǿ�拾��ѥ��뤹��褦�ˤ���
 *
 * Revision 1.13  1997/11/05  14:10:23  hayakawa
 * ��ư�ѥå������ߥ󥰽���
 * �Х���������¾
 *
 * Revision 1.12  1997/10/09  12:45:33  hayakawa
 * *** empty log message ***
 *
 * Revision 1.11  1997/10/09  10:14:05  hayakawa
 * ��������
 *
 * Revision 1.10  1997/10/09  07:22:59  hayakawa
 * *** empty log message ***
 *
 * Revision 1.9  1997/10/09  05:22:06  hayakawa
 * ��ư�ѥå��б�
 *
 * Revision 1.8  1997/10/08  14:23:08  hayakawa
 * ��ư�ѥå��б�
 * �����å��򳰤˽Ф���
 *
 * Revision 1.7  1997/08/21  02:57:01  hayakawa
 * ʣ������åɤ��饭�����ɤ��褦�ˤ����ʻ��ꡩ��
 *
 * Revision 1.6  1997/03/17  00:58:50  hayakawa
 * ��¤�Τ���now_reading���Ф���
 *
 * Revision 1.5  1997/03/14  00:25:53  hayakawa
 * �إå��ɲ�
 *
 * Revision 1.4  1997/03/13  11:54:18  hayakawa
 * ��¤�ΤΥ��Ф򥽡��Ȥ���
 * ���ꥢ���å���������Ω�ʻȤ��󤷡�
 *
 * Revision 1.3  1997/02/12  01:14:14  hayakawa
 * �áܡܥ���ѥ����б�
 *
 * Revision 1.2  1996/11/27  05:32:07  hayakawa
 * �����Ȥ��ɲ�
 * �ǥ��ȥ饯���κ�����̤���ѡ�
 *
 */

#ifndef __PADMGR_H_
#define __PADMGR_H_

#include "pad.h"
#include "irqmgr.h"

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#define PADMGR_STACKSIZE 0x500	/* ���� 0x304 */

typedef struct padmgr_s padmgr_t;
struct padmgr_s {
    OSContStatus pad_status[MAXCONTROLLERS]; /* ���ơ����� */
    OSMesg	serialLockMsgBuf; /* OS_EVENT_SI��å��ѥХåե� */
    OSMesg	contLockMsgBuf; /* ����ȥ����å��ѥХåե� */
    OSMesg 	recvMsgBufs[4];	/* �������塼�饤�٥�ȼ����ѥХåե� */
    OSMesgQueue	serialLockMsgQ;	/* OS_EVENT_SI��å��ѥ��塼 */
    OSMesgQueue	contLockMsgQ;	/* ����ȥ����å��ѥ��塼 */
    OSMesgQueue recvMsgQ;	/* �������塼�饤�٥�ȼ����ѥ��塼 */
    irqmgr_client_t 	client;	/* �ɣңѥޥ͡�����Υ��饤����ȹ�¤�� */
    irqmgr_t 	*sc;		/* ��������줿�ɣңѥޥ͡����� */
    OSThread	thread;		/* ����åɹ�¤�� */
    volatile pad_t pads[MAXCONTROLLERS]; /* ����ȥ���ǡ��������� */
    OSContPad   last_pad[MAXCONTROLLERS]; /* �ǿ��Υ���ȥ������ */
    volatile u8 pad_pattern;	/* �ѥåɤ���³���� */
    u8 		pad_ch;		/* ���Ѥ���ѥåɿ� */
    u8		Key_switch[MAXCONTROLLERS];	/* !0:�ѥå���³ͭ�� */
    u8		Motor_switch[MAXCONTROLLERS]; /* 0:None 1:��ư�ѥå� 2:�����ѥå� */
    volatile u8 Motor_newflags[MAXCONTROLLERS]; /* Motor 0:Off 1:On */
    u8      	Motor_oldflags[MAXCONTROLLERS]; /* Motor 0:Off 1:On -1:? */
    OSPfs	Motor_Pfs[MAXCONTROLLERS]; /* ��ư�ѥå������� */
    volatile u8 Motor_stop_frame; /* ��ư�ѥå�������ߥե졼�� */
    volatile u8 MotorLifeTime;	/* ��ư�ѥå���ư��ǽ�ե졼�� */
    u8 		recieved_prenmi; /* !0:PRE_NMI�������ä� */
    void 	(*callback)(padmgr_t *, void *); /* ������Хå��ؿ� */
    void	*callback_param; /* ������Хå��ؿ��ѥ�᡼�� */
};


/* �ѥåɥޥ͡��������� */
void
padmgr_Create(
    padmgr_t *this,		/* �ѥåɥޥ͡����������¤�� */
    OSMesgQueue *serialMsgQ,	/* OS_EVENT_SI�˴�Ϣ�Ť���줿��å��������塼 */
    irqmgr_t *sc,		/* ��������줿�ɣңѥޥ͡����� */
    OSId id,			/* �ѥåɥޥ͡�����Σɣ� */
    OSPri pri,			/* �ѥåɥޥ͡������ͥ���� */
    void *stacktail		/* �ѥåɥޥ͡�����Υ����å��Ǹ��� */
);

/* �У��ĥǡ������������ */
void
padmgr_RequestPadData(
    padmgr_t *this,		/* �ѥåɥޥ͡����������¤�� */
    pad_t *padp,		/* �У��ĥǡ������Ǽ����Хåե� */
    int flag			/* !0:�ȥꥬ����򤹤�(�ᥤ��Τ�) */
);

/*
 * ���ꥢ���å������θ������������
 */
void
padmgr_UnlockSerialMesgQ(
    padmgr_t *this,		/* �ѥåɥޥ͡����������¤�� */
    OSMesgQueue *serialMsgQ	/* ���ꥢ���å��������塼 */
);

/*
 * ���ꥢ���å������θ������������
 */
OSMesgQueue *
padmgr_LockSerialMesgQ(
    padmgr_t *this		/* �ѥåɥޥ͡����������¤�� */
);

/*
 * ��ư�ѥå���ꥻ�åȤ���
 */
void
padmgr_RumbleReset(padmgr_t *this);

/*
 * ���ꤷ������ȥ���ο�ư�ѥå���ϣΡ��ϣƣƤ���
 */
void
padmgr_RumbleSet(
    padmgr_t *this,		/* �ѥåɥޥ͡����������¤�� */
    int padno,			/* �ѥå��ֹ� */
    int flag			/* 0:OFF 1:ON */
);

/*
 * �ơ��֥�ǥ���ȥ���ο�ư�ѥå���ϣΡ��ϣƣƤ���
 */
void
padmgr_RumbleSetTbl(
    padmgr_t *this,		/* �ѥåɥޥ͡����������¤�� */
    u8 *flags			/* (0:OFF 1:ON)MAXCONTROLLERS�Ĥ����� */
);

/*
 * ����ȥ������³���֤��������
 * �������ӥåȤ�������������б����Ƥ���
 */
#define padmgr_GetPadPattern(padmgr) (u8)((padmgr)->pad_pattern)

/*
 * �ѥåɥǡ����ɤ߹����Ԥ��δ֤˸ƤФ��ؿ�����Ͽ
 */
#define padmgr_AddClient(padmgr, func, data) \
do { \
    padmgr_t *this = (padmgr); \
    this->callback = func; \
    this->callback_param = data; \
} while (0)

/*
 * �ѥåɥǡ����ɤ߹����Ԥ��δ֤˸ƤФ��ؿ�������
 */
#define padmgr_RemoveClient(padmgr, func, data) \
do { \
    padmgr_t *this = (padmgr); \
    if (this->callback == (func) && this->callback_param == (data)) { \
        this->callback = NULL;      this->callback_param = NULL; \
    } \
} while (0)

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* __PADMGR_H_ */
