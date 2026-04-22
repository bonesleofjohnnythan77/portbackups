const Vtx bitfs_area_1_vertex_07002000_n12[] = {
    {{{  1280,    348,   -293}, 0, {   990,      0}, {255, 255, 255, 255}}},
    {{{  1178,    348,   -293}, 0, {     0,      0}, {255, 255, 255, 255}}},
    {{{  1280,    266,   -231}, 0, {   990,    990}, {255, 255, 255, 255}}},
    {{{  1178,    266,   -231}, 0, {     0,    990}, {255, 255, 255, 255}}},
    {{{ -1330,   3625,   -703}, 0, {   990,      0}, {255, 255, 255, 255}}},
    {{{ -1433,   3625,   -703}, 0, {     0,      0}, {255, 255, 255, 255}}},
    {{{ -1330,   3543,   -642}, 0, {   990,    990}, {255, 255, 255, 255}}},
    {{{ -1433,   3543,   -642}, 0, {     0,    990}, {255, 255, 255, 255}}},
    {{{ -3173,   3625,   -707}, 0, {   990,      0}, {255, 255, 255, 255}}},
    {{{ -3276,   3625,   -707}, 0, {     0,      0}, {255, 255, 255, 255}}},
    {{{ -3173,   3543,   -646}, 0, {   990,    990}, {255, 255, 255, 255}}},
    {{{ -3276,   3543,   -646}, 0, {     0,    990}, {255, 255, 255, 255}}},
};



const Gfx bitfs_area_1_dl_070020C0[] = {
    gsSPCullDisplayList(/* v0 */ 0x0, /* vn */ 0xB),
    gsDPSetTextureImage(/* fmt */ G_IM_FMT_RGBA, /* siz */ G_IM_SIZ_16b, /* width */ 0x1, /* texture_record */ bitfs_area_1_texture_09006800_00D04CE5_seg9),
    gsDPLoadSync(),
    gsDPLoadBlock(/* tile */ G_TX_LOADTILE, /* uls */ 0x0, /* ult */ 0x0, /* lrs */ 0x3FF, /* dxt */ 0x100),
    gsSPVertex(/* vertices */ bitfs_area_1_vertex_07002000_n12, /* count */ 0xC, /* v0 */ 0x0),
    gsSP2Triangles(/* v00 */ 0x0, /* v01 */ 0x1, /* v02 */ 0x2, /* flag0 */ 0x0, /* v10 */ 0x1, /* v11 */ 0x3, /* v12 */ 0x2, /* flag1 */ 0x0),
    gsSP2Triangles(/* v00 */ 0x4, /* v01 */ 0x5, /* v02 */ 0x6, /* flag0 */ 0x0, /* v10 */ 0x5, /* v11 */ 0x7, /* v12 */ 0x6, /* flag1 */ 0x0),
    gsSP2Triangles(/* v00 */ 0x8, /* v01 */ 0x9, /* v02 */ 0xA, /* flag0 */ 0x0, /* v10 */ 0x9, /* v11 */ 0xB, /* v12 */ 0xA, /* flag1 */ 0x0),
    gsSPEndDisplayList(),
};

const Gfx bitfs_area_1_dl_07002118[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(/* cycle1 */ G_CC_MODULATEIA, /* cycle2 */ G_CC_MODULATEIA),
    gsSPClearGeometryMode(/* flags */ G_LIGHTING),
    gsDPSetTile(/* fmt */ G_IM_FMT_RGBA, /* siz */ G_IM_SIZ_16b, /* line */ 0x0, /* tmem */ 0x0, /* tile */ G_TX_LOADTILE, /* palette */ 0x0, /* cmt */ G_TX_WRAP, /* maskt */ 0x0, /* shiftt */ 0x0, /* cms */ G_TX_WRAP, /* masks */ 0x0, /* shifts */ 0x0),
    gsSPTexture(/* s */ 0xFFFF, /* t */ 0xFFFF, /* level */ 0x0, /* tile */ G_TX_RENDERTILE, /* on */ G_ON),
    gsDPTileSync(),
    gsDPSetTile(/* fmt */ G_IM_FMT_RGBA, /* siz */ G_IM_SIZ_16b, /* line */ 0x8, /* tmem */ 0x0, /* tile */ G_TX_RENDERTILE, /* palette */ 0x0, /* cmt */ G_TX_WRAP, /* maskt */ 0x5, /* shiftt */ 0x0, /* cms */ G_TX_WRAP, /* masks */ 0x5, /* shifts */ 0x0),
    gsDPSetTileSize(/* tile */ G_TX_RENDERTILE, /* uls */ 0x0, /* ult */ 0x0, /* lrs */ 0x7C, /* lrt */ 0x7C),
    gsSPDisplayList(/* dl */ bitfs_area_1_dl_070020C0),
    gsSPTexture(/* s */ 0xFFFF, /* t */ 0xFFFF, /* level */ 0x0, /* tile */ G_TX_RENDERTILE, /* on */ G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(/* cycle1 */ G_CC_SHADE, /* cycle2 */ G_CC_SHADE),
    gsSPSetGeometryMode(/* flags */ G_LIGHTING),
    gsSPEndDisplayList(),
};

const Gfx bitfs_area_1_dl_07015BA8[] = {
    gsSPCullDisplayList(/* v0 */ 0x0, /* vn */ 0x3),
    gsSP2Triangles(/* v00 */ 0x0, /* v01 */ 0x1, /* v02 */ 0x2, /* flag0 */ 0x0, /* v10 */ 0x0, /* v11 */ 0x2, /* v12 */ 0x3, /* flag1 */ 0x0),
    gsSPEndDisplayList(),
};

const Gfx bitfs_area_1_dl_07015BC0[] = {
    gsSPCullDisplayList(/* v0 */ 0x0, /* vn */ 0x8),
    gsSP2Triangles(/* v00 */ 0x0, /* v01 */ 0x3, /* v02 */ 0x1, /* flag0 */ 0x0, /* v10 */ 0x1, /* v11 */ 0x3, /* v12 */ 0x4, /* flag1 */ 0x0),
    gsSP2Triangles(/* v00 */ 0x1, /* v01 */ 0x4, /* v02 */ 0x2, /* flag0 */ 0x0, /* v10 */ 0x2, /* v11 */ 0x4, /* v12 */ 0x5, /* flag1 */ 0x0),
    gsSP2Triangles(/* v00 */ 0x3, /* v01 */ 0x6, /* v02 */ 0x4, /* flag0 */ 0x0, /* v10 */ 0x4, /* v11 */ 0x6, /* v12 */ 0x7, /* flag1 */ 0x0),
    gsSP2Triangles(/* v00 */ 0x4, /* v01 */ 0x7, /* v02 */ 0x5, /* flag0 */ 0x0, /* v10 */ 0x5, /* v11 */ 0x7, /* v12 */ 0x8, /* flag1 */ 0x0),
    gsSPEndDisplayList(),
};

ALIGNED8 Texture bitfs_area_1_texture_09006800_00D04CE5_seg9 = {
#include "bitfs/areas/1/bitfs_area_1_texture_09006800_00D04CE5_seg9.inc.c"
};

