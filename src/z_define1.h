/* $Id: z_define1.h,v 2.2 2000-05-26 13:45:59+09 zelda Exp $ */	
/* $Log: z_define1.h,v $
 * Revision 2.2  2000-05-26 13:45:59+09  zelda
 * �ᥤ�����顼�к��ʥޥ��������
 *
 * Revision 2.1  1998-10-22 20:45:49+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.17  1998/09/05 09:42:48  soejima
 * *** empty log message ***
 *
 * Revision 1.1  1997/05/13  11:58:02  soejima
 * Initial revision
 *
 * $Log�ɲ�
 * */


#ifndef INCLUDE_Z_DEFINE1_H
#define INCLUDE_Z_DEFINE1_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif


/************************************************************************
 *									*
 *	���̣������						*
 *				1997ǯ05��02��(������) 18��45ʬ00�� JST *
 ************************************************************************/
/*======================================================================*/
/*======================================================================*/
/*======================================================================*/
#define	KEY_ANGLE_3D		30	/* �ĥ��ƥå����ϣ������ */

/*======================================================================*/
/*======================================================================*/
/*======================================================================*/
#define	INPUT_KEYWAIT		16
#define	INPUT_KEYWAIT0		32
#define	INPUT_KEYWAIT_N	 	2
#define	INPUT_KEYWAIT_N0 	10
#define	KEY_MAX  		50
#define KEY_SHIFT		256
#define KEY_DATA_SHIFT		5


#define SCALE_X			7800
#define SCALE_Y			7800
#define	SCALE_Z			7800

#define	TRANSLATE_S		3000.0f
#define	TRANSLATE_E	 	936.0f



/* �ãè����顼����Х���   �����������ʣ����¡ˣأáܣ� */
#define  G_CC_INT2      1,	   0,           PRIMITIVE,       0,           TEXEL0,      0, PRIMITIVE,     0
#define  G_CC_INT3      TEXEL0,    0,           PRIMITIVE,       0,           TEXEL0,      0, PRIMITIVE,     0
#define  G_CC_INT4      0,         0,           0,               PRIMITIVE,   TEXEL0,      0, PRIMITIVE,     0
#define  G_CC_INT5      0,         0,           0,               PRIMITIVE,   TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0
#define  G_CC_INT6      PRIMITIVE, ENVIRONMENT, TEXEL0,          PRIMITIVE,   TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0
#define  G_CC_INT9      PRIMITIVE, ENVIRONMENT, TEXEL0,          ENVIRONMENT, TEXEL0,      0, PRIMITIVE,     0
#define  G_CC_MORPH	TEXEL1,    TEXEL0,      PRIMITIVE_ALPHA, TEXEL0,      TEXEL1, TEXEL0, PRIMITIVE,     TEXEL0


#define gDPSetImageTile(pkt, fmt, siz, 					\
		uls, ult, lrs, lrt, pal,				\
		cms, cmt, masks, maskt, shifts, shiftt)			\
do {									\
	gDPPipeSync(pkt);						\
	gDPTileSync(pkt);						\
	gDPSetTile(pkt, fmt, siz,					\
		(((((lrs)-(uls)+1) * siz##_TILE_BYTES)+7)>>3), 0,	\
		G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks,	\
		shifts);						\
	gDPTileSync(pkt);						\
	gDPSetTile(pkt, fmt, siz,					\
		(((((lrs)-(uls)+1) * siz##_LINE_BYTES)+7)>>3), 0,	\
		G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks,	\
		shifts);						\
	gDPSetTileSize(pkt, G_TX_RENDERTILE,				\
			(uls)<<G_TEXTURE_IMAGE_FRAC,			\
			(ult)<<G_TEXTURE_IMAGE_FRAC,			\
			(lrs)<<G_TEXTURE_IMAGE_FRAC,			\
			(lrt)<<G_TEXTURE_IMAGE_FRAC);			\
} while (0)




typedef struct {
	short		ob[2];		/* x, y */
        short           tc[2];  	/* texture coord */
} Vtx_y;


#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

/*** z_define1.h end ***/
