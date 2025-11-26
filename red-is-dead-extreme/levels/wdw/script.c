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
const LevelScript level_wdw_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _wdw_segment_7SegmentRomStart, _wdw_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _wdwSegmentRomStart, _wdwSegmentRomEnd),
LOAD_RAW(0x0E, _wdw_segment_ESegmentRomStart, _wdw_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_2),
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
AREA(1,Geo_wdw_1_0x1ba1700),
TERRAIN(col_wdw_1_0xe0246a0),
SET_BACKGROUND_MUSIC(0,58),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_wdw_1_),
JUMP_LINK(local_warps_wdw_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wdw_1_[] = {
OBJECT_WITH_ACTS(0,-14929,-5852,-16417,0,0,0,0xa0000, bhvSpinAirborneWarp
,63),
OBJECT_WITH_ACTS(0,583,2683,-5387,0,-154,0,0xb0000, bhvFadingWarp
,63),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp
,63),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp
,63),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp
,63),
OBJECT_WITH_ACTS(0,-12809,-10468,-1934,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(180,-12809,-10468,-1934,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(0,-15214,-6250,-16633,0,0,0,0x2000000, bhvHiddenStar
,63),
OBJECT_WITH_ACTS(122,-1879,-1771,-15164,0,0,0,0x0, bhvStar
,63),
OBJECT_WITH_ACTS(122,12134,8125,17303,0,0,0,0x1000000, bhvStar
,2),
OBJECT_WITH_ACTS(122,1811,2083,-540,0,0,0,0x3000000, bhvStar
,15),
OBJECT_WITH_ACTS(122,-15593,10521,15051,0,0,0,0x5000000, bhvStar
,36),
OBJECT_WITH_ACTS(137,-15139,-6354,-15216,0,0,0,0x60000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(137,11832,-1666,-14085,0,0,0,0x60000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(137,-16636,-9791,-17149,0,0,0,0x60000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(137,388,-1666,-1678,0,0,0,0x60000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(180,11957,-10468,13116,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(0,11976,-10468,13129,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(180,3612,-10468,1346,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(0,3612,-10468,1346,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(180,12516,-10468,-9513,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(0,12516,-10468,-9513,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,-6975,-10416,7983,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(180,-6975,-10416,7983,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,11849,-3229,-11738,0,261,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,10420,-4844,-16873,0,261,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,9917,-5313,-16357,0,261,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,9617,-5886,-15693,0,261,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,9540,-6459,-14900,0,261,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(88,14862,-3685,-13657,0,-202,0,0x0, bhvThwomp
,63),
OBJECT_WITH_ACTS(88,14570,-4006,-16636,0,-140,0,0x0, bhvThwomp
,63),
OBJECT_WITH_ACTS(88,14315,-4031,-16373,0,-140,0,0x0, bhvThwomp
,63),
OBJECT_WITH_ACTS(88,11615,-5000,-17615,0,-85,0,0x0, bhvThwomp
,63),
OBJECT_WITH_ACTS(88,11667,-5000,-17267,0,-85,0,0x0, bhvThwomp
,63),
OBJECT_WITH_ACTS(137,-3296,5261,5957,0,0,0,0xd0000, bhvExclamationBox
,16),
OBJECT_WITH_ACTS(0,-16512,-6667,-16139,0,0,0,0x110000, bhvCoinFormation
,5),
OBJECT_WITH_ACTS(137,12023,-1667,-13999,0,0,0,0x10000, bhvExclamationBox
,27),
OBJECT_WITH_ACTS(137,-14540,-6197,-15790,0,0,0,0x10000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(137,-15443,-9427,-16640,0,0,0,0x30000, bhvExclamationBox
,36),
OBJECT_WITH_ACTS(140,-6812,2984,11468,0,0,0,0x0, bhvBlueCoinSwitch
,63),
OBJECT_WITH_ACTS(118,-5649,4219,9622,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-5153,4531,8878,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-6171,3750,10438,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-6579,3282,10961,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(0,6005,-6510,-15136,0,0,0,0x0, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(137,1917,2239,-350,0,0,0,0x10000, bhvExclamationBox
,48),
OBJECT_WITH_ACTS(120,12145,9687,14652,0,-316,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(120,11459,7760,12998,0,-316,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(120,11501,6979,10788,0,-316,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(120,11562,6250,8910,0,-316,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(120,11469,5312,6471,0,-316,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(120,11557,4427,3632,0,-316,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(120,11472,3490,1385,0,-316,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(120,11546,2760,-729,0,-316,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(120,11511,2135,-2389,0,-316,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(120,11473,1146,-4937,0,-316,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(180,12028,-1719,-14258,0,-316,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,12028,-4844,-17383,0,-316,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,12653,-4323,-17383,0,-316,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,13433,-3958,-17221,0,-316,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,14641,-3958,-16233,0,-316,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,15043,-3750,-15616,0,-316,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,15196,-3594,-14895,0,-316,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,14898,-3594,-13288,0,-316,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,14558,-3437,-12764,0,-316,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,14042,-3333,-12353,0,-316,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,12440,-3333,-11648,0,-316,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,11186,-3021,-11835,0,-316,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,9544,-2708,-13421,0,-316,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,9365,-2500,-14090,0,-316,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,9862,-3125,-12883,0,-316,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(88,9908,-3125,-12444,0,-316,0,0x0, bhvThwomp
,63),
OBJECT_WITH_ACTS(88,10130,-3125,-12713,0,-316,0,0x0, bhvThwomp
,63),
OBJECT_WITH_ACTS(88,12828,-3437,-11520,0,-256,0,0x0, bhvThwomp
,63),
OBJECT_WITH_ACTS(88,12760,-3437,-11829,0,-256,0,0x0, bhvThwomp
,63),
OBJECT_WITH_ACTS(88,15224,-3646,-13575,0,-203,0,0x0, bhvThwomp
,63),
OBJECT_WITH_ACTS(120,-1145,2083,8500,0,0,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(120,1849,2083,10209,0,0,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(180,1932,1979,-552,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,1128,521,1203,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,2986,0,1437,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,3653,-312,820,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,3767,-990,-1813,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,3969,-990,-1434,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,4348,-1510,-1635,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,4158,-1510,-1964,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,4007,-1198,-1926,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,4133,-1198,-1636,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,3842,-573,-865,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,4170,-417,19,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(0,4170,-260,19,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,3907,-417,-869,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(120,-3875,2240,8608,0,0,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(120,-5715,2240,11168,0,0,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(0,-3004,2240,7240,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(137,-15382,-6235,-16064,0,0,0,0x60000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(137,-15032,-6218,-15781,0,0,0,0x60000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(217,-12280,-10573,-1329,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,12508,-10573,-8114,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,11336,-10573,3050,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,10690,-10573,12617,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-3333,-10573,-3735,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-9725,-10521,4383,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-4615,-10521,7628,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,2416,-10521,8148,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,2156,-10521,1325,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(137,-14747,-6354,-15221,0,0,0,0x60000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(137,-15083,-6354,-15531,0,0,0,0x60000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(137,-14762,-6354,-15484,0,0,0,0x60000, bhvExclamationBox
,63),
RETURN()
};
const LevelScript local_warps_wdw_1_[] = {
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
