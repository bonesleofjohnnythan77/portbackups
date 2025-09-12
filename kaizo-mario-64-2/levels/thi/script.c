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
#include "levels/thi/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_thi_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_cannon_closed,0,6656,62704,6964,128),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,870,65034,2828,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,4800,65426,2250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,90,6416,63237,5103,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,90,65470,63899,60592,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,63693,64334,60686,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,7177,64001,62014,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,5711,63859,62592,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,64336,63996,1150,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,65286,63996,1150,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,2646,3408,63167,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,63845,65236,4137,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up,0,64759,63992,1233,2),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,4600,63992,3455,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,3444,65014,3011,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,2615,3226,63159,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,60625,65141,64103,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,90,199,2233,433,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,63851,2202,65040,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,63736,2233,65214,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group,0,59314,62136,64081,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_enemy_lakitu,0,63631,63313,6541,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,59548,62977,859,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,64870,63488,2258,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,59536,61970,64216,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group,0,58986,62086,4100,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group,0,63786,62086,7800,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group,0,1950,62036,7600,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,7158,64192,62007,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_1up_running_away,0,6022,63814,64903,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,59556,63111,841,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,90,63705,64487,60684,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,3443,65146,3021,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_1up_running_away,0,2037,3500,63254,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,63837,65025,4149,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,60626,65079,26,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,60622,65287,42,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_koopa,0,64736,63300,3080,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_butterfly_triplet,0,62425,65025,2400,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_butterfly_triplet,0,4844,65003,2266,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_thi_2[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_bouncing_fireball,0,1902,64769,1318,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_floor_switch_hidden_objects,0,64156,64770,63766,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,699,64566,63184,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,1367,64566,62442,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,420,64566,62413,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,64784,64566,62464,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,65196,64566,63416,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,63371,64800,2101,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,65508,1514,65067,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,64638,64942,62411,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,64838,64942,62611,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,65045,1379,65105,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,1357,64964,62448,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,64638,64942,62611,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,1288,64964,62549,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,1468,64964,62549,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,68,64942,61169,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,294,64898,62547,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,65424,64942,60969,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,68,64942,60969,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,1288,64964,62349,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,385,64898,62408,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,65424,64942,61169,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,474,64898,62347,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,294,64898,62347,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,600,64898,61152,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,68,64942,60769,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,65424,64942,60769,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,63571,64800,2101,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,65201,64964,63423,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,64834,64986,62424,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_piranha_plant,0,63699,64923,64322,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,90,29,666,148,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,906,170,165,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_tiny_goomba,0,1881,64758,1614,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_tiny_goomba,0,1822,65076,64025,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_tiny_goomba,0,2148,65076,64618,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,64117,393,65281,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,64710,262,64058,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,64710,225,64354,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,64710,181,64710,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,123,1078,64,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_1up,0,63670,65136,311,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,260,65388,65242,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,580,65388,65242,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,65005,179,359,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_tiny_goomba,0,64613,295,64922,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_tiny_goomba,0,1466,65076,999,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_three_coins,0,1849,65211,65353,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_tiny_goomba,0,1033,65374,916,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_tiny_goomba,0,64986,666,65386,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group,0,383,64514,2133,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_star_6,0,65038,1669,65099,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_tiny_goomba,0,64503,65383,1050,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,408,64829,62408,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,708,64839,63189,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,65189,64824,63411,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,64779,64866,62458,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,1363,64951,62434,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,1348,65388,666,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,1733,64766,1718,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,63403,64766,296,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,65376,64928,666,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_butterfly_triplet,0,63843,64646,1746,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_thi_koopa_the_quick,0,64936,65383,800,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,64262,65472,648,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,280,64896,61396,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_tiny_goomba,0,63516,64646,1720,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_thi_3[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,1931,1122,1212,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,1781,656,65344,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,911,1112,63607,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,65237,671,63774,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,65287,458,64511,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,63955,646,797,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,63617,1866,1978,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,1928,839,64379,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,63616,1540,64496,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_blue_coin_switch,0,64041,1434,1595,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,64996,1500,1240,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,64696,1500,1440,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,45,64336,2200,64336,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,45,1200,2200,1200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,65312,1456,672,0),
MACRO_OBJECT_END(),
};

static const LevelScript script_func_local_1[] = {
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,    /*pos*/     0, -700, -4500, /*angle*/ 0, 0, 0, /*behParam*/ 0x03000000, /*beh*/ bhvHiddenStar,          /*acts*/ ALL_ACTS),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,             /*pos*/ -1800,   800, -1500, /*angle*/ 0,   0, 0, /*behParam*/ 0x04000000, /*beh*/ bhvHiddenRedCoinStar, /*acts*/ ALL_ACTS),
    OBJECT(/*model*/ MODEL_WIGGLER_HEAD,     /*pos*/    17,  1843,   -62, /*angle*/ 0,   0, 0, /*behParam*/ 0x05000000, /*beh*/ bhvWigglerHead),
    RETURN(),
};

static const LevelScript script_func_local_4[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_KOOPA_WITH_SHELL, /*pos*/ -1900,  -511,  2400, /*angle*/ 0, -30, 0, /*behParam*/ 0x02030000, /*beh*/ bhvKoopa,             /*acts*/ ACT_3),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,             /*pos*/  7400, -1537, -6300, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvKoopaRaceEndpoint, /*acts*/ ACT_3),
    OBJECT(/*model*/ MODEL_NONE,             /*pos*/ -6556, -2969,  6565, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvGoombaTripletSpawner),
    OBJECT(/*model*/ MODEL_GOOMBA,           /*pos*/  6517, -2559,  4327, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvGoomba),
    OBJECT(/*model*/ MODEL_PIRANHA_PLANT,    /*pos*/ -6336, -2047, -3861, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvFirePiranhaPlant),
    OBJECT(/*model*/ MODEL_PIRANHA_PLANT,    /*pos*/ -5740, -2047, -6578, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvFirePiranhaPlant),
    OBJECT(/*model*/ MODEL_PIRANHA_PLANT,    /*pos*/ -6481, -2047, -5998, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvFirePiranhaPlant),
    OBJECT(/*model*/ MODEL_PIRANHA_PLANT,    /*pos*/ -5577, -2047, -4961, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvFirePiranhaPlant),
    OBJECT(/*model*/ MODEL_PIRANHA_PLANT,    /*pos*/ -6865, -2047, -4568, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvFirePiranhaPlant),
    OBJECT(/*model*/ MODEL_NONE,             /*pos*/ -4413,   204, -2140, /*angle*/ 0,   0, 0, /*behParam*/ 0x00030000, /*beh*/ bhvThiBowlingBallSpawner),
    OBJECT(/*model*/ MODEL_BUBBA,            /*pos*/ -6241, -3300,  -716, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBubba),
    OBJECT(/*model*/ MODEL_BUBBA,            /*pos*/  1624, -3300,  8142, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBubba),
    RETURN(),
};

static const LevelScript script_func_local_5[] = {
    OBJECT(/*model*/ MODEL_THI_HUGE_ISLAND_TOP, /*pos*/     0, 3891, -1533, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvThiHugeIslandTop),
    RETURN(),
};

static const LevelScript script_func_local_6[] = {
    OBJECT(/*model*/ MODEL_THI_TINY_ISLAND_TOP, /*pos*/     0, 1167,  -460, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvThiTinyIslandTop),
    OBJECT(/*model*/ MODEL_NONE,                /*pos*/ -1382,   80,  -649, /*angle*/ 0, 0, 0, /*behParam*/ 0x00040000, /*beh*/ bhvThiBowlingBallSpawner),
    RETURN(),
};

static const LevelScript script_func_local_7[] = {
    OBJECT(/*model*/ MODEL_THI_WARP_PIPE, /*pos*/  6656, -1536, -5632, /*angle*/ 0, 0, 0, /*behParam*/ 0x00320000, /*beh*/ bhvWarpPipe),
    OBJECT(/*model*/ MODEL_THI_WARP_PIPE, /*pos*/ -5888, -2048, -5888, /*angle*/ 0, 0, 0, /*behParam*/ 0x00330000, /*beh*/ bhvWarpPipe),
    OBJECT(/*model*/ MODEL_THI_WARP_PIPE, /*pos*/ -3072,   512, -3840, /*angle*/ 0, 0, 0, /*behParam*/ 0x00340000, /*beh*/ bhvWarpPipe),
    WARP_NODE(/*id*/ 0x32, /*destLevel*/ LEVEL_THI, /*destArea*/ 0x02, /*destNode*/ 0x32, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x33, /*destLevel*/ LEVEL_THI, /*destArea*/ 0x02, /*destNode*/ 0x33, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x34, /*destLevel*/ LEVEL_THI, /*destArea*/ 0x02, /*destNode*/ 0x34, /*flags*/ WARP_NO_CHECKPOINT),
    RETURN(),
};

static const LevelScript script_func_local_8[] = {
    OBJECT(/*model*/ MODEL_THI_WARP_PIPE, /*pos*/  1997, -461, -1690, /*angle*/ 0, 0, 0, /*behParam*/ 0x00320000, /*beh*/ bhvWarpPipe),
    OBJECT(/*model*/ MODEL_THI_WARP_PIPE, /*pos*/ -1766, -614, -1766, /*angle*/ 0, 0, 0, /*behParam*/ 0x00330000, /*beh*/ bhvWarpPipe),
    OBJECT(/*model*/ MODEL_THI_WARP_PIPE, /*pos*/  -922,  154, -1152, /*angle*/ 0, 0, 0, /*behParam*/ 0x00340000, /*beh*/ bhvWarpPipe),
    WARP_NODE(/*id*/ 0x32, /*destLevel*/ LEVEL_THI, /*destArea*/ 0x01, /*destNode*/ 0x32, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x33, /*destLevel*/ LEVEL_THI, /*destArea*/ 0x01, /*destNode*/ 0x33, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x34, /*destLevel*/ LEVEL_THI, /*destArea*/ 0x01, /*destNode*/ 0x34, /*flags*/ WARP_NO_CHECKPOINT),
    RETURN(),
};

const LevelScript level_thi_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _thi_segment_7SegmentRomStart, _thi_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _grass_mio0SegmentRomStart, _grass_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group11_mio0SegmentRomStart, _group11_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group11_geoSegmentRomStart,  _group11_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group14_mio0SegmentRomStart, _group14_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group14_geoSegmentRomStart,  _group14_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_12),
    JUMP_LINK(script_func_global_15),
    LOAD_MODEL_FROM_GEO(MODEL_THI_BUBBLY_TREE,     bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,   thi_geo_0005F0),
    LOAD_MODEL_FROM_GEO(MODEL_THI_WARP_PIPE,       warp_pipe_geo),
    LOAD_MODEL_FROM_GEO(MODEL_THI_HUGE_ISLAND_TOP, thi_geo_0005B0),
    LOAD_MODEL_FROM_GEO(MODEL_THI_TINY_ISLAND_TOP, thi_geo_0005C8),

    AREA(/*index*/ 1, thi_geo_000608),
MACRO_OBJECTS(local_macro_objects_thi_1),
WARP_NODE(52,13,2,52,0),
WARP_NODE(51,13,2,51,0),
WARP_NODE(50,13,2,50,0),
WARP_NODE(241,6,2,105,0),
WARP_NODE(240,6,2,55,0),
WARP_NODE(13,13,3,11,0),
WARP_NODE(12,13,3,10,0),
WARP_NODE(11,13,1,11,0),
WARP_NODE(10,13,1,10,0),
OBJECT_WITH_ACTS(144,-7241,-2883,7358,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(0,-3479,-1774,-5169,0,0,0,0x40000, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,-4413,204,-2140,0,0,0,0x30000, bhvThiBowlingBallSpawner
,31),
OBJECT_WITH_ACTS(100,-6865,-2047,-4568,0,0,0,0x10000, bhvFirePiranhaPlant
,31),
OBJECT_WITH_ACTS(100,-5577,-2047,-4961,0,0,0,0x10000, bhvFirePiranhaPlant
,31),
OBJECT_WITH_ACTS(100,-6481,-2047,-5998,0,0,0,0x10000, bhvFirePiranhaPlant
,31),
OBJECT_WITH_ACTS(100,-5740,-2047,-6578,0,0,0,0x10000, bhvFirePiranhaPlant
,31),
OBJECT_WITH_ACTS(100,-6336,-2047,-3861,0,0,0,0x10000, bhvFirePiranhaPlant
,31),
OBJECT_WITH_ACTS(102,6401,-2476,5069,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(102,-6147,-1974,-4845,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(137,-3462,-1341,-5214,0,0,0,0xb0000, bhvExclamationBox
,15),
OBJECT_WITH_ACTS(0,-1900,-511,2400,0,-30,0,0x10000, bhvGoombaTripletSpawner
,4),
OBJECT_WITH_ACTS(54,0,3891,-1533,0,0,0,0x0, bhvThiHugeIslandTop
,31),
OBJECT_WITH_ACTS(102,-3072,512,-3840,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(102,-5888,-2048,-5888,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(102,-6114,-2047,-3422,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(0,-3065,874,-3798,0,0,0,0x1000000, bhvHiddenRedCoinStar
,31),
OBJECT_WITH_ACTS(0,410,-512,717,0,0,0,0x50c0000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,410,-512,922,0,0,0,0xb0000, bhvInstantActiveWarp
,31),
OBJECT_WITH_ACTS(0,-7256,-2854,7378,0,149,0,0xa0000, bhvSpinAirborneWarp
,31),
        TERRAIN(/*terrainData*/ thi_seg7_area_1_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_LEVEL_GRASS),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_GRASS),
    END_AREA(),

    AREA(/*index*/ 2, thi_geo_0006D4),
MACRO_OBJECTS(local_macro_objects_thi_2),
WARP_NODE(52,13,1,52,0),
WARP_NODE(51,13,1,51,0),
WARP_NODE(50,13,1,50,0),
WARP_NODE(241,6,2,101,0),
WARP_NODE(240,6,2,51,0),
WARP_NODE(12,13,2,11,0),
WARP_NODE(11,13,2,12,0),
WARP_NODE(10,13,2,10,0),
OBJECT_WITH_ACTS(0,-1382,80,-649,0,0,0,0x40000, bhvThiBowlingBallSpawner
,31),
OBJECT_WITH_ACTS(55,0,1167,-460,0,0,0,0x0, bhvThiTinyIslandTop
,31),
OBJECT_WITH_ACTS(0,-91,-346,-4508,0,0,0,0x3000000, bhvHiddenStar
,63),
OBJECT_WITH_ACTS(102,-922,154,-1152,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(102,-1766,-614,-1766,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(102,1997,-461,-1690,0,0,0,0x0, bhvChainChomp
,31),
OBJECT_WITH_ACTS(0,-1638,0,-1988,0,-126,0,0xc0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,280,-767,-4180,0,0,0,0xb0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-2211,110,2212,0,149,0,0xa0000, bhvSpinAirborneWarp
,31),
        TERRAIN(/*terrainData*/ thi_seg7_area_2_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_LEVEL_GRASS),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_GRASS),
    END_AREA(),

    AREA(/*index*/ 3, thi_geo_00079C),
MACRO_OBJECTS(local_macro_objects_thi_3),
WARP_NODE(241,6,2,105,0),
WARP_NODE(240,6,2,55,0),
WARP_NODE(12,13,1,11,0),
WARP_NODE(11,13,3,11,0),
WARP_NODE(10,13,3,10,0),
OBJECT_WITH_ACTS(87,17,1843,-62,0,0,0,0x5000000, bhvWigglerHead
,31),
OBJECT_WITH_ACTS(0,-1889,1786,-1069,0,0,0,0x4000000, bhvHiddenRedCoinStar
,63),
OBJECT_WITH_ACTS(0,512,1024,2355,0,0,0,0x50c0000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,0,3277,0,0,0,0,0xb0000, bhvAirborneWarp
,31),
OBJECT_WITH_ACTS(0,512,1024,2150,0,180,0,0xa0000, bhvInstantActiveWarp
,31),
        TERRAIN(/*terrainData*/ thi_seg7_area_3_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0004, /*seq*/ SEQ_LEVEL_UNDERGROUND),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_GRASS),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 149, /*pos*/ -7372, -2969, 7373),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
