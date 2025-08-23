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
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,3537,3143,62793,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_skeeter,0,2956,288,65068,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,63479,2800,65036,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,1500,1741,2191,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_blue_coin_switch,0,500,384,250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1124,400,65318,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1124,400,830,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,832,400,1194,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1124,400,282,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,63386,2304,2500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,64176,3880,64196,2),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,640,700,3720,2),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,63436,2400,65036,2),
MACRO_OBJECT_WITH_BEH_PARAM(macro_heave_ho,0,62880,2300,64184,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_heave_ho,0,62627,1140,442,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_cannon_open,0,62848,3328,3198,64),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,63336,384,1428,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,1125,2304,64461,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,1125,2604,64461,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,62573,3840,62473,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb,0,62496,384,1840,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,63693,2304,61842,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,65534,3560,3583,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,3388,1600,1155,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,63461,3050,65012,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,61776,600,4120,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,64709,3880,64709,2),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,0,1700,205,63436,166),
MACRO_OBJECT_WITH_BEH_PARAM(macro_floor_switch_hidden_objects,180,64776,2176,2255,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,64667,2706,3744,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,64867,2706,3744,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,64667,2506,3544,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,64867,2506,3544,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,64667,2306,3344,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,3140,1300,2040,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,65516,400,1520,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,63756,1160,65496,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,63256,2320,63256,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,1240,2340,62236,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,63296,2320,3820,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,65316,3860,60,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_star_6,0,63336,560,800,14),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_three_coins,0,4509,0,3069,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_three_coins,0,4509,0,2873,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,61847,0,4120,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,64867,2306,3344,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,61847,0,3144,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_skeeter,0,184,384,621,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,420,400,1504,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,65524,400,1808,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_ten_coins,0,63461,3050,65012,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_ten_coins,0,65534,3560,3583,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,63336,3060,61836,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_three_coins,0,4500,0,1240,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_three_coins,0,63336,3060,61836,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_ten_coins,0,61776,600,4120,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_three_coins,0,3388,1600,1155,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,740,3072,61976,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_three_coins,0,1900,520,63536,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,0,63008,384,1324,167),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_three_coins,0,4500,0,1040,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_wdw_2[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,4197,104,62336,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,4197,104,62336,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,4197,104,62336,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,4197,104,62336,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,4197,104,62336,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,4197,104,62336,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,4197,104,62336,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,4197,104,62336,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal_flying,0,64764,63216,772,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,65012,62976,524,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,64502,62976,524,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,64502,62976,1034,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,65012,62976,1034,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up,0,64764,63356,772,4),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_no_coins,0,64666,65236,870,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_no_coins,0,64866,65236,870,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_no_coins,0,64866,65236,670,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_no_coins,0,64666,65236,670,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_metal_cap,0,64766,80,770,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_vanish_cap,0,63757,63296,3644,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,1089,64257,968,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_skeeter,0,64296,65016,540,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_skeeter,0,65276,64916,1560,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_floor_switch_hidden_objects,0,64016,63020,63596,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,2200,62977,3240,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_vanish_cap,0,1300,63276,3740,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,63476,63956,64276,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,2240,64116,2140,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,2280,64136,65436,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,63256,63016,64796,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,720,63016,64796,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_giant,0,62606,64536,2560,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_giant,0,61846,64385,520,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_giant,0,64356,63591,65356,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_giant,0,65166,63591,65356,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_giant,0,100,63745,64036,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_giant,0,1820,64129,1020,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_giant,0,64756,63361,2810,0),
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
WARP_NODE(241,24,1,241,0),
WARP_NODE(240,24,1,240,0),
WARP_NODE(12,11,1,11,0),
WARP_NODE(11,11,1,12,0),
WARP_NODE(10,11,1,10,0),
OBJECT_WITH_ACTS(58,1277,385,-1805,90,0,90,0x320000, bhvWdwExpressElevatorPlatform
,31),
OBJECT_WITH_ACTS(58,-2409,636,1224,90,0,0,0x320000, bhvWdwExpressElevatorPlatform
,31),
OBJECT_WITH_ACTS(122,1460,6900,90,0,0,0,0x1000000, bhvStar
,31),
OBJECT_WITH_ACTS(59,-767,2304,-2687,0,0,0,0x0, bhvWdwRectangularFloatingPlatform
,31),
OBJECT_WITH_ACTS(59,-767,1152,128,0,0,0,0x0, bhvWdwRectangularFloatingPlatform
,31),
OBJECT_WITH_ACTS(58,1024,2877,-1663,0,0,0,0x140000, bhvWdwExpressElevator
,31),
OBJECT_WITH_ACTS(58,1024,2877,-2112,0,0,0,0x140000, bhvWdwExpressElevator
,31),
OBJECT_WITH_ACTS(57,1465,6405,84,0,0,0,0x10000, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(57,1465,5905,84,0,0,0,0x10000, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(57,1465,5405,84,0,0,0,0x10000, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(57,1465,4905,84,0,0,0,0x10000, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(57,1465,4405,84,0,0,0,0x10000, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(207,1464,4096,85,0,-90,0,0x0, bhvFloorSwitchHiddenObjects
,31),
OBJECT_WITH_ACTS(132,3390,2300,384,0,0,0,0x0, bhvWaterLevelDiamond
,31),
OBJECT_WITH_ACTS(59,3846,0,-3263,0,0,0,0x0, bhvWdwRectangularFloatingPlatform
,31),
OBJECT_WITH_ACTS(122,4091,474,-3312,0,0,0,0x4000000, bhvStar
,31),
OBJECT_WITH_ACTS(56,3328,157,2918,0,0,0,0x0, bhvWaterLevelDiamond
,31),
OBJECT_WITH_ACTS(59,4346,0,-3263,0,0,0,0x0, bhvWdwRectangularFloatingPlatform
,31),
OBJECT_WITH_ACTS(0,0,0,0,0,0,0,0x0, bhvInitializeChangingWaterLevel
,31),
OBJECT_WITH_ACTS(54,-767,2304,-1279,0,0,0,0x0, bhvWdwSquareFloatingPlatform
,31),
OBJECT_WITH_ACTS(54,-767,384,1536,0,0,0,0x0, bhvWdwSquareFloatingPlatform
,31),
OBJECT_WITH_ACTS(54,-767,384,3584,0,0,0,0x0, bhvWdwSquareFloatingPlatform
,31),
OBJECT_WITH_ACTS(54,3390,0,384,0,180,0,0x0, bhvWdwSquareFloatingPlatform
,31),
OBJECT_WITH_ACTS(122,890,3400,-1740,0,0,0,0x3000000, bhvStar
,31),
OBJECT_WITH_ACTS(0,3360,1580,3400,0,0,0,0x2000000, bhvHiddenStar
,31),
OBJECT_WITH_ACTS(0,850,4155,-1730,0,90,0,0xc0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(139,900,211,-1950,90,180,0,0xb0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,3390,2500,384,0,270,0,0xa0000, bhvSpinAirborneCircleWarp
,31),
        INSTANT_WARP(/*index*/ 1, /*destArea*/ 2, /*displace*/ 0, 0, 0),
        TERRAIN(/*terrainData*/ wdw_seg7_area_1_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0003, /*seq*/ 52),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    AREA(/*index*/ 2, wdw_geo_000724),
MACRO_OBJECTS(local_macro_objects_wdw_2),
INSTANT_WARP(0,1,0,0,0),
WARP_NODE(241,24,1,241,0),
WARP_NODE(240,24,1,240,0),
OBJECT_WITH_ACTS(0,-768,-665,3584,0,0,0,0x5c0000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(56,-767,-127,1792,0,0,0,0x0, bhvWaterLevelDiamond
,31),
OBJECT_WITH_ACTS(56,-3583,-2508,-2047,0,0,0,0x0, bhvWaterLevelDiamond
,31),
OBJECT_WITH_ACTS(0,0,0,0,0,0,0,0x0, bhvInitializeChangingWaterLevel
,31),
OBJECT_WITH_ACTS(122,4127,104,-3300,0,0,0,0x5000000, bhvStar
,31),
OBJECT_WITH_ACTS(0,4127,104,-3300,0,0,0,0x4000000, bhvHiddenRedCoinStar
,31),
        INSTANT_WARP(/*index*/ 0, /*destArea*/ 1, /*displace*/ 0, 0, 0),
        TERRAIN(/*terrainData*/ wdw_seg7_area_2_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0003, /*seq*/ 52),
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
