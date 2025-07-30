-- Sunk Tweaked Death Timer from Parallel Stars
local activated = false
local death_timer = 0

local function level_init()
    ---@type NetworkPlayer
    local np = gNetworkPlayers[0]
    if np.currLevelNum == LEVEL_CASTLE then
        death_timer = 30000
        activated = true
    elseif np.currLevelNum == LEVEL_CASTLE_COURTYARD then
        death_timer = 30000
        activated = true
	elseif np.currLevelNum == LEVEL_SA then
        death_timer = 9030
        activated = true
	elseif np.currLevelNum == LEVEL_CASTLE_GROUNDS then
        death_timer = 15030
        activated = true
	elseif np.currLevelNum == LEVEL_BITDW then
        death_timer = 15030
        activated = true
    else
        death_timer = 0
        hud_set_value(HUD_DISPLAY_FLAGS, ~HUD_DISPLAY_FLAGS_TIMER)
        activated = false
    end
end

---@param text string
local function append_zero_and_format_negative(text)
    local length = #text
    if length == 1 then
        text = "0" .. text
    elseif text:sub(1, 1) == "-" then
        text = "M" .. text:sub(2, length)
    end
    return text
end

-- Custom hud
local function hud_render()
    -- Death timer
    ---@type MarioState
    local m = gMarioStates[0]
    ---@type NetworkPlayer
    local np = gNetworkPlayers[0]
    local hud_display_flags = hud_get_value(HUD_DISPLAY_FLAGS)
    if np.currLevelNum == LEVEL_CASTLE or (np.currLevelNum == LEVEL_CASTLE_COURTYARD) or (np.currLevelNum == LEVEL_SA) or (np.currLevelNum == LEVEL_CASTLE_GROUNDS) or (np.currLevelNum == LEVEL_BITDW) then
        if m.action ~= ACT_FALL_AFTER_STAR_GRAB then
            death_timer = death_timer - 1
            if death_timer <= 0 then
                m.floor.type = SURFACE_DEATH_PLANE
                death_timer = 0
            end
            hud_set_value(HUD_DISPLAY_FLAGS, (hud_display_flags | HUD_DISPLAY_FLAGS_TIMER))
            hud_set_value(HUD_DISPLAY_TIMER, death_timer)
            if (not hud_is_hidden()) then
                local hudDisplayFlags = hud_get_value(HUD_DISPLAY_FLAGS)
                    hud_set_value(HUD_DISPLAY_FLAGS, hudDisplayFlags & ~HUD_DISPLAY_FLAGS_TIMER)
            end
        end
    end

    -- Font
    djui_hud_set_resolution(RESOLUTION_N64)
    djui_hud_set_font(FONT_HUD)
    djui_hud_set_color(255, 255, 255, 255)
    -- Death timer hud
    if activated then
        x = djui_hud_get_screen_width() * 0.054
        y = 200
        local time = hud_get_value(HUD_DISPLAY_TIMER)
        local seconds = append_zero_and_format_negative(tostring(time // 30))
        djui_hud_print_text("" .. seconds, x, y, 1)
    end
end

hook_event(HOOK_ON_LEVEL_INIT, level_init)
hook_event(HOOK_ON_HUD_RENDER, hud_render)
