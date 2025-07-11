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
#include "levels/castle_inside/header.h"
extern u8 _castle_inside_segment_ESegmentRomStart[]; 
extern u8 _castle_inside_segment_ESegmentRomEnd[];
#include "levels/lll/header.h"
const LevelScript level_castle_inside_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _lll_segment_7SegmentRomStart, _lll_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _lllSegmentRomStart, _lllSegmentRomEnd),
LOAD_RAW(0x0E, _castle_inside_segment_ESegmentRomStart, _castle_inside_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bitfs_skybox_mio0SegmentRomStart,_bitfs_skybox_mio0SegmentRomEnd),
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
JUMP_LINK(local_area_castle_inside_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_inside_1_[] = {
AREA(1,Geo_castle_inside_1_0x13c1700),
TERRAIN(col_castle_inside_1_0xe020310),
SET_BACKGROUND_MUSIC(0,42),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_inside_1_),
JUMP_LINK(local_warps_castle_inside_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_inside_1_[] = {
OBJECT_WITH_ACTS(0,-313,610,-4198,0,0,0,0xa0000, bhvSpinAirborneWarp
,31),
OBJECT_WITH_ACTS(0,583,2683,-5387,0,-154,0,0xb0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(86,0,610,0,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,-781,610,-781,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(188,-625,905,3385,0,0,0,0x0, bhvBobomb
,31),
OBJECT_WITH_ACTS(137,-3725,1138,-519,0,0,0,0x60000, bhvExclamationBox
,31),
OBJECT_WITH_ACTS(212,-2889,690,920,0,0,0,0x0, bhv1Up
,31),
OBJECT_WITH_ACTS(0,-3273,607,-2292,0,0,0,0x110000, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(0,6539,698,-885,0,0,0,0x5020000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,-248,905,4891,0,0,0,0x5030000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,-305,1314,-2384,0,0,0,0xf10000, bhvPaintingDeathWarp
,31),
OBJECT_WITH_ACTS(0,-299,610,-4498,0,90,0,0x110000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,-246,1617,4792,0,0,0,0x320000, bhvPaintingStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,-246,1617,4792,0,0,0,0x640000, bhvPaintingDeathWarp
,31),
OBJECT_WITH_ACTS(0,6535,1514,-885,0,90,0,0x330000, bhvPaintingStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,6535,1514,-885,0,90,0,0x650000, bhvPaintingDeathWarp
,31),
RETURN()
};
const LevelScript local_warps_castle_inside_1_[] = {
WARP_NODE(50,6,1,100,0),
WARP_NODE(51,6,1,51,0),
WARP_NODE(100,6,1,100,0),
WARP_NODE(101,6,1,101,0),
WARP_NODE(17,17,1,18,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,12,0),
WARP_NODE(241,6,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,13,1,10,0),
WARP_NODE(3,14,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
