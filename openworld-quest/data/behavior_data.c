const BehaviorScript bhvOpenWorldWall[] = {
    BEGIN(OBJ_LIST_SURFACE),
    ID(id_bhvNewId),
    OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE),
    LOAD_COLLISION_DATA(metal_box_seg8_collision_08024C28),
    SET_FLOAT(oCollisionDistance, 4000),
	SCALE(0,121),
    BEGIN_LOOP(),
        CALL_NATIVE(bhv_custom_star_door_wall_loop),
        CALL_NATIVE(load_object_collision_model),
    END_LOOP(),
};


