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
#include "levels/bob/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_bob_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb,0,3637,768,2194,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_no_coins,0,61557,0,6827,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,62823,152,5778,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,65194,400,5433,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_water_bomb_spawner,0,3620,4000,4800,15),
MACRO_OBJECT_WITH_BEH_PARAM(macro_water_bomb_spawner,0,60395,3764,64793,25),
MACRO_OBJECT_WITH_BEH_PARAM(macro_water_bomb_spawner,0,61328,3769,63500,10),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_no_coins,315,64140,4949,1163,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_piranha_plant_2,0,59036,768,1800,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_piranha_plant_2,0,60036,768,1800,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_piranha_plant_2,0,59036,768,3000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_piranha_plant_2,0,60036,768,3000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,270,61536,0,6050,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,1230,768,3258,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,60518,1332,62003,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,528,3856,60548,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,4243,3071,63085,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_no_coins,0,2099,3072,1278,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,6037,959,3055,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,62906,938,60894,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,59216,1024,61074,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,60532,1024,64500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,62056,891,63416,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,61736,1024,65076,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,6888,2002,59928,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_recovery_heart,0,3603,3659,58466,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,59476,1060,60196,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,65407,0,5668,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,73,1851,2917,63302,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,60036,1519,2400,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,57786,1519,3139,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,552,2721,57740,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,1677,1851,169,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,1600,1481,4440,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,62781,0,61453,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,4761,2003,913,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,314,3872,60586,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_ten_coins,0,58826,1300,63366,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_no_coins,0,65191,3958,1269,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,270,61536,0,6300,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up,0,59476,1060,60196,4),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,59776,1060,60196,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,59176,1060,60196,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,59476,1060,59896,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,59476,1040,60496,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_ten_coins,0,3789,3340,1818,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,5392,1558,4638,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,63786,0,62736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,593,2805,62203,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,62886,0,1750,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,59527,768,2311,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,63005,0,61335,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,5444,1400,6016,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba_triplet_spawner,0,3640,768,6280,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba_triplet_spawner,0,6060,877,2000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba_triplet_spawner,0,59486,768,1250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,276,59404,128,5483,3),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,270,66,0,6977,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,3394,3072,1846,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,270,62426,104,5064,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,6860,2041,58896,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,59516,768,2957,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_butterfly,90,64030,5317,1250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,64030,5517,1250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_no_coins,0,1067,3225,1235,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_butterfly,90,1000,3400,1250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_butterfly,90,2000,3400,1250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,194,2962,4293,62045,2),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,1000,3600,1250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,2000,3600,1250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,3000,3600,1250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,5135,3129,60636,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,118,4836,3079,62829,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,45,62006,1415,430,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,5053,3073,2180,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,64030,5517,1250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,1000,3600,1250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,2000,3600,1250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,3000,3600,1250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,65236,4200,1250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,270,63312,990,61177,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,59,3911,3529,58455,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,58536,1024,63437,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_three_coins,0,241,3646,1299,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_star_3,0,5796,2799,1283,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_butterfly,90,65236,4000,1250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,65236,4200,1250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_no_coins,0,64532,4462,1145,0),
MACRO_OBJECT_END(),
};

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_BOB_CHAIN_CHOMP_GATE,  /*pos*/  1456,   768,   446, /*angle*/ 0, 326, 0,  /*behParam*/ 0x00000000, /*beh*/ bhvChainChompGate),
    OBJECT(/*model*/ MODEL_BOB_SEESAW_PLATFORM,   /*pos*/ -2303,   717,  1024, /*angle*/ 0, 45, 0,   /*behParam*/ 0x00030000, /*beh*/ bhvSeesawPlatform),
    OBJECT(/*model*/ MODEL_NONE,                  /*pos*/ -2050,     0, -3069, /*angle*/ 0, 25, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvOpenableGrill),
    OBJECT(/*model*/ MODEL_PURPLE_SWITCH,         /*pos*/ -2283,     0, -3682, /*angle*/ 0, 27, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvFloorSwitchGrills),
    OBJECT(/*model*/ MODEL_CHECKERBOARD_PLATFORM, /*pos*/  1612,   300,  4611, /*angle*/ 0, 0, 0,    /*behParam*/ 0x00280000, /*beh*/ bhvCheckerboardElevatorGroup),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,                  /*pos*/  1535, 3840, -5561, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvBobBowlingBallSpawner,  /*acts*/ ACT_1 | ACT_2),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,                  /*pos*/  1535, 3840, -5561, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvTtmBowlingBallSpawner,  /*acts*/ ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,                  /*pos*/   524, 2825, -5400, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00020000, /*beh*/ bhvBobBowlingBallSpawner,  /*acts*/ ACT_1 | ACT_2),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,                  /*pos*/   524, 2825, -5400, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00020000, /*beh*/ bhvTtmBowlingBallSpawner,  /*acts*/ ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT          (/*model*/ MODEL_BOWLING_BALL,          /*pos*/  -993,  886, -3565, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvPitBowlingBall),
    OBJECT          (/*model*/ MODEL_BOWLING_BALL,          /*pos*/  -785,  886, -4301, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvPitBowlingBall),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOWLING_BALL,          /*pos*/   -93,  886, -3414, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvPitBowlingBall,         /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOBOMB_BUDDY,          /*pos*/ -5723,  140,  6017, /*angle*/ 0, 0, 0,   /*behParam*/ DIALOG_002 << 16, /*beh*/ bhvBobombBuddy,            /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOBOMB_BUDDY,          /*pos*/ -6250,    0,  6680, /*angle*/ 0, 0, 0,   /*behParam*/ DIALOG_001 << 16, /*beh*/ bhvBobombBuddy,            /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOBOMB_BUDDY,          /*pos*/ -5723,  140,  6017, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000,       /*beh*/ bhvBobombBuddyOpensCannon, /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOBOMB_BUDDY,          /*pos*/ -6250,    0,  6680, /*angle*/ 0, 0, 0,   /*behParam*/ DIALOG_003 << 16, /*beh*/ bhvBobombBuddy,            /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_CANNON_BASE,           /*pos*/ -5694,  128,  5600, /*angle*/ 0, 135, 0, /*behParam*/ 0x00010000, /*beh*/ bhvWaterBombCannon,        /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_DL_CANNON_LID,         /*pos*/ -5694,  128,  5600, /*angle*/ 0, 180, 0, /*behParam*/ 0x00000000, /*beh*/ bhvCannonClosed,           /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,                  /*pos*/  3304, 4242, -4603, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvKoopaRaceEndpoint,      /*acts*/ ACT_2),
    OBJECT_WITH_ACTS(/*model*/ MODEL_KOOPA_WITH_SHELL,      /*pos*/  3400,  770,  6500, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00010000, /*beh*/ bhvKoopa,                  /*acts*/ ACT_3 | ACT_4 | ACT_5 | ACT_6),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_KING_BOBOMB,           /*pos*/  1636, 4242, -5567, /*angle*/ 0, -147, 0, /*behParam*/ 0x00000000, /*beh*/ bhvKingBobomb,            /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_KOOPA_WITH_SHELL,      /*pos*/ -4004,    0,  5221, /*angle*/ 0, 0, 0,    /*behParam*/ 0x01020000, /*beh*/ bhvKoopa,                 /*acts*/ ACT_2),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,                  /*pos*/ -6000, 1000,  2400, /*angle*/ 0, 0, 0,    /*behParam*/ 0x03000000, /*beh*/ bhvHiddenRedCoinStar,     /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,                  /*pos*/ -6600, 1000,  1250, /*angle*/ 0, 0, 0,    /*behParam*/ 0x04040000, /*beh*/ bhvHiddenStar,            /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR,                  /*pos*/  1550, 1200,   300, /*angle*/ 0, 0, 0,    /*behParam*/ 0x05000000, /*beh*/ bhvStar,                  /*acts*/ ALL_ACTS),
    RETURN(),
};

const LevelScript level_bob_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _generic_mio0SegmentRomStart, _generic_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group3_mio0SegmentRomStart, _group3_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group3_geoSegmentRomStart,  _group3_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group14_mio0SegmentRomStart, _group14_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group14_geoSegmentRomStart,  _group14_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_4),
    JUMP_LINK(script_func_global_15),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE,      bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM,  bob_geo_000458),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS,      bob_geo_000470),

    AREA(/*index*/ 1, bob_geo_000488),
MACRO_OBJECTS(local_macro_objects_bob_1),
WARP_NODE(241,6,1,100,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(10,9,1,10,0),
OBJECT_WITH_ACTS(223,2055,2849,-2742,0,-151,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(223,1945,4293,-4606,0,107,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(102,2872,4293,-4951,0,-153,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(223,3812,4293,-4202,0,-154,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(0,-6558,1000,6464,0,135,0,0xa0000, bhvSpinAirborneWarp
,31),
OBJECT_WITH_ACTS(122,1550,1200,300,0,0,0,0x5000000, bhvStar
,63),
OBJECT_WITH_ACTS(0,-8015,2102,867,0,0,0,0x4040000, bhvHiddenStar
,63),
OBJECT_WITH_ACTS(0,5317,1952,4648,0,0,0,0x3000000, bhvHiddenRedCoinStar
,63),
OBJECT_WITH_ACTS(104,-4004,0,5221,0,0,0,0x1020000, bhvKoopa
,2),
OBJECT_WITH_ACTS(86,3473,4242,-5306,0,-147,0,0x0, bhvKingBobomb
,1),
OBJECT_WITH_ACTS(104,3400,770,6500,0,0,0,0x10000, bhvKoopa
,60),
OBJECT_WITH_ACTS(0,1098,4943,-4484,0,0,0,0x0, bhvKoopaRaceEndpoint
,2),
OBJECT_WITH_ACTS(102,4883,3044,-3295,0,180,0,0x0, bhvChainChomp
,62),
OBJECT_WITH_ACTS(102,5372,3072,1320,0,135,0,0x0, bhvChainChomp
,1),
OBJECT_WITH_ACTS(102,1519,768,3709,0,0,0,0x0, bhvChainChomp
,62),
OBJECT_WITH_ACTS(102,576,1669,-6801,0,0,0,0x0, bhvChainChomp
,62),
OBJECT_WITH_ACTS(102,936,777,-841,0,0,0,0x0, bhvChainChomp
,1),
OBJECT_WITH_ACTS(102,-1396,256,5574,0,0,0,0x0, bhvChainChomp
,1),
OBJECT_WITH_ACTS(180,-93,886,-3414,0,0,0,0x0, bhvPitBowlingBall
,62),
OBJECT_WITH_ACTS(180,-785,886,-4301,0,0,0,0x0, bhvPitBowlingBall
,31),
OBJECT_WITH_ACTS(180,-993,886,-3565,0,0,0,0x0, bhvPitBowlingBall
,31),
OBJECT_WITH_ACTS(0,524,2825,-5400,0,0,0,0x20000, bhvTtmBowlingBallSpawner
,60),
OBJECT_WITH_ACTS(0,524,2825,-5400,0,0,0,0x20000, bhvBobBowlingBallSpawner
,3),
OBJECT_WITH_ACTS(0,1535,3840,-5561,0,0,0,0x0, bhvTtmBowlingBallSpawner
,60),
OBJECT_WITH_ACTS(0,1535,3840,-5561,0,0,0,0x0, bhvBobBowlingBallSpawner
,3),
OBJECT_WITH_ACTS(223,1162,768,685,0,0,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(207,-2283,0,-3682,0,27,0,0x0, bhvFloorSwitchGrills
,31),
OBJECT_WITH_ACTS(0,-2050,0,-3069,0,25,0,0x0, bhvOpenableGrill
,31),
OBJECT_WITH_ACTS(144,-6557,86,6473,0,45,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(54,1456,768,446,0,326,0,0x0, bhvChainChompGate
,31),
        TERRAIN(/*terrainData*/ bob_seg7_collision_level),
        SHOW_DIALOG(/*index*/ 0x00, DIALOG_000),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_LEVEL_GRASS),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_GRASS),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 135, /*pos*/ -6558, 0, 6464),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
