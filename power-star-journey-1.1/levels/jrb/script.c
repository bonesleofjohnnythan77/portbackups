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
#include "levels/jrb/header.h"
extern u8 _jrb_segment_ESegmentRomStart[]; 
extern u8 _jrb_segment_ESegmentRomEnd[];
#include "levels/wf/header.h"
const LevelScript level_jrb_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _wf_segment_7SegmentRomStart, _wf_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _wfSegmentRomStart, _wfSegmentRomEnd),
LOAD_RAW(0x0E, _jrb_segment_ESegmentRomStart, _jrb_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_WF_BUBBLY_TREE,                   bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,                wf_geo_0007E0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,                wf_geo_000820),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,                wf_geo_000860),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,                wf_geo_000878),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,                wf_geo_000890),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,                wf_geo_0008A8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,                wf_geo_0008E8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,                wf_geo_000900),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,                wf_geo_000940),
    LOAD_MODEL_FROM_GEO(MODEL_WF_GIANT_POLE,                    wf_geo_000AE0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,                wf_geo_000958),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,                wf_geo_0009A0),
    LOAD_MODEL_FROM_GEO(MODEL_WF_ROTATING_PLATFORM,             wf_geo_0009B8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,                wf_geo_0009D0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12,                wf_geo_0009E8),
    LOAD_MODEL_FROM_GEO(MODEL_WF_SMALL_BOMP,                    wf_geo_000A00),
    LOAD_MODEL_FROM_GEO(MODEL_WF_LARGE_BOMP,                    wf_geo_000A40),
    LOAD_MODEL_FROM_GEO(MODEL_WF_ROTATING_WOODEN_PLATFORM,      wf_geo_000A58),
    LOAD_MODEL_FROM_GEO(MODEL_WF_SLIDING_PLATFORM,              wf_geo_000A98),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TUMBLING_BRIDGE_PART,          wf_geo_000AB0),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TUMBLING_BRIDGE,               wf_geo_000AC8),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_TRAPEZOID_PLATORM,       wf_geo_000AF8),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM,          wf_geo_000B10),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM_UNUSED,   wf_geo_000B38),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM_ELEVATOR, wf_geo_000B60),
    LOAD_MODEL_FROM_GEO(MODEL_WF_BREAKABLE_WALL_RIGHT,          wf_geo_000B78),
    LOAD_MODEL_FROM_GEO(MODEL_WF_BREAKABLE_WALL_LEFT,           wf_geo_000B90),
    LOAD_MODEL_FROM_GEO(MODEL_WF_KICKABLE_BOARD,                wf_geo_000BA8),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_DOOR,                    wf_geo_000BE0),
    LOAD_MODEL_FROM_GEO(MODEL_WF_KICKABLE_BOARD_FELLED,         wf_geo_000BC8),
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
JUMP_LINK(local_area_jrb_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_jrb_1_[] = {
AREA(1,Geo_jrb_1_0x1901700),
TERRAIN(col_jrb_1_0xe00aee0),
SET_BACKGROUND_MUSIC(0,5),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_jrb_1_),
JUMP_LINK(local_warps_jrb_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_jrb_1_[] = {
OBJECT_WITH_ACTS(0,-1475,-1940,-5019,0,0,0,0xa0000, bhvSpinAirborneWarp
,31),
OBJECT_WITH_ACTS(0,583,2683,-5387,0,-154,0,0xb0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(103,-885,-3292,104,0,-179,0,0x0, bhvSmallWhomp
,31),
OBJECT_WITH_ACTS(0,-1510,-3292,625,0,0,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(122,1193,-1168,-1425,0,0,0,0x0, bhvStar
,31),
OBJECT_WITH_ACTS(0,-521,-3292,573,0,0,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(84,1633,-3187,2573,0,-94,0,0x0, bhvBulletBill
,63),
OBJECT_WITH_ACTS(103,0,-740,-853,0,0,0,0x0, bhvSmallWhomp
,63),
OBJECT_WITH_ACTS(88,-2496,-643,1121,0,-180,0,0x0, bhvThwomp
,63),
OBJECT_WITH_ACTS(0,-567,-740,-880,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(84,-1986,-558,1480,0,-92,0,0x0, bhvBulletBill
,63),
OBJECT_WITH_ACTS(84,-2962,-480,1196,0,97,0,0x0, bhvBulletBill
,63),
OBJECT_WITH_ACTS(84,-4967,-510,-1563,0,84,0,0x0, bhvBulletBill
,63),
OBJECT_WITH_ACTS(217,-4489,-650,-2019,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-4164,-295,-2050,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-3804,88,-2010,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-3416,483,-2031,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-3638,856,-1742,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-3333,1172,-1648,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(103,-2344,1562,-1094,0,-86,0,0x0, bhvSmallWhomp
,63),
OBJECT_WITH_ACTS(0,-1875,1562,-208,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,-1458,1562,-938,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(89,521,1562,-1458,0,92,0,0x0, bhvHeaveHo
,63),
OBJECT_WITH_ACTS(217,990,1547,-2100,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,471,1829,-2084,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,77,2173,-2081,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-318,2511,-2083,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-660,2873,-2084,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-1007,3144,-2074,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(212,-1012,3725,-2088,0,90,0,0x0, bhv1Up
,63),
OBJECT_WITH_ACTS(217,-1349,3488,-2083,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-2005,3488,-2083,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-2700,3488,-2083,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-3297,3488,-2083,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-3281,3768,-1755,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-3004,4009,-1755,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(0,0,4375,0,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(103,-1250,4375,0,0,-99,0,0x0, bhvSmallWhomp
,63),
OBJECT_WITH_ACTS(0,365,4375,990,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,990,4375,-104,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(122,-434,4623,2912,0,-177,0,0x4000000, bhvStar
,31),
OBJECT_WITH_ACTS(84,2633,4531,0,0,-89,0,0x0, bhvBulletBill
,63),
OBJECT_WITH_ACTS(217,1632,4753,885,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(217,1632,5057,885,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(217,1632,5362,885,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(217,1632,5663,885,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(217,1348,5986,888,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(217,1039,6273,908,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(217,758,6271,885,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(103,-885,1562,0,0,-95,0,0x0, bhvSmallWhomp
,63),
OBJECT_WITH_ACTS(103,521,1562,-469,0,-90,0,0x0, bhvSmallWhomp
,63),
OBJECT_WITH_ACTS(0,-1510,-740,-1823,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,-2500,-740,-1302,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,-4479,-243,-2078,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(220,-3837,500,-1979,0,0,0,0x10000, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(0,-1004,3542,-2135,0,0,0,0x110000, bhvCoinFormation
,15),
OBJECT_WITH_ACTS(137,1927,4715,-417,0,0,0,0x70000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(137,1875,4740,1250,0,0,0,0x60000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(120,1042,4410,417,0,0,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(122,-4033,758,2626,0,-179,0,0x1000000, bhvStar
,31),
OBJECT_WITH_ACTS(215,2379,521,-1210,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,1458,-2760,1667,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-2488,-10,1122,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-1563,-625,-990,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-3640,1198,-1737,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,573,1667,-1146,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-318,2917,-2083,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-677,4478,-52,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(0,-370,4844,0,0,0,0,0x2000000, bhvHiddenRedCoinStar
,31),
OBJECT_WITH_ACTS(207,-781,1562,-521,0,0,0,0x0, bhvFloorSwitchHiddenObjects
,8),
OBJECT_WITH_ACTS(129,805,1613,110,0,0,0,0x0, bhvHiddenObject
,8),
OBJECT_WITH_ACTS(129,990,1806,104,0,0,0,0x0, bhvHiddenObject
,8),
OBJECT_WITH_ACTS(129,1255,2072,0,0,0,0,0x0, bhvHiddenObject
,8),
OBJECT_WITH_ACTS(129,1409,2284,-52,0,0,0,0x0, bhvHiddenObject
,8),
OBJECT_WITH_ACTS(129,1778,2527,-156,0,0,0,0x0, bhvHiddenObject
,8),
OBJECT_WITH_ACTS(129,2206,2733,-156,0,0,0,0x0, bhvHiddenObject
,8),
OBJECT_WITH_ACTS(122,2552,3229,-222,0,-90,0,0x3000000, bhvStar
,31),
OBJECT_WITH_ACTS(103,-1406,6638,938,0,98,0,0x5000000, bhvWhompKingBoss
,31),
OBJECT_WITH_ACTS(84,-2344,6883,1094,0,132,0,0x0, bhvBulletBill
,32),
OBJECT_WITH_ACTS(84,-2396,6844,-313,0,55,0,0x0, bhvBulletBill
,32),
RETURN()
};
const LevelScript local_warps_jrb_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,52,0),
WARP_NODE(241,26,1,102,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
