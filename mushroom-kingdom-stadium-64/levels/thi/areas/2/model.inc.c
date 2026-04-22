const Vtx thi_area_2_vertex_07007430_n10[] = {
    {{{  1690,   -460,    922}, 0, {     0,      0}, { 0,  0,  0, 180}}},
    {{{  1690,   -460,    615}, 0, {     0,    606}, { 0,  0,  0, 180}}},
    {{{  1229,   -460,    922}, 0, {   926,      0}, { 0,  0,  0, 180}}},
    {{{  1690,   -153,    615}, 0, {     0,    606}, { 0,  0,  0, 180}}},
    {{{  1229,   -153,    922}, 0, {   926,      0}, { 0,  0,  0, 180}}},
    {{{  1505,   -153,    430}, 0, {   352,    990}, { 0,  0,  0, 180}}},
    {{{  1242,    -68,    497}, 0, {   990,    990}, { 0,  0,  0, 180}}},
    {{{  1198,   -153,    635}, 0, {   990,    564}, { 0,  0,  0, 180}}},
    {{{  1690,   -153,    430}, 0, {     0,    990}, { 0,  0,  0, 180}}},
    {{{  1198,   -153,    922}, 0, {   990,      0}, { 0,  0,  0, 180}}},
};



const Gfx thi_area_2_dl_070074D0[] = {
    gsSPCullDisplayList(/* v0 */ 0x0, /* vn */ 0x9),
    gsDPSetTextureImage(/* fmt */ G_IM_FMT_IA, /* siz */ G_IM_SIZ_16b, /* width */ 0x1, /* texture_record */ thi_area_2_texture_0900B000_00D6C1C9_seg9),
    gsDPLoadSync(),
    gsDPLoadBlock(/* tile */ G_TX_LOADTILE, /* uls */ 0x0, /* ult */ 0x0, /* lrs */ 0x3FF, /* dxt */ 0x100),
    gsSPVertex(/* vertices */ thi_area_2_vertex_07007430_n10, /* count */ 0xA, /* v0 */ 0x0),
    gsSP2Triangles(/* v00 */ 0x0, /* v01 */ 0x1, /* v02 */ 0x2, /* flag0 */ 0x0, /* v10 */ 0x3, /* v11 */ 0x2, /* v12 */ 0x1, /* flag1 */ 0x0),
    gsSP2Triangles(/* v00 */ 0x3, /* v01 */ 0x4, /* v02 */ 0x2, /* flag0 */ 0x0, /* v10 */ 0x5, /* v11 */ 0x6, /* v12 */ 0x7, /* flag1 */ 0x0),
    gsSP2Triangles(/* v00 */ 0x5, /* v01 */ 0x3, /* v02 */ 0x8, /* flag0 */ 0x0, /* v10 */ 0x5, /* v11 */ 0x4, /* v12 */ 0x3, /* flag1 */ 0x0),
    gsSP2Triangles(/* v00 */ 0x5, /* v01 */ 0x9, /* v02 */ 0x4, /* flag0 */ 0x0, /* v10 */ 0x5, /* v11 */ 0x7, /* v12 */ 0x9, /* flag1 */ 0x0),
    gsSPEndDisplayList(),
};

const Gfx thi_area_2_dl_07007538[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(/* cycle1 */ G_CC_MODULATEIA, /* cycle2 */ G_CC_MODULATEIA),
    gsSPClearGeometryMode(/* flags */ G_LIGHTING),
    gsDPSetTile(/* fmt */ G_IM_FMT_IA, /* siz */ G_IM_SIZ_16b, /* line */ 0x0, /* tmem */ 0x0, /* tile */ G_TX_LOADTILE, /* palette */ 0x0, /* cmt */ G_TX_WRAP, /* maskt */ 0x0, /* shiftt */ 0x0, /* cms */ G_TX_WRAP, /* masks */ 0x0, /* shifts */ 0x0),
    gsSPTexture(/* s */ 0xFFFF, /* t */ 0xFFFF, /* level */ 0x0, /* tile */ G_TX_RENDERTILE, /* on */ G_ON),
    gsDPTileSync(),
    gsDPSetTile(/* fmt */ G_IM_FMT_IA, /* siz */ G_IM_SIZ_16b, /* line */ 0x8, /* tmem */ 0x0, /* tile */ G_TX_RENDERTILE, /* palette */ 0x0, /* cmt */ G_TX_CLAMP, /* maskt */ 0x5, /* shiftt */ 0x0, /* cms */ G_TX_CLAMP, /* masks */ 0x5, /* shifts */ 0x0),
    gsDPSetTileSize(/* tile */ G_TX_RENDERTILE, /* uls */ 0x0, /* ult */ 0x0, /* lrs */ 0x7C, /* lrt */ 0x7C),
    gsSPDisplayList(/* dl */ thi_area_2_dl_070074D0),
    gsSPTexture(/* s */ 0xFFFF, /* t */ 0xFFFF, /* level */ 0x0, /* tile */ G_TX_RENDERTILE, /* on */ G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(/* cycle1 */ G_CC_SHADE, /* cycle2 */ G_CC_SHADE),
    gsSPSetGeometryMode(/* flags */ G_LIGHTING),
    gsSPEndDisplayList(),
};

ALIGNED8 Texture thi_area_2_texture_0900B000_00D6C1C9_seg9 = {
#include "thi/areas/2/thi_area_2_texture_0900B000_00D6C1C9_seg9.inc.c"
};

