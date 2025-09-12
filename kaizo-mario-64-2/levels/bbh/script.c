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
#include "levels/bbh/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_bbh_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_haunted_chair,90,63576,65516,340,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,0,64736,65332,2915,63),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,0,400,65332,3057,85),
MACRO_OBJECT_WITH_BEH_PARAM(macro_haunted_chair,270,64456,20,160,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_vanish_cap,0,1268,1050,1860,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,64372,0,2325,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,2540,820,2174,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,2600,815,65156,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,2950,815,64286,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,64036,550,960,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,65116,550,60,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,2856,50,2144,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,50,900,64136,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_1up,0,660,3200,1160,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_blue_coin_switch,0,640,1741,760,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1400,1840,1100,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1700,1840,1100,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,0,1840,1100,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,65136,1840,1100,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,0,2026,65332,2966,102),
MACRO_OBJECT_WITH_BEH_PARAM(macro_mr_i,0,480,10,64883,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_scuttlebug,0,65190,65332,62723,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_scuttlebug,0,1146,65333,63256,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_mr_i,0,63167,65332,5184,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,135,63990,65332,4813,86),
MACRO_OBJECT_WITH_BEH_PARAM(macro_scuttlebug,0,3466,65332,5106,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_mr_i,0,1640,840,64803,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_vanish_cap,0,63576,300,65416,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_vanish_cap,0,460,2140,64976,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_ten_coins,0,700,80,62736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_three_coins,45,61736,65332,4600,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_three_coins,45,61877,65332,4459,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_jumping_box,0,65316,65316,6140,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,62496,1120,5460,0),
MACRO_OBJECT_END(),
};


static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_RED_FLAME,                  /*pos*/  2089,  1331, -1125, /*angle*/ 0, 270, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME,                  /*pos*/  1331,  1075, -1330, /*angle*/ 0, 90, 0,  /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME,                  /*pos*/  2089,  1331,  -511, /*angle*/ 0, 270, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME,                  /*pos*/  -511,   358, -1330, /*angle*/ 0, 90, 0,  /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME,                  /*pos*/  1126,   358,  2212, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME,                  /*pos*/   205,   358,  2212, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_BBH_TILTING_FLOOR_PLATFORM, /*pos*/  2866,   820,  1897, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvBbhTiltingTrapPlatform),
    OBJECT(/*model*/ MODEL_BBH_TUMBLING_PLATFORM,      /*pos*/  2961,     0,  -768, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvBbhTumblingBridge),
    OBJECT(/*model*/ MODEL_BBH_MOVING_BOOKSHELF,       /*pos*/ -1994,   819,   213, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvHauntedBookshelf),
    OBJECT(/*model*/ MODEL_BBH_MESH_ELEVATOR,          /*pos*/ -2985,  -205,  5400, /*angle*/ 0, -45, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMeshElevator),
    OBJECT(/*model*/ MODEL_BBH_MERRY_GO_ROUND,         /*pos*/  -205, -2560,   205, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvMerryGoRound),
    OBJECT(/*model*/ MODEL_NONE,                       /*pos*/  2200,   819,  -800, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvCoffinSpawner),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOO,                        /*pos*/  1000,    50,  1000, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvGhostHuntBigBoo,       /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOO,                        /*pos*/    20,   100,  -908, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvGhostHuntBoo,                 /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOO,                        /*pos*/  3150,   100,   398, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvGhostHuntBoo,                 /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOO,                        /*pos*/ -2000,   150,  -800, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvGhostHuntBoo,                 /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOO,                        /*pos*/  2851,   100,  2289, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvGhostHuntBoo,                 /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOO,                        /*pos*/ -1551,   100, -1018, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvGhostHuntBoo,                 /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BBH_STAIRCASE_STEP,         /*pos*/   973,     0,   517, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvHiddenStaircaseStep, /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BBH_STAIRCASE_STEP,         /*pos*/   973,  -206,   717, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvHiddenStaircaseStep, /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BBH_STAIRCASE_STEP,         /*pos*/   973,  -412,   917, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvHiddenStaircaseStep, /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOO,                        /*pos*/    20,   100,  -908, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvBoo,                 /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOO,                        /*pos*/  3150,   100,   398, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvBoo,                 /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOO,                        /*pos*/ -2000,   150,  -800, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvBoo,                 /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOO,                        /*pos*/  2851,   100,  2289, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvBoo,                 /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOO,                        /*pos*/ -1551,   100, -1018, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvBoo,                 /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,                       /*pos*/   990, -2146,  -908, /*angle*/ 0, -45, 0, /*behParam*/ 0x00030000, /*beh*/ bhvFlamethrower,          /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,                       /*pos*/ -1100, -2372,  1100, /*angle*/ 0, 135, 0, /*behParam*/ 0x01000000, /*beh*/ bhvMerryGoRoundBooManager,         /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOO,                        /*pos*/  1030,  1922,  2546, /*angle*/ 0, -90, 0, /*behParam*/ 0x04000000, /*beh*/ bhvBalconyBigBoo,        /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOO,                        /*pos*/   581,  1850,  -206, /*angle*/ 0, -90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBoo,                 /*acts*/ ALL_ACTS),
    OBJECT(/*model*/ MODEL_MAD_PIANO,                  /*pos*/ -1300,     0,  2310, /*angle*/ 0, 243, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMadPiano),
    OBJECT(/*model*/ MODEL_HAUNTED_CHAIR,              /*pos*/ -1530,     0,  2200, /*angle*/ 0, 66, 0,  /*behParam*/ 0x00000000, /*beh*/ bhvHauntedChair),
    OBJECT(/*model*/ MODEL_NONE,                       /*pos*/ -1330,   890,   200, /*angle*/ 0, 90, 0,  /*behParam*/ 0x00000000, /*beh*/ bhvBookendSpawn),
    OBJECT(/*model*/ MODEL_NONE,                       /*pos*/  -818,   890,  -200, /*angle*/ 0, 270, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBookendSpawn),
    OBJECT(/*model*/ MODEL_NONE,                       /*pos*/ -1330,   890,  -622, /*angle*/ 0, 90, 0,  /*behParam*/ 0x00000000, /*beh*/ bhvBookendSpawn),
    OBJECT(/*model*/ MODEL_NONE,                       /*pos*/  -818,   890,  -686, /*angle*/ 0, 270, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBookendSpawn),
    OBJECT(/*model*/ MODEL_NONE,                       /*pos*/ -1950,   880,     8, /*angle*/ 0, 180, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHauntedBookshelfManager),
    OBJECT(/*model*/ MODEL_BOOKEND,                    /*pos*/  2680,  1045,   876, /*angle*/ 0, 166, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlyingBookend),
    OBJECT(/*model*/ MODEL_BOOKEND,                    /*pos*/  3075,  1045,   995, /*angle*/ 0, 166, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlyingBookend),
    OBJECT(/*model*/ MODEL_BOOKEND,                    /*pos*/ -1411,   218,   922, /*angle*/ 0, 180, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlyingBookend),
    RETURN(),
};

static const LevelScript script_func_local_4[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ -2030, 1350,  1940, /*angle*/ 0, 0, 0,  /*behParam*/ 0x02000000, /*beh*/ bhvStar,                    /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/  -204, 1100,  1576, /*angle*/ 0, 0, 0,  /*behParam*/ 0x03000000, /*beh*/ bhvHiddenRedCoinStar,    /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/   923, 1741,  -332, /*angle*/ 0, 18, 0, /*behParam*/ 0x05010000, /*beh*/ bhvMrI,                    /*acts*/ ALL_ACTS),
    RETURN(),
};

const LevelScript level_bbh_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _bbh_skybox_mio0SegmentRomStart, _bbh_skybox_mio0SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _spooky_mio0SegmentRomStart, _spooky_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group9_mio0SegmentRomStart, _group9_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group9_geoSegmentRomStart,  _group9_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group17_mio0SegmentRomStart, _group17_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_10),
    JUMP_LINK(script_func_global_18),
    LOAD_MODEL_FROM_GEO(MODEL_BBH_HAUNTED_DOOR,           haunted_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BBH_STAIRCASE_STEP,         geo_bbh_0005B0),
    LOAD_MODEL_FROM_GEO(MODEL_BBH_TILTING_FLOOR_PLATFORM, geo_bbh_0005C8),
    LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM,      geo_bbh_0005E0),
    LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM_PART, geo_bbh_0005F8),
    LOAD_MODEL_FROM_GEO(MODEL_BBH_MOVING_BOOKSHELF,       geo_bbh_000610),
    LOAD_MODEL_FROM_GEO(MODEL_BBH_MESH_ELEVATOR,          geo_bbh_000628),
    LOAD_MODEL_FROM_GEO(MODEL_BBH_MERRY_GO_ROUND,         geo_bbh_000640),
    LOAD_MODEL_FROM_GEO(MODEL_BBH_WOODEN_TOMB,            geo_bbh_000658),

    AREA(/*index*/ 1, geo_bbh_000F00),
MACRO_OBJECTS(local_macro_objects_bbh_1),
WARP_NODE(241,26,1,11,0),
WARP_NODE(240,26,1,10,0),
WARP_NODE(10,4,1,10,0),
OBJECT_WITH_ACTS(0,666,796,5350,0,180,0,0xa0000, bhvSpinAirborneWarp
,31),
OBJECT_WITH_ACTS(0,923,1741,-332,0,18,0,0x5010000, bhvMrI
,63),
OBJECT_WITH_ACTS(0,-204,1100,1576,0,0,0,0x3000000, bhvHiddenRedCoinStar
,63),
OBJECT_WITH_ACTS(122,-2030,1350,1940,0,0,0,0x2000000, bhvStar
,63),
OBJECT_WITH_ACTS(89,-1411,218,922,0,180,0,0x0, bhvFlyingBookend
,31),
OBJECT_WITH_ACTS(89,3075,1045,995,0,166,0,0x0, bhvFlyingBookend
,31),
OBJECT_WITH_ACTS(89,2680,1045,876,0,166,0,0x0, bhvFlyingBookend
,31),
OBJECT_WITH_ACTS(0,-1950,880,8,0,180,0,0x0, bhvHauntedBookshelfManager
,31),
OBJECT_WITH_ACTS(86,-1530,0,2200,0,66,0,0x0, bhvHauntedChair
,31),
OBJECT_WITH_ACTS(87,-1300,0,2310,0,243,0,0x0, bhvMadPiano
,31),
OBJECT_WITH_ACTS(84,581,1850,-206,0,-90,0,0x0, bhvBoo
,63),
OBJECT_WITH_ACTS(84,1030,1922,2546,0,-90,0,0x4000000, bhvBalconyBigBoo
,63),
OBJECT_WITH_ACTS(0,-1100,-2372,1100,0,135,0,0x1000000, bhvMerryGoRoundBooManager
,62),
OBJECT_WITH_ACTS(0,990,-2146,-908,0,-45,0,0x30000, bhvFlamethrower
,62),
OBJECT_WITH_ACTS(84,-1551,100,-1018,0,0,0,0x0, bhvBoo
,62),
OBJECT_WITH_ACTS(84,2851,100,2289,0,0,0,0x0, bhvBoo
,62),
OBJECT_WITH_ACTS(84,-2000,150,-800,0,0,0,0x0, bhvBoo
,62),
OBJECT_WITH_ACTS(84,3150,100,398,0,0,0,0x0, bhvBoo
,62),
OBJECT_WITH_ACTS(84,20,100,-908,0,0,0,0x0, bhvBoo
,62),
OBJECT_WITH_ACTS(53,973,-412,917,0,0,0,0x0, bhvHiddenStaircaseStep
,62),
OBJECT_WITH_ACTS(53,973,-206,717,0,0,0,0x0, bhvHiddenStaircaseStep
,62),
OBJECT_WITH_ACTS(53,973,0,517,0,0,0,0x0, bhvHiddenStaircaseStep
,62),
OBJECT_WITH_ACTS(84,-1551,100,-1018,0,0,0,0x0, bhvGhostHuntBoo
,1),
OBJECT_WITH_ACTS(84,2851,100,2289,0,0,0,0x0, bhvGhostHuntBoo
,1),
OBJECT_WITH_ACTS(84,-2000,150,-800,0,0,0,0x0, bhvGhostHuntBoo
,1),
OBJECT_WITH_ACTS(84,3150,100,398,0,0,0,0x0, bhvGhostHuntBoo
,1),
OBJECT_WITH_ACTS(84,20,100,-908,0,0,0,0x0, bhvGhostHuntBoo
,1),
OBJECT_WITH_ACTS(84,1000,50,1000,0,0,0,0x0, bhvGhostHuntBigBoo
,1),
OBJECT_WITH_ACTS(0,2200,819,-800,0,0,0,0x0, bhvCoffinSpawner
,31),
OBJECT_WITH_ACTS(59,-205,-2560,205,0,0,0,0x0, bhvMerryGoRound
,31),
OBJECT_WITH_ACTS(58,-2985,-205,5400,0,-45,0,0x0, bhvMeshElevator
,31),
OBJECT_WITH_ACTS(57,-1994,819,213,0,0,0,0x0, bhvHauntedBookshelf
,31),
OBJECT_WITH_ACTS(55,2961,0,-768,0,0,0,0x0, bhvBbhTumblingBridge
,31),
OBJECT_WITH_ACTS(54,2866,820,1897,0,0,0,0x0, bhvBbhTiltingTrapPlatform
,31),
OBJECT_WITH_ACTS(144,205,358,2212,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(144,1126,358,2212,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(144,-511,358,-1330,0,90,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(144,2089,1331,-511,0,270,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(144,1331,1075,-1330,0,90,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(144,2089,1331,-1125,0,270,0,0x0, bhvFlame
,31),
        TERRAIN(/*terrainData*/ bbh_seg7_collision_level),
        ROOMS(/*surfaceRooms*/ bbh_seg7_rooms),
        SHOW_DIALOG(/*index*/ 0x00, DIALOG_098),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0006, /*seq*/ SEQ_LEVEL_SPOOKY),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SPOOKY),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 180, /*pos*/ 666, -204, 5350),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
