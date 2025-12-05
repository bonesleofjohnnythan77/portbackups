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
#include "levels/hmc/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_hmc_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,5750,65486,2425,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_vanish_cap,0,58986,900,3300,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,2000,64513,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,650,2050,5100,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,650,2050,5100,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,6833,0,63936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,6833,0,63936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_monty_mole_hole,0,58286,2165,7750,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,5720,500,5115,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,6903,1024,6981,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,6903,1024,6981,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal_flying,0,61936,61257,3600,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_floor_switch_hidden_objects,270,118,60846,3355,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,61936,61664,3600,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,60436,2678,65436,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,1762,65013,62926,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,5018,65012,59977,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,64863,1550,3650,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,64561,65011,58196,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,62711,110,59011,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,63591,61056,65061,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,3462,65214,64411,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,65036,1400,3850,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bouncing_fireball,0,4750,3000,4650,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,65036,1400,3500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,2260,63396,63876,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,5760,63676,63936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,4560,63568,64037,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,1768,844,5086,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,60286,2750,6525,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,5100,63636,61036,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,58956,1680,59756,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,4715,64736,62821,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,4715,65043,62821,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,4715,65350,62821,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,4715,64736,62516,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_metal_cap,0,62536,2200,59136,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,3850,64936,150,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,4608,63775,268,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,6808,903,4745,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,3850,65236,150,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,3238,63821,65346,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,3850,65236,65386,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,4017,63636,62722,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,3686,63485,61524,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,5553,63787,60561,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,4715,65043,62516,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,4715,65350,62516,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,45,1040,700,2710,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal_flying,0,62536,1850,59136,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,3850,64636,65386,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,3850,64936,65386,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,3850,64636,150,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,1000,1300,5300,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,6075,65486,2425,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,4075,0,5000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,3225,2075,6825,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_blue_coin_switch,0,1050,1607,5300,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,3225,2075,6550,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,2960,2075,6550,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,2695,2075,6550,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,2430,2050,6550,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,2165,2050,6550,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1900,2050,6550,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1900,2050,6825,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,2800,205,463,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,1800,65127,58146,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal_flying,143,60194,2809,63746,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_star_1,0,61936,62386,3600,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bouncing_fireball,180,4750,3000,4650,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,28,62286,350,1375,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,3540,64062,59486,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,2702,63878,59997,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,2064,63648,61375,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,58038,1331,64956,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,58038,1331,64956,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,58036,2220,7500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,58036,2220,7500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,3088,63636,62661,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bouncing_fireball,270,4750,3000,4650,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bouncing_fireball,90,4750,3000,4650,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,4800,900,4175,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,5250,900,4650,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_recovery_heart,0,4750,1100,4650,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_monty_mole_2,0,58018,2161,7508,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,62636,1620,4640,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,60286,2750,6225,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,60286,2750,6825,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,45,825,700,2925,0),
MACRO_OBJECT_END(),
};

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 4936, -357, -4146, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 5018, -460, -5559, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 1997,  666,  -235, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 1762, -460, -2610, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 4178, -255, -3737, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 2233, -460,   256, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 5510, -255, -3429, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 4690, -357,  -767, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 3462, -255, -1125, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 1762,  666,     0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 1762, -460,   256, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 6482,  461,  3226, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 1075,  461,  6543, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 6912,  461,  6543, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 6912,  461,  3697, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 6482,  461,  7014, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 3817,  717,  1034, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_NONE,      /*pos*/  799, 1024,  4434, /*angle*/ 0, 0, 0, /*behParam*/ 0x00B80000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,      /*pos*/  889, 1024,  3277, /*angle*/ 0, 0, 0, /*behParam*/ 0x00B80000, /*beh*/ bhvPoleGrabbing),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_HMC_METAL_PLATFORM,    /*pos*/  1100,   950,  6350, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvControllablePlatform),
    OBJECT(/*model*/ MODEL_HMC_ELEVATOR_PLATFORM, /*pos*/ -3243,  1434,  1392, /*angle*/ 0,  27, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHmcElevatorPlatform),
    OBJECT(/*model*/ MODEL_HMC_ELEVATOR_PLATFORM, /*pos*/ -2816,  2253, -2509, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvHmcElevatorPlatform),
    OBJECT(/*model*/ MODEL_HMC_ELEVATOR_PLATFORM, /*pos*/  -973,  1741, -7347, /*angle*/ 0,   0, 0, /*behParam*/ 0x00020000, /*beh*/ bhvHmcElevatorPlatform),
    OBJECT(/*model*/ MODEL_HMC_ELEVATOR_PLATFORM, /*pos*/ -3533,  1741, -7040, /*angle*/ 0,   0, 0, /*behParam*/ 0x00030000, /*beh*/ bhvHmcElevatorPlatform),
    OBJECT(/*model*/ MODEL_NONE,                  /*pos*/   614, -4690,  2330, /*angle*/ 0, 270, 0, /*behParam*/ 0x00010000, /*beh*/ bhvOpenableGrill),
    OBJECT(/*model*/ MODEL_PURPLE_SWITCH,         /*pos*/  -307, -4997,  2483, /*angle*/ 0, 270, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFloorSwitchGrills),
    OBJECT(/*model*/ MODEL_CHECKERBOARD_PLATFORM, /*pos*/  1270,  2000,  4000, /*angle*/ 0, 270, 0, /*behParam*/ 0x09A40000, /*beh*/ bhvPlatformOnTrack),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT(/*model*/ MODEL_DORRIE, /*pos*/ -3533, -4969,  3558, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvDorrie),
    OBJECT(/*model*/ MODEL_NONE,   /*pos*/ -6093,  3075, -7807, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBigBoulderGenerator),
    OBJECT(/*model*/ MODEL_NONE,   /*pos*/  -500,  1600,  3500, /*angle*/ 0, 0, 0, /*behParam*/ 0x00040000, /*beh*/ bhvFlamethrower),
    OBJECT(/*model*/ MODEL_NONE,   /*pos*/  -500,  1600,  3800, /*angle*/ 0, 0, 0, /*behParam*/ 0x00040000, /*beh*/ bhvFlamethrower),
    RETURN(),
};

static const LevelScript script_func_local_4[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ -3600, -4000,  3600, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/  4000,   300,  5000, /*angle*/ 0, 0, 0, /*behParam*/ 0x01000000, /*beh*/ bhvHiddenRedCoinStar, /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/  6200, -4400,  2300, /*angle*/ 0, 0, 0, /*behParam*/ 0x02000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ -2100,  2100, -7550, /*angle*/ 0, 0, 0, /*behParam*/ 0x03000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ -6500,  2700, -1600, /*angle*/ 0, 0, 0, /*behParam*/ 0x04000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ -5000,  3050, -6700, /*angle*/ 0, 0, 0, /*behParam*/ 0x05000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    RETURN(),
};

const LevelScript level_hmc_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _hmc_segment_7SegmentRomStart, _hmc_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _cave_mio0SegmentRomStart, _cave_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group6_mio0SegmentRomStart, _group6_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group6_geoSegmentRomStart, _group6_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group17_mio0SegmentRomStart, _group17_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_7),
    JUMP_LINK(script_func_global_18),
    LOAD_MODEL_FROM_GEO(MODEL_HMC_WOODEN_DOOR,          wooden_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_DOOR,           metal_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_HMC_HAZY_MAZE_DOOR,       hazy_maze_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_PLATFORM,       hmc_geo_0005A0),
    LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_ARROW_PLATFORM, hmc_geo_0005B8),
    LOAD_MODEL_FROM_GEO(MODEL_HMC_ELEVATOR_PLATFORM,    hmc_geo_0005D0),
    LOAD_MODEL_FROM_GEO(MODEL_HMC_ROLLING_ROCK,         hmc_geo_000548),
    LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_PIECE,           hmc_geo_000570),
    LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_SMALL_PIECE,     hmc_geo_000588),
    LOAD_MODEL_FROM_GEO(MODEL_HMC_RED_GRILLS,           hmc_geo_000530),

    AREA(/*index*/ 1, hmc_geo_000B90),
MACRO_OBJECTS(local_macro_objects_hmc_1),
WARP_NODE(241,6,3,102,0),
WARP_NODE(240,6,3,52,0),
WARP_NODE(11,28,1,10,0),
WARP_NODE(10,7,1,10,0),
OBJECT_WITH_ACTS(122,-5000,2925,-6700,0,0,0,0x5000000, bhvStar
,63),
OBJECT_WITH_ACTS(122,-6500,2700,-1600,0,0,0,0x4000000, bhvStar
,63),
OBJECT_WITH_ACTS(122,-2100,2100,-7550,0,0,0,0x3000000, bhvStar
,63),
OBJECT_WITH_ACTS(0,5910,575,1650,0,0,0,0x2000000, bhvHiddenStar
,63),
OBJECT_WITH_ACTS(0,6250,-4500,2325,0,0,0,0x1000000, bhvHiddenRedCoinStar
,63),
OBJECT_WITH_ACTS(84,-7750,2165,7250,0,0,0,0x0, bhvMontyMoleHole
,145),
OBJECT_WITH_ACTS(0,-6000,3075,-7800,0,0,0,0x0, bhvBigBoulderGenerator
,31),
OBJECT_WITH_ACTS(0,915,0,2800,0,45,0,0x10000, bhvOpenableGrill
,31),
OBJECT_WITH_ACTS(0,-5700,3075,-7807,0,0,0,0x0, bhvBigBoulderGenerator
,31),
OBJECT_WITH_ACTS(104,-3533,-4969,3558,0,0,0,0x0, bhvDorrie
,31),
OBJECT_WITH_ACTS(0,-6300,3075,-7807,0,0,0,0x0, bhvBigBoulderGenerator
,31),
OBJECT_WITH_ACTS(207,-307,-4997,2483,0,270,0,0x0, bhvFloorSwitchGrills
,31),
OBJECT_WITH_ACTS(0,614,-4690,2330,0,270,0,0x10000, bhvOpenableGrill
,31),
OBJECT_WITH_ACTS(56,-3533,1741,-7040,0,0,0,0x30000, bhvHmcElevatorPlatform
,31),
OBJECT_WITH_ACTS(56,-973,1741,-7347,0,0,0,0x20000, bhvHmcElevatorPlatform
,31),
OBJECT_WITH_ACTS(56,-2816,2253,-2509,0,0,0,0x10000, bhvHmcElevatorPlatform
,31),
OBJECT_WITH_ACTS(0,-5365,2048,6530,0,90,0,0x10000, bhvOpenableGrill
,31),
OBJECT_WITH_ACTS(144,6482,461,7014,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(0,889,1024,3277,0,0,0,0xb80000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(0,799,1024,4434,0,0,0,0xb80000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(144,3817,717,1034,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(0,-6540,1536,2500,0,0,0,0x10000, bhvOpenableGrill
,31),
OBJECT_WITH_ACTS(144,6912,461,3697,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(144,6912,461,6543,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(144,1075,461,6543,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(144,6482,461,3226,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(144,1762,-460,256,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(144,1762,666,0,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(144,3462,-255,-1125,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(144,4690,-357,-767,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(144,5510,-255,-3429,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(144,2233,-460,256,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(144,4178,-255,-3737,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(144,1762,-460,-2610,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(144,1997,666,-235,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(144,5018,-460,-5559,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(144,4936,-357,-4146,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(0,3351,-4690,4773,0,0,0,0x340b0000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,-6550,1500,3275,0,0,0,0xa0000, bhvSpinAirborneWarp
,31),
        TERRAIN(/*terrainData*/ hmc_seg7_collision_level),
        ROOMS(/*surfaceRooms*/ hmc_seg7_rooms),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0004, /*seq*/ SEQ_LEVEL_UNDERGROUND),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 135, /*pos*/ -7152, 2161, 7181),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
