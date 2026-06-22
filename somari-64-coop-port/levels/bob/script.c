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
#include "levels/bob/header.h"
extern u8 _bob_segment_ESegmentRomStart[]; 
extern u8 _bob_segment_ESegmentRomEnd[];
#include "levels/castle_grounds/header.h"
const LevelScript level_bob_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _castle_groundsSegmentRomStart, _castle_groundsSegmentRomEnd),
LOAD_RAW(0x0E, _bob_segment_ESegmentRomStart, _bob_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom27393728_skybox_mio0SegmentRomStart,_SkyboxCustom27393728_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
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
LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
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
JUMP_LINK(script_func_global_2),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_bob_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bob_1_[] = {
AREA(1,Geo_bob_1_0x18e1700),
TERRAIN(col_bob_1_0xe0b1320),
SET_BACKGROUND_MUSIC(0,0),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bob_1_),
JUMP_LINK(local_warps_bob_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bob_1_[] = {
OBJECT_WITH_ACTS(0,14728,510,23408,0,270,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(146,-17220,3570,-28638,312,0,0,0xa0a00000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(0,-7110,281,25731,0,270,0,0x10000, bhvLaunchStarCollectWarp,31),
OBJECT_WITH_ACTS(0,14282,540,22953,0,180,0,0x20000, bhvLaunchDeathWarp,31),
OBJECT_WITH_ACTS(146,11029,12348,-21845,312,90,0,0xfa3c0000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(146,332,8490,-16927,312,90,0,0xeb820000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(146,-7522,7030,-18412,312,85,0,0xb9870000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(146,-15992,4405,-19607,308,90,0,0xb4870000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(215,-20250,820,12800,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-15480,-900,-6590,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-24920,2100,-2570,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,27213,885,14581,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-14400,3700,-24300,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,15815,462,-7149,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-10828,1561,24713,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-14900,5240,-4154,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,10058,300,22660,0,0,0,0x2000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(0,-10850,-563,-12400,0,0,0,0x1e800000, bhvBeginningPeach,31),
OBJECT_WITH_ACTS(137,-8546,301,26089,0,0,0,0x80000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-28481,8568,26053,0,0,0,0xc0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(220,9006,12073,-18690,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,8291,12073,-17873,0,51,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,8207,12193,-18415,0,47,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(137,23339,9523,-21404,0,0,0,0xd0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(120,15308,90,23260,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(124,16086,0,23280,0,270,0,0x130000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,16570,0,23280,0,270,0,0x280000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,16570,0,23760,0,270,0,0xf0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,16570,0,22800,0,270,0,0x230000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(146,-14900,-2950,-8500,336,0,0,0xff140000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(124,-14185,-1000,-6457,0,180,0,0x80000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-26442,2031,10724,0,270,0,0x100000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,15800,0,24000,0,180,0,0x240000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,15800,0,22732,0,0,0,0x270000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,8,4,6,6,0,0,0, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,64,4,12,12,0,0,1, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,64,5,12,0,0,0,2, editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_bob_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,12,0),
WARP_NODE(13,9,1,13,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,9,1,1,0),
WARP_NODE(241,9,1,2,0),
WARP_NODE(0,6,1,31,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,4,0),
WARP_NODE(4,9,1,3,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
