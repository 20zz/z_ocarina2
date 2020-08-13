/*
 * $Id: n64dd_disk.spec,v 1.1 2003/03/10 22:42:54 tong Exp $ 
 *
 * �����ģ��ѥ��ڥå��ե����뤽�Σ��ʣģɣӣ˥��᡼����
 *
 * �ңϣͥ��᡼����ң��ץǡ����Ȥ��� LBA 2 ����Ÿ�����Ƥ���
 *
 * $Log: n64dd_disk.spec,v $
 * Revision 1.1  2003/03/10 22:42:54  tong
 * Initial revision
 *
 * Revision 2.1  1998-10-22 20:41:56+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.2  1998/09/22 13:02:25  hayakawa
 * *** empty log message ***
 *
 * Revision 1.1  1998-09-22 12:04:08+09  hayakawa
 * Initial revision
 *
 */
#include "sys_segment.h" /* DISK_BOOT_STACK_SIZE, *_SEGMENT */

#define DefSegRaw(lbano, segname, seginclude) \
beginseg 			\
	lba     lbano	 	\
	name    segname 	\
	flags   RAW 		\
	include seginclude 	\
endseg

/*
 * boot �����������
 */
beginseg
	name "disk_boot"
	flags BOOT OBJECT
	entry disk_boot
	stack disk_bootStack + DISK_BOOT_STACK_SIZE
	address 0x80000400 /* ����ʾ���̤ˤ��֤��ʤ� */
	include "disk_boot.o"
endseg

DefSegRaw(1, "n64dd_rom", "n64dd.rom")

/*
 * �������֤����
 */
beginwave
	name "zelda_n64dd_disk"

	include "disk_boot"
	include "n64dd_rom"
endwave
