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
#include "levels/ddd/header.h"
extern u8 _ddd_segment_ESegmentRomStart[]; 
extern u8 _ddd_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_ddd_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _ddd_segment_ESegmentRomStart, _ddd_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bbh_skybox_mio0SegmentRomStart,_bbh_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group11_mio0SegmentRomStart,_group11_mio0SegmentRomEnd),
LOAD_RAW(12,_group11_geoSegmentRomStart,_group11_geoSegmentRomEnd),
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
LOAD_MODEL_FROM_GEO(29, haunted_door_geo
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
JUMP_LINK(local_area_ddd_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_ddd_1_[] = {
AREA(1,Geo_ddd_1_0x22a1700),
TERRAIN(col_ddd_1_0xe012690),
SET_BACKGROUND_MUSIC(0,36),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_ddd_1_),
JUMP_LINK(local_warps_ddd_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ddd_1_[] = {
OBJECT_WITH_ACTS(0,-1771,-4793,-5729,0,0,0,0xa0000, bhvSpinAirborneWarp
,31),
OBJECT_WITH_ACTS(0,-2021,-3245,1644,0,-154,0,0xb0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-6133,-1890,-1461,0,-94,0,0xc0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(101,-2188,-5199,-3073,0,0,0,0x0, bhvScuttlebug
,63),
OBJECT_WITH_ACTS(206,-2708,-4115,-990,0,-181,0,0x0, bhvSnufit
,63),
OBJECT_WITH_ACTS(206,573,-1771,-2135,0,0,0,0x0, bhvSnufit
,63),
OBJECT_WITH_ACTS(217,937,-2188,-260,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,1458,-2396,-208,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-1979,5052,7604,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-4740,-1302,2448,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-4740,-1615,1823,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-6042,-1354,-417,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(84,-4688,-1823,-573,0,0,0,0x0, bhvEnemyLakitu
,63),
OBJECT_WITH_ACTS(101,-5156,-1890,-156,0,0,0,0x0, bhvScuttlebug
,63),
OBJECT_WITH_ACTS(0,-5104,-1890,-885,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,-4688,-1890,313,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,-4271,-1890,-885,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,2344,-2384,1042,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,3906,-2384,1250,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,2448,-2384,-781,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,4323,-2384,-1302,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,-3854,-1089,4167,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,-4479,-1089,5833,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,-3281,-1089,7500,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(206,-4792,-885,4531,0,0,0,0x0, bhvSnufit
,63),
OBJECT_WITH_ACTS(206,-3854,-885,6510,0,0,0,0x0, bhvSnufit
,63),
OBJECT_WITH_ACTS(180,-2135,1771,3281,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(220,-2031,3021,5313,0,0,0,0x10000, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(0,-104,7339,5104,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,2135,7339,6719,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,2656,7339,4740,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(223,-6458,1293,-4219,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,-6458,1293,-6667,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,-5677,1293,-7188,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(206,-6458,1458,-5000,0,-4,0,0x0, bhvSnufit
,63),
OBJECT_WITH_ACTS(220,-3958,1458,-7187,0,0,0,0x10000, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(84,-1198,1397,-7187,0,0,0,0x0, bhvEnemyLakitu
,63),
OBJECT_WITH_ACTS(212,-6406,1397,1146,0,0,0,0x0, bhv1Up
,63),
OBJECT_WITH_ACTS(0,-6042,-1890,677,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(137,-2448,-1667,1146,0,0,0,0x50000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(116,3021,0,107,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,3021,394,-248,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(120,-1250,7391,4167,0,0,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(122,3434,5331,-61,0,0,0,0x0, bhvStar
,31),
OBJECT_WITH_ACTS(122,2292,1553,-7188,0,0,0,0x1000000, bhvStar
,31),
OBJECT_WITH_ACTS(207,260,-5199,-3073,0,0,0,0x0, bhvFloorSwitchHiddenObjects
,31),
OBJECT_WITH_ACTS(129,260,-5260,-2760,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,260,-5051,-2500,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,208,-4844,-2187,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,156,-4687,-1719,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,104,-4583,-885,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(0,0,0,0,0,0,0,0x0, bhvStarDoor
,4),
OBJECT_WITH_ACTS(129,104,-4583,-104,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(122,104,-4323,938,0,-179,0,0x2000000, bhvStar
,31),
OBJECT_WITH_ACTS(215,3750,-1823,-312,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,3073,-2188,938,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,0,-2240,-104,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-6094,-1354,-1458,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-677,-1823,1146,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-1094,-1786,-3281,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-4740,-885,2448,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,312,-5043,-3073,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(0,-4583,-1615,52,0,0,0,0x3000000, bhvHiddenRedCoinStar
,31),
OBJECT_WITH_ACTS(122,1771,7813,5677,0,-96,0,0x4000000, bhvStar
,31),
OBJECT_WITH_ACTS(217,-1719,1927,4271,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(122,-3594,-2656,-1146,0,0,0,0x5000000, bhvStar
,31),
OBJECT_WITH_ACTS(140,-6042,-1890,885,0,0,0,0x0, bhvBlueCoinSwitch
,63),
OBJECT_WITH_ACTS(118,-6094,-1315,104,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-6094,-1019,-885,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-6094,-324,-1771,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-6094,307,-2083,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-6042,907,-2604,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(206,-625,-1682,1198,0,86,0,0x0, bhvSnufit
,63),
OBJECT_WITH_ACTS(206,-938,-1682,-3177,0,95,0,0x0, bhvSnufit
,63),
OBJECT_WITH_ACTS(0,-6133,-1601,-1461,0,0,0,0x110000, bhvCoinFormation
,63),
RETURN()
};
const LevelScript local_warps_ddd_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,23,1,12,0),
WARP_NODE(12,23,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,17,1,55,0),
WARP_NODE(241,17,1,105,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
