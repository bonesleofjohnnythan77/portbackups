Lights1 lethalramp_f3dlite_material_003_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Lights1 lethalramp_f3dlite_material_004_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Vtx lethalramp_lethalramp_mesh_layer_1_vtx_0[12] = {
	{{ {-511, 154, 128}, 0, {0, 224}, {0, 127, 0, 255} }},
	{{ {-511, 154, 512}, 0, {0, 990}, {0, 127, 0, 255} }},
	{{ {512, 154, 512}, 0, {990, 990}, {0, 127, 0, 255} }},
	{{ {512, 154, 128}, 0, {990, 224}, {0, 127, 0, 255} }},
	{{ {-511, 308, -127}, 0, {-30, 732}, {0, 109, 66, 255} }},
	{{ {-511, 154, 128}, 0, {0, 1232}, {0, 109, 66, 255} }},
	{{ {512, 154, 128}, 0, {988, 1246}, {0, 109, 66, 255} }},
	{{ {512, 308, -127}, 0, {992, 746}, {0, 109, 66, 255} }},
	{{ {-511, 308, -511}, 0, {0, -1054}, {0, 127, 0, 255} }},
	{{ {-511, 308, -127}, 0, {0, -288}, {0, 127, 0, 255} }},
	{{ {512, 308, -127}, 0, {990, -288}, {0, 127, 0, 255} }},
	{{ {512, 308, -511}, 0, {990, -1054}, {0, 127, 0, 255} }},
};

Gfx lethalramp_lethalramp_mesh_layer_1_tri_0[] = {
	gsSPVertex(lethalramp_lethalramp_mesh_layer_1_vtx_0 + 0, 12, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSPEndDisplayList(),
};

Vtx lethalramp_lethalramp_mesh_layer_1_vtx_1[20] = {
	{{ {-511, 0, -511}, 0, {4056, 990}, {0, 0, 129, 255} }},
	{{ {512, 308, -511}, 0, {650, 0}, {0, 0, 129, 255} }},
	{{ {512, 0, -511}, 0, {650, 990}, {0, 0, 129, 255} }},
	{{ {-511, 308, -511}, 0, {4056, 0}, {0, 0, 129, 255} }},
	{{ {512, 0, -511}, 0, {2352, 990}, {127, 0, 0, 255} }},
	{{ {512, 308, -511}, 0, {2352, 0}, {127, 0, 0, 255} }},
	{{ {512, 308, -127}, 0, {1076, 0}, {127, 0, 0, 255} }},
	{{ {512, 154, 128}, 0, {224, 480}, {127, 0, 0, 255} }},
	{{ {512, 0, 512}, 0, {-1052, 990}, {127, 0, 0, 255} }},
	{{ {512, 154, 512}, 0, {-1052, 480}, {127, 0, 0, 255} }},
	{{ {-511, 0, 512}, 0, {3374, 990}, {129, 0, 0, 255} }},
	{{ {-511, 154, 512}, 0, {3374, 480}, {129, 0, 0, 255} }},
	{{ {-511, 154, 128}, 0, {2098, 480}, {129, 0, 0, 255} }},
	{{ {-511, 0, -511}, 0, {0, 990}, {129, 0, 0, 255} }},
	{{ {-511, 308, -127}, 0, {1246, 0}, {129, 0, 0, 255} }},
	{{ {-511, 308, -511}, 0, {0, 0}, {129, 0, 0, 255} }},
	{{ {512, 0, 512}, 0, {3374, 990}, {0, 0, 127, 255} }},
	{{ {-511, 154, 512}, 0, {0, 478}, {0, 0, 127, 255} }},
	{{ {-511, 0, 512}, 0, {0, 990}, {0, 0, 127, 255} }},
	{{ {512, 154, 512}, 0, {3374, 478}, {0, 0, 127, 255} }},
};

Gfx lethalramp_lethalramp_mesh_layer_1_tri_1[] = {
	gsSPVertex(lethalramp_lethalramp_mesh_layer_1_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(4, 7, 8, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(10, 12, 13, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(14, 15, 13, 0),
	gsSPVertex(lethalramp_lethalramp_mesh_layer_1_vtx_1 + 16, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSPEndDisplayList(),
};


Gfx mat_lethalramp_f3dlite_material_003[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(lethalramp_f3dlite_material_003_lights),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, lethalramp__0900B800_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_lethalramp_f3dlite_material_004[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(lethalramp_f3dlite_material_004_lights),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, lethalramp__09007800_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx lethalramp_lethalramp_mesh_layer_1[] = {
	gsSPDisplayList(mat_lethalramp_f3dlite_material_003),
	gsSPDisplayList(lethalramp_lethalramp_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_lethalramp_f3dlite_material_004),
	gsSPDisplayList(lethalramp_lethalramp_mesh_layer_1_tri_1),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

