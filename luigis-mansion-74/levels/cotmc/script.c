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
#include "levels/cotmc/header.h"
extern u8 _cotmc_segment_ESegmentRomStart[]; 
extern u8 _cotmc_segment_ESegmentRomEnd[];
#include "levels/hmc/header.h"
const LevelScript level_cotmc_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _hmc_segment_7SegmentRomStart, _hmc_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _hmcSegmentRomStart, _hmcSegmentRomEnd),
LOAD_RAW(0x0E, _cotmc_segment_ESegmentRomStart, _cotmc_segment_ESegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_HMC_WOODEN_DOOR,          wooden_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_DOOR,           metal_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_HMC_HAZY_MAZE_DOOR,       hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_PLATFORM,       hmc_geo_0005A0),
LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_ARROW_PLATFORM, hmc_geo_0005B8),
LOAD_MODEL_FROM_GEO(MODEL_HMC_ELEVATOR_PLATFORM,    hmc_geo_0005D0),
LOAD_MODEL_FROM_GEO(MODEL_HMC_ROLLING_ROCK,         hmc_geo_000548),
LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_PIECE,           hmc_geo_000570),
LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_SMALL_PIECE,     hmc_geo_000588),
LOAD_MODEL_FROM_GEO(MODEL_HMC_RED_GRILLS,           hmc_geo_000530),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
LOAD_MODEL_FROM_GEO(29, wooden_door_geo),
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
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_cotmc_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,90,-2571,998,-430),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_cotmc_1_[] = {
AREA(1,Geo_cotmc_1_0x12a2e30),
TERRAIN(col_cotmc_1_0xe0130e0),
SET_BACKGROUND_MUSIC(0,36),
TERRAIN_TYPE(2),
JUMP_LINK(local_objects_cotmc_1_),
JUMP_LINK(local_warps_cotmc_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_cotmc_1_[] = {
OBJECT_WITH_ACTS(0,-2571,998,-430,0,90,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,-2021,2413,-1229,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(137,-2840,1168,-2253,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(85,2714,2080,-2904,0,0,0,0x10000, bhvCapSwitch,31),
OBJECT_WITH_ACTS(206,3077,2254,-2232,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,2328,2254,-2038,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(215,-1570,1706,-1971,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2284,1357,1076,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,-1892,1451,-2486,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(116,-1332,997,-273,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-1051,836,-333,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,-1033,16,864,0,230,0,0x0, bhvScuttlebugSpawn,31),
OBJECT_WITH_ACTS(0,2159,1820,1055,0,0,0,0x0, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(101,301,413,2806,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,760,413,-710,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,2905,413,1894,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-2334,413,-2792,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,2805,413,-1600,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-2414,413,2697,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(223,1144,899,1219,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(0,-1546,782,2553,0,0,0,0x0, bhvMrI,31),
OBJECT_WITH_ACTS(215,-235,1543,1597,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(137,1410,1235,777,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(207,-1624,2110,-3001,0,28,0,0x0, bhvFloorSwitchGrills,31),
OBJECT_WITH_ACTS(0,2271,413,1291,0,248,0,0x10000, bhvOpenableGrill,31),
OBJECT_WITH_ACTS(122,2005,509,1179,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(0,-1318,2110,-2438,0,208,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(215,-281,2134,-2040,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(206,-734,2278,-1139,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-762,2278,-1778,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(215,3051,579,3102,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,3466,1534,2170,0,0,0,0x0, bhvMrI,31),
OBJECT_WITH_ACTS(215,1392,-1687,-666,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,342,1822,-851,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-135,1729,3460,0,0,0,0x3010000, bhvMrI,31),
OBJECT_WITH_ACTS(215,2517,1868,-800,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1033,190,864,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,2159,1460,1055,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-2569,119,-1599,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,-2569,89,-1599,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,-2357,271,1954,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,-2357,241,1954,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,416,249,98,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,416,219,98,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,1644,-55,-1300,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,1644,-25,-1300,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(116,2259,47,2613,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,2259,77,2613,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,1491,793,2926,0,0,0,0x4000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(124,2836,413,1340,0,69,0,0x100000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-2182,620,-21,0,253,0,0x120000, bhvMessagePanel,31),
RETURN()
};
const LevelScript local_warps_cotmc_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(240,26,1,1,0),
WARP_NODE(241,26,1,2,0),
RETURN()
};
