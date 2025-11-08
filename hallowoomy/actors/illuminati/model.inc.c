Lights1 illuminati_Fast3D_Material_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Gfx illuminati_luminati_ci8_aligner[] = {gsSPEndDisplayList()};
u8 illuminati_luminati_ci8[] = {
	#include "illuminati/luminati.ci8.inc.c"
};

Gfx illuminati_luminati_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 illuminati_luminati_pal_rgba16[] = {
	#include "illuminati/luminati.rgba16.pal"
};

Vtx illuminati_000_displaylist_mesh_layer_1_vtx_0[30] = {
	{{ {0, 37, -4}, 0, {-30248, -3263}, {0, 0, 129, 255} }},
	{{ {45, -42, -4}, 0, {-30671, -3995}, {0, 0, 129, 255} }},
	{{ {-45, -42, -4}, 0, {-29825, -3995}, {0, 0, 129, 255} }},
	{{ {0, 37, 4}, 0, {-30248, -3263}, {0, 0, 127, 255} }},
	{{ {-45, -42, 4}, 0, {-30671, -3995}, {0, 0, 127, 255} }},
	{{ {45, -42, 4}, 0, {-29825, -3995}, {0, 0, 127, 255} }},
	{{ {-54, -47, 4}, 0, {-22, -94}, {165, 203, 70, 255} }},
	{{ {0, 47, -4}, 0, {-41, 154}, {0, 106, 186, 255} }},
	{{ {-54, -47, -4}, 0, {-41, -94}, {165, 203, 186, 255} }},
	{{ {0, 47, 4}, 0, {-22, 154}, {0, 106, 70, 255} }},
	{{ {54, -47, -4}, 0, {-156, -22}, {91, 203, 186, 255} }},
	{{ {-54, -47, 4}, 0, {92, -41}, {165, 203, 70, 255} }},
	{{ {-54, -47, -4}, 0, {92, -22}, {165, 203, 186, 255} }},
	{{ {54, -47, 4}, 0, {-156, -41}, {91, 203, 70, 255} }},
	{{ {54, -47, 4}, 0, {-41, -94}, {91, 203, 70, 255} }},
	{{ {0, 47, -4}, 0, {-22, 154}, {0, 106, 186, 255} }},
	{{ {0, 47, 4}, 0, {-41, 154}, {0, 106, 70, 255} }},
	{{ {54, -47, -4}, 0, {-22, -94}, {91, 203, 186, 255} }},
	{{ {-45, -42, -4}, 0, {72, -20}, {0, 0, 129, 255} }},
	{{ {0, 47, -4}, 0, {-32, 183}, {0, 106, 186, 255} }},
	{{ {0, 37, -4}, 0, {-32, 160}, {0, 0, 129, 255} }},
	{{ {-54, -47, -4}, 0, {92, -32}, {165, 203, 186, 255} }},
	{{ {45, -42, -4}, 0, {-136, -20}, {0, 0, 129, 255} }},
	{{ {54, -47, -4}, 0, {-156, -32}, {91, 203, 186, 255} }},
	{{ {54, -47, 4}, 0, {92, -32}, {91, 203, 70, 255} }},
	{{ {45, -42, 4}, 0, {72, -20}, {0, 0, 127, 255} }},
	{{ {-54, -47, 4}, 0, {-156, -32}, {165, 203, 70, 255} }},
	{{ {0, 47, 4}, 0, {-32, 183}, {0, 106, 70, 255} }},
	{{ {0, 37, 4}, 0, {-32, 160}, {0, 0, 127, 255} }},
	{{ {-45, -42, 4}, 0, {-136, -20}, {0, 0, 127, 255} }},
};

Gfx illuminati_000_displaylist_mesh_layer_1_tri_0[] = {
	gsSPVertex(illuminati_000_displaylist_mesh_layer_1_vtx_0 + 0, 30, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 7, 6, 9, 0),
	gsSP2Triangles(10, 11, 12, 0, 11, 10, 13, 0),
	gsSP2Triangles(14, 15, 16, 0, 15, 14, 17, 0),
	gsSP2Triangles(18, 19, 20, 0, 18, 21, 19, 0),
	gsSP2Triangles(21, 18, 22, 0, 22, 23, 21, 0),
	gsSP2Triangles(23, 22, 19, 0, 19, 22, 20, 0),
	gsSP2Triangles(24, 25, 26, 0, 25, 24, 27, 0),
	gsSP2Triangles(25, 27, 28, 0, 27, 29, 28, 0),
	gsSP2Triangles(26, 29, 27, 0, 29, 26, 25, 0),
	gsSPEndDisplayList(),
};


Gfx mat_illuminati_Fast3D_Material[] = {
	gsSPSetLights1(illuminati_Fast3D_Material_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, illuminati_luminati_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 118),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, illuminati_luminati_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_illuminati_Fast3D_Material[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx illuminati_000_displaylist_mesh_layer_1[] = {
	gsSPDisplayList(mat_illuminati_Fast3D_Material),
	gsSPDisplayList(illuminati_000_displaylist_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_illuminati_Fast3D_Material),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

