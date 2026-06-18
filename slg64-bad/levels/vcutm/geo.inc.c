const GeoLayout vcutm_geo_0C000224[] = {
    GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 150, 70),
    GEO_OPEN_NODE(),
        GEO_SCALE(LAYER_FORCE, 0x00006666),
        GEO_OPEN_NODE(),
            GEO_ASM(0, geo_update_layer_transparency),
            GEO_SWITCH_CASE(2, geo_switch_anim_state),
            GEO_OPEN_NODE(),
                GEO_DISPLAY_LIST(LAYER_OPAQUE, vcutm_dl_0500C1B0),
                GEO_DISPLAY_LIST(LAYER_TRANSPARENT, vcutm_dl_0500C1B0),
            GEO_CLOSE_NODE(),
        GEO_CLOSE_NODE(),
    GEO_CLOSE_NODE(),
    GEO_CLOSE_NODE(),
    GEO_END(),
};


const GeoLayout vcutm_geo_0C000188[] = {
    GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 150, 80),
    GEO_OPEN_NODE(),
        GEO_SCALE(LAYER_FORCE, 0x00004000),
        GEO_OPEN_NODE(),
            GEO_DISPLAY_LIST(LAYER_OPAQUE, vcutm_dl_05006A68),
        GEO_CLOSE_NODE(),
    GEO_CLOSE_NODE(),
    GEO_END(),
};


const GeoLayout vcutm_geo_0C0000D8[] = {
    GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 150, 100),
    GEO_OPEN_NODE(),
        GEO_SCALE(LAYER_FORCE, 0x00004000),
        GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
            GEO_OPEN_NODE(),
                GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, vcutm_dl_05005190),
                GEO_OPEN_NODE(),
                    GEO_ANIMATED_PART(LAYER_OPAQUE, -7, -9, 0, NULL),
                    GEO_OPEN_NODE(),
                        GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, vcutm_dl_05005680),
                    GEO_CLOSE_NODE(),
                    GEO_ANIMATED_PART(LAYER_OPAQUE, 156, -9, 0, NULL),
                    GEO_OPEN_NODE(),
                        GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, vcutm_dl_05005408),
                    GEO_CLOSE_NODE(),
                    GEO_ANIMATED_PART(LAYER_OPAQUE, -3, 17, 0, NULL),
                    GEO_OPEN_NODE(),
                        GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, vcutm_dl_05004EE8),
                    GEO_CLOSE_NODE(),
                GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
        GEO_CLOSE_NODE(),
    GEO_CLOSE_NODE(),
    GEO_CLOSE_NODE(),
    GEO_END(),
};


const GeoLayout vcutm_geo_0C0001B4[] = {
    GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 150, 100),
    GEO_OPEN_NODE(),
        GEO_SCALE(LAYER_FORCE, 0x00004000),
        GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
            GEO_OPEN_NODE(),
                GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, vcutm_dl_050098E8),
                GEO_OPEN_NODE(),
                    GEO_ANIMATED_PART(LAYER_OPAQUE, -141, -546, 218, NULL),
                    GEO_OPEN_NODE(),
                        GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, vcutm_dl_05008CB0),
                    GEO_CLOSE_NODE(),
                GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
        GEO_CLOSE_NODE(),
    GEO_CLOSE_NODE(),
    GEO_CLOSE_NODE(),
    GEO_END(),
};


const GeoLayout vcutm_geo_0C000000[] = {
    GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 150, 100),
    GEO_OPEN_NODE(),
        GEO_SCALE(LAYER_FORCE, 0x00004000),
        GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
            GEO_OPEN_NODE(),
                GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
                GEO_OPEN_NODE(),
                    GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, vcutm_dl_05001F98),
                    GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, vcutm_dl_05001B20),
                    GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, vcutm_dl_05002140),
                GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
            GEO_OPEN_NODE(),
                GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
                GEO_OPEN_NODE(),
                    GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, vcutm_dl_05001D68),
                    GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, vcutm_dl_05001978),
                    GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, vcutm_dl_050022E0),
                GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
        GEO_CLOSE_NODE(),
    GEO_CLOSE_NODE(),
    GEO_CLOSE_NODE(),
    GEO_END(),
};


const GeoLayout vcutm_geo_0C0000C0[] = {
    GEO_CULLING_RADIUS(300),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, vcutm_dl_05002FB0),
    GEO_CLOSE_NODE(),
    GEO_END(),
};


const GeoLayout vcutm_geo_0C000274[] = {
    GEO_CULLING_RADIUS(300),
    GEO_OPEN_NODE(),
        GEO_SHADOW(SHADOW_CIRCLE_9_VERTS, 150, 100),
        GEO_OPEN_NODE(),
            GEO_DISPLAY_LIST(LAYER_OPAQUE, vcutm_dl_0500F7D8),
            GEO_DISPLAY_LIST(LAYER_OPAQUE, vcutm_dl_0500FC28),
            GEO_DISPLAY_LIST(LAYER_ALPHA, vcutm_dl_05010100),
        GEO_CLOSE_NODE(),
    GEO_CLOSE_NODE(),
    GEO_END(),
};


const GeoLayout vcutm_geo_16000720[] = {
    GEO_TRANSLATE_NODE(LAYER_FORCE, 78, 0, 0),
    GEO_OPEN_NODE(),
        GEO_SCALE(LAYER_FORCE, 0x00004000),
        GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, -300, 0, 0, NULL),
            GEO_OPEN_NODE(),
                GEO_OPEN_NODE(),
                    GEO_RENDER_RANGE(-2048, 3500),
                    GEO_OPEN_NODE(),
                        GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, vcutm_dl_03014D40),
                    GEO_CLOSE_NODE(),
                    GEO_RENDER_RANGE(3500, 32767),
                    GEO_OPEN_NODE(),
                        GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, vcutm_dl_03015158),
                    GEO_CLOSE_NODE(),
                GEO_CLOSE_NODE(),
                GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
                GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
            GEO_CLOSE_NODE(),
        GEO_CLOSE_NODE(),
    GEO_CLOSE_NODE(),
    GEO_CLOSE_NODE(),
    GEO_END(),
};


const GeoLayout vcutm_geo_120005B0[] = {
    GEO_CULLING_RADIUS(700),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, vcutm_dl_0701F2E8),
    GEO_CLOSE_NODE(),
    GEO_END(),
};


const GeoLayout vcutm_geo_120005C8[] = {
    GEO_CULLING_RADIUS(600),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, vcutm_dl_0701F5F8),
    GEO_CLOSE_NODE(),
    GEO_END(),
};


const GeoLayout vcutm_geo_120005E0[] = {
    GEO_CULLING_RADIUS(650),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, vcutm_dl_0701F7E8),
    GEO_CLOSE_NODE(),
    GEO_END(),
};


const GeoLayout vcutm_geo_120005F8[] = {
    GEO_CULLING_RADIUS(300),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, vcutm_dl_0701FAB0),
    GEO_CLOSE_NODE(),
    GEO_END(),
};


const GeoLayout vcutm_geo_12000610[] = {
    GEO_CULLING_RADIUS(1000),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, vcutm_dl_0701FD28),
    GEO_CLOSE_NODE(),
    GEO_END(),
};


const GeoLayout vcutm_geo_12000628[] = {
    GEO_CULLING_RADIUS(600),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_ALPHA, vcutm_dl_0701FFE8),
    GEO_CLOSE_NODE(),
    GEO_END(),
};


const GeoLayout vcutm_geo_12000640[] = {
    GEO_CULLING_RADIUS(2300),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, vcutm_dl_070202F0),
    GEO_CLOSE_NODE(),
    GEO_END(),
};


const GeoLayout vcutm_geo_12000658[] = {
    GEO_CULLING_RADIUS(800),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, vcutm_dl_070206F0),
    GEO_CLOSE_NODE(),
    GEO_END(),
};
