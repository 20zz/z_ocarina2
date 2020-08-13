/*#### 	$Id: z_view.h,v 2.1 1998/10/22 11:51:48 zelda Exp $
 |###   --- View - �ͱ����� ---
 |##
 |#
 * $Log: z_view.h,v $
 * Revision 2.1  1998/10/22  11:51:48  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.36  1998/08/29 06:37:14  ogawa
 * *** empty log message ***
 *
 * Revision 1.35  1998-08-29 15:29:23+09  ogawa
 * *** empty log message ***
 *
 * Revision 1.34  1998-08-29 15:28:17+09  ogawa
 * *** empty log message ***
 *
 * Revision 1.33  1998-08-06 22:21:20+09  hayakawa
 * ���ϸ��� debug_eyecheck�����줿
 *
 * Revision 1.32  1998-05-02 14:09:54+09  ogawa
 * *** empty log message ***
 *
 * Revision 1.31  1998-03-19 22:05:06+09  komatu
 * *** empty log message ***
 *
 * Revision 1.30  1998/02/26  03:21:30  ogawa
 * *** empty log message ***
 *
 * Revision 1.29  1998/02/26  03:10:13  ogawa
 * *** empty log message ***
 *
 * Revision 1.28  1998/01/22  01:49:34  ogawa
 * *** empty log message ***
 *
 * Revision 1.27  1998/01/21  11:54:20  ogawa
 * *** empty log message ***
 *
 * Revision 1.26  1997/09/26  06:00:17  ogawa
 * ViewAgain
 *
 * Revision 1.25  1997/07/22  12:06:10  ogawa
 * *** empty log message ***
 *
 * Revision 1.24  1997/05/27  08:56:53  ogawa
 * *** empty log message ***
 *
 * Revision 1.23  1997/05/27  07:31:22  hayakawa
 * showView1�ɲ�
 *
 * Revision 1.22  1997/04/07  10:54:21  ogawa
 * *** empty log message ***
 *
 * Revision 1.21  1997/03/31  11:32:39  ogawa
 * *** empty log message ***
 *
 * Revision 1.20  1997/03/31  11:31:54  ogawa
 * *** empty log message ***
 *
 * Revision 1.19  1997/03/31  11:30:48  ogawa
 * setFovyView() ��Ƴ�� �ʥ����ˤƻ��ѡ�
 *
 * Revision 1.18  1997/03/25  06:15:37  hayakawa
 * ����ѤΥ쥸�����ͤ򣱣����ܤˤ���
 *
 * Revision 1.17  1996/10/25  12:28:34  ogawa
 * eye, center, up���̤˼��ޥ����ɲ�
 *
 * Revision 1.16  1996/10/16  13:07:52  ogawa
 * *** empty log message ***
 *
 * Revision 1.15  1996/10/16  12:34:55  ogawa
 * *** empty log message ***
 *
 * Revision 1.14  1996/10/16  12:10:48  ogawa
 * VIEW_DO_*ALL����
 *
 * Revision 1.13  1996/10/16  12:05:15  ogawa
 * �ե��å���
 *
 * Revision 1.12  1996/10/16  11:58:11  ogawa
 * �ӥ塼���ĤĤ���Ȥ��α��޽��֥ǥ����ץ쥤�ꥹ�ȤΤ��٤ƺ����������ɲ�
 *
 * Revision 1.11  1996/10/16  09:15:23  ogawa
 * ���������եѡ������ƥ�����������ؿ�
 *
 * Revision 1.10  1996/10/16  09:08:15  ogawa
 * �ѡ����Υ����������ɲ�
 *
 * Revision 1.9  1996/10/16  01:03:25  ogawa
 * �����Ѵ�
 *
 * Revision 1.8  1996/10/14  02:05:10  ogawa
 * �쥸�����ֹ��ѹ�
 *
 * Revision 1.7  1996/09/20  12:01:08  ogawa
 * �ǥ����ץ쥤�ꥹ�Ȥ�����ǽ �̾�⡼�ɤ�
 *
 * Revision 1.6  1996/09/20  05:10:10  ogawa
 * �ѹ��ʤ�
 *
 * Revision 1.5  1996/09/20  05:03:31  ogawa
 * �ǥХå� �ǽ��ư���ǧ��
 *
 */

#ifndef __VIEW_H_
#define __VIEW_H_

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#include "u64basic.h"
#include "graph.h"
#include "z_olib.h"

#define _VIEW_KEYCODE    'VIEW'

typedef struct zelda_view_struct {
#ifdef _ODEBUG
    int  keycode;
#endif
    Graph  *graph;

    irect   sc;                         /* for veiwport */
    float  fovy, near, far, scale;      /* for perspective */
    xyz_t  eye, center, up;             /* for lookat */
    Vp      vp;
    Mtx     projection,  viewing;
    Mtx     *pprojection, *pviewing;
    struct  {
	xyz_t  t_rotate, t_scale;
	float  f;
	xyz_t  rotate, scale;
    }       stretch;
    u16     normal;

    int    setflag, againflag;          /* �ޥ����ե饰 */
} View;

/*###
 |##  �ޥ���
 |#
 */

/*
** �ޥȥ�å�������������ɤ��뤫�� �ޥ����ե饰 */
#define VIEW_DO_LOOKAT      (0x01)   /* lookat����������         (1 << 0) */
#define VIEW_DO_SCISSOR     (0x02)   /* ������󥰥ܥå��������� (1 << 1) */
#define VIEW_DO_PERSPECTIVE (0x04)   /* Ʃ��ͱ��Ѵ�����         (1 << 2) */
#define VIEW_DO_ORTHO       (0x08)   /* ���ͱ����Ѵ�����         (1 << 3) */
#define VIEW_DO_AUTO        (0x0f)   /* ɬ�פʤ�Τ�������˺��������� */
#define VIEW_DO_PERSALL     (0x7f)   /* ���٤ƺ���������Ʃ��ͱ��� */
#define VIEW_DO_ORTHOALL    (0xbf)   /* ���٤ƺ������������ͱ��� */

/*
** ���ѥ쥸�������� - BASE ADDRESS (200) */
//#define VIEW_USE_OREG
#ifdef VIEW_USE_OREG
/* keep 70 - 95 */
#define VIEW_SCTOP       (int)OREG(70)    /* ������󥰥ܥå��� �� */
#define VIEW_SCBOTTOM    (int)OREG(71)    /* ������󥰥ܥå��� �� */
#define VIEW_SCLEFT      (int)OREG(72)    /* ������󥰥ܥå��� �� */
#define VIEW_SCRIGHT     (int)OREG(73)    /* ������󥰥ܥå��� �� */
#define VIEW_FOVY      ((float)OREG(74)/100.0f)    /* Ʃ��ͱƣ������λ���� */
#define VIEW_NEAR      (float)OREG(75)    /* Ʃ��ͱƥ˥�������å� */
#define VIEW_FAR       (float)OREG(76)    /* Ʃ��ͱƥե�������å� */
#define VIEW_SCALE     (float)OREG(77)    /* Ʃ��ͱƥ���������� */

#define VIEW_EYE_X     (float)OREG(80)    /* LookAt() ���� X */
#define VIEW_EYE_Y     (float)OREG(81)    /* LookAt() ���� Y */
#define VIEW_EYE_Z     (float)OREG(82)    /* LookAt() ���� Z */
#define VIEW_CENTER_X  (float)OREG(83)    /* LookAt() ������ X */
#define VIEW_CENTER_Y  (float)OREG(84)    /* LookAt() ������ Y */
#define VIEW_CENTER_Z  (float)OREG(85)    /* LookAt() ������ Z */
#define VIEW_UP_X      (float)OREG(86)    /* LookAt() ������ X */
#define VIEW_UP_Y      (float)OREG(87)    /* LookAt() ������ Y */
#define VIEW_UP_Z      (float)OREG(88)    /* LookAt() ������ Z */

#define INIT_VIEW_OREG() {           \
             OREG(70) = 0;                  /* VIEW_SCTOP */ \
             OREG(71) = (short)SCREEN_HT;   /* VIEW_SCBOTTOM */ \
             OREG(72) = 0;                  /* VIEW_SCLEFT */ \
             OREG(73) = (short)SCREEN_WD;   /* VIEW_SCRIGHT */ \
             OREG(74) = 60*100;             /* VIEW_FOVY */ \
             OREG(75) = 10;                 /* VIEW_NEAR */ \
             OREG(76) = 12800;              /* VIEW_FAR */ \
             OREG(77) = 1;                  /* VIEW_SCALE */ \
             OREG(80) = 0;                  /* VIEW_EYE_X */ \
             OREG(81) = 0;                  /* VIEW_EYE_Y */ \
             OREG(82) = -1;                 /* VIEW_EYE_Z */ \
             OREG(83) = 0;                  /* VIEW_CENTER_X */ \
             OREG(84) = 0;                  /* VIEW_CENTER_Y */ \
             OREG(85) = 0;                  /* VIEW_CENTER_Z */ \
             OREG(86) = 0;                  /* VIEW_UP_X */ \
             OREG(87) = 1;                  /* VIEW_UP_Y */ \
             OREG(88) = 0;                  /* VIEW_UP_Z */ \
	}

#else

#define VIEW_SCTOP     (0)                /* ������󥰥ܥå��� �� */
#define VIEW_SCBOTTOM  SCREEN_HT          /* ������󥰥ܥå��� �� */
#define VIEW_SCLEFT    (0)                /* ������󥰥ܥå��� �� */
#define VIEW_SCRIGHT   SCREEN_WD          /* ������󥰥ܥå��� �� */
#define VIEW_FOVY      (60.0f)            /* Ʃ��ͱƣ������λ���� */
#define VIEW_NEAR      (10.0f)            /* Ʃ��ͱƥ˥�������å� */
#define VIEW_FAR       (12800.0f)         /* Ʃ��ͱƥե�������å� */
#define VIEW_SCALE     (1.0f)             /* Ʃ��ͱƥ���������� */

#define VIEW_EYE_X     (0.0f)             /* LookAt() ���� X */
#define VIEW_EYE_Y     (0.0f)             /* LookAt() ���� Y */
#define VIEW_EYE_Z     (-1.0f)            /* LookAt() ���� Z */
#define VIEW_CENTER_X  (0.0f)             /* LookAt() ������ X */
#define VIEW_CENTER_Y  (0.0f)             /* LookAt() ������ Y */
#define VIEW_CENTER_Z  (0.0f)             /* LookAt() ������ Z */
#define VIEW_UP_X      (0.0f)             /* LookAt() ������ X */
#define VIEW_UP_Y      (1.0f)             /* LookAt() ������ Y */
#define VIEW_UP_Z      (0.0f)             /* LookAt() ������ Z */

#define INIT_VIEW_OREG() 
#endif

/*###
 |##  �ؿ������
 |#
 */

#ifdef __VIEW_C_
#define _LOCAL
_LOCAL  void set_viewport(Vp *vp, irect *sc);
#define _GLOBAL
#else /* __VIEW_C_ */
#define _GLOBAL    extern
#endif /* __VIEW_C_ */

_GLOBAL View  *createView(Graph *graph);
_GLOBAL void  destroyView(View *obj);
_GLOBAL void  initView(View *obj, Graph *graph);
_GLOBAL void  setPerspectiveView(View *obj, float fovy, float near, float far);
_GLOBAL void  getPerspectiveView(View *obj, float *fovy, float *near, float *far);
_GLOBAL void  setScaleView(View *obj, float scale);
_GLOBAL void  getScaleView(View *obj, float *scale);
_GLOBAL void  setOrthoView(View *, float fovy, float near, float far);
_GLOBAL void  getOrthoView(View *, float *fovy, float *near, float *far);
_GLOBAL void  setScissorView(View *obj, irect *vp);
_GLOBAL void  getScissorView(View *obj, irect *vp);
_GLOBAL void  setLookAtView(View *obj, xyz_t *eye, xyz_t *center, xyz_t *up);
_GLOBAL void  getLookAtView(View *obj, xyz_t *eye, xyz_t *center, xyz_t *up);
_GLOBAL int   showView(View *obj, int do_mask);
_GLOBAL int   showPerspectiveView(View *obj);
_GLOBAL int   showOrthoView(View *obj);
_GLOBAL int   showOverLayView(View *obj);
_GLOBAL int   showPerspectiveOverLayView(View *obj);
_GLOBAL int   showView1(View *obj, int do_mask, Gfx **glistpp);
_GLOBAL int   showViewAgain(View *obj);

_GLOBAL int   stretchViewInit(View *obj);
_GLOBAL int   stretchViewSet(View *, xyz_t, xyz_t, float);
_GLOBAL int   stretchViewRotate(View *, float, float, float);
_GLOBAL int   stretchViewScale(View *, float, float, float);
_GLOBAL int   stretchViewSpeed(View *, float);
_GLOBAL int   stretchViewReset(View *);

#define getEyeView(vv)         (&((vv)->eye))
#define getCenterView(vv)      (&((vv)->center))
#define getUpView(vv)          (&((vv)->up))

#define setFovyView(vv, ff)    ((vv)->fovy = (ff))

/*###
 |##  ɸ��, ���ꥸ�ʥ륳��ѥ��֥�
 |#
 */

#define View_ct(vv, gg)     initView(vv, gg)
#define View_dt(vv)         (vv)

#define view_init(vv, gg)   initView(vv, gg)
#define view_setup_view(vv) showView(vv, VIEW_DO_AUTO)
#define view_setup_again(vv) showViewAgain(vv)
#define view_setup_view1(vv, glistpp) showView1(vv, VIEW_DO_AUTO, glistpp)
#define view_set_ScissorBox(vv, ll, tt, rr, bb) { \
             irect __rr;                          \
	     __rr.top = tt;  __rr.bottom = bb;    \
	     __rr.left = ll;  __rr.right = rr;    \
            setScissorView(vv, &__rr);             \
	}
#define view_set_Perspective(vv, yy, nn, ff, ss) \
            setPerspectiveView(vv, yy, nn, ff)
#define view_set_LookAtXYZ(vv, ex, ey, ez, cx, cy, cz, ux, uy, uz) { \
            xyz_t  __ee, __cc, __uu;                           \
	    __ee.x = ex;  __ee.y = ey;  __ee.z = ez;           \
	    __cc.x = cx;  __cc.y = cy;  __cc.z = cz;           \
	    __uu.x = ux;  __uu.y = uy;  __uu.z = uz;           \
	    setLookAtView(vv, &__ee, &__cc, &__uu);               \
	}
#define view_set_LookAt(vv, ee, cc, uu)    setLookAtView(vv, ee, cc, uu)

#define view_get_eye(vv)         getEyeView(vv)
#define view_get_center(vv)      getCenterView(vv)
#define view_get_up(vv)          getUpView(vv)

#undef _GLOBAL
#undef _LOCAL

#if DEBUG
	    extern int
debug_eyecheck(float eyex, float eyey, float eyez);
#else
#define debug_eyecheck(eyex, eyey, eyez) (void)0 /* nop */
#endif
	    
#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* __VIEW_H_ */
