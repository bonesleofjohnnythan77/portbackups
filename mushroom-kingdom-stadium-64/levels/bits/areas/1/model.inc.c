const Vtx bits_area_1_vertex_07002800_n12[] = {
    {{{  5570,   3242,  -3991}, 0, {   990,      0}, {255, 255, 255, 255}}},
    {{{  5468,   3242,  -3991}, 0, {     0,      0}, {255, 255, 255, 255}}},
    {{{  5570,   3160,  -3930}, 0, {   990,    990}, {255, 255, 255, 255}}},
    {{{  5468,   3160,  -3930}, 0, {     0,    990}, {255, 255, 255, 255}}},
    {{{  6517,   3791,  -1836}, 0, {   990,      0}, {255, 255, 255, 255}}},
    {{{  6414,   3791,  -1836}, 0, {     0,      0}, {255, 255, 255, 255}}},
    {{{  6517,   3709,  -1774}, 0, {   990,    990}, {255, 255, 255, 255}}},
    {{{  6414,   3709,  -1774}, 0, {     0,    990}, {255, 255, 255, 255}}},
    {{{  5966,   3777,  -3991}, 0, {   990,      0}, {255, 255, 255, 255}}},
    {{{  5864,   3777,  -3991}, 0, {     0,      0}, {255, 255, 255, 255}}},
    {{{  5966,   3695,  -3930}, 0, {   990,    990}, {255, 255, 255, 255}}},
    {{{  5864,   3695,  -3930}, 0, {     0,    990}, {255, 255, 255, 255}}},
};



const Gfx bits_area_1_dl_070028C0[] = {
    gsSPCullDisplayList(/* v0 */ 0x0, /* vn */ 0xB),
    gsDPSetTextureImage(/* fmt */ G_IM_FMT_RGBA, /* siz */ G_IM_SIZ_16b, /* width */ 0x1, /* texture_record */ bits_area_1_texture_09006800_00D04CE5_seg9),
    gsDPLoadSync(),
    gsDPLoadBlock(/* tile */ G_TX_LOADTILE, /* uls */ 0x0, /* ult */ 0x0, /* lrs */ 0x3FF, /* dxt */ 0x100),
    gsSPVertex(/* vertices */ bits_area_1_vertex_07002800_n12, /* count */ 0xC, /* v0 */ 0x0),
    gsSP2Triangles(/* v00 */ 0x0, /* v01 */ 0x1, /* v02 */ 0x2, /* flag0 */ 0x0, /* v10 */ 0x1, /* v11 */ 0x3, /* v12 */ 0x2, /* flag1 */ 0x0),
    gsSP2Triangles(/* v00 */ 0x4, /* v01 */ 0x5, /* v02 */ 0x6, /* flag0 */ 0x0, /* v10 */ 0x5, /* v11 */ 0x7, /* v12 */ 0x6, /* flag1 */ 0x0),
    gsSP2Triangles(/* v00 */ 0x8, /* v01 */ 0x9, /* v02 */ 0xA, /* flag0 */ 0x0, /* v10 */ 0x9, /* v11 */ 0xB, /* v12 */ 0xA, /* flag1 */ 0x0),
    gsSPEndDisplayList(),
};

const Gfx bits_area_1_dl_07002918[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(/* cycle1 */ G_CC_DECALRGBA, /* cycle2 */ G_CC_DECALRGBA),
    gsSPClearGeometryMode(/* flags */ G_LIGHTING),
    gsDPSetTile(/* fmt */ G_IM_FMT_RGBA, /* siz */ G_IM_SIZ_16b, /* line */ 0x0, /* tmem */ 0x0, /* tile */ G_TX_LOADTILE, /* palette */ 0x0, /* cmt */ G_TX_WRAP, /* maskt */ 0x0, /* shiftt */ 0x0, /* cms */ G_TX_WRAP, /* masks */ 0x0, /* shifts */ 0x0),
    gsSPTexture(/* s */ 0xFFFF, /* t */ 0xFFFF, /* level */ 0x0, /* tile */ G_TX_RENDERTILE, /* on */ G_ON),
    gsDPTileSync(),
    gsDPSetTile(/* fmt */ G_IM_FMT_RGBA, /* siz */ G_IM_SIZ_16b, /* line */ 0x8, /* tmem */ 0x0, /* tile */ G_TX_RENDERTILE, /* palette */ 0x0, /* cmt */ G_TX_WRAP, /* maskt */ 0x5, /* shiftt */ 0x0, /* cms */ G_TX_WRAP, /* masks */ 0x5, /* shifts */ 0x0),
    gsDPSetTileSize(/* tile */ G_TX_RENDERTILE, /* uls */ 0x0, /* ult */ 0x0, /* lrs */ 0x7C, /* lrt */ 0x7C),
    gsSPDisplayList(/* dl */ bits_area_1_dl_070028C0),
    gsSPTexture(/* s */ 0xFFFF, /* t */ 0xFFFF, /* level */ 0x0, /* tile */ G_TX_RENDERTILE, /* on */ G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(/* cycle1 */ G_CC_SHADE, /* cycle2 */ G_CC_SHADE),
    gsSPSetGeometryMode(/* flags */ G_LIGHTING),
    gsSPEndDisplayList(),
};

ALIGNED8 Texture bits_area_1_texture_09006800_00D04CE5_seg9 = {
#include "bits/areas/1/bits_area_1_texture_09006800_00D04CE5_seg9.inc.c"
};

