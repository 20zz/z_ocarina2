/* $Id: is_debug.h,v 2.1 1998/10/22 11:41:56 zelda Exp $ */	
/* $Log: is_debug.h,v $
 * Revision 2.1  1998/10/22  11:41:56  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.4  1998/09/24 14:03:47  hayakawa
 * _is_printf_s �� extern �ˤ���
 *
 * Revision 1.3  1997-08-21 11:59:08+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.2  1997/05/21  01:23:25  soejima
 * n
 *
 * Revision 1.1  1997/05/13  05:35:36  soejima
 * Initial revision
 *
 * Revision 1.1  1997/05/13  05:35:05  soejima
 * Initial revision
 *
 * $Log�ɲ�
 * */

/************************************************************************
 *
 *	�ɣӡݣģ�����
 *
 ************************************************************************/


#ifndef __IS_DEBUG_H__
#define __IS_DEBUG_H__

#ifdef _LANGUAGE_C_PLUS_PLUS   /* for c++ */
extern "C" {
#endif

/* ====================================================================
 * is_debug.h
 *
 * Copyright 1997, Intelligent Systems Co.,Ltd.
 * All Rights Reserved.
 *
 * ���Υإå��ϡ�IS-Viewer64�ѤΥץ��ȥǥХå���ǽ�����Ѥ���٤�ɬ��
 * �Ǥ����ץ��ȥǥХå���Ԥ���ˡ�ϼ����̤�Ǥ���
 *
 * 1.�ǥХå���Ԥ������ץ�����boot����åɤ�(osInitialize();�θƤ�
 *   �Ф��夢����ˤ�isPrintInit();�ˤ�ƤӽФ��ǥХå���ǽ����������
 *   ����
 *
 * 2.isPrintf�ؿ��ǥǥХå������������printf�ؿ���Ʊ�������ǸƤӽФ���
 *   �������Υ饤�֥��ϡ�osSyncPrintf,rmonPrintf��isPrintf��ƤӽФ�
 *   �褦�˴ؿ��򥪡��С��饤�ɤ��Ƥ��ޤ������ΰ١�libultra_d.a�ʤɡ�
 *   osSyncPrintf��ޤ�饤�֥��Ȱ��˥�󥯤��ƤϤ����ޤ���
 *
 * 3.�ǥХå���ǽ�����Ѥ��륽�����ˤϡ�is_debug.h�򥤥󥯥롼�ɤ��ޤ���
 *
 * 4.makefile�ˡ�is_debug.c���Ȥ�ˡ�����ѥ����󥯤����褦���ɲ�
 *   ���ޤ���
 * 6.nload filename ��Ԥ��ޤ���nload�ϼ�ưŪ�˥ǥХå��ץ��ȥ롼�פ�
 *   �Ϥ��ꡢNUS¦�Υץ��Ⱦ������̤�ɽ�����뤳�Ȥ�����ޤ���
 * 7.�ǥХå��ץ��Ȥ˻��Ѥ���ǥե���ȥ��ɥ쥹�ϡ�0xb1ff0000����Ǥ���
 *   �Թ礬�������ˤϡ����Υ��ɥ쥹���ѹ����뤳�Ȥ���ǽ�Ǥ����ܺ٤�
 *   is_debug.c�򻲾Ȥ��Ƥ���������
 *==================================================================== */

extern void isPrintfInit(void);
extern void isPrintf(const char *fmt, ...);
extern void *_is_printf_s(void *str, register const char *buf, register int n);

#ifdef _LANGUAGE_C_PLUS_PLUS   /* for c++ */  
}
#endif

#endif

