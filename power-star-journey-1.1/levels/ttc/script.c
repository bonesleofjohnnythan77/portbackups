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
#include "levels/ttc/header.h"
extern u8 _ttc_segment_ESegmentRomStart[]; 
extern u8 _ttc_segment_ESegmentRomEnd[];
#include "levels/bob/header.h"
const LevelScript level_ttc_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bobSegmentRomStart, _bobSegmentRomEnd),
LOAD_RAW(0x0E, _ttc_segment_ESegmentRomStart, _ttc_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom28802752_skybox_mio0SegmentRomStart,_SkyboxCustom28802752_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE,      bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM,  bob_geo_000458),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS,      bob_geo_000470),
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
JUMP_LINK(script_func_global_2),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_ttc_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_ttc_1_[] = {
AREA(1,Geo_ttc_1_0x1ac1700),
TERRAIN(col_ttc_1_0xe051448),
SET_BACKGROUND_MUSIC(0,43),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_ttc_1_),
JUMP_LINK(local_warps_ttc_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ttc_1_[] = {
OBJECT_WITH_ACTS(0,901,-1188,1342,0,-180,0,0xa0000, bhvSpinAirborneWarp
,31),
OBJECT_WITH_ACTS(84,35,-1128,-436,0,0,0,0x0, bhvBulletBill
,63),
OBJECT_WITH_ACTS(188,938,-1252,-817,0,0,0,0x0, bhvBobomb
,63),
OBJECT_WITH_ACTS(84,1667,-1128,-608,0,0,0,0x0, bhvBulletBill
,63),
OBJECT_WITH_ACTS(84,440,-1155,-2708,0,0,0,0x0, bhvBulletBill
,63),
OBJECT_WITH_ACTS(84,1754,-1110,-2865,0,0,0,0x0, bhvBulletBill
,63),
OBJECT_WITH_ACTS(0,3594,-1249,-1458,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(188,3802,-1249,-573,0,0,0,0x0, bhvBobomb
,63),
OBJECT_WITH_ACTS(188,4063,-1249,-1406,0,0,0,0x0, bhvBobomb
,63),
OBJECT_WITH_ACTS(188,-3854,2065,1719,0,0,0,0x0, bhvBobomb
,63),
OBJECT_WITH_ACTS(188,-3021,2065,1510,0,0,0,0x0, bhvBobomb
,63),
OBJECT_WITH_ACTS(0,-2344,2065,1719,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,885,-1252,-1615,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(188,312,-1252,-3333,0,0,0,0x0, bhvBobomb
,63),
OBJECT_WITH_ACTS(0,781,-1252,-4167,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(217,-104,-670,-5185,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(212,-2865,2134,4130,0,0,0,0x0, bhv1Up
,63),
OBJECT_WITH_ACTS(137,-3542,2344,1563,0,0,0,0x60000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(120,-625,815,-4896,0,0,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(0,4219,-1248,-365,0,0,0,0x0, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(212,5625,-1146,-1979,0,0,0,0x0, bhv1Up
,63),
OBJECT_WITH_ACTS(84,5189,-903,-575,0,-90,0,0x0, bhvBulletBill
,63),
OBJECT_WITH_ACTS(84,5191,-648,-1086,0,-90,0,0x0, bhvBulletBill
,63),
OBJECT_WITH_ACTS(84,5449,-442,-1631,0,-119,0,0x0, bhvBulletBill
,63),
OBJECT_WITH_ACTS(84,5115,-151,-564,0,90,0,0x0, bhvBulletBill
,63),
OBJECT_WITH_ACTS(84,5196,163,-634,0,-90,0,0x0, bhvBulletBill
,63),
OBJECT_WITH_ACTS(84,5189,281,-1002,0,-90,0,0x0, bhvBulletBill
,63),
OBJECT_WITH_ACTS(84,5254,435,-1301,0,-128,0,0x0, bhvBulletBill
,63),
OBJECT_WITH_ACTS(84,5533,637,-1682,0,-144,0,0x0, bhvBulletBill
,63),
OBJECT_WITH_ACTS(122,5098,1067,-844,0,-91,0,0x0, bhvStar
,31),
OBJECT_WITH_ACTS(84,1510,2115,-309,0,0,0,0x0, bhvBulletBill
,63),
OBJECT_WITH_ACTS(84,1073,2140,-1306,0,0,0,0x0, bhvBulletBill
,63),
OBJECT_WITH_ACTS(84,-378,2133,-1062,0,0,0,0x0, bhvBulletBill
,63),
OBJECT_WITH_ACTS(122,2130,2188,-473,0,-88,0,0x1000000, bhvStar
,31),
OBJECT_WITH_ACTS(84,-4198,-265,2057,0,0,0,0x0, bhvBulletBill
,63),
OBJECT_WITH_ACTS(84,-4721,-255,3283,0,90,0,0x0, bhvBulletBill
,63),
OBJECT_WITH_ACTS(84,-4837,-1406,1928,0,0,0,0x0, bhvBulletBill
,63),
OBJECT_WITH_ACTS(84,-6718,-505,2735,0,90,0,0x0, bhvBulletBill
,63),
OBJECT_WITH_ACTS(84,-6729,-510,3320,0,90,0,0x0, bhvBulletBill
,63),
OBJECT_WITH_ACTS(122,-5336,242,3703,0,-182,0,0x2000000, bhvStar
,31),
OBJECT_WITH_ACTS(215,3646,-1094,-781,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,990,-1042,-2396,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-1568,-55,-256,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-4489,2086,4061,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-3438,2135,1458,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-1042,2094,-1767,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,4688,-573,-1094,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,1771,-1146,-5208,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(0,3854,-885,-1094,0,0,0,0x3000000, bhvHiddenRedCoinStar
,31),
OBJECT_WITH_ACTS(102,-2864,761,-4948,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-2813,761,-5833,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-4844,761,-4635,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-4844,761,-5886,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-3907,761,-5260,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(122,-6491,1088,-4921,0,94,0,0x4000000, bhvStar
,31),
OBJECT_WITH_ACTS(84,-705,-553,-4695,0,90,0,0x0, bhvBulletBill
,63),
OBJECT_WITH_ACTS(84,-699,-28,-5833,0,90,0,0x0, bhvBulletBill
,63),
OBJECT_WITH_ACTS(84,-1302,1108,2204,0,180,0,0x0, bhvBulletBill
,63),
OBJECT_WITH_ACTS(84,-2173,1083,2213,0,180,0,0x0, bhvBulletBill
,63),
OBJECT_WITH_ACTS(84,-3130,1087,2241,0,180,0,0x0, bhvBulletBill
,63),
OBJECT_WITH_ACTS(122,-4203,1002,1993,0,-272,0,0x5000000, bhvStar
,31),
OBJECT_WITH_ACTS(137,-1994,2383,1836,0,0,0,0x50000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(207,400,-1273,-2532,0,0,0,0x0, bhvFloorSwitchHiddenObjects
,63),
OBJECT_WITH_ACTS(129,2188,-1267,-5208,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,2913,-1258,-5181,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,3735,-1242,-5196,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(212,3737,-922,-5178,0,0,0,0x0, bhv1Up
,63),
RETURN()
};
const LevelScript local_warps_ttc_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,6,1,100,0),
WARP_NODE(0,14,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
