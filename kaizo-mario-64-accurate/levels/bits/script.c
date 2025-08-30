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
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_one_coin,0,57536,6350,4,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,4150,64236,64211,2),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_1up_running_away,0,2478,2300,64636,15),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,4150,64236,63211,1),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_1up,0,63536,63936,64736,15),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,58736,61036,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,2300,61836,25,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,64036,64436,64836,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,62036,60036,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,90,62036,60036,200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,90,62036,60036,65336,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bouncing_fireball_copy,90,62536,64786,64536,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bouncing_fireball_copy,90,62536,64786,64936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bouncing_fireball,90,62536,64786,64736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,3728,2687,64636,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,65336,2000,64736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,64036,2000,64536,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,62210,3000,64631,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,65314,2853,64704,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,59564,1110,64577,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,2500,4500,64536,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_floor_switch_hidden_objects,270,63786,3800,64636,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,2750,4600,64636,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,2650,5000,64286,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,2250,5250,64686,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,1850,5500,64386,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,2093,4582,64511,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,1515,4543,64476,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,350,6050,62286,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,350,6200,63036,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,63186,61636,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,1879,5007,64534,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,1325,61786,65511,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,4150,62786,63111,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,4150,62786,63411,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,4150,62786,64011,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,4150,62786,64311,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,62036,65186,64736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,61411,65186,64036,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,62211,4500,64636,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,4150,64286,63711,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,1317,2678,64636,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,63286,2000,64636,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,59061,4500,64636,0),
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
WARP_NODE(241,16,1,3,0),
WARP_NODE(12,21,1,12,0),
WARP_NODE(11,34,1,10,0),
WARP_NODE(10,21,1,10,0),
OBJECT_WITH_ACTS(57,4150,-750,-1825,180,0,0,0x0, bhvOctagonalPlatformRotating
,31),
OBJECT_WITH_ACTS(0,-100,6140,-4400,0,0,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,800,6140,-4400,0,0,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,350,6140,-4400,0,0,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,-3326,3227,-905,0,0,0,0x4d0000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(0,-6460,2039,-905,0,0,0,0xcf0000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(207,-279,-32768,-900,0,0,0,0x0, bhvFloorSwitchAnimatesObject
,31),
OBJECT_WITH_ACTS(65,1769,-234,-899,0,0,0,0x0, bhvAnimatesOnFloorSwitchPress
,31),
OBJECT_WITH_ACTS(64,-306,-4300,0,0,0,0,0x20000, bhvSeesawPlatform
,31),
OBJECT_WITH_ACTS(63,27,-1555,-713,0,90,0,0x10000, bhvSeesawPlatform
,31),
OBJECT_WITH_ACTS(0,1571,2600,-1100,0,90,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,2400,483,-1100,0,270,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,3750,1405,-900,0,270,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(57,4150,-1750,-1825,0,0,0,0x4000000, bhvOctagonalPlatformRotating
,31),
OBJECT_WITH_ACTS(57,-4770,1732,-904,0,0,0,0x4000000, bhvOctagonalPlatformRotating
,31),
OBJECT_WITH_ACTS(0,3800,-3900,-250,0,270,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,3800,-3900,300,0,270,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,3800,-3900,125,0,270,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,3800,-3900,-75,0,270,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,-1300,2750,-900,0,90,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(145,-8000,6550,4,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(73,351,6652,-6030,0,0,0,0xb0000, bhvWarpPipe
,31),
OBJECT_WITH_ACTS(0,-8000,7000,4,0,90,0,0xa0000, bhvAirborneWarp
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
