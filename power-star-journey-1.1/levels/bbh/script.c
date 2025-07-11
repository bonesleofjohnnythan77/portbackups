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
#include "levels/bbh/header.h"
extern u8 _bbh_segment_ESegmentRomStart[]; 
extern u8 _bbh_segment_ESegmentRomEnd[];
#include "levels/thi/header.h"
const LevelScript level_bbh_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _thi_segment_7SegmentRomStart, _thi_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _thiSegmentRomStart, _thiSegmentRomEnd),
LOAD_RAW(0x0E, _bbh_segment_ESegmentRomStart, _bbh_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group11_mio0SegmentRomStart,_group11_mio0SegmentRomEnd),
LOAD_RAW(12,_group11_geoSegmentRomStart,_group11_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_THI_BUBBLY_TREE,     bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,   thi_geo_0005F0),
    LOAD_MODEL_FROM_GEO(MODEL_THI_WARP_PIPE,       warp_pipe_geo),
    LOAD_MODEL_FROM_GEO(MODEL_THI_HUGE_ISLAND_TOP, thi_geo_0005B0),
    LOAD_MODEL_FROM_GEO(MODEL_THI_TINY_ISLAND_TOP, thi_geo_0005C8),
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
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_bbh_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bbh_1_[] = {
AREA(1,Geo_bbh_1_0x1201700),
TERRAIN(col_bbh_1_0xe023a60),
SET_BACKGROUND_MUSIC(0,12),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bbh_1_),
JUMP_LINK(local_warps_bbh_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bbh_1_[] = {
OBJECT_WITH_ACTS(0,-2135,-1216,1146,0,180,0,0xa0000, bhvSpinAirborneWarp
,31),
OBJECT_WITH_ACTS(0,-89,980,1871,0,-154,0,0xb0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-4388,-2051,3227,0,-153,0,0xc0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(84,52,-1250,-677,0,0,0,0x0, bhvEnemyLakitu
,63),
OBJECT_WITH_ACTS(0,313,-1583,-625,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(84,2188,-1250,2344,0,0,0,0x0, bhvEnemyLakitu
,63),
OBJECT_WITH_ACTS(0,2187,-1583,3229,0,0,0,0x10000, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,1250,1437,1563,0,0,0,0x10000, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(84,885,1875,1563,0,0,0,0x0, bhvEnemyLakitu
,63),
OBJECT_WITH_ACTS(223,-2136,1437,4375,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,-5208,1437,1771,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,-4011,1437,52,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(0,104,1437,-4843,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(223,-4010,-1583,-1302,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,-5365,-1583,-4011,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(103,-4063,-1583,-5209,0,0,0,0x0, bhvSmallWhomp
,63),
OBJECT_WITH_ACTS(223,-1458,-1417,-6198,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(0,417,-1417,-3646,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,1302,-1583,2917,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(220,937,-1198,677,0,0,0,0x10000, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(223,-4479,-1583,1094,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(122,-184,1771,-5573,0,-26,0,0x0, bhvStar
,31),
OBJECT_WITH_ACTS(122,2083,1123,463,0,100,0,0x1000000, bhvStar
,31),
OBJECT_WITH_ACTS(207,-260,1437,1302,0,0,0,0x0, bhvFloorSwitchHiddenObjects
,31),
OBJECT_WITH_ACTS(129,2551,1196,833,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,2704,1043,833,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,2890,873,781,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,2913,843,573,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,2597,798,469,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(122,-4586,-1905,3251,0,0,0,0x2000000, bhvStar
,31),
OBJECT_WITH_ACTS(100,1615,-1583,3021,0,0,0,0x3010000, bhvFirePiranhaPlant
,15),
OBJECT_WITH_ACTS(100,-4844,-1481,3385,0,82,0,0x3010000, bhvFirePiranhaPlant
,15),
OBJECT_WITH_ACTS(100,260,1437,1458,0,0,0,0x3010000, bhvFirePiranhaPlant
,15),
OBJECT_WITH_ACTS(100,677,-1583,-3021,0,103,0,0x3010000, bhvFirePiranhaPlant
,15),
OBJECT_WITH_ACTS(100,-3698,-1583,-6094,0,-107,0,0x3010000, bhvFirePiranhaPlant
,15),
OBJECT_WITH_ACTS(0,1746,-1532,2347,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(0,2017,-1583,2684,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(0,-4551,-1481,3618,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(0,1245,-1583,-3590,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(0,509,-1583,-3454,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(0,-2073,-1111,1063,0,0,0,0x4000000, bhvHiddenStar
,31),
OBJECT_WITH_ACTS(84,3177,1771,156,0,0,0,0x0, bhvEnemyLakitu
,31),
OBJECT_WITH_ACTS(84,5781,2413,3542,0,0,0,0x0, bhvEnemyLakitu
,31),
OBJECT_WITH_ACTS(84,6667,2448,3490,0,0,0,0x0, bhvEnemyLakitu
,31),
OBJECT_WITH_ACTS(180,5729,2091,3437,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,7344,2091,3229,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(87,6458,2091,3489,0,0,0,0x5000000, bhvWigglerHead
,32),
OBJECT_WITH_ACTS(120,5572,1489,-208,0,0,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(0,2707,-417,1693,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(137,-4167,-1250,-5573,0,0,0,0x50000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(0,-6876,-1427,-1823,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,6801,1759,4184,0,0,0,0x140e0000, bhvWarp
,1),
OBJECT_WITH_ACTS(124,990,-1563,-2865,0,-180,0,0xa60000, bhvMessagePanel
,63),
OBJECT_WITH_ACTS(0,6798,2091,3441,0,0,0,0x40000, bhvCoinFormation
,1),
OBJECT_WITH_ACTS(116,6834,2091,4176,0,0,0,0x0, bhvOneCoin
,1),
RETURN()
};
const LevelScript local_warps_bbh_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,4,1,12,0),
WARP_NODE(12,4,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,29,1,10,0),
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
