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
#include "levels/ttm/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_ttm_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,799,62866,3250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,45,62805,62558,3801,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,205,343,61204,5966,33),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,28,2020,880,1286,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,804,2000,4653,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,62802,2000,2550,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,61096,2000,65478,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,62544,2000,61603,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,312,2000,59547,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,5790,2000,59986,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,7135,2000,64857,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,180,64712,62079,61168,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba_triplet_spawner,0,1740,61300,5320,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,4540,60929,1060,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_wing_cap,39,1003,2650,806,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb,0,62029,63056,64490,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb,0,61998,63127,65475,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb,0,61998,63206,1046,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,82,65015,63489,3568,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb,0,2369,64085,61660,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb,0,707,64313,61690,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_metal_cap,39,565,2650,270,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba_triplet_spawner,0,64952,195,1476,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,1530,620,1670,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,3476,708,64640,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,124,2461,1461,1960,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,3245,62660,61488,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal_flying,329,63629,64675,62398,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_giant,28,1786,1082,1022,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_floor_switch_hidden_objects,239,64336,1543,460,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba_triplet_spawner,0,64936,1177,64196,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,31,64156,60588,3474,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,4904,2000,3111,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,315,5035,61238,62086,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,90,62604,63365,2930,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,28,1845,880,1379,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,2300,64152,3753,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,64758,1242,64474,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_jumping_box,0,4980,60929,2680,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_ttm_2[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,6100,4836,6981,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,6645,4800,7563,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,7845,4836,6327,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,7263,4836,5745,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up,0,6936,4800,6654,4),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_arrow,225,5743,4723,5472,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,225,6476,4781,5711,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up_sliding,0,1764,2943,1480,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,45,2972,3963,2690,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,45,27,2145,65246,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,225,5980,4781,6209,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_ttm_3[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,60122,3830,6571,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,59208,3349,5771,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,58694,2616,4400,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_star_3,45,1799,55736,61134,11),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_arrow,45,121,64666,59466,4),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,62697,9618,58681,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_moving_blue_coin,45,1799,64732,61134,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,63092,9618,58870,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,63492,9680,59136,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,63980,9850,59492,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_moving_blue_coin,45,1799,62732,61134,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_moving_blue_coin,45,1799,60732,61134,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_moving_blue_coin,45,1799,58732,61134,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,64918,59710,5745,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,65464,59613,6254,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,690,59509,6618,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,3490,59025,6727,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,4327,58687,5963,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,4036,58841,6400,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,4690,58381,3200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_arrow,90,63636,64874,58499,4),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,64078,62011,488,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_ttm_4[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,2128,1085,60736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,5878,2583,2430,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,6620,2348,1621,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,6642,1995,64870,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,63536,4551,2678,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,847,3575,2621,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,3631,2914,2819,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,6472,1613,62591,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,5272,1342,61282,0),
MACRO_OBJECT_END(),
};

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_TTM_ROLLING_LOG,    /*pos*/  4360, -1722,  4001, /*angle*/ 0,  48, 0, /*behParam*/ 0x00000000, /*beh*/ bhvTtmRollingLog),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_NONE,               /*pos*/ -1639,  1146, -1742, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvTtmBowlingBallSpawner),
    OBJECT(/*model*/ MODEL_NONE,               /*pos*/  3295, -3692,  2928, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvWaterfallSoundLoop),
    OBJECT(/*model*/ MODEL_NONE,               /*pos*/  2004, -1580,  1283, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvWaterfallSoundLoop),
    OBJECT(/*model*/ MODEL_DL_MONTY_MOLE_HOLE, /*pos*/ -2077, -1023, -1969, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMontyMoleHole),
    OBJECT(/*model*/ MODEL_DL_MONTY_MOLE_HOLE, /*pos*/ -2500, -1023, -2157, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMontyMoleHole),
    OBJECT(/*model*/ MODEL_DL_MONTY_MOLE_HOLE, /*pos*/ -2048, -1023, -2307, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMontyMoleHole),
    OBJECT(/*model*/ MODEL_DL_MONTY_MOLE_HOLE, /*pos*/ -2351, -1023, -2416, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMontyMoleHole),
    OBJECT(/*model*/ MODEL_DL_MONTY_MOLE_HOLE, /*pos*/ -2400, -2559, -2185, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMontyMoleHole),
    OBJECT(/*model*/ MODEL_DL_MONTY_MOLE_HOLE, /*pos*/ -1435, -2559, -3118, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMontyMoleHole),
    OBJECT(/*model*/ MODEL_DL_MONTY_MOLE_HOLE, /*pos*/ -1677, -2559, -3507, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMontyMoleHole),
    OBJECT(/*model*/ MODEL_DL_MONTY_MOLE_HOLE, /*pos*/ -1869, -2559, -2704, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMontyMoleHole),
    OBJECT(/*model*/ MODEL_DL_MONTY_MOLE_HOLE, /*pos*/ -2525, -2559, -2626, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMontyMoleHole),
    OBJECT(/*model*/ MODEL_MONTY_MOLE,         /*pos*/     0,     0,     0, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMontyMole),
    OBJECT(/*model*/ MODEL_MONTY_MOLE,         /*pos*/     0,     0,     0, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvMontyMole),
    OBJECT(/*model*/ MODEL_NONE,               /*pos*/  3625,   560,   165, /*angle*/ 0, 330, 0, /*behParam*/ 0x00000000, /*beh*/ bhvCloud),
    OBJECT_WITH_ACTS(/*model*/ MODEL_UKIKI,              /*pos*/   729,  2307,   335, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvUkiki,       /*acts*/ ACT_2),
    OBJECT_WITH_ACTS(/*model*/ MODEL_UKIKI,              /*pos*/  1992, -1548,  2944, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvUkiki,       /*acts*/ ALL_ACTS),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR,           /*pos*/  1200,  2600,   150, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStar,              /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_TTM_STAR_CAGE,  /*pos*/  2496,  1670,  1492, /*angle*/ 0, 0, 0, /*behParam*/ 0x01000000, /*beh*/ bhvUkikiCage,         /*acts*/ ACT_2),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,           /*pos*/ -3250, -2500, -3700, /*angle*/ 0, 0, 0, /*behParam*/ 0x02000000, /*beh*/ bhvHiddenRedCoinStar, /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR,           /*pos*/ -2900, -2700,  3650, /*angle*/ 0, 0, 0, /*behParam*/ 0x03000000, /*beh*/ bhvStar,              /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR,           /*pos*/  1800,  1200,  1050, /*angle*/ 0, 0, 0, /*behParam*/ 0x04000000, /*beh*/ bhvStar,              /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR,           /*pos*/  7300, -3100,  1300, /*angle*/ 0, 0, 0, /*behParam*/ 0x05000000, /*beh*/ bhvStar,              /*acts*/ ALL_ACTS),
    RETURN(),
};

static const LevelScript script_func_local_4[] = {
    OBJECT(/*model*/ MODEL_TTM_BLUE_SMILEY,   /*pos*/  4389,  3620,   624, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_TTM_YELLOW_SMILEY, /*pos*/ -1251,  2493,  2224, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_TTM_STAR_SMILEY,   /*pos*/ -2547,  1365,  -520, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_TTM_MOON_SMILEY,   /*pos*/  -324,   989, -4090, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    RETURN(),
};

static const LevelScript script_func_local_5[] = {
    OBJECT(/*model*/ MODEL_TTM_BLUE_SMILEY,   /*pos*/  7867,  -959, -6085, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_TTM_BLUE_SMILEY,   /*pos*/ -5241,  5329,  9466, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_TTM_YELLOW_SMILEY, /*pos*/ -1869, -5311,  7358, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_TTM_STAR_SMILEY,   /*pos*/ -9095,  4262,  5348, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_TTM_MOON_SMILEY,   /*pos*/ -8477,   730, -7122, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_TTM_MOON_SMILEY,   /*pos*/  6160, -6076,  7861, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    RETURN(),
};

static const LevelScript script_func_local_6[] = {
    OBJECT(/*model*/ MODEL_TTM_YELLOW_SMILEY, /*pos*/  5157,  1974, -8292, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_TTM_STAR_SMILEY,   /*pos*/ 11106,  2588,   381, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_TTM_MOON_SMILEY,   /*pos*/    37,  1974, -1124, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    RETURN(),
};

static const LevelScript script_func_local_7[] = {
    RETURN(),
};

const LevelScript level_ttm_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _ttm_segment_7SegmentRomStart, _ttm_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _mountain_mio0SegmentRomStart, _mountain_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group6_mio0SegmentRomStart, _group6_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group6_geoSegmentRomStart,  _group6_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_7),
    LOAD_MODEL_FROM_GEO(MODEL_TTM_SLIDE_EXIT_PODIUM, ttm_geo_000DF4),
    LOAD_MODEL_FROM_GEO(MODEL_TTM_ROLLING_LOG,       ttm_geo_000730),
    LOAD_MODEL_FROM_GEO(MODEL_TTM_STAR_CAGE,        ttm_geo_000710),
    LOAD_MODEL_FROM_GEO(MODEL_TTM_BLUE_SMILEY,       ttm_geo_000D14),
    LOAD_MODEL_FROM_GEO(MODEL_TTM_YELLOW_SMILEY,     ttm_geo_000D4C),
    LOAD_MODEL_FROM_GEO(MODEL_TTM_STAR_SMILEY,       ttm_geo_000D84),
    LOAD_MODEL_FROM_GEO(MODEL_TTM_MOON_SMILEY,       ttm_geo_000DBC),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,     ttm_geo_000748),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,     ttm_geo_000778),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,     ttm_geo_0007A8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,     ttm_geo_0007D8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,     ttm_geo_000808),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,     ttm_geo_000830),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,     ttm_geo_000858),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,     ttm_geo_000880),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,     ttm_geo_0008A8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,     ttm_geo_0008D0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,     ttm_geo_0008F8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,     ttm_geo_000920),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10,     ttm_geo_000948),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,     ttm_geo_000970),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12,     ttm_geo_000990),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13,     ttm_geo_0009C0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14,     ttm_geo_0009F0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_15,     ttm_geo_000A18),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_16,     ttm_geo_000A40),

    AREA(/*index*/ 1, ttm_geo_000A70),
MACRO_OBJECTS(local_macro_objects_ttm_1),
WARP_NODE(241,36,1,241,0),
WARP_NODE(240,36,1,240,0),
PAINTING_WARP_NODE(2,36,2,10,128),
PAINTING_WARP_NODE(1,36,2,10,128),
PAINTING_WARP_NODE(0,36,2,10,128),
WARP_NODE(22,36,1,21,0),
WARP_NODE(21,14,1,10,0),
WARP_NODE(20,36,1,20,0),
WARP_NODE(10,12,1,1,0),
OBJECT_WITH_ACTS(122,7300,-3100,1300,0,0,0,0x3000000, bhvStar
,31),
OBJECT_WITH_ACTS(122,1780,1200,1000,0,0,0,0x2000000, bhvStar
,31),
OBJECT_WITH_ACTS(124,4163,-4607,686,0,56,0,0x9d0000, bhvMessagePanel
,31),
OBJECT_WITH_ACTS(0,1100,2600,250,0,0,0,0x1000000, bhvHiddenRedCoinStar
,31),
OBJECT_WITH_ACTS(0,-3276,-2705,-3695,0,0,0,0x20000, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(144,1949,1201,1170,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(86,2033,-1570,2718,0,0,0,0x1010000, bhvUkiki
,31),
OBJECT_WITH_ACTS(139,4996,-3986,-3472,90,54,0,0x4150000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,4948,-3582,5095,0,0,0,0x0, bhvHiddenStar
,31),
OBJECT_WITH_ACTS(0,2896,-3463,-5183,0,281,0,0x140000, bhvDeathWarp
,31),
OBJECT_WITH_ACTS(0,2896,-3463,-5183,0,281,0,0x160000, bhvAirborneStarCollectWarp
,31),
OBJECT_WITH_ACTS(84,-2525,-2559,-2626,0,0,0,0x0, bhvMontyMoleHole
,31),
OBJECT_WITH_ACTS(84,-1869,-2559,-2704,0,0,0,0x0, bhvMontyMoleHole
,31),
OBJECT_WITH_ACTS(84,-1677,-2559,-3507,0,0,0,0x0, bhvMontyMoleHole
,31),
OBJECT_WITH_ACTS(84,-1435,-2559,-3118,0,0,0,0x0, bhvMontyMoleHole
,31),
OBJECT_WITH_ACTS(84,-2400,-2559,-2185,0,0,0,0x0, bhvMontyMoleHole
,31),
OBJECT_WITH_ACTS(84,-2351,-1023,-2416,0,0,0,0x0, bhvMontyMoleHole
,31),
OBJECT_WITH_ACTS(84,-2048,-1023,-2307,0,0,0,0x0, bhvMontyMoleHole
,31),
OBJECT_WITH_ACTS(84,-2500,-1023,-2157,0,0,0,0x0, bhvMontyMoleHole
,31),
OBJECT_WITH_ACTS(84,-2077,-1023,-1969,0,0,0,0x0, bhvMontyMoleHole
,31),
OBJECT_WITH_ACTS(0,2004,-1745,1283,0,0,0,0x0, bhvWaterfallSoundLoop
,31),
OBJECT_WITH_ACTS(0,3295,-3692,2928,0,0,0,0x0, bhvWaterfallSoundLoop
,31),
OBJECT_WITH_ACTS(0,-1639,1146,-1742,0,0,0,0x10000, bhvTtmBowlingBallSpawner
,31),
OBJECT_WITH_ACTS(53,4360,-1722,4001,0,48,0,0x0, bhvTtmRollingLog
,31),
OBJECT_WITH_ACTS(144,1803,1201,1253,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(0,65,-3740,5615,0,180,0,0xf10000, bhvDeathWarp
,31),
OBJECT_WITH_ACTS(0,65,-3740,5615,0,180,0,0xf00000, bhvAirborneStarCollectWarp
,31),
OBJECT_WITH_ACTS(139,-1397,-4634,3438,90,30,0,0x50a0000, bhvWarp
,31),
        TERRAIN(/*terrainData*/ ttm_seg7_area_1_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ 49),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    AREA(/*index*/ 2, ttm_geo_000B5C),
MACRO_OBJECTS(local_macro_objects_ttm_2),
INSTANT_WARP(2,3,10240,7168,10240),
WARP_NODE(241,36,1,241,0),
WARP_NODE(240,36,1,240,0),
WARP_NODE(10,36,2,10,0),
OBJECT_WITH_ACTS(58,-324,989,-4090,0,0,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(57,-2547,1365,-520,0,0,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(56,-1251,2493,2224,0,0,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(55,4389,3620,624,0,0,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(0,7000,5381,6750,0,225,0,0xa0000, bhvAirborneWarp
,31),
        TERRAIN(/*terrainData*/ ttm_seg7_area_2_collision),
        INSTANT_WARP(/*index*/ 2, /*destArea*/ 3, /*displace*/ 10240, 7168, 10240),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0001, /*seq*/ 9),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SLIDE),
    END_AREA(),

    AREA(/*index*/ 3, ttm_geo_000BEC),
MACRO_OBJECTS(local_macro_objects_ttm_3),
INSTANT_WARP(3,4,-11264,13312,3072),
WARP_NODE(241,36,1,241,0),
WARP_NODE(240,36,1,240,0),
OBJECT_WITH_ACTS(58,6160,-6076,7861,0,0,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(58,-8477,730,-7122,0,0,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(0,1799,-8888,-4402,0,0,0,0x4000000, bhvStar
,31),
OBJECT_WITH_ACTS(56,-1869,-5311,7358,0,0,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(55,-5241,5329,9466,0,0,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(55,7867,-959,-6085,0,0,0,0x0, bhvStaticObject
,31),
        TERRAIN(/*terrainData*/ ttm_seg7_area_3_collision),
        INSTANT_WARP(/*index*/ 3, /*destArea*/ 4, /*displace*/ -11264, 13312, 3072),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0001, /*seq*/ 9),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SLIDE),
    END_AREA(),

    AREA(/*index*/ 4, ttm_geo_000C84),
MACRO_OBJECTS(local_macro_objects_ttm_4),
WARP_NODE(241,36,1,241,0),
WARP_NODE(240,36,1,240,0),
WARP_NODE(10,8,2,10,0),
OBJECT_WITH_ACTS(58,37,1974,-1124,0,0,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(57,11106,2588,381,0,0,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(137,-8192,8192,8192,0,0,0,0xa0000, bhvExclamationBox
,31),
OBJECT_WITH_ACTS(123,-7285,-1866,-4812,0,0,0,0xa0000, bhvExitPodiumWarp
,31),
        TERRAIN(/*terrainData*/ ttm_seg7_area_4_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0001, /*seq*/ 9),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SLIDE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 45, /*pos*/ 102, -4332, 5734),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
