const Vtx ttc_area_1_vertex_0E000810_n15[] = {
    {{{ 32485,      0,  32458}, 0, { 13684,  -1511}, { 0, 127,  0, 255}}},
    {{{ -32485,      0, -32458}, 0, { -2097,  13152}, { 0, 127,  0, 255}}},
    {{{ -32485,      0,  32458}, 0, { -2097,  -1511}, { 0, 127,  0, 255}}},
    {{{ -32485,      0, -32458}, 0, { -2097,  13152}, { 0, 127,  0, 255}}},
    {{{ 32485,      0,  32458}, 0, { 13684,  -1511}, { 0, 127,  0, 255}}},
    {{{ 32485,      0, -32458}, 0, { 13684,  13152}, { 0, 127,  0, 255}}},
    {{{     0,      0,      0}, 0, {     0,      0}, { 0,  0,  0, 255}}},
    {{{     0,      0,      0}, 0, {     0,      0}, { 0,  0,  0, 255}}},
    {{{     0,      0,      0}, 0, {     0,      0}, { 0,  0,  0, 255}}},
    {{{     0,      0,      0}, 0, {     0,      0}, { 0,  0,  0, 255}}},
    {{{     0,      0,      0}, 0, {     0,      0}, { 0,  0,  0, 255}}},
    {{{     0,      0,      0}, 0, {     0,      0}, { 0,  0,  0, 255}}},
    {{{     0,      0,      0}, 0, {     0,      0}, { 0,  0,  0, 255}}},
    {{{     0,      0,      0}, 0, {     0,      0}, { 0,  0,  0, 255}}},
    {{{     0,      0,      0}, 0, {     0,      0}, { 0,  0,  0, 255}}},
};



Light_t ttc_area_1_light_0E000000 = {
    { 255, 255, 255 }, 0, { 255, 255, 255 }, 0, { 127, 127, 127 }, 0
};


Light_t ttc_area_1_light_0E000008 = {
    { 127, 127, 127 }, 0, { 127, 127, 127 }, 0, { -1, -1, -1 }, 0
};


const Gfx ttc_area_1_dl_0E000900[] = {
    gsSPCullDisplayList(/* v0 */ 0x0, /* vn */ 0xE),
    gsDPPipeSync(),
    gsSPSetGeometryMode(/* flags */ 0),
    gsDPSetCombineMode(/* cycle1 */ G_CC_MODULATEI, /* cycle2 */ G_CC_PASS2),
    gsSPTexture(/* s */ 0xFFFF, /* t */ 0xFFFF, /* level */ 0x0, /* tile */ G_TX_RENDERTILE, /* on */ G_ON),
    gsDPTileSync(),
    gsDPLoadSync(),
    gsSPLight(/* light */ &ttc_area_1_light_0E000000.col, /* idx */ 1),
    gsSPLight(/* light */ &ttc_area_1_light_0E000008.col, /* idx */ 2),
    gsSPVertex(/* vertices */ ttc_area_1_vertex_0E000810_n15, /* count */ 0xF, /* v0 */ 0x0),
    gsDPSetTextureImage(/* fmt */ G_IM_FMT_RGBA, /* siz */ G_IM_SIZ_16b, /* width */ 0x1, /* texture_record */ ttc_area_1_texture_0E000010_01FD0010_seg14),
    gsDPSetTile(/* fmt */ G_IM_FMT_RGBA, /* siz */ G_IM_SIZ_16b, /* line */ 0x0, /* tmem */ 0x0, /* tile */ G_TX_LOADTILE, /* palette */ 0x0, /* cmt */ G_TX_WRAP, /* maskt */ 0x0, /* shiftt */ 0x0, /* cms */ G_TX_WRAP, /* masks */ 0x0, /* shifts */ 0x0),
    gsDPLoadSync(),
    gsDPLoadBlock(/* tile */ G_TX_LOADTILE, /* uls */ 0x0, /* ult */ 0x0, /* lrs */ 0x3FF, /* dxt */ 0x100),
    gsDPPipeSync(),
    gsDPSetTile(/* fmt */ G_IM_FMT_RGBA, /* siz */ G_IM_SIZ_16b, /* line */ 0x8, /* tmem */ 0x0, /* tile */ G_TX_RENDERTILE, /* palette */ 0x0, /* cmt */ G_TX_WRAP, /* maskt */ 0x5, /* shiftt */ 0x0, /* cms */ G_TX_WRAP, /* masks */ 0x5, /* shifts */ 0x0),
    gsDPSetTileSize(/* tile */ G_TX_RENDERTILE, /* uls */ 0x0, /* ult */ 0x0, /* lrs */ 0x7C, /* lrt */ 0x7C),
    gsSP2Triangles(/* v00 */ 0x0, /* v01 */ 0x1, /* v02 */ 0x2, /* flag0 */ 0x0, /* v10 */ 0x3, /* v11 */ 0x4, /* v12 */ 0x5, /* flag1 */ 0x0),
    gsSP2Triangles(/* v00 */ 0x6, /* v01 */ 0x7, /* v02 */ 0x8, /* flag0 */ 0x0, /* v10 */ 0x9, /* v11 */ 0xA, /* v12 */ 0xB, /* flag1 */ 0x0),
    gsSP1Triangle(/* v0 */ 0xC, /* v1 */ 0xD, /* v2 */ 0xE, /* flag */ 0x0),
    gsSPTexture(/* s */ 0xFFFF, /* t */ 0xFFFF, /* level */ 0x0, /* tile */ G_TX_RENDERTILE, /* on */ G_OFF),
    gsSPEndDisplayList(),
};

ALIGNED8 Texture ttc_area_1_texture_0E000010_01FD0010_seg14 = {
#include "ttc/areas/1/ttc_area_1_texture_0E000010_01FD0010_seg14.inc.c"
};

