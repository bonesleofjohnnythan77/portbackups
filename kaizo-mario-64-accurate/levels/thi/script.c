#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/thi/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_thi_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,6656,62336,6964,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,870,64971,2828,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_metal_cap,0,61136,63336,58636,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,60336,63291,64066,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,65470,63899,60592,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,60336,63291,62566,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,60336,65063,70,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,5711,63859,62592,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,60336,62786,3500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,65011,63036,6650,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,270,6875,62977,1253,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bouncing_fireball_copy,20,410,65111,928,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,270,7201,62977,1498,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_koopa_shell,0,60036,62886,7750,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,5300,62236,60836,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,61186,400,63411,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,60625,65141,64103,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,199,2233,433,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,4800,62236,60836,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,63736,2202,65214,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,2600,3226,63136,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bouncing_fireball,0,870,64971,2428,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,63625,0,59714,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,576,65282,2642,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_vertical,0,65016,62411,7100,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_no_coins,0,5550,62251,60836,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,58936,64536,64886,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,58936,63836,150,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,59536,63836,1925,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,60336,65463,1570,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,59536,62567,7250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,4300,62236,60836,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,4550,62246,60586,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_star_2,0,2600,3500,63136,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,5050,62246,60586,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,5500,62246,60586,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_no_coins,0,60836,62566,6450,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_floor_switch_hidden_objects,180,61136,62977,60136,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,60336,300,3070,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_no_coins,0,4550,62251,60836,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_thi_2[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,65486,2000,59936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_no_coins,0,450,2000,58386,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_no_coins,0,64986,2000,58386,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,450,3800,61536,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_no_coins,0,450,2000,59386,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,65486,2010,59636,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_floor_switch_hidden_objects,180,450,4107,61536,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_no_coins,0,64986,1990,59386,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_no_coins,0,65486,2010,58386,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_no_coins,0,65486,1990,59386,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_no_coins,0,64986,2000,58886,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_no_coins,0,65486,2000,58886,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,68,4580,64158,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,488,4383,64108,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,188,4303,63831,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,40,3775,63216,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,65278,4503,63393,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,65431,3723,62903,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,65396,3833,62216,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,253,3753,62146,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,523,3653,63016,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,65446,3530,63815,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,65396,4153,62416,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,643,4055,62616,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,230,4015,62793,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_no_coins,0,450,2000,58886,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,825,3963,62013,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,350,4163,63143,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,550,4200,63536,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,203,4403,63416,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,350,4735,62108,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,226,3288,63212,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,29,666,148,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,621,5310,63996,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_star_3,0,621,5310,63996,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,0,920,64616,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,813,4918,62620,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,765,4335,62987,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,892,3660,62717,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,889,4013,63373,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,912,4355,63776,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,831,4516,64255,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,374,4741,63792,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,698,3715,63796,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,393,3781,64221,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,462,5035,64244,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,65435,4775,62472,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,21,4903,63410,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,379,4746,62970,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,65496,4550,62924,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,445,4476,62423,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,383,3575,63696,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,11,4316,62129,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,470,3617,62268,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,1980,64725,2100,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,140,65383,360,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,64206,64636,1945,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,0,1150,65086,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,64144,92,64903,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,1348,747,94,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,1733,65478,1718,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,63403,105,296,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,65376,65399,666,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,63843,65118,1746,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_ten_coins,0,0,1500,65086,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,350,3800,62536,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,65313,4178,64136,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_ten_coins,0,0,1500,65086,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_thi_3[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,1931,1122,1151,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,1915,883,168,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,1038,1112,63608,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,65298,1122,63534,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,64883,552,64353,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,63698,596,766,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,138,978,1958,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,63837,519,65432,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba_triplet_spawner,0,65093,768,65146,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_blue_coin_switch,0,64041,1434,1595,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,64996,1500,1240,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,64696,1500,1440,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,45,64336,2200,64336,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,45,1200,2200,1200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,65298,1456,677,0),
MACRO_OBJECT_END(),
};

static const LevelScript script_func_local_1[] = {
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,    /*pos*/     0, -700, -4500, /*angle*/ 0, 0, 0, /*behParam*/ 0x03000000, /*beh*/ bhvHiddenStar,          /*acts*/ ALL_ACTS),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,             /*pos*/ -1800,   800, -1500, /*angle*/ 0,   0, 0, /*behParam*/ 0x04000000, /*beh*/ bhvHiddenRedCoinStar, /*acts*/ ALL_ACTS),
    OBJECT(/*model*/ MODEL_WIGGLER_HEAD,     /*pos*/    17,  1843,   -62, /*angle*/ 0,   0, 0, /*behParam*/ 0x05000000, /*beh*/ bhvWigglerHead),
    RETURN(),
};

static const LevelScript script_func_local_4[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_KOOPA_WITH_SHELL, /*pos*/ -1900,  -511,  2400, /*angle*/ 0, -30, 0, /*behParam*/ 0x02030000, /*beh*/ bhvKoopa,             /*acts*/ ACT_3),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,             /*pos*/  7400, -1537, -6300, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvKoopaRaceEndpoint, /*acts*/ ACT_3),
    OBJECT(/*model*/ MODEL_NONE,             /*pos*/ -6556, -2969,  6565, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvGoombaTripletSpawner),
    OBJECT(/*model*/ MODEL_GOOMBA,           /*pos*/  6517, -2559,  4327, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvGoomba),
    OBJECT(/*model*/ MODEL_PIRANHA_PLANT,    /*pos*/ -6336, -2047, -3861, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvFirePiranhaPlant),
    OBJECT(/*model*/ MODEL_PIRANHA_PLANT,    /*pos*/ -5740, -2047, -6578, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvFirePiranhaPlant),
    OBJECT(/*model*/ MODEL_PIRANHA_PLANT,    /*pos*/ -6481, -2047, -5998, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvFirePiranhaPlant),
    OBJECT(/*model*/ MODEL_PIRANHA_PLANT,    /*pos*/ -5577, -2047, -4961, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvFirePiranhaPlant),
    OBJECT(/*model*/ MODEL_PIRANHA_PLANT,    /*pos*/ -6865, -2047, -4568, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvFirePiranhaPlant),
    OBJECT(/*model*/ MODEL_NONE,             /*pos*/ -4413,   204, -2140, /*angle*/ 0,   0, 0, /*behParam*/ 0x00030000, /*beh*/ bhvThiBowlingBallSpawner),
    OBJECT(/*model*/ MODEL_BUBBA,            /*pos*/ -6241, -3300,  -716, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBubba),
    OBJECT(/*model*/ MODEL_BUBBA,            /*pos*/  1624, -3300,  8142, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBubba),
    RETURN(),
};

static const LevelScript script_func_local_5[] = {
    OBJECT(/*model*/ MODEL_THI_HUGE_ISLAND_TOP, /*pos*/     0, 3891, -1533, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvThiHugeIslandTop),
    RETURN(),
};

static const LevelScript script_func_local_6[] = {
    OBJECT(/*model*/ MODEL_THI_TINY_ISLAND_TOP, /*pos*/     0, 1167,  -460, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvThiTinyIslandTop),
    OBJECT(/*model*/ MODEL_NONE,                /*pos*/ -1382,   80,  -649, /*angle*/ 0, 0, 0, /*behParam*/ 0x00040000, /*beh*/ bhvThiBowlingBallSpawner),
    RETURN(),
};

static const LevelScript script_func_local_7[] = {
    OBJECT(/*model*/ MODEL_THI_WARP_PIPE, /*pos*/  6656, -1536, -5632, /*angle*/ 0, 0, 0, /*behParam*/ 0x00320000, /*beh*/ bhvWarpPipe),
    OBJECT(/*model*/ MODEL_THI_WARP_PIPE, /*pos*/ -5888, -2048, -5888, /*angle*/ 0, 0, 0, /*behParam*/ 0x00330000, /*beh*/ bhvWarpPipe),
    OBJECT(/*model*/ MODEL_THI_WARP_PIPE, /*pos*/ -3072,   512, -3840, /*angle*/ 0, 0, 0, /*behParam*/ 0x00340000, /*beh*/ bhvWarpPipe),
    WARP_NODE(/*id*/ 0x32, /*destLevel*/ LEVEL_THI, /*destArea*/ 0x02, /*destNode*/ 0x32, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x33, /*destLevel*/ LEVEL_THI, /*destArea*/ 0x02, /*destNode*/ 0x33, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x34, /*destLevel*/ LEVEL_THI, /*destArea*/ 0x02, /*destNode*/ 0x34, /*flags*/ WARP_NO_CHECKPOINT),
    RETURN(),
};

static const LevelScript script_func_local_8[] = {
    OBJECT(/*model*/ MODEL_THI_WARP_PIPE, /*pos*/  1997, -461, -1690, /*angle*/ 0, 0, 0, /*behParam*/ 0x00320000, /*beh*/ bhvWarpPipe),
    OBJECT(/*model*/ MODEL_THI_WARP_PIPE, /*pos*/ -1766, -614, -1766, /*angle*/ 0, 0, 0, /*behParam*/ 0x00330000, /*beh*/ bhvWarpPipe),
    OBJECT(/*model*/ MODEL_THI_WARP_PIPE, /*pos*/  -922,  154, -1152, /*angle*/ 0, 0, 0, /*behParam*/ 0x00340000, /*beh*/ bhvWarpPipe),
    WARP_NODE(/*id*/ 0x32, /*destLevel*/ LEVEL_THI, /*destArea*/ 0x01, /*destNode*/ 0x32, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x33, /*destLevel*/ LEVEL_THI, /*destArea*/ 0x01, /*destNode*/ 0x33, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x34, /*destLevel*/ LEVEL_THI, /*destArea*/ 0x01, /*destNode*/ 0x34, /*flags*/ WARP_NO_CHECKPOINT),
    RETURN(),
};

const LevelScript level_thi_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _thi_segment_7SegmentRomStart, _thi_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _grass_mio0SegmentRomStart, _grass_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group11_mio0SegmentRomStart, _group11_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group11_geoSegmentRomStart,  _group11_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group14_mio0SegmentRomStart, _group14_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group14_geoSegmentRomStart,  _group14_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_12),
    JUMP_LINK(script_func_global_15),
    LOAD_MODEL_FROM_GEO(MODEL_THI_BUBBLY_TREE,     bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,   thi_geo_0005F0),
    LOAD_MODEL_FROM_GEO(MODEL_THI_WARP_PIPE,       warp_pipe_geo),
    LOAD_MODEL_FROM_GEO(MODEL_THI_HUGE_ISLAND_TOP, thi_geo_0005B0),
    LOAD_MODEL_FROM_GEO(MODEL_THI_TINY_ISLAND_TOP, thi_geo_0005C8),

    AREA(/*index*/ 1, thi_geo_000608),
MACRO_OBJECTS(local_macro_objects_thi_1),
WARP_NODE(52,13,2,52,0),
WARP_NODE(51,13,2,51,0),
WARP_NODE(50,13,2,50,0),
WARP_NODE(241,6,2,105,0),
WARP_NODE(240,6,2,55,0),
WARP_NODE(13,13,3,11,0),
WARP_NODE(12,13,3,10,0),
WARP_NODE(11,13,1,11,0),
WARP_NODE(10,13,1,10,0),
OBJECT_WITH_ACTS(217,-5800,-3200,3150,45,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(144,-4900,-2850,6450,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(0,-4413,204,-2140,0,0,0,0x30000, bhvThiBowlingBallSpawner
,31),
OBJECT_WITH_ACTS(100,-525,-2559,6650,0,0,0,0x10000, bhvFirePiranhaPlant
,31),
OBJECT_WITH_ACTS(100,7151,-1535,-3129,0,0,0,0x10000, bhvFirePiranhaPlant
,31),
OBJECT_WITH_ACTS(100,4797,-1535,3457,0,0,0,0x10000, bhvFirePiranhaPlant
,31),
OBJECT_WITH_ACTS(100,-1000,4081,-1533,0,0,0,0x10000, bhvFirePiranhaPlant
,31),
OBJECT_WITH_ACTS(100,-6336,-2047,-3861,0,0,0,0x10000, bhvFirePiranhaPlant
,31),
OBJECT_WITH_ACTS(89,-6517,-3400,-500,0,180,0,0x0, bhvBubba
,31),
OBJECT_WITH_ACTS(144,-6000,-2700,7250,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(201,5550,-3100,-4700,0,0,0,0x0, bhvCannonClosed
,63),
OBJECT_WITH_ACTS(195,5113,-511,1828,0,0,0,0x0, bhvBobombBuddyOpensCannon
,63),
OBJECT_WITH_ACTS(54,0,3891,-1533,0,0,0,0x0, bhvThiHugeIslandTop
,31),
OBJECT_WITH_ACTS(129,5050,-3285,-4700,0,0,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(22,5550,-3300,-4700,0,270,0,0x330000, bhvWarpPipe
,63),
OBJECT_WITH_ACTS(217,5500,-2500,-4950,0,0,0,0x0, bhvPushableMetalBox
,255),
OBJECT_WITH_ACTS(0,0,3170,-1570,0,0,0,0xa0d0000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,410,-512,717,0,0,0,0x50c0000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,410,-512,922,0,0,0,0xb0000, bhvInstantActiveWarp
,31),
OBJECT_WITH_ACTS(0,-6500,-2700,-1400,0,0,0,0xa0000, bhvSpinAirborneWarp
,31),
        TERRAIN(/*terrainData*/ thi_seg7_area_1_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_LEVEL_GRASS),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_GRASS),
    END_AREA(),

    AREA(/*index*/ 2, thi_geo_0006D4),
MACRO_OBJECTS(local_macro_objects_thi_2),
WARP_NODE(52,13,1,52,0),
WARP_NODE(51,13,1,51,0),
WARP_NODE(50,13,1,50,0),
WARP_NODE(241,6,2,101,0),
WARP_NODE(240,6,2,51,0),
WARP_NODE(12,13,2,11,0),
WARP_NODE(11,13,2,12,0),
WARP_NODE(10,13,2,10,0),
OBJECT_WITH_ACTS(0,-1382,80,-649,0,0,0,0x40000, bhvThiBowlingBallSpawner
,31),
OBJECT_WITH_ACTS(55,0,1167,-460,0,0,0,0x0, bhvThiTinyIslandTop
,31),
OBJECT_WITH_ACTS(0,0,-650,-4500,0,0,0,0x3000000, bhvHiddenStar
,63),
OBJECT_WITH_ACTS(0,446,4687,-1672,0,180,0,0x0, bhvFlamethrower
,63),
OBJECT_WITH_ACTS(22,-50,2307,-5600,0,180,0,0x330000, bhvWarpPipe
,63),
OBJECT_WITH_ACTS(0,110,4131,-2265,0,180,0,0x0, bhvFlamethrower
,63),
OBJECT_WITH_ACTS(201,450,-500,-6650,0,0,0,0x0, bhvCannonClosed
,31),
OBJECT_WITH_ACTS(217,1920,-2000,-500,45,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(0,1920,-1250,-500,0,0,0,0xa0000, bhvSpinAirborneWarp
,31),
        TERRAIN(/*terrainData*/ thi_seg7_area_2_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_LEVEL_GRASS),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_GRASS),
    END_AREA(),

    AREA(/*index*/ 3, thi_geo_00079C),
MACRO_OBJECTS(local_macro_objects_thi_3),
WARP_NODE(241,6,2,105,0),
WARP_NODE(240,6,2,55,0),
WARP_NODE(12,13,1,11,0),
WARP_NODE(11,13,3,11,0),
WARP_NODE(10,13,3,10,0),
OBJECT_WITH_ACTS(87,17,1843,-62,0,0,0,0x5000000, bhvWigglerHead
,31),
OBJECT_WITH_ACTS(0,-1800,800,-1500,0,0,0,0x4000000, bhvHiddenRedCoinStar
,63),
OBJECT_WITH_ACTS(0,512,1024,2355,0,0,0,0x50c0000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,0,3277,0,0,0,0,0xb0000, bhvAirborneWarp
,31),
OBJECT_WITH_ACTS(0,512,1024,2150,0,180,0,0xa0000, bhvInstantActiveWarp
,31),
        TERRAIN(/*terrainData*/ thi_seg7_area_3_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0004, /*seq*/ SEQ_LEVEL_UNDERGROUND),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_GRASS),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 149, /*pos*/ -7372, -2969, 7373),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
