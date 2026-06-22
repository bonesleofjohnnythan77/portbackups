-- name: Somari 64: DASH!
-- description: There's only one goal: Go as fast as possible in this amazing Sonic-themed hack.
-- incompatible: romhack

gLevelValues.entryLevel = LEVEL_CASTLE_GROUNDS
gLevelValues.cellHeightLimit = 32767
gLevelValues.floorLowerLimit = -32768
gLevelValues.floorLowerLimitMisc = -31768
gLevelValues.floorLowerLimitShadow = -31768

gServerSettings.skipIntro = 1

gLevelValues.exitCastleLevel = 16
gLevelValues.exitCastleArea = 1
gLevelValues.exitCastleWarpNode = 30
gLevelValues.pssSlideStarTime = 1800

camera_set_use_course_specific_settings(0)
camera_set_romhack_override(RCO_ALL)
rom_hack_cam_set_collisions(0)
camera_romhack_allow_centering(0)
camera_romhack_allow_dpad_usage(1)

local function switch(param, case_table)
    local case = case_table[param]
    if case then return case() end
    local def = case_table["default"]
    return def and def() or nil
end

---@param value number
---@return number
local function s16(value)
    if value > 32767 then
        return value - 65536
    elseif value < -32768 then
        return value + 65536
    end
    return value
end

---@param m MarioState
function update_speed(m)

    -- Acceleration
    if m.forwardVel <= 32 then
        m.forwardVel = m.forwardVel + 1.5
    else
        m.forwardVel = m.forwardVel + 0.2
    end

    -- Limit the maxand min speed
    if m.forwardVel > 1200 then
        m.forwardVel = 1200
    elseif m.forwardVel < -100 then
        m.forwardVel = -100
    end

    m.faceAngle.y = m.intendedYaw - approach_s32(s16(m.intendedYaw - m.faceAngle.y), 0, 0x800, 0x800)
    apply_slope_accel(m)
end

-- Sunk NoSteepJumps Code
---@param m MarioState
---@return integer
function act_walking(m)
    if not m then return 0 end
    local startPos = {}
    local startYaw = m.faceAngle.y

    mario_drop_held_object(m)

    if (should_begin_sliding(m) ~= 0) then
        return set_mario_action(m, ACT_BEGIN_SLIDING, 0)
    end

    if (m.input & INPUT_FIRST_PERSON ~= 0) then
        return begin_braking_action(m)
    end

    if (m.input & INPUT_A_PRESSED ~= 0) then
        return set_jump_from_landing(m)
    end

    if (check_ground_dive_or_punch(m) ~= 0) then
        return 1
    end

    if (m.input & INPUT_ZERO_MOVEMENT ~= 0) then
        return begin_braking_action(m)
    end

    if (analog_stick_held_back(m) ~= 0 and m.forwardVel >= 16.0) then
        return set_mario_action(m, ACT_TURNING_AROUND, 0)
    end

    if (m.input & INPUT_Z_PRESSED ~= 0) then
        return set_mario_action(m, ACT_CROUCH_SLIDE, 0)
    end

    m.actionState = 0

    vec3f_copy(startPos, m.pos)
    update_speed(m)

    switch (perform_ground_step(m), {
        [GROUND_STEP_LEFT_GROUND] = function ()
            set_mario_action(m, ACT_FREEFALL, 0)
            set_mario_animation(m, MARIO_ANIM_GENERAL_FALL)
        end,
        [GROUND_STEP_NONE] = function ()
            anim_and_audio_for_walk(m)
            if (m.intendedMag - m.forwardVel > 16.0) then
                set_mario_particle_flags(m, PARTICLE_DUST, 0)
            end
        end,
        [GROUND_STEP_HIT_WALL] = function ()
            push_or_sidle_wall(m, startPos)
            m.actionTimer = 0
        end
    })

    check_ledge_climb_down(m)
    tilt_body_walking(m, startYaw)
    return 0
end

hook_mario_action(ACT_WALKING, act_walking)

---@param m MarioState
function jumpspeed(m)
if m.forwardVel > 30 then
    if m.action == ACT_JUMP or
    m.action == ACT_DOUBLE_JUMP then
        m.forwardVel = m.forwardVel + (m.forwardVel * 0.4)
    elseif m.action == ACT_TRIPLE_JUMP or
    m.action == ACT_SPECIAL_TRIPLE_JUMP then 
        m.forwardVel = m.forwardVel + (m.forwardVel * 0.6)
            elseif m.action == ACT_LONG_JUMP then
                m.forwardVel = 56
            end
        end
    end

hook_event(HOOK_ON_SET_MARIO_ACTION, jumpspeed)

---@param m MarioState
local function before_phys_step_0xC(m)
    if m.playerIndex ~= 0 then return end

        if m.floor and m.floor.type == 30 then
            m.forwardVel = m.forwardVel + 10
        end
    end

hook_event(HOOK_BEFORE_PHYS_STEP, before_phys_step_0xC)

function nfd(m)
    m.peakHeight = m.pos.y
end
hook_event(HOOK_MARIO_UPDATE, nfd)