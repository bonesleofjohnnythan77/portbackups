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
#include "levels/bob/header.h"
extern u8 _bob_segment_ESegmentRomStart[]; 
extern u8 _bob_segment_ESegmentRomEnd[];
const LevelScript level_bob_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bobSegmentRomStart, _bobSegmentRomEnd),
LOAD_RAW(0x0E, _bob_segment_ESegmentRomStart, _bob_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom27754176_skybox_mio0SegmentRomStart,_SkyboxCustom27754176_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group3_mio0SegmentRomStart,_group3_mio0SegmentRomEnd),
LOAD_RAW(12,_group3_geoSegmentRomStart,_group3_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE,      bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM,  bob_geo_000458),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS,      bob_geo_000470),
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
JUMP_LINK(script_func_global_4),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_bob_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bob_1_[] = {
AREA(1,Geo_bob_1_0x18e1700),
TERRAIN(col_bob_1_0xe063160),
SET_BACKGROUND_MUSIC(0,3),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bob_1_),
JUMP_LINK(local_warps_bob_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bob_1_[] = {
OBJECT_WITH_ACTS(0,6980,-4322,8641,0,354,0,0xa0000, bhvSpinAirborneWarp
,31),
OBJECT_WITH_ACTS(0,2830,-1140,-10156,0,90,0,0xb0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,3442,-993,-8646,0,180,0,0xc0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp
,31),
OBJECT_WITH_ACTS(86,3838,2760,-9349,0,333,0,0x0, bhvKingBobomb
,1),
OBJECT_WITH_ACTS(122,4825,3078,-2053,0,0,0,0x1000000, bhvStar
,62),
OBJECT_WITH_ACTS(122,374,4035,-14247,0,0,0,0x2000000, bhvStar
,63),
OBJECT_WITH_ACTS(137,-1515,238,13885,0,0,0,0xc0000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(137,811,4420,6745,0,0,0,0xd0000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(122,3442,-1058,-8236,0,0,0,0x5000000, bhvStar
,63),
OBJECT_WITH_ACTS(34,5261,-114,-10430,0,90,0,0x0, bhvDoor
,63),
OBJECT_WITH_ACTS(34,2783,426,-10025,0,270,0,0x0, bhvDoor
,63),
OBJECT_WITH_ACTS(34,4585,-1772,-7777,0,0,0,0x0, bhvDoor
,63),
OBJECT_WITH_ACTS(102,418,-2123,633,0,0,0,0x0, bhvChainChomp
,63),
OBJECT_WITH_ACTS(0,5397,2658,-3052,0,23,0,0x0, bhvTtmBowlingBallSpawner
,63),
OBJECT_WITH_ACTS(188,-46,998,-11826,0,348,0,0x0, bhvBobomb
,63),
OBJECT_WITH_ACTS(137,-5807,3360,-270,0,25,0,0x60000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(137,-1686,-3065,12657,0,0,0,0x50000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(137,-8452,-1998,-3034,0,0,0,0x50000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(137,4906,-1043,-10478,0,0,0,0x90000, bhvExclamationBox
,63),
OBJECT_WITH_ACTS(207,4271,1125,-8690,0,0,0,0x0, bhvFloorSwitchHiddenObjects
,63),
OBJECT_WITH_ACTS(0,3947,1125,-7881,0,90,0,0x0, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,3283,-1538,-9797,0,0,0,0x0, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,753,-4328,11437,0,0,0,0x0, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,4239,-1748,213,0,95,0,0x0, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,7855,-1823,7539,0,15,0,0x0, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,6470,-1018,-3144,0,25,0,0x0, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(0,-4865,-2858,-257,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,2836,-3098,6448,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,-1161,-3628,10189,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,4593,-1760,-7052,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,-4558,130,-7552,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(0,-3569,3300,2983,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(188,7163,-1328,-1110,0,0,0,0x0, bhvBobomb
,63),
OBJECT_WITH_ACTS(188,-6475,20,-2074,0,0,0,0x0, bhvBobomb
,63),
OBJECT_WITH_ACTS(188,-7262,20,-4363,0,0,0,0x0, bhvBobomb
,63),
OBJECT_WITH_ACTS(188,-3974,770,-11372,0,0,0,0x0, bhvBobomb
,63),
OBJECT_WITH_ACTS(188,-906,998,-13497,0,0,0,0x0, bhvBobomb
,63),
OBJECT_WITH_ACTS(188,-2235,193,-8280,0,0,0,0x0, bhvBobomb
,63),
OBJECT_WITH_ACTS(188,1980,-1625,-8436,0,0,0,0x0, bhvBobomb
,63),
OBJECT_WITH_ACTS(188,-7697,-2858,-3994,0,0,0,0x0, bhvBobomb
,63),
OBJECT_WITH_ACTS(188,-7641,-2858,-572,0,0,0,0x0, bhvBobomb
,63),
OBJECT_WITH_ACTS(188,-736,-2958,5470,0,0,0,0x0, bhvBobomb
,63),
OBJECT_WITH_ACTS(188,3527,2760,-8987,0,0,0,0x0, bhvBobomb
,62),
OBJECT_WITH_ACTS(188,4769,2760,-9707,0,0,0,0x0, bhvBobomb
,62),
OBJECT_WITH_ACTS(188,3659,-3678,10792,0,0,0,0x0, bhvBobomb
,63),
OBJECT_WITH_ACTS(188,4586,-1772,-9830,0,0,0,0x0, bhvBobomb
,63),
OBJECT_WITH_ACTS(192,-176,-2910,7183,0,0,0,0x0, bhvGoomba
,63),
OBJECT_WITH_ACTS(0,-1711,-1808,-3102,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(192,4502,-114,-9297,0,0,0,0x0, bhvGoomba
,63),
OBJECT_WITH_ACTS(192,4404,-114,-10393,0,0,0,0x0, bhvGoomba
,63),
OBJECT_WITH_ACTS(192,4987,1829,-3373,0,0,0,0x0, bhvGoomba
,63),
OBJECT_WITH_ACTS(192,807,-1930,-1717,0,0,0,0x0, bhvGoomba
,63),
OBJECT_WITH_ACTS(220,2827,903,-2843,0,0,0,0x0, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(220,3154,163,14422,0,0,0,0x0, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(180,6167,-1075,12416,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,230,-125,15026,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,1033,-197,15080,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(180,7895,-1655,10044,0,0,0,0x0, bhvFireSpitter
,63),
OBJECT_WITH_ACTS(129,5815,893,-7619,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,6015,893,-7619,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,6415,893,-7619,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,6215,893,-7619,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,6415,893,-7819,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,6415,1093,-8015,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,6415,1293,-8215,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,6415,1493,-8415,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,6415,1693,-8615,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,6415,1893,-8815,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(129,6215,2093,-8815,0,0,0,0x0, bhvHiddenObject
,63),
OBJECT_WITH_ACTS(116,4656,-1772,-10693,0,0,0,0x0, bhvOneCoin
,63),
OBJECT_WITH_ACTS(116,4227,-114,-10693,0,0,0,0x0, bhvOneCoin
,63),
OBJECT_WITH_ACTS(116,4923,-114,-9028,0,0,0,0x0, bhvOneCoin
,63),
OBJECT_WITH_ACTS(116,4962,-1772,-8126,0,0,0,0x0, bhvOneCoin
,63),
OBJECT_WITH_ACTS(116,4361,-1634,-10634,0,0,0,0x0, bhvOneCoin
,63),
OBJECT_WITH_ACTS(116,3625,-410,15258,0,0,0,0x0, bhvOneCoin
,63),
OBJECT_WITH_ACTS(116,4193,-488,15132,0,0,0,0x0, bhvOneCoin
,63),
OBJECT_WITH_ACTS(116,3440,-3163,7901,0,0,0,0x0, bhvOneCoin
,63),
OBJECT_WITH_ACTS(116,-709,-3256,8781,0,0,0,0x0, bhvOneCoin
,63),
OBJECT_WITH_ACTS(116,-1198,1472,-10887,0,0,0,0x0, bhvOneCoin
,63),
OBJECT_WITH_ACTS(116,-1810,2340,-12964,0,0,0,0x0, bhvOneCoin
,63),
OBJECT_WITH_ACTS(116,-3281,2863,-14123,0,0,0,0x0, bhvOneCoin
,63),
OBJECT_WITH_ACTS(116,-1037,3498,-14269,0,0,0,0x0, bhvOneCoin
,63),
OBJECT_WITH_ACTS(195,6366,-5770,9595,0,124,0,0x10000, bhvBobombBuddy
,1),
OBJECT_WITH_ACTS(195,7454,-5770,9554,0,202,0,0x0, bhvBobombBuddy
,1),
OBJECT_WITH_ACTS(195,3189,-1548,-10547,0,201,0,0x280000, bhvBobombBuddy
,62),
OBJECT_WITH_ACTS(195,2358,-1248,-10416,0,342,0,0x20000, bhvBobombBuddy
,1),
OBJECT_WITH_ACTS(195,6366,-5770,9595,0,124,0,0x30000, bhvBobombBuddy
,62),
OBJECT_WITH_ACTS(195,-4943,0,-2078,0,225,0,0x80000, bhvBobombBuddy
,62),
OBJECT_WITH_ACTS(217,2830,-1140,-10156,0,0,0,0x0, bhvPushableMetalBox
,1),
OBJECT_WITH_ACTS(124,4364,-1765,-7695,0,0,0,0x100000, bhvMessagePanel
,63),
OBJECT_WITH_ACTS(124,5789,-1553,-9280,0,56,0,0xf0000, bhvMessagePanel
,31),
OBJECT_WITH_ACTS(0,4089,-5443,13731,0,0,0,0x0, bhvGoombaTripletSpawner
,63),
OBJECT_WITH_ACTS(188,-213,-5443,14346,0,0,0,0x0, bhvBobomb
,63),
OBJECT_WITH_ACTS(188,4938,-3340,6388,0,0,0,0x0, bhvBobomb
,63),
OBJECT_WITH_ACTS(188,-1222,-1978,1815,0,0,0,0x0, bhvBobomb
,63),
OBJECT_WITH_ACTS(220,-51,3930,5151,0,0,0,0x0, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(0,360,-2480,3056,0,90,0,0x0, bhvCoinFormation
,63),
OBJECT_WITH_ACTS(23,6402,-1539,-9735,0,0,0,0x0, bhvTree
,63),
OBJECT_WITH_ACTS(23,-1110,-5454,13898,0,0,0,0x0, bhvTree
,63),
OBJECT_WITH_ACTS(23,3817,-5454,14998,0,0,0,0x0, bhvTree
,63),
OBJECT_WITH_ACTS(23,4909,-5454,14469,0,0,0,0x0, bhvTree
,31),
OBJECT_WITH_ACTS(23,7367,-5793,6824,0,0,0,0x0, bhvTree
,31),
OBJECT_WITH_ACTS(23,-1430,-3660,11135,0,0,0,0x0, bhvTree
,31),
OBJECT_WITH_ACTS(23,2321,-3624,9075,0,0,0,0x0, bhvTree
,31),
OBJECT_WITH_ACTS(23,-1203,-2999,5219,0,0,0,0x0, bhvTree
,31),
OBJECT_WITH_ACTS(23,-9026,-16,-3355,0,0,0,0x0, bhvTree
,31),
OBJECT_WITH_ACTS(23,-6128,-204,-5079,0,0,0,0x0, bhvTree
,31),
OBJECT_WITH_ACTS(23,-3481,485,-10071,0,0,0,0x0, bhvTree
,31),
OBJECT_WITH_ACTS(23,-3039,-211,-5706,0,0,0,0x0, bhvTree
,31),
OBJECT_WITH_ACTS(23,-4007,987,-13088,0,0,0,0x0, bhvTree
,31),
OBJECT_WITH_ACTS(23,-1870,233,-8407,0,0,0,0x0, bhvTree
,31),
OBJECT_WITH_ACTS(23,-4570,425,-9392,0,0,0,0x0, bhvTree
,31),
OBJECT_WITH_ACTS(23,-7965,-2882,110,0,0,0,0x0, bhvTree
,31),
OBJECT_WITH_ACTS(0,-4570,1042,-9392,0,0,0,0x0, bhvHidden1upInPoleSpawner
,63),
OBJECT_WITH_ACTS(118,-1283,1010,-14784,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-2459,943,-12926,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-3262,1010,-13525,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(118,-1640,1010,-13675,0,0,0,0x0, bhvHiddenBlueCoin
,63),
OBJECT_WITH_ACTS(140,-351,997,-14915,0,0,0,0x0, bhvBlueCoinSwitch
,63),
OBJECT_WITH_ACTS(180,3225,2750,-9755,0,0,0,0x0, bhvFireSpitter
,1),
OBJECT_WITH_ACTS(180,4424,2750,-9745,0,0,0,0x0, bhvFireSpitter
,1),
OBJECT_WITH_ACTS(180,3833,2750,-8632,0,0,0,0x0, bhvFireSpitter
,1),
OBJECT_WITH_ACTS(124,-4660,-1967,-4730,0,311,0,0x3d0000, bhvMessagePanel
,63),
OBJECT_WITH_ACTS(124,-6343,-7,-2492,0,141,0,0x3c0000, bhvMessagePanel
,63),
OBJECT_WITH_ACTS(220,-7017,3473,-1240,0,0,0,0x0, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(220,3946,1558,3,0,0,0,0x0, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(220,-5178,3410,56,0,0,0,0x0, bhvFlyGuy
,63),
OBJECT_WITH_ACTS(192,2825,500,-643,0,0,0,0x0, bhvGoomba
,63),
OBJECT_WITH_ACTS(192,5080,-560,-4577,0,0,0,0x0, bhvGoomba
,63),
OBJECT_WITH_ACTS(23,1896,-2999,5845,0,0,0,0x0, bhvTree
,63),
OBJECT_WITH_ACTS(23,-5544,-2882,798,0,0,0,0x0, bhvTree
,63),
OBJECT_WITH_ACTS(195,2358,-1248,-10416,0,342,0,0x40000, bhvBobombBuddy
,62),
OBJECT_WITH_ACTS(217,2125,-1458,-9731,67,0,64,0x0, bhvPushableMetalBox
,62),
OBJECT_WITH_ACTS(116,3295,2358,-10973,0,0,0,0x0, bhvOneCoin
,63),
OBJECT_WITH_ACTS(116,4175,2358,-10973,0,0,0,0x0, bhvOneCoin
,63),
OBJECT_WITH_ACTS(116,5065,2358,-10973,0,0,0,0x0, bhvOneCoin
,63),
OBJECT_WITH_ACTS(23,-4299,3246,3491,0,0,0,0x0, bhvTree
,63),
OBJECT_WITH_ACTS(23,5076,-3488,7179,0,0,0,0x0, bhvTree
,63),
OBJECT_WITH_ACTS(23,4098,-5454,12478,0,0,0,0x0, bhvTree
,63),
OBJECT_WITH_ACTS(192,-8413,-2705,-2267,0,0,0,0x0, bhvGoomba
,63),
OBJECT_WITH_ACTS(188,6739,-1703,-8566,0,0,0,0x0, bhvBobomb
,63),
OBJECT_WITH_ACTS(128,-652,-1690,-2235,0,23,0,0x0, bhvWaterBombCannon
,1),
OBJECT_WITH_ACTS(128,559,-2718,4537,0,347,0,0x0, bhvWaterBombCannon
,1),
OBJECT_WITH_ACTS(128,3360,2515,-7968,0,339,0,0x0, bhvWaterBombCannon
,1),
OBJECT_WITH_ACTS(128,2313,-1708,-6671,0,349,0,0x0, bhvWaterBombCannon
,1),
OBJECT_WITH_ACTS(0,-50,-1000,-1431,0,0,0,0x0, bhvWaterBombSpawner
,1),
OBJECT_WITH_ACTS(0,830,-2456,8630,0,0,0,0x0, bhvWaterBombSpawner
,1),
OBJECT_WITH_ACTS(0,1146,-1200,1791,0,0,0,0x0, bhvWaterBombSpawner
,1),
OBJECT_WITH_ACTS(0,6689,-382,-8040,0,0,0,0x0, bhvWaterBombSpawner
,1),
OBJECT_WITH_ACTS(0,268,-2405,-6307,0,0,0,0x0, bhvFish2
,63),
OBJECT_WITH_ACTS(0,7690,-2405,-6006,0,0,0,0x0, bhvFish2
,63),
OBJECT_WITH_ACTS(0,7151,-2368,-10365,0,50,0,0x0, bhvCoinFormation
,191),
RETURN()
};
const LevelScript local_warps_bob_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,16,1,240,0),
WARP_NODE(241,16,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
