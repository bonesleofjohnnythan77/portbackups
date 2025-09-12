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
#include "levels/jrb/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_jrb_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,248,59211,1126,1730,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,0,5060,61116,720,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_metal_cap,0,2077,1832,7465,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal_flying,0,63756,64886,4200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_floor_switch_hidden_objects,45,2260,1536,6854,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,45,4269,1596,4866,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,45,4128,1596,5007,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,45,3400,1596,5155,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,45,3261,1596,5294,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,45,3120,1596,5435,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_seaweed_bundle,0,3551,60416,2744,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_seaweed_bundle,0,4201,60416,3863,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,63096,62556,61416,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_metal_cap,0,279,62936,58196,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_seaweed_bundle,0,4846,60417,1213,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_seaweed_bundle,0,64736,64513,4040,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,45,3621,1596,6529,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,45,3485,1596,6665,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,45,2671,1596,6459,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,5682,1800,3285,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,58541,1902,3553,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,3123,62971,2734,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,64990,530,5930,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,648,65046,4256,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,3642,60433,3175,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,4887,62944,1524,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,4167,61538,3308,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,180,64636,62570,63336,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,79,62984,1331,6573,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_sushi,315,63736,64513,3500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_sushi,225,65056,512,5980,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_sushi,270,700,65025,4250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_sushi,90,3600,60417,3200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group,0,63013,65290,4676,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group,0,5876,60798,3476,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_blue_coin_switch,0,6011,62570,60025,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,5900,62570,58189,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,5300,62570,58189,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,4700,62570,58189,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,4100,62570,58189,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,3500,62570,58189,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,2900,62570,58189,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba_triplet_spawner,0,3305,62570,59389,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_vertical,0,255,1160,7633,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal_flying,0,51,960,2744,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,5060,61316,720,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up,0,5140,61156,0,1),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group_2,0,4072,61073,2027,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group_2,0,65246,190,4645,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_cannon_closed,0,61301,1247,2137,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,45,2536,1596,6594,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,45,4220,1536,5700,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,45,3987,1596,5148,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,45,3280,1536,5940,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,45,3200,1536,6720,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_metal_cap,0,58376,1340,2580,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,180,58626,1120,2380,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_three_coins,0,59736,1340,64786,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,670,3000,3315,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_koopa_shell_underwater,0,64056,64536,4820,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_sushi,180,64056,64496,4820,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,5290,62570,60796,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_jrb_2[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_star_1,0,0,1600,3000,0),
MACRO_OBJECT_END(),
};

static const LevelScript script_func_local_1[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_JRB_SUNKEN_SHIP,          /*pos*/  2385,  3589,  3727, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSunkenShipPart,          /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_JRB_SUNKEN_SHIP_BACK,     /*pos*/  2385,  3589,  3727, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSunkenShipPart,          /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_JRB_SHIP_LEFT_HALF_PART,  /*pos*/  5385, -5520,  2428, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSunkenShipPart2,        /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_JRB_SHIP_RIGHT_HALF_PART, /*pos*/  5385, -5520,  2428, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSunkenShipPart2,        /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,                     /*pos*/  5385, -5520,  2428, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvInSunkenShip,            /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,                     /*pos*/  5385, -5520,  2428, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvInSunkenShip2,          /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_JRB_SHIP_LEFT_HALF_PART,  /*pos*/  4880,   820,  2375, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvShipPart3,               /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_JRB_SHIP_BACK_LEFT_PART,  /*pos*/  4880,   820,  2375, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvShipPart3,               /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_JRB_SHIP_RIGHT_HALF_PART, /*pos*/  4880,   820,  2375, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvShipPart3,               /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_JRB_SHIP_BACK_RIGHT_PART, /*pos*/  4880,   820,  2375, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvShipPart3,               /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,                     /*pos*/  4880,   820,  2375, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvInSunkenShip3,          /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_JRB_SLIDING_BOX,          /*pos*/  4668,  1434,  2916, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvJrbSlidingBox,           /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_UNAGI,                    /*pos*/  6048, -5381,  1154, /*angle*/ 0, 340, 0, /*behParam*/ 0x00000000, /*beh*/ bhvUnagi,                     /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_UNAGI,                    /*pos*/  8270, -3130,  1846, /*angle*/ 0, 285, 0, /*behParam*/ 0x01010000, /*beh*/ bhvUnagi,                     /*acts*/ ACT_2),
    OBJECT_WITH_ACTS(/*model*/ MODEL_UNAGI,                    /*pos*/  6048, -5381,  1154, /*angle*/ 0, 340, 0, /*behParam*/ 0x02020000, /*beh*/ bhvUnagi,                     /*acts*/ ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,                     /*pos*/  4988, -5221,  2473, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvJetStream,                /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT(/*model*/ MODEL_NONE,                     /*pos*/ -1800, -2812, -2100, /*angle*/ 0,   0, 0, /*behParam*/ 0x02000000, /*beh*/ bhvTreasureChestsJrb),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOBOMB_BUDDY,             /*pos*/ -1956,  1331,  6500, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBobombBuddyOpensCannon, /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  1834, -2556, -7090, /*angle*/ 0, 194, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/ -2005, -2556, -3506, /*angle*/ 0, 135, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  1578, -2556, -5554, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/    42, -2556, -6578, /*angle*/ 0, 135, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  -981, -2556, -5298, /*angle*/ 0, 255, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/ -6549,  1536,  4343, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  1322, -2556, -3506, /*angle*/ 0, 165, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  6442, -2556, -6322, /*angle*/ 0, 135, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  3882, -2556, -5042, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  1497,  1741,  7810, /*angle*/ 0,  14, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/ -3978,  1536,   -85, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/ -5228,  1230,  2106, /*angle*/ 0, 323, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/ -7481,  1536,   185, /*angle*/ 0, 149, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/ -5749,  1536, -1113, /*angle*/ 0, 255, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/ -5332,  1434,  1023, /*angle*/ 0, 315, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  -815,  -613,  3556, /*angle*/ 0, 315, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/ -3429,   819,  4948, /*angle*/ 0, 284, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/ -1940,   410,  2377, /*angle*/ 0, 194, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/ -1798,  -716,  4330, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  -845,   922,  7668, /*angle*/ 0, 315, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  6741, -2886,  3556, /*angle*/ 0, 135, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/   255,  -101,  4719, /*angle*/ 0,  45, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  1787,  -306,  5133, /*angle*/ 0, 315, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  1079,  -613,  2299, /*angle*/ 0,  75, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  2931, -1697,   980, /*angle*/ 0, 315, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  3036, -4709,  4027, /*angle*/ 0, 315, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  4222, -1125,  7083, /*angle*/ 0, 104, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  6650,  -613,  4941, /*angle*/ 0, 315, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  5764, -4709,  4427, /*angle*/ 0, 315, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  3693, -4709,   856, /*angle*/ 0, 135, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  7981,   410,  2704, /*angle*/ 0, 165, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  2917, -3046,  4818, /*angle*/ 0, 241, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  5896,  -393,  -123, /*angle*/ 0, 315, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_NONE,                     /*pos*/    53,  2355,  2724, /*angle*/ 0,   0, 0, /*behParam*/ 0x00290000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                     /*pos*/   659,  2560,  3314, /*angle*/ 0,   0, 0, /*behParam*/ 0x00290000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                     /*pos*/  1087,  2150,  3798, /*angle*/ 0,   0, 0, /*behParam*/ 0x00290000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                     /*pos*/ -2535,  1075,  6113, /*angle*/ 0,   0, 0, /*behParam*/ 0x00610000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_JRB_FALLING_PILLAR,       /*pos*/  2078, -2863, -4696, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFallingPillar),
    OBJECT(/*model*/ MODEL_JRB_FALLING_PILLAR,       /*pos*/ -1403, -2863, -4696, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFallingPillar),
    OBJECT(/*model*/ MODEL_JRB_FALLING_PILLAR,       /*pos*/ -1096, -2863, -3262, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFallingPillar),
    OBJECT(/*model*/ MODEL_JRB_FALLING_PILLAR,       /*pos*/   337, -2863, -5106, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFallingPillar),
    OBJECT(/*model*/ MODEL_JRB_FALLING_PILLAR,       /*pos*/  2078, -2863, -6232, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFallingPillar),
    OBJECT(/*model*/ MODEL_JRB_FALLING_PILLAR,       /*pos*/  4330, -2863, -5618, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFallingPillar),
    OBJECT(/*model*/ MODEL_JRB_FALLING_PILLAR_BASE,  /*pos*/  2078, -2966, -4696, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPillarBase),
    OBJECT(/*model*/ MODEL_JRB_FALLING_PILLAR_BASE,  /*pos*/ -1403, -2966, -4696, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPillarBase),
    OBJECT(/*model*/ MODEL_JRB_FALLING_PILLAR_BASE,  /*pos*/ -1096, -2966, -3262, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPillarBase),
    OBJECT(/*model*/ MODEL_JRB_FALLING_PILLAR_BASE,  /*pos*/   337, -2966, -5106, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPillarBase),
    OBJECT(/*model*/ MODEL_JRB_FALLING_PILLAR_BASE,  /*pos*/  2078, -2966, -6232, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPillarBase),
    OBJECT(/*model*/ MODEL_JRB_FALLING_PILLAR_BASE,  /*pos*/  4330, -2966, -5618, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPillarBase),
    OBJECT(/*model*/ MODEL_JRB_FLOATING_PLATFORM,    /*pos*/ -1059,  1025,  7072, /*angle*/ 0, 247, 0, /*behParam*/ 0x00000000, /*beh*/ bhvJrbFloatingPlatform),
    OBJECT(/*model*/ MODEL_NONE,                     /*pos*/ -4236, 1044, 2136,   /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvInsideCannon),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,            /*pos*/ 4900,  2400,   800, /*angle*/ 0, 0, 0, /*behParam*/ 0x03000000, /*beh*/ bhvHiddenRedCoinStar, /*acts*/ ALL_ACTS),
#ifdef VERSION_JP
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR,            /*pos*/ 1540,  2160,  2130, /*angle*/ 0, 0, 0, /*behParam*/ 0x04000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
#else
    OBJECT_WITH_ACTS(/*model*/ MODEL_EXCLAMATION_BOX, /*pos*/ 1540,  2160,  2130, /*angle*/ 0, 0, 0, /*behParam*/ 0x04080000, /*beh*/ bhvExclamationBox,      /*acts*/ ALL_ACTS),
#endif
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR,            /*pos*/ 5000, -4800,  2500, /*angle*/ 0, 0, 0, /*behParam*/ 0x05000000, /*beh*/ bhvStar,                 /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    RETURN(),
};

static const LevelScript script_func_local_4[] = {
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/  400,  -350, -2700, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvTreasureChestsShip),
    RETURN(),
};

static const LevelScript script_func_local_5[] = {
    RETURN(),
};

const LevelScript level_jrb_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _jrb_segment_7SegmentRomStart, _jrb_segment_7SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _water_mio0SegmentRomStart, _water_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _clouds_skybox_mio0SegmentRomStart, _clouds_skybox_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group4_mio0SegmentRomStart, _group4_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group4_geoSegmentRomStart, _group4_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group13_mio0SegmentRomStart, _group13_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group13_geoSegmentRomStart,  _group13_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_5),
    JUMP_LINK(script_func_global_14),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_LEFT_HALF_PART,  jrb_geo_000978),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_BACK_LEFT_PART,  jrb_geo_0009B0),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_RIGHT_HALF_PART, jrb_geo_0009E8),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_BACK_RIGHT_PART, jrb_geo_000A00),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SUNKEN_SHIP,          jrb_geo_000990),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SUNKEN_SHIP_BACK,     jrb_geo_0009C8),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_ROCK,                 jrb_geo_000930),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SLIDING_BOX,          jrb_geo_000960),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_FALLING_PILLAR,       jrb_geo_000900),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_FALLING_PILLAR_BASE,  jrb_geo_000918),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_FLOATING_PLATFORM,    jrb_geo_000948),

    AREA(/*index*/ 1, jrb_geo_000A18),
MACRO_OBJECTS(local_macro_objects_jrb_1),
WARP_NODE(241,6,1,103,0),
WARP_NODE(240,6,1,53,0),
WARP_NODE(243,12,2,10,0),
WARP_NODE(10,12,1,10,0),
OBJECT_WITH_ACTS(122,7277,-3238,2127,0,0,0,0x5000000, bhvStar
,62),
OBJECT_WITH_ACTS(137,2005,2368,1614,0,0,0,0x4080000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(0,4575,1879,6589,0,0,0,0x3000000, bhvHiddenRedCoinStar
,63),
OBJECT_WITH_ACTS(0,-4236,1044,2136,0,0,0,0x0, bhvInsideCannon
,31),
OBJECT_WITH_ACTS(63,-1059,1025,7072,0,247,0,0x0, bhvJrbFloatingPlatform
,31),
OBJECT_WITH_ACTS(87,-1538,-997,3925,0,90,0,0x0, bhvWhirlpool
,31),
OBJECT_WITH_ACTS(87,4899,-2456,1502,0,90,0,0x0, bhvWhirlpool
,31),
OBJECT_WITH_ACTS(87,3158,-2456,2628,0,90,0,0x0, bhvWhirlpool
,31),
OBJECT_WITH_ACTS(87,1725,-2456,4472,0,90,0,0x0, bhvWhirlpool
,31),
OBJECT_WITH_ACTS(87,1418,-2456,3038,0,90,0,0x0, bhvWhirlpool
,31),
OBJECT_WITH_ACTS(87,4899,-2456,3038,0,90,0,0x0, bhvWhirlpool
,31),
OBJECT_WITH_ACTS(87,7151,-3258,2116,0,90,0,0x0, bhvWhirlpool
,31),
OBJECT_WITH_ACTS(87,5306,-5029,14,0,90,0,0x0, bhvWhirlpool
,31),
OBJECT_WITH_ACTS(87,4151,-3935,3476,0,90,0,0x0, bhvWhirlpool
,31),
OBJECT_WITH_ACTS(87,12428,-2789,719,0,90,0,0x0, bhvWhirlpool
,31),
OBJECT_WITH_ACTS(87,8279,-2372,2933,0,90,0,0x0, bhvWhirlpool
,31),
OBJECT_WITH_ACTS(87,4323,-5341,2329,0,90,0,0x0, bhvWhirlpool
,31),
OBJECT_WITH_ACTS(0,-2535,1075,6113,0,0,0,0x610000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(137,4897,2827,2347,0,0,0,0x80000, bhvExclamationBox
,31),
OBJECT_WITH_ACTS(0,659,2560,3314,0,0,0,0x290000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(0,53,2355,2724,0,0,0,0x290000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(116,5298,-810,-341,0,315,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,3740,-3463,3673,0,241,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,7383,-7,2486,0,165,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,5672,-5126,1679,0,135,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,5166,-5126,4209,0,315,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,6052,-1030,4723,0,315,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,3749,-1542,5565,0,104,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,2438,-2418,3809,0,315,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,3226,-2114,1998,0,315,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,481,-1030,2081,0,75,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,1189,-723,4915,0,315,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,-343,-518,4501,0,45,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,6143,-3303,3338,0,135,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,-1443,505,7450,0,315,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,-2396,-1133,4112,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,-2538,-7,2159,0,194,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,-4027,1079,4730,0,284,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,-1413,-1030,3338,0,315,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,-5930,1746,805,0,315,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(223,-5663,1119,-410,0,255,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(223,-7395,1119,888,0,149,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(116,-5142,813,2809,0,323,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,-3892,1119,618,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,1583,1324,8513,0,14,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,3968,-2973,-4339,0,0,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,6528,-2973,-5619,0,135,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,1408,-2973,-2803,0,165,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(116,-5522,1119,4001,0,90,0,0x0, bhvOneCoin
,31),
OBJECT_WITH_ACTS(223,-895,-2973,-4595,0,255,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(223,128,-2973,-5875,0,135,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(223,1664,-2973,-4851,0,90,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(223,-1919,-2973,-2803,0,135,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(223,1920,-2973,-6387,0,194,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(195,4929,1536,6324,0,0,0,0x0, bhvBobombBuddyOpensCannon
,63),
OBJECT_WITH_ACTS(0,1777,1980,6509,0,0,0,0x2000000, bhvTreasureChestsJrb
,31),
OBJECT_WITH_ACTS(0,4988,-5221,2473,0,0,0,0x0, bhvJetStream
,62),
OBJECT_WITH_ACTS(85,6048,-5381,1154,0,340,0,0x2020000, bhvUnagi
,60),
OBJECT_WITH_ACTS(85,8270,-3130,1846,0,285,0,0x1010000, bhvUnagi
,2),
OBJECT_WITH_ACTS(85,6048,-5381,1154,0,340,0,0x0, bhvUnagi
,1),
OBJECT_WITH_ACTS(180,5171,2215,4274,0,0,0,0x0, bhvFireSpitter
,62),
OBJECT_WITH_ACTS(87,4880,39,2375,0,0,0,0x0, bhvWhirlpool
,62),
OBJECT_WITH_ACTS(129,4880,2226,2375,0,0,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,4990,1862,3181,0,0,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,4893,1653,3959,0,0,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,4653,1601,4633,0,0,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(87,5385,-5520,2428,0,0,0,0x0, bhvWhirlpool
,1),
OBJECT_WITH_ACTS(87,5385,-5520,2428,0,0,0,0x0, bhvWhirlpool
,1),
OBJECT_WITH_ACTS(86,8029,-10572,1284,0,0,0,0x0, bhvSushiShark
,1),
OBJECT_WITH_ACTS(86,8029,-10572,1284,0,0,0,0x0, bhvSushiShark
,1),
OBJECT_WITH_ACTS(86,5029,-1463,2583,0,0,0,0x0, bhvSushiShark
,1),
OBJECT_WITH_ACTS(86,5029,-1463,2583,0,0,0,0x0, bhvSushiShark
,1),
OBJECT_WITH_ACTS(0,-7272,1126,1986,0,90,0,0xa0000, bhvSpinAirborneWarp
,31),
        WHIRLPOOL(/*unk2*/ 0, /*unk3*/ 3, /*pos*/ 4979, -5222, 2482, /*strength*/ -30),
        TERRAIN(/*terrainData*/ jrb_seg7_area_1_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0003, /*seq*/ SEQ_LEVEL_WATER),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_WATER),
    END_AREA(),

    AREA(/*index*/ 2, jrb_geo_000AFC),
MACRO_OBJECTS(local_macro_objects_jrb_2),
WARP_NODE(241,6,1,103,0),
WARP_NODE(240,6,1,53,0),
WARP_NODE(10,12,2,10,0),
OBJECT_WITH_ACTS(0,400,-350,-2700,0,0,0,0x0, bhvTreasureChestsShip
,31),
OBJECT_WITH_ACTS(0,928,1050,-1248,0,180,0,0xa0000, bhvSwimmingWarp
,31),
        TERRAIN(/*terrainData*/ jrb_seg7_area_2_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0003, /*seq*/ SEQ_LEVEL_WATER),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_WATER),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 90, /*pos*/ -6750, 1126, 1482),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
