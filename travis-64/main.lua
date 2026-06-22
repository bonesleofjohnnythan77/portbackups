-- name: Travis Touchdown
-- description: No More Heroes

--[[
    API Documentation:
    https://github.com/Squishy6094/character-select-coop/wiki/API-Documentation
]]

local TEXT_MOD_NAME = "Travis Touchdown"

-- Stops mod from loading if Character Select isn't on
if not _G.charSelectExists then
    djui_popup_create("\\#ffffdc\\\n"..TEXT_MOD_NAME.."\nRequires the Character Select Mod\nto use as a Library!\n\nPlease turn on the Character Select Mod\nand Restart the Room!", 6)
    return 0
end

local E_MODEL_TRAVIS = smlua_model_util_get_id("travis_geo") -- Located in "actors"

local TEX_CUSTOM_LIFE_ICON = get_texture_info("exclamation-icon") -- Located in "textures"

-- All Located in "sound"
local VOICETABLE_TRAVIS = {
    [CHAR_SOUND_ATTACKED] = 'Travis-Attacked.ogg',
    [CHAR_SOUND_DOH] = 'Travis-Bump.ogg',
    [CHAR_SOUND_DROWNING] = 'Travis-Drown.ogg',
    [CHAR_SOUND_DYING] = 'Travis-Die.ogg',
    [CHAR_SOUND_GROUND_POUND_WAH] = 'Travis-Pound.ogg',
    [CHAR_SOUND_HAHA] = 'Travis-Haha.ogg',
    [CHAR_SOUND_HAHA_2] = 'Travis-Yes1.ogg',
    [CHAR_SOUND_HERE_WE_GO] = 'Travis-BitchAss.ogg',
    [CHAR_SOUND_HOOHOO] = 'Travis-HooHoo.ogg',
    [CHAR_SOUND_MAMA_MIA] = 'Travis-MamaMia.ogg',
    [CHAR_SOUND_OKEY_DOKEY] = 'Travis-OKDOK.ogg',
    [CHAR_SOUND_ON_FIRE] = 'Travis-Lava.ogg',
    [CHAR_SOUND_OOOF] = 'Travis-Oof1.ogg',
    [CHAR_SOUND_OOOF2] = 'Travis-Oof2.ogg',
    [CHAR_SOUND_PUNCH_HOO] = 'Travis-Hoohpunch.ogg',
    [CHAR_SOUND_PUNCH_WAH] = 'Travis-Bitch.ogg',
    [CHAR_SOUND_PUNCH_YAH] = 'Travis-Yah.ogg',
    [CHAR_SOUND_SO_LONGA_BOWSER] = 'Travis-UrAJoke.ogg',
    [CHAR_SOUND_TWIRL_BOUNCE] = 'Travis-Yes2.ogg',
    [CHAR_SOUND_WAAAOOOW] = 'Travis-Die.ogg',
    [CHAR_SOUND_WAH2] = 'Travis-Hooh.ogg',
    [CHAR_SOUND_WHOA] = 'Travis-Woah.ogg',
    [CHAR_SOUND_YAHOO] = 'Travis-Yahoo.ogg',
    [CHAR_SOUND_YAHOO_WAHA_YIPPEE] = 'Travis-Yahoo.ogg',
    [CHAR_SOUND_YAH_WAH_HOO] = 'Travis-Jump.ogg',
	[CHAR_SOUND_EEUH] = 'Travis-Eeuh.ogg',
    [CHAR_SOUND_YAWNING] = 'Travis-Yawn.ogg',
	[CHAR_SOUND_IMA_TIRED] = 'Travis-Tired.ogg',
	[CHAR_SOUND_LETS_A_GO] = 'Travis-Letsgo.ogg',
}

-- All Located in "actors"
local CAPTABLE_TRAVIS = {
    normal = smlua_model_util_get_id("travis_cap_geo"),
    wing = smlua_model_util_get_id("travis_wing_cap_geo"),
    metal = smlua_model_util_get_id("travis_metal_cap_geo"),
    metalWing = smlua_model_util_get_id("travis_wingmetal_cap_geo"),
}

--[[
-- All Located in "textures"
local healthMeter = {
    label = {
        left = get_texture_info("template-hp-back-left"),
        right = get_texture_info("template-hp-back-right"),
    },
    pie = {
        [1] = get_texture_info("template-hp-pie-1"),
        [2] = get_texture_info("template-hp-pie-2"),
        [3] = get_texture_info("template-hp-pie-3"),
        [4] = get_texture_info("template-hp-pie-4"),
        [5] = get_texture_info("template-hp-pie-5"),
        [6] = get_texture_info("template-hp-pie-6"),
        [7] = get_texture_info("template-hp-pie-7"),
        [8] = get_texture_info("template-hp-pie-8"),
    }
}
]]

--[[
    Note: If there are some functionalities you don't care
    to add such as palettes, you can freely remove the function
    for it, the only function you require is character_add
]]

local CSloaded = false
local function on_character_select_load()
    CT_TRAVIS = _G.charSelect.character_add("Travis Touchdown", {"NMH", "SUDA51"}, "BlackJoystick", {r = 255, g = 200, b = 200}, E_MODEL_TRAVIS, CT_MARIO, TEX_CUSTOM_LIFE_ICON)
    _G.charSelect.character_add_caps(E_MODEL_TRAVIS, CAPTABLE_TRAVIS)
    _G.charSelect.character_add_voice(E_MODEL_TRAVIS, VOICETABLE_TRAVIS)
    --_G.charSelect.character_add_celebration_star(E_MODEL_CUSTOM_MODEL, E_MODEL_CUSTOM_STAR, TEX_CUSTOM_STAR_ICON)
    --_G.charSelect.character_add_palette_preset(E_MODEL_CUSTOM_MODEL, PALETTE_CHAR)
    --_G.charSelect.character_add_health_meter(CT_TRAVIS, healthMeter)

    CSloaded = true
end

local function on_character_sound(m, sound)
    if not CSloaded then return end
    if _G.charSelect.character_get_voice(m) == VOICETABLE_TRAVIS then return _G.charSelect.voice.sound(m, sound) end
end

local function on_character_snore(m)
    if not CSloaded then return end
    if _G.charSelect.character_get_voice(m) == VOICETABLE_TRAVIS then return _G.charSelect.voice.snore(m) end
end

hook_event(HOOK_ON_MODS_LOADED, on_character_select_load)
hook_event(HOOK_CHARACTER_SOUND, on_character_sound)
hook_event(HOOK_MARIO_UPDATE, on_character_snore)

--Animation Code--

--The Code that Puts them In--

local function mario_update(m)
    local currentCharacter = _G.charSelect.character_get_current_number(0)
	
    --Idle
if currentCharacter == CT_TRAVIS then
    if m.action == ACT_IDLE then
        if (m.controller.buttonDown & X_BUTTON) ~= 0 then    
        smlua_anim_util_set_animation(m.marioObj, "travis_anim_idledual")
        djui_chat_message_create('Dual Mode Animation')
        elseif (m.controller.buttonDown & Y_BUTTON) ~= 0 then
        smlua_anim_util_set_animation(m.marioObj, "travis_anim_idlehigh")
        djui_chat_message_create('High Mode Animation')
        else
            smlua_anim_util_set_animation(m.marioObj, "travis_anim_idlelow")
    end
    end

	--Running

    if m.action == ACT_WALKING then
        if (m.controller.buttonDown & X_BUTTON) ~= 0 then    
        smlua_anim_util_set_animation(m.marioObj, "travis_anim_rundual")
        djui_chat_message_create('Dual Mode Animation')
        elseif (m.controller.buttonDown & Y_BUTTON) ~= 0 then
        smlua_anim_util_set_animation(m.marioObj, "travis_anim_runhigh")
        djui_chat_message_create('High Mode Animation')
        else
            smlua_anim_util_set_animation(m.marioObj, "travis_anim_runlow")
    end
    end

end
end
hook_event(HOOK_MARIO_UPDATE, mario_update)   

