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
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,65336,3218,50,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,-200,3218,50,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,740,205,63461,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,65336,3840,50,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,45,64286,3850,64286,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_blue_coin_switch,0,1650,1741,2175,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,3400,1280,3450,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,3400,1280,2850,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,3400,1280,2550,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,3400,1280,3150,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,64786,11250,63286,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,65286,11875,62836,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,64786,10000,63286,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,64286,10625,62836,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,180,64286,9375,63736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,65286,9375,63736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,62848,3000,3198,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,65286,6875,63736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,180,65286,9375,62836,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,64286,11875,62836,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,65286,11875,63736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bullet_bill_cannon,90,61436,1500,65236,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,64286,10625,63736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,64286,6875,63736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,-2688,4000,3198,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,-2688,4000,3198,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,1008,1850,65086,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,1008,1850,-450,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,64686,4035,1000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,-850,4035,1000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,64286,9375,62836,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,1550,4425,100,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_floor_switch_hidden_objects,0,1033,3072,61936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,65286,10625,62836,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,64286,11875,63736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,4300,25,4300,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,65286,10625,63736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,64286,8150,62836,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,1550,4900,100,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bullet_bill_cannon,90,61436,1250,1400,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,64286,5625,62836,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,65286,5625,62836,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,65286,4375,62836,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,64286,4375,63736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,65286,8150,63736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,64286,8150,63736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,1550,4900,100,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bullet_bill_cannon,90,61436,750,1400,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bullet_bill_cannon,90,61436,1000,1400,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,65286,8150,62836,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bullet_bill_cannon,90,61436,1250,65236,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,1550,4900,100,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,3400,1280,2250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,3400,1280,1950,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bullet_bill_cannon,90,61436,1750,65236,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bullet_bill_cannon,90,61436,2000,65236,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,3394,2401,61951,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,3394,2401,-3585,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bullet_bill_cannon,90,61436,500,1400,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,3400,1280,1650,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,1000,2312,63836,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,3400,1280,1350,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,3400,1280,1050,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,63336,2304,3150,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,65286,11875,63286,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,64286,11875,63286,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_wdw_2[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,61816,64405,520,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,62606,64686,2560,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,100,63765,64036,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,1820,64149,1020,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,65166,63741,65356,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,64356,63741,65356,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,64756,63381,2860,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,64756,64516,3400,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,64764,63336,772,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,73,64764,63336,772,2),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,287,64764,63336,772,2),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,217,64764,63336,772,2),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,143,64764,63336,772,2),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,64764,63336,772,2),
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
WARP_NODE(241,6,2,100,0),
WARP_NODE(240,6,2,50,0),
WARP_NODE(12,11,1,11,0),
WARP_NODE(11,11,1,12,0),
WARP_NODE(10,11,1,10,0),
OBJECT_WITH_ACTS(56,4300,425,4300,0,0,0,0x0, bhvWaterLevelDiamond
,31),
OBJECT_WITH_ACTS(89,-73,3840,405,0,0,0,0x0, bhvHeaveHo
,30),
OBJECT_WITH_ACTS(54,-250,2688,-2250,0,0,0,0x0, bhvWdwSquareFloatingPlatform
,31),
OBJECT_WITH_ACTS(89,105,3840,-20,0,0,0,0x0, bhvHeaveHo
,30),
OBJECT_WITH_ACTS(54,-250,2816,-2250,0,0,0,0x0, bhvWdwSquareFloatingPlatform
,31),
OBJECT_WITH_ACTS(89,-271,3840,-282,0,0,0,0x0, bhvHeaveHo
,30),
OBJECT_WITH_ACTS(58,1024,3100,-2112,0,0,0,0x320000, bhvWdwExpressElevatorPlatform
,31),
OBJECT_WITH_ACTS(217,2800,1600,3450,0,0,0,0x0, bhvPushableMetalBox
,113),
OBJECT_WITH_ACTS(56,-750,6000,-2250,0,0,0,0x0, bhvWaterLevelDiamond
,1),
OBJECT_WITH_ACTS(54,-1250,2560,-2250,0,0,0,0x0, bhvWdwSquareFloatingPlatform
,31),
OBJECT_WITH_ACTS(56,-750,3500,-2250,0,180,0,0x0, bhvWaterLevelDiamond
,49),
OBJECT_WITH_ACTS(56,-750,8500,-2250,0,0,0,0x0, bhvWaterLevelDiamond
,1),
OBJECT_WITH_ACTS(89,-248,3840,58,0,0,0,0x0, bhvHeaveHo
,30),
OBJECT_WITH_ACTS(56,-750,11000,-2250,0,0,0,0x0, bhvWaterLevelDiamond
,1),
OBJECT_WITH_ACTS(54,-1250,2304,-2250,0,0,0,0x0, bhvWdwSquareFloatingPlatform
,31),
OBJECT_WITH_ACTS(89,-460,3840,341,0,0,0,0x0, bhvHeaveHo
,30),
OBJECT_WITH_ACTS(56,-750,4750,-2250,0,0,0,0x0, bhvWaterLevelDiamond
,1),
OBJECT_WITH_ACTS(0,0,0,0,0,0,0,0x0, bhvInitializeChangingWaterLevel
,31),
OBJECT_WITH_ACTS(56,-750,9750,-2250,0,90,0,0x0, bhvWaterLevelDiamond
,1),
OBJECT_WITH_ACTS(89,-590,3840,-84,0,0,0,0x0, bhvHeaveHo
,30),
OBJECT_WITH_ACTS(54,-1250,2432,-2250,0,180,0,0x0, bhvWdwSquareFloatingPlatform
,31),
OBJECT_WITH_ACTS(54,-1250,2816,-2250,0,0,0,0x0, bhvWdwSquareFloatingPlatform
,31),
OBJECT_WITH_ACTS(54,-1250,2688,-2250,0,0,0,0x0, bhvWdwSquareFloatingPlatform
,31),
OBJECT_WITH_ACTS(54,-250,2432,-2250,0,0,0,0x0, bhvWdwSquareFloatingPlatform
,31),
OBJECT_WITH_ACTS(54,-250,2304,-2250,0,0,0,0x0, bhvWdwSquareFloatingPlatform
,31),
OBJECT_WITH_ACTS(122,-750,12250,-2250,0,0,0,0x0, bhvStar
,1),
OBJECT_WITH_ACTS(54,-250,2560,-2250,0,0,0,0x0, bhvWdwSquareFloatingPlatform
,31),
OBJECT_WITH_ACTS(122,890,3400,-2040,0,0,0,0x3000000, bhvStar
,63),
OBJECT_WITH_ACTS(0,2800,1600,3450,0,0,0,0x2000000, bhvHiddenStar
,63),
OBJECT_WITH_ACTS(56,-750,7250,-2250,0,0,0,0x0, bhvWaterLevelDiamond
,1),
OBJECT_WITH_ACTS(137,1550,5000,100,0,0,0,0xa0000, bhvExclamationBox
,14),
OBJECT_WITH_ACTS(0,4300,332,4300,0,45,0,0xa0000, bhvSpinAirborneWarp
,15),
        INSTANT_WARP(/*index*/ 1, /*destArea*/ 2, /*displace*/ 0, 0, 0),
        TERRAIN(/*terrainData*/ wdw_seg7_area_1_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0003, /*seq*/ SEQ_LEVEL_UNDERGROUND),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    AREA(/*index*/ 2, wdw_geo_000724),
MACRO_OBJECTS(local_macro_objects_wdw_2),
INSTANT_WARP(0,1,0,0,0),
WARP_NODE(241,6,2,100,0),
WARP_NODE(240,6,2,50,0),
OBJECT_WITH_ACTS(0,-768,-665,3584,0,0,0,0x5c0000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(56,-767,-127,1792,0,0,0,0x0, bhvWaterLevelDiamond
,31),
OBJECT_WITH_ACTS(56,-3583,-2508,-2047,0,0,0,0x0, bhvWaterLevelDiamond
,31),
OBJECT_WITH_ACTS(0,0,0,0,0,0,0,0x0, bhvInitializeChangingWaterLevel
,31),
OBJECT_WITH_ACTS(122,2180,-840,3720,0,0,0,0x5000000, bhvStar
,63),
OBJECT_WITH_ACTS(0,-770,-1600,3600,0,0,0,0x4000000, bhvHiddenRedCoinStar
,63),
        INSTANT_WARP(/*index*/ 0, /*destArea*/ 1, /*displace*/ 0, 0, 0),
        TERRAIN(/*terrainData*/ wdw_seg7_area_2_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0003, /*seq*/ SEQ_LEVEL_UNDERGROUND),
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
