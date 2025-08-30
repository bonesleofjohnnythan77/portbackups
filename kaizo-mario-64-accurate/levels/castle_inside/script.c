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
#include "levels/castle_inside/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_castle_inside_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_bouncing_fireball_copy,315,1500,32768,63196,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bouncing_fireball,0,64312,250,60486,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,90,61036,307,65071,167),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bouncing_fireball_copy,90,65336,32768,63314,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bouncing_fireball_copy,0,2376,32768,64431,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bouncing_fireball_copy,180,63258,32768,62534,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bouncing_fireball_copy,0,64462,512,65036,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bouncing_fireball,0,64562,512,65036,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bouncing_fireball_copy,0,64812,388,65212,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bouncing_fireball_copy,0,64212,388,65212,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,180,64561,65186,1900,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,64461,65186,1900,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_castle_inside_2[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,0,65311,5018,62786,133),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_castle_inside_3[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_sign_on_wall,0,6400,64358,64266,77),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,2130,63028,64590,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,2130,63028,65444,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,3515,63028,64590,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_trigger,0,3515,63028,65444,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up,0,2861,63028,65021,4),
MACRO_OBJECT_END(),
};

static const LevelScript script_func_local_1[] = {
    WARP_NODE(/*id*/ 0x00, /*destLevel*/ LEVEL_CASTLE_GROUNDS, /*destArea*/ 0x01, /*destNode*/ 0x00, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x01, /*destLevel*/ LEVEL_CASTLE_GROUNDS, /*destArea*/ 0x01, /*destNode*/ 0x01, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x02, /*destLevel*/ LEVEL_CASTLE_COURTYARD, /*destArea*/ 0x01, /*destNode*/ 0x01, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_CASTLE_STAR_DOOR_8_STARS, /*pos*/ -2706,   512, -1409, /*angle*/ 0,  45, 0, /*behParam*/ 0x08000000, /*beh*/ bhvStarDoor),
    OBJECT(/*model*/ MODEL_CASTLE_STAR_DOOR_8_STARS, /*pos*/ -2598,   512, -1517, /*angle*/ 0, 225, 0, /*behParam*/ 0x08000000, /*beh*/ bhvStarDoor),
    OBJECT(/*model*/ MODEL_CASTLE_KEY_DOOR,          /*pos*/ -1100,   512, -1074, /*angle*/ 0,   0, 0, /*behParam*/ 0x01030000, /*beh*/ bhvDoorWarp),
    OBJECT(/*model*/ MODEL_CASTLE_KEY_DOOR,          /*pos*/  -946,   512, -1074, /*angle*/ 0, 180, 0, /*behParam*/ 0x01040000, /*beh*/ bhvDoorWarp),
    OBJECT(/*model*/ MODEL_CASTLE_KEY_DOOR,          /*pos*/ -1100, -1074,   922, /*angle*/ 0,   0, 0, /*behParam*/ 0x02050000, /*beh*/ bhvDoorWarp),
    OBJECT(/*model*/ MODEL_CASTLE_KEY_DOOR,          /*pos*/  -946, -1074,   922, /*angle*/ 0, 180, 0, /*behParam*/ 0x02060000, /*beh*/ bhvDoorWarp),
    WARP_NODE(/*id*/ 0x03, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x00, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x04, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x01, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x05, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x03, /*destNode*/ 0x00, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x06, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x03, /*destNode*/ 0x01, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x00, /*destLevel*/ LEVEL_BOB, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x01, /*destLevel*/ LEVEL_BOB, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x02, /*destLevel*/ LEVEL_BOB, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x03, /*destLevel*/ LEVEL_CCM, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x04, /*destLevel*/ LEVEL_CCM, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x05, /*destLevel*/ LEVEL_CCM, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x06, /*destLevel*/ LEVEL_WF, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x07, /*destLevel*/ LEVEL_WF, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x08, /*destLevel*/ LEVEL_WF, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x09, /*destLevel*/ LEVEL_JRB, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x0A, /*destLevel*/ LEVEL_JRB, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x0B, /*destLevel*/ LEVEL_JRB, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  2013,  768, -2014, /*angle*/ 0,    0, 0, /*behParam*/ 0x000A0000, /*beh*/ bhvWarp),
    WARP_NODE(/*id*/ 0x0A, /*destLevel*/ LEVEL_PSS, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -5513,  512, -4324, /*angle*/ 0,    0, 0, /*behParam*/ 0x300B0000, /*beh*/ bhvWarp),
    WARP_NODE(/*id*/ 0x0B, /*destLevel*/ LEVEL_BITDW, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  1963,  819,  1280, /*angle*/ 0,    0, 0, /*behParam*/ 0x050C0000, /*beh*/ bhvWarp),
    WARP_NODE(/*id*/ 0x0C, /*destLevel*/ LEVEL_SA, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0xF2, /*destLevel*/ LEVEL_TOTWC, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -1024,  512,  -650, /*angle*/ 0,    0, 0, /*behParam*/ 0x001E0000, /*beh*/ bhvInstantActiveWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -1024,  -50,   717, /*angle*/ 0,  180, 0, /*behParam*/ 0x001F0000, /*beh*/ bhvInstantActiveWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -1024,  900,   717, /*angle*/ 0,  180, 0, /*behParam*/ 0x00200000, /*beh*/ bhvAirborneWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -1024,  900,   717, /*angle*/ 0,  180, 0, /*behParam*/ 0x00210000, /*beh*/ bhvAirborneDeathWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -1024,  900,   717, /*angle*/ 0,  180, 0, /*behParam*/ 0x00220000, /*beh*/ bhvHardAirKnockBackWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -1024,  900,   717, /*angle*/ 0,  180, 0, /*behParam*/ 0x00230000, /*beh*/ bhvDeathWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -5513,  512, -4324, /*angle*/ 0, -135, 0, /*behParam*/ 0x00240000, /*beh*/ bhvLaunchStarCollectWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -5513,  512, -4324, /*angle*/ 0, -135, 0, /*behParam*/ 0x00250000, /*beh*/ bhvLaunchDeathWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -1024,  900,   717, /*angle*/ 0,    0, 0, /*behParam*/ 0x00260000, /*beh*/ bhvAirborneStarCollectWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  2816, 1200,  -256, /*angle*/ 0,   90, 0, /*behParam*/ 0x00270000, /*beh*/ bhvAirborneStarCollectWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  2816, 1200,  -256, /*angle*/ 0,  270, 0, /*behParam*/ 0x00280000, /*beh*/ bhvDeathWarp),
    WARP_NODE(/*id*/ 0x1E, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x1E, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x1F, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x1F, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x20, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x20, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x21, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x21, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x22, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x22, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x23, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x23, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x24, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x24, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x25, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x25, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x26, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x26, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x27, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x27, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x28, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x28, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -5422, 717,  -461, /*angle*/ 0, 270, 0, /*behParam*/ 0x00320000, /*beh*/ bhvPaintingStarCollectWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -2304,   0, -4552, /*angle*/ 0, 180, 0, /*behParam*/ 0x00330000, /*beh*/ bhvPaintingStarCollectWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/   256, 102, -4706, /*angle*/ 0, 180, 0, /*behParam*/ 0x00340000, /*beh*/ bhvPaintingStarCollectWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  4501, 717,  -230, /*angle*/ 0,  90, 0, /*behParam*/ 0x00350000, /*beh*/ bhvPaintingStarCollectWarp),
    WARP_NODE(/*id*/ 0x32, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x32, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x33, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x33, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x34, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x34, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x35, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x35, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -5422, 717,  -461, /*angle*/ 0, 270, 0, /*behParam*/ 0x00640000, /*beh*/ bhvPaintingDeathWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -2304,   0, -4552, /*angle*/ 0, 180, 0, /*behParam*/ 0x00650000, /*beh*/ bhvPaintingDeathWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/   256, 102, -4706, /*angle*/ 0, 180, 0, /*behParam*/ 0x00660000, /*beh*/ bhvPaintingDeathWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  4501, 717,  -230, /*angle*/ 0,  90, 0, /*behParam*/ 0x00670000, /*beh*/ bhvPaintingDeathWarp),
    WARP_NODE(/*id*/ 0x64, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x64, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x65, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x65, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x66, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x66, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x67, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x67, /*flags*/ WARP_NO_CHECKPOINT),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_CASTLE_KEY_DOOR, /*pos*/ -1100, 512, 3021, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvDoorWarp),
    OBJECT(/*model*/ MODEL_CASTLE_KEY_DOOR, /*pos*/  -946, 512, 3021, /*angle*/ 0, 180, 0, /*behParam*/ 0x00010000, /*beh*/ bhvDoorWarp),
    WARP_NODE(/*id*/ 0x00, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x03, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x01, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x04, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_CASTLE_STAR_DOOR_50_STARS, /*pos*/ -281, 2253, 4762, /*angle*/ 0,   0, 0, /*behParam*/ 0x32000000, /*beh*/ bhvStarDoor),
    OBJECT(/*model*/ MODEL_CASTLE_STAR_DOOR_50_STARS, /*pos*/ -127, 2253, 4762, /*angle*/ 0, 180, 0, /*behParam*/ 0x32000000, /*beh*/ bhvStarDoor),
    OBJECT(/*model*/ MODEL_CASTLE_STAR_DOOR_70_STARS, /*pos*/ -281, 3174, 3772, /*angle*/ 0,   0, 0, /*behParam*/ 0x46000000, /*beh*/ bhvStarDoor),
    OBJECT(/*model*/ MODEL_CASTLE_STAR_DOOR_70_STARS, /*pos*/ -127, 3174, 3772, /*angle*/ 0, 180, 0, /*behParam*/ 0x46000000, /*beh*/ bhvStarDoor),
    PAINTING_WARP_NODE(/*id*/ 0x18, /*destLevel*/ LEVEL_WDW, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x19, /*destLevel*/ LEVEL_WDW, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x1A, /*destLevel*/ LEVEL_WDW, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x1B, /*destLevel*/ LEVEL_THI, /*destArea*/ 0x02, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x1C, /*destLevel*/ LEVEL_THI, /*destArea*/ 0x02, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x1D, /*destLevel*/ LEVEL_THI, /*destArea*/ 0x02, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x1E, /*destLevel*/ LEVEL_TTM, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x1F, /*destLevel*/ LEVEL_TTM, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x20, /*destLevel*/ LEVEL_TTM, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x21, /*destLevel*/ LEVEL_TTC, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x22, /*destLevel*/ LEVEL_TTC, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x23, /*destLevel*/ LEVEL_TTC, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x24, /*destLevel*/ LEVEL_SL, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x25, /*destLevel*/ LEVEL_SL, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x26, /*destLevel*/ LEVEL_SL, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x27, /*destLevel*/ LEVEL_THI, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x28, /*destLevel*/ LEVEL_THI, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x29, /*destLevel*/ LEVEL_THI, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x2A, /*destLevel*/ LEVEL_RR, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  3002, 2816,  5886, /*angle*/ 0,   0, 0, /*behParam*/ 0x0F0A0000, /*beh*/ bhvWarp),
    WARP_NODE(/*id*/ 0x0A, /*destLevel*/ LEVEL_WMOTR, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  -230, 4813, -3352, /*angle*/ 0,   0, 0, /*behParam*/ 0x0F0B0000, /*beh*/ bhvWarp),
    WARP_NODE(/*id*/ 0x0B, /*destLevel*/ LEVEL_BITS, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  -659, 1613,  -350, /*angle*/ 0, 180, 0, /*behParam*/ 0x00320000, /*beh*/ bhvPaintingStarCollectWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -4693, 2157,  1828, /*angle*/ 0, 270, 0, /*behParam*/ 0x00330000, /*beh*/ bhvAirborneStarCollectWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  -675, 1400,  3870, /*angle*/ 0,   0, 0, /*behParam*/ 0x00340000, /*beh*/ bhvPaintingStarCollectWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  -205, 2918,  7300, /*angle*/ 0,   0, 0, /*behParam*/ 0x00350000, /*beh*/ bhvPaintingStarCollectWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  3538, 1766,  -400, /*angle*/ 0, 180, 0, /*behParam*/ 0x00360000, /*beh*/ bhvPaintingStarCollectWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -4693, 2157,  1828, /*angle*/ 0, 270, 0, /*behParam*/ 0x00370000, /*beh*/ bhvAirborneStarCollectWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  3002, 2816,  5886, /*angle*/ 0,  90, 0, /*behParam*/ 0x00380000, /*beh*/ bhvLaunchStarCollectWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -3412, 2816,  5886, /*angle*/ 0, 270, 0, /*behParam*/ 0x003A0000, /*beh*/ bhvLaunchStarCollectWarp),
    WARP_NODE(/*id*/ 0x32, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x32, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x33, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x33, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x34, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x34, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x35, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x35, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x36, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x36, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x37, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x37, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x38, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x38, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x3A, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x3A, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  -659, 1613,  -350, /*angle*/ 0, 180, 0, /*behParam*/ 0x00640000, /*beh*/ bhvPaintingDeathWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -4693, 2157,  1828, /*angle*/ 0, 270, 0, /*behParam*/ 0x00650000, /*beh*/ bhvDeathWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  -675, 1400,  3870, /*angle*/ 0,   0, 0, /*behParam*/ 0x00660000, /*beh*/ bhvPaintingDeathWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  -205, 2918,  7300, /*angle*/ 0,   0, 0, /*behParam*/ 0x00670000, /*beh*/ bhvPaintingDeathWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  3538, 1766,  -400, /*angle*/ 0, 180, 0, /*behParam*/ 0x00680000, /*beh*/ bhvPaintingDeathWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -4693, 2157,  1828, /*angle*/ 0, 270, 0, /*behParam*/ 0x00690000, /*beh*/ bhvDeathWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  -230, 4813, -3352, /*angle*/ 0, 180, 0, /*behParam*/ 0x006B0000, /*beh*/ bhvLaunchDeathWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -3412, 2816,  5886, /*angle*/ 0, 270, 0, /*behParam*/ 0x006C0000, /*beh*/ bhvLaunchDeathWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  3002, 2816,  5886, /*angle*/ 0,  90, 0, /*behParam*/ 0x006D0000, /*beh*/ bhvLaunchDeathWarp),
    WARP_NODE(/*id*/ 0x64, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x64, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x65, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x65, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x66, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x66, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x67, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x67, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x68, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x68, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x69, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x69, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x6B, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x6B, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x6C, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x6C, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x6D, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x6D, /*flags*/ WARP_NO_CHECKPOINT),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT(/*model*/ MODEL_CASTLE_KEY_DOOR, /*pos*/ -1100, -1074, 922, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvDoorWarp),
    OBJECT(/*model*/ MODEL_CASTLE_KEY_DOOR, /*pos*/  -946, -1074, 922, /*angle*/ 0, 180, 0, /*behParam*/ 0x00010000, /*beh*/ bhvDoorWarp),
    WARP_NODE(/*id*/ 0x00, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x05, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x01, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x06, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x02, /*destLevel*/ LEVEL_CASTLE_GROUNDS, /*destArea*/ 0x01, /*destNode*/ 0x02, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_CASTLE_STAR_DOOR_30_STARS, /*pos*/ 307, -1074, 2074, /*angle*/ 0,  90, 0, /*behParam*/ 0x1E000000, /*beh*/ bhvStarDoor),
    OBJECT(/*model*/ MODEL_CASTLE_STAR_DOOR_30_STARS, /*pos*/ 307, -1074, 1920, /*angle*/ 0, 270, 0, /*behParam*/ 0x1E000000, /*beh*/ bhvStarDoor),
    PAINTING_WARP_NODE(/*id*/ 0x0C, /*destLevel*/ LEVEL_LLL, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x0D, /*destLevel*/ LEVEL_LLL, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x0E, /*destLevel*/ LEVEL_LLL, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x0F, /*destLevel*/ LEVEL_SSL, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x10, /*destLevel*/ LEVEL_SSL, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x11, /*destLevel*/ LEVEL_SSL, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x2A, /*destLevel*/ LEVEL_HMC, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x15, /*destLevel*/ LEVEL_DDD, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x16, /*destLevel*/ LEVEL_DDD, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x17, /*destLevel*/ LEVEL_DDD, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  4147, -1280,  1997, /*angle*/ 0,   0, 0, /*behParam*/ 0x0F180000, /*beh*/ bhvWarp),
    WARP_NODE(/*id*/ 0x18, /*destLevel*/ LEVEL_BITFS, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -1382,  -819, -4150, /*angle*/ 0, 180, 0, /*behParam*/ 0x00320000, /*beh*/ bhvPaintingStarCollectWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -2918,  -870,  -875, /*angle*/ 0,   0, 0, /*behParam*/ 0x00330000, /*beh*/ bhvPaintingStarCollectWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  2483, -1688, -2662, /*angle*/ 0, 270, 0, /*behParam*/ 0x00340000, /*beh*/ bhvLaunchStarCollectWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  2381,  -500,  2011, /*angle*/ 0,  90, 0, /*behParam*/ 0x00350000, /*beh*/ bhvAirborneStarCollectWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  4147, -1100,  1997, /*angle*/ 0,  90, 0, /*behParam*/ 0x00360000, /*beh*/ bhvLaunchStarCollectWarp),
    WARP_NODE(/*id*/ 0x32, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x03, /*destNode*/ 0x32, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x33, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x03, /*destNode*/ 0x33, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x34, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x03, /*destNode*/ 0x34, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x35, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x03, /*destNode*/ 0x35, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x36, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x03, /*destNode*/ 0x36, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -1382,  -819, -4150, /*angle*/ 0, 180, 0, /*behParam*/ 0x00640000, /*beh*/ bhvPaintingDeathWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -2918,  -870,  -875, /*angle*/ 0,   0, 0, /*behParam*/ 0x00650000, /*beh*/ bhvPaintingDeathWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  2483, -1688, -2662, /*angle*/ 0, 270, 0, /*behParam*/ 0x00660000, /*beh*/ bhvLaunchDeathWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  2381,  -500,  2011, /*angle*/ 0,  90, 0, /*behParam*/ 0x00670000, /*beh*/ bhvDeathWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  4147, -1100,  1997, /*angle*/ 0,  90, 0, /*behParam*/ 0x00680000, /*beh*/ bhvLaunchDeathWarp),
    WARP_NODE(/*id*/ 0x64, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x03, /*destNode*/ 0x64, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x65, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x03, /*destNode*/ 0x65, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x66, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x03, /*destNode*/ 0x66, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x67, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x03, /*destNode*/ 0x67, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x68, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x03, /*destNode*/ 0x68, /*flags*/ WARP_NO_CHECKPOINT),
    RETURN(),
};

static const LevelScript script_func_local_4[] = {
    OBJECT(/*model*/ MODEL_RED_FLAME,  /*pos*/ -2037,  -818,  -716, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME,  /*pos*/ -1648,  -818,  -716, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME,  /*pos*/ -1648,  -818,  -101, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME,  /*pos*/ -1648,  -818,   512, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME,  /*pos*/ -2037,  -818,  -101, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME,  /*pos*/ -2969,  -921,   420, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME,  /*pos*/ -2037,  -818, -1330, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME,  /*pos*/ -3839, -1023, -1422, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME,  /*pos*/ -1929,  -818, -3615, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME,  /*pos*/  -834,  -818, -3615, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_BLUE_FLAME, /*pos*/ -3317,  -921,  1229, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_BLUE_FLAME, /*pos*/  -204,  -921,  -624, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_BLUE_FLAME, /*pos*/ -2876,  -921,  1229, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    RETURN(),
};

const LevelScript level_castle_inside_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _inside_mio0SegmentRomStart, _inside_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group15_mio0SegmentRomStart, _group15_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group15_geoSegmentRomStart,  _group15_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_16),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_BOWSER_TRAP,        castle_geo_000F18),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WATER_LEVEL_PILLAR, castle_geo_001940),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_MINUTE_HAND,  castle_geo_001530),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_HOUR_HAND,    castle_geo_001548),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_PENDULUM,     castle_geo_001518),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR,        castle_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR,        wooden_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_METAL_DOOR,         metal_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR_UNUSED, castle_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR_UNUSED, wooden_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_0_STARS,       castle_door_0_star_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_1_STAR,        castle_door_1_star_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_3_STARS,       castle_door_3_stars_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_KEY_DOOR,           key_door_geo),
    // The different sets of star doors all use different model IDs, despite them all loading the same geo layout.
    // It is possible that star doors were originally going to have numbers on them, similar to the other locked doors.
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_30_STARS, castle_geo_000F00),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_8_STARS,  castle_geo_000F00),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_50_STARS, castle_geo_000F00),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_70_STARS, castle_geo_000F00),

    AREA(/*index*/ 1, castle_geo_001400),
MACRO_OBJECTS(local_macro_objects_castle_inside_1),
WARP_NODE(241,16,1,3,0),
WARP_NODE(103,6,1,103,0),
WARP_NODE(102,6,1,102,0),
WARP_NODE(101,6,1,101,0),
WARP_NODE(100,6,1,100,0),
WARP_NODE(53,6,1,53,0),
WARP_NODE(52,6,1,52,0),
WARP_NODE(51,6,1,51,0),
WARP_NODE(50,6,1,50,0),
WARP_NODE(40,6,1,40,0),
WARP_NODE(39,6,1,39,0),
WARP_NODE(38,6,1,38,0),
WARP_NODE(37,6,1,37,0),
WARP_NODE(36,6,1,36,0),
WARP_NODE(35,6,1,35,0),
WARP_NODE(34,6,1,34,0),
WARP_NODE(33,6,1,33,0),
WARP_NODE(32,6,1,32,0),
WARP_NODE(31,6,1,31,0),
WARP_NODE(30,6,1,30,0),
WARP_NODE(242,29,1,10,0),
WARP_NODE(12,20,1,10,0),
WARP_NODE(11,17,1,10,0),
WARP_NODE(10,27,1,10,0),
PAINTING_WARP_NODE(11,12,1,10,0),
PAINTING_WARP_NODE(10,12,1,10,0),
PAINTING_WARP_NODE(9,12,1,10,0),
PAINTING_WARP_NODE(8,24,1,10,0),
PAINTING_WARP_NODE(7,24,1,10,0),
PAINTING_WARP_NODE(6,24,1,10,0),
PAINTING_WARP_NODE(5,5,1,10,0),
PAINTING_WARP_NODE(4,5,1,10,0),
PAINTING_WARP_NODE(3,5,1,10,0),
PAINTING_WARP_NODE(2,9,1,10,0),
PAINTING_WARP_NODE(1,9,1,10,0),
PAINTING_WARP_NODE(0,9,1,10,0),
WARP_NODE(6,6,3,1,0),
WARP_NODE(5,6,3,0,0),
WARP_NODE(4,6,2,1,0),
WARP_NODE(3,6,2,0,0),
WARP_NODE(2,26,1,1,0),
WARP_NODE(1,16,1,1,0),
WARP_NODE(0,16,1,0,0),
OBJECT_WITH_ACTS(0,4501,717,-230,0,90,0,0x670000, bhvPaintingDeathWarp
,31),
OBJECT_WITH_ACTS(0,256,102,-4706,0,180,0,0x660000, bhvPaintingDeathWarp
,31),
OBJECT_WITH_ACTS(0,-2304,0,-4552,0,180,0,0x650000, bhvPaintingDeathWarp
,31),
OBJECT_WITH_ACTS(0,-5422,717,-461,0,270,0,0x640000, bhvPaintingDeathWarp
,31),
OBJECT_WITH_ACTS(0,4501,717,-230,0,90,0,0x350000, bhvPaintingStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,256,102,-4706,0,180,0,0x340000, bhvPaintingStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,-2304,0,-4552,0,180,0,0x330000, bhvPaintingStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,-5422,717,-461,0,270,0,0x320000, bhvPaintingStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,2816,1200,-256,0,270,0,0x280000, bhvDeathWarp
,31),
OBJECT_WITH_ACTS(0,2816,1200,-256,0,90,0,0x270000, bhvAirborneStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,-1024,900,717,0,0,0,0x260000, bhvAirborneStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,-5513,512,-4324,0,-135,0,0x250000, bhvLaunchDeathWarp
,31),
OBJECT_WITH_ACTS(0,-5513,512,-4324,0,-135,0,0x240000, bhvLaunchStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,-1024,900,717,0,180,0,0x230000, bhvDeathWarp
,31),
OBJECT_WITH_ACTS(0,-1024,900,717,0,180,0,0x220000, bhvHardAirKnockBackWarp
,31),
OBJECT_WITH_ACTS(0,-1024,900,717,0,180,0,0x210000, bhvAirborneDeathWarp
,31),
OBJECT_WITH_ACTS(0,-1024,900,717,0,180,0,0x200000, bhvAirborneWarp
,31),
OBJECT_WITH_ACTS(0,-1024,-50,717,0,180,0,0x1f0000, bhvInstantActiveWarp
,31),
OBJECT_WITH_ACTS(0,-1024,512,-650,0,0,0,0x1e0000, bhvInstantActiveWarp
,31),
OBJECT_WITH_ACTS(0,1963,819,1280,0,0,0,0xc0000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,-5513,512,-4324,0,0,0,0x300b0000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,2013,768,-2014,0,0,0,0xa0000, bhvWarp
,31),
OBJECT_WITH_ACTS(37,-946,-1074,922,0,180,0,0x2060000, bhvDoorWarp
,31),
OBJECT_WITH_ACTS(37,-1100,-1074,922,0,0,0,0x2050000, bhvDoorWarp
,31),
OBJECT_WITH_ACTS(37,-946,512,-1074,0,180,0,0x1040000, bhvDoorWarp
,31),
OBJECT_WITH_ACTS(37,-1100,512,-1074,0,0,0,0x1030000, bhvDoorWarp
,31),
OBJECT_WITH_ACTS(213,-2598,512,-1517,0,225,0,0x8000000, bhvStarDoor
,31),
OBJECT_WITH_ACTS(213,-2706,512,-1409,0,45,0,0x8000000, bhvStarDoor
,31),
OBJECT_WITH_ACTS(0,-824,250,-5050,0,0,0,0x0, bhvBouncingFireball
,31),
OBJECT_WITH_ACTS(0,-1425,100,1400,0,180,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(0,-625,100,1400,0,180,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(101,-1000,50,-3500,0,0,0,0x0, bhvBooInCastle
,31),
OBJECT_WITH_ACTS(0,2778,507,1255,0,-90,0,0x0, bhvTankFishGroup
,31),
OBJECT_WITH_ACTS(0,3748,507,773,0,-45,0,0x0, bhvTankFishGroup
,31),
OBJECT_WITH_ACTS(0,3672,507,-1307,0,45,0,0x0, bhvTankFishGroup
,31),
OBJECT_WITH_ACTS(0,2774,507,-1716,0,90,0,0x0, bhvTankFishGroup
,31),
OBJECT_WITH_ACTS(0,2477,307,-2000,0,0,0,0x0, bhvFishGroup
,31),
OBJECT_WITH_ACTS(0,-5513,717,-4324,0,45,0,0x140000, bhvCastleFloorTrap
,31),
        TERRAIN(/*terrainData*/ inside_castle_seg7_area_1_collision),
        ROOMS(/*surfaceRooms*/ inside_castle_seg7_area_1_rooms),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0001, /*seq*/ SEQ_LEVEL_INSIDE_CASTLE),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    AREA(/*index*/ 2, castle_geo_001858),
MACRO_OBJECTS(local_macro_objects_castle_inside_2),
INSTANT_WARP(0,2,0,-205,410),
WARP_NODE(241,16,1,3,0),
WARP_NODE(109,6,2,109,0),
WARP_NODE(108,6,2,108,0),
WARP_NODE(107,6,2,107,0),
WARP_NODE(105,6,2,105,0),
WARP_NODE(104,6,2,104,0),
WARP_NODE(103,6,2,103,0),
WARP_NODE(102,6,2,102,0),
WARP_NODE(101,6,2,101,0),
WARP_NODE(100,6,2,100,0),
WARP_NODE(58,6,2,58,0),
WARP_NODE(56,6,2,56,0),
WARP_NODE(55,6,2,55,0),
WARP_NODE(54,6,2,54,0),
WARP_NODE(53,6,2,53,0),
WARP_NODE(52,6,2,52,0),
WARP_NODE(51,6,2,51,0),
WARP_NODE(50,6,2,50,0),
WARP_NODE(11,21,1,10,0),
WARP_NODE(10,31,1,10,0),
PAINTING_WARP_NODE(42,15,1,10,0),
PAINTING_WARP_NODE(41,13,1,10,0),
PAINTING_WARP_NODE(40,13,1,10,0),
PAINTING_WARP_NODE(39,13,1,10,0),
PAINTING_WARP_NODE(38,10,1,10,0),
PAINTING_WARP_NODE(37,10,1,10,0),
PAINTING_WARP_NODE(36,10,1,10,0),
PAINTING_WARP_NODE(35,14,1,10,0),
PAINTING_WARP_NODE(34,14,1,10,0),
PAINTING_WARP_NODE(33,14,1,10,0),
PAINTING_WARP_NODE(32,36,1,10,0),
PAINTING_WARP_NODE(31,36,1,10,0),
PAINTING_WARP_NODE(30,36,1,10,0),
PAINTING_WARP_NODE(29,13,2,10,0),
PAINTING_WARP_NODE(28,13,2,10,0),
PAINTING_WARP_NODE(27,13,2,10,0),
PAINTING_WARP_NODE(26,11,1,10,0),
PAINTING_WARP_NODE(25,11,1,10,0),
PAINTING_WARP_NODE(24,11,1,10,0),
WARP_NODE(1,6,1,4,0),
WARP_NODE(0,6,1,3,0),
OBJECT_WITH_ACTS(0,3002,2816,5886,0,90,0,0x6d0000, bhvLaunchDeathWarp
,31),
OBJECT_WITH_ACTS(0,-3412,2816,5886,0,270,0,0x6c0000, bhvLaunchDeathWarp
,31),
OBJECT_WITH_ACTS(0,0,-32768,0,0,180,0,0xb0000, bhvWarp
,31),
OBJECT_WITH_ACTS(0,-4693,2157,1828,0,270,0,0x690000, bhvDeathWarp
,31),
OBJECT_WITH_ACTS(0,3538,1766,-400,0,180,0,0x680000, bhvPaintingDeathWarp
,31),
OBJECT_WITH_ACTS(0,-205,2918,7300,0,0,0,0x670000, bhvPaintingDeathWarp
,31),
OBJECT_WITH_ACTS(0,-675,1400,3870,0,0,0,0x660000, bhvPaintingDeathWarp
,31),
OBJECT_WITH_ACTS(0,-4693,2157,1828,0,270,0,0x650000, bhvDeathWarp
,31),
OBJECT_WITH_ACTS(0,-659,1613,-350,0,180,0,0x640000, bhvPaintingDeathWarp
,31),
OBJECT_WITH_ACTS(0,-3412,2816,5886,0,270,0,0x3a0000, bhvLaunchStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,3002,2816,5886,0,90,0,0x380000, bhvLaunchStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,-4693,2157,1828,0,270,0,0x370000, bhvAirborneStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,3538,1766,-400,0,180,0,0x360000, bhvPaintingStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,-205,2918,7300,0,0,0,0x350000, bhvPaintingStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,-675,1400,3870,0,0,0,0x340000, bhvPaintingStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,-4693,2157,1828,0,270,0,0x330000, bhvAirborneStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,-659,1613,-350,0,180,0,0x320000, bhvPaintingStarCollectWarp
,31),
OBJECT_WITH_ACTS(144,-230,4850,-3352,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(0,3002,2816,5886,0,0,0,0xf0a0000, bhvWarp
,31),
OBJECT_WITH_ACTS(208,-127,3174,3772,0,180,0,0x46000000, bhvStarDoor
,31),
OBJECT_WITH_ACTS(208,-281,3174,3772,0,0,0,0x46000000, bhvStarDoor
,31),
OBJECT_WITH_ACTS(209,-127,2253,4762,0,180,0,0x32000000, bhvStarDoor
,31),
OBJECT_WITH_ACTS(209,-281,2253,4762,0,0,0,0x32000000, bhvStarDoor
,31),
OBJECT_WITH_ACTS(37,-946,512,3021,0,180,0,0x10000, bhvDoorWarp
,31),
OBJECT_WITH_ACTS(37,-1100,512,3021,0,0,0,0x0, bhvDoorWarp
,31),
OBJECT_WITH_ACTS(0,-325,2350,5000,0,180,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(221,-1500,2253,7100,0,90,0,0x53000000, bhvToadMessage
,31),
OBJECT_WITH_ACTS(0,-85,2350,5000,0,180,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(145,-961,-32768,2650,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(57,-205,2611,7140,0,0,0,0x0, bhvDecorativePendulum
,31),
OBJECT_WITH_ACTS(56,-205,2918,7222,0,180,0,0x0, bhvClockHourHand
,31),
OBJECT_WITH_ACTS(55,-205,2918,7222,0,180,0,0x0, bhvClockMinuteHand
,31),
        TERRAIN(/*terrainData*/ inside_castle_seg7_area_2_collision),
        ROOMS(/*surfaceRooms*/ inside_castle_seg7_area_2_rooms),
        INSTANT_WARP(/*index*/ 0, /*destArea*/ 2, /*displace*/ 0, -205, 410),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0001, /*seq*/ SEQ_LEVEL_INSIDE_CASTLE),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    AREA(/*index*/ 3, castle_geo_001C10),
MACRO_OBJECTS(local_macro_objects_castle_inside_3),
WARP_NODE(241,16,1,3,0),
WARP_NODE(104,6,3,104,0),
WARP_NODE(103,6,3,103,0),
WARP_NODE(102,6,3,102,0),
WARP_NODE(101,6,3,101,0),
WARP_NODE(100,6,3,100,0),
WARP_NODE(54,6,3,54,0),
WARP_NODE(53,6,3,53,0),
WARP_NODE(52,6,3,52,0),
WARP_NODE(51,6,3,51,0),
WARP_NODE(50,6,3,50,0),
WARP_NODE(24,19,1,10,0),
PAINTING_WARP_NODE(23,23,1,10,0),
PAINTING_WARP_NODE(22,23,1,10,0),
PAINTING_WARP_NODE(21,23,1,10,0),
PAINTING_WARP_NODE(42,7,1,10,0),
PAINTING_WARP_NODE(17,8,1,10,0),
PAINTING_WARP_NODE(16,8,1,10,0),
PAINTING_WARP_NODE(15,8,1,10,0),
PAINTING_WARP_NODE(14,22,1,10,0),
PAINTING_WARP_NODE(13,22,1,10,0),
PAINTING_WARP_NODE(12,22,1,10,0),
WARP_NODE(2,16,1,2,0),
WARP_NODE(1,6,1,6,0),
WARP_NODE(0,6,1,5,0),
OBJECT_WITH_ACTS(145,-2876,-921,1229,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(145,-204,-921,-624,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(145,-3317,-921,1229,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(144,-834,-818,-3615,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(144,-1929,-818,-3615,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(144,-3839,-1023,-1422,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(144,-2037,-818,-1330,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(144,-2969,-921,420,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(144,-2037,-818,-101,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(144,-1648,-818,512,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(144,-1648,-818,-101,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(144,-1648,-818,-716,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(144,-2037,-818,-716,0,0,0,0x0, bhvFlame
,31),
OBJECT_WITH_ACTS(0,4147,-1100,1997,0,90,0,0x680000, bhvLaunchDeathWarp
,31),
OBJECT_WITH_ACTS(0,2381,-500,2011,0,90,0,0x670000, bhvDeathWarp
,31),
OBJECT_WITH_ACTS(0,2483,-1688,-2662,0,270,0,0x660000, bhvLaunchDeathWarp
,31),
OBJECT_WITH_ACTS(0,-2918,-870,-875,0,0,0,0x650000, bhvPaintingDeathWarp
,31),
OBJECT_WITH_ACTS(0,-1382,-819,-4150,0,180,0,0x640000, bhvPaintingDeathWarp
,31),
OBJECT_WITH_ACTS(0,4147,-1100,1997,0,90,0,0x360000, bhvLaunchStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,2381,-500,2011,0,90,0,0x350000, bhvAirborneStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,2483,-1688,-2662,0,270,0,0x340000, bhvLaunchStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,-2918,-870,-875,0,0,0,0x330000, bhvPaintingStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,-1382,-819,-4150,0,180,0,0x320000, bhvPaintingStarCollectWarp
,31),
OBJECT_WITH_ACTS(0,4147,-1280,1997,0,0,0,0xf180000, bhvWarp
,31),
OBJECT_WITH_ACTS(208,307,-1074,1920,0,270,0,0x1e000000, bhvStarDoor
,31),
OBJECT_WITH_ACTS(208,307,-1074,2074,0,90,0,0x1e000000, bhvStarDoor
,31),
OBJECT_WITH_ACTS(37,-946,-1074,922,0,180,0,0x10000, bhvDoorWarp
,31),
OBJECT_WITH_ACTS(37,-1100,-1074,922,0,0,0,0x0, bhvDoorWarp
,31),
OBJECT_WITH_ACTS(0,-1382,-899,-4150,0,0,0,0x0, bhvFlamethrower
,31),
OBJECT_WITH_ACTS(221,1787,-1381,-1957,0,126,0,0x52000000, bhvToadMessage
,31),
OBJECT_WITH_ACTS(100,-1509,-1177,-1608,0,0,0,0x0, bhvMips
,31),
OBJECT_WITH_ACTS(0,0,0,0,0,0,0,0x0, bhvDddWarp
,31),
OBJECT_WITH_ACTS(54,7066,-1178,-350,0,0,0,0x0, bhvWaterLevelPillar
,31),
OBJECT_WITH_ACTS(54,7066,-1178,-933,0,0,0,0x0, bhvWaterLevelPillar
,31),
        TERRAIN(/*terrainData*/ inside_castle_seg7_area_3_collision),
        ROOMS(/*surfaceRooms*/ inside_castle_seg7_area_3_rooms),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0001, /*seq*/ SEQ_LEVEL_INSIDE_CASTLE),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 180, /*pos*/ -1023, 0, 1152),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
