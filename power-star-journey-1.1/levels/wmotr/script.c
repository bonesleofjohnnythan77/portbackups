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
#include "levels/wmotr/header.h"
extern u8 _wmotr_segment_ESegmentRomStart[]; 
extern u8 _wmotr_segment_ESegmentRomEnd[];
#include "levels/castle_grounds/header.h"
const LevelScript level_wmotr_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _castle_groundsSegmentRomStart, _castle_groundsSegmentRomEnd),
LOAD_RAW(0x0E, _wmotr_segment_ESegmentRomStart, _wmotr_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom44400320_skybox_mio0SegmentRomStart,_SkyboxCustom44400320_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group11_mio0SegmentRomStart,_group11_mio0SegmentRomEnd),
LOAD_RAW(12,_group11_geoSegmentRomStart,_group11_geoSegmentRomEnd),
LOAD_MIO0(6,_group15_mio0SegmentRomStart,_group15_mio0SegmentRomEnd),
LOAD_RAW(13,_group15_geoSegmentRomStart,_group15_geoSegmentRomEnd),
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
LOAD_MODEL_FROM_GEO(87, enemy_lakitu_geo
),
LOAD_MODEL_FROM_GEO(88, spiny_ball_geo
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
JUMP_LINK(script_func_global_16),
JUMP_LINK(local_area_wmotr_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_wmotr_1_[] = {
AREA(1,Geo_wmotr_1_0x29a1700),
TERRAIN(col_wmotr_1_0xe00ab98),
SET_BACKGROUND_MUSIC(0,44),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_wmotr_1_),
JUMP_LINK(local_warps_wmotr_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wmotr_1_[] = {
OBJECT_WITH_ACTS(0,4635,-1164,-6077,0,0,0,0xa0000, bhvSpinAirborneWarp
,31),
OBJECT_WITH_ACTS(0,583,2683,-5387,0,-154,0,0xb0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-2756,6938,1400,0,119,0,0x320e0000, bhvWarp
,31),
OBJECT_WITH_ACTS(217,-5365,3467,225,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(201,-5342,3774,-13,0,0,0,0x0, bhvCannonClosed
,31),
OBJECT_WITH_ACTS(195,-6563,2936,1771,0,0,0,0x0, bhvBobombBuddyOpensCannon
,31),
OBJECT_WITH_ACTS(217,-2599,-1402,-58,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(217,-2600,-660,1144,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(217,-3574,756,1823,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(217,-4688,1667,1823,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(217,-5781,2344,1667,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(221,1146,-1797,1114,0,-176,0,0x93000000, bhvToadMessage
,31),
OBJECT_WITH_ACTS(217,-5093,3467,33,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(217,-5590,3467,33,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(217,-5365,3467,-231,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(34,48,-1796,-517,0,-270,0,0x50000000, bhvDoor
,31),
OBJECT_WITH_ACTS(34,51,-1796,-669,0,91,0,0x50000000, bhvDoor
,31),
OBJECT_WITH_ACTS(221,-1198,-1797,-469,0,87,0,0x6000000, bhvToadMessage
,31),
OBJECT_WITH_ACTS(221,2292,-1797,-1250,0,142,0,0xf000000, bhvToadMessage
,31),
OBJECT_WITH_ACTS(221,-5365,3566,573,0,0,0,0x24000000, bhvToadMessage
,31),
OBJECT_WITH_ACTS(0,3212,-854,677,0,0,0,0xb0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(212,3212,526,677,0,0,0,0x0, bhv1Up
,31),
OBJECT_WITH_ACTS(217,4063,-1510,-521,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(124,75,-1796,-823,0,90,0,0x1d0000, bhvMessagePanel
,31),
OBJECT_WITH_ACTS(34,50,-1560,-720,0,90,90,0x50000000, bhvDoor
,31),
OBJECT_WITH_ACTS(0,3077,-853,780,0,0,0,0xb0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,3320,-853,448,0,0,0,0xb0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,3063,-853,553,0,0,0,0xb0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,3317,-853,900,0,0,0,0xb0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,3581,-853,666,0,0,0,0xb0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,3376,-853,681,0,0,0,0xb0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,3290,290,637,0,305,0,0x10000, bhvLaunchStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,3290,290,637,0,305,0,0x20000, bhvLaunchDeathWarp
,31),
OBJECT_WITH_ACTS(0,-2763,7115,1403,0,61,0,0x30000, bhvLaunchDeathWarp
,31),
OBJECT_WITH_ACTS(0,3786,-1021,-2966,0,0,0,0xf10000, bhvPaintingDeathWarp
,31),
RETURN()
};
const LevelScript local_warps_wmotr_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,15,1,10,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,27,1,10,0),
WARP_NODE(240,31,1,240,0),
WARP_NODE(241,31,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,31,1,1,0),
WARP_NODE(2,31,1,2,0),
WARP_NODE(3,31,1,3,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
