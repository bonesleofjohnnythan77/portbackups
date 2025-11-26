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
#include "levels/vcutm/header.h"
extern u8 _vcutm_segment_ESegmentRomStart[]; 
extern u8 _vcutm_segment_ESegmentRomEnd[];
#include "levels/castle_grounds/header.h"
const LevelScript level_vcutm_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _castle_groundsSegmentRomStart, _castle_groundsSegmentRomEnd),
LOAD_RAW(0x0E, _vcutm_segment_ESegmentRomStart, _vcutm_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
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
JUMP_LINK(local_area_vcutm_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_vcutm_1_[] = {
AREA(1,Geo_vcutm_1_0x2541700),
TERRAIN(col_vcutm_1_0xe03d5a0),
SET_BACKGROUND_MUSIC(0,55),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_vcutm_1_),
JUMP_LINK(local_warps_vcutm_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_vcutm_1_[] = {
OBJECT_WITH_ACTS(0,-2978,-3196,-4771,0,0,0,0xa0000, bhvSpinAirborneWarp
,31),
OBJECT_WITH_ACTS(0,8357,-1900,-1989,0,-154,0,0xb0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,8144,-1790,-1990,0,-153,0,0xc0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,8134,-2414,-2080,0,107,0,0xd0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,8188,-2305,-2020,0,-151,0,0x0, bhvInstantActiveWarp
,31),
OBJECT_WITH_ACTS(124,-7948,-2344,105,0,-269,0,0x7d0000, bhvMessagePanel
,31),
OBJECT_WITH_ACTS(129,3005,-2032,3439,0,-90,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,3005,-1146,3439,0,-90,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,3005,-2865,3439,0,-90,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,3131,-1563,3028,0,-90,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,3131,-2500,3028,0,-90,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,3131,-730,3028,0,-90,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,3131,-3438,3028,0,-90,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(207,3202,-3438,2667,0,-90,0,0x0, bhvFloorSwitchHiddenObjects
,31),
OBJECT_WITH_ACTS(217,3124,-678,2577,0,-90,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(137,-5527,-4896,-7642,0,-90,0,0x30000, bhvExclamationBox
,31),
OBJECT_WITH_ACTS(217,-8219,-2396,-64,0,-90,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(129,-6505,-1198,6409,0,-90,0,0x0, bhvBreakableBox
,31),
OBJECT_WITH_ACTS(0,-8077,-2969,6450,0,-90,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(0,3250,-2969,-5776,0,-90,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(212,9964,-1094,-8228,0,-90,0,0x0, bhv1Up
,31),
OBJECT_WITH_ACTS(194,-5121,-3073,3746,0,-90,0,0x0, bhvCirclingAmp
,31),
OBJECT_WITH_ACTS(0,-5634,-3230,-7525,0,-90,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(0,-8949,-3073,-4299,0,-90,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(0,-6977,-1511,-1718,0,-90,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(137,-8316,-782,-214,0,-90,0,0x30000, bhvExclamationBox
,31),
OBJECT_WITH_ACTS(0,-5948,-4792,-1176,0,-90,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(0,-5123,-4792,-4914,0,-90,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(0,-7551,-5105,146,0,-90,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(0,6211,-3230,4516,0,-90,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(221,3044,-313,2507,0,-90,0,0x52010000, bhvToadMessage
,31),
OBJECT_WITH_ACTS(137,-8465,-2032,-119,0,-90,0,0x90000, bhvExclamationBox
,31),
OBJECT_WITH_ACTS(122,9984,-1667,8848,-29,-90,33,0x2000000, bhvStar
,31),
OBJECT_WITH_ACTS(137,-2860,-886,-5126,0,-90,0,0xc0000, bhvExclamationBox
,31),
OBJECT_WITH_ACTS(0,-6304,-2761,3615,0,-90,0,0xf00000, bhvLaunchStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,-6188,-2553,3783,0,-90,0,0xf10000, bhvPaintingDeathWarp
,31),
OBJECT_WITH_ACTS(0,-1113,-5313,2216,0,-90,0,0x28000000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,7826,-4220,5427,0,-90,0,0x14010000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,-297,-3178,4856,0,-90,0,0x28060000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,807,-3750,1496,0,-90,0,0x1e030000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,3850,-2084,-4428,0,-90,0,0xf040000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,2977,-3125,1306,0,-90,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(0,3268,-3125,5061,0,-90,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(0,7228,-2969,528,0,-90,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(0,7906,-2969,-4047,0,-90,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(0,428,-2969,-5812,0,-90,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(0,-910,-2969,-439,0,-90,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(0,949,-3229,-2074,0,-90,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(202,-626,-2656,3291,0,-90,0,0x0, bhvCheckerboardElevatorGroup
,31),
OBJECT_WITH_ACTS(0,-8146,-1927,-38,0,-90,0,0x110000, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(36,-8023,-2344,-37,0,-90,0,0x14000000, bhvDoor
,31),
OBJECT_WITH_ACTS(37,-3665,-3438,-4814,0,-90,0,0x2020000, bhvDoorWarp
,31),
OBJECT_WITH_ACTS(37,-3655,-3438,-4657,0,89,0,0x2020000, bhvDoorWarp
,31),
OBJECT_WITH_ACTS(124,-4491,-3281,3620,0,0,0,0x450000, bhvMessagePanel
,31),
RETURN()
};
const LevelScript local_warps_vcutm_1_[] = {
WARP_NODE(10,18,1,0,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,18,1,4,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,18,1,240,0),
WARP_NODE(241,18,1,241,0),
WARP_NODE(0,17,1,10,0),
WARP_NODE(1,5,1,10,0),
WARP_NODE(2,26,1,0,0),
WARP_NODE(3,24,1,10,0),
WARP_NODE(4,12,1,10,0),
WARP_NODE(5,21,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
