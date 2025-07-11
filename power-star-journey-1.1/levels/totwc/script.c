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
// LOAD_MODEL_FROM_DL(84,0x05002e00,4),
// LOAD_MODEL_FROM_DL(86,0x05003120,4),
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
AREA(1,Geo_totwc_1_0x27e1700),
TERRAIN(col_totwc_1_0xe03a7d8),
SET_BACKGROUND_MUSIC(0,12),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_totwc_1_),
JUMP_LINK(local_warps_totwc_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_totwc_1_[] = {
OBJECT_WITH_ACTS(0,1939,-5487,-1810,0,0,0,0xa0000, bhvSpinAirborneWarp
,31),
OBJECT_WITH_ACTS(0,4295,-3847,-4419,0,-154,0,0xb0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,2006,-5697,280,0,-153,0,0xc0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,4740,-4006,-3073,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,4427,-4006,-1927,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(220,5208,-2760,208,0,0,0,0x10000, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(220,3542,-2031,104,0,0,0,0x10000, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(0,1302,-1358,937,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,-52,-1358,2188,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,-2188,-1358,729,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,-2656,-1358,2240,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,-3750,-1358,990,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(220,-677,1094,-260,0,0,0,0x10000, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(220,-4844,2042,-1615,0,0,0,0x10000, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(0,-2656,2649,938,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,-3802,2649,2240,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,-4271,2649,885,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(137,-2083,3132,2552,0,0,0,0x0, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(85,-4583,-1358,1308,0,90,0,0x0, bhvCapSwitch
,63),
OBJECT_WITH_ACTS(217,3256,-1881,-78,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(215,5781,-3902,-2240,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,4896,-2333,260,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,-4583,-1233,-1146,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(212,6509,3434,4219,0,0,0,0x0, bhv1Up
,63),
OBJECT_WITH_ACTS(215,-2292,886,104,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(137,-2239,3385,-6563,0,0,0,0x60000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(215,-4365,1999,-1929,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(137,4948,3643,4375,0,0,0,0x0, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(137,-2656,3346,-4948,0,0,0,0x0, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(0,-3173,3028,1474,0,0,0,0x0, bhvHiddenRedCoinStar
,63),
OBJECT_WITH_ACTS(212,-672,726,2150,0,0,0,0x0, bhv1Up
,63),
OBJECT_WITH_ACTS(215,-2656,2865,833,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,5603,3490,4004,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,-2240,3229,-5781,0,0,0,0x0, bhvRedCoin
,63),
RETURN()
};
const LevelScript local_warps_totwc_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,29,1,12,0),
WARP_NODE(12,29,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,51,0),
WARP_NODE(241,26,1,101,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
