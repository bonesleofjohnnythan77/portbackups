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
#include "levels/bitfs/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_bitfs_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,63546,62756,64946,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,62676,62756,64956,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal_flying,0,1130,62536,400,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,61216,62896,65036,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bully,0,2340,62772,580,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,6600,62766,280,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_recovery_heart,0,3660,62836,280,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,3880,64396,260,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal_flying,0,63636,652,320,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bully,0,63816,1320,65196,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,64896,800,180,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bully,0,60196,410,20,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bully,0,60336,410,700,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_1up,0,58136,1500,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,59386,1480,500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,59386,2600,500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,59386,3080,500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up,0,59076,2760,320,3),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,59176,3760,64696,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_recovery_heart,0,65516,3850,160,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_1up,0,2440,5520,140,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up_3,0,1198,5478,103,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal_flying,0,62926,3600,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,1231,63368,63789,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_vertical,0,59831,800,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba_triplet_spawner,0,3660,62772,300,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up_3,0,65362,62696,65398,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,2888,64161,310,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,1230,63636,63789,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,5800,63536,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,63690,1600,65060,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,61326,2615,280,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb,0,60175,3686,315,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,64146,3575,65116,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,3065,4610,92,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,4330,64746,65486,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_three_coins,0,7220,63736,260,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,58256,3100,64611,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,63211,3625,0,2),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_ten_coins,0,60196,4000,100,0),
MACRO_OBJECT_END(),
};

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_BITFS_PLATFORM_ON_TRACK,       /*pos*/ -5733, -3071,    0, /*angle*/ 0, 0, 0,   /*behParam*/ 0x07330000, /*beh*/ bhvPlatformOnTrack),
    OBJECT(/*model*/ MODEL_BITFS_TILTING_SQUARE_PLATFORM, /*pos*/ -1945, -3225, -715, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvBitfsTiltingInvertedPyramid),
    OBJECT(/*model*/ MODEL_BITFS_TILTING_SQUARE_PLATFORM, /*pos*/ -2866, -3225, -715, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvBitfsTiltingInvertedPyramid),
    OBJECT(/*model*/ MODEL_BITFS_SINKING_PLATFORMS,       /*pos*/ -1381,  3487,   96, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvBitfsSinkingPlatforms),
    OBJECT(/*model*/ MODEL_BITFS_SINKING_PLATFORMS,       /*pos*/  1126, -3065,  307, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvBitfsSinkingPlatforms),
    OBJECT(/*model*/ MODEL_BITFS_SINKING_PLATFORMS,       /*pos*/ -3225,  3487,   96, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvBitfsSinkingPlatforms),
    OBJECT(/*model*/ MODEL_BITFS_SINKING_CAGE_PLATFORM,   /*pos*/  6605, -3071,  266, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvBitfsSinkingCagePlatform),
    OBJECT(/*model*/ MODEL_BITFS_SINKING_CAGE_PLATFORM,   /*pos*/  1843,  3584,   96, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00010000, /*beh*/ bhvBitfsSinkingCagePlatform),
    OBJECT(/*model*/ MODEL_BITFS_SINKING_CAGE_PLATFORM,   /*pos*/   614,  3584,   96, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00010000, /*beh*/ bhvBitfsSinkingCagePlatform),
    OBJECT(/*model*/ MODEL_BITFS_SINKING_CAGE_PLATFORM,   /*pos*/  3072,  3584,   96, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00010000, /*beh*/ bhvBitfsSinkingCagePlatform),
    OBJECT(/*model*/ MODEL_BITFS_ELEVATOR,                /*pos*/  2867, -1279,  307, /*angle*/ 0, 0, 0,   /*behParam*/ 0x029F0000, /*beh*/ bhvActivatedBackAndForthPlatform),
    OBJECT(/*model*/ MODEL_BITFS_STRETCHING_PLATFORMS,    /*pos*/ -5836,   410,  300, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvSquishablePlatform),
    OBJECT(/*model*/ MODEL_BITFS_SEESAW_PLATFORM,         /*pos*/  4454, -2226,  266, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00040000, /*beh*/ bhvSeesawPlatform),
    OBJECT(/*model*/ MODEL_BITFS_SEESAW_PLATFORM,         /*pos*/  5786, -2380,  266, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00040000, /*beh*/ bhvSeesawPlatform),
    OBJECT(/*model*/ MODEL_BITFS_MOVING_SQUARE_PLATFORM,  /*pos*/ -3890,   102,  617, /*angle*/ 0, 90, 0,  /*behParam*/ 0x010C0000, /*beh*/ bhvSlidingPlatform2),
    OBJECT(/*model*/ MODEL_BITFS_MOVING_SQUARE_PLATFORM,  /*pos*/ -3276,   102,    2, /*angle*/ 0, 270, 0, /*behParam*/ 0x010C0000, /*beh*/ bhvSlidingPlatform2),
    OBJECT(/*model*/ MODEL_BITFS_SLIDING_PLATFORM,        /*pos*/  2103,   198,  312, /*angle*/ 0, 0, 0,   /*behParam*/ 0x019F0000, /*beh*/ bhvSlidingPlatform2),
    OBJECT(/*model*/ MODEL_BITFS_TUMBLING_PLATFORM,       /*pos*/  4979,  4250,   96, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00030000, /*beh*/ bhvWfTumblingBridge),
    OBJECT(/*model*/ MODEL_NONE,                          /*pos*/  3890, -2043,  266, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00520000, /*beh*/ bhvPoleGrabbing),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -3226, 3584, -822, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlamethrower),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -1382, 3584, -822, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlamethrower),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  1229,  307, -412, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlamethrower),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  1200, 5700,  160, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserCourseRedCoinStar),
    RETURN(),
};

const LevelScript level_bitfs_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _bitfs_segment_7SegmentRomStart, _bitfs_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _sky_mio0SegmentRomStart, _sky_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _bitfs_skybox_mio0SegmentRomStart, _bitfs_skybox_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group2_mio0SegmentRomStart, _group2_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group2_geoSegmentRomStart, _group2_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group17_mio0SegmentRomStart, _group17_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_3),
    JUMP_LINK(script_func_global_18),
    JUMP_LINK(script_func_global_1),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,             bitfs_geo_0004B0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,             bitfs_geo_0004C8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,             bitfs_geo_0004E0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,             bitfs_geo_0004F8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,             bitfs_geo_000510),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,             bitfs_geo_000528),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,             bitfs_geo_000540),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,             bitfs_geo_000558),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,             bitfs_geo_000570),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,             bitfs_geo_000588),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,             bitfs_geo_0005A0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,             bitfs_geo_0005B8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,             bitfs_geo_0005D0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10,             bitfs_geo_0005E8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,             bitfs_geo_000600),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12,             bitfs_geo_000618),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13,             bitfs_geo_000630),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14,             bitfs_geo_000648),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_15,             bitfs_geo_000660),
    LOAD_MODEL_FROM_GEO(MODEL_BITFS_PLATFORM_ON_TRACK,       bitfs_geo_000758),
    LOAD_MODEL_FROM_GEO(MODEL_BITFS_TILTING_SQUARE_PLATFORM, bitfs_geo_0006C0),
    LOAD_MODEL_FROM_GEO(MODEL_BITFS_SINKING_PLATFORMS,       bitfs_geo_000770),
    LOAD_MODEL_FROM_GEO(MODEL_BITFS_BLUE_POLE,               bitfs_geo_0006A8),
    LOAD_MODEL_FROM_GEO(MODEL_BITFS_SINKING_CAGE_PLATFORM,   bitfs_geo_000690),
    LOAD_MODEL_FROM_GEO(MODEL_BITFS_ELEVATOR,                bitfs_geo_000678),
    LOAD_MODEL_FROM_GEO(MODEL_BITFS_STRETCHING_PLATFORMS,    bitfs_geo_000708),
    LOAD_MODEL_FROM_GEO(MODEL_BITFS_SEESAW_PLATFORM,         bitfs_geo_000788),
    LOAD_MODEL_FROM_GEO(MODEL_BITFS_MOVING_SQUARE_PLATFORM,  bitfs_geo_000728),
    LOAD_MODEL_FROM_GEO(MODEL_BITFS_SLIDING_PLATFORM,        bitfs_geo_000740),
    LOAD_MODEL_FROM_GEO(MODEL_BITFS_TUMBLING_PLATFORM_PART,  bitfs_geo_0006D8),
    LOAD_MODEL_FROM_GEO(MODEL_BITFS_TUMBLING_PLATFORM,       bitfs_geo_0006F0),

    AREA(/*index*/ 1, bitfs_geo_0007A0),
MACRO_OBJECTS(local_macro_objects_bitfs_1),
WARP_NODE(241,6,3,104,0),
WARP_NODE(12,19,1,12,0),
WARP_NODE(11,33,1,10,0),
WARP_NODE(10,19,1,10,0),
OBJECT_WITH_ACTS(0,1200,5700,160,0,0,0,0x0, bhvBowserCourseRedCoinStar
,31),
OBJECT_WITH_ACTS(0,1229,307,-412,0,0,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,-1382,3584,-822,0,0,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,-3226,3584,-822,0,0,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,3890,-2043,266,0,0,0,0x520000, bhvPoleGrabbing
,31),
OBJECT_WITH_ACTS(65,4979,4250,96,0,0,0,0x30000, bhvWfTumblingBridge
,31),
OBJECT_WITH_ACTS(63,2103,198,312,0,0,0,0x19f0000, bhvSlidingPlatform2
,31),
OBJECT_WITH_ACTS(62,-3276,102,2,0,270,0,0x10c0000, bhvSlidingPlatform2
,31),
OBJECT_WITH_ACTS(62,-3890,102,617,0,90,0,0x10c0000, bhvSlidingPlatform2
,31),
OBJECT_WITH_ACTS(61,5786,-2380,266,0,0,0,0x40000, bhvSeesawPlatform
,31),
OBJECT_WITH_ACTS(61,4454,-2226,266,0,0,0,0x40000, bhvSeesawPlatform
,31),
OBJECT_WITH_ACTS(60,-5836,410,300,0,0,0,0x0, bhvSquishablePlatform
,31),
OBJECT_WITH_ACTS(59,2867,-1279,307,0,0,0,0x29f0000, bhvActivatedBackAndForthPlatform
,31),
OBJECT_WITH_ACTS(58,3072,3584,96,0,0,0,0x10000, bhvBitfsSinkingCagePlatform
,31),
OBJECT_WITH_ACTS(58,614,3584,96,0,0,0,0x10000, bhvBitfsSinkingCagePlatform
,31),
OBJECT_WITH_ACTS(58,1843,3584,96,0,0,0,0x10000, bhvBitfsSinkingCagePlatform
,31),
OBJECT_WITH_ACTS(58,6605,-3071,266,0,0,0,0x0, bhvBitfsSinkingCagePlatform
,31),
OBJECT_WITH_ACTS(56,-3225,3487,96,0,0,0,0x0, bhvBitfsSinkingPlatforms
,31),
OBJECT_WITH_ACTS(56,1126,-3065,307,0,0,0,0x0, bhvBitfsSinkingPlatforms
,31),
OBJECT_WITH_ACTS(56,-1381,3487,96,0,0,0,0x0, bhvBitfsSinkingPlatforms
,31),
OBJECT_WITH_ACTS(55,-2866,-3225,-715,0,0,0,0x0, bhvBitfsTiltingInvertedPyramid
,31),
OBJECT_WITH_ACTS(55,-1945,-3225,-715,0,0,0,0x0, bhvBitfsTiltingInvertedPyramid
,31),
OBJECT_WITH_ACTS(54,-5733,-3071,0,0,0,0,0x7330000, bhvPlatformOnTrack
,31),
OBJECT_WITH_ACTS(0,5886,5000,99,0,90,0,0xc0000, bhvDeathWarp
,31),
OBJECT_WITH_ACTS(0,6735,3681,99,0,0,0,0x140b0000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,-7577,-1764,0,0,90,0,0xa0000, bhvAirborneWarp
,31),
        TERRAIN(/*terrainData*/ bitfs_seg7_collision_level),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_LEVEL_KOOPA_ROAD),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 90, /*pos*/ -7577, -2764, 0),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
