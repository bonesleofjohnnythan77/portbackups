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
#include "levels/ccm/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_ccm_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,64186,65446,1850,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,3054,62686,1790,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,63836,869,1750,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,63786,850,1900,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,3404,62668,2221,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,60482,60547,64482,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,60503,60483,62870,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb_buddy_opens_cannon,0,64316,61953,5969,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_cannon_closed,0,61921,60929,4790,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_cannon_closed,0,60491,63796,4615,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_cannon_closed,0,1090,60929,5729,128),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,65356,2900,64056,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_vertical,0,65356,3100,64056,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,3560,2100,65256,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,76,63594,1334,1678,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,64516,646,62830,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,93,64076,64648,61603,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_arrow,73,62950,60647,61443,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_wing_cap,0,5680,61136,62600,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,64186,65046,1850,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,64186,65346,1850,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,3218,62670,2013,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,65048,2500,61336,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,61058,63403,60168,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,63886,850,1600,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,63276,60361,61481,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,64236,61348,8000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,64049,62648,3452,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,4523,63385,60,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,63001,63602,62978,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_blue_coin_switch,0,4300,64308,250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,64186,10,1850,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,64186,110,1850,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_recovery_heart,0,65266,60886,62436,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,5001,65036,62916,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,64186,65146,1850,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,64186,65246,1850,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_ccm_2[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,60936,2007,65036,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,60636,2007,65036,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,60336,2007,65036,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_koopa_shell,0,59101,61436,58876,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_star_6,0,60636,1900,65368,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,59101,61036,58876,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_floor_switch_hidden_objects,270,59636,59700,58836,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,5985,3800,60256,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,6640,64516,440,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,6640,63716,1760,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,6640,63276,2620,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,60636,2314,65036,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,59066,59336,61036,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,60336,2314,65036,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,59101,60636,58311,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,59101,60836,58593,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,6225,3800,60011,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,6450,3800,59786,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,118,2960,4280,64656,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,2281,65436,63501,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,1720,65436,63316,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,3400,65336,60296,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,3143,65336,60073,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,60936,1700,65036,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,60636,1700,65036,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,6295,64736,60091,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,2008,65436,63408,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,62831,60536,210,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,60936,2314,65036,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,61176,60223,305,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,58901,59936,64653,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,62756,60536,498,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,62728,60536,778,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,284,64156,3002,62271,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,270,64506,3007,61941,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_koopa_shell,0,59101,61564,58876,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,64436,2500,62186,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,64636,2500,62186,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,64036,2500,62186,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,270,64386,3049,62556,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,60336,1700,65036,0),
MACRO_OBJECT_END(),
};

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_CCM_ROPEWAY_LIFT, /*pos*/ 531, -4430, 6426,    /*angle*/ 0,   0, 0, /*behParam*/ 0x07120000, /*beh*/ bhvPlatformOnTrack),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_PENGUIN,          /*pos*/  2650, -3735,  3970, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvSmallPenguin),
    OBJECT(/*model*/ MODEL_PENGUIN,          /*pos*/  -555,  3470, -1000, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSmallPenguin),
    OBJECT(/*model*/ MODEL_MR_BLIZZARD,      /*pos*/ -2376, -1589,  4256, /*angle*/ 0, 252, 0, /*behParam*/ 0x00010000, /*beh*/ bhvMrBlizzard),
    OBJECT(/*model*/ MODEL_MR_BLIZZARD,      /*pos*/  -394, -1589,  4878, /*angle*/ 0,  74, 0, /*behParam*/ 0x00010000, /*beh*/ bhvMrBlizzard),
    OBJECT_WITH_ACTS(/*model*/ MODEL_CCM_SNOWMAN_BASE, /*pos*/  2560,  2662, -1122, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSnowmansBottom, /*acts*/ ACT_5),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,             /*pos*/  2665, -4607,  4525, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvCcmTouchedStarSpawn, /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_PENGUIN,          /*pos*/  3450, -4700,  4550, /*angle*/ 0,   0, 0, /*behParam*/ 0x01000000, /*beh*/ bhvTuxiesMother,          /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,             /*pos*/  4200,  -927,   400, /*angle*/ 0,   0, 0, /*behParam*/ 0x03000000, /*beh*/ bhvHiddenRedCoinStar,   /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_CCM_SNOWMAN_HEAD, /*pos*/ -4230, -1169,  1813, /*angle*/ 0, 270, 0, /*behParam*/ 0x04000000, /*beh*/ bhvSnowmansHead,          /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR,             /*pos*/ -2000, -2200, -3000, /*angle*/ 0,   0, 0, /*behParam*/ 0x05000000, /*beh*/ bhvStar,                   /*acts*/ ALL_ACTS),
    RETURN(),
};

static const LevelScript script_func_local_4[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_PENGUIN, /*pos*/ -4952,  6656, -6075, /*angle*/ 0, 270, 0, /*behParam*/ 0x02000000, /*beh*/ bhvRacingPenguin,   /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT(/*model*/ MODEL_NONE,    /*pos*/ -6500, -5836, -6400, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPenguinRaceFinishLine),
    OBJECT(/*model*/ MODEL_NONE,    /*pos*/ -6393,  -716,  7503, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPenguinRaceShortcutCheck),
#ifndef VERSION_JP
    OBJECT(/*model*/ MODEL_NONE,    /*pos*/ -4943,  1321,   667, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPlaysMusicTrackWhenTouched),
#endif
    RETURN(),
};

const LevelScript level_ccm_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _ccm_segment_7SegmentRomStart, _ccm_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _snow_mio0SegmentRomStart, _snow_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _ccm_skybox_mio0SegmentRomStart, _ccm_skybox_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group7_mio0SegmentRomStart, _group7_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group7_geoSegmentRomStart,  _group7_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group16_mio0SegmentRomStart, _group16_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group16_geoSegmentRomStart,  _group16_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_8),
    JUMP_LINK(script_func_global_17),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, ccm_geo_00042C),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, ccm_geo_00045C),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, ccm_geo_000494),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, ccm_geo_0004BC),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, ccm_geo_0004E4),
    LOAD_MODEL_FROM_GEO(MODEL_CCM_CABIN_DOOR,    cabin_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOW_TREE,     snow_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CCM_ROPEWAY_LIFT,  ccm_geo_0003D0),
    LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_BASE,  ccm_geo_0003F0),
    LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_HEAD,  ccm_geo_00040C),

    AREA(/*index*/ 1, ccm_geo_00051C),
MACRO_OBJECTS(local_macro_objects_ccm_1),
WARP_NODE(241,6,1,101,0),
WARP_NODE(240,6,1,51,0),
WARP_NODE(32,5,1,31,0),
WARP_NODE(31,5,1,32,0),
WARP_NODE(30,5,2,10,0),
WARP_NODE(20,5,2,20,0),
WARP_NODE(10,5,1,10,0),
OBJECT_WITH_ACTS(0,-50,6300,-150,0,0,0,0x3000000, bhvHiddenRedCoinStar
,63),
OBJECT_WITH_ACTS(55,-4230,-1169,1813,0,270,0,0x4000000, bhvSnowmansHead
,63),
OBJECT_WITH_ACTS(0,1165,3350,-120,0,0,0,0x0, bhvFlamethrower
,63),
OBJECT_WITH_ACTS(87,3450,-4700,4550,0,0,0,0x1000000, bhvTuxiesMother
,63),
OBJECT_WITH_ACTS(0,2665,-4607,4525,0,0,0,0x0, bhvCcmTouchedStarSpawn
,63),
OBJECT_WITH_ACTS(210,2560,2662,-1122,0,0,0,0x0, bhvSnowmansBottom
,16),
OBJECT_WITH_ACTS(86,-394,-1589,4878,0,74,0,0x10000, bhvMrBlizzard
,31),
OBJECT_WITH_ACTS(86,-2376,-1589,4256,0,252,0,0x10000, bhvMrBlizzard
,31),
OBJECT_WITH_ACTS(87,-555,3470,-1000,0,0,0,0x0, bhvSmallPenguin
,31),
OBJECT_WITH_ACTS(87,2650,-3735,3970,0,0,0,0x10000, bhvSmallPenguin
,31),
OBJECT_WITH_ACTS(128,-181,3150,-1486,0,0,0,0x0, bhvCannon
,8),
OBJECT_WITH_ACTS(0,-2866,-3172,4425,0,-34,0,0x200000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,3333,-4625,-129,0,-158,0,0x1f0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-181,2918,-1486,0,0,0,0xf1e0000, bhvWarp
,55),
OBJECT_WITH_ACTS(0,-1512,3560,-2305,0,140,0,0xa0000, bhvSpinAirborneWarp
,31),
        TERRAIN(/*terrainData*/ ccm_seg7_area_1_collision),
        SHOW_DIALOG(/*index*/ 0x00, DIALOG_048),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_LEVEL_SNOW),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SNOW),
    END_AREA(),

    AREA(/*index*/ 2, ccm_geo_0005E8),
MACRO_OBJECTS(local_macro_objects_ccm_2),
WARP_NODE(241,6,1,101,0),
WARP_NODE(240,6,1,51,0),
WARP_NODE(10,5,2,10,0),
WARP_NODE(20,5,1,20,0),
OBJECT_WITH_ACTS(0,-4943,1321,667,0,0,0,0x0, bhvPlaysMusicTrackWhenTouched
,31),
OBJECT_WITH_ACTS(0,-6393,-716,7503,0,0,0,0x0, bhvPenguinRaceShortcutCheck
,31),
OBJECT_WITH_ACTS(0,-6500,-5836,-6400,0,0,0,0x0, bhvPenguinRaceFinishLine
,31),
OBJECT_WITH_ACTS(87,-4952,6656,-6075,0,270,0,0x2000000, bhvRacingPenguin
,62),
OBJECT_WITH_ACTS(0,-5836,7465,-6143,0,90,0,0xa0000, bhvAirborneWarp
,31),
        TERRAIN(/*terrainData*/ ccm_seg7_area_2_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0001, /*seq*/ SEQ_LEVEL_SLIDE),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SLIDE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 140, /*pos*/ -1512, 2560, -2305),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
