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
#include "levels/pss/header.h"
extern u8 _pss_segment_ESegmentRomStart[]; 
extern u8 _pss_segment_ESegmentRomEnd[];
#include "levels/hmc/header.h"
const LevelScript level_pss_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _hmc_segment_7SegmentRomStart, _hmc_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _hmcSegmentRomStart, _hmcSegmentRomEnd),
LOAD_RAW(0x0E, _pss_segment_ESegmentRomStart, _pss_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_HMC_WOODEN_DOOR,          wooden_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_DOOR,           metal_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_HMC_HAZY_MAZE_DOOR,       hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_PLATFORM,       hmc_geo_0005A0),
LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_ARROW_PLATFORM, hmc_geo_0005B8),
LOAD_MODEL_FROM_GEO(MODEL_HMC_ELEVATOR_PLATFORM,    hmc_geo_0005D0),
LOAD_MODEL_FROM_GEO(MODEL_HMC_ROLLING_ROCK,         hmc_geo_000548),
LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_PIECE,           hmc_geo_000570),
LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_SMALL_PIECE,     hmc_geo_000588),
LOAD_MODEL_FROM_GEO(MODEL_HMC_RED_GRILLS,           hmc_geo_000530),
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
LOAD_MODEL_FROM_GEO(29, wooden_door_geo
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
// LOAD_MODEL_FROM_DL(84,0x05002e00,4),
// LOAD_MODEL_FROM_DL(86,0x05003120,4),
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
JUMP_LINK(script_func_global_9),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_pss_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_pss_1_[] = {
AREA(1,Geo_pss_1_0x31a1700),
TERRAIN(col_pss_1_0xe010378),
SET_BACKGROUND_MUSIC(0,42),
TERRAIN_TYPE(6),
JUMP_LINK(local_objects_pss_1_),
JUMP_LINK(local_warps_pss_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_pss_1_[] = {
OBJECT_WITH_ACTS(0,-5817,12325,-4110,0,0,0,0xa0000, bhvSpinAirborneWarp
,31),
OBJECT_WITH_ACTS(0,6178,808,-3987,0,-154,0,0xb0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-5117,11127,-3514,0,-153,0,0xc0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(116,6375,-6979,3725,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,5804,-6979,4470,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,6051,-6979,4386,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,6246,-6979,4121,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,6410,-6979,3955,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,1312,-4062,3388,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,1150,-4062,3267,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,998,-4062,3115,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,890,-4062,2937,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,3066,-2864,-289,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,3175,-2864,-498,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,3207,-2864,-704,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,3085,-2864,-934,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,2853,-2864,-1129,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,2671,-2864,-1316,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,2482,-2864,-1452,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,2249,-2864,-1647,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,2068,-2864,-1834,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,6196,834,-3973,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,-3154,3177,-3454,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,-3299,3177,-3287,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,-3385,3177,-3020,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,-3419,3177,-2757,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,-3397,3177,-2445,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,-3379,3177,-2185,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,-3350,3177,-1770,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,-6103,5990,5942,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,-6073,8230,-1801,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,-6046,8334,-2060,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,-6020,8386,-2423,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,-5994,8386,-2726,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(137,6979,-10729,-4247,0,0,0,0x30000, bhvExclamationBox
,31),
OBJECT_WITH_ACTS(195,-5400,8438,-3573,0,0,0,0x70000, bhvBobombBuddy
,31),
OBJECT_WITH_ACTS(137,-6992,11250,-3713,0,0,0,0xd0000, bhvExclamationBox
,31),
OBJECT_WITH_ACTS(137,3994,625,-1927,0,0,0,0x70000, bhvExclamationBox
,31),
OBJECT_WITH_ACTS(137,6192,1042,-5400,0,0,0,0x20000, bhvExclamationBox
,31),
OBJECT_WITH_ACTS(85,6161,-10781,-4721,0,0,0,0x20000, bhvCapSwitch
,31),
OBJECT_WITH_ACTS(223,3976,-10208,-3158,0,0,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(223,5029,-9792,-449,0,0,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(223,5104,-8542,1889,0,0,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(223,6452,-6823,4242,0,0,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(223,2582,-5573,3856,0,0,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(223,776,-4010,3323,0,0,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(223,2839,-2865,-513,0,0,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(223,1392,-2865,-876,0,0,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(223,-168,-260,-3953,0,0,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(223,-3440,3177,-3621,0,0,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(223,-6450,7396,1519,0,0,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(223,-5826,7552,1587,0,0,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(223,-6005,7708,597,0,0,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(223,-6288,7917,-678,0,0,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(223,-2762,7917,-2875,0,0,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(102,-6026,6927,4393,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(102,-383,7917,-3421,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(102,-1239,7917,-3040,0,0,0,0x0, bhvChainChomp
,31),
RETURN()
};
const LevelScript local_warps_pss_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,27,1,12,0),
WARP_NODE(12,27,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,18,1,240,0),
WARP_NODE(241,18,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
