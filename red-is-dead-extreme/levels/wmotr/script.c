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
#include "levels/wmotr/header.h"
extern u8 _wmotr_segment_ESegmentRomStart[]; 
extern u8 _wmotr_segment_ESegmentRomEnd[];
#include "levels/jrb/header.h"
const LevelScript level_wmotr_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _jrb_segment_7SegmentRomStart, _jrb_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _jrbSegmentRomStart, _jrbSegmentRomEnd),
LOAD_RAW(0x0E, _wmotr_segment_ESegmentRomStart, _wmotr_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group4_mio0SegmentRomStart,_group4_mio0SegmentRomEnd),
LOAD_RAW(12,_group4_geoSegmentRomStart,_group4_geoSegmentRomEnd),
LOAD_MIO0(6,_group13_mio0SegmentRomStart,_group13_mio0SegmentRomEnd),
LOAD_RAW(13,_group13_geoSegmentRomStart,_group13_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_LEFT_HALF_PART,  jrb_geo_000978),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_BACK_LEFT_PART,  jrb_geo_0009B0),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_RIGHT_HALF_PART, jrb_geo_0009E8),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_BACK_RIGHT_PART, jrb_geo_000A00),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SUNKEN_SHIP,          jrb_geo_000990),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SUNKEN_SHIP_BACK,     jrb_geo_0009C8),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_ROCK,                 jrb_geo_000930),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SLIDING_BOX,          jrb_geo_000960),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_FALLING_PILLAR,       jrb_geo_000900),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_FALLING_PILLAR_BASE,  jrb_geo_000918),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_FLOATING_PLATFORM,    jrb_geo_000948),
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
// LOAD_MODEL_FROM_GEO(84,0x05008d14),
// LOAD_MODEL_FROM_DL(87,0x05013cb8,4),
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
JUMP_LINK(script_func_global_5),
JUMP_LINK(script_func_global_14),
JUMP_LINK(local_area_wmotr_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_wmotr_1_[] = {
AREA(1,Geo_wmotr_1_0x3721700),
TERRAIN(col_wmotr_1_0xe02f748),
SET_BACKGROUND_MUSIC(0,39),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_wmotr_1_),
JUMP_LINK(local_warps_wmotr_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wmotr_1_[] = {
OBJECT_WITH_ACTS(0,-2177,-279,-2607,0,0,0,0xa0000, bhvSpinAirborneWarp
,63),
OBJECT_WITH_ACTS(0,966,1485,-2299,0,-154,0,0xb0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-95,1596,3272,0,-153,0,0xc0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-2178,-278,-2641,0,107,0,0xd0000, bhvFadingWarp
,63),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,2008,-1771,1622,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,1571,-1771,2088,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,1627,-2187,1062,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,2048,-1406,-304,0,0,0,0x0, bhvChirpChirp
,63),
OBJECT_WITH_ACTS(0,1533,-1406,-678,0,0,0,0x0, bhvChirpChirp
,63),
OBJECT_WITH_ACTS(0,2015,-1406,-1399,0,0,0,0x0, bhvChirpChirp
,63),
OBJECT_WITH_ACTS(0,1496,-1406,-1773,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,1976,-1406,-2181,0,0,0,0x0, bhvChirpChirp
,63),
OBJECT_WITH_ACTS(105,1931,-1302,-2599,0,0,0,0x0, bhvSkeeter
,63),
OBJECT_WITH_ACTS(105,1445,-1302,-1565,0,0,0,0x0, bhvSkeeter
,63),
OBJECT_WITH_ACTS(105,1902,-1302,-932,0,0,0,0x0, bhvSkeeter
,63),
OBJECT_WITH_ACTS(105,1472,-1302,-158,0,0,0,0x0, bhvSkeeter
,63),
OBJECT_WITH_ACTS(105,1975,-1302,892,0,0,0,0x0, bhvSkeeter
,63),
OBJECT_WITH_ACTS(105,1952,-1302,2194,0,0,0,0x0, bhvSkeeter
,63),
OBJECT_WITH_ACTS(105,1444,-1302,1456,0,0,0,0x0, bhvSkeeter
,63),
OBJECT_WITH_ACTS(137,14,3437,2497,0,0,0,0xc0000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(0,-1958,-833,2295,0,0,0,0x2000000, bhvHiddenStar
,63),
OBJECT_WITH_ACTS(122,1476,1719,-2153,0,0,0,0x1000000, bhvStar
,63),
OBJECT_WITH_ACTS(122,-1602,-104,-1652,0,0,0,0x0, bhvStar
,63),
OBJECT_WITH_ACTS(195,542,2277,2364,0,0,0,0x460000, bhvBobombBuddy
,31),
OBJECT_WITH_ACTS(120,-1014,2344,2276,0,0,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(202,-294,1979,2687,0,88,0,0x0, bhvCheckerboardElevatorGroup
,63),
OBJECT_WITH_ACTS(202,-774,1823,2701,0,88,0,0x0, bhvCheckerboardElevatorGroup
,63),
OBJECT_WITH_ACTS(202,-1140,1458,2739,0,88,0,0x0, bhvCheckerboardElevatorGroup
,63),
OBJECT_WITH_ACTS(202,-1473,1094,2737,0,88,0,0x0, bhvCheckerboardElevatorGroup
,63),
OBJECT_WITH_ACTS(0,2037,-2396,569,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,1518,-1458,284,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,2111,-1458,-373,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,1492,-1458,-688,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,2034,-1458,-2217,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,1491,-1458,-2621,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(212,1424,52,-1983,0,0,0,0x0, bhv1Up
,63),
OBJECT_WITH_ACTS(137,1465,208,-1907,0,0,0,0x10000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(207,1935,-1520,-1116,0,0,0,0x0, bhvFloorSwitchHiddenObjects
,63),
OBJECT_WITH_ACTS(129,1259,1250,-2228,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,1343,1042,-2466,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,1660,729,-2458,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,1984,313,-2398,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,1998,313,-1982,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,1774,0,-1814,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(116,1563,-1771,2094,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,1998,-1771,1591,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,1628,-2188,1046,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,2042,-2448,545,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,1541,-1458,292,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,2123,-1458,-389,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,1493,-1458,-696,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,1512,-1406,-1764,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,2049,-1406,-2214,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,1475,-1458,-2633,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(0,8448,8384,8448,0,0,0,0x6e380000,editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,8448,8384,8448,0,0,0,0x6e3a0000,editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_wmotr_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,31,1,14,0),
WARP_NODE(14,9,1,13,0),
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
