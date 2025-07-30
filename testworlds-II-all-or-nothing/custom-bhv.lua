--Stone Steps--

E_MODEL_STONE_STEPS = smlua_model_util_get_id("stone_steps_geo")
COL_STONE_STEPS = smlua_collision_util_get("stone_steps_collision")


function bhv_stone_steps_init(obj)
    obj_set_model_extended(obj, E_MODEL_STONE_STEPS)
    obj.collisionData = COL_STONE_STEPS
end

hook_behavior(id_bhvTowerDoor, OBJ_LIST_SURFACE, false, bhv_stone_steps_init, nil)

--WDW Triangle Replacement--

E_MODEL_WDW_TRIANGLE = smlua_model_util_get_id("wdw_triangle_geo")


--Wooden Platform Overrides

E_MODEL_WOODEN_PLATFORM = smlua_model_util_get_id("wooden_platform_geo")
COL_WOODEN_PLATFORM = smlua_collision_util_get("wooden_platform_collision")


function bhv_wooden_platform_init(obj)
    obj_set_model_extended(obj, E_MODEL_WOODEN_PLATFORM)
    obj.collisionData = COL_WOODEN_PLATFORM
end

function bhv_wooden_platformJRB_init(obj)
    obj_set_model_extended(obj, E_MODEL_WOODEN_PLATFORM)
    obj.collisionData = COL_WOODEN_PLATFORM
end

hook_behavior(id_bhvWdwRectangularFloatingPlatform, OBJ_LIST_SURFACE, false, bhv_wooden_platform_init, nil)
hook_behavior(id_bhvLllSinkingRockBlock, OBJ_LIST_SURFACE, false, bhv_wooden_platformJRB_init, nil)

---@param o Object
function bhv_platspawn_init(o)
    o.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    obj_set_model_extended(o, E_MODEL_WOODEN_PLATFORM)
    o.collisionData = COL_WOODEN_PLATFORM
    o.oCollisionDistance = 1500
end

---@param o Object
function bhv_platspawn_loop(o)
    Func_Custom_0x804061b4(o)
end

---@param o Object
function bhv_platspawn2_loop(o)
    Func_Custom_0x804061b5(o)
end

Bhv_Custom_0x1300002c = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_platspawn_init, bhv_platspawn_loop, "Bhv_Custom_0x1300002c")
Bhv_Custom_0x1300003c = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_platspawn_init, bhv_platspawn2_loop, "Bhv_Custom_0x1300003c")

hook_behavior(id_bhvWdwRectangularFloatingPlatform, OBJ_LIST_SURFACE, false, bhv_wooden_platform_init, nil)
hook_behavior(id_bhvLllSinkingRockBlock, OBJ_LIST_SURFACE, false, bhv_wooden_platformJRB_init, nil)

--Wooden Platform Switch (Borrowed from Invasion of Chuckya)

--Shockwave Generators by Fearl

--Function

---@param o Object
function bhv_rock_init(o)
    o.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    o.header.gfx.skipInViewCheck = true
    network_init_object(o, true, { 'oTimer', 'oPosX', 'oPosY', 'oPosZ' })
end

---@param o Object
function bhv_rock_loop(o)

    p = gMarioStates[0].marioObj
    dp = dist_between_objects(o, p);

    if dp < 1500 then
        if o.oTimer == 55 then
    spawn_non_sync_object(id_bhvBowserShockWave, E_MODEL_BOWSER_WAVE,o.oPosX, o.oPosY, o.oPosZ, nil)
        elseif o.oTimer >= 55 then
    o.oTimer = 0
        end
    end
end

Bhv_Custom_Shockwavegen = hook_behavior(id_bhvMerryGoRoundBooManager, OBJ_LIST_SURFACE, true, bhv_rock_init, bhv_rock_loop, "Bhv_Custom_Shockwavegen")

---@param o Object
function Func_Custom_0x804061b4(o)
    ---@type Object?
    local purpleSwitch = nil

    o.collisionData = COL_WOODEN_PLATFORM

    if o.oAction == 0 then
        cur_obj_disable_rendering()
        cur_obj_become_intangible()
        if not o.oHiddenObjectUnkF4 then
            o.oHiddenObjectUnkF4 = obj_get_first_with_behavior_id(id_bhvFloorSwitchHiddenObjects)
        end
        purpleSwitch = o.oHiddenObjectUnkF4
        if purpleSwitch then
            if purpleSwitch.oAction == 2 then
                o.oAction = 1
                cur_obj_enable_rendering()
                cur_obj_unhide()
            end
        end
    else
        cur_obj_become_tangible()
        if cur_obj_wait_then_blink(360, 20) ~= 0 then
            o.oAction = 0
        end
        load_object_collision_model()
    end
end

---@param o Object
function Func_Custom_0x804061b5(o)
    ---@type Object?
    local purpleSwitch = nil

    o.collisionData = COL_WOODEN_PLATFORM

    if o.oAction == 0 then
        cur_obj_disable_rendering()
        cur_obj_become_intangible()
        if not o.oHiddenObjectUnkF4 then
            o.oHiddenObjectUnkF4 = obj_get_first_with_behavior_id(id_bhvPurpleSwitchHiddenBoxes)
        end
        purpleSwitch = o.oHiddenObjectUnkF4
        if purpleSwitch then
            if purpleSwitch.oAction == 2 then
                o.oAction = 1
                cur_obj_enable_rendering()
                cur_obj_unhide()
            end
        end
    else
        cur_obj_become_tangible()
        if cur_obj_wait_then_blink(360, 20) ~= 0 then
            o.oAction = 0
        end
        load_object_collision_model()
    end
end