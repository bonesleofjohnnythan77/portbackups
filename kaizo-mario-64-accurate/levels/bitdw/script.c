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
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_arrow_flying,90,59086,62436,3880,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_arrow_flying,90,59086,62436,3880,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_arrow_flying,90,59086,62436,3880,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,2300,4250,63136,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,14,6800,3000,64236,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,45,6400,3500,63586,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,58736,1600,65236,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,6850,2750,64636,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,59,6080,3750,63336,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,58,1844,643,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,64566,1844,65446,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,270,6150,3200,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,270,5900,3000,65186,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,59036,2870,64836,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bouncing_fireball_copy,112,60850,65381,976,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,62423,902,765,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,61861,977,626,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,61538,1072,285,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,60386,1229,63373,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,76,5700,4000,63186,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,59536,1730,64836,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,59036,2300,64836,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,1450,4145,63136,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,59536,2300,64836,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,59336,1600,65236,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_arrow_flying,90,59086,62436,3880,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,31,6650,3250,63886,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,64498,1844,615,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,62636,800,63636,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,59536,2870,64836,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,59936,1600,65236,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,59036,1730,64836,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,62536,800,63736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bouncing_fireball_copy,0,63131,64686,650,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bouncing_fireball_copy,0,63131,64686,850,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bouncing_fireball_copy,0,63131,64686,750,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,270,5900,3000,350,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,63523,63636,3700,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,62886,1050,63386,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,6327,2867,1800,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,63163,1844,1590,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,59336,3200,65269,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,63111,879,769,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,63036,64680,64936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,57726,62383,5500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,62446,63136,2825,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,315,7150,2867,65186,66),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,62436,800,63836,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,5350,4250,63136,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,61845,1229,63386,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_floor_switch_hidden_objects,0,6816,2867,65529,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,65511,1844,65452,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,3800,4250,63136,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_floor_switch_hidden_objects,270,4000,62336,4200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,3400,62336,4200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,57726,62176,5500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,62236,63336,3700,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,63036,64436,64936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,63131,63836,2400,0),
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
OBJECT_WITH_ACTS(0,7180,3000,0,0,0,0,0x0, bhvBowserCourseRedCoinStar
,31),
OBJECT_WITH_ACTS(0,2463,-2386,2844,0,0,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,-3092,-2795,2842,0,0,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(207,6816,-32768,-6580,0,0,0,0x0, bhvFloorSwitchAnimatesObject
,31),
OBJECT_WITH_ACTS(63,5279,1740,-6,0,0,0,0x10000, bhvAnimatesOnFloorSwitchPress
,31),
OBJECT_WITH_ACTS(57,-204,-1924,3381,0,0,0,0x10000, bhvFerrisWheelAxle
,31),
OBJECT_WITH_ACTS(56,-6300,2000,-400,90,0,0,0x3ce0000, bhvSlidingPlatform2
,31),
OBJECT_WITH_ACTS(55,-147,894,512,0,90,0,0x0, bhvSeesawPlatform
,31),
OBJECT_WITH_ACTS(55,1491,1273,512,0,90,0,0x0, bhvSeesawPlatform
,31),
OBJECT_WITH_ACTS(56,-6000,1400,-200,90,180,0,0x3ce0000, bhvSlidingPlatform2
,31),
OBJECT_WITH_ACTS(56,-6000,2600,-200,90,180,0,0x3ce0000, bhvSlidingPlatform2
,31),
OBJECT_WITH_ACTS(54,-2349,1017,-1849,0,0,180,0x20000, bhvSquarishPathMoving
,31),
OBJECT_WITH_ACTS(54,-2963,1017,-2464,0,0,180,0x0, bhvSquarishPathMoving
,31),
OBJECT_WITH_ACTS(54,-1352,-2900,4200,180,0,270,0x20000, bhvSquarishPathMoving
,31),
OBJECT_WITH_ACTS(54,-1966,-2900,3586,180,0,90,0x0, bhvSquarishPathMoving
,31),
OBJECT_WITH_ACTS(0,-7443,-1400,3886,0,90,0,0xc0000, bhvDeathWarp
,31),
OBJECT_WITH_ACTS(18,1450,4450,-2400,0,0,0,0xb0000, bhvWarpPipe
,31),
OBJECT_WITH_ACTS(0,-7443,-2000,3886,0,90,0,0xa0000, bhvAirborneWarp
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
