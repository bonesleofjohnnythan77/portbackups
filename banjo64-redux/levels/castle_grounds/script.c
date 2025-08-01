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
#include "areas/2/custom.model.inc.h"
#include "levels/castle_grounds/header.h"
extern u8 _castle_grounds_segment_ESegmentRomStart[]; 
extern u8 _castle_grounds_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_castle_grounds_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _castle_grounds_segment_ESegmentRomStart, _castle_grounds_segment_ESegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
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
LOAD_MODEL_FROM_GEO(29, haunted_door_geo),
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
// LOAD_MODEL_FROM_GEO(242,0x19001300),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_10),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_castle_grounds_1_),
JUMP_LINK(local_area_castle_grounds_2_),
FREE_LEVEL_POOL(),
MARIO_POS(1,540,4739,-590,7630),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_grounds_1_[] = {
AREA(1,Geo_castle_grounds_1_0x2281700),
TERRAIN(col_castle_grounds_1_0xe081f40),
SET_BACKGROUND_MUSIC(0,0),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_grounds_1_),
JUMP_LINK(local_warps_castle_grounds_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_grounds_1_[] = {
OBJECT_WITH_ACTS(0,4739,-590,7630,0,180,0,0xa0000, bhvSpinAirborneCircleWarp,31),
OBJECT_WITH_ACTS(0,1,3052,-3514,0,3,0,0xb0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,5568,-579,8288,0,187,0,0xc0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-6624,1024,-4072,0,107,0,0xd0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-187,-78,3391,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(220,0,2430,0,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(0,16,2280,-4197,0,0,0,0x12420000, bhvWarp,31),
OBJECT_WITH_ACTS(0,0,2190,0,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-83,-360,1785,0,0,0,0x0, bhvLargeFishGroup,31),
OBJECT_WITH_ACTS(0,-8084,141,-3434,0,305,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-6924,690,-1139,0,0,0,0x0, bhvFish3,31),
OBJECT_WITH_ACTS(0,3565,-195,3775,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(192,3132,0,1160,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(0,-8402,2760,-3737,0,0,0,0x0, bhvWaterfallSoundLoop,31),
OBJECT_WITH_ACTS(0,16,540,5501,0,0,0,0x0, bhvBirdsSoundLoop,31),
OBJECT_WITH_ACTS(140,26,-59,4783,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,1419,60,4796,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-920,60,4290,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,1225,120,5717,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,5,60,5827,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-1675,120,5765,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(187,4338,-583,7400,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,5116,-544,7233,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(212,4383,52,7846,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(0,4789,535,1084,0,262,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,4493,535,2479,0,261,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(137,-7936,1910,-2147,0,0,0,0x30000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(215,-8472,1445,-3624,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(129,-6897,1118,702,0,0,0,0x0, bhvJumpingBox,31),
OBJECT_WITH_ACTS(23,-3549,694,363,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-3665,674,-2943,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,2,-2,2488,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,1154,101,-3273,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(0,0,2317,0,0,0,0,0x0, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(188,4438,-170,-2893,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,3749,-170,-2294,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,3130,-170,-3869,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(215,4882,367,1848,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,5570,499,1221,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(137,5526,922,1983,0,353,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(215,-340,-547,-842,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4,-225,6278,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3527,1271,368,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4004,723,-3593,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4190,662,-1209,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-6438,1324,-1085,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(137,-26,3481,-5436,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,2,2129,-3563,0,0,0,0x690000, bhvSpinAirborneCircleWarp,31),
OBJECT_WITH_ACTS(0,-8752,2744,-1211,0,18,0,0x20060000, bhvWarp,31),
OBJECT_WITH_ACTS(0,4762,-546,8163,0,0,0,0x10050000, bhvWarp,31),
OBJECT_WITH_ACTS(207,3487,-125,-3053,0,319,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,3805,-137,-3596,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,4004,-137,-3395,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,4006,63,-3596,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,4206,-137,-3596,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,4007,-159,-3794,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,4593,-137,-4319,0,321,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(130,4898,-137,-2780,0,337,0,0x0, bhvBreakableBoxSmall,31),
OBJECT_WITH_ACTS(129,2669,-137,-4255,0,47,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,3707,-137,-4501,0,0,0,0x30000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,4458,-137,-1972,0,307,0,0x30000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,5010,-137,-3403,0,10,0,0x30000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(116,-418,1280,-445,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-604,1445,-12,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-388,1602,407,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,13,1775,601,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,396,1984,435,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,5044,-137,-3411,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,6,1124,-728,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,2667,-137,-4263,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-7533,1320,-213,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-7770,1440,-1001,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,-8222,2817,-640,0,116,0,0x30000, bhvSpinAirborneCircleWarp,31),
OBJECT_WITH_ACTS(137,-17,3920,-3102,0,0,0,0x5080000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(124,-7,3572,-3286,0,0,0,0xffA60000, bhvMessagePanel,31),
// OBJECT_WITH_ACTS(0,32,5,3,255,0,0,1, editor_Scroll_Texture,31),
// OBJECT_WITH_ACTS(0,4,5,27,255,0,0,2, editor_Scroll_Texture,31),
// OBJECT_WITH_ACTS(0,16,5,21,255,0,0,3, editor_Scroll_Texture,31),
// OBJECT_WITH_ACTS(0,32,5,36,255,0,0,4, editor_Scroll_Texture,31),
// OBJECT_WITH_ACTS(0,32,5,36,255,0,0,5, editor_Scroll_Texture,31),
// OBJECT_WITH_ACTS(0,32,5,36,255,0,0,6, editor_Scroll_Texture,31),
// OBJECT_WITH_ACTS(0,16,5,18,255,0,0,7, editor_Scroll_Texture,31),
// OBJECT_WITH_ACTS(0,4,5,24,255,0,0,8, editor_Scroll_Texture,31),
// OBJECT_WITH_ACTS(0,4,5,54,255,0,0,9, editor_Scroll_Texture,31),
// OBJECT_WITH_ACTS(0,4,5,27,255,0,0,10, editor_Scroll_Texture,31),
// OBJECT_WITH_ACTS(0,16,5,12,255,0,0,11, editor_Scroll_Texture,31),
// OBJECT_WITH_ACTS(0,32,5,36,255,0,0,12, editor_Scroll_Texture,31),
// OBJECT_WITH_ACTS(0,4,5,27,255,0,0,13, editor_Scroll_Texture,31),
// OBJECT_WITH_ACTS(0,4,5,72,255,0,0,14, editor_Scroll_Texture,31),
// OBJECT_WITH_ACTS(0,16,5,12,255,0,0,15, editor_Scroll_Texture,31),
// OBJECT_WITH_ACTS(0,4,5,18,255,0,0,16, editor_Scroll_Texture,31),
// OBJECT_WITH_ACTS(0,32,5,105,255,0,0,17, editor_Scroll_Texture,31),
// OBJECT_WITH_ACTS(0,32,5,54,255,0,0,18, editor_Scroll_Texture,31),
// OBJECT_WITH_ACTS(0,32,5,72,255,0,0,19, editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_castle_grounds_1_[] = {
WARP_NODE(10,16,1,10,0),
WARP_NODE(11,16,1,12,0),
WARP_NODE(12,16,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,6,1,100,0),
WARP_NODE(105,16,1,105,0),
WARP_NODE(66,6,1,105,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,16,2,10,0),
WARP_NODE(6,20,1,10,0),
RETURN()
};
const LevelScript local_area_castle_grounds_2_[] = {
AREA(2,Geo_castle_grounds_2_0x2281500),
TERRAIN(col_castle_grounds_2_0xe0a68d8),
SET_BACKGROUND_MUSIC(0,0),
TERRAIN_TYPE(5),
JUMP_LINK(local_objects_castle_grounds_2_),
JUMP_LINK(local_warps_castle_grounds_2_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_grounds_2_[] = {
OBJECT_WITH_ACTS(0,-16,48,98,0,180,0,0xa0000, bhvSpinAirborneCircleWarp,31),
OBJECT_WITH_ACTS(0,20,0,629,0,1,0,0x180b0000, bhvWarp,31),
OBJECT_WITH_ACTS(E_MODEL_BANJO_KITCHEN,32,0,-699,0,0,0,0x0, id_bhvStaticObject,31),
RETURN()
};
const LevelScript local_warps_castle_grounds_2_[] = {
WARP_NODE(10,16,1,10,0),
WARP_NODE(11,16,1,12,0),
WARP_NODE(12,16,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(10,16,1,10,0),
WARP_NODE(11,16,1,10,0),
RETURN()
};
