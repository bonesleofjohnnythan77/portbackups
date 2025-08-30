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
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,3760,960,2740,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,64136,1160,3900,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,64236,6441,3800,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,63036,2560,65286,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,180,60058,8238,64691,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_arrow,135,1215,3600,62927,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,63786,2400,5800,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,61568,7428,3930,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_heave_ho,0,3750,1075,64186,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,62536,2500,5800,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,62536,2628,5800,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,65036,2500,5800,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,4520,15000,2700,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,65036,2628,5800,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,60053,8150,1520,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,2000,2628,5800,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_heave_ho,0,3750,1075,63186,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_heave_ho,0,3850,1075,63286,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,750,2400,5800,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,180,4520,13750,1300,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_blue_coin_switch,0,1558,850,2329,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_cannon_closed,0,63692,1026,3893,64),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,300,1375,2500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,2000,2500,5800,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,2890,4125,200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,64236,4250,64236,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,800,17500,4700,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,3950,900,64761,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,1425,2260,64136,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,4800,1000,5300,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,2000,2680,5800,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,3850,700,63736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_arrow,135,1215,3600,62927,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,135,875,2560,64586,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,4611,256,141,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,1558,922,2329,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,65336,1375,2500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_wing_cap,0,3050,100,6200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,65086,1375,2500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,64836,1375,2500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_heave_ho,0,3850,1075,64286,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,63036,1200,65276,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,3850,800,62696,0),
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
OBJECT_WITH_ACTS(122,-1550,9250,350,0,0,0,0x5000000, bhvStar
,63),
OBJECT_WITH_ACTS(122,-400,3675,0,0,0,0,0x4000000, bhvStar
,56),
OBJECT_WITH_ACTS(0,1757,3647,-3151,0,0,0,0x3000000, bhvHiddenRedCoinStar
,62),
OBJECT_WITH_ACTS(122,-2500,1500,-750,0,0,0,0x2000000, bhvStar
,63),
OBJECT_WITH_ACTS(122,800,18000,4700,0,0,0,0x1000000, bhvStar
,30),
OBJECT_WITH_ACTS(103,0,3584,0,0,0,0,0x0, bhvWhompKingBoss
,1),
OBJECT_WITH_ACTS(192,4415,285,1200,0,0,0,0x10000, bhvGoomba
,63),
OBJECT_WITH_ACTS(195,1130,3584,-2700,0,135,0,0x0, bhvBobombBuddyOpensCannon
,4),
OBJECT_WITH_ACTS(175,-3000,2501,5800,0,180,0,0x0, bhvWfRotatingWoodenPlatform
,126),
OBJECT_WITH_ACTS(0,0,3544,0,0,0,0,0x0, bhvTowerPlatformGroup
,62),
OBJECT_WITH_ACTS(8,0,3584,0,0,0,0,0x0, bhvTower
,62),
OBJECT_WITH_ACTS(129,1500,17000,4700,340,0,0,0x0, bhvHiddenObject
,30),
OBJECT_WITH_ACTS(178,-300,5800,2800,340,330,15,0x0, bhvWfTumblingBridge
,62),
OBJECT_WITH_ACTS(0,-1223,2560,0,0,0,0,0x0, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,375,3250,-450,0,135,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(129,2100,16800,4700,20,0,20,0x0, bhvHiddenObject
,30),
OBJECT_WITH_ACTS(178,-4000,7300,3900,340,240,15,0x0, bhvWfTumblingBridge
,62),
OBJECT_WITH_ACTS(178,-5500,8000,1500,0,180,30,0x0, bhvWfTumblingBridge
,62),
OBJECT_WITH_ACTS(178,-3000,2600,2050,0,0,0,0x0, bhvWfTumblingBridge
,62),
OBJECT_WITH_ACTS(178,-5100,7800,2900,340,210,20,0x0, bhvWfTumblingBridge
,62),
OBJECT_WITH_ACTS(178,-3000,2600,3200,0,0,0,0x0, bhvWfTumblingBridge
,62),
OBJECT_WITH_ACTS(178,-1300,6300,3800,340,300,15,0x0, bhvWfTumblingBridge
,190),
OBJECT_WITH_ACTS(175,-500,2500,5800,0,0,0,0x0, bhvWfRotatingWoodenPlatform
,62),
OBJECT_WITH_ACTS(175,2000,2500,5800,0,180,0,0x0, bhvWfRotatingWoodenPlatform
,62),
OBJECT_WITH_ACTS(129,2100,16600,4100,0,0,340,0x0, bhvHiddenObject
,94),
OBJECT_WITH_ACTS(178,-5454,8062,-800,0,180,10,0x0, bhvWfTumblingBridge
,62),
OBJECT_WITH_ACTS(13,4520,12500,600,0,0,0,0x0, bhvGiantPole
,30),
OBJECT_WITH_ACTS(207,3800,16000,3400,0,90,0,0x0, bhvFloorSwitchHiddenObjects
,30),
OBJECT_WITH_ACTS(89,3750,1075,-1150,0,0,0,0x0, bhvHeaveHo
,31),
OBJECT_WITH_ACTS(129,2100,16400,3500,340,0,20,0x0, bhvHiddenObject
,30),
OBJECT_WITH_ACTS(178,-25,5300,1500,340,0,10,0x0, bhvWfTumblingBridge
,62),
OBJECT_WITH_ACTS(129,3300,16000,3500,340,0,0,0x0, bhvHiddenObject
,30),
OBJECT_WITH_ACTS(0,-2495,1331,-256,0,0,0,0x3d0000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(0,400,2650,2300,0,90,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(129,2700,16200,3300,20,0,0,0x0, bhvHiddenObject
,30),
OBJECT_WITH_ACTS(178,-2600,6800,4200,340,270,15,0x0, bhvWfTumblingBridge
,62),
OBJECT_WITH_ACTS(89,-1100,2560,2250,0,90,0,0x0, bhvHeaveHo
,63),
OBJECT_WITH_ACTS(56,13,3584,-1407,0,315,0,0x0, bhvKickableBoard
,62),
OBJECT_WITH_ACTS(13,4520,15000,3400,0,0,0,0x0, bhvGiantPole
,30),
OBJECT_WITH_ACTS(7,-2040,9250,0,0,145,270,0x0, bhvStaticObject
,191),
OBJECT_WITH_ACTS(16,800,17500,4700,0,0,0,0x2000000, bhvRotatingPlatform
,222),
OBJECT_WITH_ACTS(89,3750,1075,-2150,0,0,0,0x0, bhvHeaveHo
,31),
OBJECT_WITH_ACTS(116,-5480,8200,-2400,0,90,0,0x0, bhvOneCoin
,62),
OBJECT_WITH_ACTS(0,-2200,500,200,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(13,4520,13750,2000,0,180,0,0x0, bhvGiantPole
,30),
OBJECT_WITH_ACTS(118,50,1375,2500,0,0,0,0x0, bhvHiddenBlueCoin
,31),
OBJECT_WITH_ACTS(57,-500,3584,0,0,0,0,0x0, bhvTowerDoor
,126),
OBJECT_WITH_ACTS(0,300,2560,-1750,0,45,0,0x0, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(180,0,5418,1430,0,0,0,0x0, bhvFireSpitter
,62),
OBJECT_WITH_ACTS(12,1408,2522,2431,0,0,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(10,3840,794,2688,0,0,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(7,1757,3519,-3151,0,0,0,0x0, bhvStaticObject
,62),
OBJECT_WITH_ACTS(6,0,0,0,0,0,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(5,3840,0,-1279,0,0,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(5,3840,0,-2303,0,0,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(4,3405,1664,-1791,0,0,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(3,2305,2432,-255,0,0,0,0x0, bhvStaticObject
,31),
OBJECT_WITH_ACTS(128,4520,8000,-2400,0,180,0,0x0, bhvCannon
,30),
OBJECT_WITH_ACTS(128,-5480,8275,-2400,0,0,0,0x0, bhvCannon
,62),
OBJECT_WITH_ACTS(0,3050,700,6200,0,0,0,0xa0000, bhvSpinAirborneWarp
,31),
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
