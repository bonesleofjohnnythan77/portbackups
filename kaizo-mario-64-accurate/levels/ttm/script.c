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
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb_buddy_opens_cannon,273,62568,62586,3498,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_cannon_closed,45,5035,61542,62091,192),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_wing_cap,53,63086,63086,3955,12),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,59536,62536,7000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,5350,64136,60761,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,3245,64136,59533,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,64266,64136,59003,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,61111,64136,61278,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,60941,63536,63671,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,60663,62536,785,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,813,64136,59236,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,60536,62536,6000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,61536,62536,5000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_vertical,0,5350,62736,60761,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,295,1500,59436,8000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,295,1490,60510,8000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_wing_cap,295,1500,60986,8000,13),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_three_coins,0,4200,60929,725,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,82,65157,63489,3590,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,90,62575,63353,2362,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,4475,61936,64386,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,900,2600,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,1500,2600,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,82,64346,63489,3455,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,3476,708,64640,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,124,2461,1461,1960,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal_flying,0,3261,62663,61491,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,900,2600,600,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,64073,65131,61849,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_floor_switch_hidden_objects,0,59536,62843,7000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,63316,65517,63048,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_three_coins,90,4200,61129,725,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_small,0,4600,60929,725,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,270,62860,63391,3351,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,60921,61536,2650,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,217,62313,63336,2873,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,2300,64152,3753,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,63762,65170,62268,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_three_coins,270,4200,60929,925,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_ttm_2[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,4000,2900,3750,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,3800,2900,3950,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,4200,2900,3550,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,45,300,2146,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,45,62536,64274,61836,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,6281,4836,6472,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,45,100,2146,200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,45,500,2146,65336,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,45,62336,64274,62036,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_ten_coins,45,6625,5000,7350,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,45,62136,64274,62236,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_ttm_3[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,60122,2700,6571,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,59208,2550,5771,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,58524,650,2105,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_moving_blue_coin,0,58382,2500,3954,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,64065,61890,1198,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,59474,64536,59938,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,64034,62236,62863,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,61869,63936,58870,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,180,64209,59842,5116,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,64607,58636,5076,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_moving_blue_coin,0,58532,2373,3804,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_moving_blue_coin,0,58482,2437,3854,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,64536,4000,7000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,64536,4000,6697,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,64536,4000,7307,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,62163,3300,6982,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,59078,2725,6055,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,64111,58936,3840,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,278,58836,6697,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,64341,61936,63923,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,4633,57636,5785,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,180,64403,59830,4893,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_ttm_4[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,2128,1085,60736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,6216,1530,2508,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,7088,1269,976,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,6940,995,64835,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,270,2888,3034,2926,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,3220,2479,2964,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,6431,1481,2274,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,2128,1085,60736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,58261,63636,60726,0),
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
OBJECT_WITH_ACTS(0,7300,-3100,1300,0,0,0,0x5000000, bhvHiddenStar
,63),
OBJECT_WITH_ACTS(0,4475,-3600,-1150,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,799,-2668,3200,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,-3250,-2500,-3700,0,0,0,0x2000000, bhvHiddenRedCoinStar
,63),
OBJECT_WITH_ACTS(54,2496,1670,1492,0,0,0,0x1000000, bhvUkikiCage
,2),
OBJECT_WITH_ACTS(122,1200,2600,150,0,0,0,0x0, bhvStar
,1),
OBJECT_WITH_ACTS(86,1992,-1548,2944,0,0,0,0x10000, bhvUkiki
,63),
OBJECT_WITH_ACTS(86,729,2307,335,0,0,0,0x0, bhvUkiki
,2),
OBJECT_WITH_ACTS(0,1723,1103,900,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(124,4200,-4607,1325,0,90,0,0x280000, bhvMessagePanel
,31),
OBJECT_WITH_ACTS(0,4250,-4407,1125,0,90,0,0x0, bhvCloud
,31),
OBJECT_WITH_ACTS(144,-3850,-4850,4860,0,52,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(0,3171,-4105,3182,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(129,4400,-4607,725,0,0,0,0x10000, bhvBreakableBox
,31),
OBJECT_WITH_ACTS(217,-4050,-5150,4700,45,52,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(217,-4050,-4925,4350,45,52,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(217,-4050,-4700,4000,45,52,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(217,-4050,-4475,3650,45,52,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(0,-1639,1274,-1742,0,0,0,0x10000, bhvTtmBowlingBallSpawner
,31),
OBJECT_WITH_ACTS(217,-4050,-4250,3300,45,52,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(0,2004,-1580,1283,0,0,0,0x0, bhvWaterfallSoundLoop
,31),
OBJECT_WITH_ACTS(0,3295,-3692,2928,0,0,0,0x0, bhvWaterfallSoundLoop
,31),
OBJECT_WITH_ACTS(217,7500,-6000,4500,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(0,7500,-5100,4500,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(0,7500,-5693,4500,0,0,0,0x160000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-583,-3414,-4158,0,0,0,0x150000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-6000,-2457,7000,0,0,0,0x140000, bhvAirborneWarp
,31),
OBJECT_WITH_ACTS(0,-3850,-4500,4950,0,187,0,0xa0000, bhvSpinAirborneWarp
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
