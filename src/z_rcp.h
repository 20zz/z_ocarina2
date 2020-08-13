/*
 * $Id: z_rcp.h,v 2.1 1998-10-22 20:51:48+09 zelda Exp $
 * $Log: z_rcp.h,v $
 * Revision 2.1  1998-10-22 20:51:48+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.77  1998/09/23 09:07:19  hayakawa
 * gfx_softsprite_z_prim_xlu�ɲäȤ������ѹ�
 *
 * Revision 1.76  1998-09-11 21:38:58+09  hayakawa
 * �ز��⤷�ʤ��٥ǥ����ץ쥤�ꥹ��
 *
 * Revision 1.75  1998-09-10 21:04:44+09  hayakawa
 * gfx_set_fog_nosync
 * gfx_set_fog_sync
 * �ɲ�
 *
 * Revision 1.74  1998-08-31 20:11:10+09  hayakawa
 * gfx_softsprite_z_fog�ɲ�
 *
 * Revision 1.73  1998-08-31 11:16:57+09  hayakawa
 * gfx_softsprite_prim_xlu�ɲ�
 *
 * Revision 1.72  1998-08-24 14:44:59+09  hayakawa
 * ���˥��ǥ�����ؿ� anime_envcolor ���ɲ�
 *
 * Revision 1.71  1998-08-07 22:37:38+09  hayakawa
 * gfx_softsprite�ɲ�
 *
 * Revision 1.70  1998-07-24 21:22:30+09  zelda
 * gfx_rect_moji
 *
 * Revision 1.69  1998-07-17 16:59:08+09  soejima
 * *** empty log message ***
 *
 * Revision 1.68  1998-06-12 21:41:31+09  yoshida
 * *** empty log message ***
 *
 * Revision 1.67  1998-05-25 18:46:12+09  komatu
 * gfx_polygon_z_light_fog_prim
 * gp_overlay_polygon_z_light_fog_prim
 * ���ɲ�
 *
 * Revision 1.66  1998-05-25 15:29:45+09  komatu
 * gfx_polygon_z_light_fog_prim
 * gp_overlay_polygon_z_light_fog_prim
 * gp_overlay_rcp_mode_set
 * �����
 *
 * Revision 1.65  1998-05-13 17:08:30+09  hayakawa
 * static_DisplayList_initialize
 *
 * Revision 1.64  1998-04-27 21:50:03+09  hayakawa
 * two_tex_scroll2��Ͽ
 *
 * Revision 1.63  1998-04-22 19:06:42+09  hayakawa
 * gfx_tex_scroll2 gfx_tex_scroll�ɲ�
 *
 * Revision 1.62  1998-03-30 21:27:49+09  hayakawa
 * ̿̾����
 *
 * Revision 1.61  1998/03/30  05:23:31  nisiwaki
 * gfx_xlu_rectangle_2c
 *
 * Revision 1.60  1998/03/30  04:49:47  hayakawa
 * Gfx�Ǥδؿ��� gfx_ �ǻϤޤ�褦�ˤ���Ĥ��
 *
 * Revision 1.59  1998/03/18  04:23:02  komatu
 * _LANGUAGE_C_PLUS_PLUS���ɲ�
 *
 * Revision 1.58  1998/01/09  08:04:48  hayakawa
 * _texture_decal_shadow�ɲ�
 *
 * Revision 1.57  1998/01/09  06:42:09  hayakawa
 * _texture_z_light_fog_prim2�ɲ�
 *
 * Revision 1.56  1997/11/07  11:05:01  hayakawa
 * Game_play�ǥ��顼
 *
 * Revision 1.55  1997/11/04  13:22:36  soejima
 * *** empty log message ***
 *
 * Revision 1.54  1997/11/04  00:47:25  yoshida
 * *** empty log message ***
 *
 * Revision 1.53  1997/10/20  14:17:59  hayakawa
 * �ե����ط�
 *
 * Revision 1.52  1997/10/17  14:16:10  hayakawa
 * �ǥХå�
 *
 * Revision 1.51  1997/10/17  14:12:32  hayakawa
 * set_fog�ɲ�
 *
 * Revision 1.50  1997/09/24  14:32:54  iwawaki
 * *** empty log message ***
 *
 * Revision 1.49  1997/09/01  13:45:14  iwawaki
 * *** empty log message ***
 *
 * Revision 1.48  1997/07/28  10:45:50  iwawaki
 * *** empty log message ***
 *
 * Revision 1.47  1997/07/24  04:05:48  tarukado
 * *** empty log message ***
 *
 * Revision 1.46  1997/07/23  08:35:44  iwawaki
 * *** empty log message ***
 *
 * Revision 1.45  1997/07/23  04:14:49  matutani
 * void texture_z_cld_poly_xlu_nd(Graph *graph)���ɲ�
 *
 * Revision 1.44  1997/07/19  04:52:34  matutani
 * void texture_z_cld_poly_xlu(Graph *graph);
 * ���ɲ�
 *
 * Revision 1.43  1997/07/17  05:18:57  iwawaki
 * *** empty log message ***
 *
 * Revision 1.42  1997/07/16  12:31:38  tarukado
 * *** empty log message ***
 *
 * Revision 1.41  1997/07/10  10:18:23  soejima
 * texture_hilight_reflect
 *
 * Revision 1.40  1997/06/10  07:24:50  iwawaki
 * *** empty log message ***
 *
 * Revision 1.39  1997/06/06  00:48:48  iwawaki
 * *** empty log message ***
 *
 * Revision 1.38  1997/05/27  12:16:40  soejima
 * �ϣ֣ţң̣�����
 *
 * Revision 1.37  1997/05/21  12:38:44  iwawaki
 * *** empty log message ***
 *
 * Revision 1.36  1997/05/12  07:01:42  iwawaki
 * *** empty log message ***
 *
 * Revision 1.35  1997/05/01  02:18:13  soejima
 * fox_gsCPSetModeS��rgba32texture����
 *
 * Revision 1.34  1997/04/16  04:48:07  iwawaki
 * *** empty log message ***
 *
 * Revision 1.33  1997/04/16  04:47:25  iwawaki
 * *** empty log message ***
 *
 * Revision 1.32  1997/04/15  02:07:53  iwawaki
 * *** empty log message ***
 *
 * Revision 1.31  1997/04/04  09:04:38  soejima
 * NEXT_POLY_XLU_DISP�� rectangle_a_prim���
 *
 * Revision 1.30  1997/04/04  08:41:24  soejima
 * NEXT_POLY_XLU_DISP�� rectangle_a_prim����
 *
 * Revision 1.29  1997/03/26  13:44:43  matutani
 * NEXT_POLYGON_XLU_DISP�� texture_z_light_prm_xlu_disp
 *
 * Revision 1.28  1997/03/25  01:21:51  iwawaki
 * *** empty log message ***
 *
 * Revision 1.27  1997/03/19  12:48:17  iwawaki
 * *** empty log message ***
 *
 * Revision 1.26  1997/02/25  13:17:19  iwawaki
 * *** empty log message ***
 *
 * Revision 1.25  1997/02/21  07:44:28  soejima
 * fukidasi_polygon �ɲ�
 *
 * Revision 1.24  1997/02/06  04:43:54  soejima
 * kscope_prim��kaleido_scope_prim���ѹ�
 *
 * Revision 1.23  1997/01/14  07:28:51  iwawaki
 * *** empty log message ***
 *
 * Revision 1.22  1996/12/25  05:26:56  iwawaki
 * *** empty log message ***
 *
 * Revision 1.21  1996/12/24  02:00:21  iwawaki
 * softsprite_prim�ɲ�
 *
 * Revision 1.20  1996/12/02  01:40:36  soejima
 * message_moji_polygon�ɲ�
 *
 * Revision 1.19  1996/11/19  01:18:36  hayakawa
 * ���Υե�����򥤥󥯥롼�ɤ��Ƥ⥨�顼�ˤʤ�ʤ��褦�ˤ�����
 *
 * Revision 1.18  1996/11/16  08:58:17  hayakawa
 * �ץ�ȥ����פ��ɲ� texture_decal_shadow
 *
 * Revision 1.17  1996/11/11  06:28:17  soejima
 * message_moji����
 *
 * Revision 1.16  1996/11/01  01:40:22  soejima
 * rect_moji2 ����
 *
 * Revision 1.15  1996/10/22  02:33:40  soejima
 * kscope_prim�ɲ�
 *
 * Revision 1.14  1996/10/21  00:19:35  iwawaki
 * softsprite�ɲ�
 *
 * Revision 1.13  1996/10/18  08:34:16  iwawaki
 * *** empty log message ***
 *
 * Revision 1.12  1996/10/15  01:22:57  soejima
 * vr_box_polygon�ɲ�
 *
 * Revision 1.11  1996/10/09  08:33:07  iwawaki
 * *** empty log message ***
 *
 * Revision 1.10  1996/10/09  08:27:08  iwawaki
 * *** empty log message ***
 *
 * Revision 1.9  1996/10/09  08:18:21  iwawaki
 * *** empty log message ***
 *
 * Revision 1.8  1996/10/09  08:12:19  iwawaki
 * *** empty log message ***
 *
 * Revision 1.7  1996/10/08  11:51:02  soejima
 * void rectangle_a_prim( Graph *graph )���ɲ�
 *
 * Revision 1.6  1996/09/26  11:27:13  soejima
 * void polygon_z_light(Graph *graph); �ɲ�
 *
 * Revision 1.5  1996/09/21  05:57:19  matutani
 * polygon_z_light_fog_prim()�ɲ�
 *
 * Revision 1.4  1996/09/20  02:48:02  matutani
 * extern void vertex_color_xlu_polygon(Graph *graph);�ɲ�
 *
 * Revision 1.3  1996/09/18  09:39:17  iwawaki
 * $Log�ɲ�
 * */


#ifndef INCLUDE_Z_RCP_H
#define INCLUDE_Z_RCP_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#include "graph.h"		/* Graph */
#include "z_play_h.h"		/* Game_play */

/*
 *
 * ��ĥ�ե�������
 * 0 <= near <= 998:�̾�ե���
 * near==999:��äȤ�󤤥ե���������
 * near>1000:�ե����ʤ���Ʊ�����̤�������
 * near < 0 :��˥ե������顼��ɽ�������(����ο�������뤳�Ȥ��Ǥ���)
 *
 * gfx_set_fog_nosync Ʊ��̿��̵��
 * gfx_set_fog_sync   Ʊ��̿�ᤢ��
 */
extern Gfx *
gfx_set_fog_nosync(
    Gfx *gp, 
    unsigned  int r, 
    unsigned  int g, 
    unsigned  int b, 
    unsigned  int a, 
    int n, 
    int f
);
extern Gfx *
gfx_set_fog_sync(
    Gfx *gp, 
    unsigned  int r, 
    unsigned  int g, 
    unsigned  int b, 
    unsigned  int a, 
    int n, 
    int f
);
extern Gfx *
set_fog(
    Gfx *gp,
    unsigned  int r,
    unsigned  int g,
    unsigned  int b,
    unsigned  int a,
    int n,
    int f
);

/*======================================================================*
 *						
 *	����
 *						
 *======================================================================*/
extern Gfx *rcp_mode_set(Gfx *next_disp, int type);
extern void gp_overlay_rcp_mode_set(Gfx **glistp, int type);

/*======================================================================*
 *						
 *	�ե���쥯���󥰥�ץ�५�顼�ʥݥ��󥿻���ġ�		
 *						
 *======================================================================*/
extern Gfx *fill_rectangle_prim_free(Gfx *next_disp); /* �⤦�����ä� */
extern Gfx *gfx_fill_rectangle_prim(Gfx *gp);

/*======================================================================*
 *					
 *	Ʃ���ƥ������㡼���ڥХåե�̵�����������ǥ���̵����ɽ��ɽ���Τ�
 *								
 *======================================================================*/
extern Gfx *gfx_texture_cullback_xlu(Gfx *gp);

/*======================================================================*
 *					
 *	�ݥꥴ��ץ�५�顼	
 *					
 *======================================================================*/
extern void polygon_prim(Graph *graph);

/*======================================================================*
 *									*
 *	�ե���쥯���󥰥�ץ�५�顼					*
 *									*
 *======================================================================*/
extern void fill_rectangle_prim(Graph *graph);

/*======================================================================*
 *								
 *	�ƥ������㡼���ڥХåե�̵�����������ǥ���̵����ɽ��ɽ���Τ�
 *								
 *======================================================================*/
extern void texture_cullback(Graph *graph);

/*======================================================================*
 *								
 *	Ʃ���ƥ������㡼���ڥХåե�̵�����������ǥ���̵����ɽ��ɽ���Τ�
 *								
 *======================================================================*/
extern void xlu_texture_cullback(Graph *graph);

/*======================================================================*
 *					
 *	Ʃ���ƥ������㡼���ڥХåե�̵�����������ǥ���̵����ɽ��ɽ���Τ�
 *								
 *======================================================================*/
extern void texture_cullback_xlu(Graph *graph);

/*======================================================================*
 *								
 *	��֥ƥ������㡼���ڥХåե�̵�����������ǥ���̵����ɽ��ɽ���Τ�
 *								
 *======================================================================*/
extern void morf_texture_cullback(Graph *graph);

/*======================================================================*
 *								
 *	��Ʃ������֥ƥ������㡼���ڥХåե�̵�����������ǥ���̵����ɽ��ɽ���Τ�
 *								
 *======================================================================*/
extern void xlu_morf_texture_cullback(Graph *graph);

/*======================================================================*
 *					
 *	Ʃ����֥ƥ������㡼���ڥХåե�̵�����������ǥ���̵����ɽ��ɽ���Τ�
 *								
 *======================================================================*/
extern void morf_texture_cullback_xlu(Graph *graph);

/*======================================================================*
 *									*
 *	�ץ�ߥƥ��� �饤�� �ƥ������� ��				*
 *									*
 *======================================================================*/
extern void texture_z_light_prim(Graph *graph);

/*======================================================================*
 *									
 *	�ץ�ߥƥ��� �饤�� �ƥ������� ��
 *
 * NEXT_POLYGON_XLU_DISP�� (by Matsutani)
 *									
 *======================================================================*/
extern void texture_z_light_prim_xlu_disp(Graph *graph);

/*======================================================================*
 *									*
 *	�ץ�ߥƥ��� �饤�� �ƥ������� �ڥե����ʥ��顼�ǥ����ѹ���	*
 *									*
 *======================================================================*/
extern void _texture_z_light_fog_prim2(Game_play *game_play);

/*======================================================================*
 *									*
 *	�ץ�ߥƥ��� �饤�� �ƥ������� ��	�ե���			*
 *									*
 *======================================================================*/
extern void _texture_z_light_fog_prim(Graph *graph);
#define gfx_texture_z_light_fog_prim(gp)	rcp_mode_set((gp), 25)
#define gp_overlay_texture_z_light_fog_prim(glistp)	\
		gp_overlay_rcp_mode_set((glistp), 25)


/*======================================================================*
 *									*
 *	�ץ�ߥƥ��� �饤�� �ƥ������� ��	�ե����ʥ���ե��ѡ�	*
 *									*
 *======================================================================*/
extern void _texture_z_light_fog_prim_xlu(Graph *graph);

/*======================================================================*
 *									*
 *	���ڥ����ϥ��饤�� �ƥ������� ��				*
 *									*
 *======================================================================*/
extern void texture_z_hilight(Graph *graph);

/*======================================================================*
 *									*
 *	ȿ�ͥޥåԥ� �ƥ������� ��					*
 *									*
 *======================================================================*/
extern void texture_z_reflect(Graph *graph);

/*======================================================================*
 *									*
 *	ȿ�ͥޥåԥ� ���ڥ����ϥ��饤�� �ƥ������� ��		*
 *									*
 *======================================================================*/
extern void texture_z_hilight_reflect(Graph *graph);

/*======================================================================*
 *									*
 *	�ƥ�������쥯���󥰥�						*
 *									*
 *======================================================================*/
extern Gfx *gfx_xlu_rectangle_2c(Gfx *gp);
extern Gfx *gfx_rectangle(Gfx *gp);
extern void rectangle(Graph *graph);

/*======================================================================*
 *									*
 *	�ǥ���ƥ�������						*
 *									*
 *======================================================================*/
extern void texture_decal(Graph *graph);
extern void _texture_decal_shadow(
    Graph    *graph
);

/*======================================================================*
 *									*
 *	�ե���쥯���󥰥�						*
 *									*
 *======================================================================*/
extern void fill_rectangle(Graph *graph);

/*======================================================================*
 *									*
 *	�ƥ�����ʸ��                                                    *
 *									*
 *======================================================================*/
extern Gfx *gfx_rect_moji(Gfx *gp);

extern void rect_moji(Graph *graph);

extern void rect_moji2(Graph *graph);

extern void message_moji(Graph *graph);

extern void message_moji_polygon(Graph *graph);

/*--------------------------------------------------------------------------
 *
 * ĺ�����顼��Ʃ���
 * �ƥ������㨡̵��
 *
 *------------------------------------------------------------------------*/
extern void vertex_color_xlu_polygon( Graph *graph );
 
/*======================================================================*
 *									*
 *	�饤�� �ݥꥴ�� �� �ץ�ߥƥ���					*
 *									*
 *======================================================================*/
extern void polygon_z_light_prim(Graph *graph);

/*======================================================================*
 *									*
 *	�饤�� �ݥꥴ�� �� �ץ�ߥƥ��� �ƣϣ�				*
 *									*
 *======================================================================*/
extern void _polygon_z_light_fog_prim(Graph *graph);
#define gfx_polygon_z_light_fog_prim(gp)	rcp_mode_set((gp), 37)
#define gp_overlay_polygon_z_light_fog_prim(glistp)	\
		gp_overlay_rcp_mode_set((glistp), 37)

/*======================================================================*
 *									*
 *	�饤�� �ݥꥴ�� ��						*
 *									*
 *======================================================================*/
extern void polygon_z_light( Graph *graph );

/*======================================================================*
 *									*
 *	�쥯���󥰥���ץ��						*
 *									*
 *======================================================================*/
extern Gfx *gfx_rectangle_a_prim(Gfx *gp);
extern void rectangle_a_prim( Graph *graph );
/* �ϣ֣ţң̣����� */
extern void overlay_rectangle_a_prim( Graph *graph );
extern void gp_overlay_rectangle_a_prim(Gfx **glistp);

/*======================================================================*
 *									*
 *	����������롦�ܥå��� �ݥꥴ��					*
 *									*
 *======================================================================*/
extern void vr_box_polygon( Graph *graph );

/*======================================================================*
 *									*
 *	���եȥ��ץ饤��						*
 *									*
 *======================================================================*/
extern void softsprite(Graph *graph);

/*======================================================================*
 *									*
 *	���եȥ��ץ饤�ȡʥץ�ߥƥ��֥��顼���åȡ�			*
 *									*
 *======================================================================*/
extern void softsprite_prim(Graph *graph);

/*
 * ���եȥ��ץ饤�ȿ�����
 */
extern Gfx *gfx_softsprite_prim_xlu(Gfx *gp);   /* ȾƩ���ץ�५�顼 */
extern Gfx *gfx_softsprite_z(Gfx *gp); 		/* ����Ʃ�� */
extern Gfx *gfx_softsprite_z_fog(Gfx *gp);      /* ����Ʃ���ե��� */
extern Gfx *gfx_softsprite_z_prim(Gfx *gp); 	/* ����Ʃ���ץ�५�顼 */
extern Gfx *gfx_softsprite_z_prim_cld(Gfx *gp); /* ��ȾƩ���ץ�५�顼 */
extern Gfx *gfx_softsprite_z_prim_xlu(Gfx *gp); /* ��ȾƩ���ץ�५�顼 */
extern Gfx *gfx_softsprite_z_xlu(Gfx *gp); 	/* ��ȾƩ�� */

/*======================================================================*
 *									*
 *	���쥤�ɡ���������						*
 *									*
 *======================================================================*/
extern void kaleido_scope_prim(Graph *graph);
/* �ϣ֣ţң̣����� */
extern void overlay_kaleido_scope_prim(Graph *graph);
#if 0
extern void kaleido_scope_prim_glistp( Gfx **glistpp );	/* ̤���ѡ� */
#endif



/*======================================================================*
 *									*
 *	�᤭�Ф� �ݥꥴ��						*
 *									*
 *======================================================================*/
extern void fukidasi_polygon(Graph *graph);

/*======================================================================*
 *									*
 *	�饤�� �ݥꥴ�� �ץ�ߥƥ���					*
 *									*
 *======================================================================*/
extern void polygon_light_prim(Graph *graph);

/*======================================================================*
 *									*
 *	�ƥ������� ��							*
 *									*
 *======================================================================*/
extern void texture_z(Graph *graph);

/*======================================================================*
 *									*
 *	�ƥ������� �� CLD_SRF/NEXT_POLY_XLU_DISP�����			*
 *									*
 *======================================================================*/
extern void texture_z_cld_poly_xlu(Graph *graph);

/*======================================================================*
 *									*
 *	�ƥ������� �� CLD_SRF/NEXT_POLY_XLU_DISP�����			*
 * �ǥ����ʤ����С������                                               *
 *									*
 *======================================================================*/
extern void texture_z_cld_poly_xlu_nd(Graph *graph);

/*======================================================================*
 *									*
 *	�ңǣ£������ƥ�������						*
 *									*
 *======================================================================*/
extern void rgba32texture(Graph *graph);
/* ���ϣ֣ţң̣����� */
extern void gp_overlay_rgba32texture( Gfx **glistp );

/*======================================================================*
 *									*
 *	ȿ�ͥޥåԥ� ���ڥ����ϥ��饤�� �ƥ������� 			*
 *									*
 *======================================================================*/
extern void texture_hilight_reflect(Graph *graph);

/*======================================================================*
 *									*
 *	�ƥ������㥹������			 			*
 *									*
 *======================================================================*/

/*
 * ���˥��ǥ�����ؿ�
 * �ƥ������㥹�����������
 */
extern Gfx *gfx_tex_scroll2(
    Gfx		**gpp,
    int	tex_x_pos,
    int tex_y_pos,
    int tex_x_size,
    int tex_y_size
);

/*
 * ���˥��ǥ�����ؿ�
 * �ƥ������㥹�����������
 */
extern Gfx *gfx_tex_scroll(
    Gfx		**gpp,
    int	tex_x_pos,
    int tex_y_pos
);

/*
 * ���˥��ǥ�����ؿ�
 * �ƥ������㥹�����������
 */
extern Gfx *tex_scroll(
    Graph *graph,
    int tex_x_pos,
    int tex_y_pos
);

/*
 * ���˥��ǥ�����ؿ�
 * �ƥ������㥹�����������
 */
extern Gfx *tex_scroll2(
    Graph *graph,
    int tex_x_pos,
    int tex_y_pos,
    int tex_x_size,
    int tex_y_size
);

/*
 * ���˥��ǥ�����ؿ�
 * ����ƥ������㥹�����������
 */
extern Gfx *two_tex_scroll(
    Graph	*graph,
    int tex1_tileno,
    int tex1_x_pos,
    int tex1_y_pos,
    int tex1_x_size,
    int tex1_y_size,
    int tex2_tileno,
    int tex2_x_pos,
    int tex2_y_pos,
    int tex2_x_size,
    int tex2_y_size
);

/*
 * ���˥��ǥ�����ؿ�
 * ����ƥ������㥹�����������
 * �Ķ����顼������
 */
extern Gfx *two_tex_scroll_env(
    Graph *graph,
    int tex1_tileno,
    int tex1_x_pos,
    int tex1_y_pos,
    int	tex1_x_size,
    int tex1_y_size,
    int tex2_tileno,
    int tex2_x_pos,
    int tex2_y_pos,
    int tex2_x_size,
    int tex2_y_size,
    int red,
    int green,
    int blue,
    int alpha
);

/*
 * ���˥��ǥ�����ؿ�
 * �Ķ����顼������Τ�
 */
extern Gfx *anime_envcolor(
    Graph *graph,
    int red,
    int green,
    int blue,
    int alpha
    );

/*
 * �ز��⤷�ʤ��٥ǥ����ץ쥤�ꥹ��
 */
extern Gfx dl_noop[];

/*-----------------------------------------------------------------------
 *
 *	�ǥ����ץ쥤�ꥹ�Ƚ������
 *
 *----------------------------------------------------------------------*/
extern void DisplayList_initialize(
    Graph         *this,
    unsigned char r,
    unsigned char g,
    unsigned char b
);
extern void static_DisplayList_initialize(Graph *graph);

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

/*** z_rcp.h end ***/
