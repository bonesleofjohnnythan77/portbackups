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
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_one_coin,0,64823,2724,834,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_cannon_closed,45,5035,61542,62091,192),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,90,3644,64232,1422,72),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_ten_coins,0,63024,3840,959,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,61709,62952,61239,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,64706,63753,3812,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,4340,61597,64388,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,65313,2715,65134,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,65404,560,2211,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,63686,65409,62686,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,899,227,63029,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,180,64410,62088,61136,91),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,1740,61481,5320,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,4540,60929,1060,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,4153,62768,62747,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_monty_mole_hole,0,62029,63056,64490,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_monty_mole_hole,0,61998,63127,65475,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_monty_mole_hole,0,61998,63206,1046,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,82,65015,63489,3568,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_monty_mole_hole,0,2369,64085,61660,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_monty_mole_hole,0,707,64313,61690,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,3285,62732,61509,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,64952,376,1476,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,2304,62561,61777,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,3476,708,64640,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,124,2461,1461,1960,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_1up,0,63751,3232,1597,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal_flying,329,63629,64675,62398,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,301,3303,62791,62502,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_floor_switch_hidden_objects,48,64336,1543,460,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,64936,1177,64196,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group,0,64756,60956,4440,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,53,565,62817,61358,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,270,62860,63391,2923,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,61445,63441,694,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_vertical,0,64656,1750,580,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,2300,64152,3753,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_butterfly_triplet,0,64930,1186,64246,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_jumping_box,0,4980,60929,2680,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_ttm_2[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,4205,3878,3576,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,3318,3769,3099,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,5367,4631,5419,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,1010,2351,594,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up,0,6936,4800,6654,4),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,6281,4836,6472,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,6754,4800,5963,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up_sliding,0,1764,2943,1480,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,45,2972,3963,2690,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,45,27,2145,65246,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,62773,65499,62555,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_ttm_3[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,60122,3830,6571,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,59208,3349,5771,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,58694,2616,4400,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up_sliding,0,58408,1807,2285,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,64065,61890,1198,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,62697,64918,58681,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,64294,64088,61136,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,63092,64918,58870,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,63492,64856,59136,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,63980,64686,59492,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,58470,1199,65492,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,58482,2372,3854,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,63827,5054,7054,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,64918,59710,5745,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,65464,59613,6254,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,690,59509,6618,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,3490,59025,6727,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,4327,58687,5963,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,4036,58841,6400,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,4690,58381,3200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,62227,64995,58555,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,64236,62864,63986,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_ttm_4[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_star_6,90,58543,63861,59879,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,5878,2583,2430,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,6620,2348,1621,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,6642,1995,64870,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,63536,4551,2678,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,847,3575,2621,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,3631,2914,2819,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,6472,1613,62591,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,5272,1342,61282,0),
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
WARP_NODE(241,6,2,102,0),
WARP_NODE(240,6,2,52,0),
PAINTING_WARP_NODE(2,36,2,10,128),
PAINTING_WARP_NODE(1,36,2,10,128),
PAINTING_WARP_NODE(0,36,2,10,128),
WARP_NODE(22,36,1,21,0),
WARP_NODE(21,36,1,22,0),
WARP_NODE(20,36,1,20,0),
WARP_NODE(10,36,1,10,0),
OBJECT_WITH_ACTS(137,7300,-3100,1300,0,0,0,0x40000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(122,4785,1849,3820,0,0,0,0x4000000, bhvStar
,56),
OBJECT_WITH_ACTS(0,4198,-2776,-4313,0,0,0,0x3000000, bhvHiddenStar
,63),
OBJECT_WITH_ACTS(0,5071,-3693,-3414,0,0,0,0x2000000, bhvHiddenRedCoinStar
,63),
OBJECT_WITH_ACTS(0,2496,1534,1492,0,0,0,0x0, bhvFlamethrower
,2),
OBJECT_WITH_ACTS(122,4773,-542,3540,0,0,0,0x0, bhvStar
,1),
OBJECT_WITH_ACTS(122,-2499,4233,957,0,0,0,0x1000000, bhvStar
,63),
OBJECT_WITH_ACTS(137,729,2609,335,0,0,0,0x0, bhvExclamationBox
,2),
OBJECT_WITH_ACTS(0,3625,560,165,0,330,0,0x0, bhvCloud
,31),
OBJECT_WITH_ACTS(85,0,0,0,0,0,0,0x10000, bhvMontyMole
,31),
OBJECT_WITH_ACTS(85,0,0,0,0,0,0,0x0, bhvMontyMole
,31),
OBJECT_WITH_ACTS(84,128,2063,572,0,0,0,0x0, bhvMontyMoleHole
,31),
OBJECT_WITH_ACTS(84,473,1620,1233,0,0,0,0x0, bhvMontyMoleHole
,31),
OBJECT_WITH_ACTS(84,-1677,-2559,-3507,0,0,0,0x0, bhvMontyMoleHole
,31),
OBJECT_WITH_ACTS(84,839,1213,-1995,0,0,0,0x0, bhvMontyMoleHole
,31),
OBJECT_WITH_ACTS(84,-2400,-2559,-2185,0,0,0,0x0, bhvMontyMoleHole
,31),
OBJECT_WITH_ACTS(129,3876,1394,3852,0,0,0,0x0, bhvHiddenObject
,24),
OBJECT_WITH_ACTS(129,2965,1484,3602,0,0,291,0x0, bhvHiddenObject
,24),
OBJECT_WITH_ACTS(129,4796,1545,3976,335,0,0,0x0, bhvHiddenObject
,24),
OBJECT_WITH_ACTS(129,2459,1333,3182,0,0,0,0x0, bhvHiddenObject
,24),
OBJECT_WITH_ACTS(0,2004,-1580,1283,0,0,0,0x0, bhvWaterfallSoundLoop
,31),
OBJECT_WITH_ACTS(0,3295,-3692,2928,0,0,0,0x0, bhvWaterfallSoundLoop
,31),
OBJECT_WITH_ACTS(0,-1639,1146,-1742,0,0,0,0x10000, bhvTtmBowlingBallSpawner
,31),
OBJECT_WITH_ACTS(53,4360,-1722,4001,0,48,231,0x0, bhvTtmRollingLog
,31),
OBJECT_WITH_ACTS(84,-743,-2615,-4369,0,-168,0,0x0, bhvMontyMoleHole
,31),
OBJECT_WITH_ACTS(0,-435,-4416,7723,0,148,0,0x0, id_bhvCollisionPad
,31),
OBJECT_WITH_ACTS(137,-435,-4466,7723,0,148,0,0x40000, bhvExclamationBox
,31),
OBJECT_WITH_ACTS(0,-2447,-2457,3952,0,-105,0,0x140000, bhvAirborneWarp
,31),
OBJECT_WITH_ACTS(0,-435,-4167,7743,0,148,0,0xa0000, bhvSpinAirborneWarp
,31),
        TERRAIN(/*terrainData*/ ttm_seg7_area_1_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_LEVEL_GRASS),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    AREA(/*index*/ 2, ttm_geo_000B5C),
MACRO_OBJECTS(local_macro_objects_ttm_2),
INSTANT_WARP(2,3,10240,7168,10240),
WARP_NODE(241,6,2,102,0),
WARP_NODE(240,6,2,52,0),
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
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0001, /*seq*/ SEQ_LEVEL_SLIDE),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SLIDE),
    END_AREA(),

    AREA(/*index*/ 3, ttm_geo_000BEC),
MACRO_OBJECTS(local_macro_objects_ttm_3),
INSTANT_WARP(3,4,-11264,13312,3072),
WARP_NODE(241,6,2,102,0),
WARP_NODE(240,6,2,52,0),
OBJECT_WITH_ACTS(58,6160,-6076,7861,0,0,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(58,-8477,730,-7122,0,0,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(57,-9095,4262,5348,0,0,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(56,-1869,-5311,7358,0,0,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(55,-5241,5329,9466,0,0,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(55,7867,-959,-6085,0,0,0,0x0, bhvStaticObject
,31),
        TERRAIN(/*terrainData*/ ttm_seg7_area_3_collision),
        INSTANT_WARP(/*index*/ 3, /*destArea*/ 4, /*displace*/ -11264, 13312, 3072),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0001, /*seq*/ SEQ_LEVEL_SLIDE),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SLIDE),
    END_AREA(),

    AREA(/*index*/ 4, ttm_geo_000C84),
MACRO_OBJECTS(local_macro_objects_ttm_4),
WARP_NODE(241,6,2,102,0),
WARP_NODE(240,6,2,52,0),
WARP_NODE(10,36,1,20,0),
OBJECT_WITH_ACTS(58,37,1974,-1124,0,0,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(57,11106,2588,381,0,0,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(56,5157,1974,-8292,0,0,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(123,-7285,-1866,-4812,0,0,0,0xa0000, bhvExitPodiumWarp
,31),
        TERRAIN(/*terrainData*/ ttm_seg7_area_4_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0001, /*seq*/ SEQ_LEVEL_SLIDE),
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
