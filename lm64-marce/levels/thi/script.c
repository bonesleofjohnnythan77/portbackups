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
#include "levels/thi/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_thi_1[] = {
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_cannon_closed,        /*yaw*/   0, /*pos*/  6656, -2832,  6964, /*behParam*/ 0x80),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal, /*yaw*/   0, /*pos*/   870,  -502,  2828),
    MACRO_OBJECT(/*preset*/ macro_hidden_1up_in_pole,   /*yaw*/   0, /*pos*/  4800,  -110,  2250),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,      /*yaw*/  90, /*pos*/  6728, -2559,  1561, /*behParam*/ DIALOG_091),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal, /*yaw*/  90, /*pos*/   -66, -1637, -4944),
    MACRO_OBJECT(/*preset*/ macro_huge_goomba,          /*yaw*/   0, /*pos*/  7069, -1535, -4758),
    MACRO_OBJECT(/*preset*/ macro_huge_goomba,          /*yaw*/   0, /*pos*/  7177, -1535, -3522),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal, /*yaw*/   0, /*pos*/  5711, -1677, -2944),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/ -1200, -1540,  1150),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  -250, -1540,  1150),
    MACRO_OBJECT(/*preset*/ macro_hidden_1up_trigger,   /*yaw*/   0, /*pos*/ -1200, -1540,  1150),
    MACRO_OBJECT(/*preset*/ macro_hidden_1up_trigger,   /*yaw*/   0, /*pos*/  -250, -1550,  1150),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_hidden_1up,           /*yaw*/   0, /*pos*/  -777, -1544,  1233, /*behParam*/ 2),
    MACRO_OBJECT(/*preset*/ macro_huge_goomba,          /*yaw*/   0, /*pos*/  4600, -1544,  3455),
    MACRO_OBJECT(/*preset*/ macro_huge_goomba,          /*yaw*/   0, /*pos*/  3444,  -522,  3011),
    MACRO_OBJECT(/*preset*/ macro_huge_goomba,          /*yaw*/   0, /*pos*/ -3622,  -511,  3100),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal, /*yaw*/   0, /*pos*/ -4911,  -395, -1433),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal, /*yaw*/  90, /*pos*/   199,  2233,   433),
    MACRO_OBJECT(/*preset*/ macro_huge_goomba,          /*yaw*/   0, /*pos*/ -3177,  1255, -2366),
    MACRO_OBJECT(/*preset*/ macro_chuckya,              /*yaw*/   0, /*pos*/ -1800,  2233,  -322),
    MACRO_OBJECT(/*preset*/ macro_fish_group,           /*yaw*/   0, /*pos*/ -6222, -3400, -1455),
    MACRO_OBJECT(/*preset*/ macro_enemy_lakitu,         /*yaw*/   0, /*pos*/ -1905, -2223,  6541),
    MACRO_OBJECT(/*preset*/ macro_fire_fly_guy,         /*yaw*/   0, /*pos*/ -1911,     0, -5822),
    MACRO_OBJECT(/*preset*/ macro_fire_fly_guy,         /*yaw*/   0, /*pos*/  6493, -2186,  5189),
    MACRO_OBJECT(/*preset*/ macro_1up,                  /*yaw*/   0, /*pos*/ -6000, -3566, -1320),
    MACRO_OBJECT(/*preset*/ macro_fish_group,           /*yaw*/   0, /*pos*/ -6550, -3450,  4100),
    MACRO_OBJECT(/*preset*/ macro_fish_group,           /*yaw*/   0, /*pos*/ -1750, -3450,  7800),
    MACRO_OBJECT(/*preset*/ macro_fish_group,           /*yaw*/   0, /*pos*/  1950, -3500,  7600),
    MACRO_OBJECT(/*preset*/ macro_box_1up_running_away, /*yaw*/   0, /*pos*/ -5712, -2190,  1100),
    MACRO_OBJECT(/*preset*/ macro_box_1up_running_away, /*yaw*/   0, /*pos*/  6022, -1722,  -633),
    MACRO_OBJECT(/*preset*/ macro_wooden_post,          /*yaw*/   0, /*pos*/ -5822, -2969,  5822),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,      /*yaw*/  90, /*pos*/  -886, -2559,  6655, /*behParam*/ DIALOG_165),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,      /*yaw*/   0, /*pos*/ -2370,  -511,  2320, /*behParam*/ DIALOG_166),
    MACRO_OBJECT(/*preset*/ macro_box_star_2,           /*yaw*/   0, /*pos*/  2600,  3500, -2400),
    MACRO_OBJECT(/*preset*/ macro_huge_goomba,          /*yaw*/   0, /*pos*/ -3180,  -511,  2080),
    MACRO_OBJECT(/*preset*/ macro_fly_guy,              /*yaw*/   0, /*pos*/  -300, -2340,  3940),
    MACRO_OBJECT(/*preset*/ macro_wooden_post,          /*yaw*/   0, /*pos*/  -520, -2560,  6660),
    MACRO_OBJECT(/*preset*/ macro_koopa,                /*yaw*/   0, /*pos*/  -800, -2236,  3080),
    MACRO_OBJECT(/*preset*/ macro_butterfly_triplet,    /*yaw*/   0, /*pos*/ -3111,  -511,  2400),
    MACRO_OBJECT(/*preset*/ macro_butterfly_triplet,    /*yaw*/   0, /*pos*/  4844,  -533,  2266),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_thi_2[] = {
    MACRO_OBJECT(/*preset*/ macro_bobomb_buddy_opens_cannon,   /*yaw*/   0, /*pos*/  1902,  -767,  1318),
    MACRO_OBJECT(/*preset*/ macro_floor_switch_hidden_objects, /*yaw*/   0, /*pos*/ -1380,  -766, -1770),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/   0, /*pos*/ -1140,  -970, -1920),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/   0, /*pos*/ -1140,  -970, -1720),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/   0, /*pos*/  -940,  -970, -1920),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/   0, /*pos*/  -940,  -970, -1720),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/   0, /*pos*/  -340,  -970, -2120),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/   0, /*pos*/  -340,  -970, -1920),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/   0, /*pos*/  -540,  -970, -1920),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/   0, /*pos*/  -740,  -970, -1920),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/   0, /*pos*/  -540,  -970, -1720),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/   0, /*pos*/  -140,  -970, -2120),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/   0, /*pos*/    40,  -970, -2520),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/   0, /*pos*/  -740,  -970, -1720),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/   0, /*pos*/  -140,  -970, -2320),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/   0, /*pos*/    40,  -970, -2320),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/   0, /*pos*/    40,  -970, -3120),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/   0, /*pos*/  -140,  -970, -2720),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/   0, /*pos*/  -140,  -970, -3320),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/   0, /*pos*/    40,  -970, -3320),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/   0, /*pos*/  -140,  -970, -2520),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/   0, /*pos*/    40,  -970, -2720),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/   0, /*pos*/  -140,  -970, -3120),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/   0, /*pos*/    40,  -970, -2920),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/   0, /*pos*/  -140,  -970, -2920),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/   0, /*pos*/   -40,  -970, -3720),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/   0, /*pos*/    40,  -970, -3520),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/   0, /*pos*/  -140,  -970, -3520),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/   0, /*pos*/  -140,  -970, -1920),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/   0, /*pos*/    40,  -970, -2120),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/   0, /*pos*/  -340,  -970, -1720),
    MACRO_OBJECT(/*preset*/ macro_fire_piranha_plant,          /*yaw*/   0, /*pos*/ -1837,  -613, -1214),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal,        /*yaw*/  90, /*pos*/    29,   666,   148),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,               /*yaw*/   0, /*pos*/   266,  -162,   829),
    MACRO_OBJECT(/*preset*/ macro_tiny_goomba,                 /*yaw*/   0, /*pos*/  1881,  -778,  1614),
    MACRO_OBJECT(/*preset*/ macro_tiny_goomba,                 /*yaw*/   0, /*pos*/  1822,  -460, -1511),
    MACRO_OBJECT(/*preset*/ macro_tiny_goomba,                 /*yaw*/   0, /*pos*/  2148,  -460,  -918),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,               /*yaw*/   0, /*pos*/  -133,  -491, -1481),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,               /*yaw*/   0, /*pos*/ -1466,   -70,  -814),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,               /*yaw*/   0, /*pos*/ -1466,  -107,  -518),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,               /*yaw*/   0, /*pos*/ -1466,  -151,  -162),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,               /*yaw*/   0, /*pos*/   133,  -491, -1496),
    MACRO_OBJECT(/*preset*/ macro_box_1up,                     /*yaw*/   0, /*pos*/ -1866,  -400,   311),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,               /*yaw*/   0, /*pos*/  -380,  -480,   370),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,               /*yaw*/   0, /*pos*/   -60,  -480,   370),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,               /*yaw*/   0, /*pos*/ -1171,  -153,  1023),
    MACRO_OBJECT(/*preset*/ macro_tiny_goomba,                 /*yaw*/   0, /*pos*/  -923,   295,  -614),
    MACRO_OBJECT(/*preset*/ macro_tiny_goomba,                 /*yaw*/   0, /*pos*/  1466,  -460,   999),
    MACRO_OBJECT(/*preset*/ macro_box_three_coins,             /*yaw*/   0, /*pos*/  1849,  -325,  -183),
    MACRO_OBJECT(/*preset*/ macro_tiny_goomba,                 /*yaw*/   0, /*pos*/  1033,  -162,   916),
    MACRO_OBJECT(/*preset*/ macro_tiny_goomba,                 /*yaw*/   0, /*pos*/  -550,   666,  -150),
    MACRO_OBJECT(/*preset*/ macro_fish_group,                  /*yaw*/   0, /*pos*/   383, -1022,  2133),
    MACRO_OBJECT(/*preset*/ macro_tiny_goomba,                 /*yaw*/   0, /*pos*/  2133,  -767,   466),
    MACRO_OBJECT(/*preset*/ macro_tiny_goomba,                 /*yaw*/   0, /*pos*/ -1033,  -153,  1050),
    MACRO_OBJECT(/*preset*/ macro_hidden_star_trigger,         /*yaw*/   0, /*pos*/  1980,  -880,  2100),
    MACRO_OBJECT(/*preset*/ macro_hidden_star_trigger,         /*yaw*/   0, /*pos*/   140,  -153,   360),
    MACRO_OBJECT(/*preset*/ macro_hidden_star_trigger,         /*yaw*/   0, /*pos*/ -1330,  -900,  1945),
    MACRO_OBJECT(/*preset*/ macro_hidden_star_trigger,         /*yaw*/   0, /*pos*/     0,  1150,  -450),
    MACRO_OBJECT(/*preset*/ macro_hidden_star_trigger,         /*yaw*/   0, /*pos*/ -1392,    92,  -633),
    MACRO_OBJECT(/*preset*/ macro_fire_spitter,                /*yaw*/   0, /*pos*/  1348,  -148,   666),
    MACRO_OBJECT(/*preset*/ macro_fire_spitter,                /*yaw*/   0, /*pos*/  1733,  -770,  1718),
    MACRO_OBJECT(/*preset*/ macro_fire_spitter,                /*yaw*/   0, /*pos*/ -2133,  -770,   296),
    MACRO_OBJECT(/*preset*/ macro_fire_spitter,                /*yaw*/   0, /*pos*/  -160,  -608,   666),
    MACRO_OBJECT(/*preset*/ macro_butterfly_triplet,           /*yaw*/   0, /*pos*/ -1693,  -890,  1746),
    MACRO_OBJECT(/*preset*/ macro_thi_koopa_the_quick,         /*yaw*/   0, /*pos*/  -600,  -153,   800),
    MACRO_OBJECT(/*preset*/ macro_hidden_box,                  /*yaw*/   0, /*pos*/   -40,  -970, -3920),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin,                 /*yaw*/   0, /*pos*/   280,  -640, -4140),
    MACRO_OBJECT(/*preset*/ macro_tiny_goomba,                 /*yaw*/   0, /*pos*/ -2020,  -890,  1720),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_thi_3[] = {
    MACRO_OBJECT(/*preset*/ macro_red_coin,             /*yaw*/   0, /*pos*/  1038,  1122,   998),
    MACRO_OBJECT(/*preset*/ macro_red_coin,             /*yaw*/   0, /*pos*/  1590,  1078,   160),
    MACRO_OBJECT(/*preset*/ macro_red_coin,             /*yaw*/   0, /*pos*/  1038,  1112,  -823),
    MACRO_OBJECT(/*preset*/ macro_red_coin,             /*yaw*/   0, /*pos*/  -238,  1122, -1319),
    MACRO_OBJECT(/*preset*/ macro_red_coin,             /*yaw*/   0, /*pos*/  -523,   824,  -500),
    MACRO_OBJECT(/*preset*/ macro_red_coin,             /*yaw*/   0, /*pos*/ -1838,  1068,   338),
    MACRO_OBJECT(/*preset*/ macro_red_coin,             /*yaw*/   0, /*pos*/  -240,  1500,  1040),
    MACRO_OBJECT(/*preset*/ macro_red_coin,             /*yaw*/   0, /*pos*/ -1914,  1360, -1909),
    MACRO_OBJECT(/*preset*/ macro_1up,                  /*yaw*/   0, /*pos*/ -1920,  1540, -1040),
    MACRO_OBJECT(/*preset*/ macro_blue_coin_switch,     /*yaw*/   0, /*pos*/ -1495,  1434,  1595),
    MACRO_OBJECT(/*preset*/ macro_hidden_blue_coin,     /*yaw*/   0, /*pos*/  -540,  1500,  1240),
    MACRO_OBJECT(/*preset*/ macro_hidden_blue_coin,     /*yaw*/   0, /*pos*/  -840,  1500,  1440),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal, /*yaw*/  45, /*pos*/ -1200,  2200, -1200),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal, /*yaw*/  45, /*pos*/  1200,  2200,  1200),
    MACRO_OBJECT(/*preset*/ macro_fire_spitter,         /*yaw*/   0, /*pos*/  -224,  1456,   672),
MACRO_OBJECT_END(),
};

static const LevelScript script_func_local_1[] = {
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,    /*pos*/     0, -700, -4500, /*angle*/ 0, 0, 0, /*behParam*/ 0x03000000, /*beh*/ bhvHiddenStar,          /*acts*/ ALL_ACTS),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,             /*pos*/ -1800,   800, -1500, /*angle*/ 0,   0, 0, /*behParam*/ 0x04000000, /*beh*/ bhvHiddenRedCoinStar, /*acts*/ ALL_ACTS),
    OBJECT(/*model*/ MODEL_WIGGLER_HEAD,     /*pos*/    17,  1843,   -62, /*angle*/ 0,   0, 0, /*behParam*/ 0x05000000, /*beh*/ bhvWigglerHead),
    RETURN(),
};

static const LevelScript script_func_local_4[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_KOOPA_WITH_SHELL, /*pos*/ -1900,  -511,  2400, /*angle*/ 0, -30, 0, /*behParam*/ 0x02030000, /*beh*/ bhvKoopa,             /*acts*/ ACT_3),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,             /*pos*/  7400, -1537, -6300, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvKoopaRaceEndpoint, /*acts*/ ACT_3),
    OBJECT(/*model*/ MODEL_NONE,             /*pos*/ -6556, -2969,  6565, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvGoombaTripletSpawner),
    OBJECT(/*model*/ MODEL_GOOMBA,           /*pos*/  6517, -2559,  4327, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvGoomba),
    OBJECT(/*model*/ MODEL_PIRANHA_PLANT,    /*pos*/ -6336, -2047, -3861, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvFirePiranhaPlant),
    OBJECT(/*model*/ MODEL_PIRANHA_PLANT,    /*pos*/ -5740, -2047, -6578, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvFirePiranhaPlant),
    OBJECT(/*model*/ MODEL_PIRANHA_PLANT,    /*pos*/ -6481, -2047, -5998, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvFirePiranhaPlant),
    OBJECT(/*model*/ MODEL_PIRANHA_PLANT,    /*pos*/ -5577, -2047, -4961, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvFirePiranhaPlant),
    OBJECT(/*model*/ MODEL_PIRANHA_PLANT,    /*pos*/ -6865, -2047, -4568, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvFirePiranhaPlant),
    OBJECT(/*model*/ MODEL_NONE,             /*pos*/ -4413,   204, -2140, /*angle*/ 0,   0, 0, /*behParam*/ 0x00030000, /*beh*/ bhvThiBowlingBallSpawner),
    OBJECT(/*model*/ MODEL_BUBBA,            /*pos*/ -6241, -3300,  -716, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBubba),
    OBJECT(/*model*/ MODEL_BUBBA,            /*pos*/  1624, -3300,  8142, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBubba),
    RETURN(),
};

static const LevelScript script_func_local_5[] = {
    OBJECT(/*model*/ MODEL_THI_HUGE_ISLAND_TOP, /*pos*/     0, 3891, -1533, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvThiHugeIslandTop),
    RETURN(),
};

static const LevelScript script_func_local_6[] = {
    OBJECT(/*model*/ MODEL_THI_TINY_ISLAND_TOP, /*pos*/     0, 1167,  -460, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvThiTinyIslandTop),
    OBJECT(/*model*/ MODEL_NONE,                /*pos*/ -1382,   80,  -649, /*angle*/ 0, 0, 0, /*behParam*/ 0x00040000, /*beh*/ bhvThiBowlingBallSpawner),
    RETURN(),
};

static const LevelScript script_func_local_7[] = {
    OBJECT(/*model*/ MODEL_THI_WARP_PIPE, /*pos*/  6656, -1536, -5632, /*angle*/ 0, 0, 0, /*behParam*/ 0x00320000, /*beh*/ bhvWarpPipe),
    OBJECT(/*model*/ MODEL_THI_WARP_PIPE, /*pos*/ -5888, -2048, -5888, /*angle*/ 0, 0, 0, /*behParam*/ 0x00330000, /*beh*/ bhvWarpPipe),
    OBJECT(/*model*/ MODEL_THI_WARP_PIPE, /*pos*/ -3072,   512, -3840, /*angle*/ 0, 0, 0, /*behParam*/ 0x00340000, /*beh*/ bhvWarpPipe),
    WARP_NODE(/*id*/ 0x32, /*destLevel*/ LEVEL_THI, /*destArea*/ 0x02, /*destNode*/ 0x32, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x33, /*destLevel*/ LEVEL_THI, /*destArea*/ 0x02, /*destNode*/ 0x33, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x34, /*destLevel*/ LEVEL_THI, /*destArea*/ 0x02, /*destNode*/ 0x34, /*flags*/ WARP_NO_CHECKPOINT),
    RETURN(),
};

static const LevelScript script_func_local_8[] = {
    OBJECT(/*model*/ MODEL_THI_WARP_PIPE, /*pos*/  1997, -461, -1690, /*angle*/ 0, 0, 0, /*behParam*/ 0x00320000, /*beh*/ bhvWarpPipe),
    OBJECT(/*model*/ MODEL_THI_WARP_PIPE, /*pos*/ -1766, -614, -1766, /*angle*/ 0, 0, 0, /*behParam*/ 0x00330000, /*beh*/ bhvWarpPipe),
    OBJECT(/*model*/ MODEL_THI_WARP_PIPE, /*pos*/  -922,  154, -1152, /*angle*/ 0, 0, 0, /*behParam*/ 0x00340000, /*beh*/ bhvWarpPipe),
    WARP_NODE(/*id*/ 0x32, /*destLevel*/ LEVEL_THI, /*destArea*/ 0x01, /*destNode*/ 0x32, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x33, /*destLevel*/ LEVEL_THI, /*destArea*/ 0x01, /*destNode*/ 0x33, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x34, /*destLevel*/ LEVEL_THI, /*destArea*/ 0x01, /*destNode*/ 0x34, /*flags*/ WARP_NO_CHECKPOINT),
    RETURN(),
};

const LevelScript level_thi_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _thi_segment_7SegmentRomStart, _thi_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _grass_mio0SegmentRomStart, _grass_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group11_mio0SegmentRomStart, _group11_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group11_geoSegmentRomStart,  _group11_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group14_mio0SegmentRomStart, _group14_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group14_geoSegmentRomStart,  _group14_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_12),
    JUMP_LINK(script_func_global_15),
    LOAD_MODEL_FROM_GEO(MODEL_THI_BUBBLY_TREE,     bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,   thi_geo_0005F0),
    LOAD_MODEL_FROM_GEO(MODEL_THI_WARP_PIPE,       warp_pipe_geo),
    LOAD_MODEL_FROM_GEO(MODEL_THI_HUGE_ISLAND_TOP, thi_geo_0005B0),
    LOAD_MODEL_FROM_GEO(MODEL_THI_TINY_ISLAND_TOP, thi_geo_0005C8),

    AREA(/*index*/ 1, thi_geo_000608),
MACRO_OBJECTS(local_macro_objects_thi_1),
WARP_NODE(52,13,2,52,0),
WARP_NODE(51,13,2,51,0),
WARP_NODE(50,13,2,50,0),
WARP_NODE(241,6,2,105,0),
WARP_NODE(240,6,2,55,0),
WARP_NODE(13,13,3,11,0),
WARP_NODE(12,13,3,10,0),
WARP_NODE(11,13,1,11,0),
WARP_NODE(10,13,1,10,0),
OBJECT_WITH_ACTS(89,1624,-3300,8142,0,0,0,0x0, bhvBubba,31),
OBJECT_WITH_ACTS(103,-3396,-494,3165,0,0,0,0x0, bhvWhompKingBoss,31),
OBJECT_WITH_ACTS(0,-4413,204,-2140,0,0,0,0x30000, bhvThiBowlingBallSpawner,31),
OBJECT_WITH_ACTS(100,-6865,-2047,-4568,0,0,0,0x10000, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,-5577,-2047,-4961,0,0,0,0x10000, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,-6481,-2047,-5998,0,0,0,0x10000, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,-5740,-2047,-6578,0,0,0,0x10000, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,-6336,-2047,-3861,0,0,0,0x10000, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(192,6517,-2559,4327,0,0,0,0x10000, bhvGoomba,31),
OBJECT_WITH_ACTS(0,-6556,-2969,6565,0,0,0,0x10000, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,7400,-1537,-6300,0,0,0,0x0, bhvKoopaRaceEndpoint,4),
OBJECT_WITH_ACTS(104,-1900,-511,2400,0,-30,0,0x2030000, bhvKoopa,4),
OBJECT_WITH_ACTS(54,0,3891,-1533,0,0,0,0x0, bhvThiHugeIslandTop,31),
OBJECT_WITH_ACTS(22,-3072,512,-3840,0,0,0,0x340000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-5888,-2048,-5888,0,0,0,0x330000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,6656,-1536,-5632,0,0,0,0x320000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,0,3170,-1570,0,0,0,0xa0d0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,410,-512,717,0,0,0,0x50c0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,410,-512,922,0,0,0,0xb0000, bhvInstantActiveWarp,31),
OBJECT_WITH_ACTS(0,-7372,-1969,7373,0,149,0,0xa0000, bhvSpinAirborneWarp,31),
        TERRAIN(/*terrainData*/ thi_seg7_area_1_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_LEVEL_GRASS),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_GRASS),
    END_AREA(),

    AREA(/*index*/ 2, thi_geo_0006D4),
MACRO_OBJECTS(local_macro_objects_thi_2),
WARP_NODE(52,13,1,52,0),
WARP_NODE(51,13,1,51,0),
WARP_NODE(50,13,1,50,0),
WARP_NODE(241,6,2,101,0),
WARP_NODE(240,6,2,51,0),
WARP_NODE(12,13,2,11,0),
WARP_NODE(11,13,2,12,0),
WARP_NODE(10,13,2,10,0),
OBJECT_WITH_ACTS(0,-1382,80,-649,0,0,0,0x40000, bhvThiBowlingBallSpawner,31),
OBJECT_WITH_ACTS(55,0,1167,-460,0,0,0,0x0, bhvThiTinyIslandTop,31),
OBJECT_WITH_ACTS(0,0,-700,-4500,0,0,0,0x3000000, bhvHiddenStar,63),
OBJECT_WITH_ACTS(22,-922,154,-1152,0,0,0,0x340000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-1766,-614,-1766,0,0,0,0x330000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,1997,-461,-1690,0,0,0,0x320000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,-1638,0,-1988,0,-126,0,0xc0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,280,-767,-4180,0,0,0,0xb0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-2211,110,2212,0,149,0,0xa0000, bhvSpinAirborneWarp,31),
        TERRAIN(/*terrainData*/ thi_seg7_area_2_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_LEVEL_GRASS),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_GRASS),
    END_AREA(),

    AREA(/*index*/ 3, thi_geo_00079C),
MACRO_OBJECTS(local_macro_objects_thi_3),
WARP_NODE(241,6,2,105,0),
WARP_NODE(240,6,2,55,0),
WARP_NODE(12,13,1,11,0),
WARP_NODE(11,13,3,11,0),
WARP_NODE(10,13,3,10,0),
OBJECT_WITH_ACTS(87,17,1843,-62,0,0,0,0x5000000, bhvWigglerHead,31),
OBJECT_WITH_ACTS(0,-1800,800,-1500,0,0,0,0x4000000, bhvHiddenRedCoinStar,63),
OBJECT_WITH_ACTS(0,512,1024,2355,0,0,0,0x50c0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,0,3277,0,0,0,0,0xb0000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(0,512,1024,2150,0,180,0,0xa0000, bhvInstantActiveWarp,31),
        TERRAIN(/*terrainData*/ thi_seg7_area_3_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0004, /*seq*/ SEQ_LEVEL_UNDERGROUND),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_GRASS),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 149, /*pos*/ -7372, -2969, 7373),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
