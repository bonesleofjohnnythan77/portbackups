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
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_metal_cap,0,59116,62636,3880,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,6815,2600,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,63136,64736,1900,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,60236,20,1000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,58396,500,380,1),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,58416,1050,63456,1),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,59056,240,1000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,6815,2600,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,6815,2600,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,6815,2600,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,6815,2600,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,6815,2600,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,1660,63556,3660,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,3180,1020,240,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,2860,1020,580,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,4640,2360,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,4900,2600,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,5180,2820,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,2760,1940,500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,2760,1940,180,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,63076,812,800,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,61876,897,620,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,62516,814,800,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,60916,1220,65236,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,60916,1220,65236,2),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,60916,1220,65236,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_1up,0,60676,1380,65236,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,65386,64336,3660,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_three_coins,0,60416,1460,63396,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,4380,2120,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,5420,3000,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,6813,2600,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,6813,2600,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,62976,64103,3280,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,63476,64103,3540,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,62816,64103,3860,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,63856,1024,580,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,6810,2700,65532,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,6810,2700,65532,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,6810,2700,65532,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,6810,2700,65532,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,6810,2700,65532,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,33,1900,333,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,6810,2700,65532,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,6810,2700,65532,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,6810,2700,65532,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,329,58468,62389,3496,70),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,6813,2600,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,6815,2600,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,6815,2600,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,610,870,65369,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,65051,879,65369,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,1100,2080,363,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_floor_switch_hidden_objects,0,6816,2600,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,6815,2600,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,6815,2600,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,6815,2600,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,6815,2600,0,0),
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
WARP_NODE(241,18,1,241,0),
WARP_NODE(12,18,1,240,0),
WARP_NODE(13,18,1,240,0),
WARP_NODE(11,5,1,10,0),
WARP_NODE(243,13,1,10,0),
OBJECT_WITH_ACTS(0,5800,5000,0,0,0,0,0x0, bhvBowserCourseRedCoinStar
,31),
OBJECT_WITH_ACTS(0,2463,-2386,2844,0,0,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,-3092,-2795,2842,0,0,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(207,3922,1740,-7,0,0,0,0x0, bhvFloorSwitchAnimatesObject
,31),
OBJECT_WITH_ACTS(63,5279,1740,-6,0,0,0,0x10000, bhvAnimatesOnFloorSwitchPress
,31),
OBJECT_WITH_ACTS(57,-204,-1924,3381,0,0,0,0x10000, bhvFerrisWheelAxle
,31),
OBJECT_WITH_ACTS(56,-5728,31819,-2151,0,0,0,0x3ce0000, bhvSlidingPlatform2
,31),
OBJECT_WITH_ACTS(55,-147,31894,512,0,90,0,0x0, bhvSeesawPlatform
,31),
OBJECT_WITH_ACTS(55,1491,31273,512,0,90,0,0x0, bhvSeesawPlatform
,31),
OBJECT_WITH_ACTS(54,-1735,1017,-621,180,0,0,0x20000, bhvSquarishPathMoving
,31),
OBJECT_WITH_ACTS(54,-2349,1017,-1235,180,0,0,0x0, bhvSquarishPathMoving
,31),
OBJECT_WITH_ACTS(54,-2349,1017,-1849,180,0,0,0x20000, bhvSquarishPathMoving
,31),
OBJECT_WITH_ACTS(54,-2963,1017,-2464,180,0,0,0x0, bhvSquarishPathMoving
,31),
OBJECT_WITH_ACTS(54,-1352,-3154,4200,180,0,0,0x20000, bhvSquarishPathMoving
,31),
OBJECT_WITH_ACTS(54,-1966,-3154,3586,180,0,0,0x0, bhvSquarishPathMoving
,31),
OBJECT_WITH_ACTS(0,-7103,-2306,3886,0,90,0,0xc0000, bhvDeathWarp
,31),
OBJECT_WITH_ACTS(18,6816,2860,-7,0,270,0,0xb0000, bhvWarpPipe
,31),
OBJECT_WITH_ACTS(18,-7632,-3143,3886,0,90,0,0xd0000, bhvWarpPipe
,31),
        TERRAIN(/*terrainData*/ bitdw_seg7_collision_level),
        SHOW_DIALOG(/*index*/ 0x00, DIALOG_090),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ 41),
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
