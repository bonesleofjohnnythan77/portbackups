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
#include "levels/ending/header.h"
extern u8 _ending_segment_ESegmentRomStart[]; 
extern u8 _ending_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_ending_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _ending_segment_ESegmentRomStart, _ending_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_ccm_skybox_mio0SegmentRomStart,_ccm_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group7_mio0SegmentRomStart,_group7_mio0SegmentRomEnd),
LOAD_RAW(12,_group7_geoSegmentRomStart,_group7_geoSegmentRomEnd),
LOAD_MIO0(6,_group16_mio0SegmentRomStart,_group16_mio0SegmentRomEnd),
LOAD_RAW(13,_group16_geoSegmentRomStart,_group16_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_BBH_HAUNTED_DOOR,           haunted_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_BBH_STAIRCASE_STEP,         geo_bbh_0005B0),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TILTING_FLOOR_PLATFORM, geo_bbh_0005C8),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM,      geo_bbh_0005E0),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM_PART, geo_bbh_0005F8),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MOVING_BOOKSHELF,       geo_bbh_000610),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MESH_ELEVATOR,          geo_bbh_000628),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MERRY_GO_ROUND,         geo_bbh_000640),
LOAD_MODEL_FROM_GEO(MODEL_BBH_WOODEN_TOMB,            geo_bbh_000658),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
// LOAD_MODEL_FROM_GEO(100,0x06003754),
// LOAD_MODEL_FROM_GEO(101,0x06003874),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_8),
JUMP_LINK(script_func_global_17),
JUMP_LINK(local_area_ending_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_ending_1_[] = {
AREA(1,Geo_ending_1_0x135df20),
TERRAIN(col_ending_1_0xe031030),
SET_BACKGROUND_MUSIC(0,36),
TERRAIN_TYPE(2),
JUMP_LINK(local_objects_ending_1_),
JUMP_LINK(local_warps_ending_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ending_1_[] = {
OBJECT_WITH_ACTS(0,2492,2460,-2253,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(207,2483,1675,-4724,0,0,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(192,2487,2156,-6497,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,2484,2156,-6182,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,2481,2156,-6767,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,2483,2156,-7075,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(207,2478,1675,-3885,0,0,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(85,2495,2427,-8177,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(137,2457,3000,394,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(192,3791,2373,-8376,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,4902,2373,-8370,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,5983,2373,-8388,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,7092,2373,-8346,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(84,8177,1592,-5807,0,0,0,0x0, bhvSpindrift,31),
OBJECT_WITH_ACTS(122,5141,-1320,8864,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,1956,-420,-6115,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-4102,3762,8692,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(122,1841,0,3383,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,1841,0,3383,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,1841,0,3383,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(0,5659,1667,-2299,0,270,0,0xb0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,3147,3605,2284,0,271,0,0xc0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(116,-23,1789,-1292,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-23,1873,-1292,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(207,-3711,1675,-2098,0,180,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(188,2464,3137,3045,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(101,-1081,2931,7904,0,0,0,0x3000000, bhvBigChillBully,31),
OBJECT_WITH_ACTS(145,3244,3227,3887,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(0,20,5,22,0,0,20,0, RM_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_ending_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(11,25,1,12,0),
WARP_NODE(12,25,1,11,0),
WARP_NODE(240,16,1,11,0),
WARP_NODE(241,16,1,12,0),
RETURN()
};
