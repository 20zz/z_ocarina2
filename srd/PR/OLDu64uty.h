/*
 * $Id: OLDu64uty.h,v 1.1 2003/03/14 03:27:04 tong Exp $
 *
 * �����ϣ��ѥߥ˥桼�ƥ���ƥ��ؿ���
 *
 * $Log: OLDu64uty.h,v $
 * Revision 1.1  2003/03/14 03:27:04  tong
 * copied SRD dir from old tree to new tree.
 *
 * Revision 1.1.1.1  2003/01/17 21:06:42  tong
 * ZELDA-OCARINA OF TIME (20L) build from Nintendo
 *
 * Revision 2.3  2001-02-05 21:53:52+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.2  2001-02-01 20:12:10+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.1  1998-10-22 20:19:27+09  hayakawa
 * �ңϣͽФ��С������
 *
 * Revision 1.3  1998-04-01 11:40:29+09  hayakawa
 * ��������ͤ� __cplusplus �� _LANGUAGE_C_PLUS_PLUS ���ѹ�
 *
 * Revision 1.2  1997/04/09  10:07:53  hayakawa
 * osContInitX���ɲ�
 *
 * Revision 1.1  1997/03/05  05:33:24  hayakawa
 * Initial revision
 *
 */

#ifndef __U64UTY_H_
#define __U64UTY_H_

#include <ultra64.h>

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif
#if 0
}
#endif
    
extern void KillRspRdp(void);		/* RSP/RDP������ߤ����� */
extern s32 osContInitX(OSMesgQueue *mq, u8 *bitpattern, OSContStatus *status); /* ɬ�����ơ�������������� */

/*
 * �ʲ��δؿ��� osGetTime() ������Ȥ��ƻ��Ѥ��ޤ���
 * ���������֤��ͤ� u32 �ʤΤ� osGetTime() ��Ʊ���ͤ��ݻ����Ƥ���櫓�ǤϤ���ޤ���
 * �ƴؿ��֤��ͤ�ɬ������1000�ܤδط����ݤĤȤ����ݾڤϤɤ��ˤ⤢��ޤ���
 * ���ʤ��Ȥ��Ÿ������� 4.3 �ðʾ�вᤷ�Ƥ������
 * utGetTime_us() �� utGetTime_ns() / 1000
 * �δط���������Ω���ʤ����Ȥ�Ф��Ƥ����Ƥ���������
 *
 * ��� 91.62453�ðʲ��λ��֤�פ�ʤ� osGetCOunt() ��Ȥ��Τ����֤Ƥ���
 * �Ǥ���Ӥ����ÿ���ޥ�����Ѵ����ʤ��ȥ���衪��������ˡ�
 *
 * static u32 start;
 * u32 now = osGetCOunt();
 * if (now - start > OS_USEC_TO_CYCLES(90*1000*1000)) {
 *     osSyncPrintf("90�÷в�\n");
 * }
 *
 */
extern u32 utGetTime_s(void);   /* 0-4294967296 s(136years + alpha */
extern u32 utGetTime_ms(void);  /* 0-4294967.296s(49days + 17:2:47) */
extern u32 utGetTime_us(void);  /* 0-4294.967296s(1:11:34) */
extern u32 utGetTime_ns(void);  /* 0-4.294967296s */

#if 0
{
#endif
#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* __U64UTY_H_ */
