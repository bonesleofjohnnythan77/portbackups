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
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,6068,51,2800,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,5535,51,3377,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up_2,0,4302,1883,5199,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pokey,0,4602,40,4622,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pokey,0,5668,202,575,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pokey,0,-6858,8,-3711,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pokey,0,-5372,64,3083,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_vertical,0,6070,18446,-1990,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_no_coins,0,5900,51,2311,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb_buddy_opens_cannon,0,-5990,0,-3871,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,59667,1200,63001,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,59640,1200,773,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,1800,1200,800,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,1805,1200,63000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_wing_cap,0,6900,350,60136,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_wing_cap,0,62536,500,800,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_cannon_closed,0,6863,0,58676,192),
MACRO_OBJECT_WITH_BEH_PARAM(macro_tox_box,0,64252,0,59641,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,4872,0,59637,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,63489,1150,65055,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,61027,526,64605,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,63489,1797,64513,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,3380,10,60636,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,5881,0,60667,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,62206,10,59159,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,5900,70,2311,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_koopa_shell,0,5840,940,2500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_wing_cap,0,5860,940,4180,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,0,5702,614,2974,16),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,0,62276,256,800,32),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,59536,600,60736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,65286,0,4200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_tox_box,0,4873,0,62201,2),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,4302,542,5199,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_tox_box,0,1283,0,60671,1),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,59616,200,64616,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,4302,2140,5199,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,-2290,787,-2180,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,1015,534,2059,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,-4509,219,-931,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,6070,18113,-2650,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,6730,18113,-1990,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,5757,230,5761,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,6070,17383,-1990,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_1up_running_away,0,64336,500,800,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,0,5130,26,65166,157),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_ssl_2[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,-625,782,-1700,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,270,2196,640,-3329,43),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_1up,0,-3536,252,-3705,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fake_star,90,-625,1410,-1700,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_empty_282,0,-625,1166,-1700,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_1up,0,-1242,252,-3957,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pokey_copy,0,1773,-101,-2663,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,1200,0,-3495,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,3056,736,-3267,1),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,3263,652,2200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,3431,673,-1373,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal_flying,90,-2,1774,2794,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal_flying,0,2694,850,-2889,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_recovery_heart,0,-400,1978,-2250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,736,2652,-2250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,736,2546,-2250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,1368,3263,-2250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,1368,3135,-2250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,1621,3368,-1142,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,1621,3389,478,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,-210,4521,-994,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,63436,0,3316,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_blue_coin_switch,0,64817,0,4772,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_vertical,0,0,4202,256,17),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pokey,0,495,65435,1556,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pokey,0,63512,65435,64711,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,2064,65455,63635,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,2569,65455,63514,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,2698,65455,63001,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,2698,65455,62487,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up,0,1940,65455,64176,4),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,63676,3184,842,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,64911,1353,63836,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,63596,1229,64936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,63596,1229,2320,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_vertical,0,290,4479,64596,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,0,61976,0,61471,103),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,260,3913,64936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,65276,2950,64936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,260,1977,64936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,63676,3184,118,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_blue_coin_switch,0,63511,1280,2678,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,63676,3150,462,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba_triplet_spawner,0,3181,0,3587,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,62186,980,64296,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,2870,1050,62896,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,63489,1664,3076,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,63489,1536,2870,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,63696,1357,3076,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,63696,1408,2870,0),
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
OBJECT_WITH_ACTS(0,6000,800,3500,0,0,0,0x4000000, bhvHiddenRedCoinStar,63),
OBJECT_WITH_ACTS(122,6070,17947,-1990,0,145,0,0x1000000, bhvStar,63),
OBJECT_WITH_ACTS(27,4302,68,5199,0,0,0,0xff0000, bhvPoleGrabbing,63),
OBJECT_WITH_ACTS(27,1015,0,2059,0,0,0,0x0, bhvTree,63),
OBJECT_WITH_ACTS(57,-3621,410,-920,0,0,0,0x0, bhvPyramidElevator,145),
OBJECT_WITH_ACTS(56,-2087,147,531,0,90,315,0x30000, bhvSslMovingPyramidWall,3),
OBJECT_WITH_ACTS(137,-3803,385,-917,0,90,0,0x80000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(199,3325,0,-5380,90,90,0,0x20000, bhvToxBox,31),
OBJECT_WITH_ACTS(57,6398,21949,-2321,0,0,0,0x0, bhvPyramidElevator,31),
OBJECT_WITH_ACTS(220,-6334,78,-1307,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(58,-2047,1536,-1023,0,0,0,0x0, bhvPyramidTop,31),
OBJECT_WITH_ACTS(0,6506,22016,-2354,0,49,0,0x200000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,945,34,2083,0,159,0,0x1f0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-2048,768,-1024,0,0,0,0xf1e0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-2048,0,56,0,0,0,0x140000, bhvWarp,31),
OBJECT_WITH_ACTS(0,525,841,6480,0,90,0,0xa0000, bhvSpinAirborneWarp,31),
        TERRAIN(/*terrainData*/ ssl_seg7_area_1_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ 0x08),
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
OBJECT_WITH_ACTS(122,-1550,3309,-526,0,90,0,0x5000000, bhvStar,32),
OBJECT_WITH_ACTS(122,500,5050,-500,0,0,0,0x2000000, bhvStar,63),
OBJECT_WITH_ACTS(56,250,750,-1175,0,0,270,0x20000, bhvSslMovingPyramidWall,32),
OBJECT_WITH_ACTS(56,250,255,-563,0,0,270,0x0, bhvSslMovingPyramidWall,32),
OBJECT_WITH_ACTS(58,-1953,2816,1520,180,0,0,0x0, bhvPyramidTop,32),
OBJECT_WITH_ACTS(57,0,4966,256,0,0,0,0x0, bhvPyramidElevator,31),
OBJECT_WITH_ACTS(56,1345,2567,-2307,0,0,0,0x20000, bhvSslMovingPyramidWall,31),
OBJECT_WITH_ACTS(56,1473,2567,-2307,0,0,0,0x10000, bhvSslMovingPyramidWall,31),
OBJECT_WITH_ACTS(55,-10,180,3322,0,0,0,0x0, bhvSpindel,31),
OBJECT_WITH_ACTS(56,858,1927,-2307,0,0,0,0x0, bhvSslMovingPyramidWall,31),
OBJECT_WITH_ACTS(55,-2458,2109,-1430,0,0,0,0x0, bhvSpindel,31),
OBJECT_WITH_ACTS(58,-2210,2816,497,180,0,0,0x0, bhvPyramidTop,32),
OBJECT_WITH_ACTS(58,-1700,2816,-526,180,0,0,0x0, bhvPyramidTop,32),
OBJECT_WITH_ACTS(54,3297,0,95,0,0,0,0x0, bhvGrindel,31),
OBJECT_WITH_ACTS(0,0,3200,1331,0,0,0,0x5c0000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,2867,640,2867,0,0,0,0x4d0000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,-625,1150,-1700,0,0,0,0x160000, bhvFadingWarp,32),
OBJECT_WITH_ACTS(0,-1713,3089,1277,0,180,0,0x150000, bhvFadingWarp,32),
OBJECT_WITH_ACTS(0,0,5500,256,0,180,0,0x140000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(0,0,300,6451,0,180,0,0xa0000, bhvAirborneWarp,31),
        INSTANT_WARP(/*index*/ 3, /*destArea*/ 3, /*displace*/ 0, 0, 0),
        TERRAIN(/*terrainData*/ ssl_seg7_area_2_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0004, /*seq*/ SEQ_LEVEL_UNDERGROUND),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    AREA(/*index*/ 3, ssl_geo_00088C),
INSTANT_WARP(2,2,0,0,0),
WARP_NODE(241,6,3,101,0),
WARP_NODE(240,6,3,51,0),
OBJECT_WITH_ACTS(0,0,-1534,-3693,0,0,0,0x3000000, bhvEyerokBoss,31),
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
