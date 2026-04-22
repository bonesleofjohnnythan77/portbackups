
// This is probably wrongly named according to the Bin IDs...
// 0x16000F24
const GeoLayout star_geo[] = {
   GEO_CULLING_RADIUS(300),
   GEO_OPEN_NODE(),
      GEO_SWITCH_CASE(5, geo_switch_anim_state),
      GEO_OPEN_NODE(),
         GEO_DISPLAY_LIST(LAYER_OPAQUE, dirt_seg3_dl_0302C298),
         GEO_DISPLAY_LIST(LAYER_OPAQUE, dirt_seg3_dl_0302C2B8),
         GEO_DISPLAY_LIST(LAYER_OPAQUE, dirt_seg3_dl_0302C2D8),
         GEO_DISPLAY_LIST(LAYER_OPAQUE, dirt_seg3_dl_0302C2F8),
         GEO_DISPLAY_LIST(LAYER_OPAQUE, dirt_seg3_dl_0302C318),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
