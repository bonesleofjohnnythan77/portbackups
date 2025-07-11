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
#include "levels/lll/header.h"
extern u8 _lll_segment_ESegmentRomStart[]; 
extern u8 _lll_segment_ESegmentRomEnd[];
#include "levels/hmc/header.h"
const LevelScript level_lll_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _hmc_segment_7SegmentRomStart, _hmc_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _hmcSegmentRomStart, _hmcSegmentRomEnd),
LOAD_RAW(0x0E, _lll_segment_ESegmentRomStart, _lll_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bidw_skybox_mio0SegmentRomStart,_bidw_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group11_mio0SegmentRomStart,_group11_mio0SegmentRomEnd),
LOAD_RAW(12,_group11_geoSegmentRomStart,_group11_geoSegmentRomEnd),
LOAD_MIO0(6,_group15_mio0SegmentRomStart,_group15_mio0SegmentRomEnd),
LOAD_RAW(13,_group15_geoSegmentRomStart,_group15_geoSegmentRomEnd),
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
JUMP_LINK(local_area_lll_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,1094,-2258,3489),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_lll_1_[] = {
AREA(1,Geo_lll_1_0x21c1700),
TERRAIN(col_lll_1_0xe01bc88),
SET_BACKGROUND_MUSIC(0,19),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_lll_1_),
JUMP_LINK(local_warps_lll_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_lll_1_[] = {
OBJECT_WITH_ACTS(0,-5677,295,-5104,0,0,0,0xa0000, bhvSpinAirborneWarp
,31),
OBJECT_WITH_ACTS(144,-6300,1024,-6945,0,107,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(144,1824,768,-7497,0,-151,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(0,-4531,81,-312,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,-2396,40,208,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,1406,40,-156,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,3125,81,-208,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(220,990,260,-3490,0,0,0,0x10000, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(0,4428,-9688,-1875,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,3126,-9688,-4167,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,1667,-9688,-1979,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(116,4544,1302,-5377,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(122,2751,-7620,5782,0,-180,0,0x0, bhvStar
,31),
OBJECT_WITH_ACTS(0,3906,-9688,677,0,0,0,0x0, bhvBouncingFireball
,63),
OBJECT_WITH_ACTS(0,2344,81,729,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(223,4016,1484,-2188,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(137,4271,2813,1771,0,0,0,0x0, bhvExclamationBox
,31),
OBJECT_WITH_ACTS(137,4063,4427,-1875,0,0,0,0x0, bhvExclamationBox
,2),
OBJECT_WITH_ACTS(122,3283,5156,3125,0,-177,0,0x1000000, bhvStar
,31),
OBJECT_WITH_ACTS(0,4531,1243,-5521,0,0,0,0xf0d0000, bhvWarp
,31),
OBJECT_WITH_ACTS(221,-6615,21,-3229,0,0,0,0xa9000000, bhvToadMessage
,63),
OBJECT_WITH_ACTS(124,1094,81,-4219,0,-90,0,0x560000, bhvMessagePanel
,63),
OBJECT_WITH_ACTS(137,-1771,417,-104,0,0,0,0x20000, bhvExclamationBox
,4),
OBJECT_WITH_ACTS(0,-3594,0,4792,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,-1615,0,5365,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,-2083,74,4479,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(220,-2188,2760,4323,0,0,0,0x10000, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(220,-1094,4792,4219,0,0,0,0x10000, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(122,624,4951,4282,0,-90,0,0x2000000, bhvStar
,31),
OBJECT_WITH_ACTS(207,-6405,21,-4493,0,0,0,0x0, bhvFloorSwitchHiddenObjects
,32),
OBJECT_WITH_ACTS(129,-1875,625,-4531,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,-2083,885,-4531,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,-2344,1094,-4583,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,-2578,1302,-4583,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,-2836,1563,-4520,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(122,-2263,2292,-5235,0,0,0,0x3000000, bhvStar
,31),
OBJECT_WITH_ACTS(137,1868,312,-5138,0,0,0,0x70000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(0,1868,312,-5138,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(212,-7292,417,-5104,0,0,0,0x0, bhv1Up
,63),
OBJECT_WITH_ACTS(0,-7292,417,-5104,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(212,-2083,365,-4955,0,0,0,0x0, bhv1Up
,63),
OBJECT_WITH_ACTS(0,-2083,365,-5000,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(137,3750,469,1458,0,0,0,0x60000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(0,3750,469,1458,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(137,0,521,0,0,0,0,0x50000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(0,0,521,0,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(0,-2552,313,-469,0,0,0,0x4000000, bhvHiddenStar
,31),
OBJECT_WITH_ACTS(137,-733,2050,-4844,0,0,0,0x60000, bhvExclamationBox
,31),
OBJECT_WITH_ACTS(0,4531,-9688,4011,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,1458,-9688,3906,0,0,0,0x0, bhvGoombaTripletSpawner
,32),
OBJECT_WITH_ACTS(212,5989,-9428,4531,0,0,0,0x0, bhv1Up
,63),
OBJECT_WITH_ACTS(207,-2292,78,-4926,0,0,0,0x0, bhvFloorSwitchHiddenObjects
,31),
OBJECT_WITH_ACTS(137,885,-9323,3854,0,0,0,0x60000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(120,4844,-9636,-1719,0,0,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(124,-249,21,-5156,0,0,0,0x2a0000, bhvMessagePanel
,63),
OBJECT_WITH_ACTS(212,-2424,2396,-4914,0,0,0,0x0, bhv1Up
,63),
OBJECT_WITH_ACTS(124,-4531,21,-1979,0,0,0,0x360000, bhvMessagePanel
,63),
OBJECT_WITH_ACTS(137,-5338,3151,-4378,0,0,0,0xe0000, bhvExclamationBox
,32),
OBJECT_WITH_ACTS(129,-5343,2650,-4375,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(129,-5343,21,-4075,0,0,0,0x0, bhvHiddenObject
,31),
OBJECT_WITH_ACTS(116,-5343,311,-4085,0,0,0,0x0, bhvOneCoin
,32),
OBJECT_WITH_ACTS(0,-5338,2850,-4379,0,0,0,0xf0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-5346,243,-4077,0,0,0,0x100000, bhvFadingWarp
,31),
RETURN()
};
const LevelScript local_warps_lll_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,22,1,12,0),
WARP_NODE(12,22,1,11,0),
WARP_NODE(13,18,1,10,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,17,1,51,0),
WARP_NODE(241,17,1,101,0),
WARP_NODE(15,22,1,16,0),
WARP_NODE(16,22,1,15,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
