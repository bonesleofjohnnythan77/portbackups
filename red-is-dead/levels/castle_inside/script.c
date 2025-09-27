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

#include "areas/1/custom.model.inc.h"
#include "levels/castle_inside/header.h"
extern u8 _castle_inside_segment_ESegmentRomStart[]; 
extern u8 _castle_inside_segment_ESegmentRomEnd[];
#include "levels/castle_grounds/header.h"
const LevelScript level_castle_inside_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _castle_groundsSegmentRomStart, _castle_groundsSegmentRomEnd),
LOAD_RAW(0x0E, _castle_inside_segment_ESegmentRomStart, _castle_inside_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group10_mio0SegmentRomStart,_group10_mio0SegmentRomEnd),
LOAD_RAW(12,_group10_geoSegmentRomStart,_group10_geoSegmentRomEnd),
LOAD_MIO0(6,_group15_mio0SegmentRomStart,_group15_mio0SegmentRomEnd),
LOAD_RAW(13,_group15_geoSegmentRomStart,_group15_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,           castle_grounds_geo_0006F4),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_BUBBLY_TREE,  bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE,    warp_pipe_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CASTLE_DOOR,  castle_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_METAL_DOOR,   metal_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_VCUTM_GRILL,  castle_grounds_geo_00070C),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_FLAG,         castle_grounds_geo_000660),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CANNON_GRILL, castle_grounds_geo_000724),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
LOAD_MODEL_FROM_GEO(41, metal_door_geo),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_11),
JUMP_LINK(script_func_global_16),
JUMP_LINK(local_area_castle_inside_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_inside_1_[] = {
AREA(1,Geo_castle_inside_1_0x14c1700),
TERRAIN(col_castle_inside_1_0xe002b90),
SET_BACKGROUND_MUSIC(0,37),
TERRAIN_TYPE(4),
JUMP_LINK(local_objects_castle_inside_1_),
JUMP_LINK(local_warps_castle_inside_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_inside_1_[] = {
OBJECT_WITH_ACTS(0,5374,-2831,6612,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,583,2683,-5387,0,-154,0,0xb0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(37,5463,-3021,7000,0,-180,0,0x20000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(37,5319,-3021,7002,0,-358,0,0x20000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(34,9450,-2969,-6256,0,311,0,0x73000000, bhvDoor,31),
OBJECT_WITH_ACTS(34,-6930,-2969,5329,0,146,0,0x5a000000, bhvDoor,31),
OBJECT_WITH_ACTS(34,-8679,-2969,-4841,0,39,0,0x46000000, bhvDoor,31),
OBJECT_WITH_ACTS(0,-8770,-2917,-4999,0,36,0,0x10000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-7067,-2917,5478,0,55,0,0x0, bhvWarp,31),
OBJECT_WITH_ACTS(0,9684,-2917,-6448,0,42,0,0x30000, bhvWarp,31),
OBJECT_WITH_ACTS(144,9728,-2604,-6426,0,129,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,-7035,-2604,5507,0,145,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,-8830,-2552,-5010,0,128,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(0,-2404,-2864,-290,0,90,0,0xf00000, bhvLaunchStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-9072,3594,1165,0,90,0,0xf10000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(137,-9072,3385,1165,0,90,0,0x90000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-4581,2865,-3553,0,32,0,0x70000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(221,10227,-3229,-6845,0,-66,0,0x53000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(217,-7055,-3021,5518,0,-34,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-8852,-3021,-5007,0,-53,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,9702,-3021,-6426,0,-53,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-6167,2917,-1963,0,-47,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-7212,2917,-791,0,-45,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(124,-8787,-2969,-4704,0,-318,0,0x7c0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-6744,-2969,5398,0,-212,0,0x7b0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,9254,-2969,-6336,0,-49,0,0x7a0000, bhvMessagePanel,31),
RETURN()
};
const LevelScript local_warps_castle_inside_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,240,0),
WARP_NODE(241,6,1,241,0),
WARP_NODE(0,14,1,10,0),
WARP_NODE(1,13,1,10,0),
WARP_NODE(2,26,1,10,0),
WARP_NODE(3,15,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
