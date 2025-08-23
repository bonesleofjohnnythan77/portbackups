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
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,73,64298,63906,4633,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_mr_blizzard,0,3054,62862,2072,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,2542,2622,63822,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,59446,63796,1936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,4346,62468,400,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,60482,60877,64482,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,60503,60796,62870,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,61319,64218,1822,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_cannon_open,0,61921,60929,4790,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_cannon_open,0,60491,63796,4615,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_cannon_open,0,1090,60929,5729,128),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,135,1468,60929,4743,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_vertical,0,65356,3100,64056,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,3560,2100,65256,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,75,63594,1334,1678,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,64516,646,62830,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,92,64076,64648,61603,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_ten_coins,73,63571,63306,62631,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,191,5967,60948,64446,52),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_vertical,0,64390,62440,5919,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,64733,62162,62545,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,1345,64001,3590,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,60008,63783,63665,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_mr_blizzard,0,61719,813,63119,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,250,5570,60635,63203,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,3900,64956,64796,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,3900,65276,63796,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,61319,64192,1822,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,28,64679,64825,2046,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,258,64338,65025,2058,169),
MACRO_OBJECT_WITH_BEH_PARAM(macro_blue_coin_switch,0,3400,64716,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,3400,64896,64796,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,3400,65216,63796,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,65266,60886,62436,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,2282,61014,4132,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_1up,0,60649,64056,61533,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_ten_coins,0,63979,65331,1794,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_ccm_2[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,59698,60419,58925,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,59098,60419,58325,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,59098,60419,58625,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,59098,60419,58925,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,58798,60419,58925,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,59698,60419,58625,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,61356,2272,60986,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,6761,64222,64902,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,6961,64222,64902,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,6361,64222,64902,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,6561,64222,64902,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,59398,60419,58925,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,59398,60419,58625,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,59398,60419,58325,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,59698,60419,58325,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,58798,60419,58325,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_empty_5,0,59098,60613,58925,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,59658,6406,59393,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,42,2371,3948,64990,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,1914,440,63159,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,1985,471,63602,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,3286,118,60249,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,3045,113,60099,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,59647,6364,59393,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,6740,65200,59862,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,6463,65152,60151,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,6444,62471,6286,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,6159,62411,6070,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,64940,61590,5316,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,64901,61480,4434,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,64827,61362,3607,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,64731,61276,2846,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,65152,61269,2195,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,2490,3948,65189,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,2282,3948,64753,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,64207,2828,62423,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,64214,2765,61490,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,63137,2576,60742,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,61177,2273,60675,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,241,59747,59720,58963,18),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,58798,60419,58625,0),
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
WARP_NODE(241,5,1,241,0),
WARP_NODE(240,5,1,240,0),
WARP_NODE(12,5,1,11,0),
WARP_NODE(31,17,1,11,0),
WARP_NODE(30,5,2,20,0),
WARP_NODE(11,5,1,12,0),
WARP_NODE(10,5,1,10,0),
OBJECT_WITH_ACTS(122,2388,-4913,-2010,0,0,0,0x5000000, bhvStar
,31),
OBJECT_WITH_ACTS(0,-857,-511,2046,0,27,0,0xb0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-4219,-1111,1822,0,270,0,0xc0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(87,3450,-4700,4550,0,0,0,0x1000000, bhvTuxiesMother
,31),
OBJECT_WITH_ACTS(0,2665,-4607,4525,0,0,0,0x0, bhvCcmTouchedStarSpawn
,31),
OBJECT_WITH_ACTS(207,2560,2662,-1082,0,90,0,0x0, bhvFloorSwitchHiddenObjects
,31),
OBJECT_WITH_ACTS(0,5768,-3607,-1655,0,345,0,0xa0000, bhvFlyingWarp
,31),
OBJECT_WITH_ACTS(122,-853,150,2046,0,252,0,0x3000000, bhvStar
,31),
OBJECT_WITH_ACTS(87,-555,3470,-1000,0,0,0,0x0, bhvSmallPenguin
,31),
OBJECT_WITH_ACTS(87,2650,-3735,3970,0,0,0,0x10000, bhvSmallPenguin
,31),
OBJECT_WITH_ACTS(54,531,-4430,6426,0,0,0,0x7120000, bhvPlatformOnTrack
,31),
OBJECT_WITH_ACTS(0,5256,-3993,287,0,253,0,0xf10000, bhvDeathWarp
,31),
OBJECT_WITH_ACTS(0,5256,-3993,287,0,253,0,0xf00000, bhvAirborneStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,-181,2918,-1486,0,270,0,0xf1e0000, bhvWarp
,31),
OBJECT_WITH_ACTS(139,5581,-4591,-2379,90,351,0,0x51f0000, bhvWarp
,31),
        TERRAIN(/*terrainData*/ ccm_seg7_area_1_collision),
        SHOW_DIALOG(/*index*/ 0x00, DIALOG_048),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ 38),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SNOW),
    END_AREA(),

    AREA(/*index*/ 2, ccm_geo_0005E8),
MACRO_OBJECTS(local_macro_objects_ccm_2),
WARP_NODE(241,5,2,241,0),
WARP_NODE(240,5,1,240,0),
WARP_NODE(10,30,1,10,0),
WARP_NODE(20,5,1,30,0),
OBJECT_WITH_ACTS(145,-5753,-4713,-7477,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(122,-6111,-4520,-7477,0,180,0,0x2000000, bhvStar
,31),
OBJECT_WITH_ACTS(145,-6453,-4713,-7477,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(139,-5838,6672,-6143,90,270,0,0xa0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-6934,-5653,-6896,0,90,0,0xf10000, bhvDeathWarp
,31),
        TERRAIN(/*terrainData*/ ccm_seg7_area_2_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0001, /*seq*/ 13),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SNOW),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 140, /*pos*/ -1512, 2560, -2305),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
