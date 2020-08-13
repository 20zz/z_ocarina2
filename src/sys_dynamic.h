/*
 * $Id: sys_dynamic.h,v 2.1 1998/10/22 11:41:56 zelda Exp $
 *
 * �����ʥߥå������������
 *
 * $Log: sys_dynamic.h,v $
 * Revision 2.1  1998/10/22  11:41:56  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.26  1998/09/05 11:14:02  zelda
 * *** empty log message ***
 *
 * Revision 1.25  1998-09-05 17:53:01+09  hayakawa
 * ���פʽ�����Ϥ����Ƥ���äȤǤ����򸺤餽��
 *
 * Revision 1.24  1998-09-01 23:12:24+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.23  1998-08-11 14:45:14+09  zelda
 * ��������Ĵ��
 *
 * Revision 1.22  1998-08-11 13:53:34+09  zelda
 * ��������Ĵ��
 *
 * Revision 1.21  1998-08-07 16:46:57+09  zelda
 * *** empty log message ***
 *
 * Revision 1.20  1998-08-07 11:21:35+09  hayakawa
 *  ������Τ�
 *
 * Revision 1.19  1998-04-24 11:50:26+09  hayakawa
 * �������ɲ�
 *
 * Revision 1.18  1998-03-31 22:37:53+09  hayakawa
 * ����ѥǥ����ץ쥤�ꥹ���ΰ��ɲ�
 * ��󥯥ե졼��Хåե��ѡ�
 *
 * Revision 1.17  1998/03/17  10:49:55  hayakawa
 * �����Ƚ���
 *
 * Revision 1.16  1997/10/17  09:08:19  iwawaki
 * *** empty log message ***
 *
 * Revision 1.15  1997/10/16  13:00:11  iwawaki
 * *** empty log message ***
 *
 * Revision 1.14  1997/07/28  07:36:17  hayakawa
 * �ޥ����Ȥ��褦�ˤ���
 * OPA_XLU���ΰ��2.5�ܤ����䤷��
 *
 * Revision 1.13  1997/07/10  13:17:34  hayakawa
 * *** empty log message ***
 *
 * Revision 1.12  1997/07/10  12:54:18  hayakawa
 * �ǥ����ץ쥤�ꥹ���ΰ���ʬ�ѹ�
 * Gfx_list05�ɲ�
 *
 * Revision 1.11  1997/05/06  10:37:40  hayakawa
 * �Хåե�������Ĵ��
 *
 * Revision 1.10  1997/02/07  11:43:14  hayakawa
 * �Хåե����ɤ������ʤˤ�äƤ����
 *
 * Revision 1.9  1997/02/07  08:13:18  hayakawa
 * �Хåե������䤷�����ʤ�ȣ��ᥬ����
 *
 * Revision 1.8  1997/02/07  00:44:59  hayakawa
 * �Хåե������䤷��
 *
 * Revision 1.7  1997/02/05  12:21:31  hayakawa
 * �����С��쥤�ѥǥ����ץ쥤�ꥹ���ΰ����
 *
 * Revision 1.6  1997/01/16  07:16:22  hayakawa
 * �ǥХå��Τ���˥Хåե������䤷��
 *
 * Revision 1.5  1997/01/06  07:41:08  hayakawa
 * �饤���ȾƩ�����б�
 *
 * Revision 1.4  1996/10/01  10:41:25  hayakawa
 * ���פʥ��Фκ��
 *
 */
#ifndef __SYS_DYNAMIC_H_
#define __SYS_DYNAMIC_H_

#include "u64basic.h"

#ifndef GFX_SIZE_BYTE
#define GFX_SIZE_BYTE (0x2400 * sizeof(Gfx)) /* 72K bytes */
#endif

#define GFX_SIZE_POLY_XLU 	(0x800)
#ifndef NOUSE_LINE_UCODE
#define GFX_SIZE_LINE_OPA 	(0x40)
#define GFX_SIZE_LINE_XLU 	(0x40)
#endif /* NOUSE_LINE_UCODE */
#define GFX_SIZE_OVERLAY	(0x400)
#define GFX_SIZE_WORK		(0x80)
#define GFX_SIZE_RSP_INIT	(0x20)
#ifndef NOUSE_LINE_UCODE
#define GFX_SIZE_POLY_OPA	((GFX_SIZE_BYTE / sizeof(Gfx)) - (GFX_SIZE_POLY_XLU + GFX_SIZE_LINE_OPA + GFX_SIZE_LINE_XLU + GFX_SIZE_OVERLAY + GFX_SIZE_RSP_INIT))
#else
#define GFX_SIZE_POLY_OPA	((GFX_SIZE_BYTE / sizeof(Gfx)) - (GFX_SIZE_POLY_XLU + GFX_SIZE_OVERLAY + GFX_SIZE_RSP_INIT))
#endif /* NOUSE_LINE_UCODE */

/*
 * �����ʥߥå� ����������
 *
 *	Gfx_list	: �ǥ����ץ쥤 �ꥹ��
 */
typedef struct {
    u16		magic;
    u16		reserve[3];
    Gfx		Gfx_list00[GFX_SIZE_POLY_OPA]; /* poly opa */
    Gfx		Gfx_list01[GFX_SIZE_POLY_XLU]; /* poly xlu */
#ifndef NOUSE_LINE_UCODE
    Gfx		Gfx_list02[GFX_SIZE_LINE_OPA]; /* line opa */
    Gfx		Gfx_list03[GFX_SIZE_LINE_XLU]; /* line xlu */
#endif /* NOUSE_LINE_UCODE */
    Gfx		Gfx_list04[GFX_SIZE_OVERLAY]; /* overlay */
    Gfx		Gfx_list05[GFX_SIZE_WORK]; /*����� */
    Gfx		Gfx_list06[GFX_SIZE_RSP_INIT]; /* RSP/RDP �����(segment,viewport,scissor) */
    u16		magic2;
    u16		reserve2[3];
} sys_Dynamic;

/*
 * �����ʥߥå��ΰ����
 */
extern sys_Dynamic sys_dynamic[2];

#endif /* __SYS_DYNAMIC_H_ */
