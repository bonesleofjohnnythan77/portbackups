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
#include "levels/castle_courtyard/header.h"
extern u8 _castle_courtyard_segment_ESegmentRomStart[]; 
extern u8 _castle_courtyard_segment_ESegmentRomEnd[];
#include "levels/castle_grounds/header.h"
const LevelScript level_castle_courtyard_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _castle_groundsSegmentRomStart, _castle_groundsSegmentRomEnd),
LOAD_RAW(0x0E, _castle_courtyard_segment_ESegmentRomStart, _castle_courtyard_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
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
JUMP_LINK(local_area_castle_courtyard_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_courtyard_1_[] = {
AREA(1,Geo_castle_courtyard_1_0x3041700),
TERRAIN(col_castle_courtyard_1_0xe00dfa0),
SET_BACKGROUND_MUSIC(0,49),
TERRAIN_TYPE(1),
JUMP_LINK(local_objects_castle_courtyard_1_),
JUMP_LINK(local_warps_castle_courtyard_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_courtyard_1_[] = {
OBJECT_WITH_ACTS(0,-13814,-2831,-4102,0,0,0,0x0, bhvSpinAirborneWarp
,31),
OBJECT_WITH_ACTS(0,583,2683,-5387,0,-154,0,0xb0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(221,-12484,-3425,4068,0,180,0,0x4c000000, bhvToadMessage
,31),
OBJECT_WITH_ACTS(0,-11098,-3437,-8984,0,180,0,0xb0000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,-5700,-3021,12487,0,180,0,0xc0000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,359,-3021,12267,0,180,0,0xe0000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,8050,-3021,12445,0,180,0,0x30000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,17065,-3021,12515,0,180,0,0x50000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,2711,-3021,-12790,0,180,0,0x60000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,-23,-3021,-12791,0,180,0,0x40000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,-2211,-3021,-12891,0,180,0,0x10000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,-5293,-3021,-12920,0,180,0,0xd0000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,-12453,-2969,-4351,0,180,0,0xf00000, bhvLaunchStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,-12862,3594,3910,0,180,0,0xf10000, bhvPaintingDeathWarp
,31),
OBJECT_WITH_ACTS(122,-12879,3593,8735,0,180,0,0x2000000, bhvStar
,31),
OBJECT_WITH_ACTS(100,-12993,-3386,2937,0,180,0,0x1010000, bhvMips
,31),
OBJECT_WITH_ACTS(37,-12830,-3438,3365,0,185,0,0xa0000, bhvDoorWarp
,31),
OBJECT_WITH_ACTS(37,-12967,-3438,3357,0,2,0,0xa0000, bhvDoorWarp
,31),
OBJECT_WITH_ACTS(37,-12866,-3438,2734,0,180,0,0x1020000, bhvDoorWarp
,31),
OBJECT_WITH_ACTS(37,-13023,-3438,2731,0,0,0,0x1020000, bhvDoorWarp
,31),
OBJECT_WITH_ACTS(194,-11099,-1042,-8781,0,0,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(129,-12872,-3550,2571,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,-12190,-2953,826,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,-11950,-3081,-241,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,-11609,-2953,-1063,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,-11799,-2825,-1591,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,-11515,-2825,-2174,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,-11223,-3136,-2632,0,0,0,0x0, bhvBreakableBox
,31),
OBJECT_WITH_ACTS(207,-11198,-2114,-6876,0,0,0,0x0, bhvFloorSwitchHiddenObjects
,31),
OBJECT_WITH_ACTS(129,-13064,-3542,2556,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(194,-11179,-1094,-8650,0,0,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(194,-10971,-1094,-8639,0,0,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(220,-3871,-2656,-4734,0,0,0,0x0, bhvFlyGuy
,31),
OBJECT_WITH_ACTS(220,-4080,-2656,-4738,0,0,0,0x0, bhvFlyGuy
,31),
OBJECT_WITH_ACTS(220,-4341,-2656,-4691,0,0,0,0x0, bhvFlyGuy
,31),
OBJECT_WITH_ACTS(220,-11997,-2917,-3963,0,0,0,0x0, bhvFlyGuy
,31),
OBJECT_WITH_ACTS(220,-11788,-2917,-4011,0,0,0,0x0, bhvFlyGuy
,31),
OBJECT_WITH_ACTS(220,-11527,-2917,-4006,0,0,0,0x0, bhvFlyGuy
,31),
OBJECT_WITH_ACTS(194,-11253,-990,-8664,0,0,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(0,2701,-2918,-12751,0,0,0,0x110000, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(0,-15,-2918,-12779,0,0,0,0x110000, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(0,-2203,-2918,-12866,0,0,0,0x110000, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(0,-5320,-2970,-12881,0,0,0,0x110000, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(180,-11587,-2657,-1083,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,-12205,-2657,790,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,-11519,-2553,-2225,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(0,-5681,-2917,12483,0,-4,0,0x110000, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(0,380,-2917,12280,0,-4,0,0x110000, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(0,8038,-2917,12472,0,-4,0,0x110000, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(0,17058,-2917,12528,0,-4,0,0x110000, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(36,-13015,-3437,4623,0,0,0,0x87000000, bhvDoor
,31),
OBJECT_WITH_ACTS(124,-12665,-3439,5859,0,-178,0,0xa90000, bhvMessagePanel
,31),
RETURN()
};
const LevelScript local_warps_castle_courtyard_1_[] = {
WARP_NODE(10,18,1,0,0),
WARP_NODE(11,19,1,10,0),
WARP_NODE(12,4,1,10,0),
WARP_NODE(13,7,1,10,0),
WARP_NODE(14,22,1,10,0),
WARP_NODE(240,26,1,240,0),
WARP_NODE(241,26,1,241,0),
WARP_NODE(0,18,1,10,0),
WARP_NODE(1,8,1,10,0),
WARP_NODE(2,6,1,10,0),
WARP_NODE(3,23,1,10,0),
WARP_NODE(4,10,1,10,0),
WARP_NODE(5,11,1,10,0),
WARP_NODE(6,36,1,10,0),
RETURN()
};
