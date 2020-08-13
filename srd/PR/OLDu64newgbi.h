/*
 * $Id: OLDu64newgbi.h,v 1.1 2003/03/14 03:27:04 tong Exp $
 *
 * ���� gbi.h ��ĥ�ޥ���
 *
 * $Log: OLDu64newgbi.h,v $
 * Revision 1.1  2003/03/14 03:27:04  tong
 * copied SRD dir from old tree to new tree.
 *
 * Revision 1.1.1.1  2003/01/17 21:06:42  tong
 * ZELDA-OCARINA OF TIME (20L) build from Nintendo
 *
 * Revision 1.4  1999-08-06 21:18:10+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.3  1999-08-03 15:59:20+09  hayakawa
 * gDPSetCDAD�ɲ�
 *
 * Revision 1.2  1999-07-26 17:26:44+09  hayakawa
 * G_RM_RA_XLU_SURF/G_RM_RA_CLD_SURF���ɲ�
 *
 * Revision 1.1  1999-04-07 15:49:05+09  hayakawa
 * Initial revision
 *
 */

#ifndef __U64NEWGBI_H_
#define __U64NEWGBI_H_

#include "ultra64.h"

#define TEXRECT_FRAC 2		/* gSPTextureRectangle �� ɽ����ɸ�ξ������ */
#define TEXCOORD_FRAC 5		/* gSPTextureRectangle �� s, t��ɸ�ξ������ */
#define DELTA_FRAC 10		/* gSPTextureRectangle �� dsdx,dtdy�ξ������ */

/*
 * ����������Х���⡼��
 */
/* �ƥ�������ɽ����(����ե�̵��) */
#define	G_CC_RGB		0, 0, 0, TEXEL0, 0, 0, 0, 1
#define	G_CC_RGB1		G_CC_RGB
/* �ƥ�������ɽ��(����ե�ͭ��)G_CC_DECALRGBA��Ʊ�� */
#define	G_CC_RGBA		0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0
/* �饤�ȡߥץ�ߥƥ��֥��顼 */
#define	G_CC_SHADE_PRIM		SHADE, 0, PRIMITIVE, 0, SHADE, 0, PRIMITIVE, 0
/* �饤�ȡߥץ�ߥƥ��֥��顼(����ե��ͤ�PrimLOD�����ꤷPrimAlpha=1�Ȥ���) */
#define	G_CC_SHADE_PRIM_PLF	SHADE, 0, PRIMITIVE, 0, SHADE, 0, PRIM_LOD_FRAC, PRIMITIVE
/* �ƥ�������ߴĶ����顼 */
#define	G_CC_MODULATEIA_ENV	TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, ENVIRONMENT, 0
#define	G_CC_MODULATERGBA_ENV	G_CC_MODULATEIA_ENV
/* �ץ�ߥƥ��֥��顼�ȴĶ����顼�������䴰�ʷ����ϥƥ������㥫�顼��  */    
#define	G_CC_BLENDPERGBA	PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT
/* �ƥ������㥫�顼�ȥץ�ߥƥ��֥��顼�������䴰�ʷ����ϴĶ����顼�� */
#define	G_CC_BLENDPRGBA_ENV	PRIMITIVE, TEXEL0, ENVIRONMENT, TEXEL0, PRIMITIVE, TEXEL0, ENVIRONMENT, TEXEL0
/* �ƥ������㥫�顼�ȥץ�ߥƥ��֥��顼�������䴰�ʷ����ϥץ�ߥƥ��֣̣ϣġ� */
#define	G_CC_BLENDPRGBA_PLF	PRIMITIVE, TEXEL0, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, TEXEL0, PRIM_LOD_FRAC, TEXEL0
/* ���Ĥ�����ե��ƥ������� */
#define G_CC_PRIMDECALA 	0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0
/* ���å������줤�ʥ��顼�ƥ��������RGBA16��I4(A4)���礹�뤿��Ρ˥⡼�ɡʣ���������⡼�ɤΣ����������ܡ� */
#define G_CC_MULTIBIT_ALPHA 	0, 0, 0, TEXEL0, 0, 0, 0, TEXEL1
/* G_CC_MULTIBIT_ALPHA��ݥꥴ���Ž�� */
#define G_CC_MODULATEIA_2TEX 	TEXEL0, 0, SHADE, 0, TEXEL1, 0, SHADE, 0

/*
 * G_CC_MODULATERGBA_PRIM�μ����Ѳ��������
 * EnvColor��ä��뤳�Ȥǡ�����255���ǽ�ˤ��륳��Х���⡼��
 * �̾� EnvColor=(0,0,0,1) or (1,1,1,1) �Ȥ���Ȥ褤��
 */
#define	G_CC_MODULATEIA_PRIM_ADDENV	TEXEL0, 0, PRIMITIVE, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, ENVIRONMENT
#define	G_CC_MODULATERGBA_PRIM_ADDENV	G_CC_MODULATEIA_PRIM_ADDENV
/*
 * BLENDPEDECALA �Φ������Ѳ��������
 * PrimAlpha=255, EnvAlpha=1�ǡ�BLENDPEDECALA�Ȥۤ�Ʊ���ˤʤ롣
 * ���䴰������� PrimAlpha = �����ݦ��� EnvAlpha = ���� �Ȥ���
 * �������� ��������� �Ȥʤ�ʤ���Фʤ�ʤ����¤����롣
 */
#define	G_CC_BLENDPERGBA_ADDENV		PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, ENVIRONMENT

/* �˥󥸥����Ѵ��ѤˤĤ��ä� */
#define G_CC_MODULATEIA_SHADEPRIM TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0 /* �饤�Ȥ������äơ��ץ�ߥƥ��֥���ե�����ĥƥ������� */
#define G_CC_MODULATERGBA_SHADEPRIM G_CC_MODULATEIA_SHADEPRIM
#define G_CC_SHADEPRIM_TRANSP	SHADE, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE /* �饤�Ȥ������餺���ץ�ߥƥ��֥���ե�����ĥݥꥴ�� */
#define G_CC_SHADE_TRANSP	0, 0, 0, SHADE, 0, 0, 0, PRIMITIVE /* ���ס� */

#define G_CC_REFLECT_SHADE	TEXEL0, 0, PRIMITIVE, SHADE, TEXEL0, 0, PRIMITIVE, 0 /* �ƥ���:�Ρ��ޥ�饤�ȡܶ��̸� */
#define G_CC_MORPH_2TEX		TEXEL1, TEXEL0, PRIMITIVE_ALPHA, TEXEL0, TEXEL1, TEXEL0, PRIMITIVE, TEXEL0 /* ���ĤΥƥ�������Υ⡼�ե��� */
#define G_CC_NOISE2 		NOISE, 0, COMBINED, 0, 0, 0, 0, COMBINED /* �����������ܤˤĤ��ä������Ф��ơ������������ܤ˥Υ����򤫤��� */

/*
 * �������������⡼��
 */

/*
 * ����Х��󥢥�ե���Ȥä��û��⡼��
 * ���ꥫ�顼�ܥ���Х��󥫥顼�ߥ���Х��󥢥�ե� �� ���ꥫ�顼
 * �ʣ���������⡼�ɤΣ����������ܡ�
 */
#define	RM_ADD_ALPHA(clk)						\
	IM_RD | CVG_DST_SAVE | FORCE_BL | ZMODE_OPA |			\
	GBL_c##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1)
#define G_RM_ADD_ALPHA		RM_ADD_ALPHA(1)
#define G_RM_ADD_ALPHA2      	RM_ADD_ALPHA(2)

/*
 * ����ο���ݤ�������
 * ���ꥫ�顼�ܥ��ꥫ�顼�ߥ���Х��󥢥�ե� �� ���ꥫ�顼
 * �ʣ���������⡼�ɤΣ����������ܡ�
 */
#define	RM_MUL(clk)							\
	IM_RD | CVG_DST_SAVE | FORCE_BL |  ZMODE_OPA | 			\
	GBL_c##clk(G_BL_CLR_MEM, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1)
#define	G_RM_MUL		RM_MUL(1)
#define	G_RM_MUL2		RM_MUL(2)

/* ADD��MUL�λ��Σ����������� */
#define	G_RM_FOG_SHADE_A2	GBL_c2(G_BL_CLR_FOG, G_BL_A_SHADE, G_BL_CLR_IN, G_BL_1MA)
#define	G_RM_FOG_PRIM_A2	GBL_c2(G_BL_CLR_FOG, G_BL_A_FOG, G_BL_CLR_IN, G_BL_1MA)
#define	G_RM_PASS2		GBL_c2(G_BL_CLR_IN, G_BL_0, G_BL_CLR_IN, G_BL_1)

/*
 * ������������Ʃ���ե����⡼��
 * ��̤�ƥ��ȡ�
 */
#define	RM_ZB_OPA_SURF_FOG(clk)					\
	Z_CMP | Z_UPD | CVG_DST_FULL | ALPHA_CVG_SEL |		\
	ZMODE_OPA |						\
	GBL_c##clk(G_BL_CLR_FOG, G_BL_A_SHADE, G_BL_CLR_IN, G_BL_1MA)
#define	G_RM_ZB_OPA_SURF_FOG	RM_ZB_OPA_SURF_FOG(1)
#define	G_RM_ZB_OPA_SURF_FOG2	RM_ZB_OPA_SURF_FOG(2)

/*
 * ������������Ʃ���ե����⡼��
 * ��ǥ塼������������ꥢ��
 * ��̤�ƥ��ȡ�
 */
#define	RM_RA_ZB_OPA_SURF_FOG(clk)				\
	AA_EN | Z_CMP | Z_UPD | CVG_DST_CLAMP |			\
	ZMODE_OPA | ALPHA_CVG_SEL |				\
	GBL_c##clk(G_BL_CLR_FOG, G_BL_A_SHADE, G_BL_CLR_IN, G_BL_1MA)
#define	G_RM_RA_ZB_OPA_SURF_FOG	RM_RA_ZB_OPA_SURF_FOG(1)
#define	G_RM_RA_ZB_OPA_SURF_FOG2	RM_RA_ZB_OPA_SURF_FOG(2)

/* ȾƩ���Υǥ���(ȾƩ���α�) */
#define	RM_ZB_CLD_DECAL(clk)					\
	Z_CMP | IM_RD | CVG_DST_SAVE | FORCE_BL | ZMODE_DEC |	\
	GBL_c##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define	G_RM_ZB_CLD_DECAL	RM_ZB_CLD_DECAL(1)
#define	G_RM_ZB_CLD_DECAL2	RM_ZB_CLD_DECAL(2)

/*
 * Ʃ����ʬ�Υ��Х�å��˱ƶ���Ϳ������
 * ��Ʃ����ʬ�Υ��Х�å���ե�ˤ��롣
 * ȾƩ����ʬ�Υ��Х�å��˾����ƶ���Ϳ���롣
 * (������ȾƩ���ˤϸ����ʤ�)
 */
#define	RM_AA_TEX_CVG(clk)					\
	AA_EN | IM_RD | CVG_DST_CLAMP | 	 		\
	ZMODE_OPA | CVG_X_ALPHA | 				\
	GBL_c##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define G_RM_AA_TEX_CVG    RM_AA_TEX_CVG(1)
#define G_RM_AA_TEX_CVG2   RM_AA_TEX_CVG(2)

#define	RM_AA_ZB_TEX_CVG(clk)					\
	AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | 	\
	ZMODE_OPA | CVG_X_ALPHA | 				\
	GBL_c##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define G_RM_AA_TEX_CVG    RM_AA_TEX_CVG(1)
#define G_RM_AA_TEX_CVG2   RM_AA_TEX_CVG(2)

/*
 * RA�С�������G_RM_AA_TEX_EDGE
 */
#define	RM_RA_TEX_EDGE(clk)					\
	AA_EN | CVG_DST_CLAMP |					\
	CVG_X_ALPHA | ALPHA_CVG_SEL | ZMODE_OPA | TEX_EDGE |	\
	GBL_c##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define	G_RM_RA_TEX_EDGE	RM_RA_TEX_EDGE(1)
#define	G_RM_RA_TEX_EDGE2	RM_RA_TEX_EDGE(2)
#define	RM_RA_TEX_EDGE_BL(clk)					\
	AA_EN | CVG_DST_CLAMP |					\
	CVG_X_ALPHA | ALPHA_CVG_SEL | ZMODE_OPA | TEX_EDGE |	\
	GBL_c##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_BL, G_BL_1MA)
#define	G_RM_RA_TEX_EDGE_BL	RM_RA_TEX_EDGE_BL(1)
#define	G_RM_RA_TEX_EDGE_BL2	RM_RA_TEX_EDGE_BL(2)

/*
 * �̥�����ʬ�򹹿����ʤ��ΤǾ���®����
 * �������å��ν������������Ԥ��ʤ���
 * �ƥ�������쥯���󥰥�˸���
 * 
 */
#define RM_CLD_TEX_EDGE(clk) 						\
	IM_RD | CVG_DST_SAVE | FORCE_BL | ZMODE_OPA |  			\
	AA_EN | CVG_X_ALPHA | TEX_EDGE | 				\
	GBL_c##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)

#define RM_ZB_CLD_TEX_EDGE(clk) 					\
	Z_CMP | IM_RD | CVG_DST_SAVE | FORCE_BL | ZMODE_OPA | 		\
	AA_EN | CVG_X_ALPHA | TEX_EDGE |				\
	GBL_c##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)

#define	G_RM_CLD_TEX_EDGE	RM_CLD_TEX_EDGE(1)
#define	G_RM_CLD_TEX_EDGE2	RM_CLD_TEX_EDGE(2)
#define	G_RM_ZB_CLD_TEX_EDGE	RM_ZB_CLD_TEX_EDGE(1)
#define	G_RM_ZB_CLD_TEX_EDGE2	RM_ZB_CLD_TEX_EDGE(2)

#define RM_XLU_TEX_EDGE(clk) 						\
	IM_RD | CVG_DST_FULL | FORCE_BL | ZMODE_OPA |  			\
	AA_EN | CVG_X_ALPHA | TEX_EDGE | 				\
	GBL_c##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)

#define RM_ZB_XLU_TEX_EDGE(clk) 					\
	Z_CMP | IM_RD | CVG_DST_FULL | FORCE_BL | ZMODE_OPA | 		\
	AA_EN | CVG_X_ALPHA | TEX_EDGE |				\
	GBL_c##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)

#define	G_RM_XLU_TEX_EDGE	RM_XLU_TEX_EDGE(1)
#define	G_RM_XLU_TEX_EDGE2	RM_XLU_TEX_EDGE(2)
#define	G_RM_ZB_XLU_TEX_EDGE	RM_ZB_XLU_TEX_EDGE(1)
#define	G_RM_ZB_XLU_TEX_EDGE2	RM_ZB_XLU_TEX_EDGE(2)

/*
 * ���ͤ򹹿�����ȾƩ��
 */
#define	RM_AA_ZU_XLU_SURF(clk)					\
	AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_WRAP | CLR_ON_CVG |	\
	FORCE_BL | ZMODE_XLU |					\
	GBL_c##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define	G_RM_AA_ZU_XLU_SURF	RM_AA_ZU_XLU_SURF(1)
#define	G_RM_AA_ZU_XLU_SURF2	RM_AA_ZU_XLU_SURF(2)

/*
 * ���ͤ򹹿�����ȾƩ��
 * (�ߵܥ��ڥ����)
 */
#define	RM_ZU_XLU_SURF(clk)					\
	Z_CMP | Z_UPD | IM_RD | CVG_DST_FULL | 			\
	FORCE_BL | ZMODE_XLU |					\
	GBL_c##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define	G_RM_ZU_XLU_SURF	RM_ZU_XLU_SURF(1)
#define	G_RM_ZU_XLU_SURF2	RM_ZU_XLU_SURF(2)

/*
 * ���ͤ����̵���ǹ���������Ʃ��
 * ������ѡ��ʵ��ĥ��ڥ�����
 */
#define	RM_AA_ZO_OPA_SURF(clk)					\
	AA_EN | IM_RD | CVG_DST_CLAMP |				\
	Z_UPD | ZMODE_OPA | ALPHA_CVG_SEL |			\
	GBL_c##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define	G_RM_AA_ZO_OPA_SURF	RM_AA_ZO_OPA_SURF(1)
#define	G_RM_AA_ZO_OPA_SURF2	RM_AA_ZO_OPA_SURF(2)

#define	RM_ZO_OPA_SURF(clk)					\
	CVG_DST_FULL |						\
	Z_UPD | ZMODE_OPA | ALPHA_CVG_SEL |			\
	GBL_c##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define	G_RM_ZO_OPA_SURF	RM_ZO_OPA_SURF(1)
#define	G_RM_ZO_OPA_SURF2	RM_ZO_OPA_SURF(2)

/*
 * ���ͤ����̵���ǹ�������ȾƩ��
 * ������ʥޡ����åȡˤǻ���
 */
#define	RM_AA_ZO_XLU_SURF(clk)					\
	AA_EN | CVG_DST_WRAP | CLR_ON_CVG |			\
	Z_UPD | IM_RD | FORCE_BL | ZMODE_OPA |			\
	GBL_c##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define	G_RM_AA_ZO_XLU_SURF	RM_AA_ZO_XLU_SURF(1)
#define	G_RM_AA_ZO_XLU_SURF2	RM_AA_ZO_XLU_SURF(2)

#define	RM_ZO_XLU_SURF(clk)					\
	CVG_DST_FULL | 						\
	Z_UPD | IM_RD | FORCE_BL | ZMODE_OPA |			\
	GBL_c##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define	G_RM_ZO_XLU_SURF	RM_ZO_XLU_SURF(1)
#define	G_RM_ZO_XLU_SURF2	RM_ZO_XLU_SURF(2)

/*
 * ���ͤ����̵���ǹ�������ȾƩ��
 * ������������ˤǻ���
 * ����ե�����ڥ��򥹥�å����ɤˤ��Ʒ���������Ǥ��ޤ�
 */
#define	RM_ZO_CLD_SURF(clk)					\
	CVG_DST_SAVE |						\
	Z_UPD | IM_RD | FORCE_BL | ZMODE_OPA |			\
	GBL_c##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define	G_RM_ZO_CLD_SURF	RM_ZO_CLD_SURF(1)
#define	G_RM_ZO_CLD_SURF2	RM_ZO_CLD_SURF(2)

/*
 * ���ͤ����̵���ǹ������봰��Ʃ��
 * ������������ˤǻ���
 * ����ե�����ڥ��򥹥�å����ɤˤ��Ʒ���������Ǥ��ޤ�
 */
#define	RM_ZO_CLR_SURF(clk)					\
	CVG_DST_SAVE |						\
	Z_UPD | IM_RD | FORCE_BL | ZMODE_OPA |			\
	GBL_c##clk(G_BL_CLR_BL, G_BL_0, G_BL_CLR_MEM, G_BL_1MA)
#define	G_RM_ZO_CLR_SURF	RM_ZO_CLR_SURF(1)
#define	G_RM_ZO_CLR_SURF2	RM_ZO_CLR_SURF(2)

/*
 * ���ͤ�̵��ﹹ������
 * �ե����쥸�����ǿ���Ĥ��뤳�Ȥ�Ǥ���
 * ����ե�����ڥ��򥹥�å����ɤˤ��Ʒ��������椹��
 */
#define	RM_ZO_FOG_SURF(clk)					\
	CVG_DST_SAVE |						\
	Z_UPD | IM_RD | FORCE_BL | ZMODE_OPA |			\
	GBL_c##clk(G_BL_CLR_FOG, G_BL_A_FOG, G_BL_CLR_MEM, G_BL_1MA)
#define	G_RM_ZO_FOG_SURF	RM_ZO_FOG_SURF(1)
#define	G_RM_ZO_FOG_SURF2	RM_ZO_FOG_SURF(2)

/* ȾƩ���α� */
#define	G_RM_ZB_SHADOW 		G_RM_ZB_CLD_DECAL
#define	G_RM_ZB_SHADOW2 	G_RM_ZB_CLD_DECAL2

/*
 * ���å�������ȾƩ���ݥꥴ��
 * ���å����⤭�ФƤ��ޤ��Τ���Ω���ѷ��ѤǤ���
 * XLU�ϥ��Х�å���ե�ˤ� CLD�ϥ��Х�å�����¸���ޤ�
 */
#define RM_RA_XLU_SURF(clk)					\
	IM_RD | CVG_DST_FULL | FORCE_BL | ZMODE_OPA |  		\
	AA_EN | CVG_X_ALPHA | ALPHA_CVG_SEL |			\
	GBL_c##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define	G_RM_RA_XLU_SURF	RM_RA_XLU_SURF(1)
#define	G_RM_RA_XLU_SURF2	RM_RA_XLU_SURF(2)

#define RM_RA_CLD_SURF(clk)					\
	IM_RD | CVG_DST_SAVE | FORCE_BL | ZMODE_OPA |  		\
	AA_EN | CVG_X_ALPHA | ALPHA_CVG_SEL |			\
	GBL_c##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define	G_RM_RA_CLD_SURF	RM_RA_CLD_SURF(1)
#define	G_RM_RA_CLD_SURF2	RM_RA_CLD_SURF(2)

/*
 * �ģФ�OtherMode��ľ�����ꤹ�롣
 * ��աˣӣФΥ���å����Ʊ�������ꤵ��롣
 * �ӣФ�OtherMode��ľ�����ꤹ��
 * ��ա�Ʊ���ˣģФ�OtherMode�����ꤵ���
 * ��ȯ�����ޥ��������ɤ� 32bit �����ǽ�ˤʤ�Ϥ���
 * F3DEX2�ޥ��������ɤξ���Gfx�ο����Ѳ�����Τ����
 */
#ifdef  F3DEX_GBI_2
#define	gDPSetOtherModeHL(pkt, high, low) 				\
	gDPSetOtherMode(pkt, high, low)
#define	gsDPSetOtherModeHL(high, low) 					\
	gsDPSetOtherMode(high, low)
#else  /* !F3DEX_GBI_2 */
#define gsDPSetOtherModeHL(high, low) 					\
	gsSPSetOtherMode(G_SETOTHERMODE_H, 0, 24, high), 		\
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 3, low), 			\
	gsSPSetOtherMode(G_SETOTHERMODE_L, 3, 29, low)
#define gDPSetOtherModeHL(pkt, high, low) 				\
do {									\
	gSPSetOtherMode(pkt, G_SETOTHERMODE_H, 0, 24, high); 		\
	gSPSetOtherMode(pkt, G_SETOTHERMODE_L, 0, 3, low); 		\
	gSPSetOtherMode(pkt, G_SETOTHERMODE_L, 3, 29, low);		\
} while (0)
#endif /* !F3DEX_GBI_2 */

/*
 * gSPSetADCDCKTCTFTTTLTDTP (�������ѡ��ȥ桼����)
 *
 * ���Υ��ޥ�ɤϤ�������� othermode �ѥ�᡼�������ꤷ�ޤ�.
 * 
 * [Usage]
 *	gSPSetADCDCKTCTFTTTLTDTP(pkt, modeA)
 *
 *      'modeA' is described all parameters of GroupA GBI command.
 *              exclude gDPPipelineMode, gDPSetCycleType.
 *
 *	GroupA:
 *	  gDPSetTexturePersp,
 *	  gDPSetTextureDetail, gDPSetTextureLOD, gDPSetTextureLUT,
 *	  gDPSetTextureFilter, gDPSetTextureConvert, gDPSetCombineKey,
 *	  gDPSetColorDither, gDPSetAlphaDither
 *
 *	Use 'OR' operation to get modeA.
 *
 *	modeA = G_TP_* | G_TD_* | G_TL_* | G_TT_* | G_TF_*
 *		G_TC_* | G_CK_*  | G_CD_* | G_AD_*;
 */

#define	gDPSetTPTDTLTTTFTCCKCDAD(pkt, mode)	\
	gSPSetOtherMode(pkt, G_SETOTHERMODE_H, G_MDSFT_ALPHADITHER, G_MDSFT_CYCLETYPE - G_MDSFT_ALPHADITHER, mode)
#define	gsDPSetTPTDTLTTTFTCCKCDAD(mode)		\
	gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_ALPHADITHER, G_MDSFT_CYCLETYPE - G_MDSFT_ALPHADITHER, mode)

/* gSetColorDither & gSetAlphaDither */
#define	gDPSetCDAD(pkt, mode)	\
	gSPSetOtherMode(pkt, G_SETOTHERMODE_H, G_MDSFT_ALPHADITHER, 2 + 2, mode)
#define	gsDPSetCDAD(mode)		\
	gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_ALPHADITHER, 2 + 2, mode)

#define	gDPSetOtherModeH2(pkt, mode)		\
        gDPSetTPTDTLTTTFTCCKCDAD(pkt, mode)
#define	gsDPSetOtherModeH2(mode)		\
        gsDPSetTPTDTLTTTFTCCKCDAD(mode)

/*
 * EX�ޥ����������Ѥ�gbi��SGI�ޥ��������ɤ�gbi�ǥ��ߥ�졼�Ȥ���
 */
#ifndef gSP2Triangles
#define gSP2Triangles(pkt, v00, v01, v02, flag0, v10, v11, v12, flag1)	\
do { gSP1Triangle(pkt, v00, v01, v02, flag0); \
     gSP1Triangle(pkt, v10, v11, v12, flag1); \
} while (0)
#endif
#ifndef gsSP2Triangles
#define gsSP2Triangles(v00, v01, v02, flag0, v10, v11, v12, flag1)	\
	gsSP1Triangle(v00, v01, v02, flag0), \
	gsSP1Triangle(v10, v11, v12, flag1)
#endif
#ifndef gSP1Quadrangle
#define gSP1Quadrangle(pkt, v0, v1, v2, v3, flag)			\
        gSP2Triangles(pkt, v1, v2, v3, 0, v1, v3, v0, 0)
#endif
#ifndef gsSP1Quadrangle
#define gsSP1Quadrangle(v0, v1, v2, v3, flag)				\
        gsSP2Triangles(v1, v2, v3, 0, v1, v3, v0, 0)
#endif

    
/*
 * �����Ϣ���ؤ�Ϥ���
 * ��ա�gSPPushMatrix,gSPLoadIdentity�ϥ����Х��ѿ��򻲾Ȥ���Τ����
 */
#define	gSPMultMatrix(pkt, m, n)  					\
    	gSPMatrix(pkt, m, (n)|G_MTX_MUL)

#define	gsSPMultMatrix(m, n) 						\
    	gsSPMatrix(m, (n)|G_MTX_MUL)

#define	gSPLoadMatrix(pkt, m, n)  					\
    	gSPMatrix(pkt, m, (n)|G_MTX_LOAD)

#define	gsSPLoadMatrix(m, n) 						\
    	gsSPMatrix(m, (n)|G_MTX_LOAD)

#ifdef USE_IDENTITYMTX
#include "identitymtx.h"	/* extern Mtx2 IdentityMtx; */
#define	gSPPushMatrix(pkt, n)     					\
    	gSPMatrix(pkt, (IdentityMtx.m), (n)|G_MTX_MUL|G_MTX_PUSH)

#define	gsSPPushMatrix(n)    						\
    	gsSPMatrix((IdentityMtx.m), (n)|G_MTX_MUL|G_MTX_PUSH)

#define	gSPLoadIdentity(pkt, n)   					\
    	gSPMatrix(pkt, (IdentityMtx.m), (n)|G_MTX_LOAD)

#define	gsSPLoadIdentity(n)  						\
    	gsSPMatrix((IdentityMtx.m), (n)|G_MTX_LOAD)
#endif /* USE_IDENTITYMTX */
    
/*
 * ����ѥå����������ꤹ��ʹ�®�Ǥ���
 */
#define	gDPSetEnvColor_rgba8888(pkt, rgba8888)				\
            gDPSetColor(pkt, G_SETENVCOLOR, rgba8888)
#define	gDPSetBlendColor_rgba8888(pkt, rgba8888)			\
            gDPSetColor(pkt, G_SETBLENDCOLOR, rgba8888)
#define	gDPSetFogColor_rgba8888(pkt, rgba8888)				\
            gDPSetColor(pkt, G_SETFOGCOLOR, rgba8888)
#define	gDPSetPrimColor_rgba8888(pkt, m, l, rgba8888)			\
{									\
	Gfx *_g = (Gfx *)(pkt);						\
									\
	_g->words.w0 =	(_SHIFTL(G_SETPRIMCOLOR, 24, 8) | 		\
			 _SHIFTL(m, 8, 8) | _SHIFTL(l, 0, 8));		\
	_g->words.w1 =  (unsigned int)(rgba8888);			\
}

/*
 * Vtx����ĺ���ǡ��������ꤹ��ޥ���
 * makeVtx������������
 * makeVtxTC��ĺ����ɸ�ȥƥ��������ɸ�Τ��������:�ƥ�������Τߤ�ɽ����
 * makeVtxOB��ĺ����ɸ�Τ��������:�ץ�ߥƥ��֥��顼��ɽ����
 */
#define makeVtx(vtx, x, y, z, f, s, t, r, g, b, a) 			\
{									\
    Vtx *_v = (Vtx *)(vtx);						\
									\
    (_v)->v.ob[0] = (short)(x); 					\
    (_v)->v.ob[1] = (short)(y); 					\
    (_v)->v.ob[2] = (short)(z); 					\
    (_v)->v.flag  = (unsigned short)(f); 				\
    (_v)->v.tc[0] = (short)(s); 					\
    (_v)->v.tc[1] = (short)(t); 					\
    (_v)->v.cn[0] = (unsigned char)(r); 				\
    (_v)->v.cn[1] = (unsigned char)(g); 				\
    (_v)->v.cn[2] = (unsigned char)(b); 				\
    (_v)->v.cn[3] = (unsigned char)(a);					\
}

#define makeVtxTC(vtx, x, y, z, s, t) 					\
{									\
    Vtx *_v = (Vtx *)(vtx);						\
									\
    (_v)->v.ob[0] = (short)(x); 					\
    (_v)->v.ob[1] = (short)(y); 					\
    (_v)->v.ob[2] = (short)(z); 					\
    (_v)->v.tc[0] = (short)(s); 					\
    (_v)->v.tc[1] = (short)(t);					\
}
    
#define makeVtxOB(vtx, x, y, z) 					\
{									\
    Vtx *_v = (Vtx *)(vtx);						\
									\
    (_v)->v.ob[0] = (short)(x); 					\
    (_v)->v.ob[1] = (short)(y); 					\
    (_v)->v.ob[2] = (short)(z);						\
}

#endif /* __U64NEWGBI_H_ */
