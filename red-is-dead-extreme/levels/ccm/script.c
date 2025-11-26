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
#include "levels/ccm/header.h"
extern u8 _ccm_segment_ESegmentRomStart[]; 
extern u8 _ccm_segment_ESegmentRomEnd[];
#include "levels/ttc/header.h"
const LevelScript level_ccm_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _ttc_segment_7SegmentRomStart, _ttc_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _ttcSegmentRomStart, _ttcSegmentRomEnd),
LOAD_RAW(0x0E, _ccm_segment_ESegmentRomStart, _ccm_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_TTC_ROTATING_CUBE,     ttc_geo_000240),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_ROTATING_PRISM,    ttc_geo_000258),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_PENDULUM,          ttc_geo_000270),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_LARGE_TREADMILL,   ttc_geo_000288),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_SMALL_TREADMILL,   ttc_geo_0002A8),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_PUSH_BLOCK,        ttc_geo_0002C8),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_ROTATING_HEXAGON,  ttc_geo_0002E0),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_ROTATING_TRIANGLE, ttc_geo_0002F8),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_PIT_BLOCK,         ttc_geo_000310),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_PIT_BLOCK_UNUSED,  ttc_geo_000328),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_ELEVATOR_PLATFORM, ttc_geo_000340),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_CLOCK_HAND,        ttc_geo_000358),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_SPINNER,           ttc_geo_000370),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_SMALL_GEAR,        ttc_geo_000388),
    LOAD_MODEL_FROM_GEO(MODEL_TTC_LARGE_GEAR,        ttc_geo_0003A0),
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
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_ccm_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_ccm_1_[] = {
AREA(1,Geo_ccm_1_0x1361700),
TERRAIN(col_ccm_1_0xe0244e8),
SET_BACKGROUND_MUSIC(0,0),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_ccm_1_),
JUMP_LINK(local_warps_ccm_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ccm_1_[] = {
OBJECT_WITH_ACTS(0,8718,-7727,1102,0,0,0,0xa0000, bhvSpinAirborneWarp
,63),
OBJECT_WITH_ACTS(206,8778,-1015,9897,0,-154,0,0x0, bhvSnufit
,63),
OBJECT_WITH_ACTS(0,8987,-8977,1299,0,-92,0,0xc0000, bhvFadingWarp
,63),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp
,63),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp
,63),
OBJECT_WITH_ACTS(206,5351,-6198,1950,0,93,0,0x0, bhvSnufit
,63),
OBJECT_WITH_ACTS(122,9914,-4896,-7669,0,93,0,0x4000000, bhvStar
,63),
OBJECT_WITH_ACTS(0,10168,-833,5341,0,0,0,0x3000000, bhvHiddenStar
,63),
OBJECT_WITH_ACTS(0,-3101,-4635,-7614,0,0,0,0x5010000, bhvMrI
,63),
OBJECT_WITH_ACTS(122,-11268,8698,-10889,0,0,0,0x2000000, bhvStar
,63),
OBJECT_WITH_ACTS(122,3754,9896,4791,0,0,0,0x1000000, bhvStar
,63),
OBJECT_WITH_ACTS(122,5081,469,-2238,0,0,0,0x0, bhvStar
,63),
OBJECT_WITH_ACTS(0,-3205,-417,5215,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,-9063,-625,5336,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,846,-364,7737,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,3610,-521,5367,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,10909,-312,9666,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(206,4057,3385,2970,0,177,0,0x0, bhvSnufit
,63),
OBJECT_WITH_ACTS(206,4723,3385,2411,0,-3,0,0x0, bhvSnufit
,63),
OBJECT_WITH_ACTS(206,4982,-156,2473,0,-180,0,0x0, bhvSnufit
,63),
OBJECT_WITH_ACTS(206,4590,-3438,1720,0,0,0,0x0, bhvSnufit
,63),
OBJECT_WITH_ACTS(206,5127,-1667,152,0,0,0,0x0, bhvSnufit
,63),
OBJECT_WITH_ACTS(206,5193,0,-1553,0,0,0,0x0, bhvSnufit
,63),
OBJECT_WITH_ACTS(194,4683,-3541,1992,0,92,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,4571,-1666,1309,0,92,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(206,4929,-364,1732,0,92,0,0x0, bhvSnufit
,63),
OBJECT_WITH_ACTS(206,4645,-1771,814,0,92,0,0x0, bhvSnufit
,63),
OBJECT_WITH_ACTS(206,4509,-1823,1255,0,92,0,0x0, bhvSnufit
,63),
OBJECT_WITH_ACTS(206,4666,-3541,2140,0,92,0,0x0, bhvSnufit
,63),
OBJECT_WITH_ACTS(206,5376,-6094,1519,0,92,0,0x0, bhvSnufit
,63),
OBJECT_WITH_ACTS(0,4796,6198,2987,0,92,0,0x0, bhvMrI
,63),
OBJECT_WITH_ACTS(88,3265,6198,2997,0,92,0,0x0, bhvThwomp
,63),
OBJECT_WITH_ACTS(88,2704,6198,3024,0,92,0,0x0, bhvThwomp
,63),
OBJECT_WITH_ACTS(0,6306,-6094,1079,0,0,0,0x0, bhvMrI
,63),
OBJECT_WITH_ACTS(194,6475,-5677,1299,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,5365,-5677,1729,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,5008,-4427,1960,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-11063,8386,-382,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-8712,8386,-4565,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-7823,8386,-8589,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-5706,8386,-6067,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-5129,8386,-4179,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(220,3979,9375,4954,0,0,0,0x10000, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(0,4954,8751,4463,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(137,2770,8699,4736,0,0,0,0x0, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(137,6209,9376,4609,0,0,0,0x60000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(223,216,-2187,-5057,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,-1630,-2187,-3698,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,9034,-2187,-10393,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(220,4763,208,-920,0,0,0,0x10000, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(220,-1556,-1823,-8358,0,0,0,0x10000, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(220,-273,-1823,-8790,0,0,0,0x10000, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(220,1066,-1823,-7026,0,0,0,0x10000, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(220,-1606,-1823,-6900,0,0,0,0x10000, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(116,5174,-1094,7848,0,0,0,0x0, bhvOneCoin
,63),
OBJECT_WITH_ACTS(0,5174,-1094,7848,0,0,0,0x130000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,9015,-8854,1331,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,10012,-1198,9224,0,0,0,0x0, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(137,11710,-990,11555,0,0,0,0x70000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(137,-11191,-990,11619,0,0,0,0x70000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(137,2844,-9323,11902,0,0,0,0x60000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(137,12392,-2031,-10799,0,0,0,0x30000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(0,5156,469,-2088,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,5377,-156,-934,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,5505,-6146,1364,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(192,5224,-6146,1966,0,0,0,0x20000, bhvGoomba
,63),
OBJECT_WITH_ACTS(192,5345,-6146,1446,0,0,0,0x10000, bhvGoomba
,63),
OBJECT_WITH_ACTS(192,5204,-6146,1028,0,0,0,0x0, bhvGoomba
,63),
OBJECT_WITH_ACTS(192,5660,104,-1636,0,0,0,0x10000, bhvGoomba
,63),
OBJECT_WITH_ACTS(194,4091,3177,2420,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(120,3663,6094,3024,0,0,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(137,-11385,8646,-427,0,0,0,0x60000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(194,2950,8542,4662,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,2949,8542,3420,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,2689,8542,3437,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,3449,6302,2937,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(220,3674,3281,2400,0,0,0,0x10000, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(194,4901,-208,2327,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,5129,-208,-319,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,4948,-1563,246,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(140,361,-2240,-3975,0,0,0,0x0, bhvBlueCoinSwitch
,63),
OBJECT_WITH_ACTS(118,387,-2240,-6149,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,491,-2240,-6139,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,586,-2240,-6027,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,274,-2240,-6054,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,448,-2240,-6248,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,430,-2240,-6040,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,412,-2240,-5833,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,394,-2240,-5625,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,380,-2240,-5470,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(195,8502,-9428,2050,0,0,0,0x20000, bhvBobombBuddy
,63),
OBJECT_WITH_ACTS(24,10940,-885,9675,0,0,0,0x0, bhvTree
,63),
OBJECT_WITH_ACTS(24,3607,-1042,5342,0,0,0,0x0, bhvTree
,63),
OBJECT_WITH_ACTS(24,-9058,-1094,5310,0,0,0,0x0, bhvTree
,63),
OBJECT_WITH_ACTS(24,839,-938,7631,0,0,0,0x0, bhvTree
,63),
OBJECT_WITH_ACTS(24,-3171,-990,5183,0,0,0,0x0, bhvTree
,63),
RETURN()
};
const LevelScript local_warps_ccm_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,18,1,241,0),
WARP_NODE(12,29,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,18,1,240,0),
WARP_NODE(241,18,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
