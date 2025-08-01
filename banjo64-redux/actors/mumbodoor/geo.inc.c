#include "src/game/envfx_snow.h"

const GeoLayout mumbodoor_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_CULLING_RADIUS(2600),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 78643),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, mumbodoor_000_displaylist_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
