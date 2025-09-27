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
#include "levels/vcutm/header.h"
extern u8 _vcutm_segment_ESegmentRomStart[]; 
extern u8 _vcutm_segment_ESegmentRomEnd[];
#include "levels/castle_grounds/header.h"
const LevelScript level_vcutm_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _castle_groundsSegmentRomStart, _castle_groundsSegmentRomEnd),
LOAD_RAW(0x0E, _vcutm_segment_ESegmentRomStart, _vcutm_segment_ESegmentRomEnd),
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
JUMP_LINK(local_area_vcutm_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_vcutm_1_[] = {
AREA(1,Geo_vcutm_1_0x2541700),
TERRAIN(col_vcutm_1_0xe032aa0),
SET_BACKGROUND_MUSIC(0,39),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_vcutm_1_),
JUMP_LINK(local_warps_vcutm_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_vcutm_1_[] = {
OBJECT_WITH_ACTS(0,-2978,-3196,-4771,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,8357,-1900,-1989,0,-154,0,0xb0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,8144,-1790,-1990,0,-153,0,0xc0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,8134,-2414,-2080,0,107,0,0xd0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,8188,-2305,-2020,0,-151,0,0x0, bhvInstantActiveWarp,31),
OBJECT_WITH_ACTS(124,-7948,-2396,105,0,-269,0,0x7d0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(217,9906,-1823,-8461,0,-90,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,9754,-1823,-8192,0,-90,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,9930,-1823,-7972,0,-90,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(212,9964,-1094,-8228,0,-90,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(129,9960,-1719,-8197,0,-90,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(217,-1435,-3282,4258,0,-90,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-296,-2292,3592,0,-90,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-611,-2553,3562,0,-90,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-891,-2813,3796,0,-90,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-1170,-3021,4031,0,-90,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,2886,-3021,-3452,0,-90,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,79,-3230,1491,0,-90,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,7149,-3230,5465,0,-90,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(221,-2322,-5365,1598,0,-90,0,0x52000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(137,-8266,-1511,-58,0,-90,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,9954,-1823,-8233,0,-90,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(137,-5691,-886,-4765,0,-90,0,0xc0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-6304,-2761,3615,0,-90,0,0xf00000, bhvLaunchStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-6188,-2553,3783,0,-90,0,0xf10000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,-1113,-5469,2268,0,-90,0,0x28000000, bhvWarp,31),
OBJECT_WITH_ACTS(0,7824,-3178,5375,0,-90,0,0x14010000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-297,-3178,4856,0,-90,0,0x28050000, bhvWarp,31),
OBJECT_WITH_ACTS(0,807,-4115,1496,0,-90,0,0x1e030000, bhvWarp,31),
OBJECT_WITH_ACTS(0,3850,-2292,-4428,0,-90,0,0xf040000, bhvWarp,31),
OBJECT_WITH_ACTS(217,-8479,-2292,-236,0,-90,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-8405,-2292,131,0,-90,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-8224,-2136,-57,0,-90,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-8228,-2136,-265,0,-90,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-8219,-2136,204,0,-90,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-8380,-2136,-54,0,-90,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-8165,-2396,-231,0,-90,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-8409,-2396,-61,0,-90,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-8173,-2396,189,0,-90,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(36,-8023,-2396,-37,0,-90,0,0x14000000, bhvDoor,31),
OBJECT_WITH_ACTS(37,-3665,-3438,-4814,0,-90,0,0x2020000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(37,-3655,-3438,-4657,0,89,0,0x2020000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(124,-4491,-3281,3620,0,0,0,0x450000, bhvMessagePanel,31),
RETURN()
};
const LevelScript local_warps_vcutm_1_[] = {
WARP_NODE(10,18,1,0,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,18,1,4,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,18,1,240,0),
WARP_NODE(241,18,1,241,0),
WARP_NODE(0,17,1,10,0),
WARP_NODE(1,5,1,10,0),
WARP_NODE(2,26,1,0,0),
WARP_NODE(3,24,1,10,0),
WARP_NODE(4,12,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
