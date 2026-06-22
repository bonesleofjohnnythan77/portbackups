E_MODEL_8MB_BOO = smlua_model_util_get_id("8mb_boo_geo")

local function for_each_object_with_behavior(behavior, func) -- by isaac
    local o = obj_get_first_with_behavior_id(behavior)
    while o do
        func(o)
        o = obj_get_next_with_same_behavior_id(o)
    end
end

local function set_boo_model(obj)
    obj_set_model_extended(obj, E_MODEL_8MB_BOO)
end

hook_event(HOOK_UPDATE, function()
    for_each_object_with_behavior(id_bhvBoo, set_boo_model)
    for_each_object_with_behavior(id_bhvBalconyBigBoo, set_boo_model)
end)