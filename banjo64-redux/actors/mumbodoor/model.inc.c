Gfx mumbodoor_image_0000_ci4_aligner[] = {gsSPEndDisplayList()};
u8 mumbodoor_image_0000_ci4[] = {
	#include "actors/mumbodoor/image_0000.ci4.inc.c"
};

Gfx mumbodoor_image_0000_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 mumbodoor_image_0000_pal_rgba16[] = {
	#include "actors/mumbodoor/image_0000.rgba16.pal"
};

Vtx mumbodoor_000_displaylist_mesh_layer_1_vtx_0[16] = {
	{{ {0, 0, 0}, 0, {118, 2240}, {100, 100, 100, 255} }},
	{{ {0, 81, 0}, 0, {118, 2414}, {100, 100, 100, 255} }},
	{{ {-25, 0, 25}, 0, {29, 2240}, {100, 100, 100, 255} }},
	{{ {-25, 81, 25}, 0, {29, 2414}, {100, 100, 100, 255} }},
	{{ {-20, 138, -20}, 0, {118, 2576}, {100, 100, 100, 255} }},
	{{ {-45, 138, 5}, 0, {29, 2576}, {100, 100, 100, 255} }},
	{{ {-96, 162, -46}, 0, {29, 2721}, {100, 100, 100, 255} }},
	{{ {-71, 162, -71}, 0, {118, 2721}, {160, 160, 160, 255} }},
	{{ {0, 81, 0}, 0, {-31, 3038}, {254, 254, 254, 255} }},
	{{ {0, 0, 0}, 0, {-32, 2032}, {254, 254, 254, 255} }},
	{{ {-71, 67, -71}, 0, {992, 2860}, {254, 254, 254, 255} }},
	{{ {-141, 0, -141}, 0, {2016, 2032}, {160, 160, 160, 255} }},
	{{ {-141, 81, -141}, 0, {2016, 3038}, {160, 160, 160, 255} }},
	{{ {-121, 138, -121}, 0, {1724, 3754}, {160, 160, 160, 255} }},
	{{ {-71, 162, -71}, 0, {992, 4044}, {160, 160, 160, 255} }},
	{{ {-20, 138, -20}, 0, {259, 3754}, {254, 254, 254, 255} }},
};

Gfx mumbodoor_000_displaylist_mesh_layer_1_tri_0[] = {
	gsSPVertex(mumbodoor_000_displaylist_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
	gsSP2Triangles(1, 4, 3, 0, 3, 4, 5, 0),
	gsSP2Triangles(5, 4, 6, 0, 4, 7, 6, 0),
	gsSP2Triangles(8, 9, 10, 0, 11, 10, 9, 0),
	gsSP2Triangles(12, 10, 11, 0, 13, 10, 12, 0),
	gsSP2Triangles(14, 10, 13, 0, 14, 15, 10, 0),
	gsSP1Triangle(10, 15, 8, 0),
	gsSPEndDisplayList(),
};


Gfx mat_mumbodoor_mumbodoor[] = {
	gsSPGeometryMode(G_LIGHTING, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, ENVIRONMENT, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, ENVIRONMENT, 0, SHADE, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, mumbodoor_image_0000_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 15),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, mumbodoor_image_0000_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 512),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_mumbodoor_mumbodoor[] = {
	gsSPGeometryMode(0, G_LIGHTING),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mumbodoor_000_displaylist_mesh_layer_1[] = {
	gsSPDisplayList(mat_mumbodoor_mumbodoor),
	gsSPDisplayList(mumbodoor_000_displaylist_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mumbodoor_mumbodoor),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

