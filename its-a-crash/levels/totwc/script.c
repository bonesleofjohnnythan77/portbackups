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
#include "levels/totwc/header.h"
extern u8 _totwc_segment_ESegmentRomStart[]; 
extern u8 _totwc_segment_ESegmentRomEnd[];
#include "levels/castle_grounds/header.h"
const LevelScript level_totwc_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _castle_groundsSegmentRomStart, _castle_groundsSegmentRomEnd),
LOAD_RAW(0x0E, _totwc_segment_ESegmentRomStart, _totwc_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_cloud_floor_skybox_mio0SegmentRomStart,_cloud_floor_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
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
LOAD_MODEL_FROM_GEO(41, metal_door_geo
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
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_totwc_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_totwc_1_[] = {
AREA(1,Geo_totwc_1_0x3461700),
TERRAIN(col_totwc_1_0xe03b900),
SET_BACKGROUND_MUSIC(0,9),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_totwc_1_),
JUMP_LINK(local_warps_totwc_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_totwc_1_[] = {
OBJECT_WITH_ACTS(0,-4143,-6799,1124,0,105,0,0xa0000, bhvSpinAirborneWarp
,31),
OBJECT_WITH_ACTS(116,1842,5355,436,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(0,-340,-6041,-1253,0,195,0,0xc0000, bhvFlyingWarp
,31),
OBJECT_WITH_ACTS(0,-358,-1457,1340,0,345,0,0xd0000, bhvFlyingWarp
,31),
OBJECT_WITH_ACTS(0,0,3302,1303,0,180,0,0xf0000, bhvFlyingWarp
,31),
OBJECT_WITH_ACTS(85,0,3445,0,0,0,0,0x0, bhvCapSwitch
,31),
OBJECT_WITH_ACTS(31,-967,-1449,-90,0,285,0,0x0, bhvDoor
,31),
OBJECT_WITH_ACTS(31,-877,-1449,239,0,285,0,0x100000, bhvDoorWarp
,31),
OBJECT_WITH_ACTS(31,-787,-1449,565,0,285,0,0x0, bhvDoor
,31),
OBJECT_WITH_ACTS(31,300,-4895,582,0,45,0,0x0, bhvDoor
,31),
OBJECT_WITH_ACTS(31,590,-4895,302,0,45,0,0xe0000, bhvDoorWarp
,31),
OBJECT_WITH_ACTS(31,-693,-7762,409,0,285,0,0x0, bhvDoor
,31),
OBJECT_WITH_ACTS(31,-807,-7762,-3,0,285,0,0xb0000, bhvDoorWarp
,31),
OBJECT_WITH_ACTS(122,6771,9138,-5123,0,0,0,0x0, bhvStar
,31),
OBJECT_WITH_ACTS(206,1780,-5216,-1476,0,0,0,0x0, bhvSnufit
,31),
OBJECT_WITH_ACTS(206,-8583,3825,22,0,0,0,0x0, bhvSnufit
,31),
OBJECT_WITH_ACTS(206,-1016,8402,-616,0,0,0,0x0, bhvSnufit
,31),
OBJECT_WITH_ACTS(122,1842,5378,429,0,0,0,0x1000000, bhvStar
,31),
OBJECT_WITH_ACTS(206,6570,9099,-4283,0,0,0,0x0, bhvSnufit
,31),
OBJECT_WITH_ACTS(206,1033,8376,-598,0,0,0,0x0, bhvSnufit
,31),
OBJECT_WITH_ACTS(206,-1990,-1115,1165,0,0,0,0x0, bhvSnufit
,31),
OBJECT_WITH_ACTS(206,2343,-5003,-187,0,0,0,0x0, bhvSnufit
,31),
OBJECT_WITH_ACTS(206,887,-5430,-2195,0,0,0,0x0, bhvSnufit
,31),
OBJECT_WITH_ACTS(206,1247,3630,155,0,0,0,0x0, bhvSnufit
,31),
OBJECT_WITH_ACTS(206,-1185,3630,-320,0,0,0,0x0, bhvSnufit
,31),
OBJECT_WITH_ACTS(206,855,3630,-854,0,0,0,0x0, bhvSnufit
,31),
OBJECT_WITH_ACTS(116,2150,-5120,651,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,2112,-5351,-802,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,1601,-5569,-1599,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,570,-5807,-2189,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(201,-8369,3470,-464,0,0,0,0x0, bhvCannonClosed
,31),
OBJECT_WITH_ACTS(195,-7644,3471,-948,0,0,0,0x0, bhvBobombBuddyOpensCannon
,31),
OBJECT_WITH_ACTS(124,-1748,-7757,906,0,247,0,0x830000, bhvMessagePanel
,31),
OBJECT_WITH_ACTS(124,-9234,3479,-411,0,53,0,0x820000, bhvMessagePanel
,31),
OBJECT_WITH_ACTS(137,-378,3715,-1126,0,0,0,0x0, bhvExclamationBox
,31),
OBJECT_WITH_ACTS(137,-7810,3825,-320,0,0,0,0x0, bhvExclamationBox
,31),
OBJECT_WITH_ACTS(124,-1808,-1449,59,0,337,0,0x120000, bhvMessagePanel
,31),
OBJECT_WITH_ACTS(124,976,-4895,1516,0,95,0,0xa60000, bhvMessagePanel
,31),
RETURN()
};
const LevelScript local_warps_totwc_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,29,1,12,0),
WARP_NODE(12,29,1,11,0),
WARP_NODE(13,29,1,14,0),
WARP_NODE(14,29,1,13,0),
WARP_NODE(240,16,1,240,0),
WARP_NODE(241,16,1,241,0),
WARP_NODE(15,29,1,16,0),
WARP_NODE(16,29,1,15,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
