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
#include "levels/bitdw/header.h"
extern u8 _bitdw_segment_ESegmentRomStart[]; 
extern u8 _bitdw_segment_ESegmentRomEnd[];
#include "levels/castle_grounds/header.h"
const LevelScript level_bitdw_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _castle_groundsSegmentRomStart, _castle_groundsSegmentRomEnd),
LOAD_RAW(0x0E, _bitdw_segment_ESegmentRomStart, _bitdw_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group11_mio0SegmentRomStart,_group11_mio0SegmentRomEnd),
LOAD_RAW(12,_group11_geoSegmentRomStart,_group11_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,           castle_grounds_geo_0006F4),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_BUBBLY_TREE,  bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE,    warp_pipe_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CASTLE_DOOR,  castle_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_METAL_DOOR,   metal_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_VCUTM_GRILL,  castle_grounds_geo_00070C),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_FLAG,         castle_grounds_geo_000660),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CANNON_GRILL, castle_grounds_geo_000724),
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
LOAD_MODEL_FROM_GEO(41, metal_door_geo
),
LOAD_MODEL_FROM_GEO(84, enemy_lakitu_geo
),
LOAD_MODEL_FROM_GEO(85, spiny_ball_geo
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
JUMP_LINK(script_func_global_12),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_bitdw_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bitdw_1_[] = {
AREA(1,Geo_bitdw_1_0x1d61700),
TERRAIN(col_bitdw_1_0xe01f680),
SET_BACKGROUND_MUSIC(0,4),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bitdw_1_),
JUMP_LINK(local_warps_bitdw_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bitdw_1_[] = {
OBJECT_WITH_ACTS(0,1663,-2862,-3475,0,0,0,0xa0000, bhvSpinAirborneWarp
,31),
OBJECT_WITH_ACTS(0,583,2683,-5387,0,-154,0,0xb0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,1667,-3086,-3959,0,0,0,0xe0000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,4134,-3086,577,0,0,0,0xa010000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,3098,-3086,3700,0,0,0,0x20000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,-8242,-1100,1260,0,0,0,0xa030000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,-2351,257,629,0,0,0,0x5040000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,6426,-3086,-3250,0,0,0,0x60000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,-7217,-3086,3005,0,0,0,0xa050000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,-2145,-3086,3171,0,0,0,0xa0000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,-1146,-3086,-312,0,0,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(0,833,-3086,1406,0,0,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(0,-365,-3086,-1615,0,0,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(212,2292,455,365,0,0,0,0x0, bhv1Up
,31),
OBJECT_WITH_ACTS(212,4427,-53,406,0,0,0,0x0, bhv1Up
,31),
OBJECT_WITH_ACTS(23,-1563,-3086,-1458,0,0,0,0x0, bhvTree
,31),
OBJECT_WITH_ACTS(23,156,-3086,-417,0,0,0,0x0, bhvTree
,31),
OBJECT_WITH_ACTS(23,-2500,-3086,-52,0,0,0,0x0, bhvTree
,31),
OBJECT_WITH_ACTS(23,-4063,-3086,1354,0,0,0,0x0, bhvTree
,31),
OBJECT_WITH_ACTS(23,-5677,-3086,52,0,0,0,0x0, bhvTree
,31),
OBJECT_WITH_ACTS(23,-7135,-1100,469,0,0,0,0x0, bhvTree
,31),
OBJECT_WITH_ACTS(23,-7240,-1100,1927,0,0,0,0x0, bhvTree
,31),
OBJECT_WITH_ACTS(23,-7917,-1100,3021,0,0,0,0x0, bhvTree
,31),
OBJECT_WITH_ACTS(217,-5304,-260,521,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(0,4170,-2247,-2468,0,0,0,0xb0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(34,3737,-3086,-2907,0,-90,0,0x28000000, bhvDoor
,31),
OBJECT_WITH_ACTS(124,3690,-3086,-2706,0,-90,0,0x1c0000, bhvMessagePanel
,31),
OBJECT_WITH_ACTS(0,4388,-2874,-2533,0,0,0,0x110000, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(0,0,0,0,0,0,0,0x0, bhvStarDoor
,31),
OBJECT_WITH_ACTS(124,6183,-3086,1580,0,-53,0,0x2d0000, bhvMessagePanel
,31),
OBJECT_WITH_ACTS(0,0,0,0,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(0,0,0,0,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(139,4148,-2257,-2469,0,270,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(0,-2156,-2865,2734,0,180,0,0x120000, bhvSpinAirborneWarp
,31),
OBJECT_WITH_ACTS(0,1600,-2411,-2000,0,0,0,0xf00000, bhvPaintingStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,1600,-2411,-2000,0,0,0,0xf10000, bhvPaintingDeathWarp
,31),
OBJECT_WITH_ACTS(0,6405,-2303,-3269,0,90,0,0x320000, bhvPaintingStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,6405,-2303,-3269,0,90,0,0x640000, bhvPaintingDeathWarp
,31),
OBJECT_WITH_ACTS(0,4025,-2455,582,0,90,0,0x330000, bhvPaintingStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,4025,-2455,582,0,90,0,0x650000, bhvPaintingDeathWarp
,31),
OBJECT_WITH_ACTS(0,3100,-2302,3697,0,20,0,0x340000, bhvPaintingStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,3100,-2302,3697,0,20,0,0x660000, bhvPaintingDeathWarp
,31),
OBJECT_WITH_ACTS(0,-7143,-2302,3023,0,-90,0,0x350000, bhvPaintingStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,-7143,-2302,3023,0,-90,0,0x670000, bhvPaintingDeathWarp
,31),
OBJECT_WITH_ACTS(0,-2699,1004,646,0,90,0,0x360000, bhvPaintingStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,-2699,1004,646,0,90,0,0x680000, bhvPaintingDeathWarp
,31),
OBJECT_WITH_ACTS(0,-8120,-255,1259,0,-90,0,0x370000, bhvPaintingStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,-8120,-255,1259,0,-90,0,0x690000, bhvPaintingDeathWarp
,31),
RETURN()
};
const LevelScript local_warps_bitdw_1_[] = {
WARP_NODE(18,17,0,18,0),
WARP_NODE(50,17,1,50,0),
WARP_NODE(51,17,1,51,0),
WARP_NODE(52,17,1,52,0),
WARP_NODE(53,17,1,53,0),
WARP_NODE(54,17,1,54,0),
WARP_NODE(55,17,1,55,0),
WARP_NODE(100,17,1,100,0),
WARP_NODE(101,17,1,101,0),
WARP_NODE(102,17,1,102,0),
WARP_NODE(103,17,1,103,0),
WARP_NODE(104,17,1,104,0),
WARP_NODE(105,17,1,105,0),
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
WARP_NODE(10,6,1,10,0),
WARP_NODE(11,31,1,10,0),
WARP_NODE(12,17,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,26,1,10,0),
WARP_NODE(240,17,1,240,0),
WARP_NODE(241,17,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,22,1,10,0),
WARP_NODE(2,8,1,10,0),
WARP_NODE(3,23,1,10,0),
WARP_NODE(4,10,1,10,0),
WARP_NODE(5,11,1,10,0),
WARP_NODE(6,36,1,10,0),
RETURN()
};
