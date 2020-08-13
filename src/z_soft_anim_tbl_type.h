/*  $Id: z_soft_anim_tbl_type.h,v 2.1 1998/10/22 11:51:48 zelda Exp $ */
/*----------------------------------------------------------------------------
 *
 * z_soft_anim_tbl_type.h
 *
 * ���եȥ��ޡ��� ���˥᡼�����ơ��֥빽¤��
 *
 * Program:Kenji Matsutani
 *
 * $Log: z_soft_anim_tbl_type.h,v $
 * Revision 2.1  1998/10/22  11:51:48  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.7  1997/06/18 04:40:26  matutani
 * SoftAnimTblInfo2����н���ѹ�
 *
 * Revision 1.6  1997/06/18  01:36:41  matutani
 * SoftAnimTblInfo2�ɲ�
 *
 * Revision 1.5  1997/04/26  03:05:30  matutani
 * ��¤�Τ�̾�������㤦�ɡ���
 *
 * Revision 1.4  1997/04/22  02:28:17  matutani
 * ��ǥ��short����unsigned char ���ѹ�
 *
 * Revision 1.3  1997/04/15  02:30:26  matutani
 * trs��rot�����ؤ�
 *
 * Revision 1.2  1997/04/14  01:14:08  matutani
 * �����쥯���б�
 *
 * Revision 1.1  1997/03/25  07:44:46  matutani
 * Initial revision
 *
 *
 *---------------------------------------------------------------------------*/

#ifndef INCLUDE_Z_SOFT_ANIM_TBL_TYPE_H
#define INCLUDE_Z_SOFT_ANIM_TBL_TYPE_H


/*
 * type_flag �ѥ����å��ޥ���
 */
#define TYPE_FLAG_SCL_CUT_MASK (1<<0)
#define TYPE_FLAG_ROT_CUT_MASK (1<<1)
#define TYPE_FLAG_TRS_CUT_MASK (1<<2)
/* ����Ū��root model�Υȥ�󥹥졼�ȥǡ����ɲ� */
#define TYPE_FLAG_ADD_ROOT_TRS_MASK (1<<3)
/* �����쥯�ȥǡ��� */
#define TYPE_FLAG_DIRECT_DATA_MASK (1<<4)
/* rot��trs�ν���������ؤ��� */
#define TYPE_FLAG_TR_EXCHANGE_MASK (1<<5)

/*----------------------------------------------------------------------------
 *
 * ���եȥ��ޡ��� ���˥᡼�����¤��:���ߥ�����Τ�
 *
 *--------------------------------------------------------------------------*/
typedef struct soft_anim_tbl_info {
    short mdl_num; /* ��ǥ�� */
   
    unsigned short frame_num; /* ���ե졼��� */
    unsigned char type_flag; /* �Ƽ�ե饰  */
    /*
     * �ե饰����
     * 1bit��:�������륫�åȥե饰
     * 2bit��:���ơ��ȥǡ������å�
     * 3bit��:�ȥ�󥹥졼�ȥ��åȥե饰
     * 4bit��:�����쥯�ȥǡ���
     * 5bit��:rot,trs�����ؤ�(ľ�ܥǡ����Τߤ��б�)
     */
    
    unsigned short *anim_ref_tbl; /* ���˥᡼����󻲾ȥơ��֥� */
    
    short *anim_tbl; /* ���˥᡼�����ǡ��� */

    /*
     * ���˥᡼����󥹥����ȥ���ǥå���
     * ���˥᡼�����ǡ����ơ��֥��,���Υ���ǥå���������
     * ���˥᡼�����ǡ�������äƤ��롣
     */
    unsigned short anim_start_index; 
  
} SoftAnimTblInfo;

/*--------------------------------------------------------------------------
 *
 * ���եȥ��ޡ������˥᡼�����¤��:������
 *
 *-------------------------------------------------------------------------*/
typedef struct soft_anim_tbl_info2 {
    unsigned short frame_num; /* ���ե졼��� */
    short *anim_tbl; /* ���˥᡼�����ǡ��� */
    unsigned short *anim_ref_tbl; /* ���˥᡼����󻲾ȥơ��֥� */
    unsigned short part_index; /* ����ǡ����ȥ��˥᡼�����ǡ�����ʬ������ */
} SoftAnimTblInfo2;

/*----------------------------------------------------------------------------
 *
 * ���եȥ��ޡ��� ���˥᡼�����¤��:���ROM��
 *
 *---------------------------------------------------------------------------*/
typedef struct soft_anim_tbl_rom_trs_info {
    unsigned short frame_num; /* ���ե졼��� */
    short *anim_tbl; /* ���˥᡼�����ǡ��� */
} SoftAnimTblRomTrsInfo;

#endif

/*** z_soft_anim_tbl_type.h end ***/


