const Vtx sl_vertex_0700A638_n14[] = {
    {{{   102,      0,   -255}, 0, {  2522,   2010}, {89, 89,  0, 255}}},
    {{{     0,    102,    256}, 0, {     0,   1498}, {89, 89,  0, 255}}},
    {{{   102,      0,    256}, 0, {     0,   2010}, {89, 89,  0, 255}}},
    {{{     0,    102,   -255}, 0, {  2522,   1500}, {89, 89,  0, 255}}},
    {{{     0,    102,   -255}, 0, {  2522,   1500}, {166, 89,  0, 255}}},
    {{{  -101,      0,    256}, 0, {     0,    990}, {166, 89,  0, 255}}},
    {{{     0,    102,    256}, 0, {     0,   1498}, {166, 89,  0, 255}}},
    {{{  -101,      0,   -255}, 0, {  2522,    990}, {166, 89,  0, 255}}},
    {{{     0,    102,    256}, 0, {   478,    480}, { 0,  0, 127, 255}}},
    {{{  -101,      0,    256}, 0, {     0,    990}, { 0,  0, 127, 255}}},
    {{{   102,      0,    256}, 0, {   990,    990}, { 0,  0, 127, 255}}},
    {{{   102,      0,   -255}, 0, {   990,    990}, { 0,  0, 129, 255}}},
    {{{  -101,      0,   -255}, 0, {     0,    990}, { 0,  0, 129, 255}}},
    {{{     0,    102,   -255}, 0, {   478,    480}, { 0,  0, 129, 255}}},
};



const Vtx sl_vertex_0700A808_n4[] = {
    {{{  -101,      0,    102}, 0, {   734,    734}, { 0, 127,  0, 255}}},
    {{{   102,      0,    102}, 0, {   734,    224}, { 0, 127,  0, 255}}},
    {{{  -101,      0,   -101}, 0, {   224,    734}, { 0, 127,  0, 255}}},
    {{{   102,      0,   -101}, 0, {   224,    224}, { 0, 127,  0, 255}}},
};



const Vtx sl_vertex_0700A928_n3[] = {
    {{{    -8,      0,      5}, 0, {     0,      0}, { 0, 127,  0, 100}}},
    {{{     9,      0,      5}, 0, {     0,      0}, { 0, 127,  0, 100}}},
    {{{     0,      0,     -9}, 0, {     0,      0}, { 0, 127,  0, 100}}},
};



Light_t sl_light_0700A628 = {
    { 230, 230, 230 }, 0, { 230, 230, 230 }, 0, { 40, 40, 40 }, 0
};


Light_t sl_light_0700A620 = {
    { 115, 115, 115 }, 0, { 115, 115, 115 }, 0, { -26, -26, -26 }, 0
};


Light_t sl_light_0700A7F8 = {
    { 255, 255, 255 }, 0, { 255, 255, 255 }, 0, { 40, 40, 40 }, 0
};


Light_t sl_light_0700A7F0 = {
    { 127, 127, 127 }, 0, { 127, 127, 127 }, 0, { -1, -1, -1 }, 0
};


Light_t sl_light_0700A918 = {
    { 255, 255, 255 }, 0, { 255, 255, 255 }, 0, { 40, 40, 40 }, 0
};


Light_t sl_light_0700A910 = {
    { 127, 127, 127 }, 0, { 127, 127, 127 }, 0, { -1, -1, -1 }, 0
};


const Gfx sl_dl_0700A718[] = {
    gsSPCullDisplayList(/* v0 */ 0x0, /* vn */ 0xD),
    gsDPSetTextureImage(/* fmt */ G_IM_FMT_RGBA, /* siz */ G_IM_SIZ_16b, /* width */ 0x1, /* texture_record */ sl_texture_09008800_00D185F9_seg9),
    gsDPLoadSync(),
    gsDPLoadBlock(/* tile */ G_TX_LOADTILE, /* uls */ 0x0, /* ult */ 0x0, /* lrs */ 0x3FF, /* dxt */ 0x100),
    gsSPLight(/* light */ &sl_light_0700A628.col, /* idx */ 1),
    gsSPLight(/* light */ &sl_light_0700A620.col, /* idx */ 2),
    gsSPVertex(/* vertices */ sl_vertex_0700A638_n14, /* count */ 0xE, /* v0 */ 0x0),
    gsSP2Triangles(/* v00 */ 0x0, /* v01 */ 0x1, /* v02 */ 0x2, /* flag0 */ 0x0, /* v10 */ 0x0, /* v11 */ 0x3, /* v12 */ 0x1, /* flag1 */ 0x0),
    gsSP2Triangles(/* v00 */ 0x4, /* v01 */ 0x5, /* v02 */ 0x6, /* flag0 */ 0x0, /* v10 */ 0x4, /* v11 */ 0x7, /* v12 */ 0x5, /* flag1 */ 0x0),
    gsSP2Triangles(/* v00 */ 0x8, /* v01 */ 0x9, /* v02 */ 0xA, /* flag0 */ 0x0, /* v10 */ 0xB, /* v11 */ 0xC, /* v12 */ 0xD, /* flag1 */ 0x0),
    gsSPEndDisplayList(),
};

const Gfx sl_dl_0700A780[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(/* cycle1 */ G_CC_MODULATEI, /* cycle2 */ G_CC_MODULATEI),
    gsSPClearGeometryMode(/* flags */ G_SHADING_SMOOTH),
    gsDPSetTile(/* fmt */ G_IM_FMT_RGBA, /* siz */ G_IM_SIZ_16b, /* line */ 0x0, /* tmem */ 0x0, /* tile */ G_TX_LOADTILE, /* palette */ 0x0, /* cmt */ G_TX_WRAP, /* maskt */ 0x0, /* shiftt */ 0x0, /* cms */ G_TX_WRAP, /* masks */ 0x0, /* shifts */ 0x0),
    gsSPTexture(/* s */ 0xFFFF, /* t */ 0xFFFF, /* level */ 0x0, /* tile */ G_TX_RENDERTILE, /* on */ G_ON),
    gsDPTileSync(),
    gsDPSetTile(/* fmt */ G_IM_FMT_RGBA, /* siz */ G_IM_SIZ_16b, /* line */ 0x8, /* tmem */ 0x0, /* tile */ G_TX_RENDERTILE, /* palette */ 0x0, /* cmt */ G_TX_WRAP, /* maskt */ 0x5, /* shiftt */ 0x0, /* cms */ G_TX_WRAP, /* masks */ 0x5, /* shifts */ 0x0),
    gsDPSetTileSize(/* tile */ G_TX_RENDERTILE, /* uls */ 0x0, /* ult */ 0x0, /* lrs */ 0x7C, /* lrt */ 0x7C),
    gsSPDisplayList(/* dl */ sl_dl_0700A718),
    gsSPTexture(/* s */ 0xFFFF, /* t */ 0xFFFF, /* level */ 0x0, /* tile */ G_TX_RENDERTILE, /* on */ G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(/* cycle1 */ G_CC_SHADE, /* cycle2 */ G_CC_SHADE),
    gsSPSetGeometryMode(/* flags */ G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};

const Gfx sl_dl_0700A848[] = {
    gsSPCullDisplayList(/* v0 */ 0x0, /* vn */ 0x3),
    gsDPSetTextureImage(/* fmt */ G_IM_FMT_RGBA, /* siz */ G_IM_SIZ_16b, /* width */ 0x1, /* texture_record */ sl_texture_07001000_00F0B5F9_seg7),
    gsDPLoadSync(),
    gsDPLoadBlock(/* tile */ G_TX_LOADTILE, /* uls */ 0x0, /* ult */ 0x0, /* lrs */ 0x3FF, /* dxt */ 0x100),
    gsSPLight(/* light */ &sl_light_0700A7F8.col, /* idx */ 1),
    gsSPLight(/* light */ &sl_light_0700A7F0.col, /* idx */ 2),
    gsSPVertex(/* vertices */ sl_vertex_0700A808_n4, /* count */ 0x4, /* v0 */ 0x0),
    gsSP2Triangles(/* v00 */ 0x0, /* v01 */ 0x1, /* v02 */ 0x2, /* flag0 */ 0x0, /* v10 */ 0x1, /* v11 */ 0x3, /* v12 */ 0x2, /* flag1 */ 0x0),
    gsSPEndDisplayList(),
};

const Gfx sl_dl_0700A890[] = {
    gsDPPipeSync(),
    gsDPSetEnvColor(/* r */ 0xFF, /* g */ 0xFF, /* b */ 0xFF, /* a */ 0x64),
    gsDPSetCombineMode(/* cycle1 */ G_CC_MODULATEIFADE, /* cycle2 */ G_CC_MODULATEIFADE),
    gsSPClearGeometryMode(/* flags */ G_SHADING_SMOOTH),
    gsDPSetTile(/* fmt */ G_IM_FMT_RGBA, /* siz */ G_IM_SIZ_16b, /* line */ 0x0, /* tmem */ 0x0, /* tile */ G_TX_LOADTILE, /* palette */ 0x0, /* cmt */ G_TX_WRAP, /* maskt */ 0x0, /* shiftt */ 0x0, /* cms */ G_TX_WRAP, /* masks */ 0x0, /* shifts */ 0x0),
    gsSPTexture(/* s */ 0xFFFF, /* t */ 0xFFFF, /* level */ 0x0, /* tile */ G_TX_RENDERTILE, /* on */ G_ON),
    gsDPTileSync(),
    gsDPSetTile(/* fmt */ G_IM_FMT_RGBA, /* siz */ G_IM_SIZ_16b, /* line */ 0x8, /* tmem */ 0x0, /* tile */ G_TX_RENDERTILE, /* palette */ 0x0, /* cmt */ G_TX_WRAP, /* maskt */ 0x5, /* shiftt */ 0x0, /* cms */ G_TX_WRAP, /* masks */ 0x5, /* shifts */ 0x0),
    gsDPSetTileSize(/* tile */ G_TX_RENDERTILE, /* uls */ 0x0, /* ult */ 0x0, /* lrs */ 0x7C, /* lrt */ 0x7C),
    gsSPDisplayList(/* dl */ sl_dl_0700A848),
    gsSPTexture(/* s */ 0xFFFF, /* t */ 0xFFFF, /* level */ 0x0, /* tile */ G_TX_RENDERTILE, /* on */ G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(/* cycle1 */ G_CC_SHADE, /* cycle2 */ G_CC_SHADE),
    gsSPSetGeometryMode(/* flags */ G_SHADING_SMOOTH),
    gsDPSetEnvColor(/* r */ 0xFF, /* g */ 0xFF, /* b */ 0xFF, /* a */ 0xFF),
    gsSPEndDisplayList(),
};

const Gfx sl_dl_0700A958[] = {
    gsSPCullDisplayList(/* v0 */ 0x0, /* vn */ 0x2),
    gsSPLight(/* light */ &sl_light_0700A918.col, /* idx */ 1),
    gsSPLight(/* light */ &sl_light_0700A910.col, /* idx */ 2),
    gsSPVertex(/* vertices */ sl_vertex_0700A928_n3, /* count */ 0x3, /* v0 */ 0x0),
    gsSP1Triangle(/* v0 */ 0x0, /* v1 */ 0x1, /* v2 */ 0x2, /* flag */ 0x0),
    gsSPEndDisplayList(),
};

const Gfx sl_dl_0700A980[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(/* flags */ G_SHADING_SMOOTH|G_CULL_BACK),
    gsSPDisplayList(/* dl */ sl_dl_0700A958),
    gsDPPipeSync(),
    gsSPSetGeometryMode(/* flags */ G_SHADING_SMOOTH|G_CULL_BACK),
    gsSPEndDisplayList(),
};

ALIGNED8 Texture sl_texture_09008800_00D185F9_seg9 = {
#include "sl/sl_texture_09008800_00D185F9_seg9.inc.c"
};



ALIGNED8 Texture sl_texture_07001000_00F0B5F9_seg7 = {
#include "sl/sl_texture_07001000_00F0B5F9_seg7.inc.c"
};

