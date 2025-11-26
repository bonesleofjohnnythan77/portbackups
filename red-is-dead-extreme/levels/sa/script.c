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
#include "levels/sa/header.h"
extern u8 _sa_segment_ESegmentRomStart[]; 
extern u8 _sa_segment_ESegmentRomEnd[];
#include "levels/lll/header.h"
const LevelScript level_sa_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _lll_segment_7SegmentRomStart, _lll_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _lllSegmentRomStart, _lllSegmentRomEnd),
LOAD_RAW(0x0E, _sa_segment_ESegmentRomStart, _sa_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group2_mio0SegmentRomStart,_group2_mio0SegmentRomEnd),
LOAD_RAW(12,_group2_geoSegmentRomStart,_group2_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,                  lll_geo_0009E0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,                  lll_geo_0009F8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,                  lll_geo_000A10),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,                  lll_geo_000A28),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,                  lll_geo_000A40),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,                  lll_geo_000A60),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,                  lll_geo_000A90),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,                  lll_geo_000AA8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,                  lll_geo_000AC0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,                  lll_geo_000AD8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,                  lll_geo_000AF0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_DRAWBRIDGE_PART,                lll_geo_000B20),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_ROTATING_BLOCK_FIRE_BARS,       lll_geo_000B38),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_ROTATING_HEXAGONAL_RING,        lll_geo_000BB0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_SINKING_RECTANGULAR_PLATFORM,   lll_geo_000BC8),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_SINKING_SQUARE_PLATFORMS,       lll_geo_000BE0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_TILTING_SQUARE_PLATFORM,        lll_geo_000BF8),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_1,                 lll_geo_000C10),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_2,                 lll_geo_000C30),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_3,                 lll_geo_000C50),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_4,                 lll_geo_000C70),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_5,                 lll_geo_000C90),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_6,                 lll_geo_000CB0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_7,                 lll_geo_000CD0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_8,                 lll_geo_000CF0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_9,                 lll_geo_000D10),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_10,                lll_geo_000D30),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_11,                lll_geo_000D50),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_12,                lll_geo_000D70),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_13,                lll_geo_000D90),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_14,                lll_geo_000DB0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_MOVING_OCTAGONAL_MESH_PLATFORM, lll_geo_000B08),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_SINKING_ROCK_BLOCK,             lll_geo_000DD0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_ROLLING_LOG,                    lll_geo_000DE8),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_ROTATING_HEXAGONAL_PLATFORM,    lll_geo_000A78),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_WOOD_BRIDGE,                    lll_geo_000B50),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_LARGE_WOOD_BRIDGE,              lll_geo_000B68),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_FALLING_PLATFORM,               lll_geo_000B80),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_LARGE_FALLING_PLATFORM,         lll_geo_000B98),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_VOLCANO_FALLING_TRAP,           lll_geo_000EA8),
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
JUMP_LINK(local_area_sa_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_sa_1_[] = {
AREA(1,Geo_sa_1_0x2801700),
TERRAIN(col_sa_1_0xe010768),
SET_BACKGROUND_MUSIC(0,50),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_sa_1_),
JUMP_LINK(local_warps_sa_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_sa_1_[] = {
OBJECT_WITH_ACTS(0,817,-1008,-6238,0,0,0,0xa0000, bhvSpinAirborneWarp
,31),
OBJECT_WITH_ACTS(0,794,-2421,-5956,0,-154,0,0xb0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-1738,-2155,7212,0,-91,0,0xc0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(180,-2950,-1250,1134,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,-2775,-209,291,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,-2717,-417,814,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,-2298,-782,945,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,4423,1093,3104,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(86,6557,1933,4354,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,6117,1957,4617,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,6543,1957,4601,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,2553,-2347,-1067,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,2137,-2347,-1081,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(180,5073,-1155,-334,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(86,-647,-2707,1803,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,-625,-2707,1538,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,-2041,-1717,428,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,-1770,-2482,-747,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,-1290,-2707,-1097,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,-2649,-2707,-1206,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,-1662,-2812,-2804,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,-3432,-2707,-2742,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,-4317,-2707,-2711,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,-4426,-2707,-3397,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,-2770,-2497,-4887,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,-2090,-2497,-4892,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,-1976,-2497,-5979,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,-2614,-2497,-5889,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,-3080,-2497,-5938,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(122,-7409,2031,7273,0,0,0,0x2000000, bhvStar
,31),
OBJECT_WITH_ACTS(137,-2407,2604,349,0,0,0,0xc0000, bhvExclamationBox
,31),
OBJECT_WITH_ACTS(86,3592,-2632,-6867,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,-4300,-2707,1104,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(180,2861,-2568,-6858,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,4944,-2568,-4566,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,5517,-2568,-5295,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,5413,-2568,-6806,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,5100,-2528,-6285,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,4111,-2573,-5868,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,3486,-2567,-6545,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,3798,-2561,-6545,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,4111,-2554,-6493,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,4371,-2548,-6441,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,4631,-2541,-6025,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,4840,-2587,-5400,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,4527,-2580,-4931,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,3069,-2574,-4827,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,4006,-2567,-4827,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,3642,-2561,-5035,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,3329,-2555,-5347,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,3225,-2548,-5972,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,2809,-2594,-5972,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(87,3901,-2587,-5848,0,0,0,0x0, bhvBigBullyWithMinions
,31),
OBJECT_WITH_ACTS(0,-7109,1668,4122,0,0,0,0x110000, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(180,-3128,-1406,383,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,-3222,-1406,865,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,-3439,-1927,1172,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,-3434,-1927,166,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,-2675,-1927,-277,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,-1729,-1927,252,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,-1709,-1823,1191,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,-2560,-1823,1683,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(86,2557,-2632,-5704,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(0,-4392,2420,-8407,0,0,0,0x110000, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(86,4146,-2632,-4549,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,5190,-2632,-4885,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,4131,-2632,-7317,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,4770,-2632,-6750,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,5764,-2632,-5628,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,4928,-2632,-5277,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,4409,-2632,-5314,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,4049,-2632,-5391,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,3637,-2632,-5472,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,3377,-2632,-5490,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,3221,-2632,-5501,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,3065,-2632,-5512,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,2909,-2632,-5523,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(180,2821,-2552,-6410,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,3783,-2552,-7800,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,4613,-2552,-7629,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,3307,-2552,-7443,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,4031,-2552,-7118,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,7419,2135,-3819,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,6946,2135,4309,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,6008,1979,4349,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,5086,1042,3087,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,3679,1094,3090,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,4198,1094,1649,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,4823,1094,1671,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,5291,1094,1687,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,5865,-365,1236,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,4096,-469,1193,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,5164,-469,1138,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,5164,-469,1138,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,4244,-1094,-375,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,3513,-1094,-351,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,2000,-1406,-296,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,2570,-1406,-356,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,3140,-1406,-416,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,3075,-2240,-1038,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,1930,-2240,-1965,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,2350,-2240,-1956,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,2821,-2240,-1954,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,2821,-2240,-2949,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,2252,-2240,-2889,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,1785,-2240,-2840,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(0,-2383,2396,-8392,0,0,0,0x110000, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(0,-1341,2396,-8392,0,0,0,0x110000, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(118,1003,2083,-8392,0,0,0,0x0, bhvHiddenBlueCoin
,31),
OBJECT_WITH_ACTS(118,1680,2083,-8392,0,0,0,0x0, bhvHiddenBlueCoin
,31),
OBJECT_WITH_ACTS(118,3295,2083,-8340,0,0,0,0x0, bhvHiddenBlueCoin
,31),
OBJECT_WITH_ACTS(118,4284,2083,-8340,0,0,0,0x0, bhvHiddenBlueCoin
,31),
OBJECT_WITH_ACTS(118,6367,2083,-8392,0,0,0,0x0, bhvHiddenBlueCoin
,31),
OBJECT_WITH_ACTS(118,6992,2083,-8392,0,0,0,0x0, bhvHiddenBlueCoin
,31),
OBJECT_WITH_ACTS(140,7670,2062,-8392,0,0,0,0x0, bhvBlueCoinSwitch
,31),
OBJECT_WITH_ACTS(0,7464,1823,-7537,0,0,0,0x110000, bhvCoinFormation
,31),
RETURN()
};
const LevelScript local_warps_sa_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,20,1,12,0),
WARP_NODE(12,20,1,11,0),
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
