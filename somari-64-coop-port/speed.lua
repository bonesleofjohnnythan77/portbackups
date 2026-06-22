
local show_speed = 1  -- Control variable to show/hide speed
local scale = 1     -- Reduced scale for smaller text
local x = 10         -- X position for the speed display (adjusted for left padding)
local y = 27         -- Y position for the speed display (set to 850)
local background = 0.0 -- Background color (0.0 for transparent)

function hud_speed()
    local m = gMarioStates[0]  -- Get Mario's state
	if obj_get_first_with_behavior_id(id_bhvActSelector) ~= nil then return end  -- Hides HUD during star select
	if gNetworkPlayers[0].currActNum == 99 then return end  -- Hides HUD during Act 99, aka the credits
    djui_hud_set_font(FONT_HUD)
	djui_hud_set_resolution(RESOLUTION_N64)
    screenWidth = djui_hud_get_screen_width()  -- Width of the screen
    screenHeight = djui_hud_get_screen_height()  -- Height of the screen
    djui_hud_set_color(255 * background, 0, 0, 128)  -- Set background color
    djui_hud_set_color(255, 255, 255, 255)  -- Set text color

    if show_speed == 1 then
        -- Display "SPD" followed by the horizontal speed formatted to one digit
        djui_hud_print_text(string.format("SPD %d", math.floor(m.forwardVel)), screenWidth / x, screenHeight - y, scale)
    end
end

function on_hud_render()
    hud_speed()  -- Call the speed display function
end

hook_event(HOOK_ON_HUD_RENDER_BEHIND, on_hud_render)


