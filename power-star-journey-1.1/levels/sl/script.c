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
#include "levels/sl/header.h"
extern u8 _sl_segment_ESegmentRomStart[]; 
extern u8 _sl_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_sl_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _sl_segment_ESegmentRomStart, _sl_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bbh_skybox_mio0SegmentRomStart,_bbh_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_BBH_HAUNTED_DOOR,           haunted_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_BBH_STAIRCASE_STEP,         geo_bbh_0005B0),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TILTING_FLOOR_PLATFORM, geo_bbh_0005C8),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM,      geo_bbh_0005E0),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM_PART, geo_bbh_0005F8),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MOVING_BOOKSHELF,       geo_bbh_000610),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MESH_ELEVATOR,          geo_bbh_000628),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MERRY_GO_ROUND,         geo_bbh_000640),
LOAD_MODEL_FROM_GEO(MODEL_BBH_WOODEN_TOMB,            geo_bbh_000658),
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
LOAD_MODEL_FROM_GEO(29, haunted_door_geo
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
JUMP_LINK(script_func_global_10),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_sl_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_sl_1_[] = {
AREA(1,Geo_sl_1_0x1741700),
TERRAIN(col_sl_1_0xe05b460),
SET_BACKGROUND_MUSIC(0,37),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_sl_1_),
JUMP_LINK(local_warps_sl_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_sl_1_[] = {
OBJECT_WITH_ACTS(0,937,-2467,-4323,0,0,0,0xa0000, bhvSpinAirborneWarp
,31),
OBJECT_WITH_ACTS(22,900,-2624,-1470,0,-154,0,0xb0000, bhvWarpPipe
,56),
OBJECT_WITH_ACTS(22,220,4183,919,180,180,0,0xc0000, bhvWarpPipe
,56),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(84,469,-2560,-1250,0,-191,0,0x0, bhvBoo
,63),
OBJECT_WITH_ACTS(84,1042,-2552,-156,0,-166,0,0x0, bhvBoo
,63),
OBJECT_WITH_ACTS(84,-312,-2552,-52,0,163,0,0x0, bhvBoo
,63),
OBJECT_WITH_ACTS(0,1719,-2552,2865,0,0,0,0x0, bhvMrI
,63),
OBJECT_WITH_ACTS(84,3021,-2552,833,0,-144,0,0x0, bhvBoo
,63),
OBJECT_WITH_ACTS(84,4323,-1458,-2396,0,0,0,0x0, bhvBoo
,63),
OBJECT_WITH_ACTS(84,2969,-729,-5052,0,0,0,0x0, bhvBoo
,63),
OBJECT_WITH_ACTS(84,-1771,-729,-5156,0,0,0,0x0, bhvBoo
,63),
OBJECT_WITH_ACTS(84,1563,-729,-4010,0,74,0,0x0, bhvBoo
,63),
OBJECT_WITH_ACTS(84,-938,-729,-4010,0,86,0,0x0, bhvBoo
,63),
OBJECT_WITH_ACTS(84,-3594,-573,-2500,0,78,0,0x0, bhvBoo
,63),
OBJECT_WITH_ACTS(84,-2760,-573,-417,0,171,0,0x0, bhvBoo
,63),
OBJECT_WITH_ACTS(84,-1250,-365,2760,0,-166,0,0x0, bhvBoo
,63),
OBJECT_WITH_ACTS(84,-104,-365,1771,0,-81,0,0x0, bhvBoo
,63),
OBJECT_WITH_ACTS(84,1667,-365,1615,0,-84,0,0x0, bhvBoo
,63),
OBJECT_WITH_ACTS(0,4688,1077,-469,0,0,0,0x0, bhvMrI
,63),
OBJECT_WITH_ACTS(84,625,2031,1719,0,135,0,0x0, bhvBoo
,63),
OBJECT_WITH_ACTS(84,52,2031,1875,0,105,0,0x0, bhvBoo
,63),
OBJECT_WITH_ACTS(84,-729,2031,1823,0,83,0,0x0, bhvBoo
,63),
OBJECT_WITH_ACTS(212,-1771,2083,2865,0,0,0,0x0, bhv1Up
,63),
OBJECT_WITH_ACTS(84,0,-2520,-104,0,156,0,0x0, bhvBoo
,63),
OBJECT_WITH_ACTS(84,-885,-2500,-104,0,146,0,0x0, bhvBoo
,63),
OBJECT_WITH_ACTS(84,4323,-1771,-833,0,0,0,0x0, bhvBoo
,63),
OBJECT_WITH_ACTS(84,-260,-729,-4375,0,78,0,0x0, bhvBoo
,63),
OBJECT_WITH_ACTS(137,625,-417,-5208,0,0,0,0x50000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(84,-2708,-573,-1042,0,-180,0,0x0, bhvBoo
,63),
OBJECT_WITH_ACTS(84,-2760,-573,781,0,-185,0,0x0, bhvBoo
,63),
OBJECT_WITH_ACTS(84,-1354,-365,2031,0,-82,0,0x0, bhvBoo
,63),
OBJECT_WITH_ACTS(84,937,-365,1875,0,-78,0,0x0, bhvBoo
,63),
OBJECT_WITH_ACTS(84,4323,-365,1823,0,-89,0,0x0, bhvBoo
,63),
OBJECT_WITH_ACTS(84,4531,156,990,0,0,0,0x0, bhvBoo
,63),
OBJECT_WITH_ACTS(84,3906,1667,208,0,176,0,0x0, bhvBoo
,63),
OBJECT_WITH_ACTS(122,3177,2396,2708,0,-157,0,0x0, bhvStar
,31),
OBJECT_WITH_ACTS(122,4688,2187,-4271,0,0,0,0x1000000, bhvStar
,31),
OBJECT_WITH_ACTS(122,5677,-2344,-2396,0,-84,0,0x2000000, bhvStar
,31),
OBJECT_WITH_ACTS(215,4635,-1719,-4740,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,1510,-2135,3125,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,1875,2031,2969,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-1771,-417,-5000,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,521,1823,-2500,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,4271,1302,-469,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,5417,2292,-5990,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,938,52,2708,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(0,313,2344,1927,0,0,0,0x3000000, bhvHiddenRedCoinStar
,31),
OBJECT_WITH_ACTS(84,156,2075,-1354,0,0,0,0x4000000, bhvGhostHuntBigBoo
,31),
OBJECT_WITH_ACTS(0,-2292,1968,-3385,0,0,0,0x5010000, bhvMrI
,32),
OBJECT_WITH_ACTS(180,-2760,1968,-4219,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(120,260,2023,1146,0,0,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(137,-4010,-2135,-729,0,0,0,0x60000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(86,-3854,-2624,-2760,0,0,0,0x0, bhvHauntedChair
,63),
OBJECT_WITH_ACTS(0,-4740,-2624,-2865,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(84,365,2031,-1458,0,-10,0,0x0, bhvGhostHuntBoo
,16),
OBJECT_WITH_ACTS(84,52,2031,-781,0,-358,0,0x0, bhvGhostHuntBoo
,16),
OBJECT_WITH_ACTS(84,-313,2031,-1302,0,0,0,0x0, bhvGhostHuntBoo
,16),
OBJECT_WITH_ACTS(84,-104,2083,-938,0,0,0,0x0, bhvGhostHuntBoo
,16),
OBJECT_WITH_ACTS(84,-208,2031,-990,0,0,0,0x0, bhvGhostHuntBoo
,16),
OBJECT_WITH_ACTS(217,-2307,1491,866,0,0,0,0x0, bhvPushableMetalBox
,32),
OBJECT_WITH_ACTS(217,-2307,1491,566,0,0,0,0x0, bhvPushableMetalBox
,32),
RETURN()
};
const LevelScript local_warps_sl_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,10,1,12,0),
WARP_NODE(12,10,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,17,1,54,0),
WARP_NODE(241,17,1,104,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
