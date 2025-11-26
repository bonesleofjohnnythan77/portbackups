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
#include "levels/ttm/header.h"
extern u8 _ttm_segment_ESegmentRomStart[]; 
extern u8 _ttm_segment_ESegmentRomEnd[];
#include "levels/wdw/header.h"
const LevelScript level_ttm_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _wdw_segment_7SegmentRomStart, _wdw_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _wdwSegmentRomStart, _wdwSegmentRomEnd),
LOAD_RAW(0x0E, _ttm_segment_ESegmentRomStart, _ttm_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group2_mio0SegmentRomStart,_group2_mio0SegmentRomEnd),
LOAD_RAW(12,_group2_geoSegmentRomStart,_group2_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_WDW_BUBBLY_TREE,                   bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_SQUARE_FLOATING_PLATFORM,      wdw_geo_000580),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_ARROW_LIFT,                    wdw_geo_000598),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_WATER_LEVEL_DIAMOND,           wdw_geo_0005C0),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_HIDDEN_PLATFORM,               wdw_geo_0005E8),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_EXPRESS_ELEVATOR,              wdw_geo_000610),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_RECTANGULAR_FLOATING_PLATFORM, wdw_geo_000628),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_ROTATING_PLATFORM,             wdw_geo_000640),
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
JUMP_LINK(script_func_global_3),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_ttm_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_ttm_1_[] = {
AREA(1,Geo_ttm_1_0x3b41700),
TERRAIN(col_ttm_1_0xe04c940),
SET_BACKGROUND_MUSIC(0,58),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_ttm_1_),
JUMP_LINK(local_warps_ttm_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ttm_1_[] = {
OBJECT_WITH_ACTS(0,-11439,346,9673,0,0,0,0xa0000, bhvSpinAirborneWarp
,63),
OBJECT_WITH_ACTS(0,583,2683,-5387,0,-154,0,0xb0000, bhvFadingWarp
,63),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp
,63),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp
,63),
OBJECT_WITH_ACTS(0,-11440,-222,10524,0,-151,0,0xe0000, bhvFadingWarp
,63),
OBJECT_WITH_ACTS(137,-11474,208,9120,0,0,0,0x30000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(223,-11095,-208,-7059,0,-135,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,-12614,-208,-3312,0,-135,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,-12653,-208,777,0,-135,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(118,-11542,-208,7425,0,-135,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-11777,-208,6619,0,-135,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-11660,-208,7022,0,-135,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-11496,-208,7977,0,-135,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-12328,-208,6739,0,-135,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-12248,-208,7106,0,-135,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-12129,-208,7582,0,-135,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-11973,-208,8095,0,-135,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-11343,-208,8269,0,-135,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-11816,-208,8608,0,-135,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(140,-11244,-208,9740,0,-135,0,0x0, bhvBlueCoinSwitch
,63),
OBJECT_WITH_ACTS(116,4573,157,2394,0,-135,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,4732,157,2734,0,-135,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,4138,157,2384,0,-135,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,4317,157,3325,0,-135,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,4050,157,2784,0,-135,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(0,4317,157,3325,0,-135,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,4168,157,2383,0,-135,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,4602,157,2409,0,-135,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,4044,157,2766,0,-135,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,4739,157,2757,0,-135,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,4992,260,2714,0,-135,0,0x3000000, bhvHiddenStar
,63),
OBJECT_WITH_ACTS(122,4362,-2083,-13088,0,-135,0,0x5000000, bhvStar
,63),
OBJECT_WITH_ACTS(122,12016,2708,4624,0,-135,0,0x4000000, bhvStar
,63),
OBJECT_WITH_ACTS(122,3556,1458,-9100,-2,-135,4,0x2000000, bhvStar
,63),
OBJECT_WITH_ACTS(122,-4934,417,1335,0,-135,0,0x1000000, bhvStar
,63),
OBJECT_WITH_ACTS(122,-8101,-468,3970,0,0,0,0x0, bhvStar
,63),
OBJECT_WITH_ACTS(86,4341,208,3068,0,0,0,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(86,4242,208,2535,0,0,0,0x0, bhvSmallBully
,63),
OBJECT_WITH_ACTS(223,6013,-156,-10997,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,7564,-156,-8126,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,8740,-156,-5251,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,11166,-156,-5352,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,11156,-156,-2564,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,13422,-156,832,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,9529,-156,1471,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,7888,-156,4381,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,5922,-156,619,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,4021,-156,-1236,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,5232,-156,-3865,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,3238,-156,-5098,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,1848,-156,-7739,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,-541,-156,-9415,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,-2302,-156,-6895,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,-2268,-156,-4078,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,-1339,-156,-1301,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,293,-156,1063,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,-1247,-156,3913,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,-3181,-156,6507,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,-5548,-156,6709,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,-8243,-156,4835,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(202,11794,1458,5536,0,0,0,0x0, bhvCheckerboardElevatorGroup
,63),
OBJECT_WITH_ACTS(223,-7821,-156,-1656,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,-5851,-156,-4490,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,-7743,-156,-6753,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,-12758,-156,5564,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(194,4299,208,3247,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,4395,261,2694,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-8798,-156,3745,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-5924,0,525,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,3346,469,-10474,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,5576,-104,-10375,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(202,12397,2084,5450,0,0,0,0x0, bhvCheckerboardElevatorGroup
,63),
OBJECT_WITH_ACTS(195,-10732,-208,9022,0,0,0,0x100000, bhvBobombBuddy
,1),
OBJECT_WITH_ACTS(180,-11420,-156,10526,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(102,3502,-249,-5619,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,1797,-249,-8125,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-311,-249,-9608,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-2053,-249,-7222,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-2052,-249,-4357,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-1166,-249,-1392,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,306,-249,1111,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-1109,-249,3430,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-2833,-249,6468,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-5419,-249,6612,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-7380,-249,-2045,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-5613,-249,-4710,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-7364,-249,-7239,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-10790,-249,-6939,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-12280,-249,-4016,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-12172,-249,131,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-12513,-249,5277,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-11718,-249,-6450,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-12632,-249,-2728,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-12823,-249,1547,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-12332,-249,5979,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-3738,-249,6872,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-1323,-249,4462,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-2554,-249,-3669,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-2618,-249,-6254,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-885,-249,-8822,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,3037,-249,-4863,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,6036,-249,978,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,7222,-249,4191,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,12785,-249,691,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,7057,-249,-8461,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,6224,-249,-10500,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,5992,-97,-11027,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,7488,-249,-8097,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,8627,-249,-5286,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,11426,-249,-5424,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,11182,-249,-2523,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,13445,-249,797,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,9564,-249,1583,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,7748,-249,4588,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,5761,-249,522,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,4140,-249,-1384,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,5259,-97,-3844,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-7789,-249,-1344,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-6191,-249,-4301,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-7726,-249,-6557,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(118,-11466,-208,9130,0,2,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-11466,-208,9130,0,2,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-11466,-208,9130,0,2,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-11466,-208,9130,0,2,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-11466,-208,9130,0,2,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-11466,-208,9130,0,2,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-11466,-208,9130,0,2,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-11466,-208,9130,0,2,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-11466,-208,9130,0,2,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-11466,-208,9130,0,2,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-11466,-208,9130,0,2,0,0x0, bhvHiddenBlueCoin
,63),
RETURN()
};
const LevelScript local_warps_ttm_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,31,1,13,0),
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
