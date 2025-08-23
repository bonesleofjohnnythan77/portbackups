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
MACRO_OBJECT_WITH_BEH_PARAM(macro_seaweed_bundle,0,62656,60416,63686,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_clam_shell,90,60776,60416,580,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_seaweed_bundle,0,62026,60416,1950,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,62536,65244,62106,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,60776,60456,580,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,90,65036,61286,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group,0,60890,60921,64736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group_2,0,63732,62976,1292,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_vertical,0,61776,60976,660,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_vertical,0,61296,60750,1180,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,315,60696,64399,1860,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,63356,60417,1720,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,64076,60417,1300,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,64216,60417,840,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group,0,61956,63256,64416,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group,0,63516,62076,65416,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,90,500,61286,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,90,1500,61286,0,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_ddd_2[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_vanish_cap,0,6800,450,64686,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,1950,700,65136,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_floor_switch_hidden_objects,270,6800,110,3950,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,4151,700,1300,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,3951,700,1300,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,3751,700,1300,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,3551,700,1300,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,3351,700,1300,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,3151,700,1300,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,2951,700,1300,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,5600,700,2250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,5600,700,2450,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_arrow,270,65236,62780,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_arrow,270,64236,62780,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1700,1000,750,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1500,1000,1050,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1600,1000,1200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1700,1000,1050,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1500,1000,750,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1600,1000,600,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group,0,2061,62213,2246,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group_2,0,5661,62613,64121,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_clam_shell,90,1273,61430,2320,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,248,6920,110,3136,43),
MACRO_OBJECT_WITH_BEH_PARAM(macro_seaweed_bundle,0,6420,61430,63510,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_seaweed_bundle,0,6340,61430,64123,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_clam_shell,135,1966,61430,3226,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_clam_shell,180,3886,61530,5130,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,5740,710,3900,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,5740,510,4100,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,5740,310,4300,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,5740,110,4500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_seaweed_bundle,0,2999,61444,4430,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,4876,61449,4430,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,3892,61506,61706,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,3923,110,5953,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,1950,700,64936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,5600,700,2050,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_blue_coin_switch,0,1600,928,900,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1400,1000,600,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1800,1000,600,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1800,1000,1200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1400,1000,1200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1400,1000,900,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1800,1000,900,0),
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
WARP_NODE(241,16,1,3,0),
WARP_NODE(240,16,1,8,0),
WARP_NODE(10,10,1,10,0),
OBJECT_WITH_ACTS(87,-3174,-4915,102,0,0,0,0x0, bhvWhirlpool
,31),
OBJECT_WITH_ACTS(86,-3071,-2470,0,0,0,0,0x0, bhvSushiShark
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
OBJECT_WITH_ACTS(139,-3000,20,-3470,90,0,0,0x50a0000, bhvWarp
,31),
        WHIRLPOOL(/*unk2*/ 0, /*unk3*/ 0, /*pos*/ -3174, -4915, 102, /*strength*/ 20),
        INSTANT_WARP(/*index*/ 3, /*destArea*/ 2, /*displace*/ -8192, 0, 0),
        TERRAIN(/*terrainData*/ ddd_seg7_area_1_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0003, /*seq*/ 5),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_WATER),
    END_AREA(),

    AREA(/*index*/ 2, ddd_geo_000570),
MACRO_OBJECTS(local_macro_objects_ddd_2),
INSTANT_WARP(2,1,8192,0,0),
WARP_NODE(243,16,1,6,0),
WARP_NODE(241,16,1,3,0),
WARP_NODE(240,16,1,8,0),
OBJECT_WITH_ACTS(122,940,400,3370,0,0,0,0x5000000, bhvStar
,31),
OBJECT_WITH_ACTS(122,5200,1200,-2300,0,0,0,0x2000000, bhvStar
,31),
OBJECT_WITH_ACTS(122,2000,1200,-1600,0,0,0,0x0, bhvStar
,31),
OBJECT_WITH_ACTS(0,3404,-3319,-489,0,0,0,0x0, bhvJetStream
,31),
OBJECT_WITH_ACTS(56,3550,1005,-2250,0,0,0,0xd0000, bhvDDDPole
,31),
OBJECT_WITH_ACTS(56,3310,1005,-1945,0,0,0,0x170000, bhvDDDPole
,31),
OBJECT_WITH_ACTS(56,5760,1005,360,0,270,0,0x170000, bhvDDDPole
,31),
OBJECT_WITH_ACTS(56,4000,25005,1275,0,0,0,0xb0000, bhvDDDPole
,31),
OBJECT_WITH_ACTS(56,1830,25005,520,0,270,0,0x140000, bhvDDDPole
,31),
OBJECT_WITH_ACTS(56,4000,25005,1075,0,180,0,0xb0000, bhvDDDPole
,31),
OBJECT_WITH_ACTS(56,1800,25005,1275,0,0,0,0xb0000, bhvDDDPole
,31),
OBJECT_WITH_ACTS(56,5605,25005,3380,0,270,0,0x150000, bhvDDDPole
,31),
OBJECT_WITH_ACTS(56,5120,25005,3584,0,180,0,0x1e0000, bhvDDDPole
,31),
OBJECT_WITH_ACTS(55,0,-500,0,0,0,0,0x0, bhvBowsersSub
,31),
OBJECT_WITH_ACTS(0,3920,-2150,-3000,0,0,0,0xf30000, bhvSwimmingWarp
,31),
        WHIRLPOOL(/*unk2*/ 0, /*unk3*/ 0, /*pos*/ 3355, -3575, -515, /*strength*/ -30),
        WHIRLPOOL(/*unk2*/ 1, /*unk3*/ 2, /*pos*/ 3917, -2040, -6041, /*strength*/ 50),
        INSTANT_WARP(/*index*/ 2, /*destArea*/ 1, /*displace*/ 8192, 0, 0),
        TERRAIN(/*terrainData*/ ddd_seg7_area_2_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0003, /*seq*/ 5),
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
