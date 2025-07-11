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
LOAD_MIO0(0xA,_wdw_skybox_mio0SegmentRomStart,_wdw_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
LOAD_MIO0(6,_group13_mio0SegmentRomStart,_group13_mio0SegmentRomEnd),
LOAD_RAW(13,_group13_geoSegmentRomStart,_group13_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_14),
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
AREA(1,Geo_ttm_1_0x2c41700),
TERRAIN(col_ttm_1_0xe017d28),
SET_BACKGROUND_MUSIC(0,38),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_ttm_1_),
JUMP_LINK(local_warps_ttm_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ttm_1_[] = {
OBJECT_WITH_ACTS(0,-1094,-3039,729,0,0,0,0xa0000, bhvSpinAirborneWarp
,31),
OBJECT_WITH_ACTS(0,583,2683,-5387,0,-154,0,0xb0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,52,-782,-208,0,0,0,0x0, bhvInitializeChangingWaterLevel
,63),
OBJECT_WITH_ACTS(56,3021,-4925,2240,0,0,0,0x0, bhvWaterLevelDiamond
,63),
OBJECT_WITH_ACTS(105,-2031,-4976,2188,0,0,0,0x0, bhvSkeeter
,63),
OBJECT_WITH_ACTS(105,-3802,-4976,2500,0,0,0,0x0, bhvSkeeter
,63),
OBJECT_WITH_ACTS(105,729,-4976,2813,0,0,0,0x0, bhvSkeeter
,63),
OBJECT_WITH_ACTS(89,4063,-3724,-104,0,121,0,0x0, bhvHeaveHo
,63),
OBJECT_WITH_ACTS(89,2031,-2249,-2344,0,-76,0,0x0, bhvHeaveHo
,63),
OBJECT_WITH_ACTS(89,625,-2249,-2083,0,0,0,0x0, bhvHeaveHo
,63),
OBJECT_WITH_ACTS(180,1667,-4241,1458,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,885,-4598,1406,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(105,1354,-2249,-2448,0,0,0,0x0, bhvSkeeter
,63),
OBJECT_WITH_ACTS(194,0,885,-52,0,0,0,0x0, bhvCirclingAmp
,63),
OBJECT_WITH_ACTS(105,156,806,-1979,0,0,0,0x0, bhvSkeeter
,63),
OBJECT_WITH_ACTS(89,-3750,-2897,-156,0,0,0,0x0, bhvHeaveHo
,63),
OBJECT_WITH_ACTS(180,-3125,-326,-1302,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(105,-2552,308,-1771,0,0,0,0x0, bhvSkeeter
,63),
OBJECT_WITH_ACTS(105,-52,-4976,-1615,0,0,0,0x0, bhvSkeeter
,63),
OBJECT_WITH_ACTS(105,3125,-4976,-1771,0,0,0,0x0, bhvSkeeter
,63),
OBJECT_WITH_ACTS(105,3385,-4976,2240,0,0,0,0x0, bhvSkeeter
,63),
OBJECT_WITH_ACTS(56,208,833,677,0,0,0,0x0, bhvWaterLevelDiamond
,31),
OBJECT_WITH_ACTS(56,4375,1615,573,0,0,0,0x0, bhvWaterLevelDiamond
,31),
OBJECT_WITH_ACTS(59,4115,-3724,-990,0,0,0,0x0, bhvWdwRectangularFloatingPlatform
,31),
OBJECT_WITH_ACTS(56,4115,2552,-1198,0,0,0,0x0, bhvWaterLevelDiamond
,31),
OBJECT_WITH_ACTS(56,4323,4271,-2969,0,0,0,0x0, bhvWaterLevelDiamond
,31),
OBJECT_WITH_ACTS(56,4115,4896,-1198,0,0,0,0x0, bhvWaterLevelDiamond
,31),
OBJECT_WITH_ACTS(122,4167,6057,-625,0,0,0,0x0, bhvStar
,31),
OBJECT_WITH_ACTS(56,4167,3229,-1302,0,0,0,0x0, bhvWaterLevelDiamond
,31),
OBJECT_WITH_ACTS(56,4115,5469,-1146,0,0,0,0x0, bhvWaterLevelDiamond
,31),
OBJECT_WITH_ACTS(201,3522,-533,-2743,0,-270,0,0xc00000, bhvCannonClosed
,31),
OBJECT_WITH_ACTS(195,-104,924,-3750,0,0,0,0x0, bhvBobombBuddyOpensCannon
,31),
OBJECT_WITH_ACTS(122,3021,4219,313,0,-173,0,0x1000000, bhvStar
,31),
OBJECT_WITH_ACTS(56,-4167,-4323,1823,0,0,0,0x0, bhvWaterLevelDiamond
,31),
OBJECT_WITH_ACTS(56,-4115,-2135,312,0,0,0,0x0, bhvWaterLevelDiamond
,31),
OBJECT_WITH_ACTS(59,-4375,-2897,-729,0,0,0,0x0, bhvWdwRectangularFloatingPlatform
,31),
OBJECT_WITH_ACTS(56,-4375,-1563,-990,0,0,0,0x0, bhvWaterLevelDiamond
,31),
OBJECT_WITH_ACTS(56,-2448,885,-3229,0,0,0,0x0, bhvWaterLevelDiamond
,31),
OBJECT_WITH_ACTS(56,-4375,-521,-833,0,0,0,0x0, bhvWaterLevelDiamond
,31),
OBJECT_WITH_ACTS(59,-2448,180,-2240,0,0,0,0x0, bhvWdwRectangularFloatingPlatform
,31),
OBJECT_WITH_ACTS(56,-2448,1615,-2344,0,0,0,0x0, bhvWaterLevelDiamond
,31),
OBJECT_WITH_ACTS(56,-2396,2438,-3802,0,0,0,0x0, bhvWaterLevelDiamond
,31),
OBJECT_WITH_ACTS(56,-2344,3438,-2292,0,0,0,0x0, bhvWaterLevelDiamond
,31),
OBJECT_WITH_ACTS(122,-3646,-4872,-2917,0,0,0,0x2000000, bhvStar
,31),
OBJECT_WITH_ACTS(56,-4323,-3125,1250,0,0,0,0x0, bhvWaterLevelDiamond
,31),
OBJECT_WITH_ACTS(215,4271,-3542,-3698,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,3438,-4948,1406,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-4546,3800,-1690,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,104,-2656,-3698,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,2240,-1979,-3594,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-3490,-4792,-1354,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,3073,-469,-2708,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-4375,-1979,-521,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(0,1458,-1875,-2083,0,0,0,0x3000000, bhvHiddenRedCoinStar
,31),
OBJECT_WITH_ACTS(56,-3073,-4115,6615,0,0,0,0x0, bhvWaterLevelDiamond
,31),
OBJECT_WITH_ACTS(59,-2500,-4976,6563,0,-90,0,0x0, bhvWdwRectangularFloatingPlatform
,31),
OBJECT_WITH_ACTS(56,-2135,-3438,6563,0,0,0,0x0, bhvWaterLevelDiamond
,31),
OBJECT_WITH_ACTS(56,-2917,-2708,6719,0,0,0,0x0, bhvWaterLevelDiamond
,31),
OBJECT_WITH_ACTS(56,-2135,-2344,6510,0,0,0,0x0, bhvWaterLevelDiamond
,31),
OBJECT_WITH_ACTS(56,-3333,-1302,6615,0,0,0,0x0, bhvWaterLevelDiamond
,31),
OBJECT_WITH_ACTS(56,-2292,-104,6615,0,0,0,0x0, bhvWaterLevelDiamond
,31),
OBJECT_WITH_ACTS(56,-2396,833,6667,0,0,0,0x0, bhvWaterLevelDiamond
,31),
OBJECT_WITH_ACTS(122,-1302,1198,6406,0,-91,0,0x4000000, bhvStar
,31),
OBJECT_WITH_ACTS(137,2500,-1927,-2188,0,0,0,0x50000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(0,2500,-1927,-2188,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(217,-1615,-4976,-3698,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(137,-2433,-4167,-3750,0,0,0,0x60000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(0,-1615,-4976,-3740,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(0,-2433,-4167,-3750,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(217,-3854,-2897,-781,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(0,-3854,-2897,-781,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(137,833,1289,-3802,0,0,0,0x70000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(0,833,1289,-3802,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(0,260,1198,-1823,0,0,0,0x5000000, bhvHiddenStar
,31),
OBJECT_WITH_ACTS(212,0,2344,0,0,0,0,0x0, bhv1Up
,63),
OBJECT_WITH_ACTS(212,4531,-2656,-3750,0,0,0,0x0, bhv1Up
,63),
OBJECT_WITH_ACTS(120,677,885,-1458,0,0,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(0,18,-2624,-2292,0,0,0,0xb0b0000, bhvWarp
,63),
OBJECT_WITH_ACTS(0,4353,-1492,-2813,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(140,1719,-2249,-2917,0,0,0,0x0, bhvBlueCoinSwitch
,63),
OBJECT_WITH_ACTS(118,2396,-2249,-1771,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,2813,-2249,-1771,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,3217,-2249,-1771,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,3595,-2249,-1771,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,4005,-2249,-1771,0,0,0,0x0, bhvHiddenBlueCoin
,63),
RETURN()
};
const LevelScript local_warps_ttm_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,28,1,10,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,17,1,50,0),
WARP_NODE(241,17,1,100,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
