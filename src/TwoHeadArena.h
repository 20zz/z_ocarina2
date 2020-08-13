/*
 * $Id: TwoHeadArena.h,v 2.1 1998/10/22 11:41:56 zelda Exp $
 *
 * ��Ƭ��Ʈ����
 *
 * ���Υ饤�֥��ϡ��áܡܤ������Ѥ��뤳�Ȥ�
 * ����Υѥե����ޥ󥹤�ȯ������褦���߷פ���Ƥ��롣
 *
 * ����Υ��������ΰ����Ƭ������������ݤ��Ƥ���
 * ��Ƭ�����Ϣ³Ū�˳��ݤ��� ��� realloc ���Ƥ�褦�ʤ��
 * �����������³Ū�˳��ݤ��� ��® malloc  �Τ褦�ʤ��
 * ���̤� free ��¸�ߤ�������ˤ��٤Ƥ�Ʊ���� ��������
 *
 * $Log: TwoHeadArena.h,v $
 * Revision 2.1  1998/10/22  11:41:56  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.10  1998/06/25 02:47:20  hayakawa
 * *** empty log message ***
 *
 * Revision 1.9  1998-06-25 10:23:29+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.8  1998-06-24 23:01:02+09  hayakawa
 * ���饤�������̽���
 * THA_alloc16�ɲ�
 * THA_allocAlign�ɲ�
 *
 * Revision 1.7  1998-06-24 17:38:11+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.6  1998-04-30 22:36:52+09  hayakawa
 * ����������
 *
 * Revision 1.5  1998-04-02 18:05:20+09  hayakawa
 * �áܡܤΤȤ��˥���饤��ؿ��С������ˤʤ�褦�ˤ���
 *
 * Revision 1.4  1998/04/01  02:47:28  hayakawa
 * ��������ͤ� __cplusplus �� _LANGUAGE_C_PLUS_PLUS ���ѹ�
 *
 * Revision 1.3  1996/10/09  05:30:17  hayakawa
 * ��Ƭ�ݥ��󥿤����꤬�Ǥ���褦�� THA_setHeadPtr �ؿ����ɲä���
 *
 */

#ifndef __TWOHEADARENA_H_
#define __TWOHEADARENA_H_

#include "u64types.h"

typedef struct TwoHeadArena_s {
    size_t size;		/* �Хåե������� */
    char *buf_p;		/* �Хåե���Ƭ�ݥ��� */
    char *head_p;		/* �祢���������ݥ��� */
    char *tail_p;		/* �ե����������ݥ��� */
} TwoHeadArena_t;
typedef TwoHeadArena_t TwoHeadArena;
typedef TwoHeadArena_t THA;


#if defined(_LANGUAGE_C_PLUS_PLUS) && !defined(__TWOHEADARENA_C_)

inline void *
THA_getHeadPtr(TwoHeadArena *this)
{ return this->head_p; }

inline void
THA_setHeadPtr(TwoHeadArena *this, void *p)
{ this->head_p = (char *)p; }

inline void *
THA_getTailPtr(TwoHeadArena *this)
{ return this->tail_p; }

inline void *
THA_nextPtrN(TwoHeadArena *this, size_t n)
{ char *head_p1 = this->head_p; this->head_p += n; return head_p1; }

inline void *
THA_nextPtr1(TwoHeadArena *this)
{ return THA_nextPtrN(this, 1); }

inline void *
THA_alloc(TwoHeadArena *this, size_t siz)
{
    int mask;

    if (siz == 8) {
	mask = ~(8-1);
    } else if (siz == 4 || siz == 12) {
	mask = ~(4-1);
    } else if (siz == 2 || siz == 6 || siz == 10 || siz == 12 || siz == 14) {
	mask = ~(2-1);
    } else if (siz >= 16) {
	mask = ~(16-1);
    } else {
	mask = 0;
    }
    this->tail_p = (char *)((((int)this->tail_p & mask) - siz) & mask); /* align mask */
    return this->tail_p;
}

inline void *
THA_alloc16(TwoHeadArena *this, size_t siz)
{
    const int mask = ~(15-1); /* align 16 */
    this->tail_p = (char *)((((int)this->tail_p & mask) - siz) & mask);
    return this->tail_p;
}

inline void *
THA_allocAlign(TwoHeadArena *this, size_t siz, int mask)
{
    this->tail_p = (char *)((((int)this->tail_p & mask) - siz) & mask);
    return this->tail_p;
}

inline int
THA_getFreeBytes(TwoHeadArena *this)
{ return (int)this->tail_p - (int)this->head_p; }

inline int
THA_isCrash(TwoHeadArena *this)
{ return THA_getFreeBytes(this) < 0; }

inline void
THA_init(TwoHeadArena *this)
{ this->head_p = this->buf_p; this->tail_p = this->buf_p + this->size; }

inline void
THA_ct(TwoHeadArena *this, char *p, size_t n)
{
    this->buf_p = p;
    this->size = n;
    THA_init(this);
}

inline void
THA_dt(TwoHeadArena *this)
{ bzero(this, sizeof(TwoHeadArena)); }

#else  /* !(defined(_LANGUAGE_C_PLUS_PLUS) && !defined(__TWOHEADARENA_C_)) */

/* ���󥹥ȥ饯�� */
extern void THA_ct(TwoHeadArena *this, char *p, size_t n);
/* �ǥ��ȥ饯�� */
extern void THA_dt(TwoHeadArena *this);
/* ���ߤν�ݥ��󥿤μ��� */
extern void *THA_getHeadPtr(TwoHeadArena *this);
/* ���ߤν�ݥ��󥿤����� */
extern void THA_setHeadPtr(TwoHeadArena *this, void *p);
/* ���ߤεեݥ��󥿤μ��� */
extern void *THA_getTailPtr(TwoHeadArena *this);
/* �θĤν����Υ���������� */
extern void *THA_nextPtrN(TwoHeadArena *this, size_t n);
/* ���Ĥν����Υ���������� */
extern void *THA_nextPtr1(TwoHeadArena *this);
/* �ե���Υ���������� */
extern void *THA_alloc(TwoHeadArena *this, size_t siz);
extern void *THA_alloc16(TwoHeadArena *this, size_t siz);
extern void *THA_allocAlign(TwoHeadArena *this, size_t siz, int mask);
/* �ΰ��˲��򵯤����Ƥ��뤫������å� */
extern int THA_isCrash(TwoHeadArena *this);
/* �ΰ�������free�� */
extern void THA_init(TwoHeadArena *this);
/* �Ĥ�Υ�������������ΥХ��ȿ����֤� */
extern int THA_getFreeBytes(TwoHeadArena *this);

#endif  /* !(defined(_LANGUAGE_C_PLUS_PLUS) && !defined(__TWOHEADARENA_C_)) */

#endif /* __TWOHEADARENA_H_ */
