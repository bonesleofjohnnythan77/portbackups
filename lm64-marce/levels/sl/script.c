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
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,      /*yaw*/  90, /*pos*/  4086,  1024,   400, /*behParam*/ DIALOG_086),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  1285,  2210,   385),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  1728,  2560,  -671),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  1371,  2188,  -500),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  1814,  3174,   114),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/    28,  3328,  1885),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  -228,  3482,  1742),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_cannon_closed,        /*yaw*/   0, /*pos*/  4483,   821,  1168, /*behParam*/ 0x80),
    MACRO_OBJECT(/*preset*/ macro_mr_blizzard,          /*yaw*/   0, /*pos*/ -3452,  1110, -3364),
    MACRO_OBJECT(/*preset*/ macro_mr_blizzard,          /*yaw*/   0, /*pos*/  5422,  1065, -1288),
    MACRO_OBJECT(/*preset*/ macro_mr_blizzard,          /*yaw*/   0, /*pos*/ -6533,  2048, -2444),
    MACRO_OBJECT(/*preset*/ macro_red_coin,             /*yaw*/   0, /*pos*/  4750,  1061, -5230),
    MACRO_OBJECT(/*preset*/ macro_red_coin,             /*yaw*/   0, /*pos*/   416,  1050, -4522),
    MACRO_OBJECT(/*preset*/ macro_red_coin,             /*yaw*/   0, /*pos*/ -6560,  2040, -5080),
    MACRO_OBJECT(/*preset*/ macro_red_coin,             /*yaw*/   0, /*pos*/ -6760,  2040, -1360),
    MACRO_OBJECT(/*preset*/ macro_red_coin,             /*yaw*/   0, /*pos*/ -6880,  1857,  1000),
    MACRO_OBJECT(/*preset*/ macro_red_coin,             /*yaw*/   0, /*pos*/ -4211,  1092, -4723),
    MACRO_OBJECT(/*preset*/ macro_red_coin,             /*yaw*/   0, /*pos*/ -6271,  1390,  4764),
    MACRO_OBJECT(/*preset*/ macro_red_coin,             /*yaw*/   0, /*pos*/  -529,  1050, -5329),
    MACRO_OBJECT(/*preset*/ macro_spindrift,            /*yaw*/   0, /*pos*/ -3760,  1120,  1240),
    MACRO_OBJECT(/*preset*/ macro_spindrift,            /*yaw*/   0, /*pos*/  3840,  1240, -5280),
    MACRO_OBJECT(/*preset*/ macro_spindrift,            /*yaw*/   0, /*pos*/ -3440,  1400,   -40),
    MACRO_OBJECT(/*preset*/ macro_spindrift,            /*yaw*/   0, /*pos*/   400,  1060,  5860),
    MACRO_OBJECT(/*preset*/ macro_spindrift,            /*yaw*/   0, /*pos*/   880,  1080,  4860),
    MACRO_OBJECT(/*preset*/ macro_spindrift,            /*yaw*/   0, /*pos*/  1400,  1080,  3860),
    MACRO_OBJECT(/*preset*/ macro_spindrift,            /*yaw*/   0, /*pos*/  3400,  1660, -2920),
    MACRO_OBJECT(/*preset*/ macro_spindrift,            /*yaw*/   0, /*pos*/ -3171,  1075, -4765),
    MACRO_OBJECT(/*preset*/ macro_spindrift,            /*yaw*/   0, /*pos*/ -4241,  1009, -3834),
    MACRO_OBJECT(/*preset*/ macro_box_koopa_shell,      /*yaw*/   0, /*pos*/ -5450,  1300,  5900),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_circling_amp,         /*yaw*/   0, /*pos*/  4060,   900, -2940, /*behParam*/ 0),
    MACRO_OBJECT(/*preset*/ macro_spindrift,            /*yaw*/   0, /*pos*/ -4096,  1125,  3062),
    MACRO_OBJECT(/*preset*/ macro_spindrift,            /*yaw*/   0, /*pos*/ -4536,  1125,  3782),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal, /*yaw*/  65, /*pos*/  -660,  2120,  1340),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin,          /*yaw*/   0, /*pos*/ -1520,  1040,   940),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin,          /*yaw*/   0, /*pos*/ -1340,  1280,  1020),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin,          /*yaw*/   0, /*pos*/ -1180,  1520,  1120),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,      /*yaw*/ 295, /*pos*/  -835,  1125, -3856, /*behParam*/ DIALOG_061),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,      /*yaw*/ 180, /*pos*/ -5050,  1020,  6026, /*behParam*/ DIALOG_016),
    MACRO_OBJECT(/*preset*/ macro_fly_guy,              /*yaw*/   0, /*pos*/  2766,  1522, -3633),
    MACRO_OBJECT_WITH_BEH_PARAM(/*preset*/ macro_wooden_signpost,      /*yaw*/ 135, /*pos*/ -3600,  1024,  -800, /*behParam*/ DIALOG_148),
    MACRO_OBJECT(/*preset*/ macro_moneybag,             /*yaw*/   0, /*pos*/  2440,  1024,  4840),
    MACRO_OBJECT(/*preset*/ macro_moneybag,             /*yaw*/   0, /*pos*/ -2400,  1177, -4200),
    MACRO_OBJECT(/*preset*/ macro_box_1up_running_away, /*yaw*/   0, /*pos*/ -3380,  1360, -4140),
    MACRO_OBJECT(/*preset*/ macro_box_star_4,           /*yaw*/   0, /*pos*/ -4700,  1300,  5850),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  2909,  1024,  4245),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,        /*yaw*/   0, /*pos*/  3418,  1024,  3554),
    MACRO_OBJECT(/*preset*/ macro_hidden_1up_in_pole,   /*yaw*/   0, /*pos*/     0,  5420,     0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_sl_2[] = {
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,               /*yaw*/   0, /*pos*/  1740,     0,   900),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,               /*yaw*/   0, /*pos*/  1440,     0,   900),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_2,               /*yaw*/   0, /*pos*/  1140,     0,   900),
    MACRO_OBJECT(/*preset*/ macro_goomba,                      /*yaw*/   0, /*pos*/  1760,     0,   200),
    MACRO_OBJECT(/*preset*/ macro_spindrift,                   /*yaw*/   0, /*pos*/  1600,    80,  -800),
    MACRO_OBJECT(/*preset*/ macro_box_vanish_cap,              /*yaw*/   0, /*pos*/  1660,   300, -1720),
    MACRO_OBJECT(/*preset*/ macro_box_three_coins,             /*yaw*/   0, /*pos*/  -720,   300, -1740),
    MACRO_OBJECT(/*preset*/ macro_bobomb_buddy_opens_cannon,   /*yaw*/   0, /*pos*/ -1400,     0, -1740),
    MACRO_OBJECT(/*preset*/ macro_goomba,                      /*yaw*/   0, /*pos*/   -20,     0,   960),
    MACRO_OBJECT(/*preset*/ macro_goomba,                      /*yaw*/   0, /*pos*/   320,     0, -1220),
    MACRO_OBJECT(/*preset*/ macro_spindrift,                   /*yaw*/   0, /*pos*/  -860,    40,  2040),
    MACRO_OBJECT(/*preset*/ macro_spindrift,                   /*yaw*/   0, /*pos*/   800,    60,  2000),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal,        /*yaw*/  90, /*pos*/  1500,     0,   500),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal_flying, /*yaw*/  90, /*pos*/  1500,   100,   500),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal_flying, /*yaw*/  90, /*pos*/  1500,   200,   500),
    MACRO_OBJECT(/*preset*/ macro_coin_line_horizontal_flying, /*yaw*/  90, /*pos*/  1500,   300,   500),
    MACRO_OBJECT(/*preset*/ macro_1up,                         /*yaw*/   0, /*pos*/  1700,    20,  -100),
    MACRO_OBJECT(/*preset*/ macro_box_1up_running_away,        /*yaw*/   0, /*pos*/  -120,   300, -1740),
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
WARP_NODE(241,6,2,104,0),
WARP_NODE(240,6,2,54,0),
WARP_NODE(14,10,1,13,0),
WARP_NODE(13,10,1,14,0),
WARP_NODE(12,10,2,10,0),
WARP_NODE(11,10,1,11,0),
WARP_NODE(10,10,1,10,0),
OBJECT_WITH_ACTS(144,700,3428,700,0,40,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(101,306,1331,-4578,0,0,0,0x0, bhvBigChillBully,31),
OBJECT_WITH_ACTS(0,480,2300,1370,0,0,0,0x0, bhvIgloo,31),
OBJECT_WITH_ACTS(0,700,3428,700,90,0,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,700,3428,700,90,80,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,977,1024,2075,0,0,0,0x0, bhvSnowMoundSpawn,31),
OBJECT_WITH_ACTS(0,5000,1200,0,0,0,0,0x4000000, bhvHiddenRedCoinStar,63),
OBJECT_WITH_ACTS(122,4350,1350,4350,0,0,0,0x2000000, bhvStar,63),
OBJECT_WITH_ACTS(122,700,4500,690,0,0,0,0x0, bhvStar,63),
OBJECT_WITH_ACTS(0,-3698,1024,-1237,0,6,0,0xe0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-580,3459,1415,270,0,0,0x0, bhvSnowMoundSpawn,31),
OBJECT_WITH_ACTS(0,569,2150,1336,0,0,0,0x60c0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,257,2150,1399,0,290,0,0xb0000, bhvInstantActiveWarp,31),
OBJECT_WITH_ACTS(0,5541,2024,443,0,270,0,0xa0000, bhvSpinAirborneWarp,31),
        TERRAIN(/*terrainData*/ sl_seg7_area_1_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_LEVEL_SNOW),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SNOW),
    END_AREA(),

    AREA(/*index*/ 2, sl_geo_000484),
MACRO_OBJECTS(local_macro_objects_sl_2),
WARP_NODE(241,6,2,104,0),
WARP_NODE(240,6,2,54,0),
WARP_NODE(11,10,1,11,0),
WARP_NODE(10,10,2,10,0),
OBJECT_WITH_ACTS(122,0,500,1000,0,0,0,0x5000000, bhvStar,63),
OBJECT_WITH_ACTS(0,0,0,3277,0,0,0,0x140b0000, bhvWarp,31),
OBJECT_WITH_ACTS(0,0,0,2867,0,180,0,0xa0000, bhvInstantActiveWarp,31),
        TERRAIN(/*terrainData*/ sl_seg7_area_2_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0004, /*seq*/ SEQ_LEVEL_UNDERGROUND),
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
