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
#include "levels/thi/header.h"
extern u8 _thi_segment_ESegmentRomStart[]; 
extern u8 _thi_segment_ESegmentRomEnd[];
#include "levels/wdw/header.h"
const LevelScript level_thi_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _wdw_segment_7SegmentRomStart, _wdw_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _wdwSegmentRomStart, _wdwSegmentRomEnd),
LOAD_RAW(0x0E, _thi_segment_ESegmentRomStart, _thi_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group11_mio0SegmentRomStart,_group11_mio0SegmentRomEnd),
LOAD_RAW(12,_group11_geoSegmentRomStart,_group11_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_WDW_BUBBLY_TREE,                   bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_SQUARE_FLOATING_PLATFORM,      wdw_geo_000580),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_ARROW_LIFT,                    wdw_geo_000598),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_WATER_LEVEL_DIAMOND,           wdw_geo_0005C0),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_HIDDEN_PLATFORM,               wdw_geo_0005E8),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_EXPRESS_ELEVATOR,              wdw_geo_000610),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_RECTANGULAR_FLOATING_PLATFORM, wdw_geo_000628),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_ROTATING_PLATFORM,             wdw_geo_000640),
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
// LOAD_MODEL_FROM_GEO(88,0x0500c778),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_12),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_thi_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_thi_1_[] = {
AREA(1,Geo_thi_1_0x1e61700),
TERRAIN(col_thi_1_0xe074af0),
SET_BACKGROUND_MUSIC(0,35),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_thi_1_),
JUMP_LINK(local_warps_thi_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_thi_1_[] = {
OBJECT_WITH_ACTS(0,-8218,554,9814,0,0,0,0xa0000, bhvSpinAirborneWarp,63),
OBJECT_WITH_ACTS(0,-9265,-1432,9673,0,-154,0,0x110000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,-9124,-1478,-9688,0,-153,0,0x110000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,9211,-1476,-9581,0,107,0,0x110000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,9124,-1368,9678,0,-151,0,0x110000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(140,-2490,1094,3440,0,0,0,0x0, bhvBlueCoinSwitch,63),
OBJECT_WITH_ACTS(118,-3010,1094,2085,0,0,0,0x0, bhvHiddenBlueCoin,63),
OBJECT_WITH_ACTS(118,-3025,1094,2502,0,0,0,0x0, bhvHiddenBlueCoin,63),
OBJECT_WITH_ACTS(118,-3039,1094,2918,0,0,0,0x0, bhvHiddenBlueCoin,63),
OBJECT_WITH_ACTS(118,-3056,1094,3387,0,0,0,0x0, bhvHiddenBlueCoin,63),
OBJECT_WITH_ACTS(0,-2886,1146,1516,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,-2933,1146,-2298,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,4565,1146,-5742,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,2797,1146,3115,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,1627,1146,-309,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(129,-10,1146,-3034,0,0,0,0x0, bhvJumpingBox,63),
OBJECT_WITH_ACTS(129,-1583,1146,-8156,0,0,0,0x0, bhvJumpingBox,63),
OBJECT_WITH_ACTS(129,7648,1146,-8763,0,0,0,0x0, bhvJumpingBox,63),
OBJECT_WITH_ACTS(129,7559,1146,-3757,0,0,0,0x0, bhvJumpingBox,63),
OBJECT_WITH_ACTS(129,7509,1146,5167,0,0,0,0x0, bhvJumpingBox,63),
OBJECT_WITH_ACTS(129,7612,1146,8933,0,0,0,0x0, bhvJumpingBox,63),
OBJECT_WITH_ACTS(129,-8159,1146,8979,0,0,0,0x0, bhvJumpingBox,63),
OBJECT_WITH_ACTS(129,-3966,1146,6505,0,0,0,0x0, bhvJumpingBox,63),
OBJECT_WITH_ACTS(129,-4947,1146,3356,0,0,0,0x0, bhvJumpingBox,63),
OBJECT_WITH_ACTS(129,-1607,1146,3381,0,0,0,0x0, bhvJumpingBox,63),
OBJECT_WITH_ACTS(129,-6980,1146,-1171,0,0,0,0x0, bhvJumpingBox,63),
OBJECT_WITH_ACTS(129,-7967,1146,-4217,0,0,0,0x0, bhvJumpingBox,63),
OBJECT_WITH_ACTS(129,-8312,1146,-8992,0,0,0,0x0, bhvJumpingBox,63),
OBJECT_WITH_ACTS(180,3955,1979,-3760,0,-92,0,0x0, bhvFireSpitter,62),
OBJECT_WITH_ACTS(122,-2162,3073,-2871,0,0,0,0x5000000, bhvStar,62),
OBJECT_WITH_ACTS(122,5842,2396,5160,0,0,0,0x4000000, bhvStar,62),
OBJECT_WITH_ACTS(122,4635,2188,-7077,0,0,0,0x3000000, bhvStar,62),
OBJECT_WITH_ACTS(122,3979,2135,-3778,0,0,0,0x2000000, bhvStar,62),
OBJECT_WITH_ACTS(122,432,2135,1404,0,0,0,0x1000000, bhvStar,62),
OBJECT_WITH_ACTS(122,-8768,781,9459,0,0,0,0x0, bhvStar,63),
OBJECT_WITH_ACTS(217,-8516,2344,-6363,0,0,0,0x0, bhvPushableMetalBox,62),
OBJECT_WITH_ACTS(217,-8516,2083,-6623,0,0,0,0x0, bhvPushableMetalBox,62),
OBJECT_WITH_ACTS(217,-8516,1771,-6831,0,0,0,0x0, bhvPushableMetalBox,62),
OBJECT_WITH_ACTS(217,-8516,1458,-7092,0,0,0,0x0, bhvPushableMetalBox,62),
OBJECT_WITH_ACTS(217,-8545,1198,-7298,0,0,0,0x0, bhvPushableMetalBox,62),
OBJECT_WITH_ACTS(217,413,2292,1804,0,0,0,0x0, bhvPushableMetalBox,62),
OBJECT_WITH_ACTS(24,-2333,2239,-2482,0,0,0,0x0, bhvTree,63),
OBJECT_WITH_ACTS(24,-2349,2239,-3367,0,0,0,0x0, bhvTree,63),
OBJECT_WITH_ACTS(24,-2567,1146,-2853,0,0,0,0x0, bhvTree,63),
OBJECT_WITH_ACTS(24,5217,1146,-6835,0,0,0,0x0, bhvTree,63),
OBJECT_WITH_ACTS(24,3681,1146,-4260,0,0,0,0x0, bhvTree,63),
OBJECT_WITH_ACTS(24,260,1146,2604,0,0,0,0x0, bhvTree,63),
RETURN()
};
const LevelScript local_warps_thi_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,240,0),
WARP_NODE(241,26,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
