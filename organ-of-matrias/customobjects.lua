--Models & Collision
E_MODEL_BLOCKPLATFORM = smlua_model_util_get_id("block_platform_geo")
COL_BLOCKPLATFORM = smlua_collision_util_get("block_platform_collision")
E_MODEL_HEXPLATFORM = smlua_model_util_get_id("hexagon_platform_geo")
COL_HEXPLATFORM = smlua_collision_util_get("hexagon_platform_collision")
E_MODEL_ORGANBUTTON = smlua_model_util_get_id("organ_button_geo")
COL_ORGANBUTTON = smlua_collision_util_get("organ_button_collision")
E_MODEL_RAMP = smlua_model_util_get_id("ramp_geo")
COL_RAMP = smlua_collision_util_get("ramp_collision")
E_MODEL_STARSWITCH = smlua_model_util_get_id("star_coin_switch_geo")
COL_STARSWITCH = smlua_collision_util_get("star_coin_switch_collision")

--Custom Speed Powerup (Special Thanks to Sunk, Ran and f_bell)--

---@param m MarioState

local function bhv_speed_mario_loop(o)
	--Delete after 10 seconds

    if o.oTimer > 300 then
        obj_mark_for_deletion(o)
    end
end

-- Detect when Mario interacts for damage
hook_event(HOOK_ON_INTERACT, function(mstate, obj, interactionType)
    -- Only run if the speed behavior exists
    if not obj_get_first_with_behavior_id(id_bhvSpeedMario) then return end

    -- If Mario is damaged by any attack interaction
    if interactionType == INTERACT_ATTACK or interactionType == INTERACT_BOUNCE_TOP or interactionType == INTERACT_HIT_FROM_BELOW or interactionType == INTERACT_DAMAGE then
        -- Delete the speed behavior
        local speedObj = obj_get_first_with_behavior_id(id_bhvSpeedMario)
        if speedObj then
            obj_mark_for_deletion(speedObj)
        end
    end
end)

id_bhvSpeedMario = hook_behavior(nil, OBJ_LIST_DEFAULT, true, nil, bhv_speed_mario_loop)

local function mario_update(m)
    if obj_get_first_with_behavior_id(id_bhvSpeedMario) then
        execute_mario_action(m.marioObj)
    end
end
hook_event(HOOK_MARIO_UPDATE, mario_update)


--Block Platforms

local function block_platform_init(o)
	o.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE | OBJ_FLAG_COMPUTE_DIST_TO_MARIO
	o.oDrawingDistance = 19455
	cur_obj_scale(0.32)
	
    obj_set_model_extended(o, E_MODEL_BLOCKPLATFORM)
	o.collisionData = COL_BLOCKPLATFORM
	

end


local function collisionload(o)

	load_object_collision_model()
	
end

--(Tetrisworld one replaces MIPS Rabbit)


function mipsblock_init(o)

    o.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE | OBJ_FLAG_COMPUTE_DIST_TO_MARIO
    cur_obj_scale(0.32)
	obj_set_model_extended(o, E_MODEL_BLOCKPLATFORM)
    o.collisionData = COL_BLOCKPLATFORM
	bhv_ssl_moving_pyramid_wall_init()
	network_init_object(o, false, nil)
	
end


function mipsblock_loop(o)

	o.oVelY = -5.0
    o.oPosY = o.oPosY + o.oVelY

    load_object_collision_model()
	
end

--Tetrisworld Stars

function tetris_star_init(o)

 o.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE | OBJ_FLAG_COMPUTE_DIST_TO_MARIO
 obj_set_model_extended(o, E_MODEL_STAR)
 bhv_init_room()
 bhv_collect_star_init()
 network_init_object(o, false, nil)

end

function tetris_star_loop(o)

	bhv_collect_star_loop()
    
	o.oVelY = -5.0
    o.oPosY = o.oPosY + o.oVelY

end

--Shock Pad
function bhv_shock_pad(o)
    obj_scale(o, 2.55) -- SCALE(0, 255) → scale factor is 255 / 100 = 2.55
    o.collisionData = gGlobalObjectCollisionData.blue_coin_switch_seg8_collision_08000E98
end

--Hex Platforms

local function hex_platform_init(o)
	o.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE | OBJ_FLAG_COMPUTE_DIST_TO_MARIO | OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW
    obj_set_model_extended(o, E_MODEL_HEXPLATFORM)
	o.collisionData = COL_HEXPLATFORM

	o.oDrawingDistance = 19455

end

local function hex_platformelevate_init(o)
	o.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE | OBJ_FLAG_COMPUTE_DIST_TO_MARIO
    obj_set_model_extended(o, E_MODEL_HEXPLATFORM)
	o.collisionData = COL_HEXPLATFORM

end

local function hex_platformelevate_loop(obj)

	bhv_wdw_express_elevator_loop()  -- First native behavior
    load_object_collision_model()    -- Second native behavior

end

function hex_plant_init(o)

	network_init_object(o, false, nil)
    o.oFlags = o.oFlags | (OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE | OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW | OBJ_FLAG_COMPUTE_DIST_TO_MARIO)
	obj_set_model_extended(o, E_MODEL_HEXPLATFORM)
    o.oDrawingDistance = 19455
	o.collisionData = COL_HEXPLATFORM
	
end

function hex_plant_loop(o)
    bhv_lll_wood_piece_loop()
    load_object_collision_model()
end

--Organ Button

local function organ_button(o)
	o.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE | OBJ_FLAG_COMPUTE_DIST_TO_MARIO
    obj_set_model_extended(o, E_MODEL_ORGANBUTTON)
	o.collisionData = COL_ORGANBUTTON

	o.oDrawingDistance = 19455

end

--Ramp

local function ramp_init(o)

    obj_set_model_extended(o, E_MODEL_RAMP)
	o.collisionData = COL_RAMP

	o.oDrawingDistance = 19455

end

--Banana is just the Bee 

function bhv_small_bee_init(o)
    network_init_object(o, false, nil)
end

--Shockwave Generator


function bhv_shock_init(o)
    o.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    o.header.gfx.skipInViewCheck = true
    network_init_object(o, true, { 'oTimer', 'oPosX', 'oPosY', 'oPosZ' })
end


function bhv_shock_loop(o)

    p = gMarioStates[0].marioObj
    dp = dist_between_objects(o, p);

    if dp < 1000 then
        if o.oTimer == 55 then
    spawn_non_sync_object(id_bhvBowserShockWave, E_MODEL_BOWSER_WAVE,o.oPosX, o.oPosY, o.oPosZ, nil)
        elseif o.oTimer >= 55 then
    o.oTimer = 0
        end
    end
end




--Custom Coin Switch

local function coin_switch_init(o)

	
    obj_set_model_extended(o, E_MODEL_STARSWITCH)
	o.collisionData = COL_STARSWITCH

end

--Goomba Scuttlebug Spawner


function bhv_goomba_spawn_init(o)
    -- Only initialize on server
    if not network_is_server() then return end

    -- Initialize and sync fields
    if not _G.network_init_object(o, true, {
        'oAction', 'oTimer', 'oScuttlebugSpawnerUnkF4', 'oScuttlebugSpawnerUnk88'
    }) then
        -- Failed to initialize sync
        return
    end
end


function bhv_goomba_spawn_loop(o)
    if not network_is_server() then return end

    local marioState = nearest_mario_state_to_object(o)
    if marioState and marioState.playerIndex ~= 0 then return end

    local player = marioState and marioState.marioObj or nil
    local distanceToPlayer = player and dist_between_objects(o, player) or 10000

    if o.oAction == 0 then
        if o.oTimer > 30 and distanceToPlayer > 500 and distanceToPlayer < 1500 then
            cur_obj_play_sound_2(SOUND_OBJ2_SCUTTLEBUG_ALERT)

            -- Compute yaw to face the player
            local yaw = 0
            if player then
                local dx = player.oPosX - o.oPosX
                local dz = player.oPosZ - o.oPosZ
                yaw = atan2s(dz, dx)
            end

            -- Spawn Scuttlebug (or Goomba)
            local scuttlebug = _G.spawn_sync_object(
                id_bhvGoomba,
                E_MODEL_GOOMBA,
                o.oPosX, o.oPosY, o.oPosZ,
                ---@param obj Object
                function(obj)
                    obj.oScuttlebugUnkF4 = o.oScuttlebugSpawnerUnkF4
                    obj.oForwardVel = 30.0
                    obj.oVelY = 80.0
                    obj.oMoveAngleYaw = yaw
                    obj.oFaceAngleYaw = yaw
                    obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
                    _G.network_init_object(obj, true, {
                        'oScuttlebugUnkF4', 'oForwardVel', 'oVelY', 'oMoveAngleYaw', 'oFaceAngleYaw', 'oFlags'
                    })
                end
            )

            if scuttlebug then
                -- If the Scuttlebug is successfully spawned, update the spawner state
                o.oAction = 1
                o.oScuttlebugSpawnerUnkF4 = 1
                _G.network_send_object(o, false)

            end
        end
    end

    -- Check if the reset flag (oScuttlebugSpawnerUnk88) is set, and reset the spawner
    if o.oScuttlebugSpawnerUnk88 ~= 0 then

        -- Reset the spawner state
        o.oScuttlebugSpawnerUnk88 = 0
        o.oAction = 0
        _G.network_send_object(o, false)
    end
end

--Hidden Objects

function bhv_platspawn_init(o)
    o.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    obj_set_model_extended(o, E_MODEL_HEXPLATFORM)
    o.collisionData = COL_HEXPLATFORM
    o.oCollisionDistance = 1500
end

function bhv_platspawn2_init(o)
    o.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    obj_set_model_extended(o, E_MODEL_BLOCKPLATFORM)
    o.collisionData = COL_BLOCKPLATFORM
    o.oCollisionDistance = 1500
	obj_scale(o, 0.16)
end

---@param o Object
function bhv_platspawn_loop(o)
    Func_Custom_0x804061b4(o)
end

---@param o Object
function bhv_platspawn2_loop(o)
    Func_Custom_0x804061b5(o)
end

---@param o Object
function Func_Custom_0x804061b4(o)
    ---@type Object?
    local purpleSwitch = nil

    o.collisionData = COL_HEXPLATFORM

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

    o.collisionData = COL_BLOCKPLATFORM

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

--Hooks
bhv_BlockPlatform = hook_behavior(id_bhvSslMovingPyramidWall, OBJ_LIST_SURFACE, false, block_platform_init, collisionload, "bhvBlockPlatform")
bhv_BlockMipsPlatform = hook_behavior(id_bhvPyramidElevator, OBJ_LIST_SURFACE, true, mipsblock_init, mipsblock_loop, "bhvBlockMipsPlatform")

bhv_HexPlatform = hook_behavior(id_bhvUnusedPoundablePlatform, OBJ_LIST_SURFACE, false, hex_platform_init, collisionload, "bhvPoundableHexPlatform")
bhv_HexPlatformRotate = hook_behavior(id_bhvLllRotatingHexagonalPlatform, OBJ_LIST_SURFACE, false, hex_platform_init, collisionload, "bhvRotatingHexPlatform")
bhv_HexPlatformElevate = hook_behavior(id_bhvFirePiranhaPlant, OBJ_LIST_SURFACE, true, hex_platformelevate_init, hex_platformelevate_loop, "bhvElevatorHexPlatform")
bhv_HexPlatformPlant = hook_behavior(id_bhvPiranhaPlant, OBJ_LIST_SURFACE, true, hex_plant_init, hex_plant_loop, "bhvPlantReplacementHexPlatform")

bhv_OrganButton = hook_behavior(id_bhvTTCMovingBar, OBJ_LIST_SURFACE, false, organ_button, collisionload, "bhvOrganButton")
bhv_Ramp = hook_behavior(id_bhvSquishablePlatform, OBJ_LIST_SURFACE, false, ramp_init, collisionload, "bhvRamp")
bhv_GoombaSpawner = hook_behavior(id_bhvScuttlebugSpawn, OBJ_LIST_SURFACE, true, bhv_goomba_spawn_init, bhv_goomba_spawn_loop, "bhvGoombaSpawn")
bhv_StarSwitch = hook_behavior(id_bhvBlueCoinSwitch, OBJ_LIST_SURFACE, false, coin_switch_init, collisionload, "bhvStarSwitch")
bhv_TetrisStar = hook_behavior(id_bhvSnowmansBottom, OBJ_LIST_LEVEL, true, tetris_star_init, tetris_star_loop, "bhvTetrisStar")

Bhv_Custom_Shockwavegen = hook_behavior(id_bhvMerryGoRoundBooManager, OBJ_LIST_SURFACE, true, bhv_shock_init, bhv_shock_loop, "Bhv_Custom_Shockwavegen")
Bhv_Custom_Shockpad = hook_behavior(id_bhvLllHexagonalMesh, OBJ_LIST_SURFACE, false, bhv_shock_pad, collisionload, "bhvShockPad")

Bhv_HexHidden = hook_behavior(id_bhvHiddenObject, OBJ_LIST_SURFACE, true, bhv_platspawn_init, bhv_platspawn_loop, "Bhv_Custom_0x1300002c")
Bhv_SmallerblockHidden = hook_behavior(id_bhvPoleGrabbing, OBJ_LIST_SURFACE, true, bhv_platspawn2_init, bhv_platspawn2_loop, "Bhv_Custom_0x1300003c")