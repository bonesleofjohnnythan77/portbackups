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
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_bitfs_skybox_mio0SegmentRomStart,_bitfs_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group2_mio0SegmentRomStart,_group2_mio0SegmentRomEnd),
LOAD_RAW(12,_group2_geoSegmentRomStart,_group2_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
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
LOAD_MODEL_FROM_GEO(27, palm_tree_geo
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
JUMP_LINK(local_area_lll_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_lll_1_[] = {
AREA(1,Geo_lll_1_0x2ac1700),
TERRAIN(col_lll_1_0xe02cd70),
SET_BACKGROUND_MUSIC(0,35),
TERRAIN_TYPE(1),
JUMP_LINK(local_objects_lll_1_),
JUMP_LINK(local_warps_lll_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_lll_1_[] = {
OBJECT_WITH_ACTS(0,5254,-10280,2130,0,0,0,0xa0000, bhvSpinAirborneWarp
,63),
OBJECT_WITH_ACTS(0,583,2683,-5387,0,-154,0,0xb0000, bhvFadingWarp
,63),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp
,63),
OBJECT_WITH_ACTS(0,-2999,10868,-1095,0,107,0,0xd0000, bhvFadingWarp
,63),
OBJECT_WITH_ACTS(0,4945,-8399,2091,0,-151,0,0xe0000, bhvFadingWarp
,60),
OBJECT_WITH_ACTS(0,-2945,-5573,1558,4,271,-11,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(180,-5419,13802,1448,4,290,2,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(120,-3711,5156,2407,1,268,0,0x0, bhvRecoveryHeart
,31),
OBJECT_WITH_ACTS(0,-3573,6406,2415,2,272,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(86,983,4583,-510,4,290,2,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(86,410,6719,-1914,4,290,2,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(86,-77,7812,-1480,4,290,2,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(86,-334,9531,-1072,4,290,2,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(86,379,10052,-356,4,290,2,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(86,-1123,10782,-1189,4,290,2,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(86,-871,10781,-679,4,290,2,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(86,-874,12292,-309,4,290,2,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(180,-608,12292,-307,4,290,2,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-769,12500,-9,4,290,2,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-588,12500,699,4,290,2,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-745,12552,1401,4,290,2,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,333,12760,1550,4,290,2,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,1139,13021,2419,4,290,2,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,1683,13437,2473,4,290,2,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,1517,13646,2027,4,290,2,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,1072,13646,1204,4,290,2,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-4014,13750,1597,4,290,2,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-4805,13750,2034,4,290,2,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(86,-5470,13698,449,6,290,-2,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(86,802,12965,1658,6,290,-2,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(86,-927,12616,768,6,290,-2,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(86,778,12998,2077,6,290,-2,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(86,387,12648,1824,6,290,-2,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(86,784,13490,2400,6,290,-2,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(86,1174,13020,2143,6,290,-2,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(86,1361,13594,1904,6,290,-2,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(86,-4861,11979,1381,6,290,-2,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(86,-5451,13802,1523,6,290,-2,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(86,-3990,13802,1426,6,290,-2,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(86,-4526,13698,2015,6,290,-2,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(0,-3597,625,137,6,290,-2,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(86,1734,-3490,114,6,290,-2,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(86,2198,-3490,266,6,290,-2,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(180,1889,-4927,751,6,290,-2,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(86,2268,-5034,897,6,290,-2,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(86,1941,-5034,780,6,290,-2,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(86,3462,-6249,2238,6,290,-2,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(86,3737,-6249,2174,-2,271,0,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(0,-4465,4323,1258,-1,270,-7,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,-4419,3542,1285,0,270,-5,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,-4413,2760,1204,1,268,2,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(137,1145,13906,1308,0,298,-5,0xe0000, bhvExclamationBox
,32),
OBJECT_WITH_ACTS(86,4620,-9167,664,0,298,-5,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(86,5002,-9167,1284,0,298,-5,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(86,3736,-5261,-615,0,89,0,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(86,3397,-5261,786,0,89,0,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(86,3483,-5261,664,0,89,0,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(0,3545,-5261,623,0,89,0,0x0, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(86,3649,-5209,-527,0,89,0,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(137,-2405,-6615,-752,0,89,0,0x10000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(129,-42,6302,73,0,89,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,-198,6302,76,0,89,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,-354,6302,79,0,89,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(0,-614,5885,24,0,89,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,-614,4323,24,0,89,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,-519,3385,-538,0,89,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(145,3641,-5209,-595,0,89,0,0x0, bhvFlame
,63),
OBJECT_WITH_ACTS(145,3507,-5209,587,0,89,0,0x0, bhvFlame
,63),
OBJECT_WITH_ACTS(118,-2913,-10521,973,0,93,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-2913,-10521,919,0,93,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-2915,-10521,849,0,93,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-2914,-10521,797,0,93,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-2913,-10521,745,0,93,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-2912,-10521,693,0,93,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-2911,-10521,641,0,93,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-2909,-10521,536,0,93,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-2910,-10521,588,0,93,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(140,-5750,-10571,-223,0,89,0,0x0, bhvBlueCoinSwitch
,63),
OBJECT_WITH_ACTS(0,-3792,13712,986,0,89,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,-4468,2188,1184,0,89,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(120,-5212,-1563,82,0,89,0,0x0, bhvRecoveryHeart
,31),
OBJECT_WITH_ACTS(0,-3814,13698,2197,0,89,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,-4450,1511,1112,0,89,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,-5428,13646,2169,0,89,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,-5571,13698,916,0,89,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,-2701,-4895,2505,0,89,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,-4600,13698,2496,0,89,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,-4822,13854,1752,0,89,0,0x3000000, bhvHiddenStar
,63),
OBJECT_WITH_ACTS(122,3540,-5261,-1687,0,89,0,0x0, bhvStar
,63),
OBJECT_WITH_ACTS(122,-3579,-3334,1867,0,89,0,0x2000000, bhvStar
,31),
OBJECT_WITH_ACTS(120,-4623,11771,1470,0,0,0,0x0, bhvRecoveryHeart
,31),
OBJECT_WITH_ACTS(122,-5438,-10677,-2225,0,32,0,0x4000000, bhvStar
,48),
OBJECT_WITH_ACTS(122,-443,11145,-2748,0,0,0,0x1000000, bhvStar
,63),
OBJECT_WITH_ACTS(102,-5145,-10571,-1604,0,35,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(212,4944,-8386,2105,0,28,0,0x0, bhv1Up
,60),
RETURN()
};
const LevelScript local_warps_lll_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,22,1,14,0),
WARP_NODE(14,22,1,13,0),
WARP_NODE(240,26,1,240,0),
WARP_NODE(241,26,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
