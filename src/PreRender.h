/*
 * $Id: PreRender.h,v 2.1 1998-10-22 20:41:56+09 zelda Exp $
 *
 * �ץ������󥰽���
 * ������󥰤��줿���̤�Хåե��˼�����
 * �����ƥ�������쥯���󥰥�̿���ɽ�����뤳�Ȥˤ�ꡢ
 * ��̩���طʤ��®��ɽ�����롣
 *
 * �ڥХåե��䥫�Х�å��ˤ��б����Ƥ���
 * ��������dz�Ͼ�̣��ӥåȤΤ�
 *
 * $Log: PreRender.h,v $
 * Revision 2.1  1998-10-22 20:41:56+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.12  1998/06/26 12:49:59  hayakawa
 * *** empty log message ***
 *
 * Revision 1.11  1998-04-01 11:47:05+09  hayakawa
 * ��������ͤ� __cplusplus �� _LANGUAGE_C_PLUS_PLUS ���ѹ�
 *
 * Revision 1.10  1997/10/17  14:07:50  hayakawa
 * ���Ǥ��������Ϥ�����
 *
 * Revision 1.9  1997/07/17  05:28:33  hayakawa
 * ���ץ��к��
 *
 * Revision 1.8  1997/04/16  11:41:33  hayakawa
 * is_alloc_myself���Ф��ɲá����ס���
 *
 * Revision 1.7  1997/04/14  11:59:33  hayakawa
 * listalloc�ɲ�
 *
 * Revision 1.6  1997/03/27  13:01:18  hayakawa
 * PreRender_ConvertFrameBuffer2�ɲ�
 * �ƥ����Ѥ�fbufx_save�ɲ�
 *
 * Revision 1.5  1997/02/26  05:21:28  hayakawa
 * ���������ѹ�
 *
 * Revision 1.4  1997/01/24  06:15:42  hayakawa
 * �ץ�ȥ������ɲ�
 *
 * Revision 1.3  1997/01/20  05:19:30  hayakawa
 * �ץ�ȥ������ɲ�
 *
 * Revision 1.2  1997/01/17  05:37:09  hayakawa
 * �������ѹ�
 *
 * Revision 1.1  1997/01/14  00:51:00  hayakawa
 * Initial revision
 *
 */

#ifndef __PRERENDER_H_
#define __PRERENDER_H_

#include "ultra64.h"		/* rgba_t */
#include "listalloc.h"		/* listalloc_t */

/*
 * �����
 */
typedef struct {
#if 0
    unsigned short wd, ht;	/* �ե졼��Хåե��β����ĥ����� */
    unsigned short wd_save, ht_save; /* �ե졼��Хåե����ݻ������ΰ�β����ĥ����� */
    void *fbuf;			/* �ե졼��Хåե��ؤΥݥ��� */
    void *fbuf_save;		/* �ե졼��Хåե����ݻ������ΰ� RGBA5551 */
    void *cvg_save;		/* ���Х�å����ݻ������ΰ� A4/A8 */
    void *zbuf;			/* �ڥХåե��ؤΥݥ��� */
    void *zbuf_save;		/* �ڥХåե����ݻ������ΰ� Z14DZ2 */
    unsigned short uls, ult, lrs, lrt;	/* ͭ���ϰ� */
    unsigned short ulx, uly, lrx, lry;	/* �����ϰ� */
    listalloc_t listalloc;
    char is_alloc_myself;	/* !0:��ʬ���Ȥǥ������Ȥ��� */
    char __aligner[3];		/* ���饤������ */
#else
    int wd, ht;			/* �ե졼��Хåե��β����ĥ����� */
    int wd_save, ht_save;	/* �ե졼��Хåե����ݻ������ΰ�β����ĥ����� */
    void *fbuf;			/* �ե졼��Хåե��ؤΥݥ��� */
    void *fbuf_save;		/* �ե졼��Хåե����ݻ������ΰ� RGBA5551 */
    void *cvg_save;		/* ���Х�å����ݻ������ΰ� A4/A8 */
    void *zbuf;			/* �ڥХåե��ؤΥݥ��� */
    void *zbuf_save;		/* �ڥХåե����ݻ������ΰ� Z14DZ2 */
    int uls, ult, lrs, lrt;	/* ͭ���ϰ� */
    int ulx, uly, lrx, lry;	/* �����ϰ� */
    listalloc_t listalloc;
    int is_alloc_myself;	/* !0:��ʬ���Ȥǥ������Ȥ��� */
#endif
} PreRender_t;

#define PreRender_set_xoff(this) ((this)->xoff)



#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif
    
    /*
     * �ؿ��ץ�ȥ�����
     */
 
/*
 * �����
 * �ҡ����ΰ褫��337.5K�Х��Ȼ��Ѥ���
 */
extern void
PreRender_init(PreRender_t *this);

/*
 * �ե졼��Хåե��ȣڥХåե��Υݥ��󥿤����ꤹ��
 */
extern void
PreRender_setbuf(PreRender_t *this, void *fbuf, void *zbuf);
/*
 * �Хåե�����
 */
extern void
PreRender_setup_savebuf(PreRender_t *this, int wd, int ht, void *fbuf, void *zbuf, void *cvgbuf);
/*
 * ��������Ѥ�
 * �ե졼��Хåե��ȣڥХåե��Υݥ��󥿤����ꤹ��
 */
extern void
PreRender_setup_renderbuf(PreRender_t *this, int wd, int ht, void *fbuf, void *zbuf);

/*
 * �����
 */
extern void
PreRender_cleanup(PreRender_t *this);

/*
 * �ڥХåե����ƥ�����
 * �ڥХåե����ץ�������ѣڥХåե�
 */
extern void
PreRender_saveZBuffer(PreRender_t *this, Gfx **glistpp);

/*
 * �ե졼��Хåե����ƥ�����
 * �ե졼��Хåե����ץ�������ѥ��顼�Хåե�
 */
extern void
PreRender_saveFrameBuffer(PreRender_t *this, Gfx **glistpp);

/*
 * ���Х�å����ƥ�����
 * �ե졼��Хåե��Υ��Х�å����ץ�������ѥ��Х�å��Хåե�
 */
extern void
PreRender_saveCVG(PreRender_t *this, Gfx **glistpp);

/*
 * �ڥХåե����ƥ���
 * �ץ�������ѣڥХåե����ڥХåե�
 */
extern void
PreRender_loadZBuffer(PreRender_t *this, Gfx **glistpp);

/*
 * �ե졼��Хåե����ƥ���
 * �ץ�������ѥ��顼�ܥץ�������ѥ��Х�å��Хåե����ե졼��Хåե�
 */
extern void
PreRender_loadFrameBuffer(PreRender_t *this, Gfx **glistpp);

/*
 * ��������ꥢ������С���
 * �ץ�������ѥ��顼�ܥץ�������ѥ��Х�å��Хåե����ץ�������ѥ��顼
 */
extern void
PreRender_ConvertFrameBuffer2(PreRender_t *this);

/*
 * �ե졼��Хåե����ƥ���
 * ���顼�Τ�
 * �ץ�������ѥ��顼���ե졼��Хåե�
 */
extern void
PreRender_loadFrameBufferCopy(PreRender_t *this, Gfx **glistpp);

/*
 * �ե졼��Хåե����ƥ���
 * ���顼�Τ�
 * ���顼�Хåե����ե졼��Хåե�����礭�����
 * �ץ�������ѥ��顼���ե졼��Хåե�
 */
extern void
PreRender_loadFrameBufferCopyX(PreRender_t *this, Gfx **glistpp);

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* __PRERENDER_H_ */
