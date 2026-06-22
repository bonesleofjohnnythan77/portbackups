-- name: Menu Template
-- description: Menu Template for mods to use, made by Blocky

local menu = false

local function close_menu()
    menu = false
    selectedOption = 1
    disable_time_stop_including_mario()
end

function start_game()
    gGlobalSyncTable.endlessMode     = false
    gGlobalSyncTable.currentCustomer = 1
    gGlobalSyncTable.gameState       = 2
    gGlobalSyncTable.tacoRank        = 0
    gGlobalSyncTable.CustomersID     = 0
    warp_to_level(LEVEL_CASTLE_COURTYARD, 1, 0)
    gGlobalSyncTable.endlessModeTimer = 60 * 25
    close_menu()
end

function start_game2()
    gGlobalSyncTable.endlessMode     = true
    gGlobalSyncTable.currentCustomer = 1
    gGlobalSyncTable.gameState       = 2
    gGlobalSyncTable.tacoRank        = 0
    gGlobalSyncTable.CustomersID     = 1
    warp_to_level(LEVEL_CASTLE_COURTYARD, 1, 0)
    close_menu()
end

local levelTable = {
    [COURSE_BOB] = LEVEL_BOB,
    [COURSE_WF] = LEVEL_WF,
    [COURSE_JRB] = LEVEL_JRB,
    [COURSE_CCM] = LEVEL_CCM,
    [COURSE_BBH] = LEVEL_BBH,
    [COURSE_HMC] = LEVEL_HMC,
    [COURSE_LLL] = LEVEL_LLL,
    [COURSE_SSL] = LEVEL_SSL,
    [COURSE_SL] = LEVEL_SL,
    [COURSE_WDW] = LEVEL_WDW,
    [COURSE_TTM] = LEVEL_TTM,
    [COURSE_THI] = LEVEL_THI,
    [COURSE_TTC] = LEVEL_TTC,
    [COURSE_RR] = LEVEL_RR,
}

function random_level()
    warp_to_level(levelTable[math.random(COURSE_BOB, COURSE_RR)], 1, 1)
    close_menu()
end

function lives()
    local m = gMarioStates[0]
    m.numLives = 100
end

function endless_mode()
    gGlobalSyncTable.endlessMode = not gGlobalSyncTable.endlessMode
end

function spawn_star()
    local m = gMarioStates[0]
    spawn_non_sync_object(id_bhvSpawnedStarNoLevelExit, E_MODEL_STAR, m.pos.x, m.pos.y + 200, m.pos.z, nil)
end

function heal()
    local m = gMarioStates[0]
    m.healCounter = 50
end

-- Define menu options
local menuOptions = {
    { label = "Start Normal Mode",  action = start_game,  status = nil, description = "Starts the game" },
    { label = "Start Endless Mode", action = start_game2, status = nil, description = "Starts the game" },
    { label = "Exit",               action = close_menu,  status = nil, description = "Exit the menu." },

}

-- Initialize the selected option
local selectedOption = 1

-- Set the scale factor for the menu
local menuScale = 1.8 -- Adjust this value as needed

-- Add a title for the menu
local menuTitle = "Taco Menu"
local titleY = 150

local function drawMenu()
    if not menu then return end
    enable_time_stop_including_mario()

    djui_hud_set_color(0, 0, 0, 200)
    djui_hud_render_rect(0, 0, 10000, 10000)

    -- Set text color and position for the title
    local titleX = ((djui_hud_get_screen_width() - djui_hud_measure_text(menuTitle) * menuScale * 2.5) / 2.1)

    -- Draw the title
    djui_hud_set_color(255, 255, 255, 255)
    djui_hud_set_font(FONT_HUD)
    djui_hud_print_text(menuTitle, titleX, titleY, menuScale * 2.5)
    djui_hud_set_font(FONT_NORMAL)

    -- Set text color and position for the menu options
    local textY = titleY + 100
    local textSpacing = 30 * menuScale
    local rectPadding = 5

    for i, option in ipairs(menuOptions) do
        local textWidth = djui_hud_measure_text(option.label)
        local textX = (djui_hud_get_screen_width() - textWidth * menuScale) / 2

        if i == selectedOption then
            -- Draw black rectangle behind the selected option
            -- Draw the description with a smaller scale
            local descX = (djui_hud_get_screen_width() - djui_hud_measure_text(option.description) * (menuScale - 0.5)) /
                2
            local descY = textY + 500
            djui_hud_set_color(255, 255, 255, 255)
            djui_hud_set_font(FONT_NORMAL)
            djui_hud_print_text(option.description, descX, descY, menuScale - 0.5)
            local optionWidth = textWidth * menuScale + rectPadding * 2
            local optionHeight = 16 * menuScale + rectPadding * 2
            djui_hud_set_color(0, 255, 255, 150)
            djui_hud_render_rect(textX - rectPadding, (textY + (i - 1) * textSpacing - rectPadding) + 15, optionWidth,
                optionHeight + 5)
        end



        -- Set text color based on the status
        if option.status == nil then
            djui_hud_set_color(255, 255, 255, 255) -- Green for "On"
        elseif option.status then
            djui_hud_set_color(0, 255, 0, 255)     -- Green for "On"
        else
            djui_hud_set_color(255, 0, 0, 255)     -- Red for "Off"
        end
        if i == 2 then djui_hud_set_color(255, 0, 0, 255) end
        if i == 1 then djui_hud_set_color(0, 0, 255, 255) end
        -- Draw the menu option with scale
        djui_hud_print_text(option.label, textX, textY + (i - 1) * textSpacing, menuScale)
    end
end

local cooldown = 5
local cooldownCounter = 0

local function updateMenu()
    if not menu then return end
    local m = gMarioStates[0]
    if m.playerIndex ~= 0 then return end

    local stickY = m.controller.stickY
    local mouseX = djui_hud_get_mouse_x()
    local mouseY = djui_hud_get_mouse_y()

    djui_hud_render_texture(gTextures.star, mouseX - 8, mouseY - 8, 2, 2)

    if selectedOption < 1 then
        selectedOption = #menuOptions
    elseif selectedOption > #menuOptions then
        selectedOption = 1
    end

    if cooldownCounter > 0 then
        cooldownCounter = cooldownCounter - 1
    else
        for i, option in ipairs(menuOptions) do
            local textWidth = djui_hud_measure_text(option.label)
            local textX = (djui_hud_get_screen_width() - textWidth * menuScale) / 2
            local textY = titleY + 100 + (i - 1) * (30 * menuScale)
            local optionWidth = textWidth * menuScale
            local optionHeight = 16 * menuScale

            -- Check if the mouse is within the bounds of the option
            if mouseX >= textX and mouseX <= textX + optionWidth and mouseY >= textY and mouseY <= textY + optionHeight then
                selectedOption = i
            end
        end

        if stickY > 0.5 then
            -- Move selection down
            selectedOption = selectedOption - 1
            play_sound(SOUND_MENU_CHANGE_SELECT, gMarioStates[0].pos)
            cooldownCounter = cooldown
        elseif stickY < -0.5 then
            -- Move selection up
            selectedOption = selectedOption + 1
            play_sound(SOUND_MENU_CHANGE_SELECT, gMarioStates[0].pos)
            cooldownCounter = cooldown
        elseif m.controller.buttonPressed & A_BUTTON ~= 0 or m.controller.buttonPressed & B_BUTTON ~= 0 then
            play_sound(SOUND_MENU_CLICK_FILE_SELECT, gMarioStates[0].pos)
            -- Execute the selected menu option
            menuOptions[selectedOption].action()
            if menuOptions[selectedOption].status ~= nil then
                menuOptions[selectedOption].status = not menuOptions[selectedOption].status
            end
        elseif is_game_paused() then
            close_menu()
        end
    end
end

-- Main loop
local function hud_render()
    djui_hud_set_resolution(RESOLUTION_DJUI)
    drawMenu()
    updateMenu()
end

local function menu_command()
    if gGlobalSyncTable.gameComplete == 0 then
        djui_chat_message_create("Can't open the menu right now!")
        return true
    end
    if gNetworkPlayers[0].currLevelNum ~= LEVEL_CASTLE_GROUNDS then
        djui_chat_message_create(
            "Can't open the menu right now!")
        return true
    end
    menu = true
    return true
end

if network_is_server() then
    hook_chat_command("taco-menu", "- Opens the taco menu.", menu_command)
    hook_event(HOOK_ON_HUD_RENDER, hud_render)
end
