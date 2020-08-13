/*
 * $Id: gfxprint.h,v 1.1 2003/03/14 03:27:04 tong Exp $
 *
 * ���̤ؤ�ü����ʸ��ɽ��
 *
 * $Log: gfxprint.h,v $
 * Revision 1.1  2003/03/14 03:27:04  tong
 * copied SRD dir from old tree to new tree.
 *
 * Revision 1.1.1.1  2003/01/17 21:06:42  tong
 * ZELDA-OCARINA OF TIME (20L) build from Nintendo
 *
 * Revision 2.2  2001-01-11 23:15:11+09  hayakawa
 * �ϥ��쥾�б�
 *
 * Revision 2.1  1998-10-22 20:19:27+09  hayakawa
 * �ңϣͽФ��С������
 *
 * Revision 1.10  1998-07-22 22:13:35+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.9  1998-07-21 12:05:00+09  hayakawa
 * ��ꤢ������������ᤷ��
 *
 * Revision 1.8  1998-07-20 11:43:10+09  hayakawa
 * ��������
 *
 * Revision 1.7  1998-07-09 22:09:27+09  hayakawa
 * �ޤ�����
 *
 * Revision 1.6  1998-04-01 11:42:17+09  hayakawa
 * ��������ͤ� __cplusplus �� _LANGUAGE_C_PLUS_PLUS ���ѹ�
 *
 * Revision 1.5  1997/08/28  11:08:30  hayakawa
 * *** empty log message ***
 *
 * Revision 1.4  1997/06/13  06:46:08  hayakawa
 * ���ȥ�ӥ塼���ѹ��ե饰�ɲ�
 * �ƥ⡼���ɲ�
 *
 * Revision 1.3  1997/04/09  10:05:00  hayakawa
 * Gfxprint_printf[n]���ɲ�
 *
 * Revision 1.2  1997/03/05  05:31:39  hayakawa
 * ����ʸ�����б�
 *
 * Revision 1.1  1997/02/14  00:53:26  hayakawa
 * Initial revision
 *
 */

#ifndef __GFXPRINT_H_
#define __GFXPRINT_H_

#include "ultra64.h"
#include "u64types.h"
#include <stdarg.h>		/* va_list, va_start, va_end */

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif
#if 0
}
#endif

/* 20 bytes */
typedef struct gfxprint_s {
    void (*prout_func)(void *, const char *, int);
    /* ���θ�������ؿ��ѤΥǡ��� */
    Gfx *glistp;
    u16 position_x;		/* ���֥ԥ�����ñ�̤�ɽ����ɸ */
    u16 position_y;		/* ���֥ԥ�����ñ�̤�ɽ����ɸ */
    u16 offset_x;		/* ɽ�����ե��å� */
    u8 offset_y;		/* ɽ�����ե��å� */
    u8 flags;			/* &1:!0=�Ҥ餬�ʡ�0=�������� 
				   &2:����ǡ������ɽ��
				   &4:����ɡ�ɽ��
				   &8:���ȥ�ӥ塼���ѹ����줿
                                   &64:���쥾���ϥ��쥾�Ѵ�
				   &128:�����ץ���� */
    rgba8888_u_t color;
    u8 dummy[28];		/* �������ߴ��ѡʤ�����ä��� */
} gfxprint_t;
extern u8 __gfxprint_default_flags; /* ����������Х��ѿ� */

#define gfxprint_default_isLow2high() 	((__gfxprint_default_flags & 64) != 0)
#define gfxprint_default_setLow2high() 	(__gfxprint_default_flags |= 64)
#define gfxprint_default_clrLow2high() 	(__gfxprint_default_flags &= ~64)

#define gfxprint_isOpened(this) 	(((this)->flags & 128) != 0)
#define gfxprint_setOpened(this) 	((this)->flags |= 128)
#define gfxprint_clrOpened(this) 	((this)->flags &= ~128)
#define gfxprint_isLow2high(this) 	(((this)->flags & 64) != 0)
#define gfxprint_setLow2high(this) 	((this)->flags |= 64)
#define gfxprint_clrLow2high(this) 	((this)->flags &= ~64)
#define gfxprint_isHiragana(this) 	(((this)->flags & 1) != 0)
#define gfxprint_isKatakana(this) 	(((this)->flags & 1) == 0)
#define gfxprint_setHiragana(this) 	((this)->flags |= 1)
#define gfxprint_setKatakana(this) 	((this)->flags &= ~1)
#define gfxprint_isGradetion(this) 	(((this)->flags & 2) != 0)
#define gfxprint_setGradetion(this) 	((this)->flags |= 2)
#define gfxprint_clrGradetion(this) 	((this)->flags &= ~2)
#define gfxprint_isShadow(this) 	(((this)->flags & 4) != 0)
#define gfxprint_setShadow(this) 	((this)->flags |= 4)
#define gfxprint_clrShadow(this) 	((this)->flags &= ~4)
#define gfxprint_isChanged(this) 	(((this)->flags & 8) != 0)
#define gfxprint_setChanged(this) 	((this)->flags |= 8)
#define gfxprint_clrChanged(this) 	((this)->flags &= ~8)

extern void gfxprint_color( gfxprint_t *this, unsigned int r, unsigned int g, unsigned int b, unsigned int a );

extern void gfxprint_locate( gfxprint_t *this, int x, int y );
extern void gfxprint_locate8x8( gfxprint_t *this, int x, int y );
extern void gfxprint_setoffset( gfxprint_t *this, int x, int y );

extern void gfxprint_putc( gfxprint_t *this, char c );
extern void gfxprint_write( gfxprint_t *this, const void *buffer, size_t size, size_t n );
extern void gfxprint_puts( gfxprint_t *this, char *string );

extern void gfxprint_init(gfxprint_t *this);
extern void gfxprint_cleanup(gfxprint_t *this);

extern void gfxprint_open(gfxprint_t *this, Gfx *glistp);
extern Gfx *gfxprint_close(gfxprint_t *this);

extern int gfxprint_vprintf(gfxprint_t *this, const char *fmt, va_list ap);
extern int gfxprint_printf(gfxprint_t *this, const char *fmt, ...);

#define Gfxprint_color(r, g, b, a)	gfxprint_color(gfxprint, r, g, b, a)  
#define Gfxprint_locate(x, y)		gfxprint_locate(gfxprint, x, y)     
#define Gfxprint_locate8x8(x, y)	gfxprint_locate8x8(gfxprint, x, y)  
#define Gfxprint_setoffset(x, y)	gfxprint_setoffset(gfxprint, x, y)     

#define Gfxprint_putc(c)		gfxprint_putc(gfxprint, c)         
#define Gfxprint_write(b, s, n)		gfxprint_write(gfxprint, b, s, n)    
#define Gfxprint_puts(s)		gfxprint_puts(gfxprint, s)         

#define Gfxprint_init()			gfxprint_init(gfxprint)          
#define Gfxprint_cleanup()		gfxprint_cleanup(gfxprint)       
#define Gfxprint_open(glistp)		gfxprint_open(gfxprint, glistp)    
#define Gfxprint_close()		gfxprint_close(gfxprint)         

#define Gfxprint_vprintf(fmt, ap)	gfxprint_vprintf(gfxprint, fmt, ap)

#define Gfxprint_printf0(fmt) \
gfxprint_printf(gfxprint,fmt)
#define Gfxprint_printf1(fmt, a1) \
gfxprint_printf(gfxprint,fmt, a1)
#define Gfxprint_printf2(fmt, a1, a2) \
gfxprint_printf(gfxprint,fmt, a1, a2)
#define Gfxprint_printf3(fmt, a1, a2, a3) \
gfxprint_printf(gfxprint,fmt, a1, a2, a3)
#define Gfxprint_printf4(fmt, a1, a2, a3, a4) \
gfxprint_printf(gfxprint,fmt, a1, a2, a3, a4)
#define Gfxprint_printf5(fmt, a1, a2, a3, a4, a5) \
gfxprint_printf(gfxprint,fmt, a1, a2, a3, a4, a5)
#define Gfxprint_printf6(fmt, a1, a2, a3, a4, a5, a6) \
gfxprint_printf(gfxprint,fmt, a1, a2, a3, a4, a5, a6)
#define Gfxprint_printf7(fmt, a1, a2, a3, a4, a5, a6, a7) \
gfxprint_printf(gfxprint,fmt, a1, a2, a3, a4, a5, a6, a7)
#define Gfxprint_printf8(fmt, a1, a2, a3, a4, a5, a6, a7, a8) \
gfxprint_printf(gfxprint,fmt, a1, a2, a3, a4, a5, a6, a7, a8)
#define Gfxprint_printf9(fmt, a1, a2, a3, a4, a5, a6, a7, a8, a9) \
gfxprint_printf(gfxprint,fmt, a1, a2, a3, a4, a5, a6, a7, a8, a9)

#define GP_KATA "\214"
#define GP_HIRA "\215"
#define GP_GRADETION_ON "\213"
#define GP_GRADETION_OFF "\212"

#if 0
{
#endif
#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* __GFXPRINT_H_ */
