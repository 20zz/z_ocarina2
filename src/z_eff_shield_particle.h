/* $Id: z_eff_shield_particle.h,v 2.1 1998/10/22 12:13:45 zelda Exp $ */
/*
 *$Log: z_eff_shield_particle.h,v $
 * Revision 2.1  1998/10/22  12:13:45  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 *Revision 1.1  1998/08/28 01:44:39  matutani
 *Initial revision
 *
 */
/*===========================================================================
 *
 * ���Ѳв� V2
 *
 * Program:Kenji Matsutani
 * 1998ǯ 8��26��(������) 14��03ʬ38�� JST 
 *
 *=========================================================================*/

#ifndef INCLUDE_Z_EFF_SHIELD_PARTICLE_H
#define INCLUDE_Z_EFF_SHIELD_PARTICLE_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#include"z_effect.h"
#include"z_basic.h"

/*
 * ���
 * �ޤ���scaling����,trs_x,rot_z,rot_y����ɽ�����롣
 * scale_x��trs_x�˴�Ϣ����������롣
 * head_x��tail_x�Ȥκ���max_length�ˤʤ�ޤ�ư������
 * head_x,tail_x����trs,scale����ꤹ�롣
 */
    
/*
 * Particle��¤��
 */
typedef struct eff_sh_particle {
    /* �������ִ�Ϣ */
    float start_speed_x;
    float head_speed_x;
    float head_x;
    float tail_speed_x;
    float tail_x;
    
    /* rot��Ϣ */
    short rot_y;
    short rot_z;
} EffShParticle;

#define EFF_SH_PARTICLE_MAX_NUM 16

/*
 * �ǡ������åȹ�¤��
 */
typedef struct eff_sh_particle_info_data {

    /* �ѡ��ƥ�����Ŀ� */
    unsigned char particle_num;
    
    /* �濴���� */
    s_xyz center;
    
    /* ���顼 */
    /* �������� */
    rgba_t sp;
    rgba_t se;
    /* ��� */
    rgba_t mp;
    rgba_t me;
    /* �Ǹ� */
    rgba_t ep;
    rgba_t ee;

    /*
     * ����Υ֥졼��
     * head_brake > tail_brake
     */
    float brake;
    float max_speed; /* ����®�� */
    float max_length; /* ����Ĺ��(tail����,����˥�������˴ط�) */
    
    unsigned char max_frame;  /* ����ե졼��:�������Υ����Ȼ��� */
    
    Light_point lp; /* point light�Υǡ�����:���� */
    int light_flag; /* �饤�Ƚ����򤹤뤫�ɤ����Υե饰 */
    
} EffShParticleInfoData;

/*
 * �ᥤ��¤��
 */
typedef struct eff_sh_particle_info {
    EffShParticle particle[EFF_SH_PARTICLE_MAX_NUM];

    /* �ѡ��ƥ�����Ŀ� */
    unsigned char particle_num;

    /* �濴���� */
    s_xyz center;
    
    /* ���顼 */
    /* �������� */
    rgba_t sp;
    rgba_t se;
    /* ��� */
    rgba_t mp;
    rgba_t me;
    /* �Ǹ� */
    rgba_t ep;
    rgba_t ee;

    /*
     * ����Υ֥졼��
     */
    float brake;
    float start_speed_x; /* ��®�� */
    float max_speed; /* ����®�� */
    float max_length; /* ����Ĺ��(tail����,����˥�������˴ط�) */
    
    /*
     * ���speed�����ˤʤ�褦��max_frame������򤷤Ƥ���������
     * ���Υե졼�फ�饫�顼�׻�
     */
    unsigned char max_frame; 
    unsigned char frame;

    /* light */
    Light_data light; /* light�Υǡ����� */
    Light_list *light_list; /* light list�Υǡ��� */
    int light_flag; /* �饤�Ƚ����򤹤뤫�ɤ����Υե饰 */
    
} EffShParticleInfo;

/*============================================================================
 *
 * ���󥹥ȥ饯����
 *
 *==========================================================================*/
extern void EffectShieldParticle_ct(
    void *thisx,
    void *initx);

/*===========================================================================
 *
 * �ǥ��ȥ饯����
 *
 *=========================================================================*/
extern void EffectShieldParticle_dt(
    void *thisx);


/*============================================================================
 *
 * ư�����
 *
 *===========================================================================*/
extern Effect_Proc_Func EffectShieldParticle_proc(void *thisx);


/*============================================================================
 *
 * ɽ������
 *
 *==========================================================================*/
extern void EffectShieldParticle_disp(void *thisx, Graph *graph);


#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

/*** z_eff_shield_particle.h EOF ***/


