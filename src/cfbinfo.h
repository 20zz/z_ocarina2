/*
 * $Id: cfbinfo.h,v 2.2 1998/10/27 11:06:41 hayakawa Exp $
 *
 * ɽ�����̤����
 *
 * $Log: cfbinfo.h,v $
 * Revision 2.2  1998/10/27  11:06:41  hayakawa
 * ���������б��ƥ���
 *
 * Revision 2.1  1998-10-22 20:41:56+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.3  1998/05/01 03:01:29  hayakawa
 * include�ɲ�
 *
 * Revision 1.2  1997-03-17 09:55:45+09  hayakawa
 * cfbinfo_get_ScreenWidth�ޥ�����ɲ�
 *
 * Revision 1.1  1997/03/14  00:21:33  hayakawa
 * Initial revision
 *
 */

#ifndef __CFBINFO_H_
#define __CFBINFO_H_

#include <ultra64.h>
#include "sys_screen.h"		/* ScreenWidth, ScreenHeight */

typedef struct cfbinfo_s {
    void		*framebuffer;	/* ����ե졼��Хåե� */
    void		*swapbuffer;	/* !NULL:ɽ���ե졼��Хåե� */
    OSViMode		*vimode; 	/* !NULL:�ӥǥ��⡼�� */
    u32			vispecial;
    u8			flag;		/* ɽ���Ԥ� ɽ���� ������ �����ɥ� ���� */
    s8			life_max;	/* ɽ���ݾڥե졼��� */
    s8			life;		/* ɽ���ݾڻĤ�ե졼��� */
    float		vixscale, viyscale; /* �������� */
} cfbinfo_t;

#define cfbinfo_get_ScreenWidth(this) (((this)->vimode ? (int)(this)->vimode->comRegs.width : (int)ScreenWidth))
#define cfbinfo_get_ScreenHeight(this) ((void)(this), (int)ScreenHeight)
#define cfbinfo_get_ScreenPixSizBit(this) (16)


#endif /* __CFBINFO_H_ */
