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
#include "levels/tm8house/header.h"
extern u8 _tm8house_segment_ESegmentRomStart[]; 
extern u8 _tm8house_segment_ESegmentRomEnd[];
const LevelScript level_tm8house_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _tm8house_segment_7SegmentRomStart, _tm8house_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _tm8houseSegmentRomStart, _tm8houseSegmentRomEnd),
LOAD_RAW(0x0E, _tm8house_segment_ESegmentRomStart, _tm8house_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group3_mio0SegmentRomStart,_group3_mio0SegmentRomEnd),
LOAD_RAW(12,_group3_geoSegmentRomStart,_group3_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_4),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_tm8house_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_tm8house_1_[] = {
AREA(1,Geo_tm8house_1_0x1661700),
TERRAIN(col_tm8house_1_0xe018788),
SET_BACKGROUND_MUSIC(0,3),
TERRAIN_TYPE(0),
MACRO_OBJECTS(local_macro_objects_tm8house_1_),
JUMP_LINK(local_objects_tm8house_1_),
JUMP_LINK(local_warps_tm8house_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_tm8house_1_[] = {
OBJECT_WITH_ACTS(0,0,4096,0,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,583,2683,-5387,0,-154,0,0xb0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(22,-823,-215,1785,0,0,0,0x70000, bhvWarpPipe,31),
RETURN()
};


//fuck bparams im putting these with macros

static const MacroObject local_macro_objects_tm8house_1_[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_wing_cap,45,5380,1328,874,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_vanish_cap,45,5694,1328,1196,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_metal_cap,45,5164,1328,627,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_koopa_shell,0,-687,705,-3256,0),
MACRO_OBJECT_END(),
};

const LevelScript local_warps_tm8house_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,6,1,100,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
WARP_NODE(7,16,1,10,0),
RETURN()
};
