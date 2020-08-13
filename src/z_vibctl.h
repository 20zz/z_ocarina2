/*
 * $Id: z_vibctl.h,v 2.1 1998-10-22 20:51:48+09 zelda Exp $
 *
 *	�������ư�ѥå�����
 *
 * $Log: z_vibctl.h,v $
 * Revision 2.1  1998-10-22 20:51:48+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.7  1998/09/18 01:21:35  zelda
 * �ޥ���ΰ�������
 *
 * Revision 1.6  1998-09-17 22:29:10+09  zelda
 * ����ε�ǽ����ߤ����ޥ���С������˰�¸����褦���ѹ�
 *
 * Revision 1.5  1998-09-11 15:44:24+09  sasaki
 * *** empty log message ***
 *
 * Revision 1.4  1998/08/22 10:44:33  hayakawa
 * *** empty log message ***
 *
 * Revision 1.3  1998-07-17 20:44:05+09  hayakawa
 * ��������
 *
 * Revision 1.2  1998-03-19 22:05:13+09  komatu
 * *** empty log message ***
 *
 * Revision 1.1  1997/11/06  05:25:43  hayakawa
 * Initial revision
 *
 */

#ifndef __Z_VIBCTL_H_
#define __Z_VIBCTL_H_

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#if 0

#include "sys_vibctl.h"			/* VibCtl */

/*
 * ��ư�ѥ����󥳡��ɤ��ѥå������ǳ�Ǽ����ޤ�
 * ������ե졼�������Ͽ���졢���Τ��ȣ��˥��ꥢ����ޤ���
 */
extern u32 sys_rumble_entry[4];

/*
 * ��ư�ѥå���ư������ѥ�᡼���򥻥åȤ��ޤ�
 * c:����ȥ����ֹ�(0-3)
 * p:��ư�ѥ(0-255)
 * t:��³�ե졼��(0-255)
 * s:����ѥ(0-255)
 */
#define RUMBLE_ENTRY_N(c, p, t, s) \
do { \
    sys_rumble_entry[c] = (((p) << 16) | ((t) << 8) | ((s) << 0)); \
} while (0)
    
/*
 * ���������ѤȤ������������ RUMBLE_ENTRY_N ��Ʊ���Ǥ�
 * p:��ư�ѥ(0-255)
 * t:��³�ե졼��(0-255)
 * s:����ѥ(0-255)
 */
#define RUMBLE_ENTRY(p, t, s) RUMBLE_ENTRY_N(0, p, t, s)

/*
 * ������ե졼����˥����ॹ��åɤ���ƤФ��
 */
extern void
z_vibctl_move(void);

/*
 * �����������н����
 */
extern void
z_vibctl_init(void);

/*
 * �����������и����
 */
extern void
z_vibctl_cleanup(void);
    
/*
 * ������������¸�߳�ǧ
 * 0==�ʤ�
 * 0!=����
 */
extern int
z_vibctl_RumblePackIsConnected(void);

/*
 * �����������Х��ơ���������
 */
extern void
z_vibctl_StageInit(void);

#else

#include "z_vibctl2.h"

#define RUMBLE_ENTRY_N(c, p, t, s) 	RUMBLE_ENTRY2_N(c, p, t, s, 0.0f)
#define RUMBLE_ENTRY(p, t, s) 		RUMBLE_ENTRY2(p, t, s, 0.0f)

#endif

/*
 * ��С������ǥ��顼�ˤʤ�ʤ��褦�˰��������ޤ�
 * �����ʸߴ����Ϥ���ޤ���
 * �Ȥ�ʤ��Ǥ�������
 */
#define	VIB_ON(c, p, t, s) \
do { \
	int pp = (p), tt = (t), ss = (s); \
	RUMBLE_ENTRY_N(c, \
		       (pp > 100) ? 255 : pp * 255 / 100, \
		       (tt * 3 > 255) ? 255 : tt * 3, \
		       (ss > 100) ? 255 : ss * 255 / 100); \
} while (0)

#if 01				/* ��å����ǻȤäƤ��ޥ���  */
#define	VIB_A1(a) VIB_ON(0, a, 20, 9) /* û��ư & ������ */
#define	VIB_A2(a) VIB_ON(0, a, 20, 1) /* û��ư & �帺�� */
#define	VIB_B1(a) VIB_ON(0, a, 50, 9) /* Ĺ��ư & ������ */
#define	VIB_B2(a) VIB_ON(0, a, 50, 1) /* Ĺ��ư & �帺�� */
#endif

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* __Z_VIBCTL_H_ */
