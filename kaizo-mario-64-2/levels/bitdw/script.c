#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/bitdw/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_bitdw_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_one_coin,0,59287,62125,4575,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal_flying,0,63876,62536,3900,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,63136,64736,1900,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,60236,20,1000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,58396,500,380,1),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,58416,1050,63456,1),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,59056,240,1000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal_flying,0,63476,1200,64596,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,1702,1306,65363,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,1702,1306,227,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,3322,1636,65363,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,3322,1636,227,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,1660,63556,3660,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,2198,1164,65353,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,2860,1950,580,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,5162,2675,17,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,6484,2867,65370,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,60157,62226,3890,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,4632,2176,27,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,4632,2176,65243,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,63076,930,800,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,62456,931,840,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,61876,991,620,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,61476,1129,240,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,60916,1220,65236,2),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,60916,1220,65236,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_1up,0,60676,1380,65236,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,2427,63157,3690,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_three_coins,0,60416,1460,63396,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,6812,3260,65516,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,5819,2948,4,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,58195,485,145,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,58734,946,63456,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,63160,64575,1441,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,63476,64155,3540,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,62816,64103,3860,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,64452,1844,208,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,63940,62636,3905,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,62245,1050,735,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,62431,1160,63102,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,59271,62206,4580,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,626,1052,65395,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,33,1900,333,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,2483,63328,2882,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,57726,62436,4900,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,1500,1066,65370,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,0,5940,2765,65256,66),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,61350,1151,65408,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,1702,1306,27,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,3322,1636,27,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,610,1045,65369,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,65088,1054,65315,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,1100,2080,363,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_floor_switch_hidden_objects,0,65398,62395,4207,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,57726,62176,4500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,57726,62176,4700,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,57726,62176,4900,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,62436,62391,4518,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_1up_running_away,0,63116,64396,3700,0),
MACRO_OBJECT_END(),
};

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_BITDW_SQUARE_PLATFORM,   /*pos*/ -1966, -3154,  3586, /*angle*/ 0, 0, 0,  /*behParam*/ 0x00000000, /*beh*/ bhvSquarishPathMoving),
    OBJECT(/*model*/ MODEL_BITDW_SQUARE_PLATFORM,   /*pos*/ -1352, -3154,  4200, /*angle*/ 0, 0, 0,  /*behParam*/ 0x00020000, /*beh*/ bhvSquarishPathMoving),
    OBJECT(/*model*/ MODEL_BITDW_SQUARE_PLATFORM,   /*pos*/ -2963,  1017, -2464, /*angle*/ 0, 0, 0,  /*behParam*/ 0x00000000, /*beh*/ bhvSquarishPathMoving),
    OBJECT(/*model*/ MODEL_BITDW_SQUARE_PLATFORM,   /*pos*/ -2349,  1017, -1849, /*angle*/ 0, 0, 0,  /*behParam*/ 0x00020000, /*beh*/ bhvSquarishPathMoving),
    OBJECT(/*model*/ MODEL_BITDW_SQUARE_PLATFORM,   /*pos*/ -2349,  1017, -1235, /*angle*/ 0, 0, 0,  /*behParam*/ 0x00000000, /*beh*/ bhvSquarishPathMoving),
    OBJECT(/*model*/ MODEL_BITDW_SQUARE_PLATFORM,   /*pos*/ -1735,  1017,  -621, /*angle*/ 0, 0, 0,  /*behParam*/ 0x00020000, /*beh*/ bhvSquarishPathMoving),
    OBJECT(/*model*/ MODEL_BITDW_SEESAW_PLATFORM,   /*pos*/  1491,  1273,   512, /*angle*/ 0, 90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSeesawPlatform),
    OBJECT(/*model*/ MODEL_BITDW_SEESAW_PLATFORM,   /*pos*/  -147,   894,   512, /*angle*/ 0, 90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSeesawPlatform),
    OBJECT(/*model*/ MODEL_BITDW_SLIDING_PLATFORM,  /*pos*/ -5728,   819, -2151, /*angle*/ 0, 0, 0,  /*behParam*/ 0x03CE0000, /*beh*/ bhvSlidingPlatform2),
    OBJECT(/*model*/ MODEL_BITDW_FERRIS_WHEEL_AXLE, /*pos*/  -204, -1924,  3381, /*angle*/ 0, 0, 0,  /*behParam*/ 0x00010000, /*beh*/ bhvFerrisWheelAxle),
    OBJECT(/*model*/ MODEL_BITDW_STAIRCASE,         /*pos*/  5279,  1740,    -6, /*angle*/ 0, 0, 0,  /*behParam*/ 0x00010000, /*beh*/ bhvAnimatesOnFloorSwitchPress),
    OBJECT(/*model*/ MODEL_PURPLE_SWITCH,           /*pos*/  3922,  1740,    -7, /*angle*/ 0, 0, 0,  /*behParam*/ 0x00000000, /*beh*/ bhvFloorSwitchAnimatesObject),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -3092, -2795, 2842, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlamethrower),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  2463, -2386, 2844, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlamethrower),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  7180,  3000,    0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserCourseRedCoinStar),
    RETURN(),
};

const LevelScript level_bitdw_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _bitdw_segment_7SegmentRomStart, _bitdw_segment_7SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _bidw_skybox_mio0SegmentRomStart, _bidw_skybox_mio0SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _sky_mio0SegmentRomStart, _sky_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group11_mio0SegmentRomStart, _group11_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group11_geoSegmentRomStart,  _group11_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group17_mio0SegmentRomStart, _group17_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group17_geoSegmentRomStart,  _group17_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_12),
    JUMP_LINK(script_func_global_18),
    JUMP_LINK(script_func_global_1),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,       geo_bitdw_0003C0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,       geo_bitdw_0003D8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,       geo_bitdw_0003F0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,       geo_bitdw_000408),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,       geo_bitdw_000420),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,       geo_bitdw_000438),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,       geo_bitdw_000450),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,       geo_bitdw_000468),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,       geo_bitdw_000480),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,       geo_bitdw_000498),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,       geo_bitdw_0004B0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,       geo_bitdw_0004C8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,       geo_bitdw_0004E0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10,       geo_bitdw_0004F8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,       geo_bitdw_000510),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_WARP_PIPE,         warp_pipe_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_SQUARE_PLATFORM,   geo_bitdw_000558),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_SEESAW_PLATFORM,   geo_bitdw_000540),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_SLIDING_PLATFORM,  geo_bitdw_000528),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_FERRIS_WHEEL_AXLE, geo_bitdw_000570),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_BLUE_PLATFORM,     geo_bitdw_000588),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME4,  geo_bitdw_0005A0),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME3,  geo_bitdw_0005B8),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME2,  geo_bitdw_0005D0),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME1,  geo_bitdw_0005E8),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE,         geo_bitdw_000600),

    AREA(/*index*/ 1, geo_bitdw_000618),
MACRO_OBJECTS(local_macro_objects_bitdw_1),
WARP_NODE(241,6,1,37,0),
WARP_NODE(12,17,1,12,0),
WARP_NODE(11,30,1,10,0),
WARP_NODE(10,17,1,10,0),
OBJECT_WITH_ACTS(0,4095,1768,711,0,0,0,0x0, bhvBowserCourseRedCoinStar
,31),
OBJECT_WITH_ACTS(223,2324,-2525,3730,0,0,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(0,-3092,-2795,2842,0,0,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(207,3922,1740,-7,0,0,0,0x0, bhvFloorSwitchAnimatesObject
,31),
OBJECT_WITH_ACTS(63,5279,1740,-6,0,0,0,0x10000, bhvAnimatesOnFloorSwitchPress
,31),
OBJECT_WITH_ACTS(57,-204,-1924,3381,0,0,0,0x10000, bhvFerrisWheelAxle
,31),
OBJECT_WITH_ACTS(56,-5728,819,-2151,0,0,0,0x3ce0000, bhvSlidingPlatform2
,31),
OBJECT_WITH_ACTS(55,888,894,-9002,0,90,0,0x0, bhvSeesawPlatform
,31),
OBJECT_WITH_ACTS(55,530,1273,-11191,0,90,0,0x0, bhvSeesawPlatform
,31),
OBJECT_WITH_ACTS(54,-1735,1017,-621,0,0,314,0x20000, bhvSquarishPathMoving
,31),
OBJECT_WITH_ACTS(54,-2349,1017,-1235,0,0,306,0x0, bhvSquarishPathMoving
,31),
OBJECT_WITH_ACTS(54,-2349,1017,-1849,0,0,27,0x20000, bhvSquarishPathMoving
,31),
OBJECT_WITH_ACTS(54,-2963,1017,-2464,0,358,266,0x0, bhvSquarishPathMoving
,31),
OBJECT_WITH_ACTS(54,-1352,-2998,4200,0,0,207,0x20000, bhvSquarishPathMoving
,31),
OBJECT_WITH_ACTS(54,-1966,-2946,3586,0,0,177,0x0, bhvSquarishPathMoving
,31),
OBJECT_WITH_ACTS(0,5910,3500,-7,0,90,0,0xc0000, bhvDeathWarp
,31),
OBJECT_WITH_ACTS(18,6816,2860,-7,0,0,0,0xb0000, bhvWarpPipe
,31),
OBJECT_WITH_ACTS(0,-7443,-2153,3886,0,90,0,0xa0000, bhvAirborneWarp
,31),
        TERRAIN(/*terrainData*/ bitdw_seg7_collision_level),
        SHOW_DIALOG(/*index*/ 0x00, DIALOG_090),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_LEVEL_KOOPA_ROAD),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 90, /*pos*/ -7443, -3153, 3886),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
