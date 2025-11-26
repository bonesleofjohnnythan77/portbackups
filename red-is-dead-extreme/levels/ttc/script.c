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

#include "areas/1/custom.model.inc.h"
#include "levels/ttc/header.h"
extern u8 _ttc_segment_ESegmentRomStart[]; 
extern u8 _ttc_segment_ESegmentRomEnd[];
#include "levels/ddd/header.h"
const LevelScript level_ttc_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _ddd_segment_7SegmentRomStart, _ddd_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _dddSegmentRomStart, _dddSegmentRomEnd),
LOAD_RAW(0x0E, _ttc_segment_ESegmentRomStart, _ttc_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group7_mio0SegmentRomStart,_group7_mio0SegmentRomEnd),
LOAD_RAW(12,_group7_geoSegmentRomStart,_group7_geoSegmentRomEnd),
LOAD_MIO0(6,_group16_mio0SegmentRomStart,_group16_mio0SegmentRomEnd),
LOAD_RAW(13,_group16_geoSegmentRomStart,_group16_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_DDD_BOWSER_SUB_DOOR, ddd_geo_000478),
    LOAD_MODEL_FROM_GEO(MODEL_DDD_BOWSER_SUB,      ddd_geo_0004A0),
    LOAD_MODEL_FROM_GEO(MODEL_DDD_POLE,            ddd_geo_000450),
LOAD_MODEL_FROM_GEO(1, mario_geo
),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo
),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo
),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo
),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo
),
LOAD_MODEL_FROM_GEO(27, palm_tree_geo
),
LOAD_MODEL_FROM_GEO(31, metal_door_geo
),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo
),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo
),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo
),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo
),
LOAD_MODEL_FROM_GEO(37, key_door_geo
),
LOAD_MODEL_FROM_GEO(38, castle_door_geo
),
// LOAD_MODEL_FROM_GEO(100,0x06003754),
// LOAD_MODEL_FROM_GEO(101,0x06003874),
LOAD_MODEL_FROM_GEO(102, moneybag_geo
),
LOAD_MODEL_FROM_GEO(116, yellow_coin_geo
),
LOAD_MODEL_FROM_GEO(117, yellow_coin_no_shadow_geo
),
LOAD_MODEL_FROM_GEO(118, blue_coin_geo
),
LOAD_MODEL_FROM_GEO(119, blue_coin_no_shadow_geo
),
LOAD_MODEL_FROM_GEO(120, heart_geo
),
LOAD_MODEL_FROM_GEO(121, transparent_star_geo
),
LOAD_MODEL_FROM_GEO(122, star_geo
),
LOAD_MODEL_FROM_GEO(124, wooden_signpost_geo
),
LOAD_MODEL_FROM_GEO(127, cannon_barrel_geo
),
LOAD_MODEL_FROM_GEO(128, cannon_base_geo
),
LOAD_MODEL_FROM_GEO(129, breakable_box_geo
),
LOAD_MODEL_FROM_GEO(130, breakable_box_small_geo
),
LOAD_MODEL_FROM_GEO(131, exclamation_box_outline_geo
),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
LOAD_MODEL_FROM_GEO(133, marios_winged_metal_cap_geo
),
LOAD_MODEL_FROM_GEO(134, marios_metal_cap_geo
),
LOAD_MODEL_FROM_GEO(135, marios_wing_cap_geo
),
LOAD_MODEL_FROM_GEO(136, marios_cap_geo
),
LOAD_MODEL_FROM_GEO(137, exclamation_box_geo
),
LOAD_MODEL_FROM_GEO(138, dirt_animation_geo
),
LOAD_MODEL_FROM_GEO(139, cartoon_star_geo
),
LOAD_MODEL_FROM_GEO(140, blue_coin_switch_geo
),
LOAD_MODEL_FROM_GEO(142, mist_geo
),
LOAD_MODEL_FROM_GEO(143, sparkles_animation_geo
),
LOAD_MODEL_FROM_GEO(144, red_flame_geo
),
LOAD_MODEL_FROM_GEO(145, blue_flame_geo
),
LOAD_MODEL_FROM_GEO(148, burn_smoke_geo
),
LOAD_MODEL_FROM_GEO(149, sparkles_geo
),
LOAD_MODEL_FROM_GEO(150, smoke_geo
),
LOAD_MODEL_FROM_GEO(156, burn_smoke_geo
),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
LOAD_MODEL_FROM_GEO(160, white_particle_geo
),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
LOAD_MODEL_FROM_GEO(162, leaves_geo
),
LOAD_MODEL_FROM_GEO(163, wave_trail_geo
),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
LOAD_MODEL_FROM_GEO(165, small_water_splash_geo
),
LOAD_MODEL_FROM_GEO(166, idle_water_wave_geo
),
LOAD_MODEL_FROM_GEO(167, water_splash_geo
),
LOAD_MODEL_FROM_GEO(168, bubble_geo
),
LOAD_MODEL_FROM_GEO(170, purple_marble_geo
),
LOAD_MODEL_FROM_GEO(180, bowling_ball_geo
),
LOAD_MODEL_FROM_GEO(185, fish_geo
),
LOAD_MODEL_FROM_GEO(186, fish_shadow_geo
),
LOAD_MODEL_FROM_GEO(187, butterfly_geo
),
LOAD_MODEL_FROM_GEO(188, black_bobomb_geo
),
LOAD_MODEL_FROM_GEO(190, koopa_shell_geo
),
LOAD_MODEL_FROM_GEO(192, goomba_geo
),
LOAD_MODEL_FROM_GEO(194, amp_geo
),
LOAD_MODEL_FROM_GEO(195, bobomb_buddy_geo
),
LOAD_MODEL_FROM_GEO(200, bowser_key_cutscene_geo
),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
LOAD_MODEL_FROM_GEO(202, checkerboard_platform_geo
),
LOAD_MODEL_FROM_GEO(203, red_flame_shadow_geo
),
LOAD_MODEL_FROM_GEO(204, bowser_key_geo
),
LOAD_MODEL_FROM_GEO(205, explosion_geo
),
LOAD_MODEL_FROM_GEO(212, mushroom_1up_geo
),
LOAD_MODEL_FROM_GEO(215, red_coin_geo
),
LOAD_MODEL_FROM_GEO(216, red_coin_no_shadow_geo
),
LOAD_MODEL_FROM_GEO(217, metal_box_geo
),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
LOAD_MODEL_FROM_GEO(219, number_geo
),
LOAD_MODEL_FROM_GEO(220, flyguy_geo
),
LOAD_MODEL_FROM_GEO(223, chuckya_geo
),
LOAD_MODEL_FROM_GEO(224, white_puff_geo
),
LOAD_MODEL_FROM_GEO(225, bowling_ball_track_geo
),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_8),
JUMP_LINK(script_func_global_17),
JUMP_LINK(local_area_ttc_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_ttc_1_[] = {
AREA(1,Geo_ttc_1_0x1fc1700),
TERRAIN(col_ttc_1_0xe01ea88),
SET_BACKGROUND_MUSIC(0,40),
TERRAIN_TYPE(2),
JUMP_LINK(local_objects_ttc_1_),
JUMP_LINK(local_warps_ttc_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ttc_1_[] = {
OBJECT_WITH_ACTS(0,5651,-3872,8889,0,0,0,0xa0000, bhvSpinAirborneWarp
,63),
OBJECT_WITH_ACTS(0,5676,-4734,8910,0,-184,0,0xb0000, bhvFadingWarp
,62),
OBJECT_WITH_ACTS(0,5370,4789,-3303,0,-153,0,0xc0000, bhvFadingWarp
,62),
OBJECT_WITH_ACTS(137,12696,5139,18983,0,87,0,0x10000, bhvExclamationBox
,56),
OBJECT_WITH_ACTS(137,4536,5663,17298,0,-93,0,0x10000, bhvExclamationBox
,60),
OBJECT_WITH_ACTS(194,-3083,1877,14266,0,91,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-3246,1877,15404,0,91,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-4258,1877,15463,0,91,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(122,-14827,5313,14258,0,91,0,0x5000000, bhvStar
,63),
OBJECT_WITH_ACTS(122,12147,-9114,-19448,0,91,0,0x4000000, bhvStar
,63),
OBJECT_WITH_ACTS(122,-5074,8021,12768,0,91,0,0x3000000, bhvStar
,63),
OBJECT_WITH_ACTS(122,-1069,9948,17506,0,91,0,0x2000000, bhvStar
,31),
OBJECT_WITH_ACTS(122,2464,10469,-2132,0,0,0,0x1000000, bhvStar
,63),
OBJECT_WITH_ACTS(101,-4867,2580,14995,0,0,0,0x0, bhvBigChillBully
,63),
OBJECT_WITH_ACTS(194,199,1875,15711,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-1512,1875,14845,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,399,1875,14485,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,1612,1875,16092,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,1480,1875,14703,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-4165,1875,14141,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-1970,1875,15660,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-5185,2031,14595,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(137,-9024,5833,-488,0,0,0,0x30000, bhvExclamationBox
,48),
OBJECT_WITH_ACTS(220,-5346,1875,15047,0,0,0,0x0, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(220,-3654,1770,15773,0,0,0,0x0, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(220,-824,1875,14070,0,0,0,0x0, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(220,386,1979,15424,0,0,0,0x0, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(220,2532,1823,16523,0,0,0,0x0, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(180,2129,1771,15495,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,2405,2083,14614,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,1065,1875,15041,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,273,1928,16028,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-1235,1823,14876,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-3128,1771,14647,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-2583,1823,15853,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-4801,1875,14974,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(85,7017,10313,4723,0,0,0,0x0, bhvMrBlizzard
,63),
OBJECT_WITH_ACTS(85,8309,10313,6235,0,0,0,0x0, bhvMrBlizzard
,63),
OBJECT_WITH_ACTS(85,8642,10313,-2237,0,0,0,0x0, bhvMrBlizzard
,63),
OBJECT_WITH_ACTS(85,8526,10417,3348,0,0,0,0x0, bhvMrBlizzard
,63),
OBJECT_WITH_ACTS(85,6855,10417,403,0,0,0,0x0, bhvMrBlizzard
,63),
OBJECT_WITH_ACTS(137,9717,8542,4191,0,0,0,0x60000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(137,7128,4480,8218,0,0,0,0x60000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(137,6066,312,-13434,0,0,0,0x60000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(137,-1820,-4166,4733,0,0,0,0x60000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(137,4775,-4635,18509,0,0,0,0x60000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(194,13427,-9583,-16408,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-14273,-8594,-19725,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-14265,-8698,-18667,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-14267,-8594,-17160,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-14236,-8386,-15898,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-14225,-8490,-14567,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-14359,-8229,-13153,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,470,-9531,-17287,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,481,-9271,-18416,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,759,-9167,-19443,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-1335,-8594,-10940,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,9617,-9584,-15014,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,10921,-8855,-19508,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,12863,-9219,-19272,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(223,9683,8177,4152,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(129,9971,9895,5840,-40,20,4,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(223,9007,7604,2143,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,6603,10312,-6354,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,4082,10312,-7151,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,2480,10312,-4623,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,8404,10312,-4920,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,4288,-3150,-3465,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,4176,-3610,-3050,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,4712,-4110,-2660,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(84,4707,-4790,-618,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(84,4839,-4790,3114,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(84,4763,-4790,6824,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(84,4894,-4790,8566,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(84,4698,-4790,10431,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(84,4521,-4790,12612,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(84,4363,-4742,14114,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(84,4113,1481,15502,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(84,4089,4789,17227,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(84,3942,-4732,18626,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(194,9762,8281,3645,43,200,3,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(129,10198,6510,2992,43,100,3,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,9750,6875,3023,43,100,3,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,9203,7135,3044,43,100,3,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(194,9927,10157,5765,44,-156,-8,0x0, bhvCirclingAmp
,63),
OBJECT_WITH_ACTS(194,10014,8958,4477,48,27,6,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,9254,7917,2958,48,27,6,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,9140,7760,2251,48,27,6,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,10532,6354,3198,48,43,6,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(129,9695,5573,-8299,48,43,6,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(180,4959,5417,-9494,0,93,4,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(129,4908,5104,-9548,48,93,6,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,175,5104,-9060,40,93,-39,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(180,146,5469,-9112,3,93,-1,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(129,-3949,5104,-3080,-1,93,-44,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(207,-4195,5104,-1960,0,0,0,0x0, bhvFloorSwitchHiddenObjects
,63),
OBJECT_WITH_ACTS(180,-9038,5469,-122,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-9836,5469,568,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-9876,5469,-846,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-7873,5469,-812,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-7884,5469,610,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-6971,5521,1113,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-6965,5521,1532,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-5330,5521,1566,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-5344,5521,1094,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-6224,5521,1312,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,9207,6094,-2187,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,10466,6094,-2207,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,8830,6198,1485,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,10757,6094,-512,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,10543,5886,-5247,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,9972,10313,5773,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,9792,7188,2984,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-2303,5417,-7488,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-3312,5417,-6597,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-3083,5417,-5678,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-4258,5417,-5414,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,-3943,5417,-3094,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,6683,5781,-9497,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,9697,5833,-8240,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,10423,5885,-7050,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,8162,5781,-9507,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,3689,5573,-9794,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,1786,5573,-10401,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,433,5573,-10165,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,4567,4844,16743,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,4604,4844,15528,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,4677,4844,14644,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,4751,4844,13834,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,4855,4844,12740,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,4959,4844,11594,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,5115,4844,10344,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,5220,4844,9042,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,5269,4844,7388,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,5289,4844,5580,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,5278,4844,3884,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,5256,4844,2403,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,5293,4844,1228,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,5280,4844,-202,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,5328,4844,-1591,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,5342,4844,-2842,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,5698,4115,-2666,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,6436,2448,-3198,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,6095,1094,-4110,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,4345,-2604,-3821,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,4304,-3542,-2717,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,4765,-4479,-1823,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(223,7091,2209,-3323,0,-8,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,6732,1529,-3864,0,-8,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,6600,809,-4561,0,-8,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,5938,-50,-4605,0,-8,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,5384,-590,-4586,0,-8,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,4483,-2058,-4550,0,-8,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,4861,-1290,-4938,0,-8,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,4387,-2710,-4079,0,-8,0,0x0, bhvChuckya
,63),
RETURN()
};
const LevelScript local_warps_ttc_1_[] = {
WARP_NODE(10,14,1,13,0),
WARP_NODE(11,14,1,12,0),
WARP_NODE(12,14,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,240,0),
WARP_NODE(241,6,1,241,0),
WARP_NODE(0,14,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,14,1,14,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
