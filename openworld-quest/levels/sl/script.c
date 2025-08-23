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
#include "levels/sl/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_sl_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,89,4666,63165,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,1285,2210,385,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,1728,2560,64865,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,1371,2188,65036,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,1814,3174,114,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,168,4666,62120,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,65480,3360,1815,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_cannon_closed,0,4483,821,1168,128),
MACRO_OBJECT_WITH_BEH_PARAM(macro_blue_coin_switch,0,60185,1024,58874,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_mr_blizzard,0,5422,1065,64248,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_floor_switch_hidden_objects,0,0,4864,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_mr_blizzard,0,1122,1536,63074,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_three_coins,0,974,1024,2075,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,145,1024,58869,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_mr_blizzard,0,61673,1083,62515,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_mr_blizzard,0,4482,1040,59998,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_mr_blizzard,0,4517,1024,3226,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,0,3700,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,45,5891,733,5903,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,61776,1120,1240,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,274,1352,60974,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,62096,1400,65496,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,400,1060,5860,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,880,1080,4860,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,1400,1080,3860,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,3400,1660,62616,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,60962,1024,58869,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,61295,1009,61702,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,13,4662,64277,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,61694,1024,58869,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,61440,1125,3062,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,61000,1125,3782,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,62466,1024,58869,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,63263,1024,58869,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,64053,1024,58869,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,64874,1024,58869,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,246,4666,61027,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,355,4666,59921,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fly_guy,0,2766,1522,61903,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,48,5205,1024,5292,69),
MACRO_OBJECT_WITH_BEH_PARAM(macro_moneybag,0,2440,1024,4840,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_moneybag,0,63136,1177,61336,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,62156,1360,61396,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,4951,1024,4651,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,2909,1024,4245,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,3418,1024,3554,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,4383,1024,5271,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_sl_2[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,64996,65516,64816,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,64996,287,64816,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,45,63516,20,64216,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,45,63516,307,64216,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,63636,65376,70,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_vanish_cap,0,0,0,3000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,63636,120,70,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb_buddy_opens_cannon,0,0,317,920,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,45,64156,370,860,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,45,64156,170,860,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,45,63726,65516,860,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,45,63726,287,860,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,45,620,65516,530,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,45,620,287,530,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,45,1300,65516,65466,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,45,1300,287,65466,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,350,65516,64656,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,350,287,64656,0),
MACRO_OBJECT_END(),
};


static const LevelScript script_func_local_1[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/  700, 4500,  690, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ 4350, 1350, 4350, /*angle*/ 0, 0, 0, /*behParam*/ 0x02000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/ 5000, 1200,    0, /*angle*/ 0, 0, 0, /*behParam*/ 0x04000000, /*beh*/ bhvHiddenRedCoinStar, /*acts*/ ALL_ACTS),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  977, 1024, 2075, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSnowMoundSpawn),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT(/*model*/ MODEL_PENGUIN,            /*pos*/ 1715, 3328,   518, /*angle*/ 0, -51, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSLWalkingPenguin),
    OBJECT(/*model*/ MODEL_NONE,               /*pos*/  700, 3428,   700, /*angle*/ 0,  30, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSLSnowmanWind),
    OBJECT(/*model*/ MODEL_NONE,               /*pos*/  480, 2300,  1370, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvIgloo),
    OBJECT(/*model*/ MODEL_BIG_CHILL_BULLY,    /*pos*/  315, 1331, -4852, /*angle*/ 0,   0, 0, /*behParam*/ 0x01000000, /*beh*/ bhvBigChillBully),
    OBJECT(/*model*/ MODEL_MR_BLIZZARD_HIDDEN, /*pos*/ 2954,  970,   750, /*angle*/ 0,   0, 0, /*behParam*/ 0x00020000, /*beh*/ bhvMrBlizzard),
    RETURN(),
};

static const LevelScript script_func_local_4[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ 0, 500, 1000, /*angle*/ 0, 0, 0, /*behParam*/ 0x05000000, /*beh*/ bhvStar, /*acts*/ ALL_ACTS),
    RETURN(),
};

const LevelScript level_sl_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _sl_segment_7SegmentRomStart, _sl_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _snow_mio0SegmentRomStart, _snow_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _ccm_skybox_mio0SegmentRomStart, _ccm_skybox_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group7_mio0SegmentRomStart, _group7_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group7_geoSegmentRomStart,  _group7_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group16_mio0SegmentRomStart, _group16_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group16_geoSegmentRomStart,  _group16_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_8),
    JUMP_LINK(script_func_global_17),
    LOAD_MODEL_FROM_GEO(MODEL_SL_SNOW_TRIANGLE,      sl_geo_000390),
    LOAD_MODEL_FROM_GEO(MODEL_SL_CRACKED_ICE,        sl_geo_000360),
    LOAD_MODEL_FROM_GEO(MODEL_SL_CRACKED_ICE_CHUNK,  sl_geo_000378),
    LOAD_MODEL_FROM_GEO(MODEL_SL_SNOW_TREE,          snow_tree_geo),

    AREA(/*index*/ 1, sl_geo_0003A8),
MACRO_OBJECTS(local_macro_objects_sl_1),
WARP_NODE(241,10,1,241,0),
WARP_NODE(240,10,1,240,0),
WARP_NODE(14,10,1,13,0),
WARP_NODE(13,10,2,10,0),
WARP_NODE(12,7,1,10,0),
WARP_NODE(11,10,1,11,0),
WARP_NODE(10,23,1,10,0),
OBJECT_WITH_ACTS(137,937,1024,2075,0,0,0,0xe0000, bhvExclamationBox
,31),
OBJECT_WITH_ACTS(0,1377,1024,2075,0,0,0,0x0, bhvSnowMoundSpawn
,31),
OBJECT_WITH_ACTS(0,296,2151,1402,0,281,0,0x8000000, bhvDoor
,31),
OBJECT_WITH_ACTS(0,87,2151,1446,0,282,0,0xe0000, bhvSwimmingWarp
,31),
OBJECT_WITH_ACTS(0,700,3328,700,0,30,0,0x60d0000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,977,1024,2075,0,0,0,0x0, bhvSnowMoundSpawn
,31),
OBJECT_WITH_ACTS(0,1177,1024,2075,0,0,0,0x0, bhvSnowMoundSpawn
,31),
OBJECT_WITH_ACTS(122,4350,4200,4350,0,0,0,0x2000000, bhvStar
,31),
OBJECT_WITH_ACTS(122,395,4900,-6536,0,0,0,0x0, bhvStar
,31),
OBJECT_WITH_ACTS(0,4281,1601,3,0,270,0,0xf00000, bhvAirborneStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,4281,1601,3,0,270,0,0xf10000, bhvDeathWarp
,31),
OBJECT_WITH_ACTS(0,559,2150,1384,0,280,0,0x60c0000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,480,2300,1370,0,0,0,0x0, bhvIgloo
,31),
OBJECT_WITH_ACTS(139,5921,1042,5933,90,222,0,0x50a0000, bhvWarp
,31),
        TERRAIN(/*terrainData*/ sl_seg7_area_1_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_LEVEL_SNOW),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SNOW),
    END_AREA(),

    AREA(/*index*/ 2, sl_geo_000484),
MACRO_OBJECTS(local_macro_objects_sl_2),
WARP_NODE(241,10,1,241,0),
WARP_NODE(240,10,1,240,0),
WARP_NODE(11,10,1,11,0),
WARP_NODE(10,10,2,10,0),
OBJECT_WITH_ACTS(122,-720,300,-1750,0,0,0,0x1000000, bhvStar
,31),
OBJECT_WITH_ACTS(217,0,0,2821,0,0,0,0x0, bhvPushableMetalBox
,31),
OBJECT_WITH_ACTS(0,1650,300,-1750,0,0,0,0xa0000, bhvInstantActiveWarp
,31),
        TERRAIN(/*terrainData*/ sl_seg7_area_2_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0004, /*seq*/ 54),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SNOW),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 270, /*pos*/ 5541, 1024, 443),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
