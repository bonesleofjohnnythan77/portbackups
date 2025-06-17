#include "custom.model.inc.h"
const GeoLayout transparent_star_geo[]= {
GEO_SHADOW(1,155,100),
GEO_OPEN_NODE(),
GEO_SCALE(0,16384),
GEO_OPEN_NODE(),
GEO_SWITCH_CASE(4, geo_switch_anim_state),
GEO_OPEN_NODE(),
GEO_DISPLAY_LIST(4,DL_transparent_star_geo_0x6139e0),
GEO_DISPLAY_LIST(4,DL_transparent_star_geo_0x60b4e0),
GEO_DISPLAY_LIST(4,DL_transparent_star_geo_0x60dbe0),
GEO_DISPLAY_LIST(4,DL_transparent_star_geo_0x608de0),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_END(),
};
