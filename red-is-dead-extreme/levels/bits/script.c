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
#include "levels/bits/header.h"
extern u8 _bits_segment_ESegmentRomStart[]; 
extern u8 _bits_segment_ESegmentRomEnd[];
const LevelScript level_bits_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bits_segment_7SegmentRomStart, _bits_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bitsSegmentRomStart, _bitsSegmentRomEnd),
LOAD_RAW(0x0E, _bits_segment_ESegmentRomStart, _bits_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group2_mio0SegmentRomStart,_group2_mio0SegmentRomEnd),
LOAD_RAW(12,_group2_geoSegmentRomStart,_group2_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,           bits_geo_000430),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,           bits_geo_000448),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,           bits_geo_000460),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,           bits_geo_000478),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,           bits_geo_000490),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,           bits_geo_0004A8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,           bits_geo_0004C0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,           bits_geo_0004D8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,           bits_geo_0004F0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,           bits_geo_000508),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,           bits_geo_000520),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,           bits_geo_000538),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,           bits_geo_000550),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10,           bits_geo_000568),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,           bits_geo_000580),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12,           bits_geo_000598),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13,           bits_geo_0005B0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14,           bits_geo_0005C8),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_SLIDING_PLATFORM,       bits_geo_0005E0),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_TWIN_SLIDING_PLATFORMS, bits_geo_0005F8),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_OCTAGONAL_PLATFORM,     bits_geo_000610),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_BLUE_PLATFORM,          bits_geo_000628),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_FERRIS_WHEEL_AXLE,      bits_geo_000640),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_ARROW_PLATFORM,         bits_geo_000658),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_SEESAW_PLATFORM,        bits_geo_000670),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_TILTING_W_PLATFORM,     bits_geo_000688),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE,              bits_geo_0006A0),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE_FRAME1,       bits_geo_0006B8),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE_FRAME2,       bits_geo_0006D0),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE_FRAME3,       bits_geo_0006E8),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE_FRAME4,       bits_geo_000700),
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
JUMP_LINK(local_area_bits_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bits_1_[] = {
AREA(1,Geo_bits_1_0x2961700),
TERRAIN(col_bits_1_0xe00d7e0),
SET_BACKGROUND_MUSIC(0,57),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bits_1_),
JUMP_LINK(local_warps_bits_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bits_1_[] = {
OBJECT_WITH_ACTS(0,-4543,4096,-3842,0,91,0,0xa0000, bhvSpinAirborneWarp
,63),
OBJECT_WITH_ACTS(0,-4584,3725,-3830,0,-154,0,0xb0000, bhvFadingWarp
,63),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp
,63),
OBJECT_WITH_ACTS(0,704,-1164,2346,0,91,0,0xd0000, bhvFadingWarp
,63),
OBJECT_WITH_ACTS(0,-268,4101,3120,0,-88,0,0xe0000, bhvFadingWarp
,63),
OBJECT_WITH_ACTS(180,2175,2396,-3863,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(103,-1686,4010,-1149,-2,-87,-3,0x0, bhvWhompKingBoss
,63),
OBJECT_WITH_ACTS(180,1117,2395,-3858,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-647,2760,-3764,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(120,5023,-418,-3033,0,-182,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(180,-2987,2969,-3908,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-4814,3698,-3878,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,3945,1823,-3359,0,35,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(202,4804,-781,-3047,0,-23,0,0x0, bhvCheckerboardElevatorGroup
,63),
OBJECT_WITH_ACTS(215,3375,1719,3038,0,35,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(129,3011,1667,2930,0,96,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(180,4802,1823,2386,0,35,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-2606,4115,2248,0,35,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(217,4582,1771,3002,0,1,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(180,4844,1043,756,0,-108,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,4968,-261,-3480,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(102,4750,-364,-4355,0,-6,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(202,4790,1563,2234,0,-76,0,0x0, bhvCheckerboardElevatorGroup
,63),
OBJECT_WITH_ACTS(129,2837,1667,2894,0,-100,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(180,4849,730,-203,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(120,4919,-416,-4147,-1,-93,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(180,4787,-52,-2190,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(129,2848,1667,3243,0,-14,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(180,4650,105,-1659,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,4808,886,262,0,-15,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,4892,469,-840,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(129,2653,1615,3187,0,-31,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(202,4815,1667,2471,0,-92,0,0x0, bhvCheckerboardElevatorGroup
,63),
OBJECT_WITH_ACTS(129,3533,1876,3171,183,-78,3,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(215,3033,1823,3142,180,-91,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(217,4861,1771,2997,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(215,-845,3958,-1222,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(180,-932,3958,-1162,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(215,-1472,3958,-1229,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(180,-2334,4166,283,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(129,-2005,3907,-1458,0,0,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,-2243,3854,-384,1,332,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(202,-2336,3854,3102,1,-159,0,0x0, bhvCheckerboardElevatorGroup
,63),
OBJECT_WITH_ACTS(129,-2328,3855,-189,1,0,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,-2346,3854,228,1,0,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,-2323,3854,16,1,1,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(180,-2521,4011,393,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(202,-2813,3855,2601,0,168,0,0x0, bhvCheckerboardElevatorGroup
,63),
OBJECT_WITH_ACTS(22,22,1511,-1266,0,0,0,0x20000, bhvWarpPipe
,63),
OBJECT_WITH_ACTS(180,83,4167,3133,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(129,3367,1667,3196,0,11,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,-1320,4584,1654,138,109,187,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,-2137,3907,-1037,180,74,89,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,-2164,3959,-648,180,66,89,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,-2343,3959,497,182,104,91,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,-2175,3907,-874,180,70,89,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,349,-1093,2271,145,109,103,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,-2344,3959,308,178,98,92,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,620,-989,2652,-44,1,-14,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,-2013,5366,1815,3,1,41,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,-1692,5000,1699,0,1,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(207,48,3898,3073,0,1,0,0x0, bhvFloorSwitchHiddenObjects
,63),
OBJECT_WITH_ACTS(129,-993,4271,1755,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(0,1953,1876,3025,0,-25,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(129,-446,4011,2140,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,-1979,3803,-1096,0,0,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(122,48,2240,2981,0,0,0,0x1000000, bhvStar
,63),
OBJECT_WITH_ACTS(0,-193,4063,-1201,0,0,0,0x3000000, bhvHiddenRedCoinStar
,63),
OBJECT_WITH_ACTS(180,4355,1927,2677,0,-63,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(129,3193,1667,3240,0,-76,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,4385,1615,2682,0,-88,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(202,4444,1719,2600,0,-88,0,0x0, bhvCheckerboardElevatorGroup
,63),
OBJECT_WITH_ACTS(180,3502,1771,2969,0,-62,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(120,3863,1771,2909,0,104,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(129,3010,1667,3266,0,-16,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,-470,3906,-1471,0,-9,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,-678,3906,-1464,0,-9,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,-886,3906,-1456,0,-9,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(180,-2547,4063,-1147,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(129,-317,3907,-1474,0,0,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,-1204,3907,-1449,0,0,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,-1048,3907,-1462,0,0,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,-1347,3906,-1453,0,0,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,-1503,3906,-1461,0,0,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,77,1667,-1409,-45,0,2,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,-181,1615,-1356,3,-14,-39,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,240,1667,-1304,0,0,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(215,682,-885,2505,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,446,-989,2327,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,-54,2136,2552,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,55,2344,3136,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,3087,-625,-4058,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,4599,-260,-2597,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,4455,729,-185,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,4564,2084,2938,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,3934,2500,3111,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,3914,1719,2444,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,4904,521,-507,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,4923,417,-867,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,4824,938,279,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,5082,-104,-2039,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,2428,2292,-3973,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,-1582,2292,-3920,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,-749,2292,-3920,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,345,2292,-3920,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,1387,2292,-3920,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,-72,2292,-3920,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,-1165,2292,-3920,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,-1947,2292,-3868,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,-2832,2709,-3868,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,-4808,3490,-3855,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,-2557,3907,739,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,-2557,3907,1051,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(120,-2114,4063,-959,0,1,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(215,-2557,3907,1624,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,-2557,3907,1937,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,-1311,4011,3113,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,-961,4011,3095,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,-613,4011,3128,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(202,2462,1458,2935,0,-117,0,0x0, bhvCheckerboardElevatorGroup
,63),
OBJECT_WITH_ACTS(202,1816,1615,2921,0,-129,0,0x0, bhvCheckerboardElevatorGroup
,63),
OBJECT_WITH_ACTS(129,5138,1302,1791,0,40,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(215,4911,1094,1009,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(129,5187,625,-28,0,-29,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(215,4990,52,-1621,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(180,4756,-312,-2765,0,-28,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(215,5048,-312,-2452,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,747,2292,-3893,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,1998,2292,-3884,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,2779,2292,-3911,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(180,4742,261,-1213,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(120,5088,-417,-4084,0,-93,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(202,4798,-520,-4158,0,-6,0,0x0, bhvCheckerboardElevatorGroup
,63),
OBJECT_WITH_ACTS(202,3502,1302,-3842,0,2,0,0x0, bhvCheckerboardElevatorGroup
,63),
OBJECT_WITH_ACTS(129,3226,2240,-3876,0,39,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(120,4890,1511,1909,0,173,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(180,4841,1302,1170,0,-108,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(120,5059,1,-1849,0,-186,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(0,4948,-260,-4055,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(120,3897,1771,-3297,0,0,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(212,4114,4063,-3758,0,91,0,0x0, bhv1Up
,63),
RETURN()
};
const LevelScript local_warps_bits_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,21,1,14,0),
WARP_NODE(14,21,1,13,0),
WARP_NODE(240,6,1,240,0),
WARP_NODE(241,6,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,34,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
