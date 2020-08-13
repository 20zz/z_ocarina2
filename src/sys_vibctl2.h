/*
 * $Id: sys_vibctl2.h,v 2.1 1998/10/22 11:41:56 zelda Exp $
 *
 *	��ư�ѥå�����ʥޥ���С�������
 *
 * $Log: sys_vibctl2.h,v $
 * Revision 2.1  1998/10/22  11:41:56  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.2  1998/10/01 01:38:56  okajima
 * *** empty log message ***
 *
 * Revision 1.1  1998-09-17 22:27:39+09  zelda
 * Initial revision
 *
 */

#ifndef __SYS_VIBCTL2_H_
#define __SYS_VIBCTL2_H_

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#include "os.h"			/* MAXCONTROLLERS */

/*
 * ��ư�ѥ����󥯥饹
 * 269 bytes(MAXCONTROLLERS==4 && VIBQUEUE==64�ΤФ���)
 *
 *	����ȥ��� �� �Τߤ��б� (�Ǥ� on_flg �����ϡ�MAXCONTROLLERS ����)
 */
/*
 *	VIBQUEUE �Ȥϡ���ư��Ͽ�����
 */
#define		VIBQUEUE	(64)
typedef struct VibCtl2 {
    /*
     *	��ư�ѥå� �ϣ� / �ϣƣ� �� ����ȥ��� �� ������
     */
    u8 on_flg[MAXCONTROLLERS];

    /*
     *	��ư�ѥ �ѿ�(�� �� ������)
     */
    u8 power[VIBQUEUE];
    
    /*
     *	�ǽ�ΰ��꿶ư�ѥ���� �ѿ�(�� �� ������ �ե졼��)
     */
    u8 start_power[VIBQUEUE];
    
    /*
     *	���꿶ư�ѥ �ѿ�(�� �� ������)
     */
    u8 stop_power[VIBQUEUE];
    
    /*
     *	��ư�׻���
     */
    u8 power_time[VIBQUEUE];

    /*
     *	��ư�ѥå�������ߥե饰 �ѿ�(��:��ư�ػ� ��:��ư���� ��:��ư�����)
     */
    u8 vib_flg;

    /*
     *	��ư�ѥå������ߥե饰 �ѿ�(��:��ư������ ��:��ư)
     */
    u8 vib_pause;

    /*
     *	��ư�ѥå�Ϣ³��ư���ַ�¬ �ѿ�
     */
    u16 vib_on_time;

    /*
     *	��ư�ѥå�Ϣ³��߻��ַ�¬ �ѿ�
     */
    u16 vib_off_time;

    /*
     *	������ư�ѥ �ѿ�(�� �� ������)
     */
    u8 force_power;
    
    /*
     *	�����ǽ�ΰ��꿶ư�ѥ���� �ѿ�(�� �� ������ �ե졼��)
     */
    u8 force_start_power;
    
    /*
     *	�������꿶ư�ѥ �ѿ�(�� �� ������)
     */
    u8 force_stop_power;
    
    /*
     *	������ư�׻���
     */
    u8 force_power_time;
} VibCtl2;

/*======================================================================*
 *	��ư�ѥå�����ȥ���ؿ�					*
 *======================================================================*/
extern void vibctl2_init(VibCtl2 *);
extern void vibctl2_cleanup(VibCtl2 *);
extern void vibctl2_move(VibCtl2 *);
#define vibctl2_on_flg(vibctl2) ((vibctl2)->on_flg)

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* __SYS_VIBCTL2_H_ */
