-- name: All Frame Firsties
-- description: Do a firsty on all 5 frames of a wallkick.\nCreated by Sunk.

local prev_speed = 0

---@param m MarioState
function on_set_mario_action(m)
    if m.playerIndex ~= 0 then return end

    if m.action == ACT_AIR_HIT_WALL then
        prev_speed = m.forwardVel
    end

    if m.action == ACT_WALL_KICK_AIR then
        if prev_speed < 20 then
            prev_speed = 20
        end
        m.forwardVel = prev_speed
    end
end

hook_event(HOOK_ON_SET_MARIO_ACTION, on_set_mario_action)