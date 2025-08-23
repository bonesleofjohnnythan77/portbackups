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
#include "levels/rr/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_rr_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,59686,64446,4940,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,3700,64886,6600,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,60256,60966,6600,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,58486,2388,65486,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,3189,64436,65486,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,5050,1980,300,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,600,64436,61912,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,62847,800,65466,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb_buddy_opens_cannon,0,61336,1648,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_cannon_closed,0,5545,3333,63191,192),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,5590,3828,4510,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,6500,64636,900,1),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,6500,64536,900,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_enemy_lakitu,0,615,64952,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,59626,1037,65496,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal_flying,0,600,64496,1200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal_flying,0,600,64949,64236,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_recovery_heart,0,58465,63831,65505,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb,0,62241,63754,524,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb,0,59664,63754,572,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fly_guy,0,971,62477,4912,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,615,62261,5660,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_vertical,0,63333,62036,6572,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,63670,64420,4933,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,90,59506,5081,59836,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fly_guy,0,58593,5000,61583,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,3774,976,63906,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,3159,112,61877,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,2560,1000,63936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,64096,63576,6640,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,3963,65499,61869,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fly_guy,0,63160,64755,4520,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_enemy_lakitu,0,4714,3507,63165,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb,0,3485,2889,63479,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb,0,2628,2893,63165,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,3389,64927,61883,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,180,61354,3072,60410,4),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,233,58946,4352,63141,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,58965,4000,63208,1),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,90,58586,4450,60336,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,5114,3828,4028,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,65371,3543,63184,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,2930,64525,61887,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,59506,5500,59486,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,59506,4700,60336,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_blue_coin_switch,0,58606,63745,521,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,59036,1700,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,59336,1700,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,59636,1700,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,59936,1700,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,58786,64041,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,60236,1700,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,62303,1291,65484,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,3774,976,63906,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,3159,112,61877,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,3963,65499,61869,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,3389,64927,61883,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,2930,64525,61887,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,58386,4450,60336,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,4663,3828,4540,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,59536,65096,65496,0),
MACRO_OBJECT_END(),
};

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_RR_SLIDING_PLATFORM,         /*pos*/ -3400, -2038,  6564, /*angle*/  0,   0,   0, /*behParam*/ 0x02560000, /*beh*/ bhvSlidingPlatform2),
    OBJECT(/*model*/ MODEL_RR_SLIDING_PLATFORM,         /*pos*/ -2684, -1423,   -36, /*angle*/  0,   0,   0, /*behParam*/ 0x02590000, /*beh*/ bhvSlidingPlatform2),
    OBJECT(/*model*/ MODEL_RR_FLYING_CARPET,            /*pos*/  4571, -1782,  2036, /*angle*/  0, 180,   0, /*behParam*/ 0x00000000, /*beh*/ bhvPlatformOnTrack),
    OBJECT(/*model*/ MODEL_RR_FLYING_CARPET,            /*pos*/   580,  -963, -3659, /*angle*/  0, 180,   0, /*behParam*/ 0x00010000, /*beh*/ bhvPlatformOnTrack),
    OBJECT(/*model*/ MODEL_RR_FLYING_CARPET,            /*pos*/  1567,   880,  -184, /*angle*/  0, 180,   0, /*behParam*/ 0x00070000, /*beh*/ bhvPlatformOnTrack),
    OBJECT(/*model*/ MODEL_RR_FLYING_CARPET,            /*pos*/   646,   880,  -184, /*angle*/  0,   0,   0, /*behParam*/ 0x00080000, /*beh*/ bhvPlatformOnTrack),
    OBJECT(/*model*/ MODEL_RR_OCTAGONAL_PLATFORM,       /*pos*/   644, -1321, -1301, /*angle*/  0, 180,   0, /*behParam*/ 0x03010000, /*beh*/ bhvOctagonalPlatformRotating),
    OBJECT(/*model*/ MODEL_RR_OCTAGONAL_PLATFORM,       /*pos*/  1797, -1321,   -56, /*angle*/  0,   0,   0, /*behParam*/ 0x00010000, /*beh*/ bhvOctagonalPlatformRotating),
    OBJECT(/*model*/ MODEL_RR_OCTAGONAL_PLATFORM,       /*pos*/   663, -1321,  1179, /*angle*/  0, 180,   0, /*behParam*/ 0x03010000, /*beh*/ bhvOctagonalPlatformRotating),
    OBJECT(/*model*/ MODEL_RR_OCTAGONAL_PLATFORM,       /*pos*/  -502, -1321,   -51, /*angle*/  0,   0,   0, /*behParam*/ 0x00010000, /*beh*/ bhvOctagonalPlatformRotating),
    OBJECT(/*model*/ MODEL_RR_ROTATING_BRIDGE_PLATFORM, /*pos*/  5043,  1342,   300, /*angle*/  0,   0,   0, /*behParam*/ 0x00010000, /*beh*/ bhvRrRotatingBridgePlatform),
    OBJECT(/*model*/ MODEL_RR_CRUISER_WING,             /*pos*/  3473,  2422, -1821, /*angle*/  0,   0,   0, /*behParam*/ 0x00000000, /*beh*/ bhvRrCruiserWing),
    OBJECT(/*model*/ MODEL_RR_CRUISER_WING,             /*pos*/  4084,  2431, -2883, /*angle*/ 45, 180, 180, /*behParam*/ 0x00010000, /*beh*/ bhvRrCruiserWing),
    OBJECT(/*model*/ MODEL_RR_CRUISER_WING,             /*pos*/  3470,  2420, -2869, /*angle*/ 45, 180, 180, /*behParam*/ 0x00010000, /*beh*/ bhvRrCruiserWing),
    OBJECT(/*model*/ MODEL_RR_CRUISER_WING,             /*pos*/  2856,  2410, -2855, /*angle*/ 45, 180, 180, /*behParam*/ 0x00010000, /*beh*/ bhvRrCruiserWing),
    OBJECT(/*model*/ MODEL_RR_CRUISER_WING,             /*pos*/  4101,  2435, -1813, /*angle*/  0,   0,   0, /*behParam*/ 0x00000000, /*beh*/ bhvRrCruiserWing),
    OBJECT(/*model*/ MODEL_RR_CRUISER_WING,             /*pos*/  2859,  2411, -1834, /*angle*/  0,   0,   0, /*behParam*/ 0x00000000, /*beh*/ bhvRrCruiserWing),
    OBJECT(/*model*/ MODEL_RR_SEESAW_PLATFORM,          /*pos*/ -6013, -2857,  6564, /*angle*/  0, 270,   0, /*behParam*/ 0x00050000, /*beh*/ bhvSeesawPlatform),
    OBJECT(/*model*/ MODEL_RR_SEESAW_PLATFORM,          /*pos*/   614, -3574,  6564, /*angle*/  0, 270,   0, /*behParam*/ 0x00050000, /*beh*/ bhvSeesawPlatform),
    OBJECT(/*model*/ MODEL_RR_SWINGING_PLATFORM,        /*pos*/ -3557,  -809,  4619, /*angle*/  0,   0,   0, /*behParam*/ 0x00000000, /*beh*/ bhvSwingPlatform),
    OBJECT(/*model*/ MODEL_RR_SWINGING_PLATFORM,        /*pos*/ -2213, -2582,  6257, /*angle*/  0,   0,   0, /*behParam*/ 0x00000000, /*beh*/ bhvSwingPlatform),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/     0,     0,     0, /*angle*/  0,   0,   0, /*behParam*/ 0x00000000, /*beh*/ bhvDonutPlatformSpawner),
    OBJECT(/*model*/ MODEL_RR_ELEVATOR_PLATFORM,        /*pos*/ -2684,  1546,   -36, /*angle*/  0,   0,   0, /*behParam*/ 0x00050000, /*beh*/ bhvRrElevatorPlatform),
    OBJECT(/*model*/ MODEL_RR_TRICKY_TRIANGLES,         /*pos*/  5862, -1347,  6564, /*angle*/  0,   0,   0, /*behParam*/ 0x00020000, /*beh*/ bhvAnimatesOnFloorSwitchPress),
    OBJECT(/*model*/ MODEL_PURPLE_SWITCH,               /*pos*/  4428, -1936,  6564, /*angle*/  0,   0,   0, /*behParam*/ 0x00000000, /*beh*/ bhvFloorSwitchAnimatesObject),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/   614, -2857,  3671, /*angle*/  0,   0,   0, /*behParam*/ 0x00CC0000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/   621, -4598,  7362, /*angle*/  0,   0,   0, /*behParam*/ 0x00750000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/  5119,  3819,  3325, /*angle*/  0,   0,   0, /*behParam*/ 0x00610000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/  3554,  2891, -2327, /*angle*/  0,   0,   0, /*behParam*/ 0x00C10000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/  2680,   214,   295, /*angle*/  0,   0,   0, /*behParam*/ 0x00620000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/  3811,  1033,   295, /*angle*/  0,   0,   0, /*behParam*/ 0x00620000, /*beh*/ bhvPoleGrabbing),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -5809, -1834,  5719, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlamethrower),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -4838, -1015,  4081, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlamethrower),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  3301, -1834,  5617, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlamethrower),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  6772,  -757,  -606, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlamethrower),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -4187,  3213, -6630, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlamethrower),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/  1450,  3400, -2352, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ -4200,  6700, -4450, /*angle*/ 0, 0, 0, /*behParam*/ 0x01000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/ -5150, -1400,     0, /*angle*/ 0, 0, 0, /*behParam*/ 0x02000000, /*beh*/ bhvHiddenRedCoinStar, /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ -5850,  -700,  4950, /*angle*/ 0, 0, 0, /*behParam*/ 0x03000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/  3700,  -400,  6600, /*angle*/ 0, 0, 0, /*behParam*/ 0x04000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    RETURN(),
};

const LevelScript level_rr_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _sky_mio0SegmentRomStart, _sky_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _cloud_floor_skybox_mio0SegmentRomStart, _cloud_floor_skybox_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group11_mio0SegmentRomStart, _group11_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group11_geoSegmentRomStart,  _group11_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_12),
    JUMP_LINK(script_func_global_1),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,           rr_geo_000660),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,           rr_geo_000678),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,           rr_geo_000690),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,           rr_geo_0006A8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,           rr_geo_0006C0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,           rr_geo_0006D8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,           rr_geo_0006F0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,           rr_geo_000708),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,           rr_geo_000720),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,           rr_geo_000738),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,           rr_geo_000758),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,           rr_geo_000770),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,           rr_geo_000788),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10,           rr_geo_0007A0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,           rr_geo_0007B8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12,           rr_geo_0007D0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13,           rr_geo_0007E8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14,           rr_geo_000800),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_15,           rr_geo_000818),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_16,           rr_geo_000830),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SLIDING_PLATFORM,         rr_geo_0008C0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_FLYING_CARPET,            rr_geo_000848),
    LOAD_MODEL_FROM_GEO(MODEL_RR_OCTAGONAL_PLATFORM,       rr_geo_0008A8),
    LOAD_MODEL_FROM_GEO(MODEL_RR_ROTATING_BRIDGE_PLATFORM, rr_geo_000878),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRIANGLE_PLATFORM,        rr_geo_0008D8),
    LOAD_MODEL_FROM_GEO(MODEL_RR_CRUISER_WING,             rr_geo_000890),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SEESAW_PLATFORM,          rr_geo_000908),
    LOAD_MODEL_FROM_GEO(MODEL_RR_L_SHAPED_PLATFORM,        rr_geo_000940),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SWINGING_PLATFORM,        rr_geo_000860),
    LOAD_MODEL_FROM_GEO(MODEL_RR_DONUT_PLATFORM,           rr_geo_000920),
    LOAD_MODEL_FROM_GEO(MODEL_RR_ELEVATOR_PLATFORM,        rr_geo_0008F0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES,         rr_geo_000958),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME1,  rr_geo_000970),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME2,  rr_geo_000988),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME3,  rr_geo_0009A0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME4,  rr_geo_0009B8),

    AREA(/*index*/ 1, rr_geo_0009D0),
MACRO_OBJECTS(local_macro_objects_rr_1),
WARP_NODE(241,15,1,241,0),
WARP_NODE(240,15,1,240,0),
WARP_NODE(12,19,1,10,0),
WARP_NODE(11,15,1,12,0),
WARP_NODE(10,31,1,1,0),
OBJECT_WITH_ACTS(0,-5150,-1400,0,0,0,0,0x2000000, bhvHiddenRedCoinStar
,31),
OBJECT_WITH_ACTS(122,-4200,6700,-4450,0,0,0,0x0, bhvStar
,31),
OBJECT_WITH_ACTS(0,6497,-853,893,0,0,0,0x1000000, bhvHiddenStar
,31),
OBJECT_WITH_ACTS(0,-4182,3148,-6446,0,0,0,0x30c0000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,2599,-1304,2071,0,180,0,0xf00000, bhvAirborneStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,2599,-1304,2071,0,180,0,0xf10000, bhvDeathWarp
,31),
OBJECT_WITH_ACTS(124,2599,-1843,2785,0,180,0,0x220000, bhvMessagePanel
,31),
OBJECT_WITH_ACTS(0,2639,-1628,2072,0,0,0,0x0, bhvGoombaTripletSpawner
,31),
OBJECT_WITH_ACTS(0,3811,1033,295,0,0,0,0x620000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(0,2680,214,295,0,0,0,0x620000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(0,3554,2891,-2327,0,0,0,0xc10000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(0,5119,3819,3325,0,0,0,0x610000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(0,621,-4598,7362,0,0,0,0x750000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(0,614,-2857,3671,0,0,0,0xcc0000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(207,4428,-1936,6564,0,0,0,0x0, bhvFloorSwitchAnimatesObject
,31),
OBJECT_WITH_ACTS(65,5862,-1347,6564,0,0,0,0x20000, bhvAnimatesOnFloorSwitchPress
,31),
OBJECT_WITH_ACTS(64,-2684,1546,-36,0,0,0,0x50000, bhvRrElevatorPlatform
,31),
OBJECT_WITH_ACTS(0,0,0,0,0,0,0,0x0, bhvDonutPlatformSpawner
,31),
OBJECT_WITH_ACTS(62,-2213,-2582,6257,0,0,0,0x0, bhvSwingPlatform
,31),
OBJECT_WITH_ACTS(60,614,-3574,6564,0,270,0,0x50000, bhvSeesawPlatform
,31),
OBJECT_WITH_ACTS(60,-6013,-2857,6564,0,270,0,0x50000, bhvSeesawPlatform
,31),
OBJECT_WITH_ACTS(59,2859,2411,-1834,0,0,0,0x0, bhvRrCruiserWing
,31),
OBJECT_WITH_ACTS(59,4101,2435,-1813,0,0,0,0x0, bhvRrCruiserWing
,31),
OBJECT_WITH_ACTS(59,2856,2410,-2855,45,180,180,0x10000, bhvRrCruiserWing
,31),
OBJECT_WITH_ACTS(59,3470,2420,-2869,45,180,180,0x10000, bhvRrCruiserWing
,31),
OBJECT_WITH_ACTS(59,4084,2431,-2883,45,180,180,0x10000, bhvRrCruiserWing
,31),
OBJECT_WITH_ACTS(59,3473,2422,-1821,0,0,0,0x0, bhvRrCruiserWing
,31),
OBJECT_WITH_ACTS(57,5043,1342,300,0,0,0,0x10000, bhvRrRotatingBridgePlatform
,31),
OBJECT_WITH_ACTS(56,-502,-1121,-51,0,0,0,0x10000, bhvOctagonalPlatformRotating
,31),
OBJECT_WITH_ACTS(56,663,-1321,1179,0,180,0,0x3010000, bhvOctagonalPlatformRotating
,31),
OBJECT_WITH_ACTS(56,1797,-621,-56,0,0,0,0x10000, bhvOctagonalPlatformRotating
,31),
OBJECT_WITH_ACTS(56,644,-821,-1301,0,180,0,0x3010000, bhvOctagonalPlatformRotating
,31),
OBJECT_WITH_ACTS(207,-7729,4351,-3704,0,0,0,0x0, bhvFloorSwitchHiddenObjects
,31),
OBJECT_WITH_ACTS(217,2599,-2126,1523,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(0,7325,-2238,6558,0,0,0,0x0, bhvCoinFormation
,31),
OBJECT_WITH_ACTS(54,-2684,-1423,-36,0,0,0,0x2590000, bhvSlidingPlatform2
,31),
OBJECT_WITH_ACTS(54,-3400,-2038,6564,0,0,0,0x2560000, bhvSlidingPlatform2
,31),
OBJECT_WITH_ACTS(0,-4182,3715,-5963,0,180,0,0xb0000, bhvAirborneStarCollectWarp
,31),
OBJECT_WITH_ACTS(87,5130,3823,4104,0,90,0,0x5000000, bhvWigglerHead
,31),
OBJECT_WITH_ACTS(139,2599,-1812,1475,90,0,0,0x40a0000, bhvWarp
,31),
        TERRAIN(/*terrainData*/ rr_seg7_collision_level),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ 17),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 90, /*pos*/ 2599, -1833, 2071),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
