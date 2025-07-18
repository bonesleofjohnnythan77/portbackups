Lights1 warp_pad_mariopad1_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 warp_pad_mariopad2_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 warp_pad_mariopad3_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 warp_pad_mariopad4_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Gfx warp_pad_castle_door_geo_0x300b510_custom_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 warp_pad_castle_door_geo_0x300b510_custom_rgba16_rgba16[] = {
	#include "actors/warp_pad/castle_door_geo_0x300b510_custom.rgba16.inc.c"
};

Gfx warp_pad_castle_door_geo_0x300ad10_custom_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 warp_pad_castle_door_geo_0x300ad10_custom_rgba16_rgba16[] = {
	#include "actors/warp_pad/castle_door_geo_0x300ad10_custom.rgba16.inc.c"
};

Gfx warp_pad_castle_door_geo_0x300a510_custom_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 warp_pad_castle_door_geo_0x300a510_custom_rgba16_rgba16[] = {
	#include "actors/warp_pad/castle_door_geo_0x300a510_custom.rgba16.inc.c"
};

Gfx warp_pad_castle_door_geo_0x3009d10_custom_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 warp_pad_castle_door_geo_0x3009d10_custom_rgba16_rgba16[] = {
	#include "actors/warp_pad/castle_door_geo_0x3009d10_custom.rgba16.inc.c"
};

Gfx warp_pad_castle_door_geo_0x300bd10_custom_rgba16_ci4_aligner[] = {gsSPEndDisplayList()};
u8 warp_pad_castle_door_geo_0x300bd10_custom_rgba16_ci4[] = {
	#include "actors/warp_pad/castle_door_geo_0x300bd10_custom.rgba16.ci4.inc.c"
};

Gfx warp_pad_castle_door_geo_0x300bd10_custom_rgba16_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 warp_pad_castle_door_geo_0x300bd10_custom_rgba16_pal_rgba16[] = {
	#include "actors/warp_pad/castle_door_geo_0x300bd10_custom.rgba16.pal"
};

Vtx warp_pad_skinned_001_mesh_layer_1_vtx_cull[8] = {
	{{ {-127, 1, 127}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-127, 19, 127}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-127, 19, -127}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-127, 1, -127}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {127, 1, 127}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {127, 19, 127}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {127, 19, -127}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {127, 1, -127}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx warp_pad_skinned_001_mesh_layer_1_vtx_0[4] = {
	{{ {-73, 19, -73}, 0, {251, 285}, {222, 117, 222, 255} }},
	{{ {-104, 19, 0}, 0, {-48, 1008}, {207, 117, 0, 255} }},
	{{ {0, 19, 0}, 0, {976, 1008}, {0, 127, 1, 255} }},
	{{ {0, 19, -104}, 0, {976, -16}, {0, 117, 207, 255} }},
};

Gfx warp_pad_skinned_001_mesh_layer_1_tri_0[] = {
	gsSPVertex(warp_pad_skinned_001_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx warp_pad_skinned_001_mesh_layer_1_vtx_1[4] = {
	{{ {0, 19, 0}, 0, {-48, 1008}, {0, 127, 1, 255} }},
	{{ {73, 19, -73}, 0, {675, 285}, {34, 117, 222, 255} }},
	{{ {0, 19, -104}, 0, {-48, -16}, {0, 117, 207, 255} }},
	{{ {104, 19, 0}, 0, {976, 1008}, {49, 117, 1, 255} }},
};

Gfx warp_pad_skinned_001_mesh_layer_1_tri_1[] = {
	gsSPVertex(warp_pad_skinned_001_mesh_layer_1_vtx_1 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSPEndDisplayList(),
};

Vtx warp_pad_skinned_001_mesh_layer_1_vtx_2[4] = {
	{{ {104, 19, 0}, 0, {976, -16}, {49, 117, 1, 255} }},
	{{ {0, 19, 0}, 0, {-48, -16}, {0, 127, 1, 255} }},
	{{ {73, 18, 73}, 0, {675, 709}, {33, 118, 34, 255} }},
	{{ {0, 18, 104}, 0, {-48, 1008}, {0, 118, 47, 255} }},
};

Gfx warp_pad_skinned_001_mesh_layer_1_tri_2[] = {
	gsSPVertex(warp_pad_skinned_001_mesh_layer_1_vtx_2 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
	gsSPEndDisplayList(),
};

Vtx warp_pad_skinned_001_mesh_layer_1_vtx_3[4] = {
	{{ {0, 18, 104}, 0, {976, 1008}, {0, 118, 47, 255} }},
	{{ {0, 19, 0}, 0, {976, -16}, {0, 127, 1, 255} }},
	{{ {-73, 18, 73}, 0, {251, 709}, {223, 118, 34, 255} }},
	{{ {-104, 19, 0}, 0, {-48, -16}, {207, 117, 0, 255} }},
};

Gfx warp_pad_skinned_001_mesh_layer_1_tri_3[] = {
	gsSPVertex(warp_pad_skinned_001_mesh_layer_1_vtx_3 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSPEndDisplayList(),
};

Vtx warp_pad_skinned_001_mesh_layer_1_vtx_4[20] = {
	{{ {0, 1, -127}, 0, {3792, -268}, {136, 136, 136, 255} }},
	{{ {0, 19, -104}, 0, {3792, -12}, {255, 255, 255, 255} }},
	{{ {90, 1, -90}, 0, {3152, -268}, {136, 136, 136, 255} }},
	{{ {73, 19, -73}, 0, {3152, -12}, {255, 255, 255, 255} }},
	{{ {104, 19, 0}, 0, {2512, -12}, {255, 255, 255, 255} }},
	{{ {127, 1, 0}, 0, {2512, -268}, {136, 136, 136, 255} }},
	{{ {73, 18, 73}, 0, {1872, -12}, {255, 255, 255, 255} }},
	{{ {90, 1, 90}, 0, {1872, -268}, {136, 136, 136, 255} }},
	{{ {0, 18, 104}, 0, {1231, -12}, {255, 255, 255, 255} }},
	{{ {0, 1, 127}, 0, {1231, -268}, {136, 136, 136, 255} }},
	{{ {-90, 1, 90}, 0, {591, -268}, {136, 136, 136, 255} }},
	{{ {-73, 18, 73}, 0, {591, -12}, {255, 255, 255, 255} }},
	{{ {-104, 19, 0}, 0, {-48, -12}, {255, 255, 255, 255} }},
	{{ {-127, 1, 0}, 0, {-48, -268}, {136, 136, 136, 255} }},
	{{ {-90, 1, -90}, 0, {336, -268}, {136, 136, 136, 255} }},
	{{ {0, 19, -104}, 0, {-304, -12}, {255, 255, 255, 255} }},
	{{ {0, 1, -127}, 0, {-304, -268}, {136, 136, 136, 255} }},
	{{ {-73, 19, -73}, 0, {336, -12}, {255, 255, 255, 255} }},
	{{ {-104, 19, 0}, 0, {975, -12}, {255, 255, 255, 255} }},
	{{ {-127, 1, 0}, 0, {975, -268}, {136, 136, 136, 255} }},
};

Gfx warp_pad_skinned_001_mesh_layer_1_tri_4[] = {
	gsSPVertex(warp_pad_skinned_001_mesh_layer_1_vtx_4 + 0, 20, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(3, 4, 2, 0, 2, 4, 5, 0),
	gsSP2Triangles(4, 6, 5, 0, 5, 6, 7, 0),
	gsSP2Triangles(6, 8, 7, 0, 7, 8, 9, 0),
	gsSP2Triangles(9, 8, 10, 0, 8, 11, 10, 0),
	gsSP2Triangles(11, 12, 10, 0, 10, 12, 13, 0),
	gsSP2Triangles(14, 15, 16, 0, 17, 15, 14, 0),
	gsSP2Triangles(18, 17, 14, 0, 19, 18, 14, 0),
	gsSPEndDisplayList(),
};


Gfx mat_warp_pad_mariopad1[] = {
	gsSPSetLights1(warp_pad_mariopad1_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, warp_pad_castle_door_geo_0x300b510_custom_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_warp_pad_mariopad1[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_warp_pad_mariopad2[] = {
	gsSPSetLights1(warp_pad_mariopad2_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, warp_pad_castle_door_geo_0x300ad10_custom_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_warp_pad_mariopad2[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_warp_pad_mariopad3[] = {
	gsSPSetLights1(warp_pad_mariopad3_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, warp_pad_castle_door_geo_0x300a510_custom_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_warp_pad_mariopad3[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_warp_pad_mariopad4[] = {
	gsSPSetLights1(warp_pad_mariopad4_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, warp_pad_castle_door_geo_0x3009d10_custom_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_warp_pad_mariopad4[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_warp_pad_mariopad_side[] = {
	gsSPGeometryMode(G_LIGHTING, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, ENVIRONMENT, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, ENVIRONMENT, 0, SHADE, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, warp_pad_castle_door_geo_0x300bd10_custom_rgba16_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 15),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, warp_pad_castle_door_geo_0x300bd10_custom_rgba16_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 127, 1024),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 2, 0, 0, 0, G_TX_WRAP | G_TX_MIRROR, 4, 15, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 60),
	gsSPEndDisplayList(),
};

Gfx mat_revert_warp_pad_mariopad_side[] = {
	gsSPGeometryMode(0, G_LIGHTING),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx warp_pad_skinned_001_mesh_layer_1[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(warp_pad_skinned_001_mesh_layer_1_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_warp_pad_mariopad1),
	gsSPDisplayList(warp_pad_skinned_001_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_warp_pad_mariopad1),
	gsSPDisplayList(mat_warp_pad_mariopad2),
	gsSPDisplayList(warp_pad_skinned_001_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_warp_pad_mariopad2),
	gsSPDisplayList(mat_warp_pad_mariopad3),
	gsSPDisplayList(warp_pad_skinned_001_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_revert_warp_pad_mariopad3),
	gsSPDisplayList(mat_warp_pad_mariopad4),
	gsSPDisplayList(warp_pad_skinned_001_mesh_layer_1_tri_3),
	gsSPDisplayList(mat_revert_warp_pad_mariopad4),
	gsSPDisplayList(mat_warp_pad_mariopad_side),
	gsSPDisplayList(warp_pad_skinned_001_mesh_layer_1_tri_4),
	gsSPDisplayList(mat_revert_warp_pad_mariopad_side),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

