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
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,180,63124,2912,64658,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_mr_blizzard,0,3054,62862,2072,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,2542,2622,63822,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,59446,63796,1936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,4346,62468,400,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,60482,60877,64482,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,60503,60796,62870,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bouncing_fireball,0,3789,61953,1762,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,61921,60929,4790,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,60491,63796,4615,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,1090,60929,5729,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,270,64476,2560,63696,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,65356,3100,64056,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,3560,2100,65256,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,76,63594,1334,1678,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,90,64516,646,62830,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,93,64076,64648,61603,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,73,62950,60647,61443,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,270,61186,60672,60723,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,64499,61953,5872,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,180,65227,60647,61846,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,1900,64001,3500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,63715,3100,65228,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,65510,65065,61688,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,60336,64191,2995,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,2940,63823,2630,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,63872,1058,565,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,60060,63684,61065,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,3269,60936,65484,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,2366,62069,3673,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_blue_coin_switch,0,3400,64716,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,3400,64896,64796,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_no_coins,0,63827,61831,6206,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_recovery_heart,0,65266,60886,62436,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,4637,63226,65381,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_three_coins,0,60649,64236,61533,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_three_coins,0,63979,65331,1794,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_ccm_2[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,2255,4091,65000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,2055,4352,65039,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,1843,4486,65103,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,1603,4567,65189,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,1397,4530,65249,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,60216,6656,58996,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,60556,2180,63556,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,6640,65476,64736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,6640,64516,440,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,6516,62708,5842,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,6640,63068,2620,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,2542,62097,6212,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,59076,59996,61436,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,2991,425,61799,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_1up,0,59936,61036,58892,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_moving_blue_coin,0,62376,6267,59416,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,64836,5923,59296,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,2260,5342,59096,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,118,61675,2516,60797,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,1900,659,63196,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,1720,690,63316,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,3400,302,60296,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,4941,297,59314,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,6120,4435,60516,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,5553,108,59599,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,6638,65336,60422,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,3960,62239,6440,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,1400,61976,5840,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,6612,62927,3757,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,6807,64478,64356,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,451,927,64200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,64656,61554,3720,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,64741,61435,1570,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,450,3676,65264,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,64416,3293,64396,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,62944,1573,64357,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,63796,2926,61756,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,62687,2677,60928,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,60916,2353,61416,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up_sliding,0,60646,1452,552,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up_sliding,0,59167,63998,3726,0),
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
OBJECT_WITH_ACTS(122,599,-1888,-3397,0,0,0,0x5000000, bhvStar
,63),
OBJECT_WITH_ACTS(55,-4230,-1169,1813,0,270,0,0x4000000, bhvSnowmansHead
,63),
OBJECT_WITH_ACTS(0,3668,-1604,1348,0,0,0,0x3000000, bhvHiddenRedCoinStar
,63),
OBJECT_WITH_ACTS(87,-1210,-3583,6142,0,0,0,0x1000000, bhvTuxiesMother
,63),
OBJECT_WITH_ACTS(0,2665,-4607,4525,0,0,0,0x0, bhvCcmTouchedStarSpawn
,63),
OBJECT_WITH_ACTS(210,2560,2662,-1122,0,0,0,0x0, bhvSnowmansBottom
,16),
OBJECT_WITH_ACTS(223,-394,-1589,4878,0,74,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(223,-2376,-1589,4256,0,252,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(87,5647,-4607,-2954,0,0,0,0x0, bhvSmallPenguin
,31),
OBJECT_WITH_ACTS(87,969,3072,-1024,0,0,0,0x10000, bhvSmallPenguin
,31),
OBJECT_WITH_ACTS(129,-2841,-3076,6321,0,0,0,0x0, bhvBreakableBox
,31),
OBJECT_WITH_ACTS(223,3349,-4694,-183,0,-34,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(129,-2379,-3592,6256,0,-158,0,0x0, bhvBreakableBox
,31),
OBJECT_WITH_ACTS(0,-181,2918,-1486,0,0,0,0xf1e0000, bhvWarp
,31),
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
