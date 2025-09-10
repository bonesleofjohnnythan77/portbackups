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
#include "levels/castle_courtyard/header.h"
extern u8 _castle_courtyard_segment_ESegmentRomStart[]; 
extern u8 _castle_courtyard_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_castle_courtyard_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _castle_courtyard_segment_ESegmentRomStart, _castle_courtyard_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bbh_skybox_mio0SegmentRomStart,_bbh_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group10_mio0SegmentRomStart,_group10_mio0SegmentRomEnd),
LOAD_RAW(12,_group10_geoSegmentRomStart,_group10_geoSegmentRomEnd),
LOAD_MIO0(6,_group15_mio0SegmentRomStart,_group15_mio0SegmentRomEnd),
LOAD_RAW(13,_group15_geoSegmentRomStart,_group15_geoSegmentRomEnd),
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
JUMP_LINK(local_area_castle_courtyard_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,294,5568,654,-6295),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_courtyard_1_[] = {
AREA(1,Geo_castle_courtyard_1_0x1282690),
TERRAIN(col_castle_courtyard_1_0xe022f20),
SET_BACKGROUND_MUSIC(0,35),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_courtyard_1_),
JUMP_LINK(local_warps_castle_courtyard_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_courtyard_1_[] = {
OBJECT_WITH_ACTS(0,5568,654,-6295,0,294,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(221,6454,1243,-6761,0,180,0,0x52000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(0,7183,764,-7185,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(201,1067,427,1405,0,0,0,0x0, bhvCannonClosed,31),
OBJECT_WITH_ACTS(124,5047,290,-6442,0,41,0,0x80000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(22,-4757,437,-7189,0,0,0,0x0, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,-4787,725,-6894,0,171,0,0x10000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-4787,725,-6894,0,171,0,0x20000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(124,-4560,437,-6974,0,351,0,0xf0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(195,-162,437,1142,0,43,0,0x0, bhvBobombBuddyOpensCannon,31),
OBJECT_WITH_ACTS(217,-1556,407,3989,0,353,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(124,-1752,437,3746,0,174,0,0x200000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,-4975,1318,-3636,0,0,0,0x30000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-4454,1223,-3378,0,63,0,0x50000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(0,-4454,1223,-3378,0,63,0,0x40000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(124,-4519,939,-3936,0,45,0,0x230000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(37,4000,290,-6601,0,0,0,0x2000000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(37,4154,290,-6601,0,180,0,0x2000000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(23,5295,290,-6965,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,5007,290,-5521,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,2160,290,-7026,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,855,290,-6105,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-1769,290,-6716,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-1602,290,-4832,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-2889,437,-3665,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-3276,437,-1804,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-292,397,-3072,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,849,290,-4432,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,3257,311,-4056,0,0,0,0x0, bhvTree,31),
RETURN()
};
const LevelScript local_warps_castle_courtyard_1_[] = {
WARP_NODE(0,28,1,10,0),
WARP_NODE(10,26,1,0,0),
WARP_NODE(1,26,1,1,0),
WARP_NODE(2,26,1,2,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,26,1,4,0),
WARP_NODE(5,26,1,5,0),
RETURN()
};
