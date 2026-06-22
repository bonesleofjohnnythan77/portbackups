-----------------------------
-----Localized Functions-----
-----------------------------

local obj_set_model_extended = obj_set_model_extended
local cur_obj_become_tangible = cur_obj_become_tangible

-------------------
------Helpers------
-------------------

--- @param obj Object
--- @param hitbox ObjectHitbox
function obj_set_hitbox(obj, hitbox)
	if not obj or not hitbox then return end
	-- Sets other hitbox values once
	if (obj.oFlags & OBJ_FLAG_30) == 0 then
		obj.oFlags = obj.oFlags | OBJ_FLAG_30

		obj.oInteractType = hitbox.interactType
		obj.oDamageOrCoinValue = hitbox.damageOrCoinValue
		obj.oHealth = hitbox.health
		obj.oNumLootCoins = hitbox.numLootCoins

		cur_obj_become_tangible()
	end

	-- Set actual hitboxes
	obj.hitboxRadius = obj.header.gfx.scale.x * hitbox.radius
	obj.hitboxHeight = obj.header.gfx.scale.y * hitbox.height
	obj.hurtboxRadius = obj.header.gfx.scale.x * hitbox.hurtboxRadius
	obj.hurtboxHeight = obj.header.gfx.scale.y * hitbox.hurtboxHeight
	obj.hitboxDownOffset = obj.header.gfx.scale.y * hitbox.downOffset
end

-------------------
-----Functions-----
-------------------

local star1_at_level_start = false

hook_event(HOOK_ON_LEVEL_INIT, function()
    local courseIndex = gNetworkPlayers[0].currCourseNum - 1
    local starFlags = save_file_get_star_flags(get_current_save_file_num() - 1, courseIndex)

    star1_at_level_start = (starFlags & (1 << 0)) ~= 0
end)


------ Goomba ------

---@param o Object
local function bhv_star_goomba_loop(o)
    bhv_collect_star_loop()

    if o.oInteractType == INTERACT_BOUNCE_TOP then
        o.oInteractType = INTERACT_STAR_OR_KEY
    end

    if star1_at_level_start then
        obj_set_model_extended(o, E_MODEL_TRANSPARENT_STAR)
    else
        obj_set_model_extended(o, E_MODEL_STAR)
    end
end

id_bhvCustomGoomba = hook_behavior(id_bhvGoomba, OBJ_LIST_LEVEL, false, nil, bhv_star_goomba_loop)


------ Bowser ------

---@param o Object
function bhv_fix_bowser_loop(o)
    if o.oAction == 5 then
        o.oAction = 0
		o.oHealth = 1
    end
end

id_bhvBowser = hook_behavior(id_bhvBowser, OBJ_LIST_GENACTOR, false, nil, bhv_fix_bowser_loop)

------ Butterfly ------

local sButterfly = {
	interactType	  = INTERACT_BOUNCE_TOP,
	downOffset		= 0,
	damageOrCoinValue = 2,
	health			= 0,
	numLootCoins	  = 0,
	radius			= 72,
	height			= 50,
	hurtboxRadius	 = 42,
	hurtboxHeight	 = 40,
}

---@param o Object
function butterfly_init(o)
	obj_set_hitbox(o, sButterfly)
end

---@param o Object
function butterfly_loop(o)

	bhv_butterfly_loop()
	bhv_butterfly_loop()
	bhv_butterfly_loop()
	bhv_butterfly_loop()
	bhv_butterfly_loop()
	bhv_butterfly_loop()
	bhv_butterfly_loop()

	if (o.oInteractStatus & INT_STATUS_INTERACTED) ~= 0 then
		obj_unused_die()
		obj_spawn_yellow_coins(o, 2)
	end
end

id_bhvButterfly = hook_behavior(id_bhvButterfly, OBJ_LIST_GENACTOR, false, butterfly_init, butterfly_loop)

------ Whomp ------

---@param o Object
function bhv_custom_whomp_loop(o)

	if o.oAction == 0 then
        o.oAction = 1
    elseif o.oAction == 3 then
        o.oAction = 4
		cur_obj_init_animation_with_accel_and_sound(1, 0)
	end
end

id_bhvSmallWhomp = hook_behavior(id_bhvSmallWhomp, OBJ_LIST_SURFACE, false, nil, bhv_custom_whomp_loop)

------ Crash ------

local function cointostar()

	local np = gNetworkPlayers[0]
	local m = gMarioStates[0]

	if (gNetworkPlayers[0].currLevelNum == LEVEL_CASTLE and m.action == ACT_STAR_DANCE_NO_EXIT) then 
		m.actionArg = 0
	end

    if (m.playerIndex == 0 and gNetworkPlayers[0].currLevelNum == LEVEL_CASTLE) then
        if (m.action == ACT_STAR_DANCE_EXIT or m.action == ACT_STAR_DANCE_NO_EXIT) and m.actionTimer >= 80 then
            obj_mark_for_deletion(gMarioStates[0].marioObj)
		end
    end

	local stardone = false

    if stardone then return end

    if np.currLevelNum == LEVEL_CASTLE then
        local coin = obj_get_first_with_behavior_id(id_bhvYellowCoin)

        if coin == nil then return end 

        while coin ~= nil do
            local nextcoin = obj_get_next_with_same_behavior_id(coin)

            local x, y, z = coin.oPosX, coin.oPosY, coin.oPosZ

            obj_mark_for_deletion(coin)

            spawn_non_sync_object(
                id_bhvStar,
                E_MODEL_STAR,
                x, y, z,
                function(obj)
                    obj_scale(obj, 2)
                end
            )

            coin = nextcoin
        end

        stardone = true
    end
end

hook_event(HOOK_MARIO_UPDATE, cointostar)

--- Swimming ---

local Speed = 1

hook_event(HOOK_BEFORE_PHYS_STEP, function(m)
    if m.playerIndex ~= 0 then return end

    if (m.action & ACT_FLAG_SWIMMING) ~= 0 then
        if (m.input & INPUT_A_PRESSED) ~= 0 then
            Speed = Speed * 1.2
        end

        m.vel.x = m.vel.x * Speed
        m.vel.y = m.vel.y * (m.action ~= ACT_WATER_PLUNGE and Speed or 1)
        m.vel.z = m.vel.z * Speed
    else
        Speed = 1
    end
end)

local once = true 
hook_event(HOOK_MARIO_UPDATE,
function(m)
    if m.playerIndex ~= 0 then return end
    if once then
        m.numLives = 8
        once = false
    end
end)
