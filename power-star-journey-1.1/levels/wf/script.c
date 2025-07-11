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
#include "levels/wf/header.h"
extern u8 _wf_segment_ESegmentRomStart[]; 
extern u8 _wf_segment_ESegmentRomEnd[];
#include "levels/ssl/header.h"
const LevelScript level_wf_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _ssl_segment_7SegmentRomStart, _ssl_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _sslSegmentRomStart, _sslSegmentRomEnd),
LOAD_RAW(0x0E, _wf_segment_ESegmentRomStart, _wf_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_ssl_skybox_mio0SegmentRomStart,_ssl_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group5_mio0SegmentRomStart,_group5_mio0SegmentRomEnd),
LOAD_RAW(12,_group5_geoSegmentRomStart,_group5_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_SSL_PALM_TREE,           palm_tree_geo),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,       ssl_geo_0005C0),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,       ssl_geo_0005D8),
LOAD_MODEL_FROM_GEO(MODEL_SSL_PYRAMID_TOP,         ssl_geo_000618),
LOAD_MODEL_FROM_GEO(MODEL_SSL_GRINDEL,             ssl_geo_000734),
LOAD_MODEL_FROM_GEO(MODEL_SSL_SPINDEL,             ssl_geo_000764),
LOAD_MODEL_FROM_GEO(MODEL_SSL_MOVING_PYRAMID_WALL, ssl_geo_000794),
LOAD_MODEL_FROM_GEO(MODEL_SSL_PYRAMID_ELEVATOR,    ssl_geo_0007AC),
LOAD_MODEL_FROM_GEO(MODEL_SSL_TOX_BOX,             ssl_geo_000630),
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
// LOAD_MODEL_FROM_GEO(86,0x05014630),
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
JUMP_LINK(script_func_global_6),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_wf_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_wf_1_[] = {
AREA(1,Geo_wf_1_0x2381700),
TERRAIN(col_wf_1_0xe035658),
SET_BACKGROUND_MUSIC(0,6),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_wf_1_),
JUMP_LINK(local_warps_wf_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wf_1_[] = {
OBJECT_WITH_ACTS(0,3437,242,2864,0,-90,0,0xa0000, bhvSpinAirborneWarp
,31),
OBJECT_WITH_ACTS(0,-5220,-75,1338,0,-154,0,0xb0000, bhvFadingWarp
,16),
OBJECT_WITH_ACTS(0,3261,-2638,-2254,0,-153,0,0xc0000, bhvFadingWarp
,16),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,1251,768,6253,0,-151,0,0xe0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,3959,19,2396,0,0,0,0x0, bhvPokey
,31),
OBJECT_WITH_ACTS(0,3125,92,-4375,0,0,0,0x0, bhvPokey
,31),
OBJECT_WITH_ACTS(0,3438,19,2240,0,0,0,0x0, bhvPokey
,31),
OBJECT_WITH_ACTS(0,3386,92,-4062,0,0,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(0,2343,19,3594,0,0,0,0x0, bhvPokey
,31),
OBJECT_WITH_ACTS(212,4683,92,-146,0,0,0,0x0, bhv1Up
,31),
OBJECT_WITH_ACTS(0,1143,1052,-6904,0,0,0,0x110000, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(220,260,1302,2864,0,0,0,0x0, bhvFlyGuy
,31),
OBJECT_WITH_ACTS(220,781,2969,2344,0,0,0,0x0, bhvFlyGuy
,31),
OBJECT_WITH_ACTS(122,382,2688,735,0,0,0,0x0, bhvStar
,31),
OBJECT_WITH_ACTS(215,401,343,4963,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-607,886,1923,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-1233,524,418,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-752,62,-1035,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,1764,679,-5503,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,303,908,-3401,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,3281,105,1250,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-1149,-70,-2824,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(0,2708,275,2750,0,0,0,0x1000000, bhvHiddenRedCoinStar
,31),
OBJECT_WITH_ACTS(122,-4864,421,-1190,0,20,0,0x2000000, bhvStar
,31),
OBJECT_WITH_ACTS(0,-472,624,-5730,0,0,0,0x3000000, bhvEyerokBoss
,8),
OBJECT_WITH_ACTS(122,968,-1360,-2062,0,90,0,0x4000000, bhvStar
,31),
OBJECT_WITH_ACTS(122,1143,780,-6904,0,0,0,0x5000000, bhvStar
,31),
OBJECT_WITH_ACTS(120,-1481,141,-3646,0,0,0,0x0, bhvRecoveryHeart
,31),
OBJECT_WITH_ACTS(0,2340,1469,759,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(0,3073,361,-4409,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(0,2005,311,-5893,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(0,-3561,314,2708,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(137,2917,1339,-6080,0,0,0,0x60000, bhvExclamationBox
,31),
OBJECT_WITH_ACTS(0,209,-125,-625,0,0,0,0x0, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(0,-2865,243,-1927,0,0,0,0x0, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(0,-4688,78,866,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(0,2757,481,843,0,0,0,0x0, bhvWarp
,31),
OBJECT_WITH_ACTS(137,-1483,110,469,0,0,0,0x30000, bhvExclamationBox
,16),
OBJECT_WITH_ACTS(124,4478,19,2310,0,-86,0,0x2b0000, bhvMessagePanel
,31),
RETURN()
};
const LevelScript local_warps_wf_1_[] = {
WARP_NODE(10,24,1,10,0),
WARP_NODE(11,24,1,12,0),
WARP_NODE(12,24,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,55,0),
WARP_NODE(241,26,1,105,0),
WARP_NODE(0,19,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
