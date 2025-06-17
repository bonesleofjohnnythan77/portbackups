-- name: Goombas Easter Egg Hunt
-- description: 
-- incompatible: romhack

gLevelValues.entryLevel = LEVEL_CASTLE_GROUNDS
gLevelValues.cellHeightLimit = 32767
gLevelValues.floorLowerLimit = -32768
gLevelValues.floorLowerLimitMisc = -31768
gLevelValues.floorLowerLimitShadow = -31768

gServerSettings.skipIntro = 1
gServerSettings.stayInLevelAfterStar = 2

camera_set_use_course_specific_settings(0)
camera_set_romhack_override(RCO_ALL)
rom_hack_cam_set_collisions(0)
camera_romhack_allow_centering(0)

--Goomba Restrictions (SUFFAH FOOL)
--No B Button

local np = gNetworkPlayers[0]

---@param m MarioState
hook_event(HOOK_BEFORE_MARIO_UPDATE, function(m)
    if m.playerIndex ~= 0 then return end


    if not is_game_paused() and not camera_config_is_free_cam_enabled() then
        m.controller.buttonPressed = m.controller.buttonPressed & ~(R_TRIG | U_CBUTTONS)
    end

    if m.action ~= ACT_BUBBLED then
        m.controller.buttonPressed = m.controller.buttonPressed & ~(B_BUTTON | U_CBUTTONS)
        m.controller.buttonDown    = m.controller.buttonDown & ~(B_BUTTON)
    end

    if np.currLevelNum ~= LEVEL_BITFS then
        if (m.controller.buttonDown & U_CBUTTONS) ~= 0
        and not camera_config_is_free_cam_enabled() then
            set_first_person_enabled(true)
        end
    end
end)

hook_event(HOOK_BEFORE_SET_MARIO_ACTION, function(m, incomingAct, actionArg)

    if incomingAct == ACT_LONG_JUMP or incomingAct == ACT_WALL_KICK_AIR then
        return 1
    end

end)

local boost = 0

---@param m MarioState
local function on_set_mario_action(m)
    if m.playerIndex ~= 0 then return end

    local spd = 30

    if np.currLevelNum == LEVEL_BITS then
        boost = 24
        m.vel.y = spd
    end

    if m.action == ACT_JUMP
    or m.action == ACT_TRIPLE_JUMP
    or m.action == ACT_SIDE_FLIP
    or m.action == ACT_STEEP_JUMP
    or m.action == ACT_BACKFLIP
    or m.action == ACT_SPECIAL_TRIPLE_JUMP then
        m.vel.y = spd
    elseif m.action == ACT_DOUBLE_JUMP then
        m.vel.y = spd + 3
    end
end

hook_event(HOOK_ON_SET_MARIO_ACTION, on_set_mario_action)

---@param m MarioState
local function gravity(m)
    if m.playerIndex ~= 0 then return end

if not camera_config_is_free_cam_enabled() then
    if np.currLevelNum ~= LEVEL_BITFS and m.action ~= ACT_BUBBLED then
        set_cam_angle(CAM_MODE_MARIO_ACTIVE)
    end
end

    if (m.controller.buttonPressed & D_CBUTTONS) ~= 0
        and get_first_person_enabled() and not camera_config_is_free_cam_enabled() then
        set_first_person_enabled(false)
    elseif get_first_person_enabled() and camera_config_is_free_cam_enabled() then
        set_first_person_enabled(false)
    end

    if np.currLevelNum == LEVEL_BITS and m.action ~= ACT_SPAWN_SPIN_AIRBORNE then
        if boost > 0.1 then
            m.vel.y = m.vel.y + (boost * 0.3)
            boost = approach_f32_asymptotic(boost, 0, 0.1)
        end
    end

    if np.currLevelNum == LEVEL_BITS and m.vel.y < 0 then
        m.vel.y = m.vel.y * 0.85
    end
end

hook_event(HOOK_MARIO_UPDATE, gravity)