-- Created by Sunk

-------------------------------------------
----------List of custom surfaces----------
-------------------------------------------
--[[
    Surfaces:
    0x2 - Firsty wall
    0x6 - Wide angle wall
    0x7 - Bounce floor/wall
    0x8 - Ceil-bonk wall
    0xC - Fast floor
    0xF - Hover
    0x10 - Pull
    0x11 - Free movement
    0x17
    0x18
    0x19
    0x1F
    0x20
    0x2B
    0x31
    0x39
    0x3A
    0x3B
    0x3C
    0x3D
    0x3E
    0x3F
    0x40
    ... and a lot more, but I don't think I even need this much
]]



----------------
-----Switches---
----------------

SEQ_CASTLE_OUTSIDE = 0x04
SEQ_CASTLE_INSIDE = 0x24 -- insert real id
SEQ_ILLUMINATI_CONFIRMED = 0x26-- insert real id

function play_music_if_not_yet(seq)
    local cur = get_current_background_music()
    if cur ~= seq and cur-1024 ~= SEQ_EVENT_POWERUP and cur-1024 ~= SEQ_EVENT_METAL_CAP then
        stop_background_music(cur)
        set_background_music(0, seq, 0)
    end
end


hook_event(HOOK_MARIO_UPDATE, function(m)
    if m.playerIndex ~= 0 then return end
    
    local currLevel = gNetworkPlayers[0].currLevelNum
    
    -- LEVEL_BOB music logic
    if currLevel == LEVEL_BOB then
        if m.floor.type == 28 then
            play_music_if_not_yet(SEQ_CASTLE_INSIDE)
        elseif m.floor.type == 29 then
            play_music_if_not_yet(SEQ_ILLUMINATI_CONFIRMED)
        elseif m.floor.type == 27 then
            play_music_if_not_yet(SEQ_CASTLE_OUTSIDE)
        end
    end
end)
