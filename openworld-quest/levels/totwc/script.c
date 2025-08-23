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
#include "levels/totwc/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_totwc_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,0,63194,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,90,0,58511,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,0,0,58511,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,0,0,58511,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,90,0,58511,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,0,58511,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,0,58511,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,0,58511,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,0,58511,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,0,58511,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,0,58511,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,0,58511,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,0,58511,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,0,58511,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,0,58511,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,0,58511,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,0,58511,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,0,58511,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,0,58511,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,0,58511,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,0,58511,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,0,58511,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,0,58511,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,0,58511,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,0,58511,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,0,58511,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,0,58511,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,270,65293,63491,65533,0),
MACRO_OBJECT_END(),
};

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_CAP_SWITCH, /*pos*/   0, -2047, 10, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvCapSwitch),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_NONE,       /*pos*/ 800, -1700,  0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHiddenRedCoinStar),
    RETURN(),
};

const LevelScript level_totwc_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _totwc_segment_7SegmentRomStart, _totwc_segment_7SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _cloud_floor_skybox_mio0SegmentRomStart, _cloud_floor_skybox_mio0SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _sky_mio0SegmentRomStart, _sky_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group8_mio0SegmentRomStart, _group8_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group8_geoSegmentRomStart,  _group8_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_9),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, totwc_geo_000160),

    AREA(/*index*/ 1, totwc_geo_000188),
MACRO_OBJECTS(local_macro_objects_totwc_1),
WARP_NODE(241,29,1,241,0),
WARP_NODE(240,9,1,11,0),
WARP_NODE(243,21,1,10,0),
WARP_NODE(10,29,1,10,0),
OBJECT_WITH_ACTS(139,-50,-2030,0,90,90,0,0xf00000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,2000,-2100,0,0,90,0,0xf10000, bhvLaunchDeathWarp
,31),
OBJECT_WITH_ACTS(0,-995,-1450,0,0,90,0,0xa0000, bhvFlyingWarp
,31),
        TERRAIN(/*terrainData*/ totwc_seg7_collision),
        SHOW_DIALOG(/*index*/ 0x00, DIALOG_131),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ 24),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 90, /*pos*/ -4095, 2935, 0),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
