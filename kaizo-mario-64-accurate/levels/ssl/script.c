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
#include "levels/ssl/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_ssl_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_wing_cap,0,5000,-100,-4865,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,63486,1794,64536,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,4900,50,60671,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pokey,0,4602,40,4622,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pokey,0,5057,143,256,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,63488,250,360,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pokey,0,60164,64,3083,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,5300,50,60671,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,5200,50,60671,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_tox_box,0,1283,0,60671,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,5000,175,60671,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,5300,175,60671,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_tox_box,0,1800,0,59636,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_tox_box,0,775,0,59636,1),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_wing_cap,0,6900,350,62186,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,63486,75,1500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_cannon_closed,0,6863,0,58676,192),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,5100,50,60671,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,61386,65386,62436,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,61341,65386,1090,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,2070,65336,59041,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,25,65386,65286,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,4593,65336,60668,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,5820,65336,62796,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,60013,65373,8008,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,64066,65511,1511,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_tox_box,270,2300,0,60671,1),
MACRO_OBJECT_WITH_BEH_PARAM(macro_tox_box,0,2300,0,60671,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_tox_box,270,3350,0,61691,2),
MACRO_OBJECT_WITH_BEH_PARAM(macro_tox_box,270,5895,0,59646,2),
MACRO_OBJECT_WITH_BEH_PARAM(macro_tox_box,0,65311,0,59641,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,5000,50,60671,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_tox_box,180,63236,0,60671,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_tox_box,270,2840,0,60161,2),
MACRO_OBJECT_WITH_BEH_PARAM(macro_tox_box,270,4350,0,61691,2),
MACRO_OBJECT_WITH_BEH_PARAM(macro_tox_box,270,775,0,60161,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,5750,128,5750,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,63246,787,63356,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,59786,100,64536,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,59536,100,64536,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_tox_box,180,62196,0,60671,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_metal_cap,0,5150,65436,60671,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_vanish_cap,0,5300,65436,60671,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_tox_box,0,64252,0,59641,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_tox_box,90,64252,0,60151,2),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal_flying,0,6000,614,3500,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_ssl_2[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,3263,778,3157,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,64814,4338,1231,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,61986,0,61786,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_wing_cap,0,0,900,61486,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,61898,0,1928,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_1up,0,64294,252,61579,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,1124,3495,1148,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,233,3463,1163,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,3056,736,62269,1),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,3263,652,2200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,3431,673,64163,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,90,400,500,3500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,90,65136,500,3500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_recovery_heart,0,65136,1978,63286,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,65386,700,6000,1),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,270,64786,0,3250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,270,750,0,3250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,270,0,0,3000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,1621,3478,64394,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,1621,3507,478,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,65326,4521,64542,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,150,700,6000,1),
MACRO_OBJECT_WITH_BEH_PARAM(macro_blue_coin_switch,0,0,65455,2375,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,250,20,6650,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,150,20,6650,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,50,20,6650,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,65486,20,6650,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,65386,20,6650,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,65286,20,6650,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,63614,1587,129,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,63981,1618,64843,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,1741,65336,1843,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,0,65336,528,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,63796,65336,1843,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,260,1974,64936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_vertical,0,290,4479,64596,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,0,63703,0,62798,103),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,61986,0,61786,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,0,500,64736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,700,4700,64548,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,0,5000,250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_wing_cap,0,0,298,3000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,260,3923,64936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,3279,363,3090,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,65173,1665,64863,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_recovery_heart,0,1930,0,64161,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,64534,1472,2331,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,64864,1661,2755,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,560,1637,2286,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,63571,1584,1670,0),
MACRO_OBJECT_END(),
};

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_SSL_PYRAMID_TOP, /*pos*/ -2047, 1536, -1023, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPyramidTop),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_SSL_TOX_BOX,     /*pos*/ -1284,    0, -5895, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvToxBox),
    OBJECT(/*model*/ MODEL_SSL_TOX_BOX,     /*pos*/  1283,    0, -4865, /*angle*/ 0, 0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvToxBox),
    OBJECT(/*model*/ MODEL_SSL_TOX_BOX,     /*pos*/  4873,    0, -3335, /*angle*/ 0, 0, 0, /*behParam*/ 0x00020000, /*beh*/ bhvToxBox),
    OBJECT(/*model*/ MODEL_TWEESTER,        /*pos*/ -3600, -200,  2940, /*angle*/ 0, 0, 0, /*behParam*/ 0x00120000, /*beh*/ bhvTweester),
    OBJECT_WITH_ACTS(/*model*/ MODEL_TWEESTER,        /*pos*/  1017, -200,  3832, /*angle*/ 0, 0, 0, /*behParam*/ 0x00190000, /*beh*/ bhvTweester, /*acts*/ ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_TWEESTER,        /*pos*/  3066, -200,   400, /*angle*/ 0, 0, 0, /*behParam*/ 0x00190000, /*beh*/ bhvTweester, /*acts*/ ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_KLEPTO,          /*pos*/  2200, 1174, -2820, /*angle*/ 0, 0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvKlepto,   /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_KLEPTO,          /*pos*/ -5963,  573, -4784, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvKlepto,   /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ -2050, 1200, -580, /*angle*/ 0, 0, 0, /*behParam*/ 0x01000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/  6000,  800, 3500, /*angle*/ 0, 0, 0, /*behParam*/ 0x04000000, /*beh*/ bhvHiddenRedCoinStar, /*acts*/ ALL_ACTS),
    RETURN(),
};

static const LevelScript script_func_local_4[] = {
    OBJECT(/*model*/ MODEL_NONE,                    /*pos*/  2867,  640,  2867, /*angle*/ 0,   0, 0, /*behParam*/ 0x004D0000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                    /*pos*/     0, 3200,  1331, /*angle*/ 0,   0, 0, /*behParam*/ 0x005C0000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_SSL_GRINDEL,             /*pos*/  3297,    0,    95, /*angle*/ 0,   0, 0, /*behParam*/ 0x001C0000, /*beh*/ bhvGrindel),
    OBJECT(/*model*/ MODEL_SSL_GRINDEL,             /*pos*/  -870, 3840,   105, /*angle*/ 0, 180, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHorizontalGrindel),
    OBJECT(/*model*/ MODEL_SSL_GRINDEL,             /*pos*/ -3362,    0, -1385, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHorizontalGrindel),
    OBJECT(/*model*/ MODEL_SSL_SPINDEL,             /*pos*/ -2458, 2109, -1430, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSpindel),
    OBJECT(/*model*/ MODEL_SSL_MOVING_PYRAMID_WALL, /*pos*/   858, 1927, -2307, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSslMovingPyramidWall),
    OBJECT(/*model*/ MODEL_SSL_MOVING_PYRAMID_WALL, /*pos*/   730, 1927, -2307, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvSslMovingPyramidWall),
    OBJECT(/*model*/ MODEL_SSL_MOVING_PYRAMID_WALL, /*pos*/  1473, 2567, -2307, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvSslMovingPyramidWall),
    OBJECT(/*model*/ MODEL_SSL_MOVING_PYRAMID_WALL, /*pos*/  1345, 2567, -2307, /*angle*/ 0,   0, 0, /*behParam*/ 0x00020000, /*beh*/ bhvSslMovingPyramidWall),
    OBJECT(/*model*/ MODEL_SSL_PYRAMID_ELEVATOR,    /*pos*/     0, 4966,   256, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPyramidElevator),
    OBJECT(/*model*/ MODEL_NONE,                    /*pos*/  1198, -133,  2396, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSandSoundLoop),
    OBJECT(/*model*/ MODEL_NONE,                    /*pos*/     7, 1229,  -708, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSandSoundLoop),
    OBJECT(/*model*/ MODEL_NONE,                    /*pos*/     7, 4317,  -708, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSandSoundLoop),
    RETURN(),
};

static const LevelScript script_func_local_5[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ 500, 5050, -500, /*angle*/ 0, 0, 0, /*behParam*/ 0x02000000, /*beh*/ bhvStar,        /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/ 900, 1400, 2350, /*angle*/ 0, 0, 0, /*behParam*/ 0x05040000, /*beh*/ bhvHiddenStar, /*acts*/ ALL_ACTS),
    RETURN(),
};

static const LevelScript script_func_local_6[] = {
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ 0, -1534, -3693, /*angle*/ 0, 0, 0, /*behParam*/ 0x03000000, /*beh*/ bhvEyerokBoss),
    RETURN(),
};

const LevelScript level_ssl_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _ssl_segment_7SegmentRomStart, _ssl_segment_7SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _ssl_skybox_mio0SegmentRomStart, _ssl_skybox_mio0SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _generic_mio0SegmentRomStart, _generic_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group5_mio0SegmentRomStart, _group5_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group5_geoSegmentRomStart,  _group5_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_6),
    LOAD_MODEL_FROM_GEO(MODEL_SSL_PALM_TREE,           palm_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,       ssl_geo_0005C0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,       ssl_geo_0005D8),
    LOAD_MODEL_FROM_GEO(MODEL_SSL_PYRAMID_TOP,         ssl_geo_000618),
    LOAD_MODEL_FROM_GEO(MODEL_SSL_GRINDEL,             ssl_geo_000734),
    LOAD_MODEL_FROM_GEO(MODEL_SSL_SPINDEL,             ssl_geo_000764),
    LOAD_MODEL_FROM_GEO(MODEL_SSL_MOVING_PYRAMID_WALL, ssl_geo_000794),
    LOAD_MODEL_FROM_GEO(MODEL_SSL_PYRAMID_ELEVATOR,    ssl_geo_0007AC),
    LOAD_MODEL_FROM_GEO(MODEL_SSL_TOX_BOX,             ssl_geo_000630),

    AREA(/*index*/ 1, ssl_geo_000648),
MACRO_OBJECTS(local_macro_objects_ssl_1),
WARP_NODE(241,6,3,101,0),
WARP_NODE(240,6,3,51,0),
WARP_NODE(32,8,1,31,0),
WARP_NODE(31,8,1,32,0),
WARP_NODE(30,8,2,20,128),
WARP_NODE(20,8,2,10,128),
WARP_NODE(10,8,1,10,0),
OBJECT_WITH_ACTS(0,6000,800,3500,0,0,0,0x4000000, bhvHiddenRedCoinStar
,63),
OBJECT_WITH_ACTS(122,-2047,2750,-1150,0,0,0,0x1000000, bhvStar
,63),
OBJECT_WITH_ACTS(87,-4036,1600,-2815,0,0,0,0x0, bhvKlepto
,62),
OBJECT_WITH_ACTS(87,2200,1174,-2820,0,0,0,0x10000, bhvKlepto
,1),
OBJECT_WITH_ACTS(86,3066,-200,400,0,0,0,0x190000, bhvTweester
,56),
OBJECT_WITH_ACTS(86,1017,-200,3832,0,0,0,0x190000, bhvTweester
,56),
OBJECT_WITH_ACTS(86,-3600,-200,2940,0,0,0,0x120000, bhvTweester
,31),
OBJECT_WITH_ACTS(199,4873,0,-3335,0,0,0,0x20000, bhvToxBox
,31),
OBJECT_WITH_ACTS(195,-2048,1103,-500,0,270,0,0x0, bhvBobombBuddyOpensCannon
,48),
OBJECT_WITH_ACTS(129,-2048,1100,-400,0,0,0,0x0, bhvJumpingBox
,15),
OBJECT_WITH_ACTS(58,-2047,1538,-1023,0,0,0,0x0, bhvPyramidTop
,31),
OBJECT_WITH_ACTS(0,-5943,0,-4903,0,49,0,0x200000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-2048,150,250,0,0,0,0x1f0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-2048,768,-1024,0,0,0,0xf1e0000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,-2048,50,56,0,0,0,0x140000, bhvWarp
,63),
OBJECT_WITH_ACTS(0,5000,179,-4865,0,90,0,0xa0000, bhvAirborneWarp
,31),
OBJECT_WITH_ACTS(0,5000,-50,-4865,0,180,0,0x00000, id_bhvCollisionPad
,31),
        TERRAIN(/*terrainData*/ ssl_seg7_area_1_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_LEVEL_HOT),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SAND),
    END_AREA(),

    AREA(/*index*/ 2, ssl_geo_0007CC),
MACRO_OBJECTS(local_macro_objects_ssl_2),
INSTANT_WARP(3,3,0,0,0),
WARP_NODE(241,6,3,101,0),
WARP_NODE(240,6,3,51,0),
WARP_NODE(22,8,2,21,0),
WARP_NODE(21,8,2,22,0),
WARP_NODE(20,8,2,20,0),
WARP_NODE(10,8,2,10,0),
OBJECT_WITH_ACTS(0,0,650,6450,0,180,0,0xa0000, bhvAirborneWarp
,63),
OBJECT_WITH_ACTS(0,0,896,-1500,0,0,0,0x5040000, bhvHiddenRedCoinStar
,63),
OBJECT_WITH_ACTS(122,500,5050,-500,0,0,0,0x2000000, bhvStar
,63),
OBJECT_WITH_ACTS(0,7,4317,-708,0,0,0,0x0, bhvSandSoundLoop
,31),
OBJECT_WITH_ACTS(0,7,1229,-708,0,0,0,0x0, bhvSandSoundLoop
,31),
OBJECT_WITH_ACTS(0,1198,-133,2396,0,0,0,0x0, bhvSandSoundLoop
,31),
OBJECT_WITH_ACTS(57,0,4966,256,0,0,0,0x0, bhvPyramidElevator
,31),
OBJECT_WITH_ACTS(54,-870,3840,-350,0,180,0,0x0, bhvGrindel
,31),
OBJECT_WITH_ACTS(54,-870,3840,560,0,180,0,0x0, bhvGrindel
,31),
OBJECT_WITH_ACTS(55,0,190,5400,0,0,0,0x0, bhvSpindel
,31),
OBJECT_WITH_ACTS(55,0,190,6000,0,0,0,0x0, bhvSpindel
,31),
OBJECT_WITH_ACTS(55,-2458,2109,-1430,0,0,0,0x0, bhvSpindel
,31),
OBJECT_WITH_ACTS(55,0,190,4200,0,0,0,0x0, bhvSpindel
,31),
OBJECT_WITH_ACTS(54,-870,3840,105,0,180,0,0x0, bhvGrindel
,31),
OBJECT_WITH_ACTS(55,0,190,4800,0,0,0,0x0, bhvSpindel
,31),
OBJECT_WITH_ACTS(0,0,3200,1331,0,0,0,0x5c0000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(0,2867,640,2867,0,0,0,0x4d0000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(0,2546,1150,-2647,0,78,0,0x160000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-18,-101,503,0,180,0,0x150000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,0,5500,256,0,180,0,0x140000, bhvAirborneWarp
,31),
        INSTANT_WARP(/*index*/ 3, /*destArea*/ 3, /*displace*/ 0, 0, 0),
        TERRAIN(/*terrainData*/ ssl_seg7_area_2_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0004, /*seq*/ SEQ_LEVEL_UNDERGROUND),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    AREA(/*index*/ 3, ssl_geo_00088C),
INSTANT_WARP(2,2,0,0,0),
WARP_NODE(241,6,3,101,0),
WARP_NODE(240,6,3,51,0),
OBJECT_WITH_ACTS(0,0,-1534,-3693,0,0,0,0x3000000, bhvEyerokBoss
,31),
        TERRAIN(/*terrainData*/ ssl_seg7_area_3_collision),
        INSTANT_WARP(/*index*/ 2, /*destArea*/ 2, /*displace*/ 0, 0, 0),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0004, /*seq*/ SEQ_LEVEL_UNDERGROUND),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 88, /*pos*/ 653, 38, 6566),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
