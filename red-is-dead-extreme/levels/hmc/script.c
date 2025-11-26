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
#include "levels/hmc/header.h"
extern u8 _hmc_segment_ESegmentRomStart[]; 
extern u8 _hmc_segment_ESegmentRomEnd[];
const LevelScript level_hmc_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _hmc_segment_7SegmentRomStart, _hmc_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _hmcSegmentRomStart, _hmcSegmentRomEnd),
LOAD_RAW(0x0E, _hmc_segment_ESegmentRomStart, _hmc_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group3_mio0SegmentRomStart,_group3_mio0SegmentRomEnd),
LOAD_RAW(12,_group3_geoSegmentRomStart,_group3_geoSegmentRomEnd),
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
LOAD_MODEL_FROM_GEO(27, palm_tree_geo
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
JUMP_LINK(script_func_global_4),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_hmc_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_hmc_1_[] = {
AREA(1,Geo_hmc_1_0x1621700),
TERRAIN(col_hmc_1_0xe027460),
SET_BACKGROUND_MUSIC(0,58),
TERRAIN_TYPE(1),
JUMP_LINK(local_objects_hmc_1_),
JUMP_LINK(local_warps_hmc_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_hmc_1_[] = {
OBJECT_WITH_ACTS(0,6349,4096,2124,0,0,0,0xa0000, bhvSpinAirborneWarp
,63),
OBJECT_WITH_ACTS(0,-11345,8204,12408,0,-154,0,0xb0000, bhvFadingWarp
,56),
OBJECT_WITH_ACTS(0,4766,-3717,2234,0,-153,0,0xc0000, bhvFadingWarp
,56),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp
,63),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp
,63),
OBJECT_WITH_ACTS(137,-11568,9219,11941,0,85,0,0xe0000, bhvExclamationBox
,48),
OBJECT_WITH_ACTS(137,-11848,8959,13999,0,85,0,0x40000, bhvExclamationBox
,48),
OBJECT_WITH_ACTS(137,-11867,8646,14259,0,85,0,0x40000, bhvExclamationBox
,48),
OBJECT_WITH_ACTS(137,-11891,8438,14571,0,85,0,0x40000, bhvExclamationBox
,48),
OBJECT_WITH_ACTS(122,-5199,-4271,-1406,0,176,0,0x4000000, bhvStar
,63),
OBJECT_WITH_ACTS(223,7216,625,4680,0,85,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,1192,-1302,4249,0,85,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(194,-7239,2448,-8365,0,85,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-7884,1563,-7629,0,85,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-8692,313,-7644,0,85,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(0,-8806,-313,-8241,0,85,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,-7382,-521,-8104,0,85,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,-1127,-4896,-2755,0,85,0,0x10000, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,-2783,-4896,-561,0,85,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,-1376,-4896,1961,0,85,0,0x10000, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,3956,-4896,-797,0,85,0,0x10000, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,-4424,-1042,207,0,181,0,0x0, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,7690,-1042,1681,0,89,0,0x0, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,2658,-1354,4262,0,89,0,0x0, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,185,-1042,-4421,0,-4,0,0x0, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(140,-1951,-1042,-4421,0,0,0,0x0, bhvBlueCoinSwitch
,63),
OBJECT_WITH_ACTS(118,-6383,-1146,-7413,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-3856,-1094,-7242,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-3153,-938,-5492,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-3252,-1094,-4227,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(0,-4352,-1094,5198,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,-4352,-1094,5198,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,5784,-5833,-2258,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,5784,-5833,-2258,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,956,-5156,3469,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,956,-5156,3469,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,-2861,-5156,-2312,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,-2861,-5156,-2312,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,1040,-5417,-1116,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,1040,-5417,-1116,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,4752,-3594,2299,0,0,0,0x2000000, bhvHiddenStar
,63),
OBJECT_WITH_ACTS(122,-6616,4115,-10125,0,0,0,0x1000000, bhvStar
,63),
OBJECT_WITH_ACTS(137,8623,10156,10649,0,0,0,0x70000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(194,-12078,8125,13668,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-11698,8125,14024,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-11762,8125,14564,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-12205,8125,14748,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-11846,8125,13786,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-11593,8125,14323,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-11065,8125,14133,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-12516,8125,14600,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-12416,8125,13366,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-12075,8125,14100,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(86,-12075,8125,14100,0,0,0,0x3030000, bhvKingBobomb
,63),
OBJECT_WITH_ACTS(223,7677,-1094,599,0,84,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(137,-7867,-417,-7989,0,84,0,0x10000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(137,8259,1042,10460,0,0,0,0x10000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(129,8143,416,10413,0,0,0,0x10000, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(107,5744,-52,6593,0,0,0,0x0, bhvWoodenPost
,63),
OBJECT_WITH_ACTS(223,5901,1771,7721,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,7257,1041,8914,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(217,5626,-5677,-1803,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(0,-12953,8177,11905,0,8,0,0x0, bhvCoinFormation
,56),
OBJECT_WITH_ACTS(0,-11747,8177,12754,0,8,0,0x0, bhvCoinFormation
,56),
OBJECT_WITH_ACTS(0,-11538,8177,11889,0,8,0,0x0, bhvCoinFormation
,56),
OBJECT_WITH_ACTS(0,-10578,8177,12873,0,8,0,0x0, bhvCoinFormation
,56),
OBJECT_WITH_ACTS(0,-10195,8177,12144,0,8,0,0x0, bhvCoinFormation
,56),
OBJECT_WITH_ACTS(137,-13354,8333,12914,0,0,0,0x60000, bhvExclamationBox
,32),
OBJECT_WITH_ACTS(194,-11883,8177,14943,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-9677,8177,13788,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-10210,8177,11356,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-10448,8177,14578,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-10734,8177,14329,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-10954,8177,14801,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-10155,8177,14197,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-10511,8177,13974,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-11511,8177,14886,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-11219,8177,14505,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-9426,8177,12756,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-10052,8177,13728,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-10498,8177,13577,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-11307,8177,13832,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-10917,8177,13612,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-10017,8177,12422,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-13019,8177,14298,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-13434,8177,13587,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-12512,8177,14075,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-11427,8177,11133,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-13752,8177,12175,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-13488,8177,11608,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-13806,8177,12782,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-13472,8177,13052,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-13394,8177,12514,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-13073,8177,11457,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-13012,8177,13669,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-12685,8177,13707,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-13047,8177,13251,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-9526,8177,13341,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-9649,8177,12249,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-9958,8177,12048,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-10084,8177,11702,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-9756,8177,12601,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-9721,8177,13020,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-9992,8177,13354,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-10115,8177,13124,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-10392,8177,13225,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-11269,8177,13505,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-10904,8177,13215,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-11509,8177,13278,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-11144,8177,12989,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-11937,8177,12964,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(194,-11499,8177,12766,0,0,0,0x0, bhvHomingAmp
,56),
OBJECT_WITH_ACTS(137,-11768,9167,13649,0,-6,0,0x40000, bhvExclamationBox
,32),
OBJECT_WITH_ACTS(137,-11696,9219,13091,0,-6,0,0x40000, bhvExclamationBox
,32),
OBJECT_WITH_ACTS(137,-11613,9219,12480,0,-6,0,0x40000, bhvExclamationBox
,32),
OBJECT_WITH_ACTS(137,-11449,9271,11405,0,-6,0,0x40000, bhvExclamationBox
,32),
OBJECT_WITH_ACTS(0,6608,-938,4147,0,0,0,0x0, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,-295,-938,4239,0,0,0,0x0, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,-1180,-1563,4281,0,0,0,0x0, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,-2164,-2188,4205,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(137,8565,7291,9432,0,0,0,0x80000, bhvExclamationBox
,63),
RETURN()
};
const LevelScript local_warps_hmc_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,7,1,12,0),
WARP_NODE(12,7,1,11,0),
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
