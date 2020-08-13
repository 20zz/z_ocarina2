/*
 * $Id: z_n64dd_keep.h,v 2.1 1998-10-22 21:17:25+09 zelda Exp $
 *
 * �����ģĥ��󥿡��ե������ؿ�
 * ������
 *
 * $Log: z_n64dd_keep.h,v $
 * Revision 2.1  1998-10-22 21:17:25+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.7  1998/10/08 10:58:01  hayakawa
 * *** empty log message ***
 *
 * Revision 1.6  1998-10-07 10:44:38+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.5  1998-10-03 13:52:09+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.4  1998-09-24 23:08:57+09  hayakawa
 * n64dd_LoadDiskOverlay�ɲ�
 *
 * Revision 1.3  1998-09-22 14:20:55+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.2  1998-09-17 15:33:35+09  hayakawa
 * n64dd_isDiskMode�Υ쥸�������ȿž
 *
 * Revision 1.1  1998-09-15 21:44:40+09  hayakawa
 * Initial revision
 *
 */

#ifndef __Z_N64DD_KEEP_H_
#define __Z_N64DD_KEEP_H_

#include "z_debug.h"		/* SREG */

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

/*
 * �����Х��ѿ����
 */
extern char _n64dd_isStay;	/* !0:�����ģ����������¸�ߤ��� */
extern char _n64dd_isConnected;	/* !0:�����ģĤ���³����Ƥ��� */
extern char _n64dd_isInitialized; /* !0:�����ģĽ�����Ѥ� */
extern volatile char _n64dd_isAvaliable; /* !0:�����ģĻ��Ѳ�ǽ(no busy) */
extern volatile char _n64dd_isSoundStopped; /* !0:������ɻߤ�Ƥ��� */
extern char _n64dd_isEnable;	/* ??? */

/*
 * n64dd_isStay()		!0:�����ģ����������¸�ߤ���
 * n64dd_isConnected()		!0:�����ģĤ���³����Ƥ���
 * n64dd_isInitialized()	!0:�����ģĽ�����Ѥ�
 */
#define n64dd_isStay() 		((void)0, _n64dd_isStay)
#define n64dd_isConnected() 	((void)0, _n64dd_isConnected)
#define n64dd_isInitialized() 	((void)0, _n64dd_isInitialized)

/*
 * n64dd�������ȥ���
 */
extern void n64dd_LoadOverlay(void);
/*
 * n64dd�������ȥ������
 */
extern void n64dd_UnloadOverlay(void);
/*
 * DISK���饪���С��쥤�ץ�������ɤ���
 */
extern int n64dd_LoadDiskOverlay(void);
/*
 * �ңϣ͡��ǥ������С�����󥻥å�
 * ������ǡ�������ľ��˸ƤӽФ����
 */
extern void
n64dd_SetDiskVersion(
    int flag		/* 0:ROM VERSION !0:DISK VERSION */
    );

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* __Z_N64DD_KEEP_H_ */
