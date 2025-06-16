#include "src/game/envfx_snow.h"

const GeoLayout image_friend_Normal_Cap_State_Switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, image_friend_Normal_Cap_DL_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout image_friend_Normal_Cap_State_Switch_opt2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, image_friend_Normal_Cap_DL_mesh_layer_1_mat_override_Metal__METAL__0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout image_friend_Normal_Cap_State_Switch_opt3[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, image_friend_Normal_Cap_DL_mesh_layer_1_mat_override_Metal__METAL__0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout image_friend_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_BILLBOARD_WITH_PARAMS(LAYER_OPAQUE, 0, -8, 0),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 32768),
			GEO_OPEN_NODE(),
				GEO_ASM(10, geo_update_layer_transparency),
				GEO_SWITCH_CASE(2, geo_switch_anim_state),
				GEO_OPEN_NODE(),
					GEO_NODE_START(),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, image_friend_Normal_Cap_DL_mesh_layer_1),
					GEO_CLOSE_NODE(),
					GEO_BRANCH(1, image_friend_Normal_Cap_State_Switch_opt1),
					GEO_BRANCH(1, image_friend_Normal_Cap_State_Switch_opt2),
					GEO_BRANCH(1, image_friend_Normal_Cap_State_Switch_opt3),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 180, 75),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
