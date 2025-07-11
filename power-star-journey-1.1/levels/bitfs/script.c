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
#include "levels/bitfs/header.h"
extern u8 _bitfs_segment_ESegmentRomStart[]; 
extern u8 _bitfs_segment_ESegmentRomEnd[];
const LevelScript level_bitfs_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bitfs_segment_7SegmentRomStart, _bitfs_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bitfsSegmentRomStart, _bitfsSegmentRomEnd),
LOAD_RAW(0x0E, _bitfs_segment_ESegmentRomStart, _bitfs_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_bitfs_skybox_mio0SegmentRomStart,_bitfs_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group2_mio0SegmentRomStart,_group2_mio0SegmentRomEnd),
LOAD_RAW(12,_group2_geoSegmentRomStart,_group2_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,             bitfs_geo_0004B0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,             bitfs_geo_0004C8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,             bitfs_geo_0004E0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,             bitfs_geo_0004F8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,             bitfs_geo_000510),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,             bitfs_geo_000528),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,             bitfs_geo_000540),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,             bitfs_geo_000558),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,             bitfs_geo_000570),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,             bitfs_geo_000588),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,             bitfs_geo_0005A0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,             bitfs_geo_0005B8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,             bitfs_geo_0005D0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10,             bitfs_geo_0005E8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,             bitfs_geo_000600),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12,             bitfs_geo_000618),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13,             bitfs_geo_000630),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14,             bitfs_geo_000648),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_15,             bitfs_geo_000660),
    LOAD_MODEL_FROM_GEO(MODEL_BITFS_PLATFORM_ON_TRACK,       bitfs_geo_000758),
    LOAD_MODEL_FROM_GEO(MODEL_BITFS_TILTING_SQUARE_PLATFORM, bitfs_geo_0006C0),
    LOAD_MODEL_FROM_GEO(MODEL_BITFS_SINKING_PLATFORMS,       bitfs_geo_000770),
    LOAD_MODEL_FROM_GEO(MODEL_BITFS_BLUE_POLE,               bitfs_geo_0006A8),
    LOAD_MODEL_FROM_GEO(MODEL_BITFS_SINKING_CAGE_PLATFORM,   bitfs_geo_000690),
    LOAD_MODEL_FROM_GEO(MODEL_BITFS_ELEVATOR,                bitfs_geo_000678),
    LOAD_MODEL_FROM_GEO(MODEL_BITFS_STRETCHING_PLATFORMS,    bitfs_geo_000708),
    LOAD_MODEL_FROM_GEO(MODEL_BITFS_SEESAW_PLATFORM,         bitfs_geo_000788),
    LOAD_MODEL_FROM_GEO(MODEL_BITFS_MOVING_SQUARE_PLATFORM,  bitfs_geo_000728),
    LOAD_MODEL_FROM_GEO(MODEL_BITFS_SLIDING_PLATFORM,        bitfs_geo_000740),
    LOAD_MODEL_FROM_GEO(MODEL_BITFS_TUMBLING_PLATFORM_PART,  bitfs_geo_0006D8),
    LOAD_MODEL_FROM_GEO(MODEL_BITFS_TUMBLING_PLATFORM,       bitfs_geo_0006F0),
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
JUMP_LINK(script_func_global_3),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_bitfs_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bitfs_1_[] = {
AREA(1,Geo_bitfs_1_0x1f21700),
TERRAIN(col_bitfs_1_0xe013160),
SET_BACKGROUND_MUSIC(0,17),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bitfs_1_),
JUMP_LINK(local_warps_bitfs_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bitfs_1_[] = {
OBJECT_WITH_ACTS(0,-4097,-5227,-3838,0,0,0,0xa0000, bhvSpinAirborneWarp
,31),
OBJECT_WITH_ACTS(86,3293,3918,-856,0,-154,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,6680,3918,3383,0,-153,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,6096,3918,322,0,107,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(0,2190,-140,950,0,0,0,0x110000, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(137,-4482,1130,2733,0,0,0,0x60000, bhvExclamationBox
,31),
OBJECT_WITH_ACTS(86,1664,-1787,-1666,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,999,-1787,-7450,0,-188,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(0,-3125,-1787,-6979,0,0,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(86,-4329,-1787,-3371,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,-3333,-1787,-4757,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,-5365,-1787,-4531,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(0,-1996,-280,-1476,0,0,0,0x110000, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(212,-3125,-1731,-330,0,0,0,0x0, bhv1Up
,31),
OBJECT_WITH_ACTS(0,1875,-264,-1146,0,0,0,0x110000, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(194,-5396,-1690,-2604,0,0,0,0x0, bhvCirclingAmp
,31),
OBJECT_WITH_ACTS(194,1495,-1731,-5990,0,0,0,0x0, bhvCirclingAmp
,31),
OBJECT_WITH_ACTS(194,-417,960,1406,0,0,0,0x0, bhvCirclingAmp
,31),
OBJECT_WITH_ACTS(223,-4531,902,3171,0,0,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(144,-3337,1045,1439,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(144,-1225,1045,1439,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(0,-5208,-1787,-7552,0,0,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(217,-680,2214,3611,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(220,-4375,-4026,-885,0,0,0,0x10000, bhvFlyGuy
,31),
OBJECT_WITH_ACTS(86,-3282,-1787,-5858,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,-5380,-1787,-5867,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,-1162,-1787,-6386,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,-1103,-1787,-7818,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,-2659,-1787,-6979,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(220,-677,2141,3899,0,0,0,0x0, bhvFlyGuy
,31),
OBJECT_WITH_ACTS(217,279,388,1406,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(0,1771,-1787,-885,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(217,-4375,-2171,-4583,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(217,-4375,-2171,-5600,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(207,469,3918,2292,0,0,0,0x0, bhvFloorSwitchHiddenObjects
,31),
OBJECT_WITH_ACTS(129,1143,3723,2448,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,1548,3725,2446,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,1962,3727,2443,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,1129,3587,1354,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,1353,3430,1371,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,1579,3220,1365,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(86,469,3918,1302,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,1243,3918,4427,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,2344,3918,5156,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,4160,3918,5543,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,5833,3918,4723,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,6719,3918,2031,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,4948,3918,-573,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,1771,3918,-312,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(120,463,3971,2739,0,0,0,0x0, bhvRecoveryHeart
,31),
OBJECT_WITH_ACTS(22,3693,4861,2632,0,0,0,0xb0000, bhvWarpPipe
,31),
OBJECT_WITH_ACTS(215,-5106,-4742,-2378,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-4373,-1824,-4582,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-4368,-1828,-5604,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,1545,-1560,-3815,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,2029,-533,938,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-4515,993,3346,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-365,2985,3218,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,1598,3443,1362,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(0,3299,5054,2710,0,0,0,0x0, bhvBowserCourseRedCoinStar
,31),
OBJECT_WITH_ACTS(0,3304,5035,2620,0,90,0,0xc0000, bhvDeathWarp
,31),
RETURN()
};
const LevelScript local_warps_bitfs_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,33,1,10,0),
WARP_NODE(12,19,1,12,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,12,0),
WARP_NODE(241,26,1,19,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
