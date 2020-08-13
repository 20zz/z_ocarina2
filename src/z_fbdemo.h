/*
 * $Id: z_fbdemo.h,v 2.1 1998/10/22 12:17:25 zelda Exp $
 *
 * ��������� �� �ĥե졼��Хåե��ǥ�
 *
 * $Log: z_fbdemo.h,v $
 * Revision 2.1  1998/10/22  12:17:25  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.7  1998/09/07 02:46:36  hayakawa
 * *** empty log message ***
 *
 * Revision 1.6  1998-04-01 11:46:58+09  hayakawa
 * ��������ͤ� __cplusplus �� _LANGUAGE_C_PLUS_PLUS ���ѹ�
 *
 * Revision 1.5  1997/10/03  14:18:42  hayakawa
 * fbdemo_triforce�Ȥ�ʬΥ
 *
 * Revision 1.4  1997/10/03  05:09:15  hayakawa
 * *** empty log message ***
 *
 * Revision 1.3  1997/10/01  14:16:01  hayakawa
 * �ؿ��ץ�ȥ������ѹ�
 *
 * Revision 1.2  1997/09/30  13:45:09  hayakawa
 * �ȥ饤�ե������ե��륿����
 *
 * Revision 1.1  1997/09/24  00:59:45  hayakawa
 * Initial revision
 *
 */

#ifndef _Z_FBDEMO_H_
#define _Z_FBDEMO_H_

#include "u64basic.h"

typedef struct {
    int row;			/* �ݥꥴ��β���=10 */
    int col;			/* �ݥꥴ��νĿ�=7 */
    int bank;			/* 0:BankA 1:BankB */
    xy_t *xy_tbl;		/* �׻���ĺ���ơ��֥� */
    Vtx *vtxtbl_A;		/* ������ĺ���ơ��֥� BankA */
    Vtx *vtxtbl_B;		/* ������ĺ���ơ��֥� BankB */
    Mtx project_mtx;
    Mtx model_mtx_A;		/* ��ǥ�󥰹��� BankA */
    Mtx model_mtx_B;		/* ��ǥ�󥰹��� BankB */
    Gfx *gfxtbl;		/* �ǥ����ץ쥤�ꥹ���ΰ� */
    u64 *txtbuf;		/* �ƥ�������ݥ��� */
} fbdemo_t;

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif
    
extern fbdemo_t *fbdemo_init(fbdemo_t *this, int row, int col);
extern void fbdemo_cleanup(fbdemo_t *this);
extern void fbdemo_draw(fbdemo_t *this, Gfx **gpp);
extern void fbdemo_move(fbdemo_t *this);
extern int fbdemo_is_finish(fbdemo_t *this);

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif
