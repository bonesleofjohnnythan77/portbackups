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
#include "levels/ccm/header.h"
extern u8 _ccm_segment_ESegmentRomStart[]; 
extern u8 _ccm_segment_ESegmentRomEnd[];
const LevelScript level_ccm_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _ccm_segment_7SegmentRomStart, _ccm_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _ccmSegmentRomStart, _ccmSegmentRomEnd),
LOAD_RAW(0x0E, _ccm_segment_ESegmentRomStart, _ccm_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group7_mio0SegmentRomStart,_group7_mio0SegmentRomEnd),
LOAD_RAW(12,_group7_geoSegmentRomStart,_group7_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, ccm_geo_00042C),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, ccm_geo_00045C),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, ccm_geo_000494),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, ccm_geo_0004BC),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, ccm_geo_0004E4),
LOAD_MODEL_FROM_GEO(MODEL_CCM_CABIN_DOOR,    cabin_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOW_TREE,     snow_tree_geo),
LOAD_MODEL_FROM_GEO(MODEL_CCM_ROPEWAY_LIFT,  ccm_geo_0003D0),
LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_BASE,  ccm_geo_0003F0),
LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_HEAD,  ccm_geo_00040C),
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
LOAD_MODEL_FROM_GEO(39, cabin_door_geo
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
JUMP_LINK(script_func_global_8),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_ccm_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_ccm_1_[] = {
AREA(1,Geo_ccm_1_0x12e1700),
TERRAIN(col_ccm_1_0xe045e48),
SET_BACKGROUND_MUSIC(0,8),
TERRAIN_TYPE(2),
JUMP_LINK(local_objects_ccm_1_),
JUMP_LINK(local_warps_ccm_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ccm_1_[] = {
OBJECT_WITH_ACTS(0,-1406,-800,-1042,0,0,0,0xa0000, bhvSpinAirborneWarp
,31),
OBJECT_WITH_ACTS(0,583,2683,-5387,0,-154,0,0xb0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(122,-954,1108,-1345,0,0,0,0x0, bhvStar
,31),
OBJECT_WITH_ACTS(84,-260,-997,-104,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(84,-781,-997,0,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(86,469,-457,-1406,0,0,0,0x0, bhvMrBlizzard
,63),
OBJECT_WITH_ACTS(85,260,-457,-2448,0,0,0,0x0, bhvMrBlizzard
,63),
OBJECT_WITH_ACTS(84,-625,-997,313,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(84,-1719,-1150,-1615,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(84,-417,-1150,-2083,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(84,-1719,-240,-3021,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(84,-2344,-240,-2760,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(84,-2344,-240,-1875,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(217,1459,-266,-1045,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,1728,110,-873,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(84,1667,725,-104,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(84,3515,1647,257,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(220,2739,1347,-225,0,0,0,0x10000, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(217,3533,1771,702,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,1615,3470,2708,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,677,5159,378,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,1278,7132,231,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(84,3703,2383,1250,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(84,3125,2910,2604,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(84,2135,3226,2917,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(85,625,4266,2240,0,0,0,0x0, bhvMrBlizzard
,63),
OBJECT_WITH_ACTS(84,417,4887,677,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(220,1092,6841,-58,0,0,0,0x0, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(220,-1198,521,-1927,0,0,0,0x0, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(84,-5729,-1630,1979,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(84,-4635,-1630,1354,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(84,-6688,-1630,5469,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(84,-3333,-1630,7874,0,0,0,0x0, bhvSpindrift
,95),
OBJECT_WITH_ACTS(84,-208,-1630,5469,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(84,-3177,-1630,4271,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(84,-3542,-1630,4219,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(84,-3438,-1630,4792,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(122,2083,8631,1250,0,0,0,0x1000000, bhvStar
,31),
OBJECT_WITH_ACTS(215,-469,-1814,-1354,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-1042,-833,0,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-1719,-938,-1719,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,573,-104,-2083,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-2500,0,-2344,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-1198,398,-1927,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,1458,103,-1042,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(215,-521,-1004,-2246,0,0,0,0x0, bhvRedCoin
,31),
OBJECT_WITH_ACTS(0,-1719,-729,-625,0,0,0,0x2000000, bhvHiddenRedCoinStar
,31),
OBJECT_WITH_ACTS(217,1109,6198,190,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-938,-2621,-3429,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(217,-918,-2697,-3064,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(122,-1135,-2300,-2612,0,-192,0,0x3000000, bhvStar
,31),
OBJECT_WITH_ACTS(0,-1248,-1630,4914,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(0,-5678,-1630,3642,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(0,-3780,-1623,2717,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(0,-3282,-1623,6353,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(0,-5521,-1630,5573,0,0,0,0x0, bhvHiddenStarTrigger
,31),
OBJECT_WITH_ACTS(0,-3438,-1146,4531,0,0,0,0x4000000, bhvHiddenStar
,31),
OBJECT_WITH_ACTS(122,1719,-677,2552,0,0,0,0x5000000, bhvStar
,31),
OBJECT_WITH_ACTS(0,1659,2859,2698,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,1574,-428,-2094,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(137,3333,3358,2604,0,0,0,0x60000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(120,990,8423,1458,0,0,0,0x0, bhvRecoveryHeart
,63),
RETURN()
};
const LevelScript local_warps_ccm_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,56,0),
WARP_NODE(241,26,1,106,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
