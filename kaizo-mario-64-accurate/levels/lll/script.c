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
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,1410,100,3700,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,3100,400,7900,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,6300,1500,58986,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,58861,250,4600,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,59661,1100,6650,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,58836,300,58836,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,0,150,63686,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,62411,250,63436,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,61636,154,6400,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_recovery_heart,0,61111,625,6275,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,0,0,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,3840,600,59914,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,5000,0,64136,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,315,7150,700,1375,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,5400,0,64861,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,5200,0,150,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,90,4825,154,64886,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bully,0,3333,307,59671,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bully,0,3808,307,59463,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bully,0,4695,307,59531,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bully,0,3168,307,59971,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_floor_switch_hidden_objects,0,6673,154,62476,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bouncing_fireball_copy,180,1750,0,60986,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,0,0,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,4800,0,6600,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,270,0,768,58361,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,7160,320,1400,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,3800,320,59936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,62336,290,3456,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,6673,154,62476,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,65311,225,5150,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,250,225,5150,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,0,410,3700,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,60918,65361,6275,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,600,450,61136,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba_triplet_spawner,0,60397,435,63392,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bouncing_fireball_copy,0,1750,0,61186,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_metal_cap,0,59661,600,6650,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,4800,0,5500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,64936,450,61136,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_vanish_cap,0,61236,65461,6275,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bully,0,4278,307,59991,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,61111,250,6275,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bully,0,62636,154,6275,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,61636,154,6150,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,6300,850,58986,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,59661,154,6650,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,7200,65516,3200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,7100,65516,4700,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,7200,65516,6200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_wing_cap,0,61136,65461,6275,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_lll_2[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_vertical,0,1078,3600,63267,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,600,82,64056,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,1080,82,63856,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,2180,173,63676,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,2520,174,64316,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,2840,249,65076,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,2800,449,460,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bully,0,1300,1029,2300,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bully,0,64576,2442,62926,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,2180,775,1720,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,1700,1029,2100,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,940,1029,2540,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,64156,102,1640,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,63493,1678,1500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,63253,1863,800,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,63116,1981,280,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,62916,2089,65256,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,62996,2268,64596,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,1330,3201,1313,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,1069,3130,1243,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,704,3028,1156,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_vertical,0,1413,3675,63346,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,63909,1613,2028,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,182,2623,63007,0),
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
WARP_NODE(241,6,3,100,0),
WARP_NODE(240,6,3,50,0),
WARP_NODE(13,22,1,12,0),
WARP_NODE(12,22,1,13,0),
WARP_NODE(11,22,2,10,128),
WARP_NODE(10,22,1,10,0),
OBJECT_WITH_ACTS(122,-3200,100,3456,0,0,0,0x3000000, bhvStar
,62),
OBJECT_WITH_ACTS(0,-4400,350,250,0,0,0,0x2000000, bhvHiddenRedCoinStar
,63),
OBJECT_WITH_ACTS(144,1100,250,6200,0,0,0,0x0, bhvFlame
,63),
OBJECT_WITH_ACTS(145,1025,250,6275,0,0,0,0x0, bhvFlame
,63),
OBJECT_WITH_ACTS(145,1175,250,6125,0,0,0,0x0, bhvFlame
,63),
OBJECT_WITH_ACTS(145,1025,250,6125,0,0,0,0x0, bhvFlame
,63),
OBJECT_WITH_ACTS(144,-5875,250,6650,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(65,1750,-305,-3900,0,0,0,0x0, bhvLllTiltingInvertedPyramid
,63),
OBJECT_WITH_ACTS(0,0,400,6100,0,180,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,-100,250,6100,0,180,0,0x0, bhvFlamethrower
,63),
OBJECT_WITH_ACTS(0,0,200,-2048,0,0,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,100,250,6100,0,180,0,0x0, bhvFlamethrower
,63),
OBJECT_WITH_ACTS(86,7168,307,998,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(86,6813,307,1613,0,0,0,0x0, bhvSmallBully
,31),
OBJECT_WITH_ACTS(65,1750,-305,-5000,0,0,0,0x0, bhvLllTiltingInvertedPyramid
,31),
OBJECT_WITH_ACTS(144,-6700,300,-6700,0,0,0,0x0, bhvFlame
,63),
OBJECT_WITH_ACTS(87,4046,3234,-5521,0,0,0,0x1000000, bhvBigBullyWithMinions
,31),
OBJECT_WITH_ACTS(87,0,307,-4385,0,0,0,0x0, bhvBigBully
,1),
OBJECT_WITH_ACTS(0,-5110,307,-2100,0,0,0,0x0, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(217,2975,540,4775,0,0,0,0x0, bhvPushableMetalBox
,63),
OBJECT_WITH_ACTS(9,-5119,0,-4095,0,0,0,0x0, bhvLllRotatingHexagonalPlatform
,31),
OBJECT_WITH_ACTS(223,3450,563,5100,0,90,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(223,7200,307,1425,0,0,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(129,7150,0,3200,0,0,0,0x0, bhvHiddenObject
,127),
OBJECT_WITH_ACTS(0,-5119,550,-4095,0,180,0,0x0, bhvBouncingFireball
,31),
OBJECT_WITH_ACTS(0,-5119,550,-4095,0,0,0,0x0, bhvBouncingFireball
,31),
OBJECT_WITH_ACTS(144,-3125,250,-2100,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(129,7150,0,4700,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(65,1741,-305,1741,0,0,0,0x0, bhvLllTiltingInvertedPyramid
,31),
OBJECT_WITH_ACTS(129,7150,0,6200,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(64,3840,-20,-3199,0,0,0,0x0, bhvLllSinkingSquarePlatforms
,31),
OBJECT_WITH_ACTS(144,-6675,250,4600,0,90,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(63,-2500,-27,-4000,0,90,0,0x0, bhvLllSinkingRectangularPlatform
,31),
OBJECT_WITH_ACTS(0,-5119,550,-4095,0,270,0,0x0, bhvBouncingFireball
,31),
OBJECT_WITH_ACTS(4,4992,0,-639,0,0,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(0,-5119,550,-4095,0,90,0,0x0, bhvBouncingFireball
,31),
OBJECT_WITH_ACTS(58,-5119,307,-4095,0,0,0,0x0, bhvLllRotatingBlockWithFireBars
,31),
OBJECT_WITH_ACTS(56,-1919,307,3648,0,0,0,0x0, bhvLllDrawbridgeSpawner
,31),
OBJECT_WITH_ACTS(14,-5115,300,-3200,0,90,0,0x0, bhvLllHexagonalMesh
,31),
OBJECT_WITH_ACTS(13,0,0,-2047,0,0,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(12,-5119,0,-511,0,0,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(12,-4607,0,3456,0,270,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(12,2048,0,3456,0,180,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(12,5632,0,1408,0,270,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(11,0,0,6272,0,0,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(10,0,0,0,0,0,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(8,-5119,0,-2047,0,0,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(7,-3199,0,3456,0,0,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(6,0,0,3712,0,0,0,0x0, bhvStaticObject
,63),
OBJECT_WITH_ACTS(5,7168,0,1408,0,0,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(145,1175,250,6275,0,0,0,0x0, bhvFlame
,63),
OBJECT_WITH_ACTS(3,3840,0,-5631,0,0,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(0,1100,154,6200,0,0,0,0xd0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-3200,11,3456,0,0,0,0xc0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,0,105,0,0,0,0,0x190b0000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,-4400,250,6275,0,90,0,0xa0000, bhvSpinAirborneWarp
,31),
        TERRAIN(/*terrainData*/ lll_seg7_area_1_collision),
        SHOW_DIALOG(/*index*/ 0x00, DIALOG_097),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_LEVEL_HOT),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    AREA(/*index*/ 2, lll_geo_000EC0),
MACRO_OBJECTS(local_macro_objects_lll_2),
WARP_NODE(241,6,3,100,0),
WARP_NODE(240,6,3,50,0),
WARP_NODE(10,22,2,10,0),
OBJECT_WITH_ACTS(122,1800,3400,1450,0,0,0,0x4000000, bhvStar
,63),
OBJECT_WITH_ACTS(122,75,4500,-2550,0,0,0,0x5000000, bhvStar
,63),
OBJECT_WITH_ACTS(0,-26,103,-2649,0,0,0,0x0, bhvVolcanoSoundLoop
,31),
OBJECT_WITH_ACTS(202,184,980,-1366,0,180,0,0x8a60000, bhvPlatformOnTrack
,31),
OBJECT_WITH_ACTS(202,-764,0,1664,0,180,0,0x8a50000, bhvPlatformOnTrack
,31),
OBJECT_WITH_ACTS(58,417,2150,583,0,0,0,0x0, bhvLllRotatingBlockWithFireBars
,31),
OBJECT_WITH_ACTS(83,-485,1203,2933,0,0,0,0x0, bhvLllVolcanoFallingTrap
,31),
OBJECT_WITH_ACTS(0,-2472,2350,-1605,0,60,0,0x20000, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,-2759,2350,-1108,0,60,0,0x20000, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,2943,476,10,0,270,0,0x20000, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,662,2150,708,0,0,0,0x660000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(0,783,1126,-47,0,0,0,0x660000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(0,1413,3222,-2190,0,0,0,0x520000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(0,1078,3078,-2269,0,0,0,0x660000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(0,1043,2972,-2679,0,0,0,0x4e0000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(0,728,2606,-2754,0,0,0,0x380000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(0,-955,1103,-1029,0,118,0,0xa0000, bhvAirborneWarp
,31),
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
