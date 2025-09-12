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
#include "levels/castle_grounds/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_castle_grounds_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,262,5288,722,64736,50),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,90,1740,35,2500,65),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,0,63970,260,3503,167),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,82,60870,260,922,51),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,59266,975,63391,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,65096,3180,60536,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,0,3180,60336,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,440,3180,60536,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_wing_cap,0,13,3476,59890,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,0,535,65036,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,0,535,63762,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up,0,0,510,64366,2),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,0,540,63762,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,0,540,65036,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_cannon_open,0,2384,70,1961,64),
MACRO_OBJECT_WITH_BEH_PARAM(macro_butterfly_triplet_2,0,59296,295,320,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_butterfly_triplet_2,0,6330,710,61776,0),
MACRO_OBJECT_END(),
};

static const LevelScript script_func_local_1[] = {
    WARP_NODE(/*id*/ 0x00, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x00, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x01, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x01, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x02, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x03, /*destNode*/ 0x02, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/     0,   900, -1710, /*angle*/ 0, 180, 0, /*behParam*/ 0x00030000, /*beh*/ bhvDeathWarp),
    WARP_NODE(/*id*/ 0x03, /*destLevel*/ LEVEL_CASTLE_GROUNDS, /*destArea*/ 0x01, /*destNode*/ 0x03, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -1328,   260,  4664, /*angle*/ 0, 180, 0, /*behParam*/ 0x00040000, /*beh*/ bhvSpinAirborneCircleWarp),
    WARP_NODE(/*id*/ 0x04, /*destLevel*/ LEVEL_CASTLE_GROUNDS, /*destArea*/ 0x01, /*destNode*/ 0x04, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -3379,  -815, -2025, /*angle*/ 0,   0, 0, /*behParam*/ 0x3C050000, /*beh*/ bhvWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -3379,  -500, -2025, /*angle*/ 0, 180, 0, /*behParam*/ 0x00060000, /*beh*/ bhvLaunchDeathWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -3799, -1199, -5816, /*angle*/ 0,   0, 0, /*behParam*/ 0x00070000, /*beh*/ bhvSwimmingWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -3379,  -500, -2025, /*angle*/ 0, 180, 0, /*behParam*/ 0x00080000, /*beh*/ bhvLaunchStarCollectWarp),
    WARP_NODE(/*id*/ 0x05, /*destLevel*/ LEVEL_VCUTM, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x06, /*destLevel*/ LEVEL_CASTLE_GROUNDS, /*destArea*/ 0x01, /*destNode*/ 0x06, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x07, /*destLevel*/ LEVEL_CASTLE_GROUNDS, /*destArea*/ 0x01, /*destNode*/ 0x07, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x08, /*destLevel*/ LEVEL_CASTLE_GROUNDS, /*destArea*/ 0x01, /*destNode*/ 0x08, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  5408,  4500,  3637, /*angle*/ 0, 225, 0, /*behParam*/ 0x000A0000, /*beh*/ bhvAirborneWarp),
    WARP_NODE(/*id*/ 0x0A, /*destLevel*/ LEVEL_CASTLE_GROUNDS, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -6901,  2376, -6509, /*angle*/ 0, 230, 0, /*behParam*/ 0x00140000, /*beh*/ bhvAirborneWarp),
    WARP_NODE(/*id*/ 0x14, /*destLevel*/ LEVEL_CASTLE_GROUNDS, /*destArea*/ 0x01, /*destNode*/ 0x14, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  4997, -1250,  2258, /*angle*/ 0, 210, 0, /*behParam*/ 0x001E0000, /*beh*/ bhvSwimmingWarp),
    WARP_NODE(/*id*/ 0x1E, /*destLevel*/ LEVEL_CASTLE_GROUNDS, /*destArea*/ 0x01, /*destNode*/ 0x1E, /*flags*/ WARP_NO_CHECKPOINT),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/ -5812,  100, -5937, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvWaterfallSoundLoop),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/ -7430, 1500,   873, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBirdsSoundLoop),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/   -80, 1500,  5004, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvBirdsSoundLoop),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/  7131, 1500, -2989, /*angle*/ 0,   0, 0, /*behParam*/ 0x00020000, /*beh*/ bhvBirdsSoundLoop),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/ -7430, 1500, -5937, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvAmbientSounds),
    OBJECT(/*model*/ MODEL_CASTLE_GROUNDS_VCUTM_GRILL,  /*pos*/     0,    0,     0, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMoatGrills),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/     0,    0,     0, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvInvisibleObjectsUnderBridge),
    OBJECT(/*model*/ MODEL_MIST,                        /*pos*/ -4878, -787, -5690, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvWaterMist2),
    OBJECT(/*model*/ MODEL_MIST,                        /*pos*/ -4996, -787, -5548, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvWaterMist2),
    OBJECT(/*model*/ MODEL_MIST,                        /*pos*/ -5114, -787, -5406, /*angle*/ 0,   0, 0, /*behParam*/ 0x00020000, /*beh*/ bhvWaterMist2),
    OBJECT(/*model*/ MODEL_MIST,                        /*pos*/ -5212, -787, -5219, /*angle*/ 0,   0, 0, /*behParam*/ 0x00030000, /*beh*/ bhvWaterMist2),
    OBJECT(/*model*/ MODEL_MIST,                        /*pos*/ -5311, -787, -5033, /*angle*/ 0,   0, 0, /*behParam*/ 0x00040000, /*beh*/ bhvWaterMist2),
    OBJECT(/*model*/ MODEL_MIST,                        /*pos*/ -5419, -787, -4895, /*angle*/ 0,   0, 0, /*behParam*/ 0x00050000, /*beh*/ bhvWaterMist2),
    OBJECT(/*model*/ MODEL_MIST,                        /*pos*/ -5527, -787, -4757, /*angle*/ 0,   0, 0, /*behParam*/ 0x00060000, /*beh*/ bhvWaterMist2),
    OBJECT(/*model*/ MODEL_MIST,                        /*pos*/ -5686, -787, -4733, /*angle*/ 0,   0, 0, /*behParam*/ 0x00070000, /*beh*/ bhvWaterMist2),
    OBJECT(/*model*/ MODEL_MIST,                        /*pos*/ -5845, -787, -4710, /*angle*/ 0,   0, 0, /*behParam*/ 0x00080000, /*beh*/ bhvWaterMist2),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/  5223, -975,  1667, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFish2),
    OBJECT(/*model*/ MODEL_BIRDS,                       /*pos*/ -5069,  850,  3221, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvBird),
    OBJECT(/*model*/ MODEL_BIRDS,                       /*pos*/ -4711,  742,   433, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvBird),
    OBJECT(/*model*/ MODEL_BIRDS,                       /*pos*/  5774,  913, -1114, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvBird),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/ -1328,  260,  4664, /*angle*/ 0, 180, 0, /*behParam*/ 0x00280000, /*beh*/ bhvIntroScene),
    OBJECT(/*model*/ MODEL_CASTLE_GROUNDS_CANNON_GRILL, /*pos*/     0,    0,     0, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHiddenAt120Stars),
    OBJECT(/*model*/ MODEL_LAKITU,                      /*pos*/    11,  803, -3015, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvCameraLakitu),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT(/*model*/ MODEL_CASTLE_GROUNDS_FLAG, /*pos*/ -3213, 3348, -3011, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvCastleFlagWaving),
    OBJECT(/*model*/ MODEL_CASTLE_GROUNDS_FLAG, /*pos*/  3213, 3348, -3011, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvCastleFlagWaving),
    OBJECT(/*model*/ MODEL_CASTLE_GROUNDS_FLAG, /*pos*/ -3835, 3348, -6647, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvCastleFlagWaving),
    OBJECT(/*model*/ MODEL_CASTLE_GROUNDS_FLAG, /*pos*/  3835, 3348, -6647, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvCastleFlagWaving),
    RETURN(),
};

static const LevelScript script_func_local_4[] = {
    OBJECT(/*model*/ MODEL_BUTTERFLY, /*pos*/ -4508,  406,  4400, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvButterfly),
    OBJECT(/*model*/ MODEL_BUTTERFLY, /*pos*/ -4408,  406,  4500, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvButterfly),
    OBJECT(/*model*/ MODEL_BUTTERFLY, /*pos*/ -4708,  406,  4100, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvButterfly),
    OBJECT(/*model*/ MODEL_BUTTERFLY, /*pos*/ -6003,  473, -2621, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvButterfly),
    OBJECT(/*model*/ MODEL_BUTTERFLY, /*pos*/ -6003,  473, -2321, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvButterfly),
    OBJECT(/*model*/ MODEL_BUTTERFLY, /*pos*/  6543,  461,  -617, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvButterfly),
    OBJECT(/*model*/ MODEL_BUTTERFLY, /*pos*/  6143,  461,  -617, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvButterfly),
    OBJECT(/*model*/ MODEL_BUTTERFLY, /*pos*/  5773,  775, -5722, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvButterfly),
    OBJECT(/*model*/ MODEL_BUTTERFLY, /*pos*/  5873,  775, -5622, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvButterfly),
    OBJECT(/*model*/ MODEL_BUTTERFLY, /*pos*/  5473,  775, -5322, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvButterfly),
    OBJECT(/*model*/ MODEL_BUTTERFLY, /*pos*/ -1504,  326,  3196, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvButterfly),
    OBJECT(/*model*/ MODEL_BUTTERFLY, /*pos*/ -1204,  326,  3296, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvButterfly),
    OBJECT(/*model*/ MODEL_YOSHI,     /*pos*/     0, 3174, -5625, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvYoshi),
    RETURN(),
};

const LevelScript level_castle_grounds_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _outside_mio0SegmentRomStart, _outside_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group10_mio0SegmentRomStart, _group10_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group10_geoSegmentRomStart,  _group10_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group15_mio0SegmentRomStart, _group15_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group15_geoSegmentRomStart,  _group15_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_11),
    JUMP_LINK(script_func_global_16),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,           castle_grounds_geo_0006F4),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_BUBBLY_TREE,  bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE,    warp_pipe_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CASTLE_DOOR,  castle_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_METAL_DOOR,   metal_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_VCUTM_GRILL,  castle_grounds_geo_00070C),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_FLAG,         castle_grounds_geo_000660),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CANNON_GRILL, castle_grounds_geo_000724),

    AREA(/*index*/ 1, castle_grounds_geo_00073C),
MACRO_OBJECTS(local_macro_objects_castle_grounds_1),
WARP_NODE(30,16,1,30,0),
WARP_NODE(20,16,1,20,0),
WARP_NODE(10,16,1,10,0),
WARP_NODE(8,16,1,8,0),
WARP_NODE(7,16,1,7,0),
WARP_NODE(6,16,1,6,0),
WARP_NODE(5,18,1,10,0),
WARP_NODE(4,16,1,4,0),
WARP_NODE(3,16,1,3,0),
WARP_NODE(2,6,3,2,0),
WARP_NODE(1,6,1,1,0),
WARP_NODE(0,6,1,0,0),
WARP_NODE(241,16,1,3,0),
OBJECT_WITH_ACTS(85,0,3174,-5625,0,0,0,0x0, bhvYoshi
,31),
OBJECT_WITH_ACTS(187,-1204,326,3296,0,0,0,0x0, bhvButterfly
,31),
OBJECT_WITH_ACTS(212,-3417,1524,-1522,0,0,0,0x0, bhv1Up
,31),
OBJECT_WITH_ACTS(129,-3441,1192,-1528,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,-2411,1869,-2519,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,-2434,1608,-1712,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,-2548,1294,-1228,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,-2395,982,-581,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(207,-2576,482,535,0,0,0,0x0, bhvFloorSwitchHiddenObjects
,31),
OBJECT_WITH_ACTS(223,-6003,473,-2621,0,0,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(223,-2194,533,748,0,0,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(223,4003,406,-574,0,0,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(223,-96,806,605,0,0,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(55,3835,3348,-6647,0,0,0,0x0, bhvCastleFlagWaving
,31),
OBJECT_WITH_ACTS(55,-3835,3348,-6647,0,0,0,0x0, bhvCastleFlagWaving
,31),
OBJECT_WITH_ACTS(55,3213,3348,-3011,0,0,0,0x0, bhvCastleFlagWaving
,31),
OBJECT_WITH_ACTS(55,-3213,3348,-3011,0,0,0,0x0, bhvCastleFlagWaving
,31),
OBJECT_WITH_ACTS(102,11,803,-3015,0,0,0,0x10000, bhvCameraLakitu
,31),
OBJECT_WITH_ACTS(56,0,0,0,0,0,0,0x0, bhvHiddenAt120Stars
,31),
OBJECT_WITH_ACTS(0,-1328,260,4664,0,180,0,0x280000, bhvIntroScene
,31),
OBJECT_WITH_ACTS(84,5774,913,-1114,0,0,0,0x10000, bhvBird
,31),
OBJECT_WITH_ACTS(217,-7,686,-3097,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(22,1377,3174,-4316,0,0,0,0x0, bhvWarpPipe
,31),
OBJECT_WITH_ACTS(0,5223,-975,1667,0,0,0,0x0, bhvFish2
,31),
OBJECT_WITH_ACTS(142,-5845,-787,-4710,0,0,0,0x80000, bhvWaterMist2
,31),
OBJECT_WITH_ACTS(142,-5686,-787,-4733,0,0,0,0x70000, bhvWaterMist2
,31),
OBJECT_WITH_ACTS(142,-5527,-787,-4757,0,0,0,0x60000, bhvWaterMist2
,31),
OBJECT_WITH_ACTS(142,-5419,-787,-4895,0,0,0,0x50000, bhvWaterMist2
,31),
OBJECT_WITH_ACTS(142,-5311,-787,-5033,0,0,0,0x40000, bhvWaterMist2
,31),
OBJECT_WITH_ACTS(142,-5212,-787,-5219,0,0,0,0x30000, bhvWaterMist2
,31),
OBJECT_WITH_ACTS(142,-5114,-787,-5406,0,0,0,0x20000, bhvWaterMist2
,31),
OBJECT_WITH_ACTS(142,-4996,-787,-5548,0,0,0,0x10000, bhvWaterMist2
,31),
OBJECT_WITH_ACTS(142,-4878,-787,-5690,0,0,0,0x0, bhvWaterMist2
,31),
OBJECT_WITH_ACTS(0,0,0,0,0,0,0,0x0, bhvInvisibleObjectsUnderBridge
,31),
OBJECT_WITH_ACTS(54,0,0,0,0,0,0,0x0, bhvMoatGrills
,31),
OBJECT_WITH_ACTS(0,-7430,1500,-5937,0,0,0,0x0, bhvAmbientSounds
,31),
OBJECT_WITH_ACTS(0,7131,1500,-2989,0,0,0,0x20000, bhvBirdsSoundLoop
,31),
OBJECT_WITH_ACTS(0,-80,1500,5004,0,0,0,0x10000, bhvBirdsSoundLoop
,31),
OBJECT_WITH_ACTS(0,-7430,1500,873,0,0,0,0x0, bhvBirdsSoundLoop
,31),
OBJECT_WITH_ACTS(0,-5812,100,-5937,0,0,0,0x0, bhvWaterfallSoundLoop
,31),
OBJECT_WITH_ACTS(0,4997,-1250,2258,0,210,0,0x1e0000, bhvSwimmingWarp
,31),
OBJECT_WITH_ACTS(0,-6901,2376,-6509,0,230,0,0x140000, bhvAirborneWarp
,31),
OBJECT_WITH_ACTS(0,5408,4500,3637,0,225,0,0xa0000, bhvAirborneWarp
,31),
OBJECT_WITH_ACTS(0,-3379,-500,-2025,0,180,0,0x80000, bhvLaunchStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,-3799,-1199,-5816,0,0,0,0x70000, bhvSwimmingWarp
,31),
OBJECT_WITH_ACTS(0,-3379,-500,-2025,0,180,0,0x60000, bhvLaunchDeathWarp
,31),
OBJECT_WITH_ACTS(0,-3379,-815,-2025,0,0,0,0x3c050000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,-1328,260,4664,0,180,0,0x40000, bhvSpinAirborneCircleWarp
,31),
OBJECT_WITH_ACTS(0,-27,900,-1616,0,180,0,0x30000, bhvDeathWarp
,31),
        TERRAIN(/*terrainData*/ castle_grounds_seg7_collision_level),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_SOUND_PLAYER),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_GRASS),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 180, /*pos*/ -1328, 260, 4664),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
