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
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,             /*yaw*/ 250, /*pos*/ -6325,  1126,  1730, /*behParam*/ DIALOG_060),
    MACRO_OBJECT(/*preset*/ macro_coin_ring_vertical,          /*yaw*/   0, /*pos*/  5060, -4420,   720),
    MACRO_OBJECT(/*preset*/ macro_box_metal_cap,               /*yaw*/   0, /*pos*/  2077,  1832,  7465),
    MACRO_OBJECT(/*preset*/ macro_coin_ring_horizontal_flying, /*yaw*/   0, /*pos*/ -1780,  -650,  4200),
    MACRO_OBJECT(/*preset*/ macro_floor_switch_hidden_objects, /*yaw*/  45, /*pos*/  2260,  1536,  6854),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/  45, /*pos*/  4269,  1336,  4866),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/  45, /*pos*/  4128,  1336,  5007),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/  45, /*pos*/  3400,  1336,  5155),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/  45, /*pos*/  3261,  1336,  5294),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/  45, /*pos*/  3120,  1336,  5435),
    MACRO_OBJECT(/*preset*/ macro_seaweed_bundle,              /*yaw*/   0, /*pos*/  3551, -5120,  2744),
    MACRO_OBJECT(/*preset*/ macro_seaweed_bundle,              /*yaw*/   0, /*pos*/  4201, -5120,  3863),
    MACRO_OBJECT(/*preset*/ macro_coin_ring_horizontal,        /*yaw*/   0, /*pos*/ -2440, -2980, -4120),
    MACRO_OBJECT(/*preset*/ macro_box_metal_cap,               /*yaw*/   0, /*pos*/   279, -2600, -7340),
    MACRO_OBJECT(/*preset*/ macro_seaweed_bundle,              /*yaw*/   0, /*pos*/  4846, -5119,  1213),
    MACRO_OBJECT(/*preset*/ macro_seaweed_bundle,              /*yaw*/   0, /*pos*/  -800, -1023,  4040),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/  45, /*pos*/  3621,  1336,  6529),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/  45, /*pos*/  3485,  1336,  6665),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/  45, /*pos*/  2671,  1336,  6459),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/  4900,  1800,  4700),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/ -2535,  2110,  6113),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/ -1845, -1003,  3518),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/  -546,   530,  5930),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/   648,  -490,  4256),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/  3642, -5103,  3175),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/  4400,  2200,  1300),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/  5400,  2200,  1300),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,             /*yaw*/ 180, /*pos*/  -900, -2966, -2200, /*behParam*/ DIALOG_073),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,             /*yaw*/  80, /*pos*/ -2552,  1331,  6573, /*behParam*/ DIALOG_051),
    MACRO_OBJECT(/*preset*/ macro_clam_shell,                  /*yaw*/ 315, /*pos*/ -1800, -1023,  3500),
    MACRO_OBJECT(/*preset*/ macro_clam_shell,                  /*yaw*/ 225, /*pos*/  -480,   512,  5980),
    MACRO_OBJECT(/*preset*/ macro_clam_shell,                  /*yaw*/ 270, /*pos*/   700,  -511,  4250),
    MACRO_OBJECT(/*preset*/ macro_clam_shell,                  /*yaw*/  90, /*pos*/  3600, -5119,  3200),
    MACRO_OBJECT(/*preset*/ macro_fish_group,                  /*yaw*/   0, /*pos*/ -2523,  -246,  4676),
    MACRO_OBJECT(/*preset*/ macro_fish_group,                  /*yaw*/   0, /*pos*/  5876, -4738,  3476),
    MACRO_OBJECT(/*preset*/ macro_blue_coin_switch,            /*yaw*/   0, /*pos*/  6011, -2966, -5511),
    MACRO_OBJECT(/*preset*/ macro_hidden_blue_coin,            /*yaw*/   0, /*pos*/  5900, -2966, -7347),
    MACRO_OBJECT(/*preset*/ macro_hidden_blue_coin,            /*yaw*/   0, /*pos*/  5300, -2966, -7347),
    MACRO_OBJECT(/*preset*/ macro_hidden_blue_coin,            /*yaw*/   0, /*pos*/  4700, -2966, -7347),
    MACRO_OBJECT(/*preset*/ macro_hidden_blue_coin,            /*yaw*/   0, /*pos*/  4100, -2966, -7347),
    MACRO_OBJECT(/*preset*/ macro_hidden_blue_coin,            /*yaw*/   0, /*pos*/  3500, -2966, -7347),
    MACRO_OBJECT(/*preset*/ macro_hidden_blue_coin,            /*yaw*/   0, /*pos*/  2900, -2966, -7347),
    MACRO_OBJECT(/*preset*/ macro_goomba_triplet_spawner,      /*yaw*/   0, /*pos*/  3305, -2966, -6147),
    MACRO_OBJECT(/*preset*/ macro_coin_line_vertical,          /*yaw*/   0, /*pos*/   255,  1160,  7633),
    MACRO_OBJECT(/*preset*/ macro_coin_ring_horizontal_flying, /*yaw*/   0, /*pos*/    51,   960,  2744),
    MACRO_OBJECT(/*preset*/ macro_hidden_1up_trigger,          /*yaw*/   0, /*pos*/  5060, -4220,   720),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_hidden_1up,                  /*yaw*/   0, /*pos*/  5140, -4380,     0, /*behParam*/ 1),
    MACRO_OBJECT(/*preset*/ macro_fish_group_2,                /*yaw*/   0, /*pos*/  4072, -4463,  2027),
    MACRO_OBJECT(/*preset*/ macro_fish_group_2,                /*yaw*/   0, /*pos*/  -290,   190,  4645),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_cannon_closed,               /*yaw*/   0, /*pos*/ -4235,  1247,  2137, /*behParam*/ 0x00),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/  45, /*pos*/  2536,  1336,  6594),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal,        /*yaw*/  45, /*pos*/  4220,  1536,  5700),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/  45, /*pos*/  3987,  1336,  5148),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal,        /*yaw*/  45, /*pos*/  3280,  1536,  5940),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal,        /*yaw*/  45, /*pos*/  3200,  1536,  6720),
    MACRO_OBJECT(/*preset*/ macro_box_metal_cap,               /*yaw*/   0, /*pos*/ -7160,  1340,  2580),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,             /*yaw*/ 180, /*pos*/ -6910,  1120,  2380, /*behParam*/ DIALOG_113),
    MACRO_OBJECT(/*preset*/ macro_box_three_coins,             /*yaw*/   0, /*pos*/ -5800,  1340,  -750),
    MACRO_OBJECT(/*preset*/ macro_1up,                         /*yaw*/   0, /*pos*/   670,  3000,  3315),
    MACRO_OBJECT(/*preset*/ macro_koopa_shell_underwater,      /*yaw*/   0, /*pos*/ -1480, -1000,  4820),
    MACRO_OBJECT(/*preset*/ macro_clam_shell,                  /*yaw*/ 180, /*pos*/ -1480, -1040,  4820),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,             /*yaw*/   0, /*pos*/  5290, -2966, -4740, /*behParam*/ DIALOG_169),
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
OBJECT_WITH_ACTS(122,5000,-4800,2500,0,0,0,0x5000000, bhvStar,62),
OBJECT_WITH_ACTS(137,1540,2160,2130,0,0,0,0x4080000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(0,4900,2400,800,0,0,0,0x3000000, bhvHiddenRedCoinStar,63),
OBJECT_WITH_ACTS(0,-4236,1044,2136,0,0,0,0x0, bhvInsideCannon,31),
OBJECT_WITH_ACTS(63,-1059,1025,7072,0,247,0,0x0, bhvJrbFloatingPlatform,31),
OBJECT_WITH_ACTS(62,4330,-2966,-5618,0,90,0,0x0, bhvPillarBase,31),
OBJECT_WITH_ACTS(62,2078,-2966,-6232,0,90,0,0x0, bhvPillarBase,31),
OBJECT_WITH_ACTS(62,337,-2966,-5106,0,90,0,0x0, bhvPillarBase,31),
OBJECT_WITH_ACTS(62,-1096,-2966,-3262,0,90,0,0x0, bhvPillarBase,31),
OBJECT_WITH_ACTS(62,-1403,-2966,-4696,0,90,0,0x0, bhvPillarBase,31),
OBJECT_WITH_ACTS(62,2078,-2966,-4696,0,90,0,0x0, bhvPillarBase,31),
OBJECT_WITH_ACTS(61,4330,-2863,-5618,0,90,0,0x0, bhvFallingPillar,31),
OBJECT_WITH_ACTS(61,2078,-2863,-6232,0,90,0,0x0, bhvFallingPillar,31),
OBJECT_WITH_ACTS(61,337,-2863,-5106,0,90,0,0x0, bhvFallingPillar,31),
OBJECT_WITH_ACTS(61,-1096,-2863,-3262,0,90,0,0x0, bhvFallingPillar,31),
OBJECT_WITH_ACTS(61,-1403,-2863,-4696,0,90,0,0x0, bhvFallingPillar,31),
OBJECT_WITH_ACTS(61,2078,-2863,-4696,0,90,0,0x0, bhvFallingPillar,31),
OBJECT_WITH_ACTS(0,-2535,1075,6113,0,0,0,0x610000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,1087,2150,3798,0,0,0,0x290000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,659,2560,3314,0,0,0,0x290000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,53,2355,2724,0,0,0,0x290000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(59,5896,-393,-123,0,315,0,0x0, bhvRockSolid,31),
OBJECT_WITH_ACTS(59,2917,-3046,4818,0,241,0,0x0, bhvRockSolid,31),
OBJECT_WITH_ACTS(59,7981,410,2704,0,165,0,0x0, bhvRockSolid,31),
OBJECT_WITH_ACTS(59,3693,-4709,856,0,135,0,0x0, bhvRockSolid,31),
OBJECT_WITH_ACTS(59,5764,-4709,4427,0,315,0,0x0, bhvRockSolid,31),
OBJECT_WITH_ACTS(59,6650,-613,4941,0,315,0,0x0, bhvRockSolid,31),
OBJECT_WITH_ACTS(59,4222,-1125,7083,0,104,0,0x0, bhvRockSolid,31),
OBJECT_WITH_ACTS(59,3036,-4709,4027,0,315,0,0x0, bhvRockSolid,31),
OBJECT_WITH_ACTS(59,2931,-1697,980,0,315,0,0x0, bhvRockSolid,31),
OBJECT_WITH_ACTS(59,1079,-613,2299,0,75,0,0x0, bhvRockSolid,31),
OBJECT_WITH_ACTS(59,1787,-306,5133,0,315,0,0x0, bhvRockSolid,31),
OBJECT_WITH_ACTS(59,255,-101,4719,0,45,0,0x0, bhvRockSolid,31),
OBJECT_WITH_ACTS(59,6741,-2886,3556,0,135,0,0x0, bhvRockSolid,31),
OBJECT_WITH_ACTS(59,-845,922,7668,0,315,0,0x0, bhvRockSolid,31),
OBJECT_WITH_ACTS(59,-1798,-716,4330,0,0,0,0x0, bhvRockSolid,31),
OBJECT_WITH_ACTS(59,-1940,410,2377,0,194,0,0x0, bhvRockSolid,31),
OBJECT_WITH_ACTS(59,-3429,819,4948,0,284,0,0x0, bhvRockSolid,31),
OBJECT_WITH_ACTS(59,-815,-613,3556,0,315,0,0x0, bhvRockSolid,31),
OBJECT_WITH_ACTS(59,-5332,1434,1023,0,315,0,0x0, bhvRockSolid,31),
OBJECT_WITH_ACTS(59,-5749,1536,-1113,0,255,0,0x0, bhvRockSolid,31),
OBJECT_WITH_ACTS(59,-7481,1536,185,0,149,0,0x0, bhvRockSolid,31),
OBJECT_WITH_ACTS(59,-5228,1230,2106,0,323,0,0x0, bhvRockSolid,31),
OBJECT_WITH_ACTS(59,-3978,1536,-85,0,0,0,0x0, bhvRockSolid,31),
OBJECT_WITH_ACTS(59,1497,1741,7810,0,14,0,0x0, bhvRockSolid,31),
OBJECT_WITH_ACTS(59,3882,-2556,-5042,0,0,0,0x0, bhvRockSolid,31),
OBJECT_WITH_ACTS(59,6442,-2556,-6322,0,135,0,0x0, bhvRockSolid,31),
OBJECT_WITH_ACTS(59,1322,-2556,-3506,0,165,0,0x0, bhvRockSolid,31),
OBJECT_WITH_ACTS(59,-6549,1536,4343,0,90,0,0x0, bhvRockSolid,31),
OBJECT_WITH_ACTS(59,-981,-2556,-5298,0,255,0,0x0, bhvRockSolid,31),
OBJECT_WITH_ACTS(59,42,-2556,-6578,0,135,0,0x0, bhvRockSolid,31),
OBJECT_WITH_ACTS(59,1578,-2556,-5554,0,90,0,0x0, bhvRockSolid,31),
OBJECT_WITH_ACTS(59,-2005,-2556,-3506,0,135,0,0x0, bhvRockSolid,31),
OBJECT_WITH_ACTS(59,1834,-2556,-7090,0,194,0,0x0, bhvRockSolid,31),
OBJECT_WITH_ACTS(195,-1956,1331,6500,0,0,0,0x0, bhvBobombBuddyOpensCannon,62),
OBJECT_WITH_ACTS(0,-1800,-2812,-2100,0,0,0,0x2000000, bhvTreasureChestsJrb,31),
OBJECT_WITH_ACTS(0,4988,-5221,2473,0,0,0,0x0, bhvJetStream,62),
OBJECT_WITH_ACTS(85,6048,-5381,1154,0,340,0,0x2020000, bhvUnagi,60),
OBJECT_WITH_ACTS(85,8270,-3130,1846,0,285,0,0x1010000, bhvUnagi,2),
OBJECT_WITH_ACTS(85,6048,-5381,1154,0,340,0,0x0, bhvUnagi,1),
OBJECT_WITH_ACTS(60,4668,1434,2916,0,0,0,0x0, bhvJrbSlidingBox,62),
OBJECT_WITH_ACTS(0,4880,820,2375,0,0,0,0x0, bhvInSunkenShip3,62),
OBJECT_WITH_ACTS(56,4880,820,2375,0,0,0,0x0, bhvShipPart3,62),
OBJECT_WITH_ACTS(55,4880,820,2375,0,0,0,0x0, bhvShipPart3,62),
OBJECT_WITH_ACTS(54,4880,820,2375,0,0,0,0x0, bhvShipPart3,62),
OBJECT_WITH_ACTS(53,4880,820,2375,0,0,0,0x0, bhvShipPart3,62),
OBJECT_WITH_ACTS(0,5385,-5520,2428,0,0,0,0x0, bhvInSunkenShip2,1),
OBJECT_WITH_ACTS(0,5385,-5520,2428,0,0,0,0x0, bhvInSunkenShip,1),
OBJECT_WITH_ACTS(55,5385,-5520,2428,0,0,0,0x0, bhvSunkenShipPart2,1),
OBJECT_WITH_ACTS(53,5385,-5520,2428,0,0,0,0x0, bhvSunkenShipPart2,1),
OBJECT_WITH_ACTS(58,2385,3589,3727,0,0,0,0x0, bhvSunkenShipPart,1),
OBJECT_WITH_ACTS(57,2385,3589,3727,0,0,0,0x0, bhvSunkenShipPart,1),
OBJECT_WITH_ACTS(0,-6750,2126,1482,0,90,0,0xa0000, bhvSpinAirborneWarp,31),
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
OBJECT_WITH_ACTS(0,400,-350,-2700,0,0,0,0x0, bhvTreasureChestsShip,31),
OBJECT_WITH_ACTS(0,928,1050,-1248,0,180,0,0xa0000, bhvSwimmingWarp,31),
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
