/*
 * $Id: z_std_dma.h,v 2.1 1998/10/22 11:51:48 zelda Exp $
 *
 * ��������� �� �ģͣ�
 *
 * $Log: z_std_dma.h,v $
 * Revision 2.1  1998/10/22  11:51:48  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.15  1998/10/16 13:05:00  hayakawa
 * *** empty log message ***
 *
 * Revision 1.14  1998-10-03 16:27:38+09  zelda
 * *** empty log message ***
 *
 * Revision 1.13  1998-09-28 17:14:52+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.12  1998-09-18 12:06:18+09  zelda
 * ̤�ƥ��ȴ�
 *
 * Revision 1.11  1998-09-17 22:31:57+09  zelda
 * DMA ERROR ���˸ƤӽФ��������ɽ������褦�ˤ���
 *
 * Revision 1.10  1998-08-08 12:05:17+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.9  1998-07-24 16:17:31+09  hayakawa
 * percial_DMA�������ͤ��֤��褦�ˤ���
 *
 * Revision 1.8  1998-07-17 21:35:34+09  hayakawa
 * dmacopy_fg, dmacopy_bg �������ͤ���Ĥ褦�ˤ���
 *
 * Revision 1.7  1998-06-05 16:57:31+09  hayakawa
 * ������ɣģͣ��ϥ�ɥ�
 *
 * Revision 1.6  1998-04-01 11:46:20+09  hayakawa
 * ��������ͤ� __cplusplus �� _LANGUAGE_C_PLUS_PLUS ���ѹ�
 *
 * Revision 1.5  1998/03/19  13:04:16  komatu
 * *** empty log message ***
 *
 * Revision 1.4  1998/03/12  05:57:52  hayakawa
 * �������ɲ�
 *
 * Revision 1.3  1998/01/05  02:40:50  hayakawa
 * �������������إå��Ǥ��ʤ��褦�ˤ������٤��ʤ��
 * dma_rom_ad���̥������˰�ư
 *
 * Revision 1.2  1997/08/22  13:48:45  hayakawa
 * szs�б�
 *
 * Revision 1.1  1997/08/18  12:43:01  hayakawa
 * Initial revision
 *
 */

#ifndef _Z_STD_DMA_H_
#define _Z_STD_DMA_H_

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#include "os.h"

#if !defined(FINAL_ROM) /* ��Ǥ�ԡ�����ͺ�� */
#define DMA_DEBUG_MODE 1
#endif
    
/*======================================================================*
 *									*
 *	�ģͣ� �ģ��ԣ� ��¤��						*
 *									*
 *======================================================================*/
typedef struct dma_rom_s {
    u32 rom_a;			/* ���ۣңϣ�Start���ɥ쥹 0:�ǡ���̵�� */
    u32 rom_b;			/* ���ۣңϣ�End���ɥ쥹 */
    u32 rom_s;			/* �£ңϣ�Start���ɥ쥹 */
    u32 rom_e;			/* �£ңϣ�End���ɥ쥹 0:�󰵽� */
} dma_rom_t;

/*======================================================================*
 *									*
 *	�ģͣ� �ңϣ� ���ɥ쥹 �ơ��֥� �ģͣ� ����			*
 *									*
 *======================================================================*/
/*
 * �ģͣ�������¤��
 */
typedef struct dma_s {
    u32		romadr;		/* ROM���ɥ쥹 */
    void	*dstptr;	/* ž���襢�ɥ쥹 */
    u32		dstsiz;		/* �ǡ�����Ǽ�ΰ襵���� */
#ifdef DMA_DEBUG_MODE
    char        *_file;		/* �ƤӽФ����������ե�����̾�ʤ� */
    u32 	_line;		/* �ƤӽФ������������ֹ�ʤ� */
#else  /* DMA_DEBUG_MODE */
    void	*tmpramptr;	/* ���̥ǡ������Υ���ΰ� */
    u32		tmpramsiz;	/* ���̥ǡ������Υ���ΰ襵���� */
#endif /* DMA_DEBUG_MODE */
    s32		pri;		/* ͥ���� */
    OSMesgQueue	*mq;		/* DMAž����λ���˥�å����������� */
    OSMesg	m;
} dma_t;

/*
 * �ģͣ��ޥ͡�����κ���
 * �ʲ��δؿ�����Ѥ������˰��٤����ƤӽФ��Ƥ���������
 */
extern void CreateDmaManager( void );

/*
 * �ե��������ɤǣģͣ�ž������
 * ������ dmacopy_bg ��ƽФ����Ԥ���碌��ԤäƤ��ޤ���
 * 0:����
 * -1:�ѥ�᡼���۾�
 *
 */
extern int dmacopy_fg(void *dst, u32 src, u32 size);

/*
 * �Хå������ɤǣģͣ�ž������
 * ž����λ���� mq �� NULL �Ǥʤ���� mq �� m �Υ�å��������������ޤ���
 * szs���̥ǡ������б���
 * 0:����
 * -1:�ѥ�᡼���۾�
 */
extern int
dmacopy_bg(
    dma_t *dmap,		/* ������¤�Ρ�ž����λ���ޤǤ����Ƥ��ݻ����Ƥ������� */
    void *dst,			/* ž����ң��ͥ��ɥ쥹�ʣ��Х��ȥХ������� */
    u32 src,			/* ž�����ңϣͥ��ɥ쥹�ʣ��Х��ȥХ������� */
    u32 size,			/* ž���������ʣ����ܿ��� */
    void *work,			/* NULL���� */
    OSMesgQueue *mq,		/* ž����λ��å������ѥ��塼 */
    OSMesg m			/* ž����λ��å����� */
);

/*
 * DISK�����ž��
 */
extern void dmacopy_ddrom_fg(void *dst, u32 src, u32 size);

/*
 * *** �� �� �� �� �� �� �� �� �� �� �� �� ����***
 * �ʥġ���ǡ���ž���Ѥ˸������Ƥ��ޤ���
 *
 * ʬ�䤷�ʤ���ģͣ�ž������
 *
 * �������塼��󥰤䰵�̤䥻�����Ȥ˴ط��ʤ�ž�����ޤ���
 */
extern s32 percial_DMA( u32 romaddress, void *ramaddress, u32 size );

/*
 * ������ɣģͣ��ϥ�ɥ�
 */
extern s32
dmaSoundRomHandler(
    OSPiHandle *pihandle,
    OSIoMesg *mb,
    s32 direction
);

#ifdef DMA_DEBUG_MODE
#ifndef _Z_STD_DMA_C_
extern int
__dmacopy_bg( dma_t *dmap, void *dst, u32 src, u32 size, void *work,
	     OSMesgQueue *mq, OSMesg m, char *file, u32 line);
extern int
__dmacopy_fg(void *dst, u32 src, u32 size, char *file, u32 line);
#define dmacopy_bg( dmap, dst, src, size, work, mq, m ) \
      __dmacopy_bg( dmap, dst, src, size, work, mq, m, __FILE__, __LINE__ )
#define dmacopy_fg( dst, src, size) \
      __dmacopy_fg( dst, src, size, __FILE__, __LINE__ )
#endif /* _Z_STD_DMA_C_ */
#endif /* DMA_DEBUG_MODE */

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif
