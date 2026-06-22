-- name: \\#9900ff\\Waluigi's Taco Stand
-- description: Waluigi's has blown all his money away at the casino! However, his landlord Mr. Rent has offered him a job at a Taco Stand. Make Tacos with the ingredients your customers request to make end's meet!\n\nThis port also comes with an \\#ff0000\\Endless Mode\\#dcdcdc\\ you can unlock after completing the base game, aim for the highest score!\n\nCredits:\n\n\\#339933\\B. Bones Johnson\\#dcdcdc\\ - Porting, General Assistance\n\n\\#00ff00\\ManIsCat\\#ff0000\\2\\#dcdcdc\\ - Main Programmer, Taco Master, Carried the Port lmfao\n\n\\#00ccff\\WBmarioo\\#dcdcdc\\ - Ingredient Models, Taco Waluigi CS\n\n\\#99cc00\\Saul\\#dcdcdc\\ - Endless Mode Timer Icon, Moral Support
-- incompatible: romhack
-- pausable: false

gLevelValues.entryLevel = LEVEL_CASTLE_GROUNDS
gLevelValues.disableActs = true
gServerSettings.playerInteractions = PLAYER_INTERACTIONS_NONE
save_file_set_flags(SAVE_FLAG_HAVE_WING_CAP)


camera_set_use_course_specific_settings(false)

smlua_audio_utils_replace_sequence(0x01, 0x22, 75, "01_Seq_custom")
smlua_audio_utils_replace_sequence(0x02, 0x11, 75, "02_Seq_custom")
smlua_audio_utils_replace_sequence(0x06, 0x0F, 75, "06_Seq_custom")
smlua_audio_utils_replace_sequence(0x0B, 0x14, 75, "0B_Seq_custom")
smlua_audio_utils_replace_sequence(0x0C, 0x11, 75, "0C_Seq_custom")
smlua_audio_utils_replace_sequence(0x0D, 0x16, 75, "0D_Seq_custom")
smlua_audio_utils_replace_sequence(0x0E, 0x17, 75, "0E_Seq_custom")
smlua_audio_utils_replace_sequence(0x0F, 0x18, 75, "0F_Seq_custom")
smlua_audio_utils_replace_sequence(0x10, 0x12, 75, "10_Seq_custom")
smlua_audio_utils_replace_sequence(0x12, 0x1F, 75, "12_Seq_custom")
smlua_audio_utils_replace_sequence(0x14, 0x1A, 75, "14_Seq_custom")
smlua_audio_utils_replace_sequence(0x15, 0x0E, 75, "15_Seq_custom")
smlua_audio_utils_replace_sequence(0x16, 0x1B, 75, "16_Seq_custom")
smlua_audio_utils_replace_sequence(0x17, 0x1A, 75, "17_Seq_custom")
smlua_audio_utils_replace_sequence(0x1B, 0x14, 75, "1B_Seq_custom")
smlua_audio_utils_replace_sequence(0x1C, 0x20, 75, "1C_Seq_custom")
smlua_audio_utils_replace_sequence(0x1D, 0x1E, 75, "1D_Seq_custom")
smlua_audio_utils_replace_sequence(0x1E, 0x11, 75, "1E_Seq_custom")
smlua_audio_utils_replace_sequence(0x1F, 0x0C, 75, "1F_Seq_custom")
smlua_audio_utils_replace_sequence(0x20, 0x11, 75, "20_Seq_custom")
smlua_audio_utils_replace_sequence(0x21, 0x12, 75, "21_Seq_custom")
smlua_audio_utils_replace_sequence(0x22, 0x0C, 75, "22_Seq_custom")
smlua_audio_utils_replace_sequence(0x23, 0x0B, 75, "23_Seq_custom")

vec3f_set(gLevelValues.starPositions.KoopaBobStarPos, 3030, 4500, -4600)
vec3f_set(gLevelValues.starPositions.KoopaThiStarPos, 7100, -1300, -6000)
vec3f_set(gLevelValues.starPositions.KingBobombStarPos, 2000.0, 4500.0, -4500.0)
vec3f_set(gLevelValues.starPositions.KingWhompStarPos, 180.0, 3880.0, 340.0)
vec3f_set(gLevelValues.starPositions.EyerockStarPos, 0.0, -900.0, -3700.0)
vec3f_set(gLevelValues.starPositions.BigBullyStarPos, 0.0, 950.0, -6800.0)
vec3f_set(gLevelValues.starPositions.ChillBullyStarPos, 130.0, 1600.0, -4335.0)
vec3f_set(gLevelValues.starPositions.BigPiranhasStarPos, -6300.0, -1850.0, -6300.0)
vec3f_set(gLevelValues.starPositions.TuxieMotherStarPos, 3167.0, -4300.0, 5108.0)
vec3f_set(gLevelValues.starPositions.WigglerStarPos, 0.0, 2048.0, 0.0)
vec3f_set(gLevelValues.starPositions.PssSlideStarPos, -6358.0, -4300.0, 4700.0)
vec3f_set(gLevelValues.starPositions.RacingPenguinStarPos, -7339.0, -5700.0, -6774.0)
vec3f_set(gLevelValues.starPositions.TreasureChestStarPos, -1800.0, -2500.0, -1700.0)
vec3f_set(gLevelValues.starPositions.GhostHuntBooStarPos, 980.0, 1100.0, 250.0)
vec3f_set(gLevelValues.starPositions.KleptoStarPos, -5550.0, 300.0, -930.0)
vec3f_set(gLevelValues.starPositions.MerryGoRoundStarPos, -1600.0, -2100.0, 205.0)
vec3f_set(gLevelValues.starPositions.MrIStarPos, 1370.0, 2000.0, -320.0)
vec3f_set(gLevelValues.starPositions.BalconyBooStarPos, 700.0, 3200.0, 1900.0)
vec3f_set(gLevelValues.starPositions.BigBullyTrioStarPos, 3700.0, 600.0, -5500.0)

gGlobalSyncTable.gameState        = 0
gGlobalSyncTable.tacoLevel        = 0
local tacoRankstr                 = {
    [0] = "TACO AMATEUR",
    [1] = "TACO ENTHUSIAST",
    [2] = "TACO CONNOISEUR",
    [3] = "TACO PROFESSOR",
    [4] = "TACO KING",
}
gGlobalSyncTable.endlessScore     = 0
gGlobalSyncTable.tacoRank         = 0
gGlobalSyncTable.endlessModeTimer = 60 * 25
local function mario_update(m)
    Customers = customToID[gGlobalSyncTable.CustomersID]
    m.health = 0x880
    m.hurtCounter = 0
    -- djui_chat_message_create(""..gGlobalSyncTable.endlessModeTimer)
    if gGlobalSyncTable.currentCustomer > 15 then
        gGlobalSyncTable.tacoRank = 4
    elseif gGlobalSyncTable.currentCustomer > 14 then
        gGlobalSyncTable.tacoRank = 3
    elseif gGlobalSyncTable.currentCustomer > 8 then
        gGlobalSyncTable.tacoRank = 2
    elseif gGlobalSyncTable.currentCustomer > 3 then
        gGlobalSyncTable.tacoRank = 1
    end

    if gGlobalSyncTable.gameState ~= 0 then
        if gGlobalSyncTable.gameState == 1 then
            if gNetworkPlayers[0].currLevelNum ~= gGlobalSyncTable.tacoLevel then
                if gGlobalSyncTable.currentCustomer == 16 then
                    -- warp_special(SPECIAL_WARP_CAKE)
                    djui_chat_message_create("Congratulations!\n\
You've completed the taco quest!\
Your service was legendary.\
\
You can now do /taco-menu in the chat to start a new game in\
either Normal or Endless mode.")
                    gGlobalSyncTable.gameState = 6
                    play_puzzle_jingle()
                    gGlobalSyncTable.gameComplete = 1
                else
                    warp_to_level(gGlobalSyncTable.tacoLevel, 1, 0)
                end
            end

            if is_game_paused() and m.controller.buttonPressed & Y_BUTTON ~= 0 then
                gGlobalSyncTable.gameState = 2
                gGlobalSyncTable.endlessModeTimer = 60 * 25

                if HasIngredients(Customers[gGlobalSyncTable.currentCustomer].ingreds) then
                    gGlobalSyncTable.currentCustomer = gGlobalSyncTable.currentCustomer + 1
                    save_file_set_flags(SAVE_FLAG_HAVE_METAL_CAP)
                    if gGlobalSyncTable.endlessMode then
                        gGlobalSyncTable.endlessScore = gGlobalSyncTable.endlessScore + 1
                    end
                    save_file_do_save(get_current_save_file_num() - 1, 1)
                else
                    gGlobalSyncTable.gameState = 3
                end
            end
        elseif gGlobalSyncTable.gameState == 2 or gGlobalSyncTable.gameState == 3 then
            if gNetworkPlayers[0].currLevelNum ~= LEVEL_CASTLE_COURTYARD then
                -- djui_chat_message_create(""..gGlobalSyncTable.CustomersID)
                warp_to_level(LEVEL_CASTLE_COURTYARD, 1, 0)
            end
        elseif gGlobalSyncTable.gameState == 6 then
            if gNetworkPlayers[0].currLevelNum ~= LEVEL_CASTLE_GROUNDS then
                warp_to_level(LEVEL_CASTLE_GROUNDS, 1, 0)
            end
        end
    end

    if gGlobalSyncTable.endlessMode then
        if gNetworkPlayers[0].currLevelNum == LEVEL_BITDW or
            gNetworkPlayers[0].currLevelNum == LEVEL_BITFS or
            gNetworkPlayers[0].currLevelNum == LEVEL_BITS or
            gNetworkPlayers[0].currLevelNum == LEVEL_WMOTR then
            sequence_player_set_tempo(SEQ_PLAYER_LEVEL, 0x2300)
        end
        if network_is_server() then
            if gGlobalSyncTable.gameState == 1 then
                gGlobalSyncTable.endlessModeTimer = gGlobalSyncTable.endlessModeTimer - 1 / 25

                if gGlobalSyncTable.endlessModeTimer <= 0 then
                    gGlobalSyncTable.gameState = 6
                    warp_to_level(LEVEL_CASTLE_GROUNDS, 1, 0)
                    gGlobalSyncTable.endlessMode      = false
                    gGlobalSyncTable.endlessModeTimer = 25 * 60
                    gGlobalSyncTable.endlessScore     = 0
                    gGlobalSyncTable.CustomersID      = 0
                end
            end
        end
    end
end
local timerTex = get_texture_info("endless_timer")

hook_event(HOOK_MARIO_UPDATE, mario_update)
hook_event(HOOK_ON_HUD_RENDER,
    function()
        djui_hud_set_resolution(RESOLUTION_N64)

        djui_hud_set_color(255, 255, 255, 255)
        if gGlobalSyncTable.gameState == 1 then
            if gGlobalSyncTable.endlessMode then
                djui_hud_set_font(FONT_HUD)
                local starIcon = timerTex
                djui_hud_render_texture(starIcon, 22, djui_hud_get_screen_height() - 32,
                    1, 1)

                djui_hud_print_text("@", 38, djui_hud_get_screen_height() - 32, 1)
                djui_hud_print_text(tostring(math.ceil(gGlobalSyncTable.endlessModeTimer / 25)), 54,
                    djui_hud_get_screen_height() - 32, 1)
            end
            if is_game_paused() then
                djui_hud_set_font(FONT_NORMAL)
                djui_hud_print_text("PRESS Y TO SERVE TACO",
                    djui_hud_get_screen_width() / 2 - djui_hud_measure_text("PRESS Y TO SERVE TACO") / 5,
                    djui_hud_get_screen_height() / 8 * 7.25, 0.5)
            end
        elseif gNetworkPlayers[0].currLevelNum == LEVEL_CASTLE_COURTYARD then
            djui_hud_set_font(FONT_CUSTOM_HUD)
            if not gGlobalSyncTable.endlessMode then
                djui_hud_print_text("RANK: " .. tacoRankstr[gGlobalSyncTable.tacoRank], 20, 220, 1)
            end
        end
    end)


hook_event(HOOK_ON_HUD_RENDER_BEHIND,
    function()
        hud_set_value(HUD_DISPLAY_FLAGS, hud_get_value(HUD_DISPLAY_FLAGS) & ~HUD_DISPLAY_FLAG_LIVES)
        hud_set_value(HUD_DISPLAY_FLAGS, hud_get_value(HUD_DISPLAY_FLAGS) & ~HUD_DISPLAY_FLAG_COIN_COUNT)
        hud_set_value(HUD_DISPLAY_FLAGS, hud_get_value(HUD_DISPLAY_FLAGS) & ~HUD_DISPLAY_FLAG_CAMERA_AND_POWER)
        hud_set_value(HUD_DISPLAY_STARS, gGlobalSyncTable.currentCustomer - 1)

        if gGlobalSyncTable.endlessMode then
            hud_set_value(HUD_DISPLAY_STARS, gGlobalSyncTable.endlessScore)
        else
            hud_set_value(HUD_DISPLAY_STARS, gGlobalSyncTable.currentCustomer - 1)
        end

        if gGlobalSyncTable.gameState == 1 then
            hud_set_value(HUD_DISPLAY_FLAGS, hud_get_value(HUD_DISPLAY_FLAGS) | HUD_DISPLAY_FLAG_STAR_COUNT)
        else
            if gGlobalSyncTable.gameState ~= 6 then
                hud_set_value(HUD_DISPLAY_FLAGS, hud_get_value(HUD_DISPLAY_FLAGS) & ~HUD_DISPLAY_FLAG_STAR_COUNT)
            end
        end
    end)
