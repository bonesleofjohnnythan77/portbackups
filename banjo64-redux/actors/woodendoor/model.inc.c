Gfx woodendoor_castle_door_0_star_geo_0x300c980_custom_ci4_ci4_aligner[] = {gsSPEndDisplayList()};
u8 woodendoor_castle_door_0_star_geo_0x300c980_custom_ci4_ci4[] = {
	#include "actors/woodendoor/castle_door_0_star_geo_0x300c980_custom.ci4.inc.c"
};

Gfx woodendoor_castle_door_0_star_geo_0x300c980_custom_ci4_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 woodendoor_castle_door_0_star_geo_0x300c980_custom_ci4_pal_rgba16[] = {
	#include "actors/woodendoor/castle_door_0_star_geo_0x300c980_custom.ci4.rgba16.pal"
};

Vtx woodendoor_000_displaylist_mesh_layer_1_vtx_0[8] = {
	{{ {0, 112, 0}, 0, {992, 2974}, {255, 255, 255, 255} }},
	{{ {0, 240, 0}, 0, {992, 4064}, {140, 140, 140, 255} }},
	{{ {-108, 199, 0}, 0, {258, 3714}, {221, 221, 221, 255} }},
	{{ {108, 199, 0}, 0, {1725, 3714}, {173, 173, 173, 255} }},
	{{ {151, 96, 0}, 0, {2016, 2835}, {255, 255, 255, 255} }},
	{{ {125, 0, 0}, 0, {1842, 2016}, {255, 255, 255, 255} }},
	{{ {-125, 0, 0}, 0, {142, 2016}, {255, 255, 255, 255} }},
	{{ {-151, 96, 0}, 0, {-31, 2835}, {255, 255, 255, 255} }},
};

Gfx woodendoor_000_displaylist_mesh_layer_1_tri_0[] = {
	gsSPVertex(woodendoor_000_displaylist_mesh_layer_1_vtx_0 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
	gsSP2Triangles(3, 0, 4, 0, 0, 5, 4, 0),
	gsSP2Triangles(6, 5, 0, 0, 6, 0, 7, 0),
	gsSP1Triangle(0, 2, 7, 0),
	gsSPEndDisplayList(),
};


Gfx mat_woodendoor_woodoorbo[] = {
	gsSPGeometryMode(G_LIGHTING, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, ENVIRONMENT, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, ENVIRONMENT, 0, SHADE, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, woodendoor_castle_door_0_star_geo_0x300c980_custom_ci4_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 15),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, woodendoor_castle_door_0_star_geo_0x300c980_custom_ci4_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 512),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_woodendoor_woodoorbo[] = {
	gsSPGeometryMode(0, G_LIGHTING),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx woodendoor_000_displaylist_mesh_layer_1[] = {
	gsSPDisplayList(mat_woodendoor_woodoorbo),
	gsSPDisplayList(woodendoor_000_displaylist_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_woodendoor_woodoorbo),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

