--Offset Fix

if not _G.charSelectExists then return end
local function offsetfix(m)
    m.marioObj.hookRender = true
end

local function on_object_render(obj)
local currentCharacter = _G.charSelect.character_get_current_number(0)
if currentCharacter == CT_TRAVIS then
    if get_id_from_behavior(obj.behavior) ~= id_bhvMario then
        return
    end
    
    for i=0, MAX_PLAYERS-1 do
        local m = gMarioStates[i]
        m.marioObj.header.gfx.pos.y = m.pos.y + 51
    end
end
end

hook_event(HOOK_MARIO_UPDATE, offsetfix)
hook_event(HOOK_ON_OBJECT_RENDER, on_object_render)