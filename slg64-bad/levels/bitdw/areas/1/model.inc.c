const Vtx bitdw_area_1_vertex_07002000_n8[] = {
    {{{  2516,  -2357,   2962}, 0, {   990,      0}, {255, 255, 255, 255}}},
    {{{  2415,  -2440,   3024}, 0, {     0,    990}, {255, 255, 255, 255}}},
    {{{  2517,  -2439,   3023}, 0, {   990,    990}, {255, 255, 255, 255}}},
    {{{  2413,  -2358,   2962}, 0, {     0,      0}, {255, 255, 255, 255}}},
    {{{ -3038,  -2766,   2960}, 0, {   990,      0}, {255, 255, 255, 255}}},
    {{{ -3139,  -2849,   3023}, 0, {     0,    990}, {255, 255, 255, 255}}},
    {{{ -3037,  -2848,   3022}, 0, {   990,    990}, {255, 255, 255, 255}}},
    {{{ -3141,  -2768,   2961}, 0, {     0,      0}, {255, 255, 255, 255}}},
};



const Gfx bitdw_area_1_dl_07002080[] = {
    gsSPCullDisplayList(/* v0 */ 0x0, /* vn */ 0x7),
    gsDPSetTextureImage(/* fmt */ G_IM_FMT_RGBA, /* siz */ G_IM_SIZ_16b, /* width */ 0x1, /* texture_record */ bitdw_area_1_texture_09006800_00D04CE5_seg9),
    gsDPLoadSync(),
    gsDPLoadBlock(/* tile */ G_TX_LOADTILE, /* uls */ 0x0, /* ult */ 0x0, /* lrs */ 0x3FF, /* dxt */ 0x100),
    gsSPVertex(/* vertices */ bitdw_area_1_vertex_07002000_n8, /* count */ 0x8, /* v0 */ 0x0),
    gsSP2Triangles(/* v00 */ 0x0, /* v01 */ 0x1, /* v02 */ 0x2, /* flag0 */ 0x0, /* v10 */ 0x0, /* v11 */ 0x3, /* v12 */ 0x1, /* flag1 */ 0x0),
    gsSP2Triangles(/* v00 */ 0x4, /* v01 */ 0x5, /* v02 */ 0x6, /* flag0 */ 0x0, /* v10 */ 0x4, /* v11 */ 0x7, /* v12 */ 0x5, /* flag1 */ 0x0),
    gsSPEndDisplayList(),
};

const Gfx bitdw_area_1_dl_070020C8[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(/* cycle1 */ G_CC_DECALRGBA, /* cycle2 */ G_CC_DECALRGBA),
    gsSPClearGeometryMode(/* flags */ G_LIGHTING),
    gsDPSetTile(/* fmt */ G_IM_FMT_RGBA, /* siz */ G_IM_SIZ_16b, /* line */ 0x0, /* tmem */ 0x0, /* tile */ G_TX_LOADTILE, /* palette */ 0x0, /* cmt */ G_TX_WRAP, /* maskt */ 0x0, /* shiftt */ 0x0, /* cms */ G_TX_WRAP, /* masks */ 0x0, /* shifts */ 0x0),
    gsSPTexture(/* s */ 0xFFFF, /* t */ 0xFFFF, /* level */ 0x0, /* tile */ G_TX_RENDERTILE, /* on */ G_ON),
    gsDPTileSync(),
    gsDPSetTile(/* fmt */ G_IM_FMT_RGBA, /* siz */ G_IM_SIZ_16b, /* line */ 0x8, /* tmem */ 0x0, /* tile */ G_TX_RENDERTILE, /* palette */ 0x0, /* cmt */ G_TX_WRAP, /* maskt */ 0x5, /* shiftt */ 0x0, /* cms */ G_TX_WRAP, /* masks */ 0x5, /* shifts */ 0x0),
    gsDPSetTileSize(/* tile */ G_TX_RENDERTILE, /* uls */ 0x0, /* ult */ 0x0, /* lrs */ 0x7C, /* lrt */ 0x7C),
    gsSPDisplayList(/* dl */ bitdw_area_1_dl_07002080),
    gsSPTexture(/* s */ 0xFFFF, /* t */ 0xFFFF, /* level */ 0x0, /* tile */ G_TX_RENDERTILE, /* on */ G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(/* cycle1 */ G_CC_SHADE, /* cycle2 */ G_CC_SHADE),
    gsSPSetGeometryMode(/* flags */ G_LIGHTING),
    gsSPEndDisplayList(),
};

ALIGNED8 Texture bitdw_area_1_texture_09006800_00D04CE5_seg9 = {
#include "bitdw/areas/1/bitdw_area_1_texture_09006800_00D04CE5_seg9.inc.c"
};

