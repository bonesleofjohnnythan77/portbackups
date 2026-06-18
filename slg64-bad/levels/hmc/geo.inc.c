const GeoLayout hmc_geo_0C000048[] = {
    GEO_CULLING_RADIUS(600),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, hmc_dl_05002E00),
        GEO_SWITCH_CASE(4, geo_switch_anim_state),
        GEO_OPEN_NODE(),
            GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_05003350),
            GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_05003370),
            GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_05003390),
            GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_050033B0),
        GEO_CLOSE_NODE(),
    GEO_CLOSE_NODE(),
    GEO_END(),
};
