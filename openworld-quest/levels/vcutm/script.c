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
#include "levels/vcutm/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_vcutm_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,4268,813,61060,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,4268,813,60830,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,4268,813,60590,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,4505,813,61060,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,4505,813,60830,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,4505,813,60590,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,4767,813,60830,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,59393,6559,59393,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,4772,813,60590,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,4764,813,61060,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wing_cap_switch,0,60845,5734,59350,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,63436,62260,20,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,63156,63079,59078,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_1up,0,63391,63376,59573,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_star_1,0,4529,370,60716,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_wing_cap,0,4521,1400,60825,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,6143,6143,6143,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,6143,6143,6143,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,6143,6143,6143,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,6143,6143,6143,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,6143,6143,6143,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,6143,6143,6143,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,63796,62296,1580,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,63136,62296,600,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,63796,62296,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,63136,62296,64457,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,6143,6143,6143,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,6143,6143,6143,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_koopa_shell,0,63486,62556,64686,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,6143,6143,6143,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,6143,6143,6143,0),
MACRO_OBJECT_END(),
};

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_VCUTM_SEESAW_PLATFORM, /*pos*/   154, -1919, -6256, /*angle*/ 0, 270, 0, /*behParam*/ 0x00070000, /*beh*/ bhvSeesawPlatform),
    OBJECT(/*model*/ MODEL_VCUTM_SEESAW_PLATFORM, /*pos*/ -2047, -3378, -2047, /*angle*/ 0,   0, 0, /*behParam*/ 0x00070000, /*beh*/ bhvSeesawPlatform),
    //! @bug invalid model IDs - model ID 0x37 isn't loaded
    OBJECT(/*model*/ MODEL_VCUTM_CHECKERBOARD_PLATFORM_SPAWNER,           /*pos*/  3251, -1082, -6256, /*angle*/ 0, 270, 0, /*behParam*/ 0x014B0000, /*beh*/ bhvCheckerboardElevatorGroup),
    OBJECT(/*model*/ MODEL_VCUTM_CHECKERBOARD_PLATFORM_SPAWNER,           /*pos*/  2355, -1901, -6256, /*angle*/ 0, 270, 0, /*behParam*/ 0x014B0000, /*beh*/ bhvCheckerboardElevatorGroup),
    OBJECT(/*model*/ MODEL_VCUTM_CHECKERBOARD_PLATFORM_SPAWNER,           /*pos*/  1459, -1594, -6256, /*angle*/ 0,  90, 0, /*behParam*/ 0x014B0000, /*beh*/ bhvCheckerboardElevatorGroup),
    OBJECT(/*model*/ MODEL_VCUTM_CHECKERBOARD_PLATFORM_SPAWNER,           /*pos*/ -1151, -2413, -6256, /*angle*/ 0, 270, 0, /*behParam*/ 0x014B0000, /*beh*/ bhvCheckerboardElevatorGroup),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_CAP_SWITCH, /*pos*/ 4506,  26, -6246, /*angle*/ 0, 0, 0, /*behParam*/ 0x00020000, /*beh*/ bhvCapSwitch),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT(/*model*/ MODEL_NONE,       /*pos*/ 4600, 250, -4500, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHiddenRedCoinStar),
    RETURN(),
};

const LevelScript level_vcutm_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _outside_mio0SegmentRomStart, _outside_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x07, _vcutm_segment_7SegmentRomStart, _vcutm_segment_7SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group8_mio0SegmentRomStart, _group8_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group8_geoSegmentRomStart,  _group8_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_9),
    LOAD_MODEL_FROM_GEO(MODEL_VCUTM_SEESAW_PLATFORM, vcutm_geo_0001F0),
    LOAD_MODEL_FROM_GEO(MODEL_VCUTM_WARP_PIPE,       warp_pipe_geo),

    AREA(/*index*/ 1, vcutm_geo_000208),
MACRO_OBJECTS(local_macro_objects_vcutm_1),
WARP_NODE(241,18,1,10,0),
WARP_NODE(240,17,1,13,0),
WARP_NODE(243,4,1,10,0),
WARP_NODE(10,7,1,11,0),
OBJECT_WITH_ACTS(0,-5016,-2723,1208,0,0,0,0xf10000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(55,-1151,-2413,-6256,0,270,0,0x14b0000, bhvCheckerboardElevatorGroup,31),
OBJECT_WITH_ACTS(55,1459,-1594,-6256,0,90,0,0x14b0000, bhvCheckerboardElevatorGroup,31),
OBJECT_WITH_ACTS(55,2355,-1901,-6256,0,270,0,0x14b0000, bhvCheckerboardElevatorGroup,31),
OBJECT_WITH_ACTS(55,3251,-1082,-6256,0,270,0,0x14b0000, bhvCheckerboardElevatorGroup,31),
OBJECT_WITH_ACTS(207,6143,6243,6040,90,0,180,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(54,154,-1919,-6256,0,270,0,0x70000, bhvSeesawPlatform,31),
OBJECT_WITH_ACTS(22,4511,26,-6248,0,270,0,0xf00000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-6200,-3276,1230,0,90,0,0xa0000, bhvWarpPipe,31),
        TERRAIN(/*terrainData*/ vcutm_seg7_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ 50),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 0, /*pos*/ -6143, 5734, -6143),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
