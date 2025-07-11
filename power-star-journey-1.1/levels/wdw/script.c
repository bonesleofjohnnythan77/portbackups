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
#include "levels/wdw/header.h"
extern u8 _wdw_segment_ESegmentRomStart[]; 
extern u8 _wdw_segment_ESegmentRomEnd[];
#include "levels/hmc/header.h"
const LevelScript level_wdw_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _hmc_segment_7SegmentRomStart, _hmc_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _hmcSegmentRomStart, _hmcSegmentRomEnd),
LOAD_RAW(0x0E, _wdw_segment_ESegmentRomStart, _wdw_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bidw_skybox_mio0SegmentRomStart,_bidw_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
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
LOAD_MODEL_FROM_GEO(1, mario_geo
),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo
),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo
),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo
),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo
),
LOAD_MODEL_FROM_GEO(29, wooden_door_geo
),
LOAD_MODEL_FROM_GEO(31, metal_door_geo
),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo
),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo
),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo
),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo
),
LOAD_MODEL_FROM_GEO(37, key_door_geo
),
LOAD_MODEL_FROM_GEO(38, castle_door_geo
),
LOAD_MODEL_FROM_GEO(116, yellow_coin_geo
),
LOAD_MODEL_FROM_GEO(117, yellow_coin_no_shadow_geo
),
LOAD_MODEL_FROM_GEO(118, blue_coin_geo
),
LOAD_MODEL_FROM_GEO(119, blue_coin_no_shadow_geo
),
LOAD_MODEL_FROM_GEO(120, heart_geo
),
LOAD_MODEL_FROM_GEO(121, transparent_star_geo
),
LOAD_MODEL_FROM_GEO(122, star_geo
),
LOAD_MODEL_FROM_GEO(124, wooden_signpost_geo
),
LOAD_MODEL_FROM_GEO(127, cannon_barrel_geo
),
LOAD_MODEL_FROM_GEO(128, cannon_base_geo
),
LOAD_MODEL_FROM_GEO(129, breakable_box_geo
),
LOAD_MODEL_FROM_GEO(130, breakable_box_small_geo
),
LOAD_MODEL_FROM_GEO(131, exclamation_box_outline_geo
),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
LOAD_MODEL_FROM_GEO(133, marios_winged_metal_cap_geo
),
LOAD_MODEL_FROM_GEO(134, marios_metal_cap_geo
),
LOAD_MODEL_FROM_GEO(135, marios_wing_cap_geo
),
LOAD_MODEL_FROM_GEO(136, marios_cap_geo
),
LOAD_MODEL_FROM_GEO(137, exclamation_box_geo
),
LOAD_MODEL_FROM_GEO(138, dirt_animation_geo
),
LOAD_MODEL_FROM_GEO(139, cartoon_star_geo
),
LOAD_MODEL_FROM_GEO(140, blue_coin_switch_geo
),
LOAD_MODEL_FROM_GEO(142, mist_geo
),
LOAD_MODEL_FROM_GEO(143, sparkles_animation_geo
),
LOAD_MODEL_FROM_GEO(144, red_flame_geo
),
LOAD_MODEL_FROM_GEO(145, blue_flame_geo
),
LOAD_MODEL_FROM_GEO(148, burn_smoke_geo
),
LOAD_MODEL_FROM_GEO(149, sparkles_geo
),
LOAD_MODEL_FROM_GEO(150, smoke_geo
),
LOAD_MODEL_FROM_GEO(156, burn_smoke_geo
),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
LOAD_MODEL_FROM_GEO(160, white_particle_geo
),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
LOAD_MODEL_FROM_GEO(162, leaves_geo
),
LOAD_MODEL_FROM_GEO(163, wave_trail_geo
),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
LOAD_MODEL_FROM_GEO(165, small_water_splash_geo
),
LOAD_MODEL_FROM_GEO(166, idle_water_wave_geo
),
LOAD_MODEL_FROM_GEO(167, water_splash_geo
),
LOAD_MODEL_FROM_GEO(168, bubble_geo
),
LOAD_MODEL_FROM_GEO(170, purple_marble_geo
),
LOAD_MODEL_FROM_GEO(180, bowling_ball_geo
),
LOAD_MODEL_FROM_GEO(185, fish_geo
),
LOAD_MODEL_FROM_GEO(186, fish_shadow_geo
),
LOAD_MODEL_FROM_GEO(187, butterfly_geo
),
LOAD_MODEL_FROM_GEO(188, black_bobomb_geo
),
LOAD_MODEL_FROM_GEO(190, koopa_shell_geo
),
LOAD_MODEL_FROM_GEO(192, goomba_geo
),
LOAD_MODEL_FROM_GEO(194, amp_geo
),
LOAD_MODEL_FROM_GEO(195, bobomb_buddy_geo
),
LOAD_MODEL_FROM_GEO(200, bowser_key_cutscene_geo
),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
LOAD_MODEL_FROM_GEO(202, checkerboard_platform_geo
),
LOAD_MODEL_FROM_GEO(203, red_flame_shadow_geo
),
LOAD_MODEL_FROM_GEO(204, bowser_key_geo
),
LOAD_MODEL_FROM_GEO(205, explosion_geo
),
LOAD_MODEL_FROM_GEO(212, mushroom_1up_geo
),
LOAD_MODEL_FROM_GEO(215, red_coin_geo
),
LOAD_MODEL_FROM_GEO(216, red_coin_no_shadow_geo
),
LOAD_MODEL_FROM_GEO(217, metal_box_geo
),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
LOAD_MODEL_FROM_GEO(219, number_geo
),
LOAD_MODEL_FROM_GEO(220, flyguy_geo
),
LOAD_MODEL_FROM_GEO(223, chuckya_geo
),
LOAD_MODEL_FROM_GEO(224, white_puff_geo
),
LOAD_MODEL_FROM_GEO(225, bowling_ball_track_geo
),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_10),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_wdw_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_wdw_1_[] = {
AREA(1,Geo_wdw_1_0x1821700),
TERRAIN(col_wdw_1_0xe024038),
SET_BACKGROUND_MUSIC(0,41),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_wdw_1_),
JUMP_LINK(local_warps_wdw_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wdw_1_[] = {
OBJECT_WITH_ACTS(0,670,470,-3073,0,0,0,0xa0000, bhvSpinAirborneWarp
,31),
OBJECT_WITH_ACTS(0,531,2683,-5439,0,-154,0,0xb0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(84,-260,-244,-104,0,-170,0,0x0, bhvBoo
,63),
OBJECT_WITH_ACTS(180,3177,-348,-573,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(137,2448,-36,-156,0,0,0,0x50000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(116,-677,-348,729,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,-316,-348,729,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,37,-348,729,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(0,-833,-348,-1146,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,-1823,-348,1667,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(180,-1094,-348,1146,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(194,3646,-208,52,0,0,0,0x0, bhvCirclingAmp
,63),
OBJECT_WITH_ACTS(0,3438,-348,2031,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(212,-2058,-105,1025,0,0,0,0x0, bhv1Up
,63),
OBJECT_WITH_ACTS(84,-1667,-278,-1510,0,181,0,0x0, bhvBoo
,63),
OBJECT_WITH_ACTS(0,-2031,-348,3385,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,-104,0,-521,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(84,-2135,-287,104,0,-175,0,0x0, bhvBoo
,63),
OBJECT_WITH_ACTS(137,2188,35,1875,0,0,0,0x60000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(0,3646,-348,-469,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,2448,-348,-4896,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,3281,-348,-5781,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(207,3750,-348,-6615,0,0,0,0x0, bhvFloorSwitchHiddenObjects
,31),
OBJECT_WITH_ACTS(129,2188,491,-6094,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,2240,491,-5313,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,2292,491,-4408,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,2344,491,-3644,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(122,2135,781,-3021,0,179,0,0x0, bhvStar
,31),
OBJECT_WITH_ACTS(215,-1615,0,-1094,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,2813,0,-5208,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,2760,0,-52,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-156,0,4583,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,313,0,-625,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,2552,0,1823,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,2604,0,1146,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-1458,0,-313,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(0,-104,38,-521,0,0,0,0x1000000, bhvHiddenRedCoinStar
,31),
OBJECT_WITH_ACTS(122,2495,-2326,1700,0,-90,0,0x2000000, bhvStar
,31),
OBJECT_WITH_ACTS(122,-2191,945,-2683,0,-177,0,0x3000000, bhvStar
,31),
OBJECT_WITH_ACTS(0,-2396,-348,-3229,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(122,-2573,878,6610,0,-103,0,0x4000000, bhvStar
,31),
OBJECT_WITH_ACTS(0,-3802,-348,5000,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,-3229,-348,4062,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,-3073,-348,5677,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(122,-2753,-141,973,0,95,0,0x5000000, bhvStar
,31),
OBJECT_WITH_ACTS(124,1926,-362,-604,0,43,0,0x950000, bhvMessagePanel
,63),
RETURN()
};
const LevelScript local_warps_wdw_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,17,1,53,0),
WARP_NODE(241,17,1,103,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
