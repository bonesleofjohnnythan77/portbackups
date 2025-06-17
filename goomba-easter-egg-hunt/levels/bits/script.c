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
#include "areas/2/custom.model.inc.h"
#include "levels/bits/header.h"
extern u8 _bits_segment_ESegmentRomStart[]; 
extern u8 _bits_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_bits_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _bits_segment_ESegmentRomStart, _bits_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bits_skybox_mio0SegmentRomStart,_bits_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_BBH_HAUNTED_DOOR,           haunted_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_BBH_STAIRCASE_STEP,         geo_bbh_0005B0),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TILTING_FLOOR_PLATFORM, geo_bbh_0005C8),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM,      geo_bbh_0005E0),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM_PART, geo_bbh_0005F8),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MOVING_BOOKSHELF,       geo_bbh_000610),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MESH_ELEVATOR,          geo_bbh_000628),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MERRY_GO_ROUND,         geo_bbh_000640),
LOAD_MODEL_FROM_GEO(MODEL_BBH_WOODEN_TOMB,            geo_bbh_000658),
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
LOAD_MODEL_FROM_GEO(29, haunted_door_geo
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
// LOAD_MODEL_FROM_DL(39,0x005f8560,4),
// LOAD_MODEL_FROM_DL(40,0x005f9ac0,4),
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
LOAD_MODEL_FROM_GEO(122, transparent_star_geo
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
JUMP_LINK(script_func_global_10),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_bits_1_),
JUMP_LINK(local_area_bits_2_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bits_1_[] = {
AREA(1,Geo_bits_1_0x2961700),
TERRAIN(col_bits_1_0xe02ce00),
SET_BACKGROUND_MUSIC(0,57),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bits_1_),
JUMP_LINK(local_warps_bits_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bits_1_[] = {
OBJECT_WITH_ACTS(0,1863,2202,5078,0,-93,0,0xa0000, bhvSpinAirborneWarp
,31),
OBJECT_WITH_ACTS(122,-2810,1840,-6926,0,-154,0,0x0, bhvStar
,31),
OBJECT_WITH_ACTS(122,614,5228,7004,0,-153,0,0x1000000, bhvStar
,31),
OBJECT_WITH_ACTS(122,-4373,3561,3759,0,107,0,0x2000000, bhvStar
,31),
OBJECT_WITH_ACTS(212,3150,2926,4169,0,-151,0,0x0, bhv1Up
,31),
OBJECT_WITH_ACTS(84,-6437,847,-1069,0,0,0,0x0, bhvCourtyardBooTriplet
,31),
OBJECT_WITH_ACTS(84,-99,792,2843,0,0,0,0x0, bhvCourtyardBooTriplet
,31),
OBJECT_WITH_ACTS(84,-1044,2248,6776,0,0,0,0x0, bhvCourtyardBooTriplet
,31),
OBJECT_WITH_ACTS(84,-4553,1481,-6200,0,0,0,0x0, bhvCourtyardBooTriplet
,31),
OBJECT_WITH_ACTS(84,-5728,1257,4344,0,0,0,0x0, bhvCourtyardBooTriplet
,31),
OBJECT_WITH_ACTS(84,-2735,760,1730,0,0,0,0x0, bhvCourtyardBooTriplet
,31),
OBJECT_WITH_ACTS(146,-7573,2904,6121,-30,73,0,0x30300000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(123,-3825,3971,7030,0,0,0,0x300000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(180,-4807,884,-1445,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,-2379,1460,-2058,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,-1353,1871,-1869,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,-549,2569,-1104,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,-601,2689,-612,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,-1671,2821,-38,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(84,-846,774,1336,0,0,0,0x0, bhvCourtyardBooTriplet
,31),
OBJECT_WITH_ACTS(84,28,1239,4452,0,0,0,0x0, bhvCourtyardBooTriplet
,31),
OBJECT_WITH_ACTS(84,-4519,601,1186,0,0,0,0x0, bhvCourtyardBooTriplet
,31),
OBJECT_WITH_ACTS(84,-2383,935,3964,0,0,0,0x0, bhvCourtyardBooTriplet
,31),
OBJECT_WITH_ACTS(84,-6613,762,2629,0,0,0,0x0, bhvCourtyardBooTriplet
,31),
OBJECT_WITH_ACTS(212,-7860,1412,2092,0,0,0,0x0, bhv1Up
,31),
RETURN()
};
const LevelScript local_warps_bits_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,16,1,241,0),
WARP_NODE(241,16,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
const LevelScript local_area_bits_2_[] = {
AREA(2,Geo_bits_2_0x2961600),
TERRAIN(col_bits_2_0xe078ff8),
SET_BACKGROUND_MUSIC(0,58),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bits_2_),
JUMP_LINK(local_warps_bits_2_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bits_2_[] = {
OBJECT_WITH_ACTS(0,882,642,673,0,0,0,0xa0000, bhvSpinAirborneWarp
,31),
OBJECT_WITH_ACTS(122,-334,88,-7815,0,0,0,0x3000000, bhvStar
,31),
OBJECT_WITH_ACTS(122,-20460,2768,2231,0,0,0,0x4000000, bhvStar
,31),
OBJECT_WITH_ACTS(122,-16871,6402,3755,0,0,0,0x5000000, bhvStar
,31),
OBJECT_WITH_ACTS(146,-2419,2993,4818,-30,-127,0,0x650000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(146,-2396,2763,-994,-30,155,0,0x700000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(180,-2714,2554,-2394,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(146,-6101,3195,2577,-30,274,0,0x60e00000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(146,-1334,3167,-4068,-30,357,0,0xd00000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(153,812,848,5835,0,0,0,0x0, bhvSandBlock_MOP,31),
OBJECT_WITH_ACTS(153,-2353,848,1996,0,0,0,0x0, bhvSandBlock_MOP,31),
OBJECT_WITH_ACTS(153,158,1230,6037,0,0,0,0x0, bhvSandBlock_MOP,31),
OBJECT_WITH_ACTS(153,-673,848,5613,0,0,0,0x0, bhvSandBlock_MOP,31),
OBJECT_WITH_ACTS(153,-800,848,4835,0,0,0,0x0, bhvSandBlock_MOP,31),
OBJECT_WITH_ACTS(153,-869,848,3942,0,0,0,0x0, bhvSandBlock_MOP,31),
OBJECT_WITH_ACTS(153,-864,848,3184,0,0,0,0x0, bhvSandBlock_MOP,31),
OBJECT_WITH_ACTS(153,-1086,848,2499,0,0,0,0x0, bhvSandBlock_MOP,31),
OBJECT_WITH_ACTS(153,-1805,848,2228,0,0,0,0x0, bhvSandBlock_MOP,31),
OBJECT_WITH_ACTS(123,-3940,282,-5749,0,0,0,0x400000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(212,-11701,3486,971,0,0,0,0x0, bhv1Up
,31),
OBJECT_WITH_ACTS(194,-8910,3408,2499,0,0,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(194,-13937,3470,2160,0,0,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(194,-10557,3255,2170,0,0,0,0x0, bhvHomingAmp
,31),
OBJECT_WITH_ACTS(194,-8695,3493,2884,0,0,0,0x0, bhvCirclingAmp
,31),
OBJECT_WITH_ACTS(194,-12683,3380,2375,0,0,0,0x0, bhvCirclingAmp
,31),
OBJECT_WITH_ACTS(194,-11453,3338,2927,0,0,0,0x0, bhvCirclingAmp
,31),
OBJECT_WITH_ACTS(194,-14761,3430,2248,0,0,0,0x0, bhvCirclingAmp
,31),
OBJECT_WITH_ACTS(194,-15991,3345,2291,0,0,0,0x0, bhvCirclingAmp
,31),
OBJECT_WITH_ACTS(194,-18663,2780,2291,0,0,0,0x0, bhvCirclingAmp
,31),
OBJECT_WITH_ACTS(180,-3309,1042,1951,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,-4284,972,2206,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,-3775,712,3478,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,-3733,567,339,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,-4199,652,-1188,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(206,-1637,-29,-8037,0,0,0,0x0, bhvSnufit
,31),
OBJECT_WITH_ACTS(206,-2522,466,-5832,0,0,0,0x0, bhvSnufit
,31),
OBJECT_WITH_ACTS(206,-5435,414,-5896,0,0,0,0x0, bhvSnufit
,31),
OBJECT_WITH_ACTS(122,-3958,1948,-8171,0,0,0,0x6000000, bhvStar
,31),
OBJECT_WITH_ACTS(212,-4228,1203,5639,0,0,0,0x0, bhv1Up
,31),
OBJECT_WITH_ACTS(212,-889,2576,-1577,0,0,0,0x0, bhv1Up
,31),
RETURN()
};
const LevelScript local_warps_bits_2_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,16,1,241,0),
WARP_NODE(241,16,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
