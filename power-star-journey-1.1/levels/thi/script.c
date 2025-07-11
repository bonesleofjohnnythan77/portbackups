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
#include "levels/thi/header.h"
extern u8 _thi_segment_ESegmentRomStart[]; 
extern u8 _thi_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_thi_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _thi_segment_ESegmentRomStart, _thi_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bitfs_skybox_mio0SegmentRomStart,_bitfs_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group2_mio0SegmentRomStart,_group2_mio0SegmentRomEnd),
LOAD_RAW(12,_group2_geoSegmentRomStart,_group2_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_3),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_thi_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_thi_1_[] = {
AREA(1,Geo_thi_1_0x19e1700),
TERRAIN(col_thi_1_0xe01f148),
SET_BACKGROUND_MUSIC(0,40),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_thi_1_),
JUMP_LINK(local_warps_thi_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_thi_1_[] = {
OBJECT_WITH_ACTS(0,-52,2377,-4219,0,53,0,0xa0000, bhvSpinAirborneWarp
,31),
OBJECT_WITH_ACTS(0,583,2683,-5387,0,-154,0,0xb0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(217,260,1147,469,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-1406,1094,260,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-1823,885,52,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-1875,417,-573,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-2448,52,-729,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-2448,-365,-156,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-2188,-870,-156,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-1927,-1302,-625,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-1913,-1868,-325,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(86,208,1764,3542,0,0,0,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(0,4132,1474,2760,0,0,0,0x0, bhvBouncingFireball
,63),
OBJECT_WITH_ACTS(217,677,1146,1562,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,573,1875,3802,0,-57,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,146,2645,4050,0,-57,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(180,313,2558,4010,0,32,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(194,-677,1540,417,0,0,0,0x0, bhvCirclingAmp
,63),
OBJECT_WITH_ACTS(217,-1458,1146,4063,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-2344,1146,4063,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-3073,1146,4063,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-3958,1146,3854,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-5417,1979,3698,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-6042,2760,3698,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-6250,3542,3281,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-5365,4115,3073,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(86,-5104,1966,4271,0,0,0,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(180,-5677,2644,3698,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-6354,3396,3698,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(144,-5625,4242,3103,0,0,0,0x0, bhvFlame
,63),
OBJECT_WITH_ACTS(86,-625,-1944,260,0,0,0,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(180,-260,-1719,-3073,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(212,0,-1823,-3802,0,0,0,0x0, bhv1Up
,63),
OBJECT_WITH_ACTS(212,-452,-976,1383,0,0,0,0x0, bhv1Up
,63),
OBJECT_WITH_ACTS(120,-625,1823,4010,0,0,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(137,-208,2135,3750,0,0,0,0x60000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(0,1861,1875,1413,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(212,1875,3024,1094,0,0,0,0x0, bhv1Up
,63),
OBJECT_WITH_ACTS(180,6198,1477,3281,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(122,6866,1559,2624,0,-83,0,0x0, bhvStar
,31),
OBJECT_WITH_ACTS(217,2656,1146,1510,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(122,-4325,-1751,-2613,0,89,0,0x1000000, bhvStar
,31),
OBJECT_WITH_ACTS(137,1615,1718,1406,0,0,0,0x10000, bhvExclamationBox
,4),
OBJECT_WITH_ACTS(122,1927,3021,1979,0,-177,0,0x2000000, bhvStar
,31),
OBJECT_WITH_ACTS(122,-5156,5017,3073,0,0,0,0x3000000, bhvStar
,31),
OBJECT_WITH_ACTS(215,-365,1927,3750,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,2708,1615,469,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,4792,1562,3281,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-4635,1667,3802,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,573,2292,3802,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-1396,1499,256,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-3021,1458,1823,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-3646,1563,1979,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(137,260,1823,469,0,0,0,0x30000, bhvExclamationBox
,48),
OBJECT_WITH_ACTS(0,-729,2188,3958,0,0,0,0x4000000, bhvHiddenRedCoinStar
,31),
OBJECT_WITH_ACTS(86,-1198,3216,3438,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,-1979,3216,3594,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,-1719,3216,4167,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(87,-1823,3216,2969,0,0,0,0x5000000, bhvBigBully
,31),
OBJECT_WITH_ACTS(217,885,1302,2500,0,33,0,0x0, bhvPushableMetalBox
,63),
RETURN()
};
const LevelScript local_warps_thi_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,51,0),
WARP_NODE(241,6,1,101,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
