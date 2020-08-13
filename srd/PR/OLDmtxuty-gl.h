/*
 * $Id: OLDmtxuty-gl.h,v 1.1 2003/03/14 03:27:04 tong Exp $
 *
 * $Log: OLDmtxuty-gl.h,v $
 * Revision 1.1  2003/03/14 03:27:04  tong
 * copied SRD dir from old tree to new tree.
 *
 * Revision 1.1.1.1  2003/01/17 21:06:42  tong
 * ZELDA-OCARINA OF TIME (20L) build from Nintendo
 *
 * Revision 2.1  1998-10-22 20:19:27+09  hayakawa
 * �ңϣͽФ��С������
 *
 * Revision 1.6  1998-04-01 11:40:42+09  hayakawa
 * ��������ͤ� __cplusplus �� _LANGUAGE_C_PLUS_PLUS ���ѹ�
 *
 * Revision 1.5  1996/11/26  05:58:37  hayakawa
 * �����ɬ�פʥե�����򥤥󥯥롼�ɤ���褦�ˤ���
 *
 * Revision 1.4  1996/10/20  09:15:05  hayakawa
 * _LANGUAGE_C_PLUS_PLUS �� __cplusplus ���ѹ�
 *
 */

/*
 * gl�ؿ�������黻
 */

#ifndef __MTXUTY_GL_H_
#define __MTXUTY_GL_H_

#include "u64types.h"		/* u64����� */

#define GL_MODEL_DEPTH 32

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

void
glInitalize( void );
void
glPushMatrix( void );
void
glPopMatrix( void );
void
glLoadIdentity( void );
void
glLoadMatrixf( const Mtxf *const m2 );
void
glLoadMatrixi( const Mtx *const m2 );
void
glGetMatrixf( Mtxf *const m2 );
void
glGetMatrixi( Mtx *const m2 );
void
glMultMatrixf( const Mtxf *const m2 );
void
glMultMatrixi( const Mtx *const m2 );
void
glScale3f( const float x, const float y, const float z );
void
glScale2f( const float x, const float y );
void
glRotateZf( const float angle );
void
glRotateXf( const float angle );
void
glRotateYf( const float angle );
void
glRotatef( const float angle, const float x, const float y, const float z );
void
glTranslate3f( const float x, const float y, const float z );
void
glTranslate2f( const float x, const float y );

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* __MTXUTY_GL_H_ */
