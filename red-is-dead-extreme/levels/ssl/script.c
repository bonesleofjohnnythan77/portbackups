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
#include "levels/ssl/header.h"
extern u8 _ssl_segment_ESegmentRomStart[]; 
extern u8 _ssl_segment_ESegmentRomEnd[];
const LevelScript level_ssl_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _ssl_segment_7SegmentRomStart, _ssl_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _sslSegmentRomStart, _sslSegmentRomEnd),
LOAD_RAW(0x0E, _ssl_segment_ESegmentRomStart, _ssl_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
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
JUMP_LINK(local_area_ssl_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_ssl_1_[] = {
AREA(1,Geo_ssl_1_0x1781700),
TERRAIN(col_ssl_1_0xe0264e0),
SET_BACKGROUND_MUSIC(0,50),
TERRAIN_TYPE(3),
JUMP_LINK(local_objects_ssl_1_),
JUMP_LINK(local_warps_ssl_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ssl_1_[] = {
OBJECT_WITH_ACTS(0,-17901,-2519,-9069,0,0,0,0xa0000, bhvSpinAirborneWarp
,63),
OBJECT_WITH_ACTS(0,583,2683,-5387,0,-154,0,0xb0000, bhvFadingWarp
,63),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp
,63),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp
,63),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp
,63),
OBJECT_WITH_ACTS(217,7664,-3125,-4467,0,1,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(137,-9491,-6041,10121,0,-45,0,0xa0000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(122,6495,6459,-2063,0,-95,0,0x4000000, bhvStar
,63),
OBJECT_WITH_ACTS(122,20766,1146,-10833,0,-45,0,0x2000000, bhvStar
,63),
OBJECT_WITH_ACTS(122,8042,573,-10540,0,53,0,0x5000000, bhvStar
,63),
OBJECT_WITH_ACTS(122,-6838,5990,-4120,0,53,0,0x3000000, bhvStar
,31),
OBJECT_WITH_ACTS(122,6487,-2083,3789,0,185,0,0x0, bhvStar
,63),
OBJECT_WITH_ACTS(0,7616,6822,-5703,0,0,0,0x40000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(120,8111,2708,-4201,0,0,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(137,-6567,-417,-3749,0,0,0,0x10000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(223,-6070,5576,-3539,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(202,-18212,-4843,5533,0,0,0,0x0, bhvCheckerboardElevatorGroup
,63),
OBJECT_WITH_ACTS(137,-16458,-3125,-8321,0,0,0,0x10000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(129,-18292,-4792,6575,0,-98,-34,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,-18269,-4792,5931,-44,-166,-16,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(0,7547,-1354,-5084,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,7547,-2448,-5084,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,7547,-104,-5084,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,7968,2604,-5166,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,6558,-2760,1175,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(223,-1402,5576,392,0,-7,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(140,4574,6641,-2056,0,-7,0,0x0, bhvBlueCoinSwitch
,63),
OBJECT_WITH_ACTS(0,6725,6641,-2129,0,-92,0,0x0, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(223,-2417,5576,-359,0,-7,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,-4179,5576,-1857,0,-7,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(118,4539,6667,-2038,0,-7,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(0,4918,7136,-1979,0,-7,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(118,5488,6146,-1986,0,-7,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,5703,6146,-2028,0,-7,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,5216,6146,-1982,0,-7,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,4754,6146,-1971,0,-7,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,4325,6146,-1997,0,-7,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(87,-4550,7448,-107,0,0,0,0x0, bhvKlepto
,63),
OBJECT_WITH_ACTS(0,18900,1719,-9253,0,0,0,0x0, bhvPokey
,63),
OBJECT_WITH_ACTS(0,16506,1719,-7202,0,0,0,0x0, bhvPokey
,63),
OBJECT_WITH_ACTS(0,15310,1719,-5122,0,0,0,0x0, bhvPokey
,63),
OBJECT_WITH_ACTS(0,16437,1719,-3866,0,0,0,0x0, bhvPokey
,63),
OBJECT_WITH_ACTS(0,18012,1719,-1535,0,0,0,0x0, bhvPokey
,63),
OBJECT_WITH_ACTS(0,19384,1719,2107,0,0,0,0x0, bhvPokey
,63),
OBJECT_WITH_ACTS(0,17399,1719,2589,0,0,0,0x0, bhvPokey
,63),
OBJECT_WITH_ACTS(0,16264,1719,842,0,0,0,0x0, bhvPokey
,63),
OBJECT_WITH_ACTS(0,14292,1719,-691,0,0,0,0x0, bhvPokey
,63),
OBJECT_WITH_ACTS(0,11572,1719,-2642,0,0,0,0x0, bhvPokey
,63),
OBJECT_WITH_ACTS(0,10526,1719,-3344,0,0,0,0x0, bhvPokey
,63),
OBJECT_WITH_ACTS(0,9828,1719,-3812,0,0,0,0x0, bhvPokey
,63),
OBJECT_WITH_ACTS(0,6819,-3282,-1467,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,8099,3646,-5311,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,8093,1458,-5207,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,7625,-3438,-5232,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(129,-10721,-6250,10228,-2,0,-42,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,-11553,-6250,10170,-2,0,-42,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,-12384,-6250,10112,-2,0,-42,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(207,-19763,-3906,10590,0,0,0,0x0, bhvFloorSwitchHiddenObjects
,63),
RETURN()
};
const LevelScript local_warps_ssl_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
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
