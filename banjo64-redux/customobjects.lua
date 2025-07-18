--Model Definitions
E_MODEL_BANJO_KITCHEN = smlua_model_util_get_id("banjokitchen_geo") 
E_MODEL_WARP_PAD = smlua_model_util_get_id("warp_pad_geo") 
E_MODEL_US_FLAG = smlua_model_util_get_id("flag_us_geo") 
E_MODEL_SWEDEN_FLAG = smlua_model_util_get_id("flag_sweden_geo") 
E_MODEL_GERMANY_FLAG = smlua_model_util_get_id("flag_germany_geo") 
E_MODEL_WHITE_FLAG = smlua_model_util_get_id("flag_white_geo") 
E_MODEL_MUMBO_DOOR = smlua_model_util_get_id("mumbodoor_geo") 
E_MODEL_WOODEN_DOOR = smlua_model_util_get_id("woodendoor_geo")
E_MODEL_CCW_WINDOW =  smlua_model_util_get_id("ccw_window_geo")
FWOOSHPART = smlua_model_util_get_id("fwoosh_geo") 

--Collision Data
COL_WARP_PAD = smlua_collision_util_get("warp_pad_collision")
SIGNCOL = smlua_collision_util_get("col_wooden_signpost_geo_0x302dd80")
COL_MUMBO_DOOR = smlua_collision_util_get("mumbodoor_collision") 
COL_WOODEN_DOOR = smlua_collision_util_get("woodendoor_collision") 
COL_CCW_WINDOW =  smlua_collision_util_get("ccw_window_collision")


--Thing to make jiggies disappear

local function star_is_collected(starId)
    local gCurrCourseNum = gNetworkPlayers[0].currCourseNum
    local starflags = save_file_get_star_flags(get_current_save_file_num() - 1, gCurrCourseNum - 1)

    if starflags & (1 << starId) ~= 0 then
        return true
    end
    return false
end

--KILL THE SIGN KILLITKILLIT KiLL

function get_star_count()
    return save_file_get_total_star_count(get_current_save_file_num() - 1, COURSE_MIN - 1, COURSE_MAX - 1)
end

function diesign_init(o)
	o.collisionData = SIGNCOL
end

function diesign_loop(o)
load_object_collision_model()
	if get_star_count() >= 1 then
        obj_mark_for_deletion(o)
    end
end


hook_behavior(id_bhvSignOnWall, OBJ_LIST_SURFACE, false, diesign_init, diesign_loop)

--Mumbo's Mountain Door
function mumbodoor_init(o)

	obj_set_model_extended(o, E_MODEL_MUMBO_DOOR)
	o.collisionData = COL_MUMBO_DOOR
	
end

function mumbodoor_loop(o)

	load_object_collision_model()
	if get_star_count() >= 1 then
        obj_mark_for_deletion(o)
    end
	
end

bhvMumboDoor = hook_behavior(nil, OBJ_LIST_SURFACE, false, mumbodoor_init, mumbodoor_loop)

--Wooden Door that does NOTHING

function woodendoor_init(o)

	obj_set_model_extended(o, E_MODEL_WOODEN_DOOR)
	o.collisionData = COL_WOODEN_DOOR
	
end

function woodendoor_loop(o)

load_object_collision_model()
	
end

--The one that DIES after 10 jiggies

function woodendoorDEATH_loop(o)

load_object_collision_model()
	if get_star_count() >= 10 then
        obj_mark_for_deletion(o)
    end
	
end

bhvWoodenDoor = hook_behavior(nil, OBJ_LIST_SURFACE, false, woodendoor_init, woodendoor_loop)
bhvWoodenDoorDisappearsAt10Jiggies = hook_behavior(nil, OBJ_LIST_SURFACE, false, woodendoor_init, woodendoorDEATH_loop)

--Click Clock Wood Windows

function ccwindow_init(o)

	obj_set_model_extended(o, E_MODEL_CCW_WINDOW)
	o.collisionData = COL_CCW_WINDOW
	
end



function ccwindow_loop(o)

load_object_collision_model()
	
end

bhvCCWWindow = hook_behavior(id_bhvLllHexagonalMesh, OBJ_LIST_SURFACE, true, ccwindow_init, ccwindow_loop)



--- @param o Object


local function bhv_jiggy_loop(o)
if star_is_collected((o.oBehParams>>24)&0xff) then
    obj_mark_for_deletion(o)
end
end

id_bhvJiggy = hook_behavior(id_bhvStar, OBJ_LIST_LEVEL, false, nil, bhv_jiggy_loop, "bhvStar")
id_bhvRedsJiggy = hook_behavior(id_bhvHiddenRedCoinStar, OBJ_LIST_LEVEL, false, nil, bhv_jiggy_loop, "bhvHiddenRedCoinStar")
id_bhvSpawnedJiggy = hook_behavior(id_bhvSpawnedStar, OBJ_LIST_LEVEL, false, nil, bhv_jiggy_loop, "bhvStar")

--Function to Unbillboard Trees

hook_behavior(id_bhvTree, OBJ_LIST_POLELIKE, true, function(o)
    o.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    o.oInteractType = INTERACT_POLE
    o.hitboxRadius = 80
    o.hitboxHeight = 500
    o.oIntangibleTimer = 0
end, function(o) bhv_pole_base_loop() end, "id_bhvTree")


--Warp Pads (Just a fading warp with a model)

function warp_pad_init(o)

obj_set_model_extended(o, E_MODEL_WARP_PAD)
	o.collisionData = COL_WARP_PAD
	o.oInteractType = INTERACT_WARP
    o.oInteractionSubtype = INT_SUBTYPE_FADING_WARP
    o.oIntangibleTimer = 0
    o.hitboxHeight = 50
    o.hitboxRadius = 70
end

function warp_pad_loop(o)
load_object_collision_model()
end

bhvWarpPad = hook_behavior(nil, OBJ_LIST_SURFACE, true, warp_pad_init, warp_pad_loop, "bhvWarpPad")

