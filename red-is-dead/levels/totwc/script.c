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
#include "levels/totwc/header.h"
extern u8 _totwc_segment_ESegmentRomStart[]; 
extern u8 _totwc_segment_ESegmentRomEnd[];
const LevelScript level_totwc_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _totwc_segment_7SegmentRomStart, _totwc_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _totwcSegmentRomStart, _totwcSegmentRomEnd),
LOAD_RAW(0x0E, _totwc_segment_ESegmentRomStart, _totwc_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, totwc_geo_000160),
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
// LOAD_MODEL_FROM_DL(84,0x05002e00,4),
// LOAD_MODEL_FROM_DL(86,0x05003120,4),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_9),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_totwc_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_totwc_1_[] = {
AREA(1,Geo_totwc_1_0x3461700),
TERRAIN(col_totwc_1_0xe041fa0),
SET_BACKGROUND_MUSIC(0,43),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_totwc_1_),
JUMP_LINK(local_warps_totwc_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_totwc_1_[] = {
OBJECT_WITH_ACTS(0,-4001,1752,-3370,0,-1,0,0x10000, bhvFlyingWarp,31),
OBJECT_WITH_ACTS(0,4832,652,3810,0,-154,0,0xb0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-2387,104,-947,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,-2597,104,-1440,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,-1215,104,-2133,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,-1381,104,-1051,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,-2138,104,1174,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,-2463,104,773,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,-1094,104,-287,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,-1503,104,-383,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,-271,104,699,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,1008,104,-252,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(122,4513,-469,3460,0,0,0,0x2000000, bhvStar,63),
OBJECT_WITH_ACTS(0,1467,157,-2417,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,1083,156,-3465,0,0,0,0x0, bhvHiddenStar,63),
OBJECT_WITH_ACTS(0,-1149,0,-2382,0,0,0,0x0, bhvHiddenStarTrigger,63),
OBJECT_WITH_ACTS(0,-2462,0,-2886,0,0,0,0x0, bhvHiddenStarTrigger,63),
OBJECT_WITH_ACTS(0,-2196,0,-2561,0,0,0,0x0, bhvHiddenStarTrigger,63),
OBJECT_WITH_ACTS(0,-2099,0,-3249,0,0,0,0x0, bhvHiddenStarTrigger,63),
OBJECT_WITH_ACTS(0,-1523,0,-2861,0,0,0,0x0, bhvHiddenStarTrigger,63),
OBJECT_WITH_ACTS(85,4671,0,3534,0,0,0,0x0, bhvCapSwitch,63),
OBJECT_WITH_ACTS(137,4530,365,2983,0,0,0,0x0, bhvExclamationBox,63),
OBJECT_WITH_ACTS(122,892,-360,-43,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(0,8,4,132,6,0,0,0,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,8,5,132,6,0,0,1,editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_totwc_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,29,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,18,1,240,0),
WARP_NODE(241,18,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,29,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
