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
#include "levels/lll/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_lll_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,2693,173,62498,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,59291,170,3041,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,5719,688,3053,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,506,955,117,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,59299,318,4788,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,61012,1778,2273,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,5759,801,880,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,63283,1000,62583,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,710,345,2796,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,112,7561,154,4158,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,451,100,1256,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,0,5764,983,3051,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,65490,378,58979,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,185,913,63948,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,2215,400,60190,0),
MACRO_OBJECT_END(),
};

// Unlike most levels, level geometry objects in LLL are defined as regular objects instead of terrain objects.
static const LevelScript script_func_local_1[] = {
    // This behavior differs from the rest in that it actually has collision rather than being purely visual.
    // A likely explanation is that this object was added in after the collision model was made, and they didn't want
    // to redo the collision so they just added a new behavior for it.
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_0E, /*pos*/ -5115, 300, -3200, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllHexagonalMesh),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {

    RETURN(),
};

static const LevelScript script_func_local_3[] = {
                         /*pos*/ -3583,    0, -4095, /*angle*/ 0,  0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvLllFloatingWoodBridge),
    RETURN(),
};

static const LevelScript script_func_local_4[] = {

    RETURN(),
};

static const LevelScript script_func_local_5[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/ -4400, 350,  250, /*angle*/ 0, 0, 0, /*behParam*/ 0x02000000, /*beh*/ bhvHiddenRedCoinStar, /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/  3100, 400, 7900, /*angle*/ 0, 0, 0, /*behParam*/ 0x03000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    RETURN(),
};

static const LevelScript script_func_local_6[] = {

    RETURN(),
};

static const LevelScript script_func_local_7[] = {

    RETURN(),
};

const LevelScript level_lll_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _lll_segment_7SegmentRomStart, _lll_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _fire_mio0SegmentRomStart, _fire_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _bitfs_skybox_mio0SegmentRomStart, _bitfs_skybox_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group2_mio0SegmentRomStart, _group2_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group2_geoSegmentRomStart,  _group2_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group17_mio0SegmentRomStart, _group17_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group17_geoSegmentRomStart,  _group17_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_3),
    JUMP_LINK(script_func_global_18),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,                  lll_geo_0009E0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,                  lll_geo_0009F8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,                  lll_geo_000A10),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,                  lll_geo_000A28),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,                  lll_geo_000A40),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,                  lll_geo_000A60),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,                  lll_geo_000A90),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,                  lll_geo_000AA8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,                  lll_geo_000AC0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,                  lll_geo_000AD8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,                  lll_geo_000AF0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_DRAWBRIDGE_PART,                lll_geo_000B20),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_ROTATING_BLOCK_FIRE_BARS,       lll_geo_000B38),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_ROTATING_HEXAGONAL_RING,        lll_geo_000BB0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_SINKING_RECTANGULAR_PLATFORM,   lll_geo_000BC8),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_SINKING_SQUARE_PLATFORMS,       lll_geo_000BE0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_TILTING_SQUARE_PLATFORM,        lll_geo_000BF8),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_1,                 lll_geo_000C10),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_2,                 lll_geo_000C30),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_3,                 lll_geo_000C50),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_4,                 lll_geo_000C70),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_5,                 lll_geo_000C90),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_6,                 lll_geo_000CB0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_7,                 lll_geo_000CD0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_8,                 lll_geo_000CF0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_9,                 lll_geo_000D10),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_10,                lll_geo_000D30),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_11,                lll_geo_000D50),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_12,                lll_geo_000D70),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_13,                lll_geo_000D90),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_14,                lll_geo_000DB0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_MOVING_OCTAGONAL_MESH_PLATFORM, lll_geo_000B08),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_SINKING_ROCK_BLOCK,             lll_geo_000DD0),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_ROLLING_LOG,                    lll_geo_000DE8),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_ROTATING_HEXAGONAL_PLATFORM,    lll_geo_000A78),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_WOOD_BRIDGE,                    lll_geo_000B50),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_LARGE_WOOD_BRIDGE,              lll_geo_000B68),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_FALLING_PLATFORM,               lll_geo_000B80),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_LARGE_FALLING_PLATFORM,         lll_geo_000B98),
    LOAD_MODEL_FROM_GEO(MODEL_LLL_VOLCANO_FALLING_TRAP,           lll_geo_000EA8),
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE,    warp_pipe_geo),

    AREA(/*index*/ 1, lll_geo_000E00),
MACRO_OBJECTS(local_macro_objects_lll_1),
WARP_NODE(241,6,3,100,0),
WARP_NODE(240,6,3,50,0),
WARP_NODE(13,22,1,12,0),
WARP_NODE(12,22,1,13,0),
WARP_NODE(11,22,1,10,128),
WARP_NODE(10,22,1,10,0),
OBJECT_WITH_ACTS(86,164,913,-1652,0,0,0,0x0, bhvSmallBully,27),
OBJECT_WITH_ACTS(MODEL_CASTLE_GROUNDS_WARP_PIPE,-5129,1307,133,0,0,0,0xc0000, bhvWarpPipe,63),
OBJECT_WITH_ACTS(86,-6619,328,4909,0,0,0,0x0, bhvSmallBully,255),
OBJECT_WITH_ACTS(63,-4148,0,-6802,0,90,0,0x0, bhvLllSinkingRectangularPlatform,30),
OBJECT_WITH_ACTS(55,-2528,-30,-6793,0,90,0,0x0, bhvLllSinkingRockBlock,30),
OBJECT_WITH_ACTS(55,-1795,-85,-6500,0,90,0,0x0, bhvLllSinkingRockBlock,30),
OBJECT_WITH_ACTS(55,-963,-40,-6500,0,0,0,0x0, bhvLllSinkingRockBlock,30),
OBJECT_WITH_ACTS(55,-53,-10,-6500,0,90,0,0x0, bhvLllSinkingRockBlock,30),
OBJECT_WITH_ACTS(55,1853,-40,-5603,-5,45,4,0x0, bhvLllSinkingRockBlock,30),
OBJECT_WITH_ACTS(122,-5008,113,-6787,0,72,0,0x0, bhvStar,30),
OBJECT_WITH_ACTS(55,827,-25,-6339,0,261,0,0x0, bhvLllSinkingRockBlock,30),
OBJECT_WITH_ACTS(55,2677,0,-3073,0,0,0,0x0, bhvLllSinkingRockBlock,31),
OBJECT_WITH_ACTS(55,2828,-35,-4112,357,310,0,0x0, bhvLllSinkingRockBlock,31),
OBJECT_WITH_ACTS(55,2594,0,-5029,-1,229,0,0x0, bhvLllSinkingRockBlock,31),
OBJECT_WITH_ACTS(55,4338,0,-6047,-5,59,0,0x0, bhvLllSinkingRockBlock,31),
OBJECT_WITH_ACTS(55,3427,0,-5709,0,90,0,0x0, bhvLllSinkingRockBlock,31),
OBJECT_WITH_ACTS(11,5700,-50,-5400,0,0,0,0x0, Bhv_Custom_0x13005714,31),
OBJECT_WITH_ACTS(12,5700,-200,-4400,0,0,0,0x0, Bhv_Custom_0x130056E4,31),
OBJECT_WITH_ACTS(14,5735,512,3040,0,330,0,0x0, bhvLllHexagonalMesh,31),
OBJECT_WITH_ACTS(65,-3327,655,-2699,0,90,0,0x0, bhvLllTiltingInvertedPyramid,27),
OBJECT_WITH_ACTS(12,5700,-200,-3400,0,180,0,0x0, Bhv_Custom_0x130056E4,31),
OBJECT_WITH_ACTS(12,5700,-50,-2400,0,180,0,0x0, Bhv_Custom_0x130056E4,31),
OBJECT_WITH_ACTS(65,-2267,600,-3016,0,0,0,0x0, bhvLllTiltingInvertedPyramid,27),
OBJECT_WITH_ACTS(12,5700,100,-1400,0,180,0,0x0, Bhv_Custom_0x130056E4,31),
OBJECT_WITH_ACTS(12,5700,250,-400,0,180,0,0x0, Bhv_Custom_0x130056E4,31),
OBJECT_WITH_ACTS(12,5700,400,600,0,180,0,0x0, Bhv_Custom_0x130056E4,31),
OBJECT_WITH_ACTS(MODEL_CASTLE_GROUNDS_WARP_PIPE,5700,104,-5600,0,0,0,0xd0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,-2564,825,241,0,0,0,0x0, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(65,2089,320,4561,0,0,0,0x0, bhvLllTiltingInvertedPyramid,31),
OBJECT_WITH_ACTS(10,5734,0,3039,0,0,0,0x0, Bhv_Custom_0x1300577C,31),
OBJECT_WITH_ACTS(62,5768,0,3021,0,0,0,0x0, bhvLllRotatingHexagonalRing,31),
OBJECT_WITH_ACTS(9,-2903,80,4544,0,0,0,0x0, bhvLllRotatingHexagonalPlatform,31),
OBJECT_WITH_ACTS(11,4371,400,5214,0,90,0,0x0, Bhv_Custom_0x13005714,31),
OBJECT_WITH_ACTS(65,-4469,883,2215,0,0,0,0x0, Bhv_Custom_0x1300576C,27),
OBJECT_WITH_ACTS(55,-6270,0,3012,0,0,0,0x0, bhvLllSinkingRockBlock,31),
OBJECT_WITH_ACTS(58,542,610,1383,0,0,0,0x0, bhvLllRotatingBlockWithFireBars,31),
OBJECT_WITH_ACTS(5,-6342,-30,4728,0,0,0,0x0, Bhv_Custom_0x13005790,31),
OBJECT_WITH_ACTS(5,510,300,1462,0,0,0,0x0, Bhv_Custom_0x130056FC,31),
OBJECT_WITH_ACTS(65,1135,218,3625,0,0,0,0x0, bhvLllTiltingInvertedPyramid,31),
OBJECT_WITH_ACTS(11,3356,400,5214,0,90,0,0x0, Bhv_Custom_0x13005714,31),
OBJECT_WITH_ACTS(5,-721,150,3446,0,0,0,0x0, id_bhvLllRotatingHexagonalPlatform,31),
OBJECT_WITH_ACTS(11,168,553,-1930,0,0,0,0x0, Bhv_Custom_0x130057A4,27),
OBJECT_WITH_ACTS(65,-4753,-30,5696,0,0,0,0x0, Bhv_Custom_0x1300576C,19),
OBJECT_WITH_ACTS(MODEL_LEVEL_GEOMETRY_0A,-2510,0,239,0,0,0,0x0, Bhv_Custom_0x13005758,31),
OBJECT_WITH_ACTS(5,-6346,-80,686,0,0,0,0x0, Bhv_Custom_0x130056FC,31),
OBJECT_WITH_ACTS(5,-5173,1000,114,0,100,0,0x0, Bhv_Custom_0x130056FC,27),
OBJECT_WITH_ACTS(65,-1146,600,-2736,0,0,0,0x0, bhvLllTiltingInvertedPyramid,27),
OBJECT_WITH_ACTS(12,168,400,-925,0,0,0,0x0, Bhv_Custom_0x130057B4,27),
OBJECT_WITH_ACTS(0,-6112,908,1262,0,90,0,0xa0000, bhvSpinAirborneWarp,31),
        TERRAIN(/*terrainData*/ lll_seg7_area_1_collision),
        SHOW_DIALOG(/*index*/ 0x00, DIALOG_097),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_LEVEL_HOT),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    AREA(/*index*/ 2, lll_geo_000EC0),
WARP_NODE(241,6,3,100,0),
WARP_NODE(240,6,3,50,0),
WARP_NODE(10,22,2,10,0),
OBJECT_WITH_ACTS(10,-2510,0,239,0,0,0,0x0, Bhv_Custom_0x13005758,31),
OBJECT_WITH_ACTS(0,-2528,2109,196,0,118,0,0xa0000, bhvAirborneWarp,31),
        TERRAIN(/*terrainData*/ lll_seg7_area_2_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0004, /*seq*/ SEQ_LEVEL_HOT),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 90, /*pos*/ -3839, 154, 6272),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
