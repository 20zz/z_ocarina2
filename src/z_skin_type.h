/*  $Id: z_skin_type.h,v 2.1 1998-10-22 20:51:48+09 zelda Exp $ */
/*----------------------------------------------------------------------------
 *
 * ���������������
 *
 * Program:Kenji Matsutani
 *
 * $Log: z_skin_type.h,v $
 * Revision 2.1  1998-10-22 20:51:48+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.15  1998/05/18 04:04:05  matutani
 * *** empty log message ***
 *
 * Revision 1.14  1997-10-02 21:56:08+09  matutani
 * ���������б�
 *
 * Revision 1.13  1997/09/30  02:37:41  matutani
 * *** empty log message ***
 *
 * Revision 1.12  1997/09/29  12:30:15  matutani
 * *** empty log message ***
 *
 * Revision 1.11  1997/09/27  11:03:03  matutani
 * *** empty log message ***
 *
 * Revision 1.10  1997/09/24  07:29:31  matutani
 * �裲�С������Τ��������
 *
 * Revision 1.9  1997/09/22  04:09:15  matutani
 * *** empty log message ***
 *
 * Revision 1.8  1997/09/16  13:56:17  matutani
 * *** empty log message ***
 *
 * Revision 1.7  1997/09/10  13:40:54  matutani
 * *** empty log message ***
 *
 * Revision 1.6  1997/08/18  00:45:15  matutani
 * ˡ������
 *
 * Revision 1.5  1997/04/24  08:51:53  matutani
 * Skin_Vertex��position���
 *
 * Revision 1.4  1997/04/22  02:29:19  matutani
 * ��ǥ�Υ���ǥå���short����unsiged char ���ѹ�
 *
 * Revision 1.3  1997/04/14  12:29:57  matutani
 * ����������
 *
 * Revision 1.2  1997/03/28  12:13:16  matutani
 * �������������׾�Υ����Х���ַ׻�
 *
 * Revision 1.1  1997/03/25  07:45:17  matutani
 * Initial revision
 *
 *
 *---------------------------------------------------------------------------*/
  
#ifndef INCLUDE_Z_SKIN_TYPE_H
#define INCLUDE_Z_SKIN_TYPE_H
 
#include"z_basic.h"
#include"z_soft_anim_tbl_type.h"
#include"z_skin_type_base.h"
#include"z_skelanime.h"
#include"z_skin_type_h.h"

/*===========================================================================
 *
 * ���С������¤��
 *
 *==========================================================================*/
/*-----------------------------------------------------------------------------
 *
 * ����٥���
 *
 *---------------------------------------------------------------------------*/
/*
 * envelope2
 * ���ַ׻��ѥǡ���
 */
typedef struct skin_envelpe2 {
    unsigned char jnt_index; /* ��Ϣ�Ť��른�祤��ȤؤΥ���ǥå��� */
    /* 
     * ��Ϣ�Ť������祤��Ȥ���ν�����ִط��٥��ȥ�ˡ�
     * �����global��rot�ޥȥ�å����εչ����ݤ����٥��ȥ롣
     */
    Skin_SPoint init_offset; 
    char cw; /* ���������� */
} Skin_Envelope2;

/*----------------------------------------------------------------------------
 *
 * GameGen Index�ơ��֥�
 *
 *--------------------------------------------------------------------------*/
/*
 * GameGen����Ф��줿,Vtx�ơ��֥�ؤ�index,�ơ��֥�ˤ��ƻȤ���
 * ¾��ĺ����������ǡ���
 */
typedef struct skin_gg_vtx2 {
    unsigned short index; /* GameGen��Vtx�ؤΥ���ǥå��� */

    short tc[2]; /* �ƥ��������ɸ */
    /*
     * ��ĺ����ˡ���٥��ȥ�:
     * ˡ���٥��ȥ�ˡ���Ϣ�Ť������祤��Ȥ�global��rot�ޥȥ�å�����
     * �εչ����ݤ�,��ʬ�Υ��祤��ȤΥ����Х�ޥȥ�å�����rot��ݤ���
     * �٥��ȥ롣(�׽Ϲ�)
     */
    signed char nx; /* ˡ���٥��ȥ�x,y,z */
    signed char ny;
    signed char nz;
    unsigned char a; /* ����ե�:Vtx�ǡ������Τޤ� */
} Skin_GG_Vtx2;

/*----------------------------------------------------------------------------
 *
 * Vertex
 *
 *--------------------------------------------------------------------------*/
/*
 * Vertex
 * �ġ�����Ǥ�csisk_vertex��Ȥ���
 */
typedef struct skin_vertex2 {
    /*
     * GameGen����
     */
    unsigned short gg_vtx_num; /* GameGen��Vtx�ơ��֥�ؤΥ����� */
    unsigned short nb_envdata; /* ���祤��ȿ� */
    unsigned short max_weight_index; /* ���������ͤ������index */
    
    Skin_GG_Vtx2 *gg_vtx_tbl; /* GameGen��Vtx�ơ��֥�ؤΥݥ��󥿡� */
    Skin_Envelope2 *envdata_tbl; /* ����٥��ץǡ����ؤΥݥ��󥿡� */
 
} Skin_Vertex2;

/*-----------------------------------------------------------------------------
 *
 * Skin Mesh
 *
 *---------------------------------------------------------------------------*/
/*
 * �������ѥ�å������
 */
typedef struct skin_mesh2 {
    unsigned short nbGfxVertices; /* Vtxĺ���ơ��֥륵���� */
    unsigned short nbVertices; /* ĺ���� */
    Skin_Vertex2 *vertices; /* ĺ���ؤ����� */
    Gfx *gfx; /* gfx�ؤΥݥ��󥿡� */
} Skin_Mesh2;

/*----------------------------------------------------------------------------
 *
 * ��ǥ�Υ�����
 * Dkit��typeModel.h��DK_ModelType�Ȥ����礵���� 
 *
 *--------------------------------------------------------------------------*/
typedef enum {
    SKIN_MDL_LINK = -1, /* a temporary link for the rendering */
    SKIN_MDL_NILL,      /* a NULL node */
    SKIN_MDL_PTCH,      /* a Patch node */
    SKIN_MDL_FACE,      /* a Face node */
    SKIN_MDL_PMSH,      /* a Pmesh node (no more used) */
    SKIN_MDL_MESH,      /* a Super-mesh node */
    SKIN_MDL_JNT,       /* a Joint node for skeleton animation */
    SKIN_MDL_SPLN,      /* a spline !!!! */
    SKIN_MDL_META,	/* a MetaSystem node */
    SKIN_MDL_BALL,	/* a Metaball node */
    SKIN_MDL_CRV,	/* NURBS curve node */
    SKIN_MDL_SRF,	/* NURBS surface node */
    GFX_MDL_MESH        /* gfx (u64)�Υơ��֥�ؤΥݥ��󥿡� */
} Skin_ModelType;

/*---------------------------------------------------------------------------
 *
 * model
 *
 *-------------------------------------------------------------------------*/  
typedef struct skin_model2 {
    Skin_SVector trs; /* ���ȥ饯���㡼�ȥ�󥹥졼�Ȱ��� 100���� */

    unsigned char child_index; /* �Ҷ��Υ�ǥ��ֹ� */
    unsigned char sibling_index; /* ����Υ�ǥ��ֹ� */
    
    Skin_ModelType type; /* ����ǡ����Υݥ��󥿡�����������Ƥ��륿���� */

    /* ����ǡ���(������ǥ����ץ쥤�ꥹ�Ȥʤ�):type�򻲾Ȥ��ƥ��㥹��  */
    Skin_Pointer definition;
} Skin_Model2;

/*---------------------------------------------------------------------------
 *
 * ����¤��
 *
 *--------------------------------------------------------------------------*/
struct skin_info2 {
    Skin_Model2 **mdl_tbl; /* ��ǥ�ơ��֥�ؤΥݥ��󥿡� */
    unsigned char mdl_num; /* ��ǥ�� */
};

/*---------------------------------------------------------------------------
 *
 * Skin Animation Work Vtx Buffer
 *
 *--------------------------------------------------------------------------*/
/*
 * �������Ѻ����ĺ���Хåե���
 */
typedef struct skin_animation_vtx_buffer {
    char current; /* 0 or 1 */
    /*
     * ¸��̵���Ȥ����NULL
     */
    Vtx *buf[2];
} Skin_avb;

/*----------------------------------------------------------------------------
 *
 * Skin Animation Work Buffer
 *
 *---------------------------------------------------------------------------*/

/*
 * �������ȥХåե���
 */
typedef struct skin_animation_work_buffer2 {
    Skin_Info2 *pskin_info; /* ��������� */
    
    /*
     * ���������ǡ�����ꡣ�����縵�Υ�������ʣ�����������,
     * �ȥ�󥹥졼��,��ž���Υޥȥ�å���
     */
    Skin_Matrix root_matrix; 
    
    /*
     * ĺ����Ϣ
     */
    /*
     * ��ǥ��
     */
    int mdl_num; /* for E3 */
    /*
     * ĺ���Хåե����Υơ��֥�:game_alloc() ʪ�ο�ʬ�����Ĥ��ꡢ
     */
    Skin_avb *avb_tbl;
    
    /*
     * ������ȥ����
     * ���˥᡼�����ǡ���������
     */
    Skeleton_Info skeleton_info;
    
} Skin_AnimationWorkBuffer2;

/*============================================================================
 *
 * ��С������¤��
 *
 *===========================================================================*/
/*-----------------------------------------------------------------------------
 *
 * ����٥���
 *
 *---------------------------------------------------------------------------*/
/*
 * envelope
 */
typedef struct skin_envelpe {
    unsigned char jnt_index; /* ���祤��ȤؤΥ���ǥå��� */
    Skin_SPoint init_offset; /* ���祤��Ȥ���ν������(short) */
    char cw; /* ���������� */
} Skin_Envelope;

/*----------------------------------------------------------------------------
 *
 * Vertex
 *
 *--------------------------------------------------------------------------*/

/*
 * Vertex
 * �ġ�����Ǥ�csisk_vertex��Ȥ���
 */
typedef struct skin_vertex {
#if 0
    Skin_SPoint position; /* ĺ������(short) */
#endif
    short nb_envdata; /* ���祤��ȿ� */
    /* ���������ͤ�����Υ���٥��ץǡ����ؤΥݥ��󥿡� */
    short max_weight_index; 
    Skin_Envelope *envdata_tbl; /* ����٥��ץǡ����ؤΥݥ��󥿡� */
} Skin_Vertex;

/*----------------------------------------------------------------------------
 *
 * Polygon
 *
 *--------------------------------------------------------------------------*/

/*
 * Polygon
 */
typedef struct skin_polygon {
    short material; /* �ޥƥꥢ�륤��ǥå��� from model */
    
    short v[3]; /* ĺ������ǥå��� */
    Skin_SVector n[3]; /* ��ĺ����ˡ���٥��ȥ� */
    /* st ��ɸ */
    short sTxt[3];
    short tTxt[3];
   
} Skin_Polygon;

/*-----------------------------------------------------------------------------
 *
 * Mesh
 *
 *---------------------------------------------------------------------------*/

/* ����٥��ץǡ����ʤ� */
#define Z_SKIN_TYPE_MESH_SOLID_FLAG (1<<0)

typedef struct skin_mesh {
    short nbVertices;
    Skin_Vertex *vertices; /* ĺ���ؤ����� :new�ǳ��� */
    short nbPolygons;
    Skin_Polygon *polygons; /* �ݥꥴ��ؤ����� */

} Skin_Mesh;



/*---------------------------------------------------------------------------
 *
 * model
 *
 *-------------------------------------------------------------------------*/  

typedef struct skin_model {
    Skin_SVector trs; /* �����ȥ�󥹥졼�Ȱ��� 100�� */

    unsigned char child_index; /* �Ҷ��Υ�ǥ��ֹ� */
    unsigned char sibling_index; /* ����Υ�ǥ��ֹ� */
    
    Skin_ModelType type; /* ����ǡ����Υݥ��󥿡�����������Ƥ��륿���� */

    /* ����ǡ���(������ǥ����ץ쥤�ꥹ�Ȥʤ�)  */
    Skin_Pointer definition;
} Skin_Model;

/*-------------------------------------------------------------------------
 *
 * material
 *
 *--------------------------------------------------------------------------*/
typedef struct skin_material {
    /* ���顼 */
    Skin_Color32 ambient;

    /* �ƥ������㨡 */
    unsigned int timg; /* �ݥ��� */
    unsigned char fmt;
    unsigned char size_type;
    unsigned int width, height;
    unsigned int pal;
    unsigned int cms, cmt;
    unsigned int masks, maskt;
    unsigned int shifts, shiftt;
    
} Skin_Material;

/*---------------------------------------------------------------------------
 *
 * ����¤��
 *
 *---------------------------------------------------------------------------*/
typedef struct skin_info {
    Skin_Model **mdl_tbl; /* ��ǥ�ơ��֥�ؤΥݥ��󥿡� */
    unsigned char mdl_num; /* ��ǥ�� */
    unsigned char root_mdl_index; /* �롼�ȥ�ǥ�Υ���ǥå��� */

    SoftAnimTblInfo *anm_tbl; /* ���˥᡼�����¤�ΤؤΥݥ��󥿡� */
    
    short material_num; /* �ޥƥꥢ��� */
    Skin_Material *skin_material_tbl; /* �ơ��֥�ؤΥݥ��󥿡� */
} Skin_Info;

/*----------------------------------------------------------------------------
 *
 * ��ȥХåե�����¤��
 *
 *---------------------------------------------------------------------------*/
/*
 * ĺ���Хåե�������
 */
typedef struct skin_animation_vertex_buffer_element {
    Skin_SPoint pos; /* ĺ������ */
} Skin_Animation_Vertex_Buffer_Element;

/*
 * ĺ���Хåե���
 */
typedef struct skin_animation_vertex_buffer {
    short num; /* ĺ���� */
    /* ĺ���ơ��֥�:¸�ߤ��ʤ���� NULL */
    Skin_Animation_Vertex_Buffer_Element *pos_tbl; 
} Skin_Animation_Vertex_Buffer;

/*
 * ���˥᡼�����Хåե���
 */
typedef struct skin_animation_work_buffer {
    Skin_Info *pskin_info; /* ��������� */
    
    /*
     * �����縵�Υ�������ʣ�����������,
     * �ȥ�󥹥졼��,��ž���Υޥȥ�å���
     */
    Skin_Matrix root_matrix; 
    
    unsigned char mdl_num; /* ʪ�ο� */
    float current_frame; /* ���ߤΥե졼�� */
    
    /* ĺ���Хåե����Υơ��֥�:game_alloc() ʪ�ο�ʬ�����Ĥ��� */
    Skin_Animation_Vertex_Buffer *vtx_tbl;
    
} Skin_AnimationWorkBuffer;

typedef enum {
    SKIN_OK,
    SKIN_ERR_MEMORY,
    SKIN_ERR_NO_INV_MATRIX
} Skin_Error;

#endif

/*** z_skin_type.h end ***/
