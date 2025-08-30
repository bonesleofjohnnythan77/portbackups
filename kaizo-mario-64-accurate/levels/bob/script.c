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
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,500,735,1700,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,61640,1024,64799,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,25,62826,0,61636,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,25,62926,0,61586,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,1200,768,1700,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,1200,768,2400,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,500,768,1000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_water_bomb_cannon,315,1388,2918,63153,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,64150,0,3246,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,62744,98,6464,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,59842,128,5600,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,5376,1537,4610,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,25,63026,0,61536,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,25,63126,0,61486,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_cannon_closed,0,60518,1332,62003,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_cannon_closed,0,6349,2080,58470,192),
MACRO_OBJECT_WITH_BEH_PARAM(macro_cannon_closed,0,4249,3072,63079,192),
MACRO_OBJECT_WITH_BEH_PARAM(macro_cannon_closed,0,4352,3072,1229,128),
MACRO_OBJECT_WITH_BEH_PARAM(macro_cannon_closed,0,5376,1537,4610,64),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,63025,0,3929,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,3260,864,4710,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,63998,0,142,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,64612,0,64555,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,6349,2080,58470,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,4877,768,6464,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_empty_5,0,5440,1550,4810,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,107,58924,1024,62185,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,65407,0,5668,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,73,1851,2917,63302,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,58098,1171,4330,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,200,2500,61811,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,1135,2350,57936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,823,2000,1450,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,1600,1100,64986,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,3000,5000,60786,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,4350,1900,1225,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,2625,2700,63136,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,59842,150,5600,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,4248,3072,63079,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,25,63226,0,61436,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,59842,65336,5600,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,4249,2744,63079,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,79,1950,775,6625,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,4352,2744,1229,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,6349,1753,58470,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,0,63936,0,62336,8),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,65336,735,1700,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,4377,846,2714,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,6867,884,2869,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,5485,713,65277,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,59555,1024,63802,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,4352,3072,1229,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,62050,917,62572,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,2070,4293,61230,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,3837,4294,61300,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,3035,4293,59882,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_vanish_cap,0,400,350,6500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_empty_5,0,5575,1550,4545,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_empty_5,0,5575,1550,4410,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_empty_5,0,5575,1550,4810,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_empty_5,0,5575,1550,4675,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_empty_5,0,5175,1550,4410,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,90,5376,1209,4610,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,60936,3400,5600,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_empty_5,0,5310,1550,4410,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,180,200,1850,61811,17),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,180,2625,2050,63136,17),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,60518,1104,62003,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,60518,3400,64213,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,6350,4500,62536,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,2400,4000,1250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,1200,735,1000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,118,4836,3079,62829,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_empty_5,0,5175,1550,4810,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_empty_5,0,5175,1550,4675,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,60936,3400,5600,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,60518,3400,64213,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,6350,4500,62536,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,2400,4000,1250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,63536,2400,62536,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,5175,1550,4545,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_empty_5,0,5440,1550,4410,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_empty_5,0,5310,1550,4810,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,60518,1332,62003,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_star_3,0,6000,3572,1230,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_star_6,0,1600,1100,300,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,63536,2400,62536,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,6300,1982,60610,0),
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
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,1418,1025,-1126,0,0,0,0xc0000, bhvFadingWarp
,123),
OBJECT_WITH_ACTS(0,573,2683,-5387,0,-154,0,0xb0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-6300,1100,5600,0,270,0,0xa0000, bhvSpinAirborneCircleWarp
,31),
OBJECT_WITH_ACTS(0,1535,3840,-5561,0,0,0,0x0, bhvBobBowlingBallSpawner
,63),
OBJECT_WITH_ACTS(0,-6600,1000,1250,0,0,0,0x4040000, bhvHiddenStar
,63),
OBJECT_WITH_ACTS(0,-6000,1000,2400,0,0,0,0x3000000, bhvHiddenRedCoinStar
,63),
OBJECT_WITH_ACTS(104,-4004,0,5221,0,0,0,0x1020000, bhvKoopa
,2),
OBJECT_WITH_ACTS(86,1636,4242,-5567,0,-147,0,0x0, bhvKingBobomb
,1),
OBJECT_WITH_ACTS(0,1535,3840,-5561,0,0,0,0x0, bhvBobBowlingBallSpawner
,60),
OBJECT_WITH_ACTS(0,3304,4242,-4603,0,0,0,0x0, bhvKoopaRaceEndpoint
,2),
OBJECT_WITH_ACTS(201,-5694,128,5600,0,180,0,0x0, bhvCannonClosed
,62),
OBJECT_WITH_ACTS(128,-5694,128,5600,0,135,0,0x10000, bhvWaterBombCannon
,1),
OBJECT_WITH_ACTS(0,4081,3107,1642,0,0,0,0xc0000, bhvFadingWarp
,4),
OBJECT_WITH_ACTS(195,-5723,140,6017,0,0,0,0x0, bhvBobombBuddyOpensCannon
,62),
OBJECT_WITH_ACTS(120,-6918,50,4450,0,0,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(102,-5050,768,2525,0,0,0,0x0, bhvChainChomp
,255),
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
OBJECT_WITH_ACTS(102,-6558,0,6464,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(207,-6050,990,-5300,0,0,0,0x0, bhvFloorSwitchGrills
,31),
OBJECT_WITH_ACTS(0,-2950,0,-4900,0,207,0,0x0, bhvOpenableGrill
,31),
OBJECT_WITH_ACTS(0,-2065,0,-3065,0,27,0,0x0, bhvOpenableGrill
,31),
OBJECT_WITH_ACTS(102,5945,797,1312,0,0,0,0x0, bhvChainChomp
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
