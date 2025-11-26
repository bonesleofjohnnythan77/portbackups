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
#include "levels/ddd/header.h"
extern u8 _ddd_segment_ESegmentRomStart[]; 
extern u8 _ddd_segment_ESegmentRomEnd[];
#include "levels/wf/header.h"
const LevelScript level_ddd_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _wf_segment_7SegmentRomStart, _wf_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _wfSegmentRomStart, _wfSegmentRomEnd),
LOAD_RAW(0x0E, _ddd_segment_ESegmentRomStart, _ddd_segment_ESegmentRomEnd),
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
JUMP_LINK(local_area_ddd_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_ddd_1_[] = {
AREA(1,Geo_ddd_1_0x2c21700),
TERRAIN(col_ddd_1_0xe035b20),
SET_BACKGROUND_MUSIC(0,42),
TERRAIN_TYPE(1),
JUMP_LINK(local_objects_ddd_1_),
JUMP_LINK(local_warps_ddd_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ddd_1_[] = {
OBJECT_WITH_ACTS(0,2137,-8196,2124,0,0,0,0xa0000, bhvSpinAirborneWarp
,63),
OBJECT_WITH_ACTS(0,-662,16190,3800,0,-178,0,0xb0000, bhvFadingWarp
,62),
OBJECT_WITH_ACTS(0,-7173,-4499,-11302,0,-153,0,0xc0000, bhvFadingWarp
,62),
OBJECT_WITH_ACTS(0,-12806,-4267,12474,0,88,0,0xd0000, bhvFadingWarp
,62),
OBJECT_WITH_ACTS(0,1789,-8797,2083,0,-151,0,0xe0000, bhvFadingWarp
,62),
OBJECT_WITH_ACTS(180,-10818,3490,-2965,0,89,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-12087,3542,-2236,0,89,0,0x0, bhvFireSpitter
,60),
OBJECT_WITH_ACTS(180,-10136,-1667,-9885,0,120,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-10406,-1667,-8465,0,120,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-11205,-1667,-11293,0,120,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-9635,313,-11696,0,120,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-11998,886,-11655,0,120,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-15653,1354,-12526,0,120,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(22,1625,-8788,3632,0,120,0,0x0, bhvWarpPipe
,63),
OBJECT_WITH_ACTS(180,-3734,7865,-14,0,120,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(212,-7187,-4531,-11281,0,120,0,0x0, bhv1Up
,63),
OBJECT_WITH_ACTS(180,350,4323,-757,0,120,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,3064,3073,10948,0,89,0,0x0, bhvFireSpitter
,62),
OBJECT_WITH_ACTS(180,4329,2917,10382,0,89,0,0x0, bhvFireSpitter
,62),
OBJECT_WITH_ACTS(180,5985,2605,10843,0,89,0,0x0, bhvFireSpitter
,62),
OBJECT_WITH_ACTS(180,7045,2448,10635,0,89,0,0x0, bhvFireSpitter
,62),
OBJECT_WITH_ACTS(180,7954,2396,10720,0,89,0,0x0, bhvFireSpitter
,62),
OBJECT_WITH_ACTS(180,11513,1733,2257,0,89,0,0x0, bhvFireSpitter
,60),
OBJECT_WITH_ACTS(180,11809,1643,3790,0,89,0,0x0, bhvFireSpitter
,60),
OBJECT_WITH_ACTS(180,11813,1644,5525,0,89,0,0x0, bhvFireSpitter
,60),
OBJECT_WITH_ACTS(180,11863,1957,7317,0,89,0,0x0, bhvFireSpitter
,60),
OBJECT_WITH_ACTS(180,-6670,4592,10522,0,89,0,0x0, bhvFireSpitter
,60),
OBJECT_WITH_ACTS(180,1825,3289,10471,0,89,0,0x0, bhvFireSpitter
,60),
OBJECT_WITH_ACTS(180,6539,2576,10470,0,89,0,0x0, bhvFireSpitter
,60),
OBJECT_WITH_ACTS(180,9669,2002,10470,0,89,0,0x0, bhvFireSpitter
,60),
OBJECT_WITH_ACTS(122,-956,12969,2599,0,89,0,0x0, bhvStar
,63),
OBJECT_WITH_ACTS(122,6147,4687,-10013,0,89,0,0x1000000, bhvStar
,62),
OBJECT_WITH_ACTS(122,11887,9375,13351,0,89,0,0x5000000, bhvStar
,62),
OBJECT_WITH_ACTS(122,-5009,8958,-12228,0,89,0,0x3000000, bhvStar
,62),
OBJECT_WITH_ACTS(0,-1182,16510,4052,0,89,0,0x4000000, bhvHiddenStar
,62),
OBJECT_WITH_ACTS(122,-7873,5313,10559,0,89,0,0x2000000, bhvStar
,62),
OBJECT_WITH_ACTS(0,-5421,2760,4162,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(116,-5421,2760,4162,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(0,-10027,-2187,-8947,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(116,-10027,-2187,-8947,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,-7164,-3229,-6647,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(0,-7164,-3229,-6647,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,12066,3958,-6621,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(116,12066,3958,-6621,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,-12917,2604,-2539,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(0,-12917,2604,-2539,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(137,122,16458,4009,0,0,0,0x0, bhvExclamationBox
,32),
OBJECT_WITH_ACTS(195,1713,-8797,2324,0,0,0,0xf0000, bhvBobombBuddy
,63),
OBJECT_WITH_ACTS(180,-3073,3490,-3050,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-577,3490,-3006,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,2403,3490,-3029,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,5353,3490,-3062,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,7311,3959,-5447,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,9915,3958,-6449,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,11680,4219,-6754,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,11784,10521,-4823,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,12699,10313,-7263,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,12799,10260,-8034,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,12679,10313,-9246,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,12659,10312,-10278,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,12750,10365,-11607,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,11878,10364,-11592,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,10812,10312,-11566,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,9429,10312,-11600,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,8278,10365,-11631,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,8167,9010,-12756,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,7702,8959,-12225,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,6371,8854,-12767,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,5599,8958,-12254,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,4673,8906,-12809,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,3709,8855,-12329,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,2772,8854,-12839,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,1694,8907,-12220,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,634,8906,-12602,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-197,8906,-12110,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-847,8906,-12573,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-1528,8958,-12228,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-2329,8854,-12276,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-3037,8906,-12025,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-7116,-2812,-6270,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-3934,8803,-12168,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-8385,-2864,-6229,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-11515,-4115,12712,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-4877,4375,10827,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-6145,15313,-941,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(137,2148,5469,-10125,0,0,0,0x70000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(180,11849,1927,-13309,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(118,-6415,-4531,-12773,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(180,-7838,-2031,-7048,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-8359,-2500,-6794,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-7593,-2448,-6620,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-8341,-1667,-7561,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(118,-6046,-4584,-11376,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-6358,-4531,-11365,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-6395,-4531,-11884,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-6410,-4531,-12408,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-6248,-4532,-12698,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-6193,-4532,-12789,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-6233,-4532,-13046,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-7119,-4532,-13084,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(140,-5617,-4583,-12027,0,0,0,0x0, bhvBlueCoinSwitch
,63),
OBJECT_WITH_ACTS(118,-5882,-4583,-11824,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-5844,-4583,-12191,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-5966,-4583,-12923,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-6048,-4583,-12409,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-6084,-4583,-11994,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-6116,-4583,-11630,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-6427,-4583,-11658,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-6427,-4583,-11658,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-6382,-4583,-12004,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-6466,-4583,-12438,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-6449,-4583,-12929,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(180,3380,3073,10373,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,5068,2760,10780,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,7451,2448,10589,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,8494,2187,10574,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,10736,1823,10548,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-13166,1146,-12577,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-10578,-1667,-9248,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-7779,-4167,-2478,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-8025,-4167,1527,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-7999,-4167,7162,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-7977,-4167,9851,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-8316,-4166,11489,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-8980,-4167,12813,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-10825,-4167,12671,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,11955,1719,-3433,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,11881,1615,-7898,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-7483,4688,10581,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-5764,4479,10589,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-3734,4219,10563,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-2741,3958,10590,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-968,3750,10548,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,333,3542,10627,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-7454,-4063,3646,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-12145,1875,-12807,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-1967,5000,-1665,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-3457,5625,-246,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-3457,1146,691,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-5176,3490,3400,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-4030,4115,3660,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-4030,4115,4494,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-3978,4115,5171,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-2221,4375,6119,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-1282,1354,6100,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,21,1354,6107,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,1895,1354,6041,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,1993,1354,4370,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,1940,1354,2861,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,6818,4010,-2208,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-6976,3646,-3047,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-10306,-4115,-1890,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-6991,-4115,-790,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-8497,3490,-3043,0,-91,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-4747,3490,-2950,0,-91,0,0x0, bhvFireSpitter
,63),
RETURN()
};
const LevelScript local_warps_ddd_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,23,1,12,0),
WARP_NODE(12,23,1,11,0),
WARP_NODE(13,23,1,14,0),
WARP_NODE(14,23,1,13,0),
WARP_NODE(240,26,1,240,0),
WARP_NODE(241,26,1,241,0),
WARP_NODE(0,20,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
