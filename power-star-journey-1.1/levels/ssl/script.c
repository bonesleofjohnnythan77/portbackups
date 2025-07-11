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
#include "levels/ssl/header.h"
extern u8 _ssl_segment_ESegmentRomStart[]; 
extern u8 _ssl_segment_ESegmentRomEnd[];
#include "levels/hmc/header.h"
const LevelScript level_ssl_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _hmc_segment_7SegmentRomStart, _hmc_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _hmcSegmentRomStart, _hmcSegmentRomEnd),
LOAD_RAW(0x0E, _ssl_segment_ESegmentRomStart, _ssl_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bidw_skybox_mio0SegmentRomStart,_bidw_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group11_mio0SegmentRomStart,_group11_mio0SegmentRomEnd),
LOAD_RAW(12,_group11_geoSegmentRomStart,_group11_geoSegmentRomEnd),
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
LOAD_MODEL_FROM_GEO(84, enemy_lakitu_geo
),
LOAD_MODEL_FROM_GEO(85, spiny_ball_geo
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
JUMP_LINK(script_func_global_12),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_ssl_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_ssl_1_[] = {
AREA(1,Geo_ssl_1_0x1581700),
TERRAIN(col_ssl_1_0xe016c18),
SET_BACKGROUND_MUSIC(0,35),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_ssl_1_),
JUMP_LINK(local_warps_ssl_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ssl_1_[] = {
OBJECT_WITH_ACTS(0,-1719,-62,-2656,0,0,0,0xa0000, bhvSpinAirborneWarp
,31),
OBJECT_WITH_ACTS(0,583,2683,-5387,0,-154,0,0xb0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-1146,-509,-1250,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(206,-833,-417,-1041,0,-167,0,0x0, bhvSnufit
,63),
OBJECT_WITH_ACTS(206,1295,-337,-1880,0,-88,0,0x0, bhvSnufit
,48),
OBJECT_WITH_ACTS(0,4948,-408,-1718,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(206,5298,352,-729,0,-177,0,0x0, bhvSnufit
,63),
OBJECT_WITH_ACTS(206,4010,365,-156,0,94,0,0x0, bhvSnufit
,63),
OBJECT_WITH_ACTS(206,3355,417,2032,0,180,0,0x0, bhvSnufit
,63),
OBJECT_WITH_ACTS(206,573,417,885,0,-139,0,0x0, bhvSnufit
,63),
OBJECT_WITH_ACTS(206,-1511,1154,2604,0,91,0,0x0, bhvSnufit
,63),
OBJECT_WITH_ACTS(220,-3125,1771,782,0,0,0,0x10000, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(206,-1042,2396,-469,0,-90,0,0x0, bhvSnufit
,63),
OBJECT_WITH_ACTS(0,-1250,3376,469,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,-1667,3376,1510,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,-1041,3376,1563,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(212,-1123,-414,851,0,0,0,0x0, bhv1Up
,63),
OBJECT_WITH_ACTS(206,-1198,-408,1406,0,-147,0,0x0, bhvSnufit
,63),
OBJECT_WITH_ACTS(137,260,3067,0,0,0,0,0x50000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(0,-4531,-781,3177,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(122,1277,368,1974,0,90,0,0x0, bhvStar
,31),
OBJECT_WITH_ACTS(122,-1250,3646,1094,0,0,0,0x1000000, bhvStar
,31),
OBJECT_WITH_ACTS(137,-4092,-253,-2332,0,0,0,0x30000, bhvExclamationBox
,4),
OBJECT_WITH_ACTS(122,-4017,-1639,2741,0,0,0,0x2000000, bhvStar
,31),
OBJECT_WITH_ACTS(180,-4583,-521,938,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-4219,-521,729,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(122,-781,-399,2016,0,-141,0,0x3000000, bhvStar
,31),
OBJECT_WITH_ACTS(207,1302,-481,-1875,0,0,0,0x0, bhvFloorSwitchHiddenObjects
,48),
OBJECT_WITH_ACTS(129,1510,-501,-1616,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,1719,-298,-1668,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,1960,-96,-1627,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,2181,127,-1597,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,2440,348,-1582,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(122,2441,677,-1575,0,0,0,0x4000000, bhvStar
,48),
OBJECT_WITH_ACTS(122,1405,104,2049,0,95,0,0x5000000, bhvStar
,31),
OBJECT_WITH_ACTS(212,-677,-335,-312,0,0,0,0x0, bhv1Up
,63),
OBJECT_WITH_ACTS(120,4948,-360,-1443,0,0,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(137,4785,-146,-886,0,0,0,0x70000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(140,4896,-408,-2083,0,0,0,0x0, bhvBlueCoinSwitch
,63),
OBJECT_WITH_ACTS(118,5303,-277,-2433,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,5283,-151,-2135,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,5296,10,-1852,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(217,-3094,-801,-2364,0,0,0,0x0, bhvPushableMetalBox
,4),
OBJECT_WITH_ACTS(217,-4095,-801,-2361,0,0,0,0x0, bhvPushableMetalBox
,4),
RETURN()
};
const LevelScript local_warps_ssl_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,17,1,52,0),
WARP_NODE(241,17,1,102,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
