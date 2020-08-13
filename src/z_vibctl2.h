/*
 * $Id: z_vibctl2.h,v 2.1 1998/10/22 11:51:48 zelda Exp $
 *
 * ����������������ʥޥ���С�������
 *
 * $Log: z_vibctl2.h,v $
 * Revision 2.1  1998/10/22  11:51:48  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.5  1998/10/01 04:21:35  hayakawa
 * *** empty log message ***
 *
 * Revision 1.4  1998-09-18 18:50:42+09  sasaki
 * �����������Х��ơ������Ѷ����ػ�
 *
 * Revision 1.3  1998/09/18 02:28:30  zelda
 * RUMBLE_ENTRY2_TYPE_A,B,C�ɲ�
 *
 * Revision 1.2  1998-09-18 10:21:27+09  zelda
 * �ޥ���ΰ�������
 * ����������
 *
 * Revision 1.1  1998-09-17 22:26:56+09  zelda
 * Initial revision
 *
 */

#ifndef __Z_VIBCTL2_H_
#define __Z_VIBCTL2_H_

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#include "sys_vibctl2.h"			/* VibCtl */

/*
 *	MAX_VIB_DISTANCE �Ȥϡ���ư����³���Υ
 */
#define		MAX_VIB_DISTANCE	(1000)

/*
 *	�����������Х�����ե졼�����
 *	������ư�˥ǡ����򥻥å�
 */
extern void
z_vibctl2_vib_force_set(
    float	 	,
    unsigned char	,
    unsigned char	,
    unsigned char	
    );
/*
 * ��ư�ѥå�������ư������ѥ�᡼���򥻥åȤ��ޤ�
 * ����������
 * p:��ư�ѥ(0-255)
 * t:��³�ե졼��(0-255)
 * s:����ѥ(0-255)
 * d:��Υ(0.0f - 1000.0f*1000.0f �ʾ��̵��)
 */
#define RUMBLE_ENTRY_FORCE2(p, t, s, d) z_vibctl2_vib_force_set(d, p, t, s)

/*
 *	�����������Х�����ե졼�����
 *	��ư�ѣգţգŤ˥ǡ����򥻥å�
 */
extern void
z_vibctl2_vib_setQ(
    float	 	,
    unsigned char	,
    unsigned char	,
    unsigned char	
    );

/*
 * ��ư�ѥå���ư������ѥ�᡼���򥻥åȤ��ޤ�
 * c:����ȥ����ֹ�(0-3) ��̵�뤵��ޤ�
 * p:��ư�ѥ(0-255)
 * t:��³�ե졼��(0-255)
 * s:����ѥ(0-255)
 * d:��Υ(0.0f - 1000.0f*1000.0f �ʾ��̵��)
 */
#define RUMBLE_ENTRY2_N(c, p, t, s, d) 	((void)(c), z_vibctl2_vib_setQ(d, p, t, s))

/*
 * ���������ѤȤ������������ RUMBLE_ENTRY2_N ��Ʊ���Ǥ�
 * p:��ư�ѥ(0-255)
 * t:��³�ե졼��(0-255)
 * s:����ѥ(0-255)
 * d:��Υ(0.0f - 1000.0f*1000.0f �ʾ��̵��)
 */
#define RUMBLE_ENTRY2(p, t, s, d) 	RUMBLE_ENTRY2_N(0, p, t, s, d)

/*
 * ��ñ����ޥ��� ���£�
 * d:��Υ(0.0f - 1000.0f*1000.0f �ʾ��̵��)
 */
#define RUMBLE_ENTRY2_TYPE_A(d) 	RUMBLE_ENTRY2(255, 20, 150, d)
#define RUMBLE_ENTRY2_TYPE_B(d) 	RUMBLE_ENTRY2(180, 20, 100, d)
#define RUMBLE_ENTRY2_TYPE_C(d) 	RUMBLE_ENTRY2(120, 20, 10, d)

/*
 * ������ե졼����˥����ॹ��åɤ���ƤФ��
 */
extern void
z_vibctl2_move(void);

/*
 * �����������н����
 */
extern void
z_vibctl2_init(void);

/*
 * �����������и����
 */
extern void
z_vibctl2_cleanup(void);
    
/*
 * ������������¸�߳�ǧ
 * 0==�ʤ�
 * 0!=����
 */
extern int
z_vibctl2_RumblePackIsConnected(void);

/*
 * �����������Х��ơ���������
 */
extern void
z_vibctl2_StageInit(void);

/*
 * �����������Х��ơ������Ѷ����ػ�
 */
extern void
z_vibctl2_StageCancel(void);

/*
 * �����������п�ư���ĥե饰����
 * flag == 0 ��ư����
 * flag != 0 ��ư�Ե���
 */
extern void
z_vibctl2_pause(int flag);

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* __Z_VIBCTL2_H_ */
