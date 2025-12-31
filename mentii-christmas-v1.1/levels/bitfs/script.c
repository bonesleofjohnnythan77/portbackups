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
#include "levels/bitfs/header.h"
extern u8 _bitfs_segment_ESegmentRomStart[]; 
extern u8 _bitfs_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_bitfs_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _bitfs_segment_ESegmentRomStart, _bitfs_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom21544320_skybox_mio0SegmentRomStart,_SkyboxCustom21544320_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
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
JUMP_LINK(local_area_bitfs_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,0,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bitfs_1_[] = {
AREA(1,Geo_bitfs_1_0x14b1cb0),
TERRAIN(col_bitfs_1_0xe034750),
SET_BACKGROUND_MUSIC(0,40),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bitfs_1_),
JUMP_LINK(local_warps_bitfs_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bitfs_1_[] = {
OBJECT_WITH_ACTS(0,15,400,622,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,483,670,-1951,0,0,0,0x0, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,6006,640,-5478,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5114,640,-7330,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5705,640,-932,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-8008,640,-2610,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-9961,640,4802,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1364,640,6612,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4875,640,5032,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2666,640,6859,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2230,640,-8555,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2183,730,-1592,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1326,730,-1498,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5024,730,-4332,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4874,670,-1913,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1678,700,784,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1897,700,3410,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2690,700,3102,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-801,400,5563,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1777,700,-4531,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,316,700,-3358,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3576,700,-2573,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2145,760,-8154,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1889,670,-11083,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2592,700,1158,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4013,760,5375,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4444,730,1998,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-6213,730,-5767,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5008,730,-8513,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4254,730,-6490,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3678,670,-323,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3895,670,-5338,0,0,0,0x0, bhvRedCoin,31),
RETURN()
};
const LevelScript local_warps_bitfs_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(240,16,1,11,0),
WARP_NODE(241,16,1,12,0),
RETURN()
};
