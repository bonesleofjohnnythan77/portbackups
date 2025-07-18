Lights1 flag_white_post2_lights = gdSPDefLights1(
	0x37, 0x27, 0x7,
	0xDF, 0x9F, 0x1F, 0x28, 0x28, 0x28);

Lights1 flag_white_post_lights = gdSPDefLights1(
	0x14, 0xA, 0x0,
	0x50, 0x28, 0x0, 0x28, 0x28, 0x28);

Gfx flag_white_white_ia8_aligner[] = {gsSPEndDisplayList()};
u8 flag_white_white_ia8[] = {
	#include "actors/flag_white/white.ia8.inc.c"
};

Vtx flag_white_000_offset_001_mesh_layer_1_vtx_0[5] = {
	{{ {2800, -18, 57}, 0, {-16, -16}, {76, 224, 97, 255} }},
	{{ {2800, -59, 0}, 0, {-16, -16}, {76, 154, 0, 255} }},
	{{ {2800, -18, -56}, 0, {-16, -16}, {76, 225, 159, 255} }},
	{{ {2800, 49, -34}, 0, {-16, -16}, {76, 82, 196, 255} }},
	{{ {2800, 49, 35}, 0, {-16, -16}, {76, 82, 60, 255} }},
};

Gfx flag_white_000_offset_001_mesh_layer_1_tri_0[] = {
	gsSPVertex(flag_white_000_offset_001_mesh_layer_1_vtx_0 + 0, 5, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
	gsSP1Triangle(3, 4, 0, 0),
	gsSPEndDisplayList(),
};

Vtx flag_white_000_offset_001_mesh_layer_1_vtx_1[10] = {
	{{ {2800, -18, -56}, 0, {-16, -16}, {76, 225, 159, 255} }},
	{{ {2800, -59, 0}, 0, {-16, -16}, {76, 154, 0, 255} }},
	{{ {0, -48, -34}, 0, {-16, -16}, {255, 153, 182, 255} }},
	{{ {0, -48, 35}, 0, {-16, -16}, {255, 153, 74, 255} }},
	{{ {2800, -18, 57}, 0, {-16, -16}, {76, 224, 97, 255} }},
	{{ {0, 19, 57}, 0, {-16, -16}, {255, 39, 121, 255} }},
	{{ {2800, 49, 35}, 0, {-16, -16}, {76, 82, 60, 255} }},
	{{ {0, 60, 0}, 0, {-16, -16}, {255, 127, 255, 255} }},
	{{ {2800, 49, -34}, 0, {-16, -16}, {76, 82, 196, 255} }},
	{{ {0, 19, -56}, 0, {-16, -16}, {255, 39, 135, 255} }},
};

Gfx flag_white_000_offset_001_mesh_layer_1_tri_1[] = {
	gsSPVertex(flag_white_000_offset_001_mesh_layer_1_vtx_1 + 0, 10, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
	gsSP2Triangles(1, 4, 3, 0, 5, 3, 4, 0),
	gsSP2Triangles(4, 6, 5, 0, 7, 5, 6, 0),
	gsSP2Triangles(6, 8, 7, 0, 9, 7, 8, 0),
	gsSP2Triangles(8, 0, 9, 0, 2, 9, 0, 0),
	gsSPEndDisplayList(),
};

Vtx flag_white_000_offset_003_mesh_layer_1_vtx_0[4] = {
	{{ {0, 0, 320}, 0, {-16, 1008}, {77, 77, 77, 255} }},
	{{ {460, 0, 320}, 0, {624, 1008}, {77, 77, 77, 255} }},
	{{ {0, 0, -719}, 0, {-16, -16}, {255, 255, 255, 255} }},
	{{ {460, 0, -719}, 0, {624, -16}, {255, 255, 255, 255} }},
};

Gfx flag_white_000_offset_003_mesh_layer_1_tri_0[] = {
	gsSPVertex(flag_white_000_offset_003_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
	gsSPEndDisplayList(),
};

Vtx flag_white_000_offset_004_mesh_layer_1_vtx_0[4] = {
	{{ {0, 0, 320}, 0, {624, 1008}, {77, 77, 77, 255} }},
	{{ {460, 0, -719}, 0, {1000, -16}, {255, 255, 255, 255} }},
	{{ {0, 0, -719}, 0, {624, -16}, {255, 255, 255, 255} }},
	{{ {460, 0, 320}, 0, {1000, 1008}, {77, 77, 77, 255} }},
};

Gfx flag_white_000_offset_004_mesh_layer_1_tri_0[] = {
	gsSPVertex(flag_white_000_offset_004_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSPEndDisplayList(),
};

Vtx flag_white_000_offset_005_mesh_layer_1_vtx_0[4] = {
	{{ {344, 0, -719}, 0, {1008, -16}, {255, 255, 255, 255} }},
	{{ {0, 0, -719}, 0, {1000, -16}, {255, 255, 255, 255} }},
	{{ {0, 0, 320}, 0, {1000, 1008}, {77, 77, 77, 255} }},
	{{ {344, 0, 320}, 0, {1008, 1008}, {77, 77, 77, 255} }},
};

Gfx flag_white_000_offset_005_mesh_layer_1_tri_0[] = {
	gsSPVertex(flag_white_000_offset_005_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
	gsSPEndDisplayList(),
};

Vtx flag_white_000_offset_006_mesh_layer_1_vtx_0[4] = {
	{{ {0, 0, 320}, 0, {1000, 1008}, {77, 77, 77, 255} }},
	{{ {288, 0, -719}, 0, {1008, -16}, {255, 255, 255, 255} }},
	{{ {0, 0, -719}, 0, {1000, -16}, {255, 255, 255, 255} }},
	{{ {288, 0, 320}, 0, {1008, 1008}, {77, 77, 77, 255} }},
};

Gfx flag_white_000_offset_006_mesh_layer_1_tri_0[] = {
	gsSPVertex(flag_white_000_offset_006_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSPEndDisplayList(),
};

Vtx flag_white_000_offset_007_mesh_layer_1_vtx_0[4] = {
	{{ {0, 0, 320}, 0, {880, 1008}, {77, 77, 77, 255} }},
	{{ {288, 0, 320}, 0, {1008, 1008}, {77, 77, 77, 255} }},
	{{ {288, 0, -719}, 0, {1008, -16}, {255, 255, 255, 255} }},
	{{ {0, 0, -719}, 0, {880, -16}, {255, 255, 255, 255} }},
};

Gfx flag_white_000_offset_007_mesh_layer_1_tri_0[] = {
	gsSPVertex(flag_white_000_offset_007_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};


Gfx mat_flag_white_post2[] = {
	gsSPSetLights1(flag_white_post2_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_revert_flag_white_post2[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_flag_white_post[] = {
	gsSPSetLights1(flag_white_post_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_revert_flag_white_post[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_flag_white_WhiteFlag[] = {
	gsSPGeometryMode(G_CULL_BACK | G_LIGHTING, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, ENVIRONMENT, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, ENVIRONMENT, 0, SHADE, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 1, flag_white_white_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_flag_white_WhiteFlag[] = {
	gsSPGeometryMode(0, G_CULL_BACK | G_LIGHTING),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx flag_white_000_offset_001_mesh_layer_1[] = {
	gsSPDisplayList(mat_flag_white_post2),
	gsSPDisplayList(flag_white_000_offset_001_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_flag_white_post2),
	gsSPDisplayList(mat_flag_white_post),
	gsSPDisplayList(flag_white_000_offset_001_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_flag_white_post),
	gsSPEndDisplayList(),
};

Gfx flag_white_000_offset_003_mesh_layer_1[] = {
	gsSPDisplayList(mat_flag_white_WhiteFlag),
	gsSPDisplayList(flag_white_000_offset_003_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_flag_white_WhiteFlag),
	gsSPEndDisplayList(),
};

Gfx flag_white_000_offset_004_mesh_layer_1[] = {
	gsSPDisplayList(mat_flag_white_WhiteFlag),
	gsSPDisplayList(flag_white_000_offset_004_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_flag_white_WhiteFlag),
	gsSPEndDisplayList(),
};

Gfx flag_white_000_offset_005_mesh_layer_1[] = {
	gsSPDisplayList(mat_flag_white_WhiteFlag),
	gsSPDisplayList(flag_white_000_offset_005_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_flag_white_WhiteFlag),
	gsSPEndDisplayList(),
};

Gfx flag_white_000_offset_006_mesh_layer_1[] = {
	gsSPDisplayList(mat_flag_white_WhiteFlag),
	gsSPDisplayList(flag_white_000_offset_006_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_flag_white_WhiteFlag),
	gsSPEndDisplayList(),
};

Gfx flag_white_000_offset_007_mesh_layer_1[] = {
	gsSPDisplayList(mat_flag_white_WhiteFlag),
	gsSPDisplayList(flag_white_000_offset_007_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_flag_white_WhiteFlag),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

