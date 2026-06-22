local ACT_REACHOUT_POCKET_WAH = allocate_mario_action(ACT_GROUP_STATIONARY)
local ACT_WAVING_WAH = allocate_mario_action(ACT_GROUP_STATIONARY)

local function reachout_pocket_wah(m)
    set_character_anim_with_accel(m, CHAR_ANIM_REACH_POCKET, 65536)
end
local function waving_wah(m)
    set_character_anim_with_accel(m, CHAR_ANIM_CREDITS_WAVING, 65536)
    m.marioObj.header.gfx.pos.y = m.pos.y + 60

    local idx = network_global_index_from_local(m.playerIndex)
    local d = 70
    if idx < 8 then
        m.marioObj.header.gfx.pos.x = m.pos.x - (coss(m.faceAngle.y) * (idx * d))
        m.marioObj.header.gfx.pos.z = m.pos.z + (sins(m.faceAngle.y) * (idx * d))
    else
        m.marioObj.header.gfx.pos.x = m.pos.x + (coss(m.faceAngle.y) * ((idx-8+1) * d))
        m.marioObj.header.gfx.pos.z = m.pos.z - (sins(m.faceAngle.y) * ((idx-8+1) * d))
    end
end

hook_mario_action(ACT_REACHOUT_POCKET_WAH, reachout_pocket_wah)
hook_mario_action(ACT_WAVING_WAH, waving_wah)
-- Cutscene state
local currCutsceneState = 0
local currCutsceneTimerTrig = false
local currCutsceneTimer = 0
local allowDialog = true

local function handle_dialog(id)
    if allowDialog then
        create_dialog_box(id)
    end
    return get_dialog_box_state()
end

local function cutscene_castle_grounds(m)
    if currCutsceneState == 0 then
        -- Camera position
        gLakituState.goalPos.x = -1780
        gLakituState.goalPos.y = 283
        gLakituState.goalPos.z = -1648

        if currCutsceneTimerTrig then
            currCutsceneTimer = currCutsceneTimer + 1
        end

        if handle_dialog(0) == 3 then
            allowDialog = false
            currCutsceneTimerTrig = true
        end

        if currCutsceneTimer == 14 then
            m.faceAngle.y = m.faceAngle.y + 32768
        elseif currCutsceneTimer == 17 then
            set_mario_action(m, ACT_JUMP_KICK, 0)
        elseif currCutsceneTimer > 72 then -- 30 * 2.4
            currCutsceneState = 1
            currCutsceneTimer = 0
            currCutsceneTimerTrig = false
            allowDialog = true
        end
    elseif currCutsceneState == 1 then
        -- Camera position
        gLakituState.goalPos.x = -1780
        gLakituState.goalPos.y = approach_f32_symmetric(gLakituState.goalPos.y, -43, 10)
        gLakituState.goalPos.z = approach_f32_symmetric(gLakituState.goalPos.z, -4481, 80)

        if currCutsceneTimerTrig then
            currCutsceneTimer = currCutsceneTimer + 1
        end

        if handle_dialog(15) == 3 then
            allowDialog = false
            currCutsceneTimerTrig = true
        end

        if currCutsceneTimer == 10 then
            m.action = ACT_REACHOUT_POCKET_WAH
        elseif currCutsceneTimer == 12 then
            play_character_sound(m, CHAR_SOUND_MAMA_MIA)
        elseif currCutsceneTimer == 90 then
            play_transition(WARP_TRANSITION_FADE_INTO_CIRCLE, 23, 0, 0, 0)
        elseif currCutsceneTimer == 113 then
            warp_to_level(LEVEL_CASTLE, 1, 0)
        end
    end
end

local function cutscene_castle_courtyard(m)
    Customers = customToID[gGlobalSyncTable.CustomersID]
    m.action = ACT_WAVING_WAH
    if currCutsceneState == 0 then
        -- Camera position
        gLakituState.goalPos.x = -2684
        gLakituState.goalPos.y = 2295
        gLakituState.goalPos.z = 5377

        if gGlobalSyncTable.gameState ~= 3 then
            currCutsceneTimer = currCutsceneTimer + 1

            if currCutsceneTimer > 45 then
                currCutsceneState = currCutsceneState + 1
                currCutsceneTimer = 0
            end
        else
            if handle_dialog(29) == 3 then
                allowDialog = false
                currCutsceneTimerTrig = true
            end
            if currCutsceneTimerTrig then
                currCutsceneTimer = currCutsceneTimer + 1
            end

            if currCutsceneTimer > 45 then
                currCutsceneState = currCutsceneState + 1
                currCutsceneTimerTrig = false
                allowDialog = true
                currCutsceneTimer = 0
                gGlobalSyncTable.gameState = 2
            end
        end
    elseif currCutsceneState == 1 then
        gLakituState.goalPos.x = approach_f32_symmetric(gLakituState.goalPos.x, -9035, 80)
        gLakituState.goalPos.y = approach_f32_symmetric(gLakituState.goalPos.y, -370, 45)
        gLakituState.goalPos.z = approach_f32_symmetric(gLakituState.goalPos.z, 11314, 75)
        currCutsceneTimer = currCutsceneTimer + 1

        if currCutsceneTimer > 95 + 20 then
            if gGlobalSyncTable.gameState == 2 then
                currCutsceneState = currCutsceneState + 1
                currCutsceneTimer = 0
            else
                if handle_dialog(8) == 3 then
                    currCutsceneState = currCutsceneState + 1
                    currCutsceneTimer = 0
                end
            end
        end
    elseif currCutsceneState == 2 then
        gLakituState.goalPos.x = -9035
        gLakituState.goalPos.y = -370
        gLakituState.goalPos.z = 11314
        gLakituState.goalFocus.x = approach_f32_symmetric(gLakituState.goalFocus.x, -11900, 35)

        gLakituState.goalFocus.y = -1000

        currCutsceneTimer = currCutsceneTimer + 1

        if currCutsceneTimer > 95 + 20 then
            currCutsceneState = currCutsceneState + 1
            currCutsceneTimer = 0
        end
    elseif currCutsceneState == 3 then
        gLakituState.goalFocus.x = -9530
        gLakituState.goalFocus.y = -500
        gLakituState.goalPos.x = approach_f32_symmetric(gLakituState.goalPos.x, -8462, 80)
        gLakituState.goalPos.y = approach_f32_symmetric(gLakituState.goalPos.y, -329, 50)
        gLakituState.goalPos.z = approach_f32_symmetric(gLakituState.goalPos.z, 11561, 75)
        if handle_dialog(Customers[gGlobalSyncTable.currentCustomer].dialog) == 3 then
            ClearIngredients()
            gGlobalSyncTable.gameState = 1
            gGlobalSyncTable.tacoLevel = Customers[gGlobalSyncTable.currentCustomer].lvl
            currCutsceneState = 0
            currCutsceneTimerTrig = false
            currCutsceneTimer = 0
            allowDialog = true
            if gGlobalSyncTable.endlessMode then
                gGlobalSyncTable.endlessModeTimer = 25 * 60

                local lvl = Customers[gGlobalSyncTable.currentCustomer].lvl

                if lvl == LEVEL_BITDW or lvl == LEVEL_BITFS then gGlobalSyncTable.endlessModeTimer = 25 * 25 end
                if lvl == LEVEL_BITS then gGlobalSyncTable.endlessModeTimer = 45 * 25 end
                if lvl == LEVEL_WMOTR then gGlobalSyncTable.endlessModeTimer = 85 * 25 end
            end
        end
    end
end

---@param m MarioState
local function init_cutscenes(m)
    if m.playerIndex ~= 0 then return end

    local level = gNetworkPlayers[0].currLevelNum
    if level == LEVEL_CASTLE_GROUNDS then
        if gGlobalSyncTable.gameState ~= 6 then
            m.freeze = 1
            m.area.camera.cutscene = 1
            cutscene_castle_grounds(m)
        end
    elseif level == LEVEL_CASTLE_COURTYARD then
        m.freeze = 1
        m.area.camera.cutscene = 1
        cutscene_castle_courtyard(m)
    end

    if m.area.camera.cutscene == 1 and gGlobalSyncTable.gameState == 6 then
        m.area.camera.cutscene = 0
    end
end

hook_event(HOOK_MARIO_UPDATE, init_cutscenes)

hook_event(HOOK_ON_WARP, function()
    currCutsceneState = 0
    currCutsceneTimerTrig = false
    currCutsceneTimer = 0
    allowDialog = true
end)

hook_event(HOOK_BEFORE_SET_MARIO_ACTION, function(m, inc)
    if gNetworkPlayers[0].currLevelNum == LEVEL_CASTLE_GROUNDS then
        if inc == ACT_START_SLEEPING or inc == ACT_SLEEPING then
            return ACT_IDLE
        end
    end
end)
