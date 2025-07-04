--For whatever reasons there may be, Lethal Lava Land was modified in a way RM2C cannot recreate, so I had to do it manually.

--NEW Models

E_MODEL_LETHAL_PLATFORM = smlua_model_util_get_id("lethalplatform_geo")
COL_LETHAL_PLATFORM = smlua_collision_util_get("lethalplatform_collision")
E_MODEL_LETHAL_RAMP = smlua_model_util_get_id("lethalramp_geo")
COL_LETHAL_RAMP = smlua_collision_util_get("lethalramp_collision")
COL_LLL_OCTAGON = smlua_collision_util_get("rotoct_collision")
COL_VOLCANO = smlua_collision_util_get("volcano_collision")


--For Each Object With Behavior function

function object_drop_to_floor(obj)
    local x = obj.oPosX
    local y = obj.oPosY
    local z = obj.oPosZ

    local floorHeight = find_floor_height(x, y + 200, z)
    obj.oPosY = floorHeight
    obj.oMoveFlags = (obj.oMoveFlags | OBJ_MOVE_ON_GROUND)
end


--New Platforms (Ramp and Flat)

local function lethalplatform_init(o)
o.oCollisionDistance = 9000
obj_set_model_extended(o, E_MODEL_LETHAL_PLATFORM)
o.collisionData = COL_LETHAL_PLATFORM

end

local function lethalplatform_loop(o)

load_object_collision_model()

end


local function lethalramp_init(o)
o.oCollisionDistance = 9000
obj_set_model_extended(o, E_MODEL_LETHAL_RAMP)
o.collisionData = COL_LETHAL_RAMP

end

local function lethalramp_loop(o)

load_object_collision_model()

end

--Rotating/Still Octagon

local function rotoct_init(o)

o.collisionData = COL_LLL_OCTAGON

end

local function stationary_init(o)
o.oCollisionDistance = 9000
o.collisionData = COL_LLL_OCTAGON

end

local function rotoct_loop(o)

load_object_collision_model()

end

--Volcanoes

local function volcanobig_init(o)
o.oCollisionDistance = 9000
o.oDrawingDistance = 9000
o.collisionData = COL_VOLCANO
obj_scale(o, 4)
end

local function volcano_init(o)
o.oCollisionDistance = 9000
o.oDrawingDistance = 9000
o.collisionData = COL_VOLCANO
end


--Bigger Tilting Square

local function tilt_init(o)
    obj_scale(o, 2)
	o.collisionData = gGlobalObjectCollisionData.lll_seg7_collision_inverted_pyramid
end


local function tilt_loop(o)
	bhv_tilting_inverted_pyramid_loop()
	load_object_collision_model()
end

--Hooks (I'm not renaming them too lazy fuck you)

--Flats
Bhv_Custom_0x13005714 = hook_behavior(nil, OBJ_LIST_SURFACE, true, lethalplatform_init, lethalplatform_loop)
Bhv_Custom_0x130057A4 = hook_behavior(nil, OBJ_LIST_SURFACE, true, lethalplatform_init, lethalplatform_loop)
--Ramps
Bhv_Custom_0x130056E4 = hook_behavior(nil, OBJ_LIST_SURFACE, true, lethalramp_init, lethalramp_loop)
Bhv_Custom_0x130057B4 = hook_behavior(nil, OBJ_LIST_SURFACE, true, lethalramp_init, lethalramp_loop)
--That one Platform
hook_behavior(id_bhvLllRotatingHexagonalPlatform, OBJ_LIST_SURFACE, false, rotoct_init, rotoct_loop)
--Stationary Octagon
Bhv_Custom_0x130056FC = hook_behavior(nil, OBJ_LIST_SURFACE, true, stationary_init, rotoct_loop)
Bhv_Custom_0x13005790 = hook_behavior(nil, OBJ_LIST_SURFACE, true, stationary_init, rotoct_loop)
--Tilting Square
Bhv_Custom_0x1300576C = hook_behavior(nil, OBJ_LIST_SURFACE, true, tilt_init, tilt_loop)
--Volcano
Bhv_Custom_0x13005758 = hook_behavior(nil, OBJ_LIST_SURFACE, true, volcanobig_init, rotoct_loop)
Bhv_Custom_0x1300577C = hook_behavior(nil, OBJ_LIST_SURFACE, true, volcano_init, rotoct_loop)

