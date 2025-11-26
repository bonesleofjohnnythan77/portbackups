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
#include "levels/bbh/header.h"
extern u8 _bbh_segment_ESegmentRomStart[]; 
extern u8 _bbh_segment_ESegmentRomEnd[];
#include "levels/sl/header.h"
const LevelScript level_bbh_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _sl_segment_7SegmentRomStart, _sl_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _slSegmentRomStart, _slSegmentRomEnd),
LOAD_RAW(0x0E, _bbh_segment_ESegmentRomStart, _bbh_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group7_mio0SegmentRomStart,_group7_mio0SegmentRomEnd),
LOAD_RAW(12,_group7_geoSegmentRomStart,_group7_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_SL_SNOW_TRIANGLE,      sl_geo_000390),
    LOAD_MODEL_FROM_GEO(MODEL_SL_CRACKED_ICE,        sl_geo_000360),
    LOAD_MODEL_FROM_GEO(MODEL_SL_CRACKED_ICE_CHUNK,  sl_geo_000378),
    LOAD_MODEL_FROM_GEO(MODEL_SL_SNOW_TREE,          snow_tree_geo),
LOAD_MODEL_FROM_GEO(1, mario_geo
),
LOAD_MODEL_FROM_GEO(18, snow_tree_geo
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
JUMP_LINK(script_func_global_8),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_bbh_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bbh_1_[] = {
AREA(1,Geo_bbh_1_0x1201700),
TERRAIN(col_bbh_1_0xe029ac0),
SET_BACKGROUND_MUSIC(0,40),
TERRAIN_TYPE(2),
JUMP_LINK(local_objects_bbh_1_),
JUMP_LINK(local_warps_bbh_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bbh_1_[] = {
OBJECT_WITH_ACTS(0,3414,-9759,12667,0,0,0,0xa0000, bhvSpinAirborneWarp
,63),
OBJECT_WITH_ACTS(0,583,4350,-5387,0,-154,0,0xb0000, bhvFadingWarp
,63),
OBJECT_WITH_ACTS(0,4016,-10228,12993,0,-179,0,0x10000, bhvFadingWarp
,63),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp
,63),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp
,63),
OBJECT_WITH_ACTS(137,-3655,-8333,17568,0,0,0,0xb0000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(122,-5584,8489,-17350,0,0,0,0x3000000, bhvStar
,63),
OBJECT_WITH_ACTS(137,-72,-3438,10992,0,0,0,0x60000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(137,-155,-3803,14124,0,0,0,0x60000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(137,-1702,2291,-6770,0,0,0,0x80000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(137,-1474,2448,-5612,0,0,0,0x10000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(137,-12002,2239,-5703,0,0,0,0x10000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(116,-2187,-10208,-9412,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,-1357,-10208,-8034,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,-1092,-10208,-5982,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,-913,-10208,-3848,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,-576,-10208,-2056,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(120,7143,-2083,-7877,0,0,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(0,7170,-2083,-7862,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(116,8064,-2083,-7026,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(0,8055,-2083,-7045,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(116,8995,-2083,-7334,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(0,8996,-2083,-7354,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(116,9925,-2083,-6821,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(0,9956,-2083,-6797,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(116,11218,-2083,-7350,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(0,11234,-2083,-7351,0,0,0,0x0, bhvHiddenStarTrigger
,63),
OBJECT_WITH_ACTS(118,-3052,2136,-4691,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(116,1790,1770,6507,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,1790,1770,6507,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,1790,1770,6507,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,1790,1770,6507,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,1790,1770,6507,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,1790,1770,6507,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,1790,1770,6507,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,1790,1770,6507,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,1790,1770,6507,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,1790,1770,6507,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,1790,1770,6507,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,1790,1770,6507,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,1790,1770,6507,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,1790,1770,6507,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,1790,1770,6507,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,1790,1770,6507,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,1790,1770,6507,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,1790,1770,6507,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,1790,1770,6507,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,1790,1770,6507,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,1790,1770,6507,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,1790,1770,6507,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,-2264,-10313,-10569,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(202,-164,1041,-6634,0,89,0,0x0, bhvCheckerboardElevatorGroup
,63),
OBJECT_WITH_ACTS(202,691,989,-6612,0,-88,0,0x0, bhvCheckerboardElevatorGroup
,63),
OBJECT_WITH_ACTS(202,841,989,-5282,0,0,0,0x0, bhvCheckerboardElevatorGroup
,63),
OBJECT_WITH_ACTS(202,1575,989,-5269,0,0,0,0x0, bhvCheckerboardElevatorGroup
,63),
OBJECT_WITH_ACTS(202,2298,989,-5247,0,0,0,0x0, bhvCheckerboardElevatorGroup
,63),
OBJECT_WITH_ACTS(202,2965,989,-5374,0,0,0,0x0, bhvCheckerboardElevatorGroup
,63),
OBJECT_WITH_ACTS(202,3737,989,-5380,0,0,0,0x0, bhvCheckerboardElevatorGroup
,63),
OBJECT_WITH_ACTS(116,8956,-10313,-7256,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,8789,-10313,-5651,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,6627,-10313,-3955,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,5434,-10313,-3408,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,4113,-10313,-2951,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,2917,-10313,-2878,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,1804,-10313,-3494,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,553,-10313,-3939,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(212,-150,2708,-5802,0,0,0,0x0, bhv1Up
,63),
OBJECT_WITH_ACTS(212,-150,2708,-5802,0,0,0,0x0, bhv1Up
,63),
OBJECT_WITH_ACTS(212,-150,2708,-5802,0,0,0,0x0, bhv1Up
,63),
OBJECT_WITH_ACTS(212,-11157,10781,-4261,0,0,0,0x0, bhv1Up
,63),
OBJECT_WITH_ACTS(140,-2624,2012,-5167,0,0,0,0x0, bhvBlueCoinSwitch
,63),
OBJECT_WITH_ACTS(215,4007,-10209,13005,0,0,0,0x0, bhvRedCoin
,63),
OBJECT_WITH_ACTS(0,-12203,7344,-4732,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,-12203,5052,-4732,0,0,0,0x110000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(118,-3523,2136,-4742,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-3265,2136,-5202,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-3056,2136,-5524,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-3518,2136,-5514,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(195,3574,-10237,12681,0,0,0,0x60000, bhvBobombBuddy
,63),
OBJECT_WITH_ACTS(0,-3592,-5365,17564,0,-88,0,0x40000, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(116,-8656,5439,-16000,0,0,0,0x0, bhvOneCoin
,63),
OBJECT_WITH_ACTS(84,-6343,612,-13034,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(84,-11361,7897,-5476,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(84,-10933,7806,-5513,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(129,-8460,6255,-12842,0,0,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(137,-8497,6816,-12864,0,0,0,0x60000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(84,-8025,6481,-11810,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(84,-5789,7701,-9181,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(120,-8862,7229,-7762,0,0,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(129,-6112,7875,-12849,0,0,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(84,-12968,2012,-6606,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(84,-12816,2012,-6212,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(120,-6074,8081,-13849,0,0,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(116,-8432,5579,-15021,0,0,0,0x0, bhvOneCoin
,63),
OBJECT_WITH_ACTS(84,-1046,-4627,14057,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(84,-12640,2012,-5869,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(84,-7357,2566,-9261,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(84,-7948,2566,-9269,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(84,-7744,2329,-8167,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(84,-8443,1881,-7324,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(84,-6831,2351,-8491,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(120,-5549,7476,-7734,0,0,0,0x0, bhvRecoveryHeart
,63),
OBJECT_WITH_ACTS(84,-6455,2012,-7361,0,0,0,0x0, bhvSpindrift
,63),
OBJECT_WITH_ACTS(0,12370,-2344,-7271,0,0,0,0x4000000, bhvHiddenStar
,63),
OBJECT_WITH_ACTS(85,-8605,2012,-5664,0,0,0,0x0, bhvMrBlizzard
,63),
OBJECT_WITH_ACTS(85,-6198,2012,-5188,0,0,0,0x0, bhvMrBlizzard
,63),
OBJECT_WITH_ACTS(85,-4419,2012,-5070,0,0,0,0x0, bhvMrBlizzard
,63),
OBJECT_WITH_ACTS(122,-6340,677,-9448,0,0,0,0x5000000, bhvStar
,63),
OBJECT_WITH_ACTS(137,-11962,-9739,-6837,0,0,0,0x30000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(116,-8274,-10156,-8983,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,-7135,-10156,-9559,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,-5980,-10156,-10103,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,-5043,-10156,-10418,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,-4210,-10156,-10524,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,-3373,-10156,-10464,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(116,-2776,-10156,-10026,0,0,0,0x0, bhvYellowCoin
,63),
OBJECT_WITH_ACTS(87,3884,-1852,-7041,0,0,0,0x0, bhvSmallPenguin
,63),
OBJECT_WITH_ACTS(180,4062,1324,-5266,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,4237,1220,-5734,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,4098,1011,-6273,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(223,3994,-1697,-7094,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(223,3432,-1645,-7373,0,0,0,0x0, bhvChuckya
,63),
OBJECT_WITH_ACTS(180,4150,-135,-8183,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(129,-2103,-10781,-8104,0,0,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,-3191,-10781,-7910,0,0,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,-4363,-10781,-7521,0,0,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,-5653,-10781,-7609,0,0,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,-6574,-10781,-7630,0,0,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,-7394,-10781,-8131,0,0,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,-8479,-10781,-7888,0,0,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,-9779,-10781,-7805,0,0,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,-10889,-10781,-7580,0,0,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,-1301,-10729,-7065,0,0,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(129,-1509,-10729,-7069,0,0,0,0x0, bhvBreakableBox
,63),
OBJECT_WITH_ACTS(207,3919,-1823,-6848,0,0,0,0x0, bhvFloorSwitchHiddenObjects
,63),
OBJECT_WITH_ACTS(202,4341,1302,-5495,0,0,0,0x0, bhvCheckerboardElevatorGroup
,63),
OBJECT_WITH_ACTS(202,4310,1042,-5911,0,0,0,0x0, bhvCheckerboardElevatorGroup
,63),
OBJECT_WITH_ACTS(202,4230,781,-6432,0,0,0,0x0, bhvCheckerboardElevatorGroup
,63),
OBJECT_WITH_ACTS(129,4189,573,-6848,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,4186,417,-7056,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,4182,208,-7264,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,4179,0,-7473,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,4175,-156,-7681,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,4171,-312,-7889,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,4168,-521,-8116,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,3960,-729,-8127,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,3752,-937,-8123,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,3491,-1146,-8128,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,3488,-1354,-7919,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,3484,-1562,-7711,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,3479,-1771,-7451,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,3451,-1979,-7172,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(87,-7711,2012,-4543,0,0,0,0x10000, bhvSmallPenguin
,63),
OBJECT_WITH_ACTS(87,-11115,10625,-4788,0,0,0,0x10000, bhvSmallPenguin
,63),
OBJECT_WITH_ACTS(87,-1530,-10477,-7103,0,0,0,0x1000000, bhvTuxiesMother
,63),
RETURN()
};
const LevelScript local_warps_bbh_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,4,1,12,0),
WARP_NODE(12,28,1,10,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,240,0),
WARP_NODE(241,26,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,27,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
