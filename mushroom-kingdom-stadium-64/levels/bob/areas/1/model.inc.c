const Vtx bob_area_1_vertex_07000000_n4[] = {
    {{{  8192,      0,   8192}, 0, {     0,      0}, { 0,  0,  0, 255}}},
    {{{ -8193,      0,  -8193}, 0, { 20702,  20702}, { 0,  0,  0, 255}}},
    {{{ -8193,      0,   8192}, 0, {     0,  20702}, { 0,  0,  0, 255}}},
    {{{  8192,      0,  -8193}, 0, { 20702,      0}, { 0,  0,  0, 255}}},
};



Light_t bob_area_1_light_070000D0 = {
    { 255, 255, 255 }, 0, { 160, 160, 160 }, 0, { 0, 64, 0 }, 0
};


Light_t bob_area_1_light_070000D4 = {
    { 160, 160, 160 }, 0, { 0, 64, 0 }, 0, { 32, 0, 0 }, 0
};


const Gfx bob_area_1_dl_07000040[] = {
    gsSPCullDisplayList(/* v0 */ 0x0, /* vn */ 0x3),
    gsDPPipeSync(),
    gsSPSetGeometryMode(/* flags */ 0),
    gsDPSetCombineMode(/* cycle1 */ G_CC_MODULATEI, /* cycle2 */ G_CC_PASS2),
    gsDPSetTile(/* fmt */ G_IM_FMT_RGBA, /* siz */ G_IM_SIZ_16b, /* line */ 0x0, /* tmem */ 0x0, /* tile */ G_TX_LOADTILE, /* palette */ 0x0, /* cmt */ G_TX_WRAP, /* maskt */ 0x0, /* shiftt */ 0x0, /* cms */ G_TX_WRAP, /* masks */ 0x0, /* shifts */ 0x0),
    gsSPTexture(/* s */ 0xFFFF, /* t */ 0xFFFF, /* level */ 0x0, /* tile */ G_TX_RENDERTILE, /* on */ G_ON),
    gsDPTileSync(),
    gsDPSetTile(/* fmt */ G_IM_FMT_RGBA, /* siz */ G_IM_SIZ_16b, /* line */ 0x8, /* tmem */ 0x0, /* tile */ G_TX_RENDERTILE, /* palette */ 0x0, /* cmt */ G_TX_WRAP, /* maskt */ 0x5, /* shiftt */ 0x0, /* cms */ G_TX_WRAP, /* masks */ 0x5, /* shifts */ 0x0),
    gsDPSetTileSize(/* tile */ G_TX_RENDERTILE, /* uls */ 0x0, /* ult */ 0x0, /* lrs */ 0xC, /* lrt */ 0x7C),
    gsDPSetTextureImage(/* fmt */ G_IM_FMT_RGBA, /* siz */ G_IM_SIZ_16b, /* width */ 0x1, /* texture_record */ bob_area_1_texture_09005800_00CD8CBD_seg9),
    gsDPLoadSync(),
    gsDPLoadBlock(/* tile */ G_TX_LOADTILE, /* uls */ 0x0, /* ult */ 0x0, /* lrs */ 0x3FF, /* dxt */ 0x100),
    gsSPLight(/* light */ &bob_area_1_light_070000D0.col, /* idx */ 1),
    gsSPLight(/* light */ &bob_area_1_light_070000D4.col, /* idx */ 2),
    gsSPVertex(/* vertices */ bob_area_1_vertex_07000000_n4, /* count */ 0x4, /* v0 */ 0x0),
    gsSP2Triangles(/* v00 */ 0x0, /* v01 */ 0x1, /* v02 */ 0x2, /* flag0 */ 0x0, /* v10 */ 0x0, /* v11 */ 0x3, /* v12 */ 0x1, /* flag1 */ 0x0),
    gsSPTexture(/* s */ 0xFFFF, /* t */ 0xFFFF, /* level */ 0x0, /* tile */ G_TX_RENDERTILE, /* on */ G_OFF),
    gsSPEndDisplayList(),
};

ALIGNED8 Texture bob_area_1_texture_09005800_00CD8CBD_seg9 = {
#include "bob/areas/1/bob_area_1_texture_09005800_00CD8CBD_seg9.inc.c"
};

