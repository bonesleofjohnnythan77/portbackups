#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/wmotr/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_wmotr_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_cannon_open,0,61080,827,191,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_cannon_open,0,3712,62796,5200,128),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,20,62131,4295,60681,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal_flying,0,62486,2100,61336,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_1up,0,62792,4899,61097,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,8192,0,57344,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,62616,4600,62136,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,2735,3140,62451,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,62486,2100,61336,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,4084,240,55,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,61906,65106,3180,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,65054,64176,4592,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,8192,0,57344,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,8192,0,57344,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_wing_cap,0,3600,63056,5440,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,8192,0,57344,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_wing_cap,0,62336,4880,61496,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,8192,0,57344,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,8192,0,57344,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,65528,1725,65398,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,3700,62826,4650,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,0,65486,2180,1900,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,39,62686,1550,2280,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,84,1710,64886,4850,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,0,2350,2300,240,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,62276,3370,61591,0),
MACRO_OBJECT_END(),
};

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  3996, -2739,  5477, /*angle*/ 0, 0, 0, /*behParam*/ 0x00520000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -2911,  3564, -3967, /*angle*/ 0, 0, 0, /*behParam*/ 0x00540000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -3258,  3359, -3946, /*angle*/ 0, 0, 0, /*behParam*/ 0x00690000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -2639,  3154, -4369, /*angle*/ 0, 0, 0, /*behParam*/ 0x007D0000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -2980,  4048, -4248, /*angle*/ 0, 0, 0, /*behParam*/ 0x00240000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -3290,  3636, -4477, /*angle*/ 0, 0, 0, /*behParam*/ 0x004D0000, /*beh*/ bhvPoleGrabbing),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -160, 1950, -470, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHiddenRedCoinStar),
    RETURN(),
};

const LevelScript level_wmotr_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _wmotr_segment_7SegmentRomStart, _wmotr_segment_7SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _cloud_floor_skybox_mio0SegmentRomStart, _cloud_floor_skybox_mio0SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _sky_mio0SegmentRomStart, _sky_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group2_mio0SegmentRomStart, _group2_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group2_geoSegmentRomStart,  _group2_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group17_mio0SegmentRomStart, _group17_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group17_geoSegmentRomStart,  _group17_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_3),
    JUMP_LINK(script_func_global_18),

    AREA(/*index*/ 1, wmotr_geo_0001F0),
MACRO_OBJECTS(local_macro_objects_wmotr_1),
WARP_NODE(1,15,1,10,0),
WARP_NODE(241,24,1,241,0),
WARP_NODE(240,6,2,56,0),
WARP_NODE(10,31,1,10,0),
OBJECT_WITH_ACTS(0,-160,1950,-470,0,0,0,0x0, bhvBowserCourseRedCoinStar
,31),
OBJECT_WITH_ACTS(0,-3290,3636,-4477,0,0,0,0x4d0000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(0,-2980,4048,-4248,0,0,0,0x240000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(0,-2639,3154,-4369,0,0,0,0x7d0000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(0,-3258,3359,-3946,0,0,0,0x690000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(0,-2911,3564,-3967,0,0,0,0x540000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(139,-3420,4606,-4900,90,20,0,0x4010000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,4273,-2002,5201,0,270,0,0xa0000, bhvAirborneWarp
,31),
        TERRAIN(/*terrainData*/ wmotr_seg7_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ 55),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SNOW),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 270, /*pos*/ -67, 1669, -16),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
