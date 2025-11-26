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
#include "levels/bitfs/header.h"
extern u8 _bitfs_segment_ESegmentRomStart[]; 
extern u8 _bitfs_segment_ESegmentRomEnd[];
#include "levels/bitdw/header.h"
const LevelScript level_bitfs_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bitdw_segment_7SegmentRomStart, _bitdw_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bitdwSegmentRomStart, _bitdwSegmentRomEnd),
LOAD_RAW(0x0E, _bitfs_segment_ESegmentRomStart, _bitfs_segment_ESegmentRomEnd),
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
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,       geo_bitdw_0003C0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,       geo_bitdw_0003D8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,       geo_bitdw_0003F0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,       geo_bitdw_000408),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,       geo_bitdw_000420),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,       geo_bitdw_000438),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,       geo_bitdw_000450),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,       geo_bitdw_000468),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,       geo_bitdw_000480),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,       geo_bitdw_000498),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,       geo_bitdw_0004B0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,       geo_bitdw_0004C8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,       geo_bitdw_0004E0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10,       geo_bitdw_0004F8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,       geo_bitdw_000510),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_WARP_PIPE,         warp_pipe_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_SQUARE_PLATFORM,   geo_bitdw_000558),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_SEESAW_PLATFORM,   geo_bitdw_000540),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_SLIDING_PLATFORM,  geo_bitdw_000528),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_FERRIS_WHEEL_AXLE, geo_bitdw_000570),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_BLUE_PLATFORM,     geo_bitdw_000588),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME4,  geo_bitdw_0005A0),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME3,  geo_bitdw_0005B8),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME2,  geo_bitdw_0005D0),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME1,  geo_bitdw_0005E8),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE,         geo_bitdw_000600),
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
JUMP_LINK(local_area_bitfs_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bitfs_1_[] = {
AREA(1,Geo_bitfs_1_0x26a1700),
TERRAIN(col_bitfs_1_0xe01fce8),
SET_BACKGROUND_MUSIC(0,56),
TERRAIN_TYPE(3),
JUMP_LINK(local_objects_bitfs_1_),
JUMP_LINK(local_warps_bitfs_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bitfs_1_[] = {
OBJECT_WITH_ACTS(0,4277,-6581,11036,0,0,0,0xa0000, bhvSpinAirborneWarp
,31),
OBJECT_WITH_ACTS(194,8532,5131,-13845,0,-154,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(194,8946,6960,-9339,0,-153,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(137,-5714,-6875,-10897,0,0,0,0x30000, bhvExclamationBox
,31),
OBJECT_WITH_ACTS(194,-6175,-7136,-10749,0,0,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(223,-5491,-8071,-11054,0,-92,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(223,-5370,-8162,-5415,0,-92,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(223,-5470,-8162,-9062,0,-92,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(223,-4964,-8162,-3518,0,0,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(223,-4236,-8162,-1870,0,0,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(223,-164,-8162,-1899,0,0,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(102,4789,-6927,-3120,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(102,4953,-6927,-2105,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(102,3655,-6927,-1239,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(102,2420,-6927,-2170,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(102,2238,-6927,-3459,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(102,3224,-6927,-2809,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(102,4225,-6927,-2424,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(102,2905,-6927,-1712,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(102,4532,-6927,-1362,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(194,2561,-6979,-1779,-92,2,-5,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(194,3136,-6979,-1761,-92,2,-5,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(194,3607,-6979,-1756,-92,2,-5,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(194,4027,-6979,-1757,-92,2,-5,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(129,5015,-6979,-820,0,0,0,0x0, bhvJumpingBox
,31),
OBJECT_WITH_ACTS(194,4734,-6771,3587,0,0,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(194,3830,-6615,4089,0,0,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(194,3354,-6406,4637,0,0,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(194,3407,-6250,5099,0,0,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(102,5066,-6842,3361,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(102,4450,-6744,3981,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(102,3469,-8473,3156,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(102,2480,-8473,3156,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(102,4264,-7556,6792,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(102,3639,-7556,7469,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(194,3273,-7187,9011,0,0,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(194,3793,-7187,9029,0,0,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(194,4522,-7187,9055,0,0,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(194,4764,-7187,9584,0,0,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(194,4137,-7187,9615,0,0,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(194,3513,-7187,9593,0,0,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(194,3498,-7031,10009,0,0,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(194,4136,-7083,10017,0,0,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(194,4871,-7239,10070,0,0,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(22,3759,6875,-6530,0,0,0,0x30000, bhvWarpPipe
,31),
OBJECT_WITH_ACTS(137,5336,-6563,-3821,0,0,0,0x30000, bhvExclamationBox
,31),
OBJECT_WITH_ACTS(86,8218,6563,-11862,0,179,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,9083,6563,-12183,0,179,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(194,9204,6407,-10688,0,179,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(194,7726,6407,-12685,0,179,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(194,8172,6251,-14522,0,179,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(0,5090,-5834,4678,0,179,0,0x2000000, bhvHiddenStar
,31),
OBJECT_WITH_ACTS(122,6811,6563,-6444,0,269,0,0x4000000, bhvStar
,31),
OBJECT_WITH_ACTS(122,-9601,-7135,-8035,0,179,0,0x0, bhvStar
,31),
OBJECT_WITH_ACTS(223,-9587,-7135,-8802,0,93,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(223,-9558,-7241,-11851,0,-1,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(223,-8321,-7200,-11653,0,-93,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(223,-7718,-7187,-10721,0,-1,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(86,5243,6927,-6275,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,6067,6927,-6896,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,6981,6927,-6294,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,7739,6927,-6819,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,8359,6927,-6363,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,8865,6927,-6976,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,8973,6927,-8486,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,8992,6927,-9746,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,8556,8802,-12714,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,8294,8385,-11594,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,4467,6979,-6820,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(137,8931,9115,-14523,0,0,0,0x70000, bhvExclamationBox
,31),
OBJECT_WITH_ACTS(137,8831,8542,-13187,0,0,0,0x60000, bhvExclamationBox
,31),
OBJECT_WITH_ACTS(0,3829,-8229,2927,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(0,3164,-8125,2400,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(0,3516,-7760,2646,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(0,3824,-7500,3000,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(0,3062,-7448,2282,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(194,7103,6042,-13907,0,0,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(194,7910,5833,-13001,0,0,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(194,8224,8854,-12510,0,0,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(194,8733,8594,-11150,0,0,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(194,8907,6979,-8497,0,0,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(194,8596,6979,-6474,0,0,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(194,7357,6979,-6562,0,0,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(194,5612,6979,-6487,0,0,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(194,5612,6563,-6487,0,0,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(194,3558,6563,-6540,0,0,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(194,4327,6563,-6549,0,0,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(194,4327,7188,-6549,0,0,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(194,6373,7188,-6632,0,0,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(102,6373,6615,-6632,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(102,5279,6615,-6684,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(102,4151,6615,-6564,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(102,4151,7083,-6564,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(102,5142,7083,-6564,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(102,6442,7083,-6632,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(102,7378,7083,-6681,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(102,8418,7083,-6736,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(102,7710,8438,-11475,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(102,8862,8438,-11643,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(102,9331,8958,-12789,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(102,8758,8958,-12789,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(102,8966,6510,-12112,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(102,9120,6510,-10606,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(102,8041,6510,-10353,0,0,0,0x0, bhvChainChomp
,31),
RETURN()
};
const LevelScript local_warps_bitfs_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,19,1,12,0),
WARP_NODE(12,19,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,240,0),
WARP_NODE(241,26,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,33,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
