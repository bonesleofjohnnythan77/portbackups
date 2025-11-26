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
#include "levels/sl/header.h"
extern u8 _sl_segment_ESegmentRomStart[]; 
extern u8 _sl_segment_ESegmentRomEnd[];
#include "levels/wdw/header.h"
const LevelScript level_sl_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _wdw_segment_7SegmentRomStart, _wdw_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _wdwSegmentRomStart, _wdwSegmentRomEnd),
LOAD_RAW(0x0E, _sl_segment_ESegmentRomStart, _sl_segment_ESegmentRomEnd),
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
JUMP_LINK(local_area_sl_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_sl_1_[] = {
AREA(1,Geo_sl_1_0x1a41700),
TERRAIN(col_sl_1_0xe014c30),
SET_BACKGROUND_MUSIC(0,52),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_sl_1_),
JUMP_LINK(local_warps_sl_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_sl_1_[] = {
OBJECT_WITH_ACTS(0,8953,-2935,-277,0,0,0,0xa0000, bhvSpinAirborneWarp
,63),
OBJECT_WITH_ACTS(0,-8028,-3447,-5792,0,-154,0,0xb0000, bhvFadingWarp
,63),
OBJECT_WITH_ACTS(0,-7623,147,-5006,0,-153,0,0xc0000, bhvFadingWarp
,63),
OBJECT_WITH_ACTS(0,3026,-583,-612,0,107,0,0xd0000, bhvFadingWarp
,63),
OBJECT_WITH_ACTS(0,8710,-3536,-355,0,-151,0,0xe0000, bhvFadingWarp
,60),
OBJECT_WITH_ACTS(0,5876,-2447,2714,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,6455,-261,-290,0,103,0,0x1000000, bhvHiddenStar
,63),
OBJECT_WITH_ACTS(122,-8910,2082,-5766,0,103,0,0x5000000, bhvStar
,63),
OBJECT_WITH_ACTS(122,-4068,-5261,-3137,0,0,0,0x3000000, bhvStar
,63),
OBJECT_WITH_ACTS(122,-4005,3697,-3196,0,0,0,0x4000000, bhvStar
,63),
OBJECT_WITH_ACTS(122,3008,1927,-288,0,0,0,0x0, bhvStar
,63),
OBJECT_WITH_ACTS(87,-391,-3898,1476,0,0,0,0x2000000, bhvWigglerHead
,4),
OBJECT_WITH_ACTS(0,-8933,2500,-4792,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,-8890,2135,-3702,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,-8938,1770,-2079,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,-8952,1666,-1039,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,-8937,1042,1115,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,-8965,677,2678,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,-8940,313,4293,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,7438,-2760,1886,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,6031,-1875,2895,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,7762,-1458,1791,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(0,6567,-1302,2605,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(180,73,-3898,978,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(137,-5844,3907,-2004,0,0,0,0x30000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(180,287,-3898,2600,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,197,-3898,-341,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(23,-4929,5990,-2251,0,0,0,0x0, bhvTree
,63),
OBJECT_WITH_ACTS(0,-8135,-156,2321,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,2611,625,543,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(102,364,-3898,643,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-196,-3898,3464,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(180,-796,-3898,2845,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-93,-3898,1694,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-795,-3898,51,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,813,-3898,3318,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(118,6049,-1875,2883,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,6541,-1302,2598,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,5884,-2448,2693,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,7756,-1458,1800,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,7440,-2760,1909,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(0,7651,-365,997,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,6503,-2709,514,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,7431,-1302,2617,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(137,8982,-3126,867,0,0,0,0x10000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(0,-8154,-104,4247,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,-8212,-156,-3436,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(102,-874,-3898,533,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(0,-8068,1,892,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,-8116,1,-640,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,-8141,-168,-2327,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(140,7143,-3034,1182,0,0,0,0x0, bhvBlueCoinSwitch
,63),
OBJECT_WITH_ACTS(102,494,-3898,2038,0,-59,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,985,-3898,3634,0,-59,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,636,-3898,-619,0,-59,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-1042,-3898,-507,0,-59,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(102,-618,-3898,1948,0,-59,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(0,8980,-3490,-20,0,-59,0,0x40000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,3535,-573,-732,0,-91,0,0x40000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(215,8707,-3542,-359,0,31,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(0,2700,1302,1703,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(137,2188,2135,3906,0,0,0,0x60000, bhvExclamationBox
,63),
RETURN()
};
const LevelScript local_warps_sl_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,10,1,14,0),
WARP_NODE(14,10,1,13,0),
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
