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
MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,             /*yaw*/ 315, /*pos*/ -6060,  2048,  5960, /*behParam*/ DIALOG_089),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,             /*yaw*/   0, /*pos*/ -6770,  1845,  4577, /*behParam*/ DIALOG_050),
    MACRO_OBJECT(/*preset*/ macro_swoop_2,                     /*yaw*/   0, /*pos*/  -439,   220, -2540),
    MACRO_OBJECT(/*preset*/ macro_swoop,                       /*yaw*/   0, /*pos*/    80,   140, -4660),
    MACRO_OBJECT(/*preset*/ macro_swoop,                       /*yaw*/   0, /*pos*/   800,    60, -7500),
    MACRO_OBJECT(/*preset*/ macro_swoop_2,                     /*yaw*/   0, /*pos*/  1880,   100, -7620),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,             /*yaw*/   0, /*pos*/  2500,   217,    50, /*behParam*/ DIALOG_071),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,             /*yaw*/   0, /*pos*/  2900,   217,    50, /*behParam*/ DIALOG_062),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,             /*yaw*/ 270, /*pos*/   838,  2052,  3580, /*behParam*/ DIALOG_088),
    MACRO_OBJECT(/*preset*/ macro_scuttlebug,                  /*yaw*/   0, /*pos*/ -6320,  2048,  6740),
    MACRO_OBJECT(/*preset*/ macro_scuttlebug,                  /*yaw*/   0, /*pos*/ -5455,  1536,   521),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/  2140,  2048,  6540),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/  2900,  2048,  6500),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/  6400,  2090,  5320),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/  6820,  1024,  3300),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/  6260,  1124,  4960),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/  4080,  1124,  5760),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/  4640,  2250,  3980),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/  2960,  1124,  5140),
    MACRO_OBJECT(/*preset*/ macro_box_metal_cap,               /*yaw*/  45, /*pos*/ -6924,  2440,  7364),
    MACRO_OBJECT(/*preset*/ macro_scuttlebug,                  /*yaw*/   0, /*pos*/  4160,    28,  6308),
    MACRO_OBJECT(/*preset*/ macro_scuttlebug,                  /*yaw*/   0, /*pos*/  5392,    28,  3587),
    MACRO_OBJECT(/*preset*/ macro_snufit,                      /*yaw*/   0, /*pos*/  2260,  -627, -1660),
    MACRO_OBJECT(/*preset*/ macro_snufit,                      /*yaw*/   0, /*pos*/  5760,  -623, -1600),
    MACRO_OBJECT(/*preset*/ macro_snufit,                      /*yaw*/   0, /*pos*/  4560,  -620, -1499),
    MACRO_OBJECT(/*preset*/ macro_box_metal_cap,               /*yaw*/   0, /*pos*/  5860,  -550,  -739),
    MACRO_OBJECT(/*preset*/ macro_box_metal_cap,               /*yaw*/   0, /*pos*/  1939,  -600, -2920),
    MACRO_OBJECT(/*preset*/ macro_box_metal_cap,               /*yaw*/   0, /*pos*/  5100,  -600, -4500),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal,        /*yaw*/   0, /*pos*/ -6580,  1680, -5780),
    MACRO_OBJECT(/*preset*/ macro_breakable_box_no_coins,      /*yaw*/   0, /*pos*/  1022,  1848,  5120),
    MACRO_OBJECT(/*preset*/ macro_breakable_box_no_coins,      /*yaw*/   0, /*pos*/  3500,  2150,  3000),
    MACRO_OBJECT(/*preset*/ macro_scuttlebug_spawner,          /*yaw*/ 270, /*pos*/  3240, -4720,  2360),
    MACRO_OBJECT(/*preset*/ macro_coin_ring_horizontal,        /*yaw*/   0, /*pos*/ -3600, -4240,  3600),
    MACRO_OBJECT(/*preset*/ macro_box_metal_cap,               /*yaw*/   0, /*pos*/ -3000, -2250, -6400),
    MACRO_OBJECT(/*preset*/ macro_scuttlebug_spawner,          /*yaw*/ 270, /*pos*/ -3420,  1800,  5960),
    MACRO_OBJECT(/*preset*/ macro_swoop,                       /*yaw*/   0, /*pos*/  6080,  3060,  4660),
    MACRO_OBJECT(/*preset*/ macro_swoop,                       /*yaw*/   0, /*pos*/  5480,  3000,  7120),
    MACRO_OBJECT(/*preset*/ macro_coin_ring_horizontal,        /*yaw*/   0, /*pos*/ -2700,  2060, -6400),
    MACRO_OBJECT(/*preset*/ macro_swoop_2,                     /*yaw*/   0, /*pos*/ -5440,  1720,  -320),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,               /*yaw*/   0, /*pos*/ -2220,  2048,  4440),
    MACRO_OBJECT(/*preset*/ macro_recovery_heart,              /*yaw*/   0, /*pos*/ -7511,  1420,  -666),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,             /*yaw*/ 270, /*pos*/ -3359,  1536,   298, /*behParam*/ DIALOG_122),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,             /*yaw*/   0, /*pos*/ -3092,  2033, -7685, /*behParam*/ DIALOG_138),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,             /*yaw*/   0, /*pos*/  5439,     0,  2785, /*behParam*/ DIALOG_125),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,             /*yaw*/   0, /*pos*/ -3184,     0,   699, /*behParam*/ DIALOG_126),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,             /*yaw*/ 270, /*pos*/   500, -4300,  3644, /*behParam*/ DIALOG_127),
    MACRO_OBJECT(/*preset*/ macro_box_1up,                     /*yaw*/   0, /*pos*/ -4960,  2700,    80),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,             /*yaw*/ 180, /*pos*/  2006,     0,  6713, /*behParam*/ DIALOG_124),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,             /*yaw*/   0, /*pos*/  2510,     0,  2800, /*behParam*/ DIALOG_140),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,             /*yaw*/  90, /*pos*/   510,     0,  5380, /*behParam*/ DIALOG_139),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,               /*yaw*/   0, /*pos*/ -2340,  2040,  4560),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,               /*yaw*/   0, /*pos*/ -2460,  2040,  4660),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,               /*yaw*/   0, /*pos*/ -2060,  2040,  4380),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,               /*yaw*/   0, /*pos*/ -1920,  2040,  4320),
    MACRO_OBJECT(/*preset*/ macro_blue_coin_switch,            /*yaw*/   0, /*pos*/  5145,  -767, -2954),
    MACRO_OBJECT(/*preset*/ macro_hidden_blue_coin,            /*yaw*/   0, /*pos*/  3945, -1023, -2918),
    MACRO_OBJECT(/*preset*/ macro_hidden_blue_coin,            /*yaw*/   0, /*pos*/  3800, -1023, -4009),
    MACRO_OBJECT(/*preset*/ macro_hidden_blue_coin,            /*yaw*/   0, /*pos*/  3036,  -858, -4118),
    MACRO_OBJECT(/*preset*/ macro_hidden_blue_coin,            /*yaw*/   0, /*pos*/  2018,  -921, -4154),
    MACRO_OBJECT(/*preset*/ macro_hidden_blue_coin,            /*yaw*/   0, /*pos*/  1836,  -921, -4700),
    MACRO_OBJECT(/*preset*/ macro_hidden_blue_coin,            /*yaw*/   0, /*pos*/  1836,  -721, -4700),
    MACRO_OBJECT(/*preset*/ macro_hidden_blue_coin,            /*yaw*/   0, /*pos*/  1836,  -521, -4700),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal,        /*yaw*/  90, /*pos*/  2800,   205,   463),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal,        /*yaw*/  90, /*pos*/  1800,  -409, -7390),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal_flying, /*yaw*/ 144, /*pos*/ -5342,  2809, -1790),
    MACRO_OBJECT(/*preset*/ macro_swoop_2,                     /*yaw*/   0, /*pos*/  5632,  -563, -4454),
    MACRO_OBJECT(/*preset*/ macro_swoop_2,                     /*yaw*/   0, /*pos*/  4915,  -665, -5274),
    MACRO_OBJECT(/*preset*/ macro_swoop,                       /*yaw*/   0, /*pos*/  5120,  -665, -4660),
    MACRO_OBJECT(/*preset*/ macro_swoop,                       /*yaw*/   0, /*pos*/  5427,  -665, -5070),
    MACRO_OBJECT(/*preset*/ macro_snufit,                      /*yaw*/   0, /*pos*/  2439,  -722, -5499),
    MACRO_OBJECT(/*preset*/ macro_monty_mole_hole,             /*yaw*/   0, /*pos*/  2714,  -768, -4096),
    MACRO_OBJECT(/*preset*/ macro_monty_mole_hole,             /*yaw*/   0, /*pos*/  3011,  -768, -1272),
    MACRO_OBJECT(/*preset*/ macro_monty_mole_hole,             /*yaw*/   0, /*pos*/  3324,  -768, -1475),
    MACRO_OBJECT(/*preset*/ macro_monty_mole,                  /*yaw*/   0, /*pos*/  3940,  -768, -2880),
    MACRO_OBJECT(/*preset*/ macro_mr_i,                        /*yaw*/   0, /*pos*/  4740,  1060,  4680),
    MACRO_OBJECT(/*preset*/ macro_mr_i,                        /*yaw*/   0, /*pos*/  6700,  1020,  6820),
    MACRO_OBJECT(/*preset*/ macro_breakable_box_no_coins,      /*yaw*/   0, /*pos*/  2960,  1024,  5140),
    MACRO_OBJECT(/*preset*/ macro_breakable_box_no_coins,      /*yaw*/   0, /*pos*/  4080,  1024,  5760),
    MACRO_OBJECT(/*preset*/ macro_breakable_box_no_coins,      /*yaw*/   0, /*pos*/  6260,  1024,  4960),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,             /*yaw*/ 135, /*pos*/ -4370,  2860, -2243, /*behParam*/ DIALOG_043),
    MACRO_OBJECT(/*preset*/ macro_flamethrower,                /*yaw*/   0, /*pos*/ -2900,  1620,  4640),
    MACRO_OBJECT(/*preset*/ macro_fire_spitter,                /*yaw*/   0, /*pos*/  1420,  -380, -7040),
    MACRO_OBJECT(/*preset*/ macro_fire_spitter,                /*yaw*/   0, /*pos*/  2500,  -380, -7740),
    MACRO_OBJECT(/*preset*/ macro_box_1up_running_away,        /*yaw*/   0, /*pos*/ -2700,  2100, -6400),
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
OBJECT_WITH_ACTS(122,-5000,3050,-6700,0,0,0,0x5000000, bhvStar,63),
OBJECT_WITH_ACTS(122,-6500,2700,-1600,0,0,0,0x4000000, bhvStar,63),
OBJECT_WITH_ACTS(122,-2100,2100,-7550,0,0,0,0x3000000, bhvStar,63),
OBJECT_WITH_ACTS(122,6200,-4400,2300,0,0,0,0x2000000, bhvStar,63),
OBJECT_WITH_ACTS(0,4000,300,5000,0,0,0,0x1000000, bhvHiddenRedCoinStar,63),
OBJECT_WITH_ACTS(122,-3600,-4000,3600,0,0,0,0x0, bhvStar,63),
OBJECT_WITH_ACTS(0,-500,1600,3800,0,0,0,0x40000, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,-500,1600,3500,0,0,0,0x40000, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,-6093,3075,-7807,0,0,0,0x0, bhvBigBoulderGenerator,31),
OBJECT_WITH_ACTS(104,-3533,-4969,3558,0,0,0,0x0, bhvDorrie,31),
OBJECT_WITH_ACTS(202,1270,2000,4000,0,270,0,0x9a40000, bhvPlatformOnTrack,31),
OBJECT_WITH_ACTS(207,-307,-4997,2483,0,270,0,0x0, bhvFloorSwitchGrills,31),
OBJECT_WITH_ACTS(0,614,-4690,2330,0,270,0,0x10000, bhvOpenableGrill,31),
OBJECT_WITH_ACTS(56,-3533,1741,-7040,0,0,0,0x30000, bhvHmcElevatorPlatform,31),
OBJECT_WITH_ACTS(56,-973,1741,-7347,0,0,0,0x20000, bhvHmcElevatorPlatform,31),
OBJECT_WITH_ACTS(56,-2816,2253,-2509,0,0,0,0x10000, bhvHmcElevatorPlatform,31),
OBJECT_WITH_ACTS(56,-3243,1434,1392,0,27,0,0x0, bhvHmcElevatorPlatform,31),
OBJECT_WITH_ACTS(54,1100,950,6350,0,0,0,0x0, bhvControllablePlatform,31),
OBJECT_WITH_ACTS(0,889,1024,3277,0,0,0,0xb80000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,799,1024,4434,0,0,0,0xb80000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(144,3817,717,1034,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,6482,461,7014,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,6912,461,3697,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,6912,461,6543,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,1075,461,6543,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(56,-3600,-4279,3600,0,-99,0,0x0, bhvHmcElevatorPlatform,31),
OBJECT_WITH_ACTS(144,1762,-460,256,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,1762,666,0,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,3462,-255,-1125,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,4690,-357,-767,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,5510,-255,-3429,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,2233,-460,256,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,4178,-255,-3737,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,1762,-460,-2610,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,1997,666,-235,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,5018,-460,-5559,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(144,4936,-357,-4146,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(0,3351,-4690,4773,0,0,0,0x340b0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,-7152,3161,7181,0,135,0,0xa0000, bhvSpinAirborneWarp,31),
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
