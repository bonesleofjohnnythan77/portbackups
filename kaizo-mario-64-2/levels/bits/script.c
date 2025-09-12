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
#include "levels/bits/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_bits_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,64136,61536,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,65264,61536,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,840,61536,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,4100,64216,63736,1),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,6180,63745,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,6260,64083,63736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_piranha_plant,0,1920,64349,63696,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,60456,63079,64736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,1380,63796,64876,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_whomp,90,61356,64206,64736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,90,61627,65127,64337,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,600,65336,64636,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,900,60,64636,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,1200,310,64636,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,1500,560,64636,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,1800,810,64636,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,2100,1060,64636,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_recovery_heart,0,1279,2639,64577,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,64137,2750,64377,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb,0,62697,2059,64577,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb,0,62057,2059,64737,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,58336,2080,64646,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,58936,2080,65356,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,58936,2080,63986,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,58936,2080,65356,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,58336,2080,64646,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,58936,2080,63986,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up,0,58896,2280,64646,3),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba_triplet_spawner,0,60297,3839,64537,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb,0,63977,3800,64457,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb,0,64457,3800,64497,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,1879,4639,63977,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,65277,6059,61777,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_recovery_heart,0,359,6099,62317,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_piranha_plant,0,3680,2428,63696,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,59076,2080,64636,2),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,59076,2280,64636,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba_triplet_spawner,0,360,6040,62656,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,65234,63079,64736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,1590,64416,63481,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,62576,62176,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,65238,62936,63936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,7618,4850,63627,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,65400,3109,64627,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,62206,4050,64636,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,60706,2103,64506,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,348,5921,60951,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,63236,61436,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,60767,2344,64632,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,377,4140,63494,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,63785,64290,64731,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,58824,64637,64740,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,7322,4566,63614,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,61936,63103,64736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,62880,63094,64736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_1up_running_away,0,4100,64486,63736,0),
MACRO_OBJECT_END(),
};

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_BITS_SLIDING_PLATFORM,       /*pos*/ -2370, -4525,     0, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00100000, /*beh*/ bhvSlidingPlatform2),
    OBJECT(/*model*/ MODEL_BITS_TWIN_SLIDING_PLATFORMS, /*pos*/ -2611,  3544,  -904, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00CF0000, /*beh*/ bhvSlidingPlatform2),
    OBJECT(/*model*/ MODEL_BITS_TWIN_SLIDING_PLATFORMS, /*pos*/ -4700,  3544,  -904, /*angle*/ 0, 180, 0, /*behParam*/ 0x008F0000, /*beh*/ bhvSlidingPlatform2),
    OBJECT(/*model*/ MODEL_BITS_OCTAGONAL_PLATFORM,     /*pos*/  4139, -1740, -1831, /*angle*/ 0, 0, 0,   /*behParam*/ 0x02000000, /*beh*/ bhvOctagonalPlatformRotating),
    OBJECT(/*model*/ MODEL_BITS_OCTAGONAL_PLATFORM,     /*pos*/ -6459,  1732,  -904, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvOctagonalPlatformRotating),
    OBJECT(/*model*/ MODEL_BITS_OCTAGONAL_PLATFORM,     /*pos*/ -4770,  1732,  -904, /*angle*/ 0, 0, 0,   /*behParam*/ 0x02000000, /*beh*/ bhvOctagonalPlatformRotating),
    OBJECT(/*model*/ MODEL_BITS_FERRIS_WHEEL_AXLE,      /*pos*/ -1748, -1330, -1094, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvFerrisWheelAxle),
    OBJECT(/*model*/ MODEL_BITS_FERRIS_WHEEL_AXLE,      /*pos*/  2275,  5628, -1315, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvFerrisWheelAxle),
    OBJECT(/*model*/ MODEL_BITS_FERRIS_WHEEL_AXLE,      /*pos*/  3114,  4701, -1320, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvFerrisWheelAxle),
    OBJECT(/*model*/ MODEL_BITS_ARROW_PLATFORM,         /*pos*/  2793,  2325,  -904, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00610000, /*beh*/ bhvActivatedBackAndForthPlatform),
    OBJECT(/*model*/ MODEL_BITS_SEESAW_PLATFORM,        /*pos*/    27, -1555,  -713, /*angle*/ 0, 90, 0,  /*behParam*/ 0x00010000, /*beh*/ bhvSeesawPlatform),
    OBJECT(/*model*/ MODEL_BITS_TILTING_W_PLATFORM,     /*pos*/  -306, -4300,     0, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00020000, /*beh*/ bhvSeesawPlatform),
    OBJECT(/*model*/ MODEL_BITS_STAIRCASE,              /*pos*/  1769,  -234,  -899, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvAnimatesOnFloorSwitchPress),
    OBJECT(/*model*/ MODEL_PURPLE_SWITCH,               /*pos*/  -279,  -234,  -900, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvFloorSwitchAnimatesObject),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/ -6460,  2039,  -905, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00CF0000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/ -3326,  3227,  -905, /*angle*/ 0, 0, 0,   /*behParam*/ 0x004D0000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/  5518,  3184, -4019, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvFlamethrower),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/  6465,  3731, -1915, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvFlamethrower),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/  5915,  3718, -4019, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvFlamethrower),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ 350, 6800, -6800, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserCourseRedCoinStar),
    RETURN(),
};

const LevelScript level_bits_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _bits_segment_7SegmentRomStart, _bits_segment_7SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _bits_skybox_mio0SegmentRomStart, _bits_skybox_mio0SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _sky_mio0SegmentRomStart, _sky_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group14_mio0SegmentRomStart, _group14_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group14_geoSegmentRomStart,  _group14_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_15),
    JUMP_LINK(script_func_global_1),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,           bits_geo_000430),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,           bits_geo_000448),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,           bits_geo_000460),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,           bits_geo_000478),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,           bits_geo_000490),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,           bits_geo_0004A8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,           bits_geo_0004C0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,           bits_geo_0004D8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,           bits_geo_0004F0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,           bits_geo_000508),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,           bits_geo_000520),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,           bits_geo_000538),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,           bits_geo_000550),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10,           bits_geo_000568),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,           bits_geo_000580),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12,           bits_geo_000598),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13,           bits_geo_0005B0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14,           bits_geo_0005C8),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_SLIDING_PLATFORM,       bits_geo_0005E0),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_TWIN_SLIDING_PLATFORMS, bits_geo_0005F8),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_OCTAGONAL_PLATFORM,     bits_geo_000610),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_BLUE_PLATFORM,          bits_geo_000628),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_FERRIS_WHEEL_AXLE,      bits_geo_000640),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_ARROW_PLATFORM,         bits_geo_000658),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_SEESAW_PLATFORM,        bits_geo_000670),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_TILTING_W_PLATFORM,     bits_geo_000688),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE,              bits_geo_0006A0),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE_FRAME1,       bits_geo_0006B8),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE_FRAME2,       bits_geo_0006D0),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE_FRAME3,       bits_geo_0006E8),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE_FRAME4,       bits_geo_000700),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_WARP_PIPE,              warp_pipe_geo),

    AREA(/*index*/ 1, bits_geo_000718),
MACRO_OBJECTS(local_macro_objects_bits_1),
WARP_NODE(241,6,2,107,0),
WARP_NODE(12,21,1,12,0),
WARP_NODE(11,34,1,10,0),
WARP_NODE(10,21,1,10,0),
OBJECT_WITH_ACTS(0,350,6800,-6800,0,0,0,0x0, bhvBowserCourseRedCoinStar
,31),
OBJECT_WITH_ACTS(0,5915,3718,-4019,0,0,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,6465,3731,-1915,0,0,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,5518,3184,-4019,0,0,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,-3326,3227,-905,0,0,0,0x4d0000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(0,-6460,2039,-905,0,0,0,0xcf0000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(207,-279,-234,-900,0,0,0,0x0, bhvFloorSwitchAnimatesObject
,31),
OBJECT_WITH_ACTS(65,1769,-234,-899,0,0,0,0x0, bhvAnimatesOnFloorSwitchPress
,31),
OBJECT_WITH_ACTS(64,-306,-4300,0,0,0,0,0x20000, bhvSeesawPlatform
,31),
OBJECT_WITH_ACTS(63,27,-1555,-713,0,90,0,0x10000, bhvSeesawPlatform
,31),
OBJECT_WITH_ACTS(62,2793,2325,-904,0,0,0,0x610000, bhvActivatedBackAndForthPlatform
,31),
OBJECT_WITH_ACTS(61,3114,4701,-1320,0,0,0,0x0, bhvFerrisWheelAxle
,31),
OBJECT_WITH_ACTS(61,2275,5628,-1315,0,0,0,0x0, bhvFerrisWheelAxle
,31),
OBJECT_WITH_ACTS(61,-1748,-1330,-1094,0,0,0,0x0, bhvFerrisWheelAxle
,31),
OBJECT_WITH_ACTS(57,-4770,1732,-904,0,0,0,0x2000000, bhvOctagonalPlatformRotating
,31),
OBJECT_WITH_ACTS(57,-6459,1732,-904,0,0,0,0x0, bhvOctagonalPlatformRotating
,31),
OBJECT_WITH_ACTS(57,4139,-1740,-1831,0,0,0,0x2000000, bhvOctagonalPlatformRotating
,31),
OBJECT_WITH_ACTS(55,-4700,3544,-904,0,180,0,0x8f0000, bhvSlidingPlatform2
,31),
OBJECT_WITH_ACTS(55,-2611,3544,-904,0,0,0,0xcf0000, bhvSlidingPlatform2
,31),
OBJECT_WITH_ACTS(54,-2370,-4525,0,0,0,0,0x100000, bhvSlidingPlatform2
,31),
OBJECT_WITH_ACTS(0,351,6800,-3900,0,180,0,0xc0000, bhvDeathWarp
,31),
OBJECT_WITH_ACTS(73,351,6652,-6030,0,0,0,0xb0000, bhvWarpPipe
,31),
OBJECT_WITH_ACTS(0,-7039,-3812,4,0,90,0,0xa0000, bhvAirborneWarp
,31),
        TERRAIN(/*terrainData*/ bits_seg7_collision_level),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_LEVEL_KOOPA_ROAD),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 90, /*pos*/ -7039, -4812, 4),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
