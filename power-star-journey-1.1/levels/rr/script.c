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
#include "levels/rr/header.h"
extern u8 _rr_segment_ESegmentRomStart[]; 
extern u8 _rr_segment_ESegmentRomEnd[];
const LevelScript level_rr_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _rrSegmentRomStart, _rrSegmentRomEnd),
LOAD_RAW(0x0E, _rr_segment_ESegmentRomStart, _rr_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom29720256_skybox_mio0SegmentRomStart,_SkyboxCustom29720256_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group3_mio0SegmentRomStart,_group3_mio0SegmentRomEnd),
LOAD_RAW(12,_group3_geoSegmentRomStart,_group3_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,           rr_geo_000660),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,           rr_geo_000678),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,           rr_geo_000690),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,           rr_geo_0006A8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,           rr_geo_0006C0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,           rr_geo_0006D8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,           rr_geo_0006F0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,           rr_geo_000708),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,           rr_geo_000720),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,           rr_geo_000738),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,           rr_geo_000758),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,           rr_geo_000770),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,           rr_geo_000788),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10,           rr_geo_0007A0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,           rr_geo_0007B8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12,           rr_geo_0007D0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13,           rr_geo_0007E8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14,           rr_geo_000800),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_15,           rr_geo_000818),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_16,           rr_geo_000830),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SLIDING_PLATFORM,         rr_geo_0008C0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_FLYING_CARPET,            rr_geo_000848),
    LOAD_MODEL_FROM_GEO(MODEL_RR_OCTAGONAL_PLATFORM,       rr_geo_0008A8),
    LOAD_MODEL_FROM_GEO(MODEL_RR_ROTATING_BRIDGE_PLATFORM, rr_geo_000878),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRIANGLE_PLATFORM,        rr_geo_0008D8),
    LOAD_MODEL_FROM_GEO(MODEL_RR_CRUISER_WING,             rr_geo_000890),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SEESAW_PLATFORM,          rr_geo_000908),
    LOAD_MODEL_FROM_GEO(MODEL_RR_L_SHAPED_PLATFORM,        rr_geo_000940),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SWINGING_PLATFORM,        rr_geo_000860),
    LOAD_MODEL_FROM_GEO(MODEL_RR_DONUT_PLATFORM,           rr_geo_000920),
    LOAD_MODEL_FROM_GEO(MODEL_RR_ELEVATOR_PLATFORM,        rr_geo_0008F0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES,         rr_geo_000958),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME1,  rr_geo_000970),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME2,  rr_geo_000988),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME3,  rr_geo_0009A0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME4,  rr_geo_0009B8),
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
LOAD_MODEL_FROM_GEO(84, star_geo
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
JUMP_LINK(script_func_global_4),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_rr_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_rr_1_[] = {
AREA(1,rr_area_1),
TERRAIN(rr_area_1_collision),
SET_BACKGROUND_MUSIC(0,45),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_rr_1_),
JUMP_LINK(local_warps_rr_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_rr_1_[] = {
OBJECT_WITH_ACTS(0,-792,-4151,-1979,0,-16,0,0xa0000, bhvSpinAirborneWarp
,31),
OBJECT_WITH_ACTS(0,-649,-1302,-747,0,0,0,0x0, bhvWaterBombSpawner
,63),
OBJECT_WITH_ACTS(0,1875,1302,260,0,0,0,0x0, bhvWaterBombSpawner
,63),
OBJECT_WITH_ACTS(0,4531,1354,-1354,0,0,0,0x0, bhvWaterBombSpawner
,63),
OBJECT_WITH_ACTS(0,-3802,-1510,3958,0,0,0,0x0, bhvWaterBombSpawner
,63),
OBJECT_WITH_ACTS(0,-833,-1302,-469,0,0,0,0x0, bhvWaterBombSpawner
,63),
OBJECT_WITH_ACTS(0,-891,-2124,-365,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(220,-2292,-625,-1406,0,0,0,0x0, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(0,885,621,-1146,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,2344,621,625,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,4219,612,365,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(220,2396,2031,677,0,0,0,0x10000, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(220,-2884,-1447,2763,0,0,0,0x0, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(0,-3698,-2128,3958,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,-625,-3229,-782,0,0,0,0x0, bhvWaterBombSpawner
,63),
OBJECT_WITH_ACTS(0,104,14248,2188,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(122,2606,3002,-641,0,0,0,0x0, bhvStar
,31),
OBJECT_WITH_ACTS(122,-2989,-125,3185,0,89,0,0x1000000, bhvStar
,31),
OBJECT_WITH_ACTS(215,-1667,-1927,-833,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-2367,-875,-1406,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,2474,-1875,-675,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-4115,-1979,3594,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,3333,781,990,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,3124,1575,420,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-1919,833,-1580,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-812,-4086,1358,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(0,-3177,-1667,4427,0,0,0,0x2000000, bhvHiddenRedCoinStar
,31),
OBJECT_WITH_ACTS(137,-1816,938,-1563,0,0,0,0x0, bhvExclamationBox
,8),
OBJECT_WITH_ACTS(122,-2125,859,4788,0,-181,0,0x3000000, bhvStar
,31),
OBJECT_WITH_ACTS(139,-4257,685,-4076,90,0,90,0xc0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,469,14363,1042,0,0,0,0xb0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,1094,14248,-104,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(0,143,14248,4287,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(0,1873,14248,2545,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(0,-1314,14248,2813,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(0,-1113,14248,-126,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(0,104,14547,1615,0,0,0,0x4000000, bhvHiddenStar
,31),
OBJECT_WITH_ACTS(122,-4682,-3063,3118,0,0,0,0x5000000, bhvStar
,31),
OBJECT_WITH_ACTS(0,-4682,-2135,3118,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(137,-2813,-1667,4531,0,0,0,0x60000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(212,5601,1736,-1964,0,0,0,0x0, bhv1Up
,63),
OBJECT_WITH_ACTS(0,1823,624,938,0,0,0,0x0, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(140,2812,624,612,0,0,0,0x0, bhvBlueCoinSwitch
,63),
OBJECT_WITH_ACTS(118,2886,624,-243,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,2347,624,-145,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,2254,624,-792,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,2546,624,-990,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,2931,624,-727,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(120,4063,677,729,0,0,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(212,2399,-1978,3186,0,0,0,0x0, bhv1Up
,63),
OBJECT_WITH_ACTS(207,278,624,-2742,0,0,0,0x0, bhvFloorSwitchHiddenObjects
,63),
OBJECT_WITH_ACTS(129,4896,729,-2083,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,5142,1015,-2083,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,5385,1216,-1979,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,5606,1438,-1983,0,0,0,0x0, bhvHiddenObject
,63),
RETURN()
};
const LevelScript local_warps_rr_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,15,1,12,0),
WARP_NODE(12,15,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,31,1,1,0),
WARP_NODE(241,31,1,2,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
