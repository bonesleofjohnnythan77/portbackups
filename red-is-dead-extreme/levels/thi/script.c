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
#include "levels/thi/header.h"
extern u8 _thi_segment_ESegmentRomStart[]; 
extern u8 _thi_segment_ESegmentRomEnd[];
#include "levels/wdw/header.h"
const LevelScript level_thi_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _wdw_segment_7SegmentRomStart, _wdw_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _wdwSegmentRomStart, _wdwSegmentRomEnd),
LOAD_RAW(0x0E, _thi_segment_ESegmentRomStart, _thi_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group11_mio0SegmentRomStart,_group11_mio0SegmentRomEnd),
LOAD_RAW(12,_group11_geoSegmentRomStart,_group11_geoSegmentRomEnd),
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
// LOAD_MODEL_FROM_GEO(88,0x0500c778),
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
JUMP_LINK(script_func_global_12),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_thi_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_thi_1_[] = {
AREA(1,Geo_thi_1_0x1e61700),
TERRAIN(col_thi_1_0xe0766d0),
SET_BACKGROUND_MUSIC(0,35),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_thi_1_),
JUMP_LINK(local_warps_thi_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_thi_1_[] = {
OBJECT_WITH_ACTS(0,-7803,554,9850,0,0,0,0xa0000, bhvSpinAirborneWarp
,63),
OBJECT_WITH_ACTS(0,-9040,-1432,9614,0,-154,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,-9124,-1478,-9688,0,-153,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,9683,-1476,-9669,0,107,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,9780,-1368,9770,0,-151,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(140,-8370,200,9773,0,0,0,0x0, bhvBlueCoinSwitch
,63),
OBJECT_WITH_ACTS(118,-8890,200,8418,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-8905,200,8835,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-8919,200,9251,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-8936,200,9720,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-8880,209,8290,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-8894,209,8591,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-8914,209,9079,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-8919,209,9476,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-8875,209,8105,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(223,9797,-324,-114,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,610,-324,-9682,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,9737,-324,-8050,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,9648,-324,-3044,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,9598,-324,5880,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,9701,-324,9646,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,-5530,-625,9623,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,-6667,-724,9793,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,-8785,200,9775,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,-9107,200,8219,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,-8900,200,-1920,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,-8858,200,-3920,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,-9203,200,-8695,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(180,-6829,2969,7740,0,-92,0,0x0, bhvFireSpitter
,62),
OBJECT_WITH_ACTS(122,7249,2448,293,0,-182,0,0x5000000, bhvStar
,62),
OBJECT_WITH_ACTS(122,-7391,2709,-6536,0,0,0,0x4000000, bhvStar
,62),
OBJECT_WITH_ACTS(122,7957,2188,-6324,0,0,0,0x3000000, bhvStar
,62),
OBJECT_WITH_ACTS(122,-9512,-2396,8793,0,0,0,0x2000000, bhvStar
,62),
OBJECT_WITH_ACTS(122,5826,1250,4699,0,85,0,0x1000000, bhvStar
,62),
OBJECT_WITH_ACTS(0,632,-1094,-248,0,0,0,0x0, bhvHiddenStar
,63),
OBJECT_WITH_ACTS(194,-1846,2917,7660,0,0,0,0x0, bhvHomingAmp
,62),
OBJECT_WITH_ACTS(194,-4852,2916,7766,0,0,0,0x0, bhvHomingAmp
,62),
OBJECT_WITH_ACTS(194,-6351,2917,4820,0,0,0,0x0, bhvHomingAmp
,62),
OBJECT_WITH_ACTS(194,-6288,2916,1792,0,0,0,0x0, bhvHomingAmp
,62),
OBJECT_WITH_ACTS(194,-7181,2917,14,0,0,0,0x0, bhvHomingAmp
,62),
OBJECT_WITH_ACTS(194,1330,3021,7623,0,0,0,0x0, bhvHomingAmp
,62),
OBJECT_WITH_ACTS(194,-2333,2239,-2482,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-2349,2239,-3367,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-2567,1146,-2853,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,5217,1146,-6835,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,3681,1146,-4260,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,260,1146,2604,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-7818,2917,3010,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(137,-7808,-312,9675,0,-86,0,0x30000, bhvExclamationBox
,1),
OBJECT_WITH_ACTS(223,-2494,-312,9664,0,-86,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,1903,-312,9614,0,-86,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,6812,-312,9675,0,-86,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,8467,156,-9701,0,-86,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,-4248,156,-9674,0,-86,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,-8678,156,-9676,0,-86,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(180,-6154,2969,-4552,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-7058,2969,-6553,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-5486,2969,-7807,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-2912,2969,-7219,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-3142,2969,-4866,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,252,2969,-4672,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,475,2969,-7233,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,4668,2969,-8057,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,3233,2969,-5870,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,6871,2969,-6154,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,5389,2969,-3809,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,1994,2969,-2544,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-1040,2969,-2855,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-4263,2969,-2638,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-6754,2969,-2343,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-7819,2969,-12,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-5594,2969,-455,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-2159,2969,-575,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,351,2969,-350,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,2851,2969,-385,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,4954,2969,-1344,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,6886,2969,256,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,4543,2969,1797,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,1104,2969,1813,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-880,2969,1726,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-3227,2969,1651,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-5622,2969,1735,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-7766,2969,3008,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-6089,2969,4774,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-3278,2969,4676,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-512,2969,4788,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,2414,2969,4998,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,7159,2969,3582,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,5390,2969,5155,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,5390,2969,5155,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,5947,2969,7689,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,3133,2969,7683,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,318,2969,7677,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-2340,2969,7666,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-5309,2969,7717,0,-86,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(194,-7182,2917,7783,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-7318,2917,-6544,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-4964,2917,-7773,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-2025,2917,-7198,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-882,2917,-2808,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-2568,2917,-4834,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-3793,2917,-2602,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-5790,2917,-4565,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-6704,2917,-2397,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-5126,2917,-471,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-2629,2917,-611,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,1831,2917,1735,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,2254,2917,-2553,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,1033,2917,-4699,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,1202,2917,-7311,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,3651,2917,-5833,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,5346,2917,-8029,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,7289,2917,-6116,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,7289,2917,-6116,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,5285,2917,-3805,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,5945,2917,-1327,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,3424,2917,-405,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,7775,2917,329,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,4959,2917,1782,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,7783,2917,3560,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,6468,2917,7671,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,3914,2917,7656,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,5858,2917,5138,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,3248,2917,5021,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,269,2917,4760,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-2808,2917,4711,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-7818,2917,3010,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-4228,2917,1676,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-1311,2917,1726,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-248,2917,-373,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(102,-3786,-1250,-1657,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(116,-2828,-1302,-2133,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(0,-2828,-1302,-2133,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(116,-1690,-1302,1325,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(0,-1690,-1302,1325,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(102,1487,-1296,-6257,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-2511,-1296,-3644,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-5552,-1193,-3953,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-7215,-1296,-4561,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-6576,-1296,-759,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-5533,-1296,672,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-5367,-1209,3324,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-5643,-1296,6999,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-345,-1296,5781,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,2870,-1296,4330,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,7491,-1296,6521,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-305,-1250,-900,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,771,-1296,2506,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-2873,-1296,1933,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(116,-2496,-1250,2871,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(0,-2496,-1250,2871,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,2303,-1250,-1040,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(116,2303,-1250,-1040,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,1136,-1250,-4959,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(0,1136,-1250,-4959,0,0,0,0x0, bhvHiddenStarTrigger
,63),
RETURN()
};
const LevelScript local_warps_thi_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,240,0),
WARP_NODE(241,6,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
