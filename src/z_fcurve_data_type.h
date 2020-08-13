/* $Id: z_fcurve_data_type.h,v 2.1 1998-10-22 21:17:25+09 zelda Exp $ */
/*===========================================================================
 *
 * z_fcurve_data_type.h
 *
 * Program:Kenji Matsutani
 * Date:1998ǯ 1��30��(������) 20��10ʬ55�� JST
 *
 *$Log: z_fcurve_data_type.h,v $
 *Revision 2.1  1998-10-22 21:17:25+09  zelda
 *�ңϣͽФ��С������(NTSC)
 *
 *Revision 1.1  1998/02/09 05:11:19  matutani
 *Initial revision
 *
 *
 *===========================================================================*/

#ifndef INCLUDE_Z_FCURVE_DATA_TYPE_H
#define INCLUDE_Z_FCURVE_DATA_TYPE_H

/*============================================================================
 *
 * Key Data Num Tbl
 *
 * ���Υե��󥯥���󥫡��֤�,���ĤΥ�����¸�ߤ��뤫���Υǡ�������255�ĤΥ���
 * ����ġ�
 *
 * ����SRT��
 * model:scl.x 1�Х���
 *           y
 *           z
 *      :rot.x 1�Х���
 *           y 
 *           z 
 *      :trs.x 1�Х���
 *           y
 *           z
 *   
 *==========================================================================*/
/*===========================================================================
 *
 * �ƥ����Υǡ���
 *
 * ��������
 * unsigned short type:�ӥåȾ���(-> sys_hermit_interp_def.h)
 * short frame:�����Υե졼���
 * short lslope, rslope:����
 * float value : ���륭���λ�����
 *
 *==========================================================================*/
typedef struct key_data {
    unsigned short type;
    short frame;
    short lslope, rslope;
    float value;
} KeyData;

/*---------------------------------------------------------------------------
 *
 * �ե��󥯥���󥫡��ֹ�¤��
 *
 * ��������
 * unsigned char *key_num_tbl:�������Ǥ����ĥ����ǡ����θĿ�
 * KeyData *key_data_tbl:�����ǡ����Υơ��֥�ؤΥݥ��󥿡�
 * unsigned short *lock_param:�����ͥǡ����ʥȥ�󥹥졼�����Υޥ��ʥ���
 * ��ա�
 * unsigned short start, end : �������ȥե졼��,����ɥե졼��ʥ��ե�
 * ���ޡ����ǥ��åȤ��줿���ˤ������������ͤ��ϰϤ�ۤ����ե졼��Ǥ�׻���ǽ��
 *
 *-------------------------------------------------------------------------*/
typedef struct fcurve_data {
    unsigned char *key_num_tbl;
    KeyData *key_data_tbl;
    unsigned short *lock_param;
    unsigned short start, end;
} FcurveData;

#endif

/*** z_fcurve_data_type.h EOF ***/
