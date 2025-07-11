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
#include "levels/thi/header.h"
const LevelScript level_hmc_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _thi_segment_7SegmentRomStart, _thi_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _thiSegmentRomStart, _thiSegmentRomEnd),
LOAD_RAW(0x0E, _hmc_segment_ESegmentRomStart, _hmc_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_clouds_skybox_mio0SegmentRomStart,_clouds_skybox_mio0SegmentRomEnd),
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
AREA(1,Geo_hmc_1_0x14a1700),
TERRAIN(col_hmc_1_0xe00f6c8),
SET_BACKGROUND_MUSIC(0,20),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_hmc_1_),
JUMP_LINK(local_warps_hmc_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_hmc_1_[] = {
OBJECT_WITH_ACTS(0,-3490,-1789,-2969,0,-316,0,0xa0000, bhvSpinAirborneWarp
,63),
OBJECT_WITH_ACTS(0,10,8098,30,0,-154,0,0xb0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,3698,454,-2031,0,-153,0,0xc0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-1250,-2413,-1719,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(220,417,-1198,-781,0,0,0,0x10000, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(E_MODEL_ENEMY_LAKITU,1302,-417,104,0,0,0,0x0, id_bhvEnemyLakitu
,63),
OBJECT_WITH_ACTS(0,677,-951,-573,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(220,-2135,469,938,0,0,0,0x10000, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(217,-2379,677,833,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(220,-2760,1927,990,0,0,0,0x10000, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(217,-3401,1619,724,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(0,-2344,2420,0,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(217,4544,496,-2246,0,-41,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(0,2656,244,-729,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(102,3698,244,-2031,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(0,573,2014,157,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,3646,2014,2188,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,2969,2014,4166,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,1667,2014,5104,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,156,2014,2969,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(220,2083,2917,3125,0,0,0,0x10000, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(220,2292,2865,3750,0,0,0,0x10000, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(220,1823,2865,3698,0,0,0,0x10000, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(0,1562,-951,0,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,-417,-2413,-1562,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(23,1289,-951,214,0,0,0,0x0, bhvTree
,63),
OBJECT_WITH_ACTS(23,-677,-2413,-2448,0,0,0,0x0, bhvTree
,63),
OBJECT_WITH_ACTS(23,1302,244,-1823,0,0,0,0x0, bhvTree
,63),
OBJECT_WITH_ACTS(23,2760,244,-4376,0,0,0,0x0, bhvTree
,63),
OBJECT_WITH_ACTS(23,4532,2014,2656,0,0,0,0x0, bhvTree
,63),
OBJECT_WITH_ACTS(23,1615,2014,-52,0,0,0,0x0, bhvTree
,63),
OBJECT_WITH_ACTS(0,2760,807,-4300,0,0,0,0x0, bhvHidden1upInPoleSpawner
,63),
OBJECT_WITH_ACTS(0,1615,260,-260,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,2448,244,-2396,0,0,0,0x0, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(120,1459,2059,1458,0,0,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(122,-2532,2679,-412,0,0,0,0x0, bhvStar
,31),
OBJECT_WITH_ACTS(122,1979,1175,2986,0,0,0,0x1000000, bhvStar
,31),
OBJECT_WITH_ACTS(217,3232,1342,-260,0,-46,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(122,-3080,-620,-18,0,-90,0,0x2000000, bhvStar
,31),
OBJECT_WITH_ACTS(217,0,7813,0,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(122,0,8291,0,0,0,0,0x3000000, bhvStar
,31),
OBJECT_WITH_ACTS(194,-416,-915,105,90,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(194,-625,-2389,-2083,90,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(194,990,-909,52,90,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(194,2708,304,-2448,90,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(194,1354,2074,3490,90,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(0,1823,2291,5469,0,0,0,0x4000000, bhvHiddenStar
,31),
OBJECT_WITH_ACTS(122,1736,-232,-1422,0,52,0,0x5000000, bhvStar
,31),
OBJECT_WITH_ACTS(207,-781,-951,105,0,0,0,0x0, bhvFloorSwitchHiddenObjects
,31),
OBJECT_WITH_ACTS(129,2031,-990,-430,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,2225,-782,-606,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(124,104,-2413,-3125,0,-54,0,0x100000, bhvMessagePanel
,63),
OBJECT_WITH_ACTS(212,-2930,-288,313,0,0,0,0x0, bhv1Up
,63),
OBJECT_WITH_ACTS(137,3294,625,-1669,0,0,0,0x50000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(212,-785,-642,93,0,0,0,0x0, bhv1Up
,63),
OBJECT_WITH_ACTS(207,2040,2014,1500,0,-37,0,0x0, bhvFloorSwitchHiddenObjects
,63),
OBJECT_WITH_ACTS(129,5009,2014,3105,0,-35,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,5260,2292,3229,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,5573,2552,3125,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(212,5573,2917,3125,0,0,0,0x0, bhv1Up
,63),
OBJECT_WITH_ACTS(116,-3378,-827,-66,0,0,0,0x0, bhvOneCoin
,31),
RETURN()
};
const LevelScript local_warps_hmc_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,7,1,12,0),
WARP_NODE(12,7,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,54,0),
WARP_NODE(241,26,1,104,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
