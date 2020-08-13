/*
 * $Id: boot.h,v 2.1 1998/10/22 11:41:56 zelda Exp $
 *
 *
 * ���:���Υإå��ե������ spec �ե����뤫�饤�󥯥롼�ɤ���ޤ�
 *
 * $Log: boot.h,v $
 * Revision 2.1  1998/10/22  11:41:56  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.2  1998/03/25 12:43:54  hayakawa
 * �áܡܤ��̤äƤ��ʤ��ä��Τ���
 *
 * Revision 1.1  1997/03/17  12:16:10  hayakawa
 * Initial revision
 *
 */

#ifndef __BOOT_H_
#define __BOOT_H_

#define BOOT_STACKSIZE 1024

#if defined(_LANGUAGE_C) || defined(_LANGUAGE_C_PLUS_PLUS)

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

extern void boot(void);

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* defined(_LANGUAGE_C) || defined(_LANGUAGE_C_PLUS_PLUS) */

#endif /* __BOOT_H_ */
