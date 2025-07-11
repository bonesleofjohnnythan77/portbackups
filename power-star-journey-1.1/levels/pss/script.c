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
#include "levels/pss/header.h"
extern u8 _pss_segment_ESegmentRomStart[]; 
extern u8 _pss_segment_ESegmentRomEnd[];
#include "levels/bits/header.h"
const LevelScript level_pss_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bits_segment_7SegmentRomStart, _bits_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bitsSegmentRomStart, _bitsSegmentRomEnd),
LOAD_RAW(0x0E, _pss_segment_ESegmentRomStart, _pss_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom40730304_skybox_mio0SegmentRomStart,_SkyboxCustom40730304_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,           bits_geo_000430),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,           bits_geo_000448),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,           bits_geo_000460),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,           bits_geo_000478),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,           bits_geo_000490),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,           bits_geo_0004A8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,           bits_geo_0004C0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,           bits_geo_0004D8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,           bits_geo_0004F0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,           bits_geo_000508),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,           bits_geo_000520),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,           bits_geo_000538),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,           bits_geo_000550),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10,           bits_geo_000568),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,           bits_geo_000580),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12,           bits_geo_000598),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13,           bits_geo_0005B0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14,           bits_geo_0005C8),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_SLIDING_PLATFORM,       bits_geo_0005E0),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_TWIN_SLIDING_PLATFORMS, bits_geo_0005F8),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_OCTAGONAL_PLATFORM,     bits_geo_000610),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_BLUE_PLATFORM,          bits_geo_000628),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_FERRIS_WHEEL_AXLE,      bits_geo_000640),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_ARROW_PLATFORM,         bits_geo_000658),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_SEESAW_PLATFORM,        bits_geo_000670),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_TILTING_W_PLATFORM,     bits_geo_000688),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE,              bits_geo_0006A0),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE_FRAME1,       bits_geo_0006B8),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE_FRAME2,       bits_geo_0006D0),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE_FRAME3,       bits_geo_0006E8),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE_FRAME4,       bits_geo_000700),
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
JUMP_LINK(local_area_pss_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_pss_1_[] = {
AREA(1,Geo_pss_1_0x2621700),
TERRAIN(col_pss_1_0xe021ad8),
SET_BACKGROUND_MUSIC(0,46),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_pss_1_),
JUMP_LINK(local_warps_pss_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_pss_1_[] = {
OBJECT_WITH_ACTS(0,2354,-6899,3322,0,0,0,0xa0000, bhvSpinAirborneWarp
,31),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(217,-168,-10885,-65,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(144,2500,-10750,4802,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(137,-5000,-10385,-4427,0,0,0,0x70000, bhvExclamationBox
,31),
OBJECT_WITH_ACTS(137,-5365,-14348,7500,0,0,0,0x60000, bhvExclamationBox
,31),
OBJECT_WITH_ACTS(124,3989,-7620,3395,0,-90,0,0x80000, bhvMessagePanel
,31),
OBJECT_WITH_ACTS(220,3155,-7412,-885,0,0,0,0x10000, bhvFlyGuy
,31),
OBJECT_WITH_ACTS(88,-2160,-7620,-2656,0,-180,0,0x0, bhvThwomp
,31),
OBJECT_WITH_ACTS(103,-2297,-7620,-208,0,-175,0,0x0, bhvSmallWhomp
,31),
OBJECT_WITH_ACTS(0,-2657,-7620,521,0,0,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(103,-2289,-7620,1302,0,-185,0,0x0, bhvSmallWhomp
,31),
OBJECT_WITH_ACTS(220,-827,-6737,1719,0,0,0,0x10000, bhvFlyGuy
,31),
OBJECT_WITH_ACTS(220,2448,-5830,478,0,0,0,0x10000, bhvFlyGuy
,31),
OBJECT_WITH_ACTS(220,1406,-5880,-156,0,0,0,0x10000, bhvFlyGuy
,31),
OBJECT_WITH_ACTS(217,-1823,-5049,-1042,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(144,-2240,-4405,-521,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(144,-2813,-4405,156,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(144,-1979,-4405,1042,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(84,-544,-3695,755,0,0,0,0x0, bhvBulletBill
,31),
OBJECT_WITH_ACTS(84,885,-3698,748,0,0,0,0x0, bhvBulletBill
,31),
OBJECT_WITH_ACTS(88,-1149,-4507,1468,0,-90,0,0x0, bhvThwomp
,31),
OBJECT_WITH_ACTS(84,940,-3315,262,0,90,0,0x0, bhvBulletBill
,31),
OBJECT_WITH_ACTS(84,1013,-3100,-785,0,90,0,0x0, bhvBulletBill
,31),
OBJECT_WITH_ACTS(84,690,-2676,-940,0,-180,0,0x0, bhvBulletBill
,31),
OBJECT_WITH_ACTS(84,-1257,-1216,629,0,-85,0,0x0, bhvBulletBill
,31),
OBJECT_WITH_ACTS(103,-5885,-1408,365,0,91,0,0x0, bhvSmallWhomp
,31),
OBJECT_WITH_ACTS(0,-5885,-1408,1771,0,0,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(88,1667,-1408,4115,0,0,0,0x0, bhvThwomp
,31),
OBJECT_WITH_ACTS(220,-5000,-1146,5104,0,0,0,0x10000, bhvFlyGuy
,31),
OBJECT_WITH_ACTS(0,2083,-657,2917,0,0,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(103,2012,8152,312,0,0,0,0x0, bhvSmallWhomp
,31),
OBJECT_WITH_ACTS(0,2135,8152,1094,0,0,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(84,-1235,9886,478,0,-90,0,0x0, bhvBulletBill
,31),
OBJECT_WITH_ACTS(84,-1306,8950,-705,0,-90,0,0x0, bhvBulletBill
,31),
OBJECT_WITH_ACTS(84,502,8673,-938,0,180,0,0x0, bhvBulletBill
,31),
OBJECT_WITH_ACTS(84,-820,8699,-957,0,180,0,0x0, bhvBulletBill
,31),
OBJECT_WITH_ACTS(220,1615,11243,469,0,0,0,0x10000, bhvFlyGuy
,31),
OBJECT_WITH_ACTS(103,-208,10342,1510,0,-84,0,0x0, bhvSmallWhomp
,31),
OBJECT_WITH_ACTS(120,0,11634,0,0,0,0,0x0, bhvRecoveryHeart
,31),
OBJECT_WITH_ACTS(137,1510,-313,3438,0,0,0,0x60000, bhvExclamationBox
,31),
OBJECT_WITH_ACTS(0,2077,4948,1979,0,0,0,0x110000, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(212,-1858,-1146,677,0,0,0,0x0, bhv1Up
,31),
OBJECT_WITH_ACTS(137,-2344,-4583,1458,0,0,0,0x50000, bhvExclamationBox
,31),
OBJECT_WITH_ACTS(122,2185,8395,6875,0,-175,0,0x0, bhvStar
,31),
OBJECT_WITH_ACTS(217,1458,10990,365,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(217,-2396,8906,-260,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(0,-107,12100,-1804,0,0,0,0xf0d0000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,-2500,-1408,-104,0,0,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(102,-3750,-1408,-365,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(0,-5469,-1408,2188,0,0,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(0,-2135,-7620,521,0,0,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(100,1823,-5915,-1979,0,-93,0,0x0, bhvFirePiranhaPlant
,31),
OBJECT_WITH_ACTS(0,1979,-5915,-1771,0,0,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(103,1198,-5915,-1624,0,99,0,0x0, bhvSmallWhomp
,31),
OBJECT_WITH_ACTS(84,433,-5469,-934,0,-180,0,0x0, bhvBulletBill
,31),
OBJECT_WITH_ACTS(84,-678,-5198,-902,0,180,0,0x0, bhvBulletBill
,31),
OBJECT_WITH_ACTS(0,2188,8152,-937,0,0,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(100,926,10342,1654,0,-175,0,0x10000, bhvFirePiranhaPlant
,31),
OBJECT_WITH_ACTS(0,-729,10342,1667,0,0,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(103,-2188,9757,833,0,-180,0,0x0, bhvSmallWhomp
,31),
OBJECT_WITH_ACTS(0,-23,12552,-521,0,180,0,0xb0000, bhvPaintingDeathWarp
,31),
OBJECT_WITH_ACTS(0,2206,8492,7093,0,0,0,0x40000, bhvPaintingStarCollectWarp
,31),
RETURN()
};
const LevelScript local_warps_pss_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,27,1,11,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,21,1,10,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,27,1,4,0),
WARP_NODE(241,31,1,3,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,27,1,4,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
