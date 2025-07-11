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
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group11_mio0SegmentRomStart,_group11_mio0SegmentRomEnd),
LOAD_RAW(12,_group11_geoSegmentRomStart,_group11_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_16),
JUMP_LINK(local_area_castle_courtyard_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,1094,-2258,3489),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_courtyard_1_[] = {
AREA(1,Geo_castle_courtyard_1_0x2541700),
TERRAIN(col_castle_courtyard_1_0xe021df8),
SET_BACKGROUND_MUSIC(0,4),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_courtyard_1_),
JUMP_LINK(local_warps_castle_courtyard_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_courtyard_1_[] = {
OBJECT_WITH_ACTS(0,1094,-2258,3489,0,84,0,0xa0000, bhvSpinAirborneWarp
,31),
OBJECT_WITH_ACTS(212,583,2683,-5387,0,-154,0,0x0, bhv1Up
,31),
OBJECT_WITH_ACTS(212,1680,3835,-5523,0,-153,0,0x0, bhv1Up
,31),
OBJECT_WITH_ACTS(212,-6612,1024,-3351,0,107,0,0x0, bhv1Up
,31),
OBJECT_WITH_ACTS(212,1980,768,6618,0,-151,0,0x0, bhv1Up
,31),
OBJECT_WITH_ACTS(0,-709,-3008,5479,0,0,0,0xb0000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,0,-2240,0,0,0,0,0xc0000, bhvPaintingStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,0,-2240,0,0,0,0,0xd0000, bhvPaintingDeathWarp
,31),
OBJECT_WITH_ACTS(221,-1562,-2967,-2864,0,0,0,0x85000000, bhvToadMessage
,31),
OBJECT_WITH_ACTS(221,-1614,-2967,3083,0,105,0,0x87000000, bhvToadMessage
,31),
OBJECT_WITH_ACTS(221,1912,-2967,1503,0,-210,0,0x86000000, bhvToadMessage
,31),
OBJECT_WITH_ACTS(0,-6859,-2533,5197,0,0,0,0x140e0000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,-1494,-2967,-4206,0,0,0,0x0, bhvWarp
,31),
OBJECT_WITH_ACTS(0,3700,-2967,-5274,0,0,0,0x14010000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,-781,-276,-52,0,0,0,0xa0000, bhvInstantActiveWarp
,31),
OBJECT_WITH_ACTS(0,-1877,6886,1021,0,0,0,0x20000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,6534,-1954,2797,0,0,0,0xf030000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,-7668,-1782,-5061,0,0,0,0xf040000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,6528,-2967,-1768,0,0,0,0xf050000, bhvWarp
,31),
OBJECT_WITH_ACTS(217,-156,2760,4323,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(217,521,3546,4010,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(217,573,4635,2760,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(217,-521,5677,3073,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(0,-938,-3008,1250,0,0,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(0,1354,-3008,365,0,0,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(84,4896,-1615,2656,0,0,0,0x0, bhvEnemyLakitu
,31),
OBJECT_WITH_ACTS(0,4531,-1954,2812,0,0,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(0,-5833,-3008,-1979,0,0,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(0,-7083,-1823,-3177,0,0,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(0,-4479,-3008,-3073,0,0,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(212,-5938,-1823,-4583,0,0,0,0x0, bhv1Up
,31),
OBJECT_WITH_ACTS(37,-3324,-2969,5877,0,-161,0,0x1060000, bhvDoorWarp
,31),
OBJECT_WITH_ACTS(34,3459,-2969,-495,0,-76,0,0x1e000000, bhvDoor
,31),
OBJECT_WITH_ACTS(37,-3465,-2969,5916,0,22,0,0x1060000, bhvDoorWarp
,31),
OBJECT_WITH_ACTS(124,3490,-2969,-260,0,-59,0,0x1b0000, bhvMessagePanel
,31),
OBJECT_WITH_ACTS(0,6399,-2223,-1714,0,112,0,0x130000, bhvPaintingDeathWarp
,31),
OBJECT_WITH_ACTS(0,-761,-2225,5331,0,24,0,0x320000, bhvPaintingStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,-761,-2225,5331,0,24,0,0x640000, bhvPaintingDeathWarp
,31),
OBJECT_WITH_ACTS(0,6521,-1115,2796,0,76,0,0x330000, bhvPaintingStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,6521,-1115,2796,0,76,0,0x650000, bhvPaintingDeathWarp
,31),
OBJECT_WITH_ACTS(0,3545,-2225,-4944,0,155,0,0x340000, bhvPaintingStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,3545,-2225,-4944,0,155,0,0x660000, bhvPaintingDeathWarp
,31),
OBJECT_WITH_ACTS(0,-1454,1321,-3874,0,210,0,0x350000, bhvPaintingStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,-1454,1321,-3874,0,210,0,0x670000, bhvPaintingDeathWarp
,31),
OBJECT_WITH_ACTS(0,-7483,-1001,-4882,0,224,0,0x360000, bhvPaintingStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,-7483,-1001,-4882,0,224,0,0x680000, bhvPaintingDeathWarp
,31),
OBJECT_WITH_ACTS(0,-6592,-1730,5155,0,270,0,0x370000, bhvPaintingStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,-6592,-1730,5155,0,270,0,0x690000, bhvPaintingDeathWarp
,31),
OBJECT_WITH_ACTS(0,-1747,7674,1126,0,228,0,0x380000, bhvPaintingStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,-1747,7674,1126,0,228,0,0x6a0000, bhvPaintingDeathWarp
,31),
RETURN()
};
const LevelScript local_warps_castle_courtyard_1_[] = {
WARP_NODE(50,26,1,50,0),
WARP_NODE(51,26,1,51,0),
WARP_NODE(52,26,1,52,0),
WARP_NODE(53,26,1,53,0),
WARP_NODE(54,26,1,54,0),
WARP_NODE(55,26,1,55,0),
WARP_NODE(56,26,1,56,0),
WARP_NODE(100,26,1,100,0),
WARP_NODE(101,26,1,101,0),
WARP_NODE(102,26,1,102,0),
WARP_NODE(103,26,1,103,0),
WARP_NODE(104,26,1,104,0),
WARP_NODE(105,26,1,105,0),
WARP_NODE(106,26,1,106,0),
WARP_NODE(19,26,1,19,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(10,26,1,10,0),
WARP_NODE(11,9,1,10,0),
WARP_NODE(12,26,1,12,0),
WARP_NODE(13,26,1,13,0),
WARP_NODE(14,24,1,10,0),
WARP_NODE(240,26,1,12,0),
WARP_NODE(241,26,1,13,0),
WARP_NODE(0,20,1,10,0),
WARP_NODE(1,12,1,10,0),
WARP_NODE(2,5,1,10,0),
WARP_NODE(3,4,1,10,0),
WARP_NODE(4,7,1,10,0),
WARP_NODE(5,19,1,10,0),
WARP_NODE(6,17,1,10,0),
RETURN()
};
