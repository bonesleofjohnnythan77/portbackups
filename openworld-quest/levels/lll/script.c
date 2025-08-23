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
#include "levels/lll/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_lll_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,315,62486,200,63496,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,60436,0,250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,45,58886,200,4570,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,61136,0,1000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,3840,1860,59905,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,60436,0,1750,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,315,58916,200,58886,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,59736,0,1000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,329,63128,154,6095,74),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bouncing_fireball_copy,270,500,2,5600,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bouncing_fireball_copy,90,65036,2,5000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bouncing_fireball_copy,270,500,2,4500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bouncing_fireball_copy,0,62296,2,60682,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bouncing_fireball_copy,0,4921,2,64032,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bouncing_fireball_copy,315,5423,2,63545,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bouncing_fireball_copy,315,5996,2,65146,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,5600,676,5206,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,5200,676,5606,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,4800,676,6006,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,4400,676,6406,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,4000,676,6806,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,0,200,1200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1200,200,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,64336,200,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,0,154,64336,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_recovery_heart,0,3840,384,59362,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,7160,320,1400,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,62345,373,3477,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,6673,154,62476,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_vertical,0,558,307,60682,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,5600,650,5206,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,5200,650,5606,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,4800,650,6006,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,4400,650,6406,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,4000,650,6806,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,60417,371,61441,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_cannon_closed,0,62337,293,3456,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb_buddy_opens_cannon,0,1209,154,5880,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,2954,402,6580,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,0,154,5151,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,6568,1281,4610,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,6292,1281,4610,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,6012,1281,4610,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bully,0,60406,307,63873,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_blue_coin_switch,0,0,309,63486,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bully,0,60417,307,63054,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bully,0,0,307,3720,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_vertical,0,64976,307,60682,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_vertical,0,558,307,61667,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_vertical,0,64976,307,61667,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_koopa_shell,0,1210,460,6242,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_lll_2[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,64581,102,64507,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,510,82,64071,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,1087,82,63821,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,1043,3867,62857,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,1413,4152,63346,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,2840,249,65076,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,2800,449,460,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bully,0,1300,1029,2300,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bully,0,64576,2442,62926,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,2180,775,1720,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,180,269,1539,2644,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,65064,1203,2648,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,64156,102,1640,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,63501,1678,1493,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,63307,1863,889,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bully,0,63148,1981,361,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,62916,2089,65256,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,63895,1720,767,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,1786,3242,1452,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,63472,1907,65255,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,417,2369,583,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,1078,4170,63266,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bully,0,64157,1613,2304,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bully,90,63909,2442,63453,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bouncing_fireball,22,740,0,63696,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bouncing_fireball,225,1420,0,63816,0),
MACRO_OBJECT_END(),
};

// Unlike most levels, level geometry objects in LLL are defined as regular objects instead of terrain objects.
static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_03, /*pos*/  3840,   0, -5631, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_04, /*pos*/  4992,   0,  -639, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_05, /*pos*/  7168,   0,  1408, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_06, /*pos*/     0,   0,  3712, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_07, /*pos*/ -3199,   0,  3456, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_08, /*pos*/ -5119,   0, -2047, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_0A, /*pos*/     0,   0,     0, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_0B, /*pos*/     0,   0,  6272, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_0C, /*pos*/  5632,   0,  1408, /*angle*/ 0, 270, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_0C, /*pos*/  2048,   0,  3456, /*angle*/ 0, 180, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_0C, /*pos*/ -4607,   0,  3456, /*angle*/ 0, 270, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_0C, /*pos*/ -5119,   0,  -511, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_0D, /*pos*/     0,   0, -2047, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    // This behavior differs from the rest in that it actually has collision rather than being purely visual.
    // A likely explanation is that this object was added in after the collision model was made, and they didn't want
    // to redo the collision so they just added a new behavior for it.
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_0E, /*pos*/ -5115, 300, -3200, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllHexagonalMesh),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_LLL_DRAWBRIDGE_PART,                /*pos*/ -1919,  307,  3648, /*angle*/ 0,  0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllDrawbridgeSpawner),
    OBJECT(/*model*/ MODEL_LLL_ROTATING_BLOCK_FIRE_BARS,       /*pos*/ -5119,  307, -4095, /*angle*/ 0,  0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllRotatingBlockWithFireBars),
    OBJECT(/*model*/ MODEL_LLL_ROTATING_HEXAGONAL_RING,        /*pos*/     0,    0,     0, /*angle*/ 0,  0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllRotatingHexagonalRing),
    OBJECT(/*model*/ MODEL_LLL_SINKING_RECTANGULAR_PLATFORM,   /*pos*/  3968,    0,  1408, /*angle*/ 0, 90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllSinkingRectangularPlatform),
    OBJECT(/*model*/ MODEL_LLL_SINKING_RECTANGULAR_PLATFORM,   /*pos*/ -5759,    0,  3072, /*angle*/ 0,  0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllSinkingRectangularPlatform),
    OBJECT(/*model*/ MODEL_LLL_SINKING_RECTANGULAR_PLATFORM,   /*pos*/  2816,    0,   512, /*angle*/ 0, 90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllSinkingRectangularPlatform),
    OBJECT(/*model*/ MODEL_LLL_SINKING_RECTANGULAR_PLATFORM,   /*pos*/ -1791,    0, -4095, /*angle*/ 0, 90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllSinkingRectangularPlatform),
    OBJECT(/*model*/ MODEL_LLL_SINKING_SQUARE_PLATFORMS,       /*pos*/  3840,    0, -3199, /*angle*/ 0,  0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllSinkingSquarePlatforms),
    OBJECT(/*model*/ MODEL_LLL_TILTING_SQUARE_PLATFORM,        /*pos*/   922, -153,  2150, /*angle*/ 0,  0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllTiltingInvertedPyramid),
    OBJECT(/*model*/ MODEL_LLL_TILTING_SQUARE_PLATFORM,        /*pos*/  1741, -153,  1741, /*angle*/ 0,  0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllTiltingInvertedPyramid),
    OBJECT(/*model*/ MODEL_LLL_TILTING_SQUARE_PLATFORM,        /*pos*/  1741, -153,  2560, /*angle*/ 0,  0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllTiltingInvertedPyramid),
    OBJECT(/*model*/ MODEL_LLL_TILTING_SQUARE_PLATFORM,        /*pos*/  2099, -153,  -306, /*angle*/ 0,  0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllTiltingInvertedPyramid),
    OBJECT(/*model*/ MODEL_NONE,                               /*pos*/ -5119,  102,  1024, /*angle*/ 0,  0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllBowserPuzzle),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT(/*model*/ MODEL_LLL_MOVING_OCTAGONAL_MESH_PLATFORM, /*pos*/  1124,    0, -4607, /*angle*/ 0,  0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllMovingOctagonalMeshPlatform),
    OBJECT(/*model*/ MODEL_LLL_MOVING_OCTAGONAL_MESH_PLATFORM, /*pos*/  7168,    0,  2432, /*angle*/ 0,  0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvLllMovingOctagonalMeshPlatform),
    OBJECT(/*model*/ MODEL_LLL_SINKING_ROCK_BLOCK,             /*pos*/  7168,    0,  7296, /*angle*/ 0,  0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllSinkingRockBlock),
    OBJECT(/*model*/ MODEL_LLL_ROLLING_LOG,                    /*pos*/  6144,  307,  6016, /*angle*/ 0, 90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllRollingLog),
    OBJECT(/*model*/ MODEL_LLL_ROTATING_HEXAGONAL_PLATFORM,    /*pos*/ -5119,    0, -4095, /*angle*/ 0,  0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllRotatingHexagonalPlatform),
    OBJECT(/*model*/ MODEL_NONE,                               /*pos*/ -3583,    0, -4095, /*angle*/ 0,  0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllFloatingWoodBridge),
    RETURN(),
};

static const LevelScript script_func_local_4[] = {
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/ -3199,  307,  3456, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMrI),
    OBJECT(/*model*/ MODEL_BULLY_BOSS,      /*pos*/     0,  307, -4385, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBigBully),
    OBJECT(/*model*/ MODEL_BULLY_BOSS,      /*pos*/  4046, 2234, -5521, /*angle*/ 0,   0, 0, /*behParam*/ 0x01000000, /*beh*/ bhvBigBullyWithMinions),
    OBJECT(/*model*/ MODEL_BULLY,           /*pos*/ -5119,  307, -2482, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSmallBully),
    OBJECT(/*model*/ MODEL_BULLY,           /*pos*/     0,  307,  3712, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSmallBully),
    OBJECT(/*model*/ MODEL_BULLY,           /*pos*/  6813,  307,  1613, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSmallBully),
    OBJECT(/*model*/ MODEL_BULLY,           /*pos*/  7168,  307,   998, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSmallBully),
    OBJECT(/*model*/ MODEL_BULLY,           /*pos*/ -5130,  285, -1663, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSmallBully),
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/     0,  200, -2048, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlamethrower),
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/   500,    2,  5000, /*angle*/ 0, 270, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBouncingFireball),
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/  -700,    2,  4500, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBouncingFireball),
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/ -6300,    2,  2625, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBouncingFireball),
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/ -3280,    2, -4854, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBouncingFireball),
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/  5996,    2,  -390, /*angle*/ 0, 315, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBouncingFireball),
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/  5423,    2, -1991, /*angle*/ 0, 315, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBouncingFireball),
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/  4921,    2, -1504, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBouncingFireball),
    OBJECT_WITH_ACTS(/*model*/ MODEL_EXCLAMATION_BOX, /*pos*/  1050,  550,  6200, /*angle*/ 0,   0, 0, /*behParam*/ 0x00030000, /*beh*/ bhvExclamationBox, /*acts*/ ACT_5 | ACT_6),
    RETURN(),
};

static const LevelScript script_func_local_5[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/ -4400, 350,  250, /*angle*/ 0, 0, 0, /*behParam*/ 0x02000000, /*beh*/ bhvHiddenRedCoinStar, /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/  3100, 400, 7900, /*angle*/ 0, 0, 0, /*behParam*/ 0x03000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    RETURN(),
};

static const LevelScript script_func_local_6[] = {
    OBJECT(/*model*/ MODEL_NONE,                         /*pos*/   728, 2606, -2754, /*angle*/ 0,   0, 0, /*behParam*/ 0x00380000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                         /*pos*/  1043, 2972, -2679, /*angle*/ 0,   0, 0, /*behParam*/ 0x004E0000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                         /*pos*/  1078, 3078, -2269, /*angle*/ 0,   0, 0, /*behParam*/ 0x00660000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                         /*pos*/  1413, 3222, -2190, /*angle*/ 0,   0, 0, /*behParam*/ 0x00520000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                         /*pos*/   783, 1126,   -47, /*angle*/ 0,   0, 0, /*behParam*/ 0x00660000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                         /*pos*/   662, 2150,   708, /*angle*/ 0,   0, 0, /*behParam*/ 0x00660000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                         /*pos*/  2943,  476,    10, /*angle*/ 0, 270, 0, /*behParam*/ 0x00020000, /*beh*/ bhvFlamethrower),
    OBJECT(/*model*/ MODEL_NONE,                         /*pos*/ -2759, 2350, -1108, /*angle*/ 0,  60, 0, /*behParam*/ 0x00020000, /*beh*/ bhvFlamethrower),
    OBJECT(/*model*/ MODEL_NONE,                         /*pos*/ -2472, 2350, -1605, /*angle*/ 0,  60, 0, /*behParam*/ 0x00020000, /*beh*/ bhvFlamethrower),
    OBJECT(/*model*/ MODEL_LLL_VOLCANO_FALLING_TRAP,     /*pos*/  -485, 1203,  2933, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllVolcanoFallingTrap),
    OBJECT(/*model*/ MODEL_LLL_ROTATING_BLOCK_FIRE_BARS, /*pos*/   417, 2150,   583, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllRotatingBlockWithFireBars),
    OBJECT(/*model*/ MODEL_CHECKERBOARD_PLATFORM,        /*pos*/  -764,    0,  1664, /*angle*/ 0, 180, 0, /*behParam*/ 0x08A50000, /*beh*/ bhvPlatformOnTrack),
    OBJECT(/*model*/ MODEL_CHECKERBOARD_PLATFORM,        /*pos*/   184,  980, -1366, /*angle*/ 0, 180, 0, /*behParam*/ 0x08A60000, /*beh*/ bhvPlatformOnTrack),
    OBJECT(/*model*/ MODEL_NONE,                         /*pos*/   -26,  103, -2649, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvVolcanoSoundLoop),
    RETURN(),
};

static const LevelScript script_func_local_7[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ 2523, 3850, -901, /*angle*/ 0, 0, 0, /*behParam*/ 0x04000000, /*beh*/ bhvStar, /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ 1800, 3400, 1450, /*angle*/ 0, 0, 0, /*behParam*/ 0x05000000, /*beh*/ bhvStar, /*acts*/ ALL_ACTS),
    RETURN(),
};

const LevelScript level_lll_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _lll_segment_7SegmentRomStart, _lll_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _fire_mio0SegmentRomStart, _fire_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _bitfs_skybox_mio0SegmentRomStart, _bitfs_skybox_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
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
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,                  lll_geo_0009E0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,                  lll_geo_0009F8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,                  lll_geo_000A10),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,                  lll_geo_000A28),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,                  lll_geo_000A40),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,                  lll_geo_000A60),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,                  lll_geo_000A90),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,                  lll_geo_000AA8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,                  lll_geo_000AC0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,                  lll_geo_000AD8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,                  lll_geo_000AF0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_DRAWBRIDGE_PART,                lll_geo_000B20),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_ROTATING_BLOCK_FIRE_BARS,       lll_geo_000B38),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_ROTATING_HEXAGONAL_RING,        lll_geo_000BB0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_SINKING_RECTANGULAR_PLATFORM,   lll_geo_000BC8),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_SINKING_SQUARE_PLATFORMS,       lll_geo_000BE0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_TILTING_SQUARE_PLATFORM,        lll_geo_000BF8),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_1,                 lll_geo_000C10),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_2,                 lll_geo_000C30),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_3,                 lll_geo_000C50),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_4,                 lll_geo_000C70),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_5,                 lll_geo_000C90),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_6,                 lll_geo_000CB0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_7,                 lll_geo_000CD0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_8,                 lll_geo_000CF0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_9,                 lll_geo_000D10),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_10,                lll_geo_000D30),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_11,                lll_geo_000D50),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_12,                lll_geo_000D70),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_13,                lll_geo_000D90),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_14,                lll_geo_000DB0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_MOVING_OCTAGONAL_MESH_PLATFORM, lll_geo_000B08),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_SINKING_ROCK_BLOCK,             lll_geo_000DD0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_ROLLING_LOG,                    lll_geo_000DE8),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_ROTATING_HEXAGONAL_PLATFORM,    lll_geo_000A78),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_WOOD_BRIDGE,                    lll_geo_000B50),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_LARGE_WOOD_BRIDGE,              lll_geo_000B68),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_FALLING_PLATFORM,               lll_geo_000B80),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_LARGE_FALLING_PLATFORM,         lll_geo_000B98),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_VOLCANO_FALLING_TRAP,           lll_geo_000EA8),

    AREA(/*index*/ 1, lll_geo_000E00),
MACRO_OBJECTS(local_macro_objects_lll_1),
WARP_NODE(241,22,1,241,0),
WARP_NODE(240,22,1,240,0),
WARP_NODE(13,22,2,10,0),
WARP_NODE(12,15,1,12,0),
WARP_NODE(11,33,1,10,128),
WARP_NODE(10,22,1,10,0),
OBJECT_WITH_ACTS(65,0,-150,2584,0,0,0,0x0, bhvLllTiltingInvertedPyramid,31),
OBJECT_WITH_ACTS(62,3840,2011,-5631,90,180,0,0x0, bhvLllRotatingHexagonalRing,31),
OBJECT_WITH_ACTS(0,4921,2,-1504,0,90,0,0x0, bhvBouncingFireball,31),
OBJECT_WITH_ACTS(0,5423,2,-1991,0,315,0,0x0, bhvBouncingFireball,31),
OBJECT_WITH_ACTS(0,5996,2,-390,0,315,0,0x0, bhvBouncingFireball,31),
OBJECT_WITH_ACTS(0,-3280,2,-4854,0,0,0,0x0, bhvBouncingFireball,31),
OBJECT_WITH_ACTS(57,7844,3002,4599,0,90,90,0x0, bhvLllRollingLog,31),
OBJECT_WITH_ACTS(57,6444,3002,4599,0,90,90,0x0, bhvLllRollingLog,31),
OBJECT_WITH_ACTS(57,7844,1002,4599,0,270,90,0x0, bhvLllRollingLog,31),
OBJECT_WITH_ACTS(0,0,200,-2048,0,0,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(122,3840,4057,-5637,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(87,7151,307,1338,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(62,3840,2011,-5631,180,0,0,0x0, bhvLllRotatingHexagonalRing,31),
OBJECT_WITH_ACTS(62,3840,2011,-5631,0,0,0,0x0, bhvLllRotatingHexagonalRing,31),
OBJECT_WITH_ACTS(87,3230,563,5043,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(87,0,307,-4385,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(0,7153,3996,4599,0,0,0,0x1000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(9,-5119,0,-4095,0,0,0,0x0, bhvLllRotatingHexagonalPlatform,31),
OBJECT_WITH_ACTS(57,6144,307,6016,0,90,0,0x0, bhvLllRollingLog,31),
OBJECT_WITH_ACTS(55,7168,0,7296,0,0,0,0x0, bhvLllSinkingRockBlock,31),
OBJECT_WITH_ACTS(54,7168,0,2432,0,0,0,0x10000, bhvLllMovingOctagonalMeshPlatform,31),
OBJECT_WITH_ACTS(54,1124,0,-4607,0,0,0,0x0, bhvLllMovingOctagonalMeshPlatform,31),
OBJECT_WITH_ACTS(62,3840,2011,-5631,90,0,0,0x0, bhvLllRotatingHexagonalRing,31),
OBJECT_WITH_ACTS(55,2100,-50,2150,0,345,0,0x0, bhvLllSinkingRockBlock,31),
OBJECT_WITH_ACTS(65,-3244,-200,-4082,0,0,0,0x0, bhvLllTiltingInvertedPyramid,31),
OBJECT_WITH_ACTS(65,0,2600,0,0,0,0,0x0, bhvLllTiltingInvertedPyramid,31),
OBJECT_WITH_ACTS(64,3840,0,-3199,0,0,0,0x0, bhvLllSinkingSquarePlatforms,31),
OBJECT_WITH_ACTS(65,-1866,-200,-4075,0,90,0,0x0, bhvLllTiltingInvertedPyramid,31),
OBJECT_WITH_ACTS(55,2550,-50,1300,0,315,0,0x0, bhvLllSinkingRockBlock,31),
OBJECT_WITH_ACTS(55,3350,-50,800,0,285,0,0x0, bhvLllSinkingRockBlock,31),
OBJECT_WITH_ACTS(62,0,0,0,0,0,0,0x0, bhvLllRotatingHexagonalRing,31),
OBJECT_WITH_ACTS(58,-5119,307,-4095,0,0,0,0x0, bhvLllRotatingBlockWithFireBars,31),
OBJECT_WITH_ACTS(122,0,3400,0,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(14,-5115,300,-3200,0,90,0,0x0, bhvLllHexagonalMesh,31),
OBJECT_WITH_ACTS(13,0,0,-2047,0,0,0,0x0, bhvStaticObject,31),
OBJECT_WITH_ACTS(12,-5119,0,-511,0,0,0,0x0, bhvStaticObject,31),
OBJECT_WITH_ACTS(12,-4607,0,3456,0,270,0,0x0, bhvStaticObject,31),
OBJECT_WITH_ACTS(12,2048,0,3456,0,180,0,0x0, bhvStaticObject,31),
OBJECT_WITH_ACTS(12,5632,0,1408,0,270,0,0x0, bhvStaticObject,31),
OBJECT_WITH_ACTS(11,0,0,6272,0,0,0,0x0, bhvStaticObject,31),
OBJECT_WITH_ACTS(10,0,0,0,0,0,0,0x0, bhvStaticObject,31),
OBJECT_WITH_ACTS(8,-5119,0,-2047,0,0,0,0x0, bhvStaticObject,31),
OBJECT_WITH_ACTS(7,-3199,0,3456,0,0,0,0x0, bhvStaticObject,31),
OBJECT_WITH_ACTS(6,0,0,3712,0,0,0,0x0, bhvStaticObject,31),
OBJECT_WITH_ACTS(5,7168,0,1408,0,0,0,0x0, bhvStaticObject,31),
OBJECT_WITH_ACTS(4,4992,0,-639,0,0,0,0x0, bhvStaticObject,31),
OBJECT_WITH_ACTS(3,3840,0,-5631,0,0,0,0x0, bhvStaticObject,31),
OBJECT_WITH_ACTS(0,0,1007,2570,0,0,0,0xf00000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,0,1007,2570,0,0,0,0xf10000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(0,0,105,0,0,0,0,0x190d0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-5904,1207,6664,0,120,0,0xa0000, bhvAirborneWarp,31),
        TERRAIN(/*terrainData*/ lll_seg7_area_1_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_LEVEL_HOT),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    AREA(/*index*/ 2, lll_geo_000EC0),
MACRO_OBJECTS(local_macro_objects_lll_2),
WARP_NODE(241,22,1,241,0),
WARP_NODE(240,33,1,10,0),
WARP_NODE(10,22,2,10,0),
OBJECT_WITH_ACTS(139,2500,3602,-930,90,30,0,0x2f00000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,2270,3800,-1350,0,0,0,0x0, bhvBowserCourseRedCoinStar,31),
OBJECT_WITH_ACTS(0,-26,103,-2649,0,0,0,0x0, bhvVolcanoSoundLoop,31),
OBJECT_WITH_ACTS(202,184,980,-1366,0,180,0,0x8a60000, bhvPlatformOnTrack,31),
OBJECT_WITH_ACTS(202,-764,0,1664,0,180,0,0x8a50000, bhvPlatformOnTrack,31),
OBJECT_WITH_ACTS(58,417,2150,583,0,0,0,0x0, bhvLllRotatingBlockWithFireBars,31),
OBJECT_WITH_ACTS(83,-485,1203,2933,0,0,0,0x0, bhvLllVolcanoFallingTrap,31),
OBJECT_WITH_ACTS(0,-2472,2350,-1605,0,60,0,0x20000, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,-2759,2350,-1108,0,60,0,0x20000, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,2943,476,10,0,270,0,0x20000, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,662,2150,708,0,0,0,0x660000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,783,1126,-47,0,0,0,0x660000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,1413,3222,-2190,0,0,0,0x520000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,1078,3078,-2269,0,0,0,0x660000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,1043,2972,-2679,0,0,0,0x4e0000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,728,2606,-2754,0,0,0,0x380000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,-1583,789,603,0,118,0,0xa0000, bhvInstantActiveWarp,31),
        TERRAIN(/*terrainData*/ lll_seg7_area_2_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0004, /*seq*/ SEQ_LEVEL_HOT),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 90, /*pos*/ -3839, 154, 6272),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
