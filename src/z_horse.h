/* $Id: z_horse.h,v 2.1 1998-10-22 21:17:25+09 zelda Exp $ */
/*----------------------------------------------------------------------------
 *
 * ���ѽ���
 *
 * z_horse.h
 *
 *$Log: z_horse.h,v $
 *Revision 2.1  1998-10-22 21:17:25+09  zelda
 *�ңϣͽФ��С������(NTSC)
 *
 *Revision 1.6  1998/09/22 11:38:29  matutani
 **** empty log message ***
 *
 *Revision 1.5  1998-09-10 17:40:25+09  matutani
 **** empty log message ***
 *
 *Revision 1.4  1998-04-22 21:53:14+09  matutani
 **** empty log message ***
 *
 *Revision 1.3  1998-04-21 22:54:56+09  matutani
 **** empty log message ***
 *
 *Revision 1.2  1998-03-30 22:17:43+09  matutani
 **** empty log message ***
 *
 *
 * Program:Kenji Matsutani
 *
 *--------------------------------------------------------------------------*/

#ifndef INCLUDE_Z_HORSE_H
#define INCLUDE_Z_HORSE_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif


#include"z_play.h"
#include"z_actor.h"

/*---------------------------------------------------------------------------
 *
 * �ϥ��åȥ����å�
 *
 *--------------------------------------------------------------------------*/
extern void Horse_Set_Check(
    Game_play *game_play,
    Actor *thisx);

/*===========================================================================
 *
 * ���Ѷ��̥롼����
 *
 *==========================================================================*/

/*===========================================================================
 *
 * �ϥǥե���Ȱ�������
 *
 *==========================================================================*/
extern void Horse_goto_Default(Game_play *game_play);

/*============================================================================
 *
 * �ϥ��ꥢ�� ����
 *
 *==========================================================================*/
extern void Horse_escape_Spot06Water(Game_play *game_play);

/*--------------------------------------------------------------------------
 *
 * ������֤ظ��������Ȥ��롣�������max_angle_sy(>0)�����¤��줿�����Ѳ���,
 * angle.sy���Ѳ�������
 *
 *------------------------------------------------------------------------*/
extern void horse_rot_trace_pos(
    Actor *this,
    xyz_t *ptarget_pos,
    short max_angle_sy);


/*----------------------------------------------------------------------------
 *
 * ¾�Υ��������Ȥΰ��ִط����顢��ʬ�˺�Ŭ�ʰ��֤���롣
 *
 * ����:Game_play *game_play:
 *      Actor_info *ai:
 *      xyz_t *current_pos:���߰���
 *      short angle_y:����
 *      float base_length ����Υ����¾�Υ��������Ȥ��ε�Υ�����Ȥ��롣
 *      ����Ǥʤ���
 *      int counter:�����å������󥿡ʥ����å����륢�������������
 *      �����к�
 *      xyz_t *psp:�Ƥ��Ф��줿��Ŭ����
 *
 *---------------------------------------------------------------------------*/
extern void horse_suitable_position(
    Game_play *game_play,
    Actor_info *ai,
    xyz_t *current_pos,
    short angle_y,
    float base_length,
    int limiter,
    xyz_t *psp);

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

/*** z_horse.h EOF ***/


