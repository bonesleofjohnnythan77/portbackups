#include "custom.model.inc.h"

ALIGNED8 u8 unk_DL_0300ef94__texture_0300DDF0[] = {
#include "actors/unk_ccm_0300ef94/unk_DL_0300ef94_0x300ddf0_custom.rgba32.inc.c"
};


Vtx VB_unk_DL_0300ef94_0x300edf0[] = {
{{{ 0, 83, 0 }, 0, { 1007, 1080 }, { 255, 255, 255, 255}}},
{{{ 96, 83, 0 }, 0, { 2022, 1080 }, { 53, 65, 94, 255}}},
{{{ 48, 166, 0 }, 0, { 1514, 1996 }, { 53, 65, 94, 255}}},
{{{ -48, 166, 0 }, 0, { 499, 1996 }, { 255, 255, 255, 255}}},
{{{ -96, 83, 0 }, 0, { -8, 1080 }, { 255, 255, 255, 255}}},
{{{ -48, 0, 0 }, 0, { 499, 164 }, { 255, 255, 255, 255}}},
{{{ 48, 0, 0 }, 0, { 1514, 164 }, { 53, 65, 94, 255}}},
};

Gfx DL_unk_DL_0300ef94_0x300ee60[] = {
gsSPGeometryMode(G_LIGHTING, 0),
gsSPTexture(32768, 32768, 0, 0, 1),
gsDPTileSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0),
gsDPSetTextureImage(0, 3, 1, unk_DL_0300ef94__texture_0300DDF0),
gsDPSetTile(0, 3, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 128),
gsDPPipeSync(),
gsDPSetTile(0, 3, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPVertex(VB_unk_DL_0300ef94_0x300edf0, 7, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSP2Triangles(0, 3, 4, 0,0, 4, 5, 0),
gsSP2Triangles(0, 5, 6, 0,0, 6, 1, 0),
gsSPGeometryMode(0, G_LIGHTING),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

