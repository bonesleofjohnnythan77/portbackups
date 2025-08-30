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
#include "levels/pss/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_pss_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_butterfly_triplet_2,0,59336,61036,4700,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_butterfly_triplet_2,0,58936,61036,4700,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_butterfly_triplet_2,0,59211,61036,4700,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_butterfly_triplet_2,0,59061,61036,4700,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_butterfly_triplet_2,0,59136,61036,4800,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_butterfly_triplet_2,0,59261,61036,4800,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_butterfly_triplet_2,0,59011,61036,4800,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,64286,1750,2200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,64286,1750,2400,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,64286,1750,2600,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,64286,1750,2000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,64286,1750,1800,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,180,64339,62607,60844,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,110,62971,62268,62011,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,84,60627,61902,61318,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,5500,64936,4100,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,64036,61936,61886,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_star_3,0,59186,63836,6000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,63736,61936,61536,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,2050,62736,61436,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,1600,63236,63261,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,1880,64055,65361,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,1860,63700,63816,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,270,1850,1057,2200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,1860,64310,1700,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,1595,63736,300,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,2100,63667,64536,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,4740,64322,6320,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,59136,61036,65221,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_arrow_flying,0,59136,63561,64536,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,270,300,2012,1850,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,270,2875,519,2600,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,1650,64036,4400,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_floor_switch_hidden_objects,59,375,64149,60511,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,59986,62486,62561,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,59286,62886,62561,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,59636,62686,62561,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,60336,62286,62561,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,58936,63086,62561,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_one_coin,0,64936,65436,300,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_star_1,0,64936,339,300,0),
MACRO_OBJECT_END(),
};

const LevelScript level_pss_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _pss_segment_7SegmentRomStart, _pss_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _mountain_mio0SegmentRomStart, _mountain_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group8_mio0SegmentRomStart, _group8_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group8_geoSegmentRomStart,  _group8_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_9),

    AREA(/*index*/ 1, pss_geo_000100),
MACRO_OBJECTS(local_macro_objects_pss_1),
WARP_NODE(241,6,1,35,0),
WARP_NODE(240,6,1,38,0),
WARP_NODE(243,6,1,32,0),
WARP_NODE(10,27,1,10,0),
OBJECT_WITH_ACTS(0,5632,6751,-5631,0,270,0,0xa0000, bhvAirborneWarp
,31),
        TERRAIN(/*terrainData*/ pss_seg7_collision),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SLIDE),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0001, /*seq*/ SEQ_LEVEL_SLIDE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 270, /*pos*/ 5632, 6451, -5631),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
