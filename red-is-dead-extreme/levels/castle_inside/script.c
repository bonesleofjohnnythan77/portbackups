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
#include "levels/castle_inside/header.h"
extern u8 _castle_inside_segment_ESegmentRomStart[]; 
extern u8 _castle_inside_segment_ESegmentRomEnd[];
#include "levels/castle_grounds/header.h"
const LevelScript level_castle_inside_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _castle_groundsSegmentRomStart, _castle_groundsSegmentRomEnd),
LOAD_RAW(0x0E, _castle_inside_segment_ESegmentRomStart, _castle_inside_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bbh_skybox_mio0SegmentRomStart,_bbh_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group10_mio0SegmentRomStart,_group10_mio0SegmentRomEnd),
LOAD_RAW(12,_group10_geoSegmentRomStart,_group10_geoSegmentRomEnd),
LOAD_MIO0(6,_group15_mio0SegmentRomStart,_group15_mio0SegmentRomEnd),
LOAD_RAW(13,_group15_geoSegmentRomStart,_group15_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,           castle_grounds_geo_0006F4),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_BUBBLY_TREE,  bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE,    warp_pipe_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CASTLE_DOOR,  castle_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_METAL_DOOR,   metal_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_VCUTM_GRILL,  castle_grounds_geo_00070C),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_FLAG,         castle_grounds_geo_000660),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CANNON_GRILL, castle_grounds_geo_000724),
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
LOAD_MODEL_FROM_GEO(41, metal_door_geo
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
LOAD_MODEL_FROM_GEO(222, peach_geo
),
LOAD_MODEL_FROM_GEO(223, chuckya_geo
),
LOAD_MODEL_FROM_GEO(224, white_puff_geo
),
LOAD_MODEL_FROM_GEO(225, bowling_ball_track_geo
),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_11),
JUMP_LINK(script_func_global_16),
JUMP_LINK(local_area_castle_inside_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_inside_1_[] = {
AREA(1,Geo_castle_inside_1_0x14c1700),
TERRAIN(col_castle_inside_1_0xe00a8b8),
SET_BACKGROUND_MUSIC(0,37),
TERRAIN_TYPE(4),
JUMP_LINK(local_objects_castle_inside_1_),
JUMP_LINK(local_warps_castle_inside_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_inside_1_[] = {
OBJECT_WITH_ACTS(0,12688,463,10510,0,0,0,0xa0000, bhvSpinAirborneWarp
,31),
OBJECT_WITH_ACTS(0,583,2683,-5387,0,-154,0,0xb0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(37,12743,260,11169,0,-180,0,0x20000, bhvDoorWarp
,31),
OBJECT_WITH_ACTS(37,12599,260,11171,0,-358,0,0x20000, bhvDoorWarp
,31),
OBJECT_WITH_ACTS(34,16638,104,-2893,0,-88,0,0x73000000, bhvDoor
,31),
OBJECT_WITH_ACTS(34,-2266,260,9588,0,146,0,0x5a000000, bhvDoor
,31),
OBJECT_WITH_ACTS(34,-2610,104,-2942,0,39,0,0x45000000, bhvDoor
,31),
OBJECT_WITH_ACTS(0,-2701,156,-3100,0,36,0,0x10000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,-2403,312,9737,0,55,0,0x0, bhvWarp
,31),
OBJECT_WITH_ACTS(0,16855,208,-2969,0,-88,0,0x30000, bhvWarp
,31),
OBJECT_WITH_ACTS(144,16899,469,-2947,0,-88,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(144,-2371,625,9766,0,145,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(144,-2761,521,-3111,0,128,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(0,383,521,711,0,90,0,0xf00000, bhvLaunchStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,10964,625,498,0,90,0,0xf10000, bhvPaintingDeathWarp
,31),
OBJECT_WITH_ACTS(0,10259,11354,851,0,90,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,10213,11667,872,-1,21,7,0x110000, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(221,1166,15104,4099,0,-66,0,0x53000000, bhvToadMessage
,31),
OBJECT_WITH_ACTS(217,-2391,208,9777,0,-34,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(217,-2783,0,-3108,0,-53,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(217,16873,0,-2947,0,-88,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(0,3953,12032,4239,0,-47,0,0x0, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(0,7593,12032,3788,0,-45,0,0x0, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(124,-2718,104,-2805,0,-318,0,0x7c0000, bhvMessagePanel
,31),
OBJECT_WITH_ACTS(124,-2080,260,9657,0,-212,0,0x7b0000, bhvMessagePanel
,31),
OBJECT_WITH_ACTS(124,16625,104,-3087,0,-88,0,0x7a0000, bhvMessagePanel
,31),
OBJECT_WITH_ACTS(0,11279,255,298,0,0,0,0x20000, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(0,12636,255,9702,0,0,0,0x20000, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(0,7618,7188,1780,0,0,0,0x110000, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(0,8859,9271,1383,0,0,0,0x110000, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(0,10065,10417,889,0,0,0,0x110000, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(0,9687,12396,1817,0,0,0,0x110000, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(0,1320,13646,3497,0,0,0,0x110000, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(0,4167,12135,4242,0,0,0,0x110000, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(0,3017,12135,4238,0,0,0,0x110000, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(0,1412,13229,3228,0,0,0,0x0, bhvMerryGoRoundBooManager
,31),
OBJECT_WITH_ACTS(0,1832,12396,3244,0,0,0,0x0, bhvMerryGoRoundBooManager
,31),
OBJECT_WITH_ACTS(0,2719,11823,3219,0,0,0,0x0, bhvMerryGoRoundBooManager
,31),
OBJECT_WITH_ACTS(0,2918,11875,4299,0,0,0,0x0, bhvMerryGoRoundBooManager
,31),
OBJECT_WITH_ACTS(0,4319,11875,4177,0,0,0,0x0, bhvMerryGoRoundBooManager
,31),
OBJECT_WITH_ACTS(0,5140,11875,4000,0,0,0,0x0, bhvMerryGoRoundBooManager
,31),
OBJECT_WITH_ACTS(0,6186,11875,4013,0,0,0,0x0, bhvMerryGoRoundBooManager
,31),
OBJECT_WITH_ACTS(0,7181,11875,4031,0,0,0,0x0, bhvMerryGoRoundBooManager
,31),
OBJECT_WITH_ACTS(0,7702,11875,3410,0,0,0,0x0, bhvMerryGoRoundBooManager
,31),
OBJECT_WITH_ACTS(0,8702,11875,3479,0,0,0,0x0, bhvMerryGoRoundBooManager
,31),
OBJECT_WITH_ACTS(0,8841,11875,2683,0,0,0,0x0, bhvMerryGoRoundBooManager
,31),
OBJECT_WITH_ACTS(0,9141,11875,1925,0,0,0,0x0, bhvMerryGoRoundBooManager
,31),
OBJECT_WITH_ACTS(0,9711,11875,1875,0,0,0,0x0, bhvMerryGoRoundBooManager
,31),
OBJECT_WITH_ACTS(0,10261,11875,990,0,0,0,0x0, bhvMerryGoRoundBooManager
,31),
OBJECT_WITH_ACTS(180,9366,11979,2114,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,8907,11979,2834,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,8334,11979,3459,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,7545,11979,3999,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,6606,11979,4029,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,5819,11979,3993,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,5201,11979,4099,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,4634,11979,4201,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,3847,11979,4166,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,3276,11979,4216,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,2563,11979,3232,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,2563,12656,3232,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(0,1568,13177,3215,0,0,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,2091,11927,3221,0,0,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,2996,11927,4218,0,0,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,4043,11927,4223,0,0,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,5210,11927,4084,0,0,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,7623,11927,3552,0,0,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,8915,11927,3216,0,0,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,8658,11927,1995,0,0,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,9543,11927,2062,0,0,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(194,10205,12187,968,0,0,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(124,10818,255,742,0,91,0,0x380000, bhvMessagePanel
,31),
RETURN()
};
const LevelScript local_warps_castle_inside_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,240,0),
WARP_NODE(241,6,1,241,0),
WARP_NODE(0,14,1,10,0),
WARP_NODE(1,13,1,10,0),
WARP_NODE(2,26,1,10,0),
WARP_NODE(3,15,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
