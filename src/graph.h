/*
 * $Id: graph.h,v 2.2 1998/10/27 11:07:23 hayakawa Exp $
 *
 * ����ե��å�����åɥ��饹
 *
 * $Log: graph.h,v $
 * Revision 2.2  1998/10/27  11:07:23  hayakawa
 * ���������б��ƥ���
 *
 * Revision 2.1  1998-10-22 20:41:56+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.43  1998/09/07 05:47:36  zelda
 * *** empty log message ***
 *
 * Revision 1.42  1998-09-05 20:09:58+09  zelda
 * *** empty log message ***
 *
 * Revision 1.41  1998-09-05 17:52:09+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.40  1998-08-28 13:51:08+09  zelda
 * *** empty log message ***
 *
 * Revision 1.39  1998-08-28 10:30:49+09  zelda
 * ROM_D�Ǥʤ��Ȥ���graph_alloc16�������ְ㤨�Ƥ���
 *
 * Revision 1.38  1998-08-27 22:48:09+09  hayakawa
 * gfxalloc��Ω��
 * graph_alloc ����
 *
 * Revision 1.37  1998-08-21 20:38:48+09  hayakawa
 * graph_new���ץƥ��ޥ���
 * graph_alloc��Ϣ��16�Х��ȥХ��������ѹ�
 *
 * Revision 1.36  1998-08-10 11:07:59+09  hayakawa
 * ROM_D�λ�����DL�˥ǥХå�����������褦�ˤ��Ƥߤ�
 *
 * Revision 1.35  1998-08-07 22:25:52+09  zelda
 * ������
 *
 * Revision 1.34  1998-08-07 20:20:44+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.33  1998-08-07 17:34:07+09  hayakawa
 * _graph �� __graph ���ѹ�
 * OPEN_DISP, CLOSE_DISP��¤
 *
 * Revision 1.32  1998-08-07 16:05:24+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.31  1998-08-06 22:45:32+09  hayakawa
 * OPEN_DISP, CLOSE_DISP�˺ٹ�
 *
 * Revision 1.30  1998-07-24 22:00:29+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.29  1998-07-24 21:49:36+09  hayakawa
 * Graph_newa graph_newa�ɲ�
 *
 * Revision 1.28  1998-04-02 17:55:28+09  hayakawa
 * WORK�ɲ�
 *
 * Revision 1.27  1998/04/01  02:47:12  hayakawa
 * ��������ͤ� __cplusplus �� _LANGUAGE_C_PLUS_PLUS ���ѹ�
 *
 * Revision 1.26  1998/03/31  13:38:28  hayakawa
 * ����ѥǥ����ץ쥤�ꥹ���ΰ��ɲ�
 * ������
 *
 * Revision 1.25  1998/03/18  08:03:12  hayakawa
 * �áܡ��б�
 *
 * Revision 1.24  1997/12/18  04:24:49  hayakawa
 * TaskEndCallBack���ɲ�
 *
 * Revision 1.23  1997/11/17  06:11:49  morita
 * GRAPH_STACKSIZE�����䤷��
 *
 * Revision 1.22  1997/11/16  13:38:42  hayakawa
 * STACKSIZEĴ��
 *
 * Revision 1.21  1997/10/03  14:19:31  hayakawa
 * EnableNextSwapFrame��IsDisableNextSwapFrame�ʤ�
 *
 * Revision 1.20  1997/07/22  11:10:47  hayakawa
 * ��Ω��Gfx�ΰ���Ѵؿ��ɲ�
 *
 * Revision 1.19  1997/04/16  11:42:52  hayakawa
 * �����ʥߥå��Хåե��ȥե졼��Хåե�����Ω���Τ����cfb_bank����
 *
 * Revision 1.18  1997/03/26  04:26:27  hayakawa
 * �����å���512�Х������䤷��
 *
 * Revision 1.17  1997/03/20  12:51:57  hayakawa
 * GRAPH_STACKSIZE�ɲ�
 *
 * Revision 1.16  1997/03/13  11:42:45  hayakawa
 * �ե졼��Хåե������б�
 * ��¤�ΤΥ��Ф򥽡��Ȥ���
 *
 * Revision 1.15  1997/02/14  07:49:57  hayakawa
 * OVERLAY�ѤΥޥ����ɲ�
 *
 * Revision 1.14  1997/02/06  07:21:58  hayakawa
 * �áܡܤǥ���ѥ���Ǥ���褦���ѹ�
 *
 * Revision 1.13  1997/02/05  11:45:37  hayakawa
 * ��¤�Υ����ɲ�
 * graph_gfxopen/graph_gfxclose����
 *
 * Revision 1.12  1997/01/13  11:52:28  hayakawa
 * ��拾��ѥ����Ϥ�����
 *
 * Revision 1.11  1997/01/06  07:40:50  hayakawa
 * �饤���ȾƩ�����б�
 *
 * Revision 1.10  1996/10/09  05:31:47  hayakawa
 * Gfx�ݥ��󥿤����꤬�Ǥ���褦�� SET_NOW_DISP �ؿ����ɲä���
 *
 * Revision 1.9  1996/10/02  06:41:26  hayakawa
 * �Ȥꤢ�����ʤˤ⤷�ʤ�FLUSH_DISP��REOPEN_DISP���ɲ�
 *
 * Revision 1.8  1996/10/01  10:39:46  hayakawa
 * ���פʥ��Фκ��
 *
 */

#ifndef __GRAPH_H_
#define __GRAPH_H_

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#include "u64basic.h"
#include "u64types.h"
#include "THA_GA.h"
#include "sched.h"

#if 0
#define GRAPH_STACKSIZE (6144+512)	/* �⤦����;͵��ɬ�� */
#else
#define GRAPH_STACKSIZE 0x1800	/* ���� 0x1200�ʾ� */
#endif

typedef union {    
    struct {
        short     type;
    } gen;
    struct {
        short     type;
    } done;
    OSScMsg       app;
} GraphMsg;

/*
 * ����ե��å����ơ��Ȥȥǥ����ץ쥤�ꥹ��
 * ���ι�¤�Τ򥰥�դΥǥ����ץ쥤�ꥹ�Ȥ��������뤹�٤Ƥδؿ�����1�����ˤ���
 * ������������Ω���˸¤�
 * �ؿ�����Ƭ�������ǡ�OPEN_DISP/CLOSE_DISP��ƤӽФ�
 * 
 */
#define MAX_MESGS               8
typedef struct graph_s {
    Gfx		*Gfx_list00P_top;
    Gfx		*Gfx_list01P_top;
#ifndef NOUSE_LINE_UCODE
    Gfx		*Gfx_list02P_top;
    Gfx		*Gfx_list03P_top;
#else
    Gfx		*_Gfx_list02P_top;
    Gfx		*_Gfx_list03P_top;
#endif /* NOUSE_LINE_UCODE */
    Gfx		*Gfx_list04P_top;
    Gfx		*gfxsave;
    GraphMsg 	msg;            /* completion message */
    OSMesg 	graphReplyMsgBuf[MAX_MESGS];
    OSMesgQueue *sched_cmdQ;
    OSMesgQueue graphReplyMsgQ;
    OSScTask	ossctask00p;
#if 01
    OSScTask	ossctask01p;	/* 4+4+4+4+64+4+4+8+8=104 */
    OSScTask	ossctask02p;
    Gfx		*Gfx_list05P_top; /* �������κ���ѥ��ꥢ */
    THA_GA 	work_thaga;
    char        _ossctask03p[104 - sizeof(Gfx *) - sizeof(THA_GA)];
    char        _ossctask04p[4+4+4+4+64+4+4+8+8];
#endif
    OSSched 	*sc;
    OSViMode	*vimode;	/* !NULL:osViSetMode(vimode) */
#ifndef NOUSE_LINE_UCODE
    THA_GA 	line_opa_thaga;
    THA_GA 	line_xlu_thaga;
#else
    THA_GA 	_line_opa_thaga;
    THA_GA 	_line_xlu_thaga;
#endif /* NOUSE_LINE_UCODE */
    THA_GA 	overlay_thaga;
    THA_GA 	poly_opa_thaga;
    THA_GA 	poly_xlu_thaga;
    int 	frame_counter;	/* ����ե��å��ե졼�५���� */
    u16		*FrameBufferP;	/* �����оݥե졼��Хåե� */
    u16		*RenderBufferP;	/* ����ѥե졼��Хåե� */
    u32 	vispecial;	/* osViSetSpecialFeatures */
    int 	cfb_bank;	/* �ե졼��Хåե��Х� */
    void	(*TaskEndCallBack)(struct graph_s *, void *);
    void	*TaskEndClientData;
    float	vixscale, viyscale; /* �������� */
} graph_t;
typedef graph_t Graph;

/*
 * ��������λ���Υ�����Хå��ؿ�����Ͽ�ޥ���
 * ��ա˼�ȴ���ʤΤǴؿ��ϰ�Ĥ�����Ͽ�Ǥ��ޤ���
 */
#define graph_AddTaskEndCallBack(graph, callback, client_data) \
do { \
     (graph)->TaskEndCallBack = (callback); \
     (graph)->TaskEndClientData = (client_data); \
} while (0)
#define graph_RemoveTaskEndCallBack(graph, callback, client_data) \
do { \
    if ((graph)->TaskEndCallBack   == (callback) && \
	(graph)->TaskEndClientData == (client_data)) { \
        (graph)->TaskEndCallBack   = NULL; \
        (graph)->TaskEndClientData = NULL; \
    }\
} while (0)
    
    /*
     * OPEN_DISP/CLOSE_DISP
     *
     * ����äȥȥ�å����Ǥ�������Ĥ��Ƥ���������
     *
     */
#ifndef ROM_D
#define OPEN_DISP(graph) 			\
{ 						\
    Graph *__graph = (graph); 			\
    int __poly_gfx_opened = 0; 			\
    (void)0			/* rquire `;'  */

#define CLOSE_DISP(graph) 			\
    do { 					\
	(void)&(graph)->Gfx_list00P_top; 	\
	(void)__poly_gfx_opened; 		\
    } while (0); 				\
}   (void)0			/* rquire `;'  */
#else
typedef struct {
    Gfx *tmp_poly_opa;
    Gfx *tmp_poly_xlu;
    Gfx *tmp_overlay;
} __GraphCheck;
extern void __graphcheck_opendisp(__GraphCheck *this, Graph *graph, char *file, int line);
extern void __graphcheck_closedisp(__GraphCheck *this, Graph *graph, char *file, int line);
#define OPEN_DISP(graph) 			\
{ 						\
    Graph *__graph = (graph); 			\
    int __poly_gfx_opened = 0; 			\
    __GraphCheck __graphcheck; 			\
    __graphcheck_opendisp(&__graphcheck, graph, __FILE__, __LINE__); \
    (void)0			/* rquire `;'  */

#define CLOSE_DISP(graph) 			\
    do { 					\
	__graphcheck_closedisp(&__graphcheck, graph, __FILE__, __LINE__); \
       	(void)__poly_gfx_opened; 		\
    } while (0); 				\
}   (void)0			/* rquire `;'  */
#endif

#define NEXT_POLY_OPA_DISP 	THA_GA_NEXT_DISP(&__graph->poly_opa_thaga)
#define NEXT_POLY_XLU_DISP 	THA_GA_NEXT_DISP(&__graph->poly_xlu_thaga)
#ifndef NOUSE_LINE_UCODE
#define NEXT_LINE_OPA_DISP 	THA_GA_NEXT_DISP(&__graph->line_opa_thaga)
#define NEXT_LINE_XLU_DISP 	THA_GA_NEXT_DISP(&__graph->line_xlu_thaga)
#endif /* NOUSE_LINE_UCODE */
#define NEXT_OVERLAY_DISP 	THA_GA_NEXT_DISP(&__graph->overlay_thaga)
#define NEXT_WORK_DISP 		THA_GA_NEXT_DISP(&__graph->work_thaga)
#define NEXT_DISP 		NEXT_POLY_OPA_DISP
#define NOW_POLY_OPA_DISP 	(Gfx *)THA_GA_getHeadPtr(&__graph->poly_opa_thaga)
#define NOW_POLY_XLU_DISP 	(Gfx *)THA_GA_getHeadPtr(&__graph->poly_xlu_thaga)
#ifndef NOUSE_LINE_UCODE
#define NOW_LINE_OPA_DISP 	(Gfx *)THA_GA_getHeadPtr(&__graph->line_opa_thaga)
#define NOW_LINE_XLU_DISP 	(Gfx *)THA_GA_getHeadPtr(&__graph->line_xlu_thaga)
#endif /* NOUSE_LINE_UCODE */
#define NOW_OVERLAY_DISP 	(Gfx *)THA_GA_getHeadPtr(&__graph->overlay_thaga)
#define NOW_WORK_DISP 		(Gfx *)THA_GA_getHeadPtr(&__graph->work_thaga)
#define NOW_DISP 		NOW_POLY_OPA_DISP
#define SET_NOW_POLY_OPA_DISP(ptr) THA_GA_setHeadPtr(&__graph->poly_opa_thaga, ptr)
#define SET_NOW_POLY_XLU_DISP(ptr) THA_GA_setHeadPtr(&__graph->poly_xlu_thaga, ptr)
#ifndef NOUSE_LINE_UCODE
#define SET_NOW_LINE_OPA_DISP(ptr) THA_GA_setHeadPtr(&__graph->line_opa_thaga, ptr)
#define SET_NOW_LINE_XLU_DISP(ptr) THA_GA_setHeadPtr(&__graph->line_xlu_thaga, ptr)
#endif /* NOUSE_LINE_UCODE */
#define SET_NOW_OVERLAY_DISP(ptr) THA_GA_setHeadPtr(&__graph->overlay_thaga, ptr)
#define SET_NOW_WORK_DISP(ptr) 	THA_GA_setHeadPtr(&__graph->work_thaga, ptr)
#define SET_NOW_DISP(ptr) 	SET_NOW_POLY_OPA_DISP(ptr)
    
extern void graph_proc(void *arg);
extern void graph_ct(Graph *);
extern void graph_dt(Graph *);

/*
 * graph_alloc   : ��������
 * graph_alloc15 : ����
 * graph_alloc16 : size �� 16 ���ܿ��λ�����
 * �������ǳ���
 */

#ifdef ROM_D
extern void *_graph_alloc(Graph *, size_t);	/* ���ե졼���˲�������malloc */
#define graph_alloc16(graph, size) 	_graph_alloc(graph, size)
#define graph_alloc15(graph, size) 	_graph_alloc(graph, size)
#define graph_alloc(graph, size) 	_graph_alloc(graph, size)
#else
#define graph_alloc16(graph, size) 	((void *)((graph)->poly_opa_thaga.tha.tail_p = (char *)((int)(graph)->poly_opa_thaga.tha.tail_p - (size))))
#define graph_alloc15(graph, size) 	graph_alloc16(graph, (((size) + 15) & ~15))
#define graph_alloc(graph, size) 	graph_alloc15(graph, size)
#endif

/*
 * graph_new   : ��������
 * graph_new15 : ����
 * graph_new16 : sizeof(type) �� 16 ���ܿ��λ�����
 * graph_newa  : ������
 * ���ǳ���
 */
#define graph_new16(graph, type) (type *)graph_alloc16(graph, sizeof(type))
#define graph_new15(graph, type) (type *)graph_alloc15(graph, sizeof(type))
#define graph_new(graph, type) (((sizeof(type) & 15) == 0) ? graph_new16(graph, type) : graph_new15(graph, type))

#define graph_newa(graph, type, count) ((type *)graph_alloc(graph, sizeof(type) * (count)))

#define Graph_alloc(size) 	graph_alloc(graph, size)
#define Graph_new(type) 	graph_new(graph, type)
#define Graph_newa(type, count) graph_newa(graph, type, count)


/*
 * ɽ���ե졼��Хåե��Υ���å������ѥޥ���
 */
#define DisableNextSwapFrame() 	(SREG(33) |= 1)
#define IsDisableNextSwapFrame() ((SREG(33) & 1) != 0)
#define EnableNextSwapFrame() 	(SREG(33) &= ~1)

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* __GRAPH_H_ */
