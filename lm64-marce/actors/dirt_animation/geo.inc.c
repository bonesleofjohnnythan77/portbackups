#include "custom.model.inc.h"
const GeoLayout dirt_animation_geo[]= {
GEO_CULLING_RADIUS(300),
GEO_OPEN_NODE(),
GEO_SWITCH_CASE(6, geo_switch_anim_state),
GEO_OPEN_NODE(),
GEO_DISPLAY_LIST(1,DL_dirt_animation_geo_0x302c378),
GEO_DISPLAY_LIST(1,DL_dirt_animation_geo_0x302c3b0),
GEO_DISPLAY_LIST(1,DL_dirt_animation_geo_0x302c3e8),
GEO_DISPLAY_LIST(4,DL_dirt_animation_geo_0x302c028),
GEO_DISPLAY_LIST(1,DL_dirt_animation_geo_0x302c420),
GEO_DISPLAY_LIST(1,DL_dirt_animation_geo_0x302c458),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_END(),
};
