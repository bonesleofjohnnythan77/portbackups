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
#include "levels/bbh/header.h"
const LevelScript level_bitdw_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _bitdw_segment_ESegmentRomStart, _bitdw_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_cloud_floor_skybox_mio0SegmentRomStart,_cloud_floor_skybox_mio0SegmentRomEnd),
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
LOAD_MODEL_FROM_GEO(121, transparent_star_geo
),
LOAD_MODEL_FROM_GEO(122, transparent_star_geo
),
LOAD_MODEL_FROM_GEO(133, marios_winged_metal_cap_geo
),
LOAD_MODEL_FROM_GEO(134, marios_metal_cap_geo
),
LOAD_MODEL_FROM_GEO(135, marios_wing_cap_geo
),
LOAD_MODEL_FROM_GEO(136, marios_cap_geo
),
LOAD_MODEL_FROM_GEO(138, dirt_animation_geo
),
LOAD_MODEL_FROM_GEO(139, cartoon_star_geo
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
LOAD_MODEL_FROM_GEO(185, fish_geo
),
LOAD_MODEL_FROM_GEO(186, fish_shadow_geo
),
LOAD_MODEL_FROM_GEO(187, butterfly_geo
),
LOAD_MODEL_FROM_GEO(200, bowser_key_cutscene_geo
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
LOAD_MODEL_FROM_GEO(219, number_geo
),
LOAD_MODEL_FROM_GEO(224, white_puff_geo
),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_10),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_bitdw_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bitdw_1_[] = {
AREA(1,Geo_bitdw_1_0x23e1700),
TERRAIN(col_bitdw_1_0xe0d2ce0),
SET_BACKGROUND_MUSIC(0,35),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bitdw_1_),
JUMP_LINK(local_warps_bitdw_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bitdw_1_[] = {
OBJECT_WITH_ACTS(22,513,62,762,0,180,0,0xa0000, bhvWarpPipe
,31),
OBJECT_WITH_ACTS(122,2316,4466,-5932,0,-154,0,0x0, bhvStar
,31),
OBJECT_WITH_ACTS(122,2047,2804,-1296,0,-153,0,0x1000000, bhvStar
,31),
OBJECT_WITH_ACTS(122,-4248,3616,-1944,0,107,0,0x2000000, bhvStar
,31),
OBJECT_WITH_ACTS(122,5032,1129,2730,0,-151,0,0x3000000, bhvStar
,31),
OBJECT_WITH_ACTS(146,3904,-710,1377,-45,-106,0,0x40400000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(123,2371,-117,364,0,0,0,0x300000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(43,2763,544,424,0,-101,0,0x1580000, bhvGreen_Switchboard_MOP,31),
OBJECT_WITH_ACTS(146,170,2478,-3996,-30,118,0,0x5300000, bhvSpring_MOP,31),
OBJECT_WITH_ACTS(153,1383,3402,-5843,0,24,0,0x1020000, bhvSandBlock_MOP,31),
OBJECT_WITH_ACTS(123,844,2714,-4633,0,-17,0,0x50000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(242,-2589,3000,-6309,0,0,0,0x0, bhvSwitchblock_Switch_MOP,31),
OBJECT_WITH_ACTS(242,3480,625,-4062,0,0,0,0x10000, bhvSwitchblock_Switch_MOP,31),
OBJECT_WITH_ACTS(241,186,1812,-3000,0,0,0,0x20000, bhvSwitchblock_MOP,31),
OBJECT_WITH_ACTS(241,186,1912,-3300,0,0,0,0x20000, bhvSwitchblock_MOP,31),
OBJECT_WITH_ACTS(241,186,2012,-3600,0,0,0,0x20000, bhvSwitchblock_MOP,31),
OBJECT_WITH_ACTS(241,-114,2112,-3600,0,0,0,0x20000, bhvSwitchblock_MOP,31),
OBJECT_WITH_ACTS(241,-414,2212,-3600,0,0,0,0x20000, bhvSwitchblock_MOP,31),
OBJECT_WITH_ACTS(153,2557,3962,-6129,0,34,0,0x0, bhvSandBlock_MOP,31),
OBJECT_WITH_ACTS(152,-4212,3040,-4369,0,0,0,0x0, bhvShrink_Platform_MOP,31),
OBJECT_WITH_ACTS(152,-4253,3103,-3969,0,-10,0,0x0, bhvShrink_Platform_MOP,31),
OBJECT_WITH_ACTS(152,-4366,3188,-3606,0,0,0,0x0, bhvShrink_Platform_MOP,31),
OBJECT_WITH_ACTS(152,-4379,3290,-3266,0,0,0,0x0, bhvShrink_Platform_MOP,31),
OBJECT_WITH_ACTS(152,-4335,3353,-2915,0,16,0,0x0, bhvShrink_Platform_MOP,31),
OBJECT_WITH_ACTS(152,-4143,3465,-2556,0,14,0,0x0, bhvShrink_Platform_MOP,31),
OBJECT_WITH_ACTS(152,-4207,3040,-4810,0,0,0,0x0, bhvShrink_Platform_MOP,31),
OBJECT_WITH_ACTS(122,-1349,4182,-6408,0,0,0,0x4000000, bhvStar
,31),
OBJECT_WITH_ACTS(123,-3741,3249,-6205,0,0,0,0x180000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(241,-3258,3867,-5920,0,0,0,0x0, bhvSwitchblock_MOP,31),
OBJECT_WITH_ACTS(241,-2958,3867,-5920,0,0,0,0x0, bhvSwitchblock_MOP,31),
OBJECT_WITH_ACTS(241,-2658,3867,-5920,0,0,0,0x0, bhvSwitchblock_MOP,31),
OBJECT_WITH_ACTS(241,-2358,3867,-5920,0,0,0,0x0, bhvSwitchblock_MOP,31),
OBJECT_WITH_ACTS(212,-3442,1000,-5123,0,0,0,0x0, bhv1Up
,31),
OBJECT_WITH_ACTS(212,-293,3012,-6551,0,0,0,0x0, bhv1Up
,31),
OBJECT_WITH_ACTS(212,3351,2125,-852,0,0,0,0x0, bhv1Up
,31),
RETURN()
};
const LevelScript local_warps_bitdw_1_[] = {
WARP_NODE(10,16,1,1,0),
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
