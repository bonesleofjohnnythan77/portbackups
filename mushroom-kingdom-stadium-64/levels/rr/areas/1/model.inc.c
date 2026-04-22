const Vtx rr_area_1_vertex_07002000_n16[] = {
    {{{ -4786,   -975,   4124}, 0, {   990,      0}, {255, 255, 255, 255}}},
    {{{ -4889,   -975,   4124}, 0, {     0,      0}, {255, 255, 255, 255}}},
    {{{ -4786,  -1057,   4185}, 0, {   990,    990}, {255, 255, 255, 255}}},
    {{{  6721,   -715,   -565}, 0, {     0,      0}, {255, 255, 255, 255}}},
    {{{  6721,   -797,   -503}, 0, {     0,    990}, {255, 255, 255, 255}}},
    {{{  6823,   -797,   -503}, 0, {   990,    990}, {255, 255, 255, 255}}},
    {{{  6823,   -715,   -565}, 0, {   990,      0}, {255, 255, 255, 255}}},
    {{{  3250,  -1792,   5658}, 0, {     0,      0}, {255, 255, 255, 255}}},
    {{{  3250,  -1874,   5719}, 0, {     0,    990}, {255, 255, 255, 255}}},
    {{{  3353,  -1874,   5719}, 0, {   990,    990}, {255, 255, 255, 255}}},
    {{{  3353,  -1792,   5658}, 0, {   990,      0}, {255, 255, 255, 255}}},
    {{{ -5757,  -1792,   5760}, 0, {   990,      0}, {255, 255, 255, 255}}},
    {{{ -5860,  -1792,   5760}, 0, {     0,      0}, {255, 255, 255, 255}}},
    {{{ -5757,  -1874,   5822}, 0, {   990,    990}, {255, 255, 255, 255}}},
    {{{ -5860,  -1874,   5822}, 0, {     0,    990}, {255, 255, 255, 255}}},
    {{{ -4889,  -1057,   4185}, 0, {     0,    990}, {255, 255, 255, 255}}},
};



const Gfx rr_area_1_dl_07002100[] = {
    gsSPCullDisplayList(/* v0 */ 0x0, /* vn */ 0xF),
    gsDPSetTextureImage(/* fmt */ G_IM_FMT_RGBA, /* siz */ G_IM_SIZ_16b, /* width */ 0x1, /* texture_record */ rr_area_1_texture_09006800_00D04CE5_seg9),
    gsDPLoadSync(),
    gsDPLoadBlock(/* tile */ G_TX_LOADTILE, /* uls */ 0x0, /* ult */ 0x0, /* lrs */ 0x3FF, /* dxt */ 0x100),
    gsSPVertex(/* vertices */ rr_area_1_vertex_07002000_n16, /* count */ 0x10, /* v0 */ 0x0),
    gsSP2Triangles(/* v00 */ 0x0, /* v01 */ 0x1, /* v02 */ 0x2, /* flag0 */ 0x0, /* v10 */ 0x3, /* v11 */ 0x4, /* v12 */ 0x5, /* flag1 */ 0x0),
    gsSP2Triangles(/* v00 */ 0x6, /* v01 */ 0x3, /* v02 */ 0x5, /* flag0 */ 0x0, /* v10 */ 0x7, /* v11 */ 0x8, /* v12 */ 0x9, /* flag1 */ 0x0),
    gsSP2Triangles(/* v00 */ 0xA, /* v01 */ 0x7, /* v02 */ 0x9, /* flag0 */ 0x0, /* v10 */ 0xB, /* v11 */ 0xC, /* v12 */ 0xD, /* flag1 */ 0x0),
    gsSP2Triangles(/* v00 */ 0xC, /* v01 */ 0xE, /* v02 */ 0xD, /* flag0 */ 0x0, /* v10 */ 0x1, /* v11 */ 0xF, /* v12 */ 0x2, /* flag1 */ 0x0),
    gsSPEndDisplayList(),
};

const Gfx rr_area_1_dl_07002168[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(/* cycle1 */ G_CC_MODULATEIA, /* cycle2 */ G_CC_MODULATEIA),
    gsSPClearGeometryMode(/* flags */ G_LIGHTING),
    gsDPSetTile(/* fmt */ G_IM_FMT_RGBA, /* siz */ G_IM_SIZ_16b, /* line */ 0x0, /* tmem */ 0x0, /* tile */ G_TX_LOADTILE, /* palette */ 0x0, /* cmt */ G_TX_WRAP, /* maskt */ 0x0, /* shiftt */ 0x0, /* cms */ G_TX_WRAP, /* masks */ 0x0, /* shifts */ 0x0),
    gsSPTexture(/* s */ 0xFFFF, /* t */ 0xFFFF, /* level */ 0x0, /* tile */ G_TX_RENDERTILE, /* on */ G_ON),
    gsDPTileSync(),
    gsDPSetTile(/* fmt */ G_IM_FMT_RGBA, /* siz */ G_IM_SIZ_16b, /* line */ 0x8, /* tmem */ 0x0, /* tile */ G_TX_RENDERTILE, /* palette */ 0x0, /* cmt */ G_TX_CLAMP, /* maskt */ 0x5, /* shiftt */ 0x0, /* cms */ G_TX_CLAMP, /* masks */ 0x5, /* shifts */ 0x0),
    gsDPSetTileSize(/* tile */ G_TX_RENDERTILE, /* uls */ 0x0, /* ult */ 0x0, /* lrs */ 0x7C, /* lrt */ 0x7C),
    gsSPDisplayList(/* dl */ rr_area_1_dl_07002100),
    gsSPTexture(/* s */ 0xFFFF, /* t */ 0xFFFF, /* level */ 0x0, /* tile */ G_TX_RENDERTILE, /* on */ G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(/* cycle1 */ G_CC_SHADE, /* cycle2 */ G_CC_SHADE),
    gsSPSetGeometryMode(/* flags */ G_LIGHTING),
    gsSPEndDisplayList(),
};

ALIGNED8 Texture rr_area_1_texture_09006800_00D04CE5_seg9 = {
#include "rr/areas/1/rr_area_1_texture_09006800_00D04CE5_seg9.inc.c"
};

