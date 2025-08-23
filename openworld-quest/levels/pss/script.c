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
#include "levels/pss/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_pss_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,62303,4688,59936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,59900,4331,60482,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,59556,3453,945,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,62666,2837,2300,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,3930,274,2425,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,5174,61,3200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,5707,65408,4565,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,5194,65226,5845,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,3640,64993,6450,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,2550,64836,6050,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,63051,62361,59251,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,65516,62994,59232,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,64339,62607,60844,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,62971,62268,62011,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,60627,61903,61318,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,59246,61599,62991,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,65,3316,6140,59467,42),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,1000,5810,59896,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_metal_cap_switch,0,59170,63509,5735,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,60793,62171,62970,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,60793,62471,63270,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,1880,64096,60,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,63051,62361,59551,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,63051,62366,59851,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,63536,62836,60506,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,64136,63136,60506,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,64736,63436,60506,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,65336,63736,60506,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_arrow,270,3631,6144,59905,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_arrow,0,59166,63509,1434,4),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,260,2580,2280,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,90,63051,62366,60151,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,60793,62771,63570,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,60793,63071,63870,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,59136,61390,64946,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,59136,61201,1409,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_floor_switch_hidden_objects,0,63051,62670,59251,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_arrow,0,59170,63509,3248,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_arrow,0,59170,63509,65286,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,1854,63404,61246,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_star_1,0,370,64456,60506,0),
MACRO_OBJECT_END(),
};

const LevelScript level_pss_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _pss_segment_7SegmentRomStart, _pss_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _mountain_mio0SegmentRomStart, _mountain_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group8_mio0SegmentRomStart, _group8_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group8_geoSegmentRomStart,  _group8_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_9),

    AREA(/*index*/ 1, pss_geo_000100),
MACRO_OBJECTS(local_macro_objects_pss_1),
WARP_NODE(241,9,1,14,0),
WARP_NODE(240,9,1,13,0),
WARP_NODE(243,25,1,240,0),
WARP_NODE(10,27,1,10,0),
OBJECT_WITH_ACTS(0,5632,6751,-5631,0,270,0,0xa0000, bhvAirborneWarp
,31),
        TERRAIN(/*terrainData*/ pss_seg7_collision),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SLIDE),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0001, /*seq*/ 39),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 270, /*pos*/ 5632, 6451, -5631),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
