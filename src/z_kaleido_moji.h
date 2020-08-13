/* $Id: z_kaleido_moji.h,v 1.1.1.1 2003/03/10 22:42:46 tong Exp $ */	
/* $Log: z_kaleido_moji.h,v $
 * Revision 1.1.1.1  2003/03/10 22:42:46  tong
 * new OBJ tree for ocarina from Nintendo
 *
 * Revision 2.2  1998-10-28 18:36:00+09  soejima
 * �У��̻���
 *
 * Revision 2.1  1998-10-22 21:17:25+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.10  1998/06/29 13:19:54  soejima
 * *** empty log message ***
 *
 * Revision 1.1  1997/03/25  06:08:32  soejima
 * Initial revision
 * $Log�ɲ�
 * */


#ifndef INCLUDE_Z_KAKEIDO_MOJI_H
#define INCLUDE_Z_KAKEIDO_MOJI_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif



/************************************************************************
 *									*
 *	���쥤�ɡ��������� ����ʸ��					*
 *				1997ǯ02��06��(������) 09��00ʬ00�� JST *
 ************************************************************************/
#if defined(PAL_VERSION)
/* ʸ���ݥ��� */
enum {
    SS0,	/* ���� */
    SS1,
    SS2,
    SS3,
    SS4,
    SS5,
    SS6,
    SS7,
    SS8,
    SS9,
    AAA,	/* ����ե��٥å� */
    AAB,
    AAC,
    AAD,
    AAE,
    AAF,
    AAG,
    AAH,
    AAI,
    AAJ,
    AAK,
    AAL,
    AAM,
    AAN,
    AAO,
    AAP,
    AAQ,
    AAR,
    AAS,
    AAT,
    AAU,
    AAV,
    AAW,
    AAX,
    AAY,
    AAZ,
    AXA,
    AXB,
    AXC,
    AXD,
    AXE,
    AXF,
    AXG,
    AXH,
    AXI,
    AXJ,
    AXK,
    AXL,
    AXM,
    AXN,
    AXO,
    AXP,
    AXQ,
    AXR,
    AXS,
    AXT,
    AXU,
    AXV,
    AXW,
    AXX,
    AXY,
    AXZ,
    SSS,	/* ���ڡ��� */
    SPD,	/* �� */
    SPO,	/* �� */
    Moji_Point
};
#else
/* ʸ���ݥ��� */
enum {
    SS0,	/* ���� */
    SS1,
    SS2,
    SS3,
    SS4,
    SS5,
    SS6,
    SS7,
    SS8,
    SS9,
    HAA,	/* �Ҥ餬�� */
    HII,
    HUU,
    HEE,
    HOO,
    HKA,
    HKI,
    HKU,
    HKE,
    HKO,
    HSA,
    HSI,
    HSU,
    HSE,
    HSO,
    HTA,
    HTI,
    HTU,
    HTE,
    HTO,
    HNA,
    HNI,
    HNU,
    HNE,
    HNO,
    HHA,
    HHI,
    HHU,
    HHE,
    HHO,
    HMA,
    HMI,
    HMU,
    HME,
    HMO,
    HYA,
    HYU,
    HYO,
    HRA,
    HRI,
    HRU,
    HRE,
    HRO,
    HWA,
    HWO,
    HNN,
    HXA,
    HXI,
    HXU,
    HXE,
    HXO,
    HXTU,
    HXYA,
    HXYU,
    HXYO,
    HGA,
    HGI,
    HGU,
    HGE,
    HGO,
    HZA,
    HZI,
    HZU,
    HZE,
    HZO,
    HDA,
    HDI,
    HDU,
    HDE,
    HDO,
    HBA,
    HBI,
    HBU,
    HBE,
    HBO,
    HPA,
    HPI,
    HPU,
    HPE,
    HPO,
    KAA,	/* �������� */
    KII,
    KUU,
    KEE,
    KOO,
    KKA,
    KKI,
    KKU,
    KKE,
    KKO,
    KSA,
    KSI,
    KSU,
    KSE,
    KSO,
    KTA,
    KTI,
    KTU,
    KTE,
    KTO,
    KNA,
    KNI,
    KNU,
    KNE,
    KNO,
    KHA,
    KHI,
    KHU,
    KHE,
    KHO,
    KMA,
    KMI,
    KMU,
    KME,
    KMO,
    KYA,
    KYU,
    KYO,
    KRA,
    KRI,
    KRU,
    KRE,
    KRO,
    KWA,
    KWO,
    KNN,
    KXA,
    KXI,
    KXU,
    KXE,
    KXO,
    KXTU,
    KXYA,
    KXYU,
    KXYO,
    KGA,
    KGI,
    KGU,
    KGE,
    KGO,
    KZA,
    KZI,
    KZU,
    KZE,
    KZO,
    KDA,
    KDI,
    KDU,
    KDE,
    KDO,
    KBA,
    KBI,
    KBU,
    KBE,
    KBO,
    KPA,
    KPI,
    KPU,
    KPE,
    KPO,
    KVI,
    AAA,	/* ����ե��٥å� */
    AAB,
    AAC,
    AAD,
    AAE,
    AAF,
    AAG,
    AAH,
    AAI,
    AAJ,
    AAK,
    AAL,
    AAM,
    AAN,
    AAO,
    AAP,
    AAQ,
    AAR,
    AAS,
    AAT,
    AAU,
    AAV,
    AAW,
    AAX,
    AAY,
    AAZ,
    AXA,
    AXB,
    AXC,
    AXD,
    AXE,
    AXF,
    AXG,
    AXH,
    AXI,
    AXJ,
    AXK,
    AXL,
    AXM,
    AXN,
    AXO,
    AXP,
    AXQ,
    AXR,
    AXS,
    AXT,
    AXU,
    AXV,
    AXW,
    AXX,
    AXY,
    AXZ,
    SSS,	/* ���ڡ��� */
    ARR,	/* �� */
    SPA,	/* �� */
    SPB,	/* �� */
    SPC,	/* �� */
    SPD,	/* �� */
    SPF,	/* �� */
    SPG,	/* �� */
    SPJ,	/* �� */
    SPK,	/* �� */
    SPN,	/* �� */
    SPO,	/* �� */
    SPV,	/* �� */
    G00,	/* �� */
    G01,	/* �� */
    G02,	/* �� */
    G03,	/* �� */
    G04,	/* �� */
    Moji_Point
};
#endif

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

/*** z_kakeido_moji.h end ***/
