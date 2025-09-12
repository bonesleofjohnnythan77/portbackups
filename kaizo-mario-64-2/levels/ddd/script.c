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
#include "levels/ddd/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_ddd_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_floor_switch_hidden_objects,0,62472,2879,9,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_clam_shell,90,60776,60416,580,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_seaweed_bundle,0,62026,60416,1950,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,60776,60436,580,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up,0,60776,60456,580,1),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,90,64536,61286,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group,0,60890,60921,64736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group_2,0,63732,62976,1292,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,340,61749,2596,65321,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,357,60950,2742,64859,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,315,61241,3254,64287,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,61736,2978,65322,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,60940,3095,64816,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,61058,3624,64042,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group,0,61956,63256,64416,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group,0,63516,62076,65416,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_star_2,90,61515,3729,64105,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,90,63536,61286,0,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_ddd_2[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_metal_cap,0,6800,500,64686,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_vanish_cap,0,6800,500,65386,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_floor_switch_hidden_objects,39,2033,61450,62763,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,5577,929,1169,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,5536,1047,3577,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,2953,1048,3585,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,3867,1336,65518,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,3969,677,1993,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,6788,541,65358,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,939,859,3411,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,5572,1058,2229,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,6779,516,64670,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,4680,1155,63336,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,3525,1155,63286,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,927,797,3427,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,3912,663,6120,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,2974,1015,3584,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,5550,1015,3575,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,3300,1111,63636,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,5180,1025,1261,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,5032,583,65150,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,4695,306,63784,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_clam_shell,90,1273,61430,2320,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,180,3086,110,6120,53),
MACRO_OBJECT_WITH_BEH_PARAM(macro_seaweed_bundle,0,6420,61430,63510,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_seaweed_bundle,0,6340,61430,64123,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_no_coins,135,3906,795,63238,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_clam_shell,180,3886,61530,5130,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,5740,710,3900,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,5740,510,4100,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,5740,310,4300,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,5740,110,4500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_seaweed_bundle,0,2999,61444,4430,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,6200,340,406,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_vertical,0,3892,61506,61706,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,90,3912,735,63729,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,938,153,4107,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,5940,110,4500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_blue_coin_switch,0,1614,928,922,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1414,1020,622,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1814,1020,622,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1814,1020,1222,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1414,1020,1222,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1414,1020,922,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1814,1020,922,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_koopa_shell_underwater,0,3886,61486,5100,0),
MACRO_OBJECT_END(),
};

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_SUSHI,        /*pos*/ -3071,  -270,   0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSushiShark),
    OBJECT(/*model*/ MODEL_SUSHI,        /*pos*/ -3071, -4270,   0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSushiShark),
    OBJECT(/*model*/ MODEL_NONE,         /*pos*/ -3071,  -130,   0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFish3),
    OBJECT(/*model*/ MODEL_NONE,         /*pos*/ -3071, -4270,   0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFish2),
    OBJECT(/*model*/ MODEL_NONE,         /*pos*/ -3071, -2000,   0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvChirpChirp),
    OBJECT(/*model*/ MODEL_NONE,         /*pos*/ -3071, -3000,   0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvChirpChirp),
    OBJECT(/*model*/ MODEL_DL_WHIRLPOOL, /*pos*/ -3174, -4915, 102, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvWhirlpool),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,      /*pos*/ -2400, -4607, 125, /*angle*/ 0, 0, 0, /*behParam*/ 0x01000000, /*beh*/ bhvTreasureChests, /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_MANTA_RAY, /*pos*/ -4640, -1380,  40, /*angle*/ 0, 0, 0, /*behParam*/ 0x04000000, /*beh*/ bhvMantaRay,       /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT(/*model*/ MODEL_DDD_BOWSER_SUB_DOOR, /*pos*/    0,    0,     0, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserSubDoor),
    OBJECT(/*model*/ MODEL_DDD_BOWSER_SUB,      /*pos*/    0,    0,     0, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowsersSub),
    OBJECT(/*model*/ MODEL_DDD_POLE,            /*pos*/ 5120, 1005,  3584, /*angle*/ 0, 180, 0, /*behParam*/ 0x001E0000, /*beh*/ bhvDDDPole),
    OBJECT(/*model*/ MODEL_DDD_POLE,            /*pos*/ 5605, 1005,  3380, /*angle*/ 0, 270, 0, /*behParam*/ 0x00150000, /*beh*/ bhvDDDPole),
    OBJECT(/*model*/ MODEL_DDD_POLE,            /*pos*/ 1800, 1005,  1275, /*angle*/ 0,   0, 0, /*behParam*/ 0x000B0000, /*beh*/ bhvDDDPole),
    OBJECT(/*model*/ MODEL_DDD_POLE,            /*pos*/ 4000, 1005,  1075, /*angle*/ 0, 180, 0, /*behParam*/ 0x000B0000, /*beh*/ bhvDDDPole),
    OBJECT(/*model*/ MODEL_DDD_POLE,            /*pos*/ 1830, 1005,   520, /*angle*/ 0, 270, 0, /*behParam*/ 0x00140000, /*beh*/ bhvDDDPole),
    OBJECT(/*model*/ MODEL_DDD_POLE,            /*pos*/ 4000, 1005,  1275, /*angle*/ 0,   0, 0, /*behParam*/ 0x000B0000, /*beh*/ bhvDDDPole),
    OBJECT(/*model*/ MODEL_DDD_POLE,            /*pos*/ 5760, 1005,   360, /*angle*/ 0, 270, 0, /*behParam*/ 0x00170000, /*beh*/ bhvDDDPole),
    OBJECT(/*model*/ MODEL_DDD_POLE,            /*pos*/ 3310, 1005, -1945, /*angle*/ 0,   0, 0, /*behParam*/ 0x00170000, /*beh*/ bhvDDDPole),
    OBJECT(/*model*/ MODEL_DDD_POLE,            /*pos*/ 3550, 1005, -2250, /*angle*/ 0,   0, 0, /*behParam*/ 0x000D0000, /*beh*/ bhvDDDPole),
    RETURN(),
};

static const LevelScript script_func_local_4[] = {
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ 3404, -3319, -489, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvJetStream),
    RETURN(),
};

static const LevelScript script_func_local_5[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ 3900,   850,  -600, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStar,                    /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/ 5513,  1200,   900, /*angle*/ 0, 0, 0, /*behParam*/ 0x02000000, /*beh*/ bhvHiddenRedCoinStar,    /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/ 3404, -3319,  -489, /*angle*/ 0, 0, 0, /*behParam*/ 0x03000000, /*beh*/ bhvJetStreamRingSpawner, /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ 2030, -3700, -2780, /*angle*/ 0, 0, 0, /*behParam*/ 0x05000000, /*beh*/ bhvStar,                    /*acts*/ ALL_ACTS),
    RETURN(),
};

const LevelScript level_ddd_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _ddd_segment_7SegmentRomStart, _ddd_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _water_mio0SegmentRomStart, _water_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group4_mio0SegmentRomStart, _group4_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group4_geoSegmentRomStart,  _group4_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group13_mio0SegmentRomStart, _group13_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group13_geoSegmentRomStart,  _group13_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_5),
    JUMP_LINK(script_func_global_14),
    LOAD_MODEL_FROM_GEO(MODEL_DDD_BOWSER_SUB_DOOR, ddd_geo_000478),
    LOAD_MODEL_FROM_GEO(MODEL_DDD_BOWSER_SUB,      ddd_geo_0004A0),
    LOAD_MODEL_FROM_GEO(MODEL_DDD_POLE,            ddd_geo_000450),

    AREA(/*index*/ 1, ddd_geo_0004C0),
MACRO_OBJECTS(local_macro_objects_ddd_1),
INSTANT_WARP(3,2,-8192,0,0),
WARP_NODE(241,6,3,103,0),
WARP_NODE(240,6,3,53,0),
WARP_NODE(10,23,1,10,0),
OBJECT_WITH_ACTS(137,-3074,3129,1,0,0,0,0x0, bhvExclamationBox
,60),
OBJECT_WITH_ACTS(87,-415,-4607,97,0,0,0,0x0, bhvWhirlpool
,63),
OBJECT_WITH_ACTS(87,-3174,-4915,102,0,0,0,0x0, bhvWhirlpool
,31),
OBJECT_WITH_ACTS(122,-157,3587,1052,0,0,0,0x3000000, bhvStar
,31),
OBJECT_WITH_ACTS(0,-3071,-2000,0,0,0,0,0x0, bhvChirpChirp
,31),
OBJECT_WITH_ACTS(0,-3071,-4270,0,0,0,0,0x0, bhvFish2
,31),
OBJECT_WITH_ACTS(0,-3071,-130,0,0,0,0,0x0, bhvFish3
,31),
OBJECT_WITH_ACTS(86,-3071,-4270,0,0,0,0,0x0, bhvSushiShark
,31),
OBJECT_WITH_ACTS(86,-3071,-270,0,0,0,0,0x0, bhvSushiShark
,31),
OBJECT_WITH_ACTS(0,-3071,3000,0,0,7,0,0xa0000, bhvSpinAirborneWarp
,31),
        WHIRLPOOL(/*unk2*/ 0, /*unk3*/ 0, /*pos*/ -3174, -4915, 102, /*strength*/ 20),
        INSTANT_WARP(/*index*/ 3, /*destArea*/ 2, /*displace*/ -8192, 0, 0),
        TERRAIN(/*terrainData*/ ddd_seg7_area_1_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0003, /*seq*/ SEQ_LEVEL_WATER),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_WATER),
    END_AREA(),

    AREA(/*index*/ 2, ddd_geo_000570),
MACRO_OBJECTS(local_macro_objects_ddd_2),
INSTANT_WARP(2,1,8192,0,0),
WARP_NODE(243,16,1,30,0),
WARP_NODE(241,6,3,103,0),
WARP_NODE(240,6,3,53,0),
OBJECT_WITH_ACTS(122,2030,-4129,-2780,0,0,0,0x5000000, bhvStar
,63),
OBJECT_WITH_ACTS(122,1669,1327,814,0,0,0,0x4000000, bhvStar
,63),
OBJECT_WITH_ACTS(0,5513,1200,900,0,0,0,0x2000000, bhvHiddenRedCoinStar
,63),
OBJECT_WITH_ACTS(122,3787,850,-3554,0,0,0,0x0, bhvStar
,63),
OBJECT_WITH_ACTS(0,3404,-3319,-489,0,0,0,0x0, bhvJetStream
,31),
OBJECT_WITH_ACTS(180,3550,1005,-2250,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(0,5657,1005,1269,0,0,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(180,5760,1005,360,0,270,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(217,3256,526,-1190,0,21,352,0x0, bhvPushableMetalBox
,24),
OBJECT_WITH_ACTS(180,1830,1005,520,0,270,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(0,1641,1005,833,0,180,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(180,1800,1005,1275,0,0,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,5605,1005,3380,0,270,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(180,5120,1005,3584,0,180,0,0x0, bhvFireSpitter
,31),
OBJECT_WITH_ACTS(0,1988,929,-1507,0,0,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(54,0,0,0,0,0,0,0x0, bhvBowserSubDoor
,31),
        WHIRLPOOL(/*unk2*/ 0, /*unk3*/ 0, /*pos*/ 3355, -3575, -515, /*strength*/ -30),
        WHIRLPOOL(/*unk2*/ 1, /*unk3*/ 2, /*pos*/ 3917, -2040, -6041, /*strength*/ 50),
        INSTANT_WARP(/*index*/ 2, /*destArea*/ 1, /*displace*/ 8192, 0, 0),
        TERRAIN(/*terrainData*/ ddd_seg7_area_2_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0003, /*seq*/ SEQ_LEVEL_WATER),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_WATER),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 180, /*pos*/ -3071, 3000, 500),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
