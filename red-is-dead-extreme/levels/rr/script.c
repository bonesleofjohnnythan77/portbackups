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
#include "levels/rr/header.h"
extern u8 _rr_segment_ESegmentRomStart[]; 
extern u8 _rr_segment_ESegmentRomEnd[];
#include "levels/wdw/header.h"
const LevelScript level_rr_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _wdw_segment_7SegmentRomStart, _wdw_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _wdwSegmentRomStart, _wdwSegmentRomEnd),
LOAD_RAW(0x0E, _rr_segment_ESegmentRomStart, _rr_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
LOAD_MIO0(6,_group13_mio0SegmentRomStart,_group13_mio0SegmentRomEnd),
LOAD_RAW(13,_group13_geoSegmentRomStart,_group13_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_WDW_BUBBLY_TREE,                   bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_SQUARE_FLOATING_PLATFORM,      wdw_geo_000580),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_ARROW_LIFT,                    wdw_geo_000598),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_WATER_LEVEL_DIAMOND,           wdw_geo_0005C0),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_HIDDEN_PLATFORM,               wdw_geo_0005E8),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_EXPRESS_ELEVATOR,              wdw_geo_000610),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_RECTANGULAR_FLOATING_PLATFORM, wdw_geo_000628),
    LOAD_MODEL_FROM_GEO(MODEL_WDW_ROTATING_PLATFORM,             wdw_geo_000640),
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
JUMP_LINK(script_func_global_2),
JUMP_LINK(script_func_global_14),
JUMP_LINK(local_area_rr_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_rr_1_[] = {
AREA(1,Geo_rr_1_0x2121700),
TERRAIN(col_rr_1_0xe027e78),
SET_BACKGROUND_MUSIC(0,42),
TERRAIN_TYPE(2),
JUMP_LINK(local_objects_rr_1_),
JUMP_LINK(local_warps_rr_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_rr_1_[] = {
OBJECT_WITH_ACTS(0,-11005,9878,-17138,0,0,0,0xa0000, bhvSpinAirborneWarp
,63),
OBJECT_WITH_ACTS(0,583,2683,-5387,0,-154,0,0xb0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(22,-11281,9720,-17286,0,0,0,0xa0000, bhvWarpPipe
,32),
OBJECT_WITH_ACTS(0,-10906,9879,-17408,0,-174,0,0x10000, bhvPaintingDeathWarp
,31),
OBJECT_WITH_ACTS(0,-11525,9935,-16922,0,-174,0,0x0, bhvLaunchStarCollectWarp
,31),
OBJECT_WITH_ACTS(194,-11411,9845,-17551,0,177,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(0,-2907,-886,-12300,0,177,0,0x0, bhvChirpChirp
,62),
OBJECT_WITH_ACTS(0,-3462,-937,-14582,0,177,0,0x0, bhvChirpChirp
,62),
OBJECT_WITH_ACTS(0,-1735,-639,-7728,0,177,0,0x0, bhvChirpChirp
,60),
OBJECT_WITH_ACTS(0,-7874,-417,-15154,0,177,0,0x0, bhvChirpChirp
,60),
OBJECT_WITH_ACTS(0,-540,991,3724,0,177,0,0x0, bhvLargeFishGroup
,63),
OBJECT_WITH_ACTS(0,3216,990,4004,0,177,0,0x0, bhvChirpChirp
,63),
OBJECT_WITH_ACTS(0,6459,1041,4419,0,177,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(194,8922,1041,667,0,177,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(0,11080,1041,-2750,0,177,0,0x0, bhvChirpChirp
,63),
OBJECT_WITH_ACTS(215,10282,990,-1513,0,177,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(0,8887,-3177,-2934,0,177,0,0x0, bhvFish2
,63),
OBJECT_WITH_ACTS(215,11958,1147,-8341,0,177,0,0x0, bhvRedCoin
,60),
OBJECT_WITH_ACTS(215,9335,-364,-18691,0,177,0,0x0, bhvRedCoin
,60),
OBJECT_WITH_ACTS(215,11195,416,-15319,0,177,0,0x0, bhvRedCoin
,60),
OBJECT_WITH_ACTS(215,7020,-521,-16601,0,177,0,0x0, bhvRedCoin
,60),
OBJECT_WITH_ACTS(215,6992,-834,-12995,0,177,0,0x0, bhvRedCoin
,60),
OBJECT_WITH_ACTS(0,2521,-417,-6049,0,177,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(215,-2655,-3958,-7467,0,177,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(0,4916,-3750,-3967,0,177,0,0x0, bhvChirpChirp
,63),
OBJECT_WITH_ACTS(215,-620,-417,-6451,0,178,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,-2853,-157,-9305,0,178,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,410,-3751,-11196,0,178,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(215,-996,-2605,-13741,0,178,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(122,4512,-3229,-8170,0,178,0,0x2000000, bhvStar
,63),
OBJECT_WITH_ACTS(122,13962,3542,21019,0,217,0,0x5000000, bhvStar
,63),
OBJECT_WITH_ACTS(122,-8234,5573,-6085,0,217,0,0x4000000, bhvStar
,31),
OBJECT_WITH_ACTS(122,13427,-10573,8192,2,97,1,0x1000000, bhvStar
,63),
OBJECT_WITH_ACTS(0,-1751,885,3248,0,97,1,0x0, bhvFish3
,63),
OBJECT_WITH_ACTS(129,-5004,1458,1508,0,-91,0,0x0, bhvBreakableBox
,62),
OBJECT_WITH_ACTS(122,2614,-4063,-18703,0,-91,0,0x0, bhvStar
,1),
OBJECT_WITH_ACTS(0,4311,-3855,-438,0,0,0,0x3000000, bhvHiddenStar
,63),
OBJECT_WITH_ACTS(194,-4664,-991,-14657,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,7917,885,2310,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,11750,885,-3961,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,821,1041,3541,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-4781,3437,4406,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-5913,1510,1666,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(129,-6475,3437,-1661,0,0,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(194,-11684,3021,-6238,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-11708,2968,-1696,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-9469,3229,4324,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-11245,3489,6454,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-11373,3073,9426,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(188,-11974,3073,13160,0,0,0,0x0, bhvBobomb
,63),
OBJECT_WITH_ACTS(194,-7648,3541,15673,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-1424,4010,10969,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,-1580,4010,13781,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,3667,5468,11215,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,5499,5468,14807,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(194,9282,5468,17602,0,0,0,0x0, bhvHomingAmp
,63),
OBJECT_WITH_ACTS(118,13083,5051,15629,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,10893,5051,15680,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,10117,5051,18284,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,11344,5051,18305,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,9644,5051,16298,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(140,11208,4972,16987,0,0,0,0x0, bhvBlueCoinSwitch
,63),
OBJECT_WITH_ACTS(223,-1202,3751,10966,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,-1173,3751,16009,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,-6202,3059,16210,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,-11853,2891,13305,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(88,-12183,2969,11455,0,178,0,0x0, bhvThwomp
,63),
OBJECT_WITH_ACTS(223,-12284,2969,9621,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(220,-9431,3125,4002,0,0,0,0x10000, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(220,-11757,3282,-632,0,0,0,0x10000, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(220,-11914,3282,-5357,0,0,0,0x10000, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(223,-10952,2891,-5681,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(137,-7833,5572,-4447,0,0,0,0x60000, bhvExclamationBox
,161),
OBJECT_WITH_ACTS(129,-8094,4687,-2402,0,0,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(223,-5948,2783,-1299,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(0,-2675,-3385,-12322,0,0,0,0x0, bhvHiddenStarTrigger
,30),
OBJECT_WITH_ACTS(215,-2675,-3385,-12322,0,0,0,0x0, bhvRedCoin
,30),
OBJECT_WITH_ACTS(0,-784,-4062,-6323,0,0,0,0x0, bhvHiddenStarTrigger
,30),
OBJECT_WITH_ACTS(215,-784,-4062,-6323,0,0,0,0x0, bhvRedCoin
,30),
OBJECT_WITH_ACTS(0,1003,-4062,-2088,0,0,0,0x0, bhvHiddenStarTrigger
,30),
OBJECT_WITH_ACTS(215,1003,-4062,-2088,0,0,0,0x0, bhvRedCoin
,30),
OBJECT_WITH_ACTS(0,1835,-4062,-3854,0,0,0,0x0, bhvHiddenStarTrigger
,30),
OBJECT_WITH_ACTS(215,1835,-4062,-3854,0,0,0,0x0, bhvRedCoin
,30),
OBJECT_WITH_ACTS(0,5782,-3281,-4330,0,0,0,0x0, bhvHiddenStarTrigger
,30),
OBJECT_WITH_ACTS(215,5782,-3281,-4330,0,0,0,0x0, bhvRedCoin
,30),
OBJECT_WITH_ACTS(194,13680,-8439,7362,0,0,0,0x0, bhvHomingAmp
,62),
OBJECT_WITH_ACTS(0,13680,-9481,5643,0,0,0,0x0, bhvChirpChirp
,62),
OBJECT_WITH_ACTS(194,13628,-8439,4237,0,0,0,0x0, bhvHomingAmp
,62),
OBJECT_WITH_ACTS(215,13628,-8439,2414,0,0,0,0x0, bhvRedCoin
,62),
OBJECT_WITH_ACTS(194,13628,-8439,903,0,0,0,0x0, bhvHomingAmp
,62),
OBJECT_WITH_ACTS(0,13628,-8439,-555,0,0,0,0x0, bhvChirpChirp
,62),
OBJECT_WITH_ACTS(194,13676,-8439,-2021,0,0,0,0x0, bhvHomingAmp
,62),
OBJECT_WITH_ACTS(215,13591,-8439,-3663,0,0,0,0x0, bhvRedCoin
,62),
OBJECT_WITH_ACTS(194,13669,-8439,-5335,0,0,0,0x0, bhvHomingAmp
,62),
OBJECT_WITH_ACTS(0,13961,-8439,-6379,0,0,0,0x0, bhvChirpChirp
,62),
OBJECT_WITH_ACTS(194,13758,-8439,-8301,0,0,0,0x0, bhvHomingAmp
,62),
OBJECT_WITH_ACTS(215,13992,-8439,-10301,0,0,0,0x0, bhvRedCoin
,62),
OBJECT_WITH_ACTS(194,14246,-8439,-11738,0,0,0,0x0, bhvHomingAmp
,62),
OBJECT_WITH_ACTS(0,14268,-8439,-13502,0,0,0,0x0, bhvChirpChirp
,62),
OBJECT_WITH_ACTS(194,14345,-8439,-15408,0,0,0,0x0, bhvHomingAmp
,62),
OBJECT_WITH_ACTS(0,14327,-8439,-16778,0,0,0,0x0, bhvChirpChirp
,62),
OBJECT_WITH_ACTS(194,14342,-8439,-18118,0,0,0,0x0, bhvHomingAmp
,62),
OBJECT_WITH_ACTS(215,13920,-8439,-19507,0,0,0,0x0, bhvRedCoin
,62),
OBJECT_WITH_ACTS(194,13693,-8439,-20239,0,0,0,0x0, bhvHomingAmp
,62),
OBJECT_WITH_ACTS(194,12999,-8439,-20349,0,0,0,0x0, bhvHomingAmp
,62),
OBJECT_WITH_ACTS(215,12263,-8439,-20372,0,0,0,0x0, bhvRedCoin
,62),
OBJECT_WITH_ACTS(0,-4435,-7813,-20259,0,0,0,0x0, bhvChirpChirp
,62),
OBJECT_WITH_ACTS(0,2917,-4167,-19930,0,0,0,0x110000, bhvCoinFormation
,62),
OBJECT_WITH_ACTS(215,1410,-7292,-20175,0,0,0,0x0, bhvRedCoin
,62),
OBJECT_WITH_ACTS(0,-2230,-7240,-20121,0,0,0,0x0, bhvChirpChirp
,62),
OBJECT_WITH_ACTS(0,-251,-7240,-20155,0,0,0,0x0, bhvChirpChirp
,62),
OBJECT_WITH_ACTS(0,-5096,-7240,-20240,0,0,0,0x0, bhvChirpChirp
,62),
OBJECT_WITH_ACTS(215,2769,-7240,-20260,0,0,0,0x0, bhvRedCoin
,62),
OBJECT_WITH_ACTS(194,4279,-7240,-20286,0,0,0,0x0, bhvHomingAmp
,62),
OBJECT_WITH_ACTS(215,5737,-7240,-20312,0,0,0,0x0, bhvRedCoin
,62),
OBJECT_WITH_ACTS(194,6882,-7240,-20384,0,0,0,0x0, bhvHomingAmp
,62),
OBJECT_WITH_ACTS(0,8287,-7240,-20461,0,0,0,0x0, bhvFish2
,62),
OBJECT_WITH_ACTS(194,9589,-7865,-20483,0,0,0,0x0, bhvHomingAmp
,62),
OBJECT_WITH_ACTS(194,10943,-8021,-20507,0,0,0,0x0, bhvHomingAmp
,62),
OBJECT_WITH_ACTS(194,-3174,-7240,-20535,0,0,0,0x0, bhvHomingAmp
,62),
OBJECT_WITH_ACTS(0,2558,-3542,-19318,0,0,0,0x0, bhvChirpChirp
,62),
OBJECT_WITH_ACTS(215,2568,-3542,-18745,0,0,0,0x0, bhvRedCoin
,62),
OBJECT_WITH_ACTS(137,-3629,2343,-18308,0,0,0,0x60000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(195,-10720,9687,-16861,0,0,0,0x200000, bhvBobombBuddy
,1),
OBJECT_WITH_ACTS(137,14190,3749,20616,0,0,0,0x60000, bhvExclamationBox
,62),
OBJECT_WITH_ACTS(118,-1293,7604,11625,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-353,7604,11548,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-356,7604,12079,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-925,7604,11606,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-1641,7604,11745,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(140,-1948,7604,11805,0,0,0,0x0, bhvBlueCoinSwitch
,63),
OBJECT_WITH_ACTS(215,-75,-4219,260,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(0,-3354,-3386,-3805,0,0,0,0x0, bhvFish3
,63),
OBJECT_WITH_ACTS(137,10410,5260,12203,0,0,0,0x60000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(215,936,-4167,186,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(0,4820,-4219,-1707,0,0,0,0x0, bhvChirpChirp
,63),
RETURN()
};
const LevelScript local_warps_rr_1_[] = {
WARP_NODE(10,21,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,240,0),
WARP_NODE(241,6,1,241,0),
WARP_NODE(0,21,1,240,0),
WARP_NODE(1,21,1,241,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
