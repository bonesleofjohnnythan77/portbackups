#include "custom.model.inc.h"
const GeoLayout exclamation_box_geo[]= {
GEO_CULLING_RADIUS(300),
GEO_OPEN_NODE(),
GEO_SHADOW(10,180,70),
GEO_OPEN_NODE(),
GEO_SWITCH_CASE(4, geo_switch_anim_state),
GEO_OPEN_NODE(),
GEO_DISPLAY_LIST(1,DL_exclamation_box_geo_0x8019318),
GEO_DISPLAY_LIST(1,DL_exclamation_box_geo_0x8019378),
GEO_DISPLAY_LIST(1,DL_exclamation_box_geo_0x80193d8),
GEO_DISPLAY_LIST(1,DL_exclamation_box_geo_0x8019438),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_END(),
};
