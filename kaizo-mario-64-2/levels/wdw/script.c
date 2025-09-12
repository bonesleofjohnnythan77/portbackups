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
#include "levels/wdw/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_wdw_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,63459,2816,64876,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_recovery_heart,0,63297,2460,2990,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,1610,4415,65528,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,90,1500,1949,2191,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,61801,1686,65221,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,3431,1280,2707,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,62925,2696,3930,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,64666,660,1388,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,898,3584,63500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_star_1,0,3779,3538,64112,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_heave_ho,0,64176,3880,64196,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_heave_ho,0,640,700,3720,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_heave_ho,0,63436,2400,65036,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_heave_ho,0,62880,2300,64184,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_heave_ho,0,62627,1140,442,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,1848,2025,2275,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,63336,384,1145,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,64405,4274,1239,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,64654,4018,1164,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,62573,3840,62473,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_heave_ho,0,62496,384,1840,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,63693,2304,61842,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,3405,1695,4006,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,2877,1990,4409,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,2149,2258,4467,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,1570,2525,4463,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_heave_ho,0,64709,3880,64709,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,1369,1820,2123,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_floor_switch_hidden_objects,0,920,2300,64696,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,1807,3342,63605,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,2627,3386,63795,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,3718,3221,64114,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,470,2900,63626,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,470,3100,63426,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,3140,1300,2040,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,65516,400,1520,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,64609,4389,1163,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,65427,3414,3955,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,1240,2340,62236,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,63296,2320,3820,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,65316,3860,60,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,65296,400,65096,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,64830,2176,2168,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,2624,1094,63838,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,61847,0,3205,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,470,3100,63226,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,64073,3584,61954,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_heave_ho,0,64036,2360,3120,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,64405,3838,64421,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,462,660,845,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,1391,4196,101,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,569,910,3695,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,965,2750,4471,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,2775,2760,61908,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,62631,3321,3374,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,669,700,63820,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,2823,2746,61885,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,90,740,3072,61976,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_star_2,0,25,3516,3604,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,740,3060,61856,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,4500,0,1040,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_wdw_2[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,61816,64405,520,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,62606,64686,2560,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,100,63765,64036,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,1820,64149,1020,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,65166,63741,65356,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,64356,63741,65356,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,64756,63381,2860,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,64756,64516,3400,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal_flying,0,64764,63216,772,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,65012,62976,524,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,64502,62976,524,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,64502,62976,1034,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,65012,62976,1034,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up,0,64764,63356,772,4),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,1974,63726,3419,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,1886,64194,3708,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,2135,64403,3699,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,1904,63934,3749,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_metal_cap,0,64766,80,770,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_vanish_cap,0,61899,63557,63400,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,1089,64257,968,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_skeeter,0,64296,65016,540,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_skeeter,0,65276,64916,1560,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_floor_switch_hidden_objects,0,64016,63020,63596,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,2200,62977,3240,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_one_coin,0,1300,63276,3740,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,63476,63956,64276,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,2240,64116,2140,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,2280,64136,65436,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,63256,63016,64796,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,720,63016,64796,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,2253,63234,3259,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,1800,64020,3816,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,1859,63226,3226,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,1895,64060,3626,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,1810,63380,63345,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,64821,63764,2535,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,1894,63101,2587,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,100,63745,63436,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,64766,65216,2820,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_1up_running_away,0,1655,63376,64243,0),
MACRO_OBJECT_END(),
};

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_WDW_SQUARE_FLOATING_PLATFORM,      /*pos*/  3390,    0,   384, /*angle*/ 0, 180, 0, /*behParam*/ 0x00000000, /*beh*/ bhvWdwSquareFloatingPlatform),
    OBJECT(/*model*/ MODEL_WDW_SQUARE_FLOATING_PLATFORM,      /*pos*/  -767,  384,  3584, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvWdwSquareFloatingPlatform),
    OBJECT(/*model*/ MODEL_WDW_SQUARE_FLOATING_PLATFORM,      /*pos*/  -767,  384,  1536, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvWdwSquareFloatingPlatform),
    OBJECT(/*model*/ MODEL_WDW_SQUARE_FLOATING_PLATFORM,      /*pos*/  -767, 2304, -1279, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvWdwSquareFloatingPlatform),
    OBJECT(/*model*/ MODEL_WDW_ARROW_LIFT,                    /*pos*/  -578, 2177,  3009, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvArrowLift),
    OBJECT(/*model*/ MODEL_WDW_ARROW_LIFT,                    /*pos*/ -1474, 2177,  3393, /*angle*/ 0, 270, 0, /*behParam*/ 0x00000000, /*beh*/ bhvArrowLift),
    OBJECT(/*model*/ MODEL_WDW_ARROW_LIFT,                    /*pos*/ -1602, 2177,  3009, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvArrowLift),
    OBJECT(/*model*/ MODEL_WDW_ARROW_LIFT,                    /*pos*/ -1090, 2177,  3521, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvArrowLift),
    OBJECT(/*model*/ MODEL_WDW_ARROW_LIFT,                    /*pos*/  -962, 2177,  3137, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvArrowLift),
    OBJECT(/*model*/ MODEL_NONE,                              /*pos*/     0,    0,     0, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvInitializeChangingWaterLevel),
    OBJECT(/*model*/ MODEL_WDW_WATER_LEVEL_DIAMOND,           /*pos*/  1920, 2560, -3583, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvWaterLevelDiamond),
    OBJECT(/*model*/ MODEL_WDW_WATER_LEVEL_DIAMOND,           /*pos*/  3328,  256,  2918, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvWaterLevelDiamond),
    OBJECT(/*model*/ MODEL_WDW_WATER_LEVEL_DIAMOND,           /*pos*/  2048, 1792,  2176, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvWaterLevelDiamond),
    OBJECT(/*model*/ MODEL_WDW_WATER_LEVEL_DIAMOND,           /*pos*/   640, 1024,  3712, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvWaterLevelDiamond),
    OBJECT(/*model*/ MODEL_WDW_WATER_LEVEL_DIAMOND,           /*pos*/  1810,   40, -3118, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvWaterLevelDiamond),
    OBJECT(/*model*/ MODEL_PURPLE_SWITCH,                     /*pos*/  3360, 1280,  3420, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFloorSwitchHiddenObjects),
    OBJECT(/*model*/ MODEL_WDW_HIDDEN_PLATFORM,               /*pos*/  2239, 1126,  3391, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvHiddenObject),
    OBJECT(/*model*/ MODEL_WDW_HIDDEN_PLATFORM,               /*pos*/  1215, 1357,  2751, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvHiddenObject),
    OBJECT(/*model*/ MODEL_WDW_HIDDEN_PLATFORM,               /*pos*/  1215, 1229,  3391, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvHiddenObject),
    OBJECT(/*model*/ MODEL_WDW_HIDDEN_PLATFORM,               /*pos*/  1599, 1101,  3391, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvHiddenObject),
    OBJECT(/*model*/ MODEL_WDW_HIDDEN_PLATFORM,               /*pos*/  2879, 1152,  3391, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvHiddenObject),
    OBJECT(/*model*/ MODEL_WDW_EXPRESS_ELEVATOR,              /*pos*/  1024, 3277, -2112, /*angle*/ 0,   0, 0, /*behParam*/ 0x00320000, /*beh*/ bhvWdwExpressElevatorPlatform),
    OBJECT(/*model*/ MODEL_WDW_EXPRESS_ELEVATOR,              /*pos*/  1024, 3277, -1663, /*angle*/ 0,   0, 0, /*behParam*/ 0x00320000, /*beh*/ bhvWdwExpressElevator),
    OBJECT(/*model*/ MODEL_WDW_RECTANGULAR_FLOATING_PLATFORM, /*pos*/  -767, 1152,   128, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvWdwRectangularFloatingPlatform),
    OBJECT(/*model*/ MODEL_WDW_RECTANGULAR_FLOATING_PLATFORM, /*pos*/  -767, 2304, -2687, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvWdwRectangularFloatingPlatform),
    OBJECT(/*model*/ MODEL_WDW_ROTATING_PLATFORM,             /*pos*/   734, 3840,    84, /*angle*/ 0,   0, 0, /*behParam*/ 0x46010000, /*beh*/ bhvRotatingPlatform),
    OBJECT(/*model*/ MODEL_SKEETER,                           /*pos*/  2956,  288,  -468, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSkeeter),
    OBJECT(/*model*/ MODEL_SKEETER,                           /*pos*/   184,  384,   621, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSkeeter),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_NONE,                    /*pos*/     0,     0,     0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvInitializeChangingWaterLevel),
    OBJECT(/*model*/ MODEL_WDW_WATER_LEVEL_DIAMOND, /*pos*/ -3583, -2508, -2047, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvWaterLevelDiamond),
    OBJECT(/*model*/ MODEL_WDW_WATER_LEVEL_DIAMOND, /*pos*/  -767,  -127,  1792, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvWaterLevelDiamond),
    OBJECT(/*model*/ MODEL_NONE,                    /*pos*/  -768,  -665,  3584, /*angle*/ 0, 0, 0, /*behParam*/ 0x005C0000, /*beh*/ bhvPoleGrabbing),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/ 3360,  1580,  2660, /*angle*/ 0, 0, 0, /*behParam*/ 0x02000000, /*beh*/ bhvHiddenStar,          /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/  890,  3400, -2040, /*angle*/ 0, 0, 0, /*behParam*/ 0x03000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    RETURN(),
};

static const LevelScript script_func_local_4[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/ -770, -1600,  3600, /*angle*/ 0, 0, 0, /*behParam*/ 0x04000000, /*beh*/ bhvHiddenRedCoinStar, /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ 2180,  -840,  3720, /*angle*/ 0, 0, 0, /*behParam*/ 0x05000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    RETURN(),
};

const LevelScript level_wdw_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _wdw_segment_7SegmentRomStart, _wdw_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _grass_mio0SegmentRomStart, _grass_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _wdw_skybox_mio0SegmentRomStart, _wdw_skybox_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group1_mio0SegmentRomStart, _group1_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group1_geoSegmentRomStart,  _group1_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group13_mio0SegmentRomStart, _group13_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group13_geoSegmentRomStart,  _group13_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_2),
    JUMP_LINK(script_func_global_14),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_BUBBLY_TREE,                   bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_SQUARE_FLOATING_PLATFORM,      wdw_geo_000580),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_ARROW_LIFT,                    wdw_geo_000598),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_WATER_LEVEL_DIAMOND,           wdw_geo_0005C0),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_HIDDEN_PLATFORM,               wdw_geo_0005E8),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_EXPRESS_ELEVATOR,              wdw_geo_000610),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_RECTANGULAR_FLOATING_PLATFORM, wdw_geo_000628),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_ROTATING_PLATFORM,             wdw_geo_000640),

    AREA(/*index*/ 1, wdw_geo_000658),
MACRO_OBJECTS(local_macro_objects_wdw_1),
INSTANT_WARP(1,2,0,0,0),
WARP_NODE(241,6,2,100,0),
WARP_NODE(240,6,2,50,0),
WARP_NODE(12,11,1,11,0),
WARP_NODE(11,11,1,12,0),
WARP_NODE(10,11,1,10,0),
OBJECT_WITH_ACTS(0,361,853,558,0,0,0,0x4000000, bhvHiddenRedCoinStar
,31),
OBJECT_WITH_ACTS(217,836,444,-2091,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(60,2789,2523,-3602,0,0,0,0x46010000, bhvRotatingPlatform
,31),
OBJECT_WITH_ACTS(59,-767,2304,-2687,0,0,0,0x0, bhvWdwRectangularFloatingPlatform
,31),
OBJECT_WITH_ACTS(59,-767,1152,128,0,0,0,0x0, bhvWdwRectangularFloatingPlatform
,31),
OBJECT_WITH_ACTS(0,-743,3277,-3667,0,0,0,0x40000, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(58,1024,3277,-2112,0,0,0,0x320000, bhvWdwExpressElevatorPlatform
,31),
OBJECT_WITH_ACTS(57,2863,1777,4434,0,0,0,0x10000, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(57,3397,1466,4047,0,0,0,0x10000, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(57,1542,2323,4509,0,0,348,0x10000, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(57,988,2555,4510,0,0,0,0x10000, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(57,2123,1959,4542,273,0,0,0x10000, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(207,3360,1280,3420,0,0,0,0x0, bhvFloorSwitchHiddenObjects
,31),
OBJECT_WITH_ACTS(56,1200,276,-1403,0,0,0,0x0, bhvWaterLevelDiamond
,31),
OBJECT_WITH_ACTS(89,640,1024,3712,0,0,0,0x0, bhvHeaveHo
,31),
OBJECT_WITH_ACTS(220,1593,1792,2240,0,0,0,0x0, bhvFlyGuy
,31),
OBJECT_WITH_ACTS(89,3328,256,2918,0,0,0,0x0, bhvHeaveHo
,31),
OBJECT_WITH_ACTS(89,1920,2560,-3583,0,0,0,0x0, bhvHeaveHo
,31),
OBJECT_WITH_ACTS(0,0,0,0,0,0,0,0x0, bhvInitializeChangingWaterLevel
,31),
OBJECT_WITH_ACTS(180,2836,2042,4446,0,90,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,2006,2312,4427,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,1016,2852,4492,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,1565,2650,4209,0,270,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,3368,1839,4041,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(54,-767,2304,-1279,0,0,0,0x0, bhvWdwSquareFloatingPlatform
,31),
OBJECT_WITH_ACTS(54,-767,384,1536,0,0,0,0x0, bhvWdwSquareFloatingPlatform
,31),
OBJECT_WITH_ACTS(54,-767,384,3584,0,0,0,0x0, bhvWdwSquareFloatingPlatform
,31),
OBJECT_WITH_ACTS(54,3390,0,384,0,180,0,0x0, bhvWdwSquareFloatingPlatform
,31),
OBJECT_WITH_ACTS(122,890,3400,-2040,0,0,0,0x3000000, bhvStar
,63),
OBJECT_WITH_ACTS(0,469,2728,4455,0,0,0,0x2000000, bhvHiddenStar
,63),
OBJECT_WITH_ACTS(180,-2865,3432,3065,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,960,104,3717,0,45,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(0,825,439,-1739,0,180,0,0xa0000, bhvSpinAirborneWarp
,31),
        INSTANT_WARP(/*index*/ 1, /*destArea*/ 2, /*displace*/ 0, 0, 0),
        TERRAIN(/*terrainData*/ wdw_seg7_area_1_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0003, /*seq*/ SEQ_LEVEL_WATER),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    AREA(/*index*/ 2, wdw_geo_000724),
MACRO_OBJECTS(local_macro_objects_wdw_2),
INSTANT_WARP(0,1,0,0,0),
WARP_NODE(241,6,2,100,0),
WARP_NODE(240,6,2,50,0),
OBJECT_WITH_ACTS(0,-768,-665,3584,0,0,0,0x5c0000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(137,-767,-127,1792,0,0,0,0x40000, bhvExclamationBox
,31),
OBJECT_WITH_ACTS(56,-3583,-2508,-2047,0,0,0,0x0, bhvWaterLevelDiamond
,31),
OBJECT_WITH_ACTS(0,0,0,0,0,0,0,0x0, bhvInitializeChangingWaterLevel
,31),
OBJECT_WITH_ACTS(122,2180,-840,3720,0,0,0,0x5000000, bhvStar
,63),
OBJECT_WITH_ACTS(88,-304,-1600,2921,0,0,0,0x0, bhvThwomp
,63),
        INSTANT_WARP(/*index*/ 0, /*destArea*/ 1, /*displace*/ 0, 0, 0),
        TERRAIN(/*terrainData*/ wdw_seg7_area_2_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0003, /*seq*/ SEQ_LEVEL_WATER),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_WATER),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 180, /*pos*/ 3395, 2580, 384),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
