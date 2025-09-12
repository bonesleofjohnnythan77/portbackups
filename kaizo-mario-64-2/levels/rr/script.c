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
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,59704,2581,65393,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,3285,64639,61901,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,60007,63614,6557,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,6754,64883,64819,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,3054,186,282,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,61346,3692,59119,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,64726,61677,6294,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,1444,63779,3117,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb_buddy_opens_cannon,0,60255,3088,61853,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_cannon_closed,0,5545,3333,63191,192),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,29,829,65271,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,6500,64636,900,1),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,599,64485,2401,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_enemy_lakitu,0,3498,65243,61796,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,642,64017,1024,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,460,64496,64004,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,3713,65240,6585,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,58465,63831,65505,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,1064,3197,27,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb,0,59664,63754,572,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_enemy_lakitu,0,499,62768,4968,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,615,62372,5660,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,63916,64136,5844,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,90,63670,64531,4933,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,90,799,64201,6622,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,152,1696,64536,61933,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,1063,3147,37,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,301,59472,62806,6448,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_no_coins,0,2560,1000,63936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_enemy_lakitu,0,64096,63980,6640,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,5040,2100,280,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,3542,4892,63165,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_enemy_lakitu,0,63573,3507,65415,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb,0,3485,2889,63479,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb,0,2628,2893,63165,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,349,61529,64320,3556,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,62194,3333,60465,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,57765,4463,61665,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,58965,4000,63208,1),
MACRO_OBJECT_WITH_BEH_PARAM(macro_floor_switch_hidden_objects,273,64573,63602,6519,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,5114,3828,4028,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,65371,3543,63184,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,4135,63731,6525,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,64801,2860,65386,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,63361,2365,65476,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_blue_coin_switch,0,58606,63745,521,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_enemy_lakitu,0,60775,1700,65401,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,59336,1700,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,59636,1700,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,59936,1700,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,58786,64041,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,60236,1700,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,60492,3344,62977,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_enemy_lakitu,0,60353,63826,6572,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,60719,64578,4005,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,58821,63636,6700,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,62477,1663,65477,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,1490,708,65382,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,62108,6770,60408,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_star_6,0,6732,3680,3893,0),
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
WARP_NODE(241,6,2,108,0),
WARP_NODE(240,6,2,58,0),
WARP_NODE(12,15,1,11,0),
WARP_NODE(11,15,1,12,0),
WARP_NODE(10,15,1,10,0),
OBJECT_WITH_ACTS(122,3700,635,6600,0,0,0,0x4000000, bhvStar
,63),
OBJECT_WITH_ACTS(122,-3429,-700,3409,0,0,0,0x3000000, bhvStar
,63),
OBJECT_WITH_ACTS(0,-3757,1849,-5,0,0,0,0x2000000, bhvHiddenRedCoinStar
,63),
OBJECT_WITH_ACTS(122,-4212,6264,-2145,0,0,0,0x1000000, bhvStar
,63),
OBJECT_WITH_ACTS(122,-161,3691,-2366,0,0,0,0x0, bhvStar
,63),
OBJECT_WITH_ACTS(0,-4187,3213,-6630,0,0,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,6772,-757,-606,0,0,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,3301,-1834,5617,0,0,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,-4838,-1015,4081,0,0,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(223,-7877,4374,-4009,0,0,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(0,3811,1033,295,0,0,0,0x620000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(217,-7333,4401,-4984,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(0,3554,2891,-2327,0,0,0,0xc10000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(223,5883,3819,4171,0,0,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(0,621,-4598,7362,0,0,0,0x750000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(0,614,-2857,3671,0,0,0,0xcc0000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(0,787,-1419,6595,0,0,0,0x40000, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,5350,-1444,6638,0,0,0,0x0, bhvCheckerboardElevatorGroup
,31),
OBJECT_WITH_ACTS(223,-6673,3967,-2497,0,0,0,0x0, bhvChuckya
,31),
OBJECT_WITH_ACTS(0,0,0,0,0,0,0,0x0, bhvDonutPlatformSpawner
,31),
OBJECT_WITH_ACTS(0,-2240,-3601,6517,0,0,0,0x0, bhvCheckerboardElevatorGroup
,31),
OBJECT_WITH_ACTS(62,-3190,3928,-1616,0,0,0,0x0, bhvSwingPlatform
,31),
OBJECT_WITH_ACTS(180,2872,2699,59,0,270,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(217,-5342,-3035,6653,0,270,0,0x0, bhvPushableMetalBox
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
OBJECT_WITH_ACTS(0,1075,3298,-2361,0,0,0,0x40000, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(217,4829,-76,-3632,0,0,315,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(217,5561,441,-3300,0,180,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(56,425,-1273,-519,0,275,307,0x10000, bhvOctagonalPlatformRotating
,31),
OBJECT_WITH_ACTS(217,5140,409,-2060,0,180,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(180,-4285,3745,-2977,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,3235,1140,336,0,180,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,580,-963,-3659,0,180,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,-769,1968,-204,0,180,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(54,-2684,-1423,-36,0,0,0,0x2590000, bhvSlidingPlatform2
,31),
OBJECT_WITH_ACTS(54,-3400,-2038,6564,0,0,0,0x2560000, bhvSlidingPlatform2
,31),
OBJECT_WITH_ACTS(0,-7324,4813,-4981,0,180,0,0xc0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-4926,6535,-5593,0,90,0,0xb0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,2599,-833,2071,0,90,0,0xa0000, bhvSpinAirborneWarp
,31),
        TERRAIN(/*terrainData*/ rr_seg7_collision_level),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_LEVEL_KOOPA_ROAD),
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
