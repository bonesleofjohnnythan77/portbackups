--Glover Balls--
E_MODEL_GREY_BALL = smlua_model_util_get_id("greyball_geo")
E_MODEL_BEACH_BALL = smlua_model_util_get_id("beachball_geo")
E_MODEL_STRIPE_BALL = smlua_model_util_get_id("stripeball_geo")
E_MODEL_BOWLOGLOVER_BALL = smlua_model_util_get_id("bowlogloverball_geo")
E_MODEL_BTATOP = smlua_model_util_get_id("btatop_geo")
E_MODEL_BTABASE = smlua_model_util_get_id("btabase_geo")

E_MODEL_EGGCOLOR1 = smlua_model_util_get_id("eggcolor_1_geo")
E_MODEL_EGGCOLOR2 = smlua_model_util_get_id("eggcolor_2_geo")
E_MODEL_EGGCOLOR3 = smlua_model_util_get_id("eggcolor_3_geo")
E_MODEL_EGGCOLOR4 = smlua_model_util_get_id("eggcolor_4_geo")

--Collisions (yes they came with them)--
COL_GREY_BALL = smlua_collision_util_get("greyball_collision")
COL_BEACH_BALL = smlua_collision_util_get("beachball_collision")
COL_STRIPE_BALL = smlua_collision_util_get("stripeball_collision")
COL_BOWLOGLOVER_BALL = smlua_collision_util_get("bowlogloverball_collision")
COL_BTATOP = smlua_collision_util_get("btatop_collision")
COL_BTABASE = smlua_collision_util_get("btabase_collision")

local function for_each_object_with_behavior(behavior, func) -- by isaac
    local o = obj_get_first_with_behavior_id(behavior)
    while o do
        func(o)
        o = obj_get_next_with_same_behavior_id(o)
    end
end

---@param parent Object
---@param model ModelExtendedId
---@param behaviorId BehaviorId
local function spawn_object(parent, model, behaviorId)
    local obj = spawn_non_sync_object(behaviorId, model, 0, 0, 0, nil)
    if not obj then return nil end

    obj_copy_pos_and_angle(obj, parent)
    return obj
end

--Grey Ball

local function rotatinggrey_init(o)
	o.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    obj_set_model_extended(o, E_MODEL_GREY_BALL)
	o.collisionData = COL_GREY_BALL
end

local function rotatinggrey_loop(o)
	o.oFaceAngleYaw = o.oFaceAngleYaw + 0x240
end

--Beach Ball

local function rotatingbeach_init(o)
	o.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    obj_set_model_extended(o, E_MODEL_BEACH_BALL)
	o.collisionData = COL_BEACH_BALL
end

local function rotatingbeach_loop(o)
	o.oFaceAngleYaw = o.oFaceAngleYaw + 0x220
end

--Striped Ball

local function rotatingstripe_init(o)
	o.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    obj_set_model_extended(o, E_MODEL_STRIPE_BALL)
	o.collisionData = COL_STRIPE_BALL
end

--Reuses the BeachBall one cause same speed

--Bowling Ball

local function rotatingbowlo_init(o)
	o.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    obj_set_model_extended(o, E_MODEL_BOWLOGLOVER_BALL)
	o.collisionData = COL_BOWLOGLOVER_BALL
end

local function rotatingbowlo_loop(o)
	o.oFaceAngleYaw = o.oFaceAngleYaw + 0x230
end

--Smaller Pipes

local function pipe_scale(obj)
    obj_scale(obj, 0.64)
end

------ STAR ------

local egg_models = {
    E_MODEL_EGGCOLOR1,
    E_MODEL_EGGCOLOR2,
    E_MODEL_EGGCOLOR3,
    E_MODEL_EGGCOLOR4
}

local egg_model_index = 0

local function starmodel_init(o)
    egg_model_index = egg_model_index + 1
    local model_id = egg_models[(egg_model_index - 1) % #egg_models + 1]
    obj_set_model_extended(o, model_id)
    obj_scale(o, 0.3)

end

hook_behavior(id_bhvStar, OBJ_LIST_LEVEL, false, starmodel_init, nil)

------ BEYTAH ------

local function btabase_init(o)
	o.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    obj_set_model_extended(o, E_MODEL_BTABASE)
	o.collisionData = COL_BTABASE
    o.oPosY = o.oPosY - 150
end

local function btabase_loop()
    load_object_collision_model()
end

id_bhvBetaBase = hook_behavior(nil, OBJ_LIST_SURFACE, true, btabase_init, btabase_loop, "bhvBetaBase")

---@param o Object
function bta_init(o)
    obj_set_model_extended(o, E_MODEL_BTATOP)
    o.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    o.header.gfx.skipInViewCheck = true
    o.collisionData = COL_BTATOP
    o.oCollisionDistance = 1500
    spawn_object(o, E_MODEL_NONE, id_bhvBetaBase)
    o.oHomeY = o.oPosY
    end

local bta_spd = 60
local BTA_ACT_IDLE = 0
local BTA_ACT_BOUNCE = 1


---@param o Object
function bta_loop(o)
    load_object_collision_model()

    local m = gMarioStates[0]

    if o.oAction == BTA_ACT_IDLE and cur_obj_is_mario_on_platform() == 1 then
        set_mario_action(m, ACT_TRIPLE_JUMP, 0)
        m.vel.y = bta_spd
        o.oAction = BTA_ACT_BOUNCE
        o.oTimer = 0
        o.oBounciness = -60
        play_sound(SOUND_ACTION_BOUNCE_OFF_OBJECT, m.marioObj.header.gfx.cameraToObject)
    end

    if o.oAction == BTA_ACT_BOUNCE then
        o.oBounciness = o.oBounciness + 5
        local targetY = o.oHomeY + o.oBounciness
        o.oPosY = approach_f32_asymptotic(o.oPosY, targetY, 0.3)

        if o.oBounciness >= 0 and math.abs(o.oPosY - o.oHomeY) < 2.5 then
            o.oPosY = o.oHomeY
            o.oAction = BTA_ACT_IDLE
            o.oBounciness = 0
        end
    end
end

hook_behavior(id_bhvBetaTrampolineTop, OBJ_LIST_SURFACE, true, bta_init, bta_loop, "bhvBetaTrampolineTop")

--Hooks

id_bhvGreyBall = hook_behavior(nil, OBJ_LIST_GENACTOR, true, rotatinggrey_init, rotatinggrey_loop)
id_bhvBeachBall = hook_behavior(nil, OBJ_LIST_GENACTOR, true, rotatingbeach_init, rotatingbeach_loop)
id_bhvStripeBall = hook_behavior(nil, OBJ_LIST_GENACTOR, true, rotatingstripe_init, rotatingbeach_loop)
id_bhvBowloGloverBall = hook_behavior(nil, OBJ_LIST_GENACTOR, true, rotatingbowlo_init, rotatingbowlo_loop)
hook_event(HOOK_UPDATE, function()
    for_each_object_with_behavior(id_bhvWarpPipe, pipe_scale)
end)