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
#include "levels/wf/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_wf_1[] = {
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal,        /*yaw*/   0, /*pos*/  3760,   960,  2740),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal,        /*yaw*/  90, /*pos*/ -1400,  1160,  3900),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal,        /*yaw*/  90, /*pos*/  1254,  2586,  2299),
    MACRO_OBJECT(/*preset*/ macro_coin_ring_horizontal,        /*yaw*/   0, /*pos*/ -2500,  1795,  -260),
    MACRO_OBJECT(/*preset*/ macro_blue_coin_switch,            /*yaw*/   0, /*pos*/ -2500,   384,  -250),
    MACRO_OBJECT(/*preset*/ macro_hidden_blue_coin,            /*yaw*/   0, /*pos*/ -2500,   450, -1150),
    MACRO_OBJECT(/*preset*/ macro_hidden_blue_coin,            /*yaw*/   0, /*pos*/ -2500,   450,  -900),
    MACRO_OBJECT(/*preset*/ macro_hidden_blue_coin,            /*yaw*/   0, /*pos*/ -2500,   450,  -650),
    MACRO_OBJECT(/*preset*/ macro_box_metal_cap,               /*yaw*/   0, /*pos*/  2750,  1370, -3400),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin,                 /*yaw*/   0, /*pos*/     0,  2650,  2900),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin,                 /*yaw*/   0, /*pos*/  -500,  2650,  2900),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin,                 /*yaw*/   0, /*pos*/   250,  2650,  2800),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin,                 /*yaw*/   0, /*pos*/  -750,  2650,  2800),
    MACRO_OBJECT(/*preset*/ macro_hidden_1up_in_pole,          /*yaw*/   0, /*pos*/ -2500,  4560,  -256),
    MACRO_OBJECT(/*preset*/ macro_hidden_1up_trigger,          /*yaw*/   0, /*pos*/     0,  2650,  2900),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_hidden_1up,                  /*yaw*/   0, /*pos*/  -250,  2650,  2400, /*behParam*/ 2),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,             /*yaw*/ 315, /*pos*/  4200,   256,  5160, /*behParam*/ DIALOG_018),
    MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_three_coins,0,-1106,2767,315,0),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,             /*yaw*/  90, /*pos*/  1600,  2560,  2600, /*behParam*/ DIALOG_042),
    MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_three_coins,270,-1128,2560,577,0),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,             /*yaw*/ 180, /*pos*/  3460,  2304,   -40, /*behParam*/ DIALOG_096),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_cannon_closed,               /*yaw*/   0, /*pos*/ -1844,  1026,  3893, /*behParam*/ 0x40),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,             /*yaw*/ 270, /*pos*/ -2932,   386,  -157, /*behParam*/ DIALOG_078),
    MACRO_OBJECT(/*preset*/ macro_hidden_1up_trigger,          /*yaw*/   0, /*pos*/  -500,  2650,  2900),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/  -250,  2650,  2970),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/  1746,  3620, -3120),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/  1277,  2600,  1350),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/  1585,  2595,   -80),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/  3350,  3000, -1520),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/  2700,  3600,  -900),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/  3770,  1380,   650),
    MACRO_OBJECT(/*preset*/ macro_red_coin,                    /*yaw*/   0, /*pos*/  -270,  1720,  2250),
    MACRO_OBJECT(/*preset*/ macro_coin_arrow,                  /*yaw*/ 135, /*pos*/  1215,  3600, -2609),
    MACRO_OBJECT(/*preset*/ macro_hidden_blue_coin,            /*yaw*/   0, /*pos*/ -2500,   450, -1400),
    MACRO_OBJECT(/*preset*/ macro_coin_ring_horizontal,        /*yaw*/   0, /*pos*/  4611,   256,   141),
    MACRO_OBJECT(/*preset*/ macro_coin_ring_horizontal,        /*yaw*/   0, /*pos*/  1854,   922,  2646),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal,        /*yaw*/   0, /*pos*/  3396,  1380,  3280),
    MACRO_OBJECT(/*preset*/ macro_coin_ring_horizontal_flying, /*yaw*/   0, /*pos*/  3234,  3345, -1787),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,             /*yaw*/   0, /*pos*/  4800,   256,  3000, /*behParam*/ DIALOG_104),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,             /*yaw*/  90, /*pos*/  2930,  1075, -3740, /*behParam*/ DIALOG_113),
    MACRO_OBJECT(/*preset*/ macro_breakable_box_small,         /*yaw*/   0, /*pos*/  4320,   256,  1880),
    MACRO_OBJECT(/*preset*/ macro_breakable_box_small,         /*yaw*/   0, /*pos*/ -2940,   384, -1320),
    MACRO_OBJECT(/*preset*/ macro_butterfly_triplet_2,         /*yaw*/   0, /*pos*/  4574,   300,  1130),
MACRO_OBJECT_END(),
};

// Unlike most levels, some of the level geometry objects in WF are defined as regular objects instead of terrain objects.
// Some of them are still terrain objects, however.
static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_03, /*pos*/  2305, 2432,  -255, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_04, /*pos*/  3405, 1664, -1791, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_05, /*pos*/  3840,    0, -2303, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_05, /*pos*/  3840,    0, -1279, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_06, /*pos*/     0,    0,     0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_07, /*pos*/  1757, 3519, -3151, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_0A, /*pos*/  3840,  794,  2688, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_0C, /*pos*/  1408, 2522,  2431, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_WF_GIANT_POLE,     /*pos*/ -2560, 2560,  -256, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvGiantPole),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_WF_SMALL_BOMP,               /*pos*/  3300, 1070,     1, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSmallBomp),
    OBJECT(/*model*/ MODEL_WF_SMALL_BOMP,               /*pos*/  3300, 1070,  1281, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSmallBomp),
    OBJECT(/*model*/ MODEL_WF_LARGE_BOMP,               /*pos*/  3300, 1070,   641, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLargeBomp),
    OBJECT(/*model*/ MODEL_WF_ROTATING_WOODEN_PLATFORM, /*pos*/  -255, 2560,  2304, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvWfRotatingWoodenPlatform),
    OBJECT(/*model*/ MODEL_WF_SLIDING_PLATFORM,         /*pos*/  3328, 1075, -1791, /*angle*/ 0,  90, 0, /*behParam*/ 0x00020000, /*beh*/ bhvWfSlidingPlatform),
    OBJECT(/*model*/ MODEL_WF_SLIDING_PLATFORM,         /*pos*/  3328, 1075,  -767, /*angle*/ 0,  90, 0, /*behParam*/ 0x00010000, /*beh*/ bhvWfSlidingPlatform),
    OBJECT(/*model*/ MODEL_WF_SLIDING_PLATFORM,         /*pos*/  3328, 1075, -2815, /*angle*/ 0,  90, 0, /*behParam*/ 0x00030000, /*beh*/ bhvWfSlidingPlatform),
    OBJECT(/*model*/ MODEL_WF_TUMBLING_BRIDGE,          /*pos*/  1792, 2496,  1600, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvWfTumblingBridge),
    OBJECT(/*model*/ MODEL_WF_BREAKABLE_WALL_RIGHT,     /*pos*/   512, 2176,  2944, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvWfBreakableWallRight),
    OBJECT(/*model*/ MODEL_WF_BREAKABLE_WALL_LEFT,      /*pos*/ -1023, 2176,  2944, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvWfBreakableWallLeft),
    OBJECT_WITH_ACTS(/*model*/ MODEL_WF_KICKABLE_BOARD,           /*pos*/    13, 3584, -1407, /*angle*/ 0, 315, 0, /*behParam*/ 0x00000000, /*beh*/ bhvKickableBoard, /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_1UP,                         /*pos*/  -384, 3584,     6, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhv1Up,            /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT(/*model*/ MODEL_WF_ROTATING_PLATFORM,        /*pos*/  2304, 3584, -2303, /*angle*/ 0,   0, 0, /*behParam*/ 0x08000000, /*beh*/ bhvRotatingPlatform),
    OBJECT(/*model*/ MODEL_WF_ROTATING_PLATFORM,        /*pos*/  3200, 3328, -1791, /*angle*/ 0,   0, 0, /*behParam*/ 0x08000000, /*beh*/ bhvRotatingPlatform),
    OBJECT(/*model*/ MODEL_WF_ROTATING_PLATFORM,        /*pos*/  2688, 3584,  -895, /*angle*/ 0,   0, 0, /*behParam*/ 0x08000000, /*beh*/ bhvRotatingPlatform),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/ -2495, 1331,  -256, /*angle*/ 0,   0, 0, /*behParam*/ 0x003D0000, /*beh*/ bhvPoleGrabbing),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT(/*model*/ MODEL_THWOMP,            /*pos*/  3462, 1939, -1545, /*angle*/ 0,  180, 0, /*behParam*/ 0x00000000, /*beh*/ bhvThwomp),
    OBJECT(/*model*/ MODEL_THWOMP,            /*pos*/  3462, 1075, -3314, /*angle*/ 0,   90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvThwomp2),
    OBJECT(/*model*/ MODEL_NONE,              /*pos*/  -856,  922,  3819, /*angle*/ 0,    0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBetaFishSplashSpawner),
    OBJECT(/*model*/ MODEL_PIRANHA_PLANT,     /*pos*/  1822, 2560,  -101, /*angle*/ 0,   90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPiranhaPlant),
    OBJECT(/*model*/ MODEL_PIRANHA_PLANT,     /*pos*/  4625,  256,  5017, /*angle*/ 0,  -90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPiranhaPlant),
    OBJECT(/*model*/ MODEL_PIRANHA_PLANT,     /*pos*/   689, 2560,  1845, /*angle*/ 0,   90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPiranhaPlant),
    OBJECT(/*model*/ MODEL_WHOMP,             /*pos*/ -1545, 2560,  -286, /*angle*/ 0,    0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSmallWhomp),
    OBJECT(/*model*/ MODEL_WHOMP,             /*pos*/   189, 2560, -1857, /*angle*/ 0, -135, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSmallWhomp),
    OBJECT(/*model*/ MODEL_BUTTERFLY,         /*pos*/  4736,  256,  4992, /*angle*/ 0,    0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvButterfly),
    OBJECT(/*model*/ MODEL_BUTTERFLY,         /*pos*/  4608,  256,  5120, /*angle*/ 0,    0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvButterfly),
    OBJECT(/*model*/ MODEL_BUTTERFLY,         /*pos*/  4608,  256,  4992, /*angle*/ 0,    0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvButterfly),
    OBJECT(/*model*/ MODEL_BUTTERFLY,         /*pos*/  4608,  256,  4864, /*angle*/ 0,    0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvButterfly),
    OBJECT(/*model*/ MODEL_BUTTERFLY,         /*pos*/  4480,  256,  4992, /*angle*/ 0,    0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvButterfly),
    OBJECT(/*model*/ MODEL_BUTTERFLY,         /*pos*/  4608,  256,   256, /*angle*/ 0,    0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvButterfly),
    OBJECT(/*model*/ MODEL_BUTTERFLY,         /*pos*/  4736,  256,   128, /*angle*/ 0,    0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvButterfly),
    OBJECT(/*model*/ MODEL_BUTTERFLY,         /*pos*/  4480,  256,   128, /*angle*/ 0,    0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvButterfly),
    OBJECT(/*model*/ MODEL_BUTTERFLY,         /*pos*/  4608,  256,     0, /*angle*/ 0,    0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvButterfly),
    OBJECT(/*model*/ MODEL_BUTTERFLY,         /*pos*/  4608,  256,   128, /*angle*/ 0,    0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvButterfly),
    OBJECT(/*model*/ MODEL_NONE,              /*pos*/  1035, 2880,  -900, /*angle*/ 0,   45, 0, /*behParam*/ 0x00000000, /*beh*/ bhvCheckerboardElevatorGroup),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BULLET_BILL,       /*pos*/  1280, 3712,   968, /*angle*/ 0,  180, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBulletBill,               /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_LEVEL_GEOMETRY_08, /*pos*/     0, 3584,     0, /*angle*/ 0,    0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvTower,                     /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_LEVEL_GEOMETRY_09, /*pos*/  1280, 3584,   896, /*angle*/ 0,    0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBulletBillCannon,        /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,              /*pos*/     0, 3483,     0, /*angle*/ 0,    0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvTowerPlatformGroup,      /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_WF_TOWER_DOOR,     /*pos*/  -511, 3584,     0, /*angle*/ 0,    0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvTowerDoor,                /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOBOMB_BUDDY,      /*pos*/ -1700, 1140,  3500, /*angle*/ 0,    0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBobombBuddyOpensCannon, /*acts*/ ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_HOOT,              /*pos*/  2560,  700,  4608, /*angle*/ 0,    0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHoot,                      /*acts*/ ACT_3 | ACT_4 | ACT_5 | ACT_6),
    RETURN(),
};

static const LevelScript script_func_local_4[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_WHOMP, /*pos*/     0, 3584,    0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvWhompKingBoss,      /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR,  /*pos*/   300, 5550,    0, /*angle*/ 0, 0, 0, /*behParam*/ 0x01000000, /*beh*/ bhvStar,                 /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR,  /*pos*/ -2500, 1500, -750, /*angle*/ 0, 0, 0, /*behParam*/ 0x02000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,  /*pos*/  4600,  550, 2500, /*angle*/ 0, 0, 0, /*behParam*/ 0x03000000, /*beh*/ bhvHiddenRedCoinStar, /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR,  /*pos*/  2880, 4300,  190, /*angle*/ 0, 0, 0, /*behParam*/ 0x04000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR,  /*pos*/   590, 2450, 2650, /*angle*/ 0, 0, 0, /*behParam*/ 0x05000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    RETURN(),
};

const LevelScript level_wf_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _wf_segment_7SegmentRomStart, _wf_segment_7SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _cloud_floor_skybox_mio0SegmentRomStart, _cloud_floor_skybox_mio0SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _grass_mio0SegmentRomStart, _grass_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group1_mio0SegmentRomStart, _group1_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group1_geoSegmentRomStart,  _group1_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group14_mio0SegmentRomStart, _group14_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group14_geoSegmentRomStart,  _group14_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_2),
    JUMP_LINK(script_func_global_15),
    LOAD_MODEL_FROM_GEO(MODEL_WF_BUBBLY_TREE,                   bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,                wf_geo_0007E0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,                wf_geo_000820),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,                wf_geo_000860),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,                wf_geo_000878),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,                wf_geo_000890),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,                wf_geo_0008A8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,                wf_geo_0008E8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,                wf_geo_000900),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,                wf_geo_000940),
    LOAD_MODEL_FROM_GEO(MODEL_WF_GIANT_POLE,                    wf_geo_000AE0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,                wf_geo_000958),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,                wf_geo_0009A0),
    LOAD_MODEL_FROM_GEO(MODEL_WF_ROTATING_PLATFORM,             wf_geo_0009B8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,                wf_geo_0009D0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12,                wf_geo_0009E8),
    LOAD_MODEL_FROM_GEO(MODEL_WF_SMALL_BOMP,                    wf_geo_000A00),
    LOAD_MODEL_FROM_GEO(MODEL_WF_LARGE_BOMP,                    wf_geo_000A40),
    LOAD_MODEL_FROM_GEO(MODEL_WF_ROTATING_WOODEN_PLATFORM,      wf_geo_000A58),
    LOAD_MODEL_FROM_GEO(MODEL_WF_SLIDING_PLATFORM,              wf_geo_000A98),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TUMBLING_BRIDGE_PART,          wf_geo_000AB0),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TUMBLING_BRIDGE,               wf_geo_000AC8),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_TRAPEZOID_PLATORM,       wf_geo_000AF8),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM,          wf_geo_000B10),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM_UNUSED,   wf_geo_000B38),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM_ELEVATOR, wf_geo_000B60),
    LOAD_MODEL_FROM_GEO(MODEL_WF_BREAKABLE_WALL_RIGHT,          wf_geo_000B78),
    LOAD_MODEL_FROM_GEO(MODEL_WF_BREAKABLE_WALL_LEFT,           wf_geo_000B90),
    LOAD_MODEL_FROM_GEO(MODEL_WF_KICKABLE_BOARD,                wf_geo_000BA8),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_DOOR,                    wf_geo_000BE0),
    LOAD_MODEL_FROM_GEO(MODEL_WF_KICKABLE_BOARD_FELLED,         wf_geo_000BC8),

    AREA(/*index*/ 1, wf_geo_000BF8),
MACRO_OBJECTS(local_macro_objects_wf_1),
WARP_NODE(241,6,1,102,0),
WARP_NODE(240,6,1,52,0),
WARP_NODE(12,24,1,11,0),
WARP_NODE(11,24,1,12,0),
WARP_NODE(10,24,1,10,0),
OBJECT_WITH_ACTS(122,590,2450,2650,0,0,0,0x5000000, bhvStar,63),
OBJECT_WITH_ACTS(122,2880,4300,190,0,0,0,0x4000000, bhvStar,63),
OBJECT_WITH_ACTS(0,4600,550,2500,0,0,0,0x3000000, bhvHiddenRedCoinStar,63),
OBJECT_WITH_ACTS(122,-2500,1500,-750,0,0,0,0x2000000, bhvStar,63),
OBJECT_WITH_ACTS(122,300,5550,0,0,0,0,0x1000000, bhvStar,62),
OBJECT_WITH_ACTS(103,0,3584,0,0,0,0,0x0, bhvWhompKingBoss,1),
OBJECT_WITH_ACTS(86,2560,700,4608,0,0,0,0x0, bhvHoot,60),
OBJECT_WITH_ACTS(195,-1700,1140,3500,0,0,0,0x0, bhvBobombBuddyOpensCannon,60),
OBJECT_WITH_ACTS(57,-511,3584,0,0,0,0,0x0, bhvTowerDoor,62),
OBJECT_WITH_ACTS(0,0,3483,0,0,0,0,0x0, bhvTowerPlatformGroup,62),
OBJECT_WITH_ACTS(9,1280,3584,896,0,0,0,0x0, bhvBulletBillCannon,62),
OBJECT_WITH_ACTS(8,0,3584,0,0,0,0,0x0, bhvTower,62),
OBJECT_WITH_ACTS(84,1280,3712,968,0,180,0,0x0, bhvBulletBill,62),
OBJECT_WITH_ACTS(0,1035,2880,-900,0,45,0,0x0, bhvCheckerboardElevatorGroup,31),
OBJECT_WITH_ACTS(187,4608,256,128,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,4608,256,0,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,4480,256,128,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,4736,256,128,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,4608,256,256,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(16,0,5330,0,0,0,0,0x96000000, bhvRotatingPlatform,31),
OBJECT_WITH_ACTS(13,1854,454,2646,0,0,0,0xe60000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(9,-4100,2305,-461,0,270,0,0x0, bhvBulletBillCannon,31),
OBJECT_WITH_ACTS(175,-2835,6590,-461,0,180,0,0x0, bhvWfRotatingWoodenPlatform,31),
OBJECT_WITH_ACTS(13,-4150,2561,-461,0,0,0,0xe60000, bhvPoleGrabbing,131),
OBJECT_WITH_ACTS(103,189,2560,-1857,0,-135,0,0x0, bhvSmallWhomp,31),
OBJECT_WITH_ACTS(217,-3757,6284,-461,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(56,-2842,2560,-461,0,90,0,0x0, bhvKickableBoard,31),
OBJECT_WITH_ACTS(100,4625,256,5017,0,-90,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,1822,2560,-101,0,90,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(0,-856,922,3819,0,0,0,0x0, bhvBetaFishSplashSpawner,31),
OBJECT_WITH_ACTS(88,3462,1075,-3314,0,90,0,0x0, bhvThwomp2,31),
OBJECT_WITH_ACTS(88,3462,1939,-1545,0,180,0,0x0, bhvThwomp,31),
OBJECT_WITH_ACTS(0,-2495,1331,-256,0,0,0,0x3d0000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(16,2688,3584,-895,0,0,0,0x8000000, bhvRotatingPlatform,31),
OBJECT_WITH_ACTS(16,3200,3328,-1791,0,0,0,0x8000000, bhvRotatingPlatform,31),
OBJECT_WITH_ACTS(16,2304,3584,-2303,0,0,0,0x8000000, bhvRotatingPlatform,31),
OBJECT_WITH_ACTS(212,-384,3584,6,0,0,0,0x0, bhv1Up,62),
OBJECT_WITH_ACTS(56,13,3584,-1407,0,315,0,0x0, bhvKickableBoard,62),
OBJECT_WITH_ACTS(55,-1023,2176,2944,0,0,0,0x0, bhvWfBreakableWallLeft,31),
OBJECT_WITH_ACTS(54,512,2176,2944,0,0,0,0x0, bhvWfBreakableWallRight,31),
OBJECT_WITH_ACTS(178,1792,2496,1600,0,0,0,0x0, bhvWfTumblingBridge,31),
OBJECT_WITH_ACTS(173,3328,1075,-2815,0,90,0,0x30000, bhvWfSlidingPlatform,31),
OBJECT_WITH_ACTS(173,3328,1075,-767,0,90,0,0x10000, bhvWfSlidingPlatform,31),
OBJECT_WITH_ACTS(173,3328,1075,-1791,0,90,0,0x20000, bhvWfSlidingPlatform,31),
OBJECT_WITH_ACTS(175,-255,2560,2304,0,0,0,0x0, bhvWfRotatingWoodenPlatform,31),
OBJECT_WITH_ACTS(177,3300,1070,641,0,0,0,0x0, bhvLargeBomp,31),
OBJECT_WITH_ACTS(174,3300,1070,1281,0,90,0,0x0, bhvSmallBomp,31),
OBJECT_WITH_ACTS(13,-4150,4661,-461,0,0,0,0x0, bhvGiantPole,31),
OBJECT_WITH_ACTS(9,-40,1000,2735,0,0,0,0x0, bhvBulletBillCannon,31),
OBJECT_WITH_ACTS(12,1408,2522,2431,0,0,0,0x0, bhvStaticObject,31),
OBJECT_WITH_ACTS(10,3840,794,2688,0,0,0,0x0, bhvStaticObject,31),
OBJECT_WITH_ACTS(7,1757,3519,-3151,0,0,0,0x0, bhvStaticObject,31),
OBJECT_WITH_ACTS(6,6944,0,-10805,0,0,0,0x0, bhvStaticObject,31),
OBJECT_WITH_ACTS(5,3840,0,-1279,0,0,0,0x0, bhvStaticObject,31),
OBJECT_WITH_ACTS(5,3840,0,-2303,0,0,0,0x0, bhvStaticObject,31),
OBJECT_WITH_ACTS(4,3405,1664,-1791,0,0,0,0x0, bhvStaticObject,31),
OBJECT_WITH_ACTS(3,2305,2432,-255,0,0,0,0x0, bhvStaticObject,31),
OBJECT_WITH_ACTS(0,2096,2593,2839,0,51,0,0xc0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,2210,365,4225,0,4,0,0xb0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,2600,1256,5120,0,90,0,0xa0000, bhvSpinAirborneWarp,31),
        TERRAIN(/*terrainData*/ wf_seg7_collision_070102D8),
        SHOW_DIALOG(/*index*/ 0x00, DIALOG_030),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0005, /*seq*/ SEQ_LEVEL_GRASS),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 90, /*pos*/ 2600, 256, 5120),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
