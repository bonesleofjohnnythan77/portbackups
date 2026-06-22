COL_CHECKER_PLATFORM = smlua_collision_util_get("checkerboard_platform_seg8_collision_0800D710")

--Too Many Checkerboards--

function bhv_spinnerchecker_init(obj)
    obj.collisionData = COL_CHECKER_PLATFORM
end

hook_behavior(id_bhvTTCSpinner, OBJ_LIST_SURFACE, false, bhv_spinnerchecker_init, nil)

function bhv_octachecker_init(obj)
	obj.oFlags = OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
	bhv_rotating_octagonal_plat_init()
	obj.collisionData = COL_CHECKER_PLATFORM
end

function bhv_octachecker_loop(obj)
	bhv_rotating_octagonal_plat_loop()
	load_object_collision_model()
end

hook_behavior(id_bhvOctagonalPlatformRotating, OBJ_LIST_SURFACE, true, bhv_octachecker_init, bhv_octachecker_loop)

function bhv_tiltchecker_init(obj)
    obj.collisionData = COL_CHECKER_PLATFORM
end

hook_behavior(id_bhvLllTiltingInvertedPyramid, OBJ_LIST_SURFACE, false, bhv_tiltchecker_init, nil)

function bhv_keychecker_init(obj)
    obj.collisionData = COL_CHECKER_PLATFORM
end

hook_behavior(id_bhvTTCElevator, OBJ_LIST_SURFACE, false, bhv_tiltchecker_init, nil)