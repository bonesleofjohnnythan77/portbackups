-- name: \\#515151\\[CS] Friend Inside Me
-- description: Friend Inside Me

--[[
   Friend Inside Me:
    https://www.youtube.com/@FriendInsideMe_

    Friend Inside Me
]]

-- Stops mod from loading if Character Select isn't on, Does not need to be touched
if not _G.charSelectExists then
    djui_popup_create("\\#ffffdc\\\n"..TEXT_MOD_NAME.."\nRequires the Character Select Mod\nto use as a Library!\n\nPlease turn on the Character Select Mod\nand Restart the Room!", 6)
    return 0
end

local E_MODEL_FRIEND_INSIDE_ME = smlua_model_util_get_id("friend_inside_me_geo")
local E_MODEL_STAR_INSIDE_ME = smlua_model_util_get_id("star_friend_geo")

local TEX_FRIEND_INSIDE_ME = get_texture_info("friend-inside-me-icon")

local TEX_STARICON_INSIDE_ME = get_texture_info("friend-inside-me-staricon")

local TEX_COURSE_FRIEND_TOP = get_texture_info("frendcourse-1")
local TEX_COURSE_FRIEND_BOTTOM = get_texture_info("frendcourse-2")

local E_MODEL_BLUEBUBBLE =      smlua_model_util_get_id("yellow_bubble_geo") 
local E_MODEL_BLUEBUBBLE_NOSHADOW =      smlua_model_util_get_id("yellow_bubble_no_shadow_geo") 
local E_MODEL_REDBUBBLE =      smlua_model_util_get_id("red_bubble_geo") 
local E_MODEL_REDBUBBLE_NOSHADOW =      smlua_model_util_get_id("red_bubble_no_shadow_geo") 
local E_MODEL_YELLOWBUBBLE =      smlua_model_util_get_id("blue_bubble_geo") 
local E_MODEL_YELLOWBUBBLE_NOSHADOW =      smlua_model_util_get_id("blue_bubble_no_shadow_geo") 


local TEXT_MOD_NAME = "Friend Inside Me"

local VOICETABLE_FRIEND_INSIDE_ME = {
    [CHAR_SOUND_OKEY_DOKEY] =        'friend_inside_me.mp3', -- Starting game
	[CHAR_SOUND_LETS_A_GO] =         'friend_inside_me.mp3', -- Starting level
	[CHAR_SOUND_PUNCH_YAH] =        'friend_inside_me.mp3', -- Punch 1
	[CHAR_SOUND_PUNCH_WAH] =        'friend_inside_me.mp3', -- Punch 2
	[CHAR_SOUND_PUNCH_HOO] =         'friend_inside_me.mp3', -- Punch 3
	[CHAR_SOUND_YAH_WAH_HOO] =       'friend_inside_me.mp3', -- First Jump Sounds
	[CHAR_SOUND_HOOHOO] =            'friend_inside_me.mp3', -- Second jump sound
	[CHAR_SOUND_YAHOO_WAHA_YIPPEE] = 'friend_inside_me.mp3', -- Triple jump sounds
	[CHAR_SOUND_UH] =                'friend_inside_me.mp3', -- Wall bonk
	[CHAR_SOUND_UH2] =               'friend_inside_me.mp3', -- Landing after long jump
	[CHAR_SOUND_UH2_2] =             'friend_inside_me.mp3',
	[CHAR_SOUND_HAHA] =              'friend_inside_me.mp3', -- Landing triple jump
	[CHAR_SOUND_YAHOO] =             'friend_inside_me.mp3', -- Long jump
	[CHAR_SOUND_OOOF] = "friend_inside_me.mp3",
    [CHAR_SOUND_OOOF2] = "friend_inside_me.mp3",
	[CHAR_SOUND_DOH] =               'friend_inside_me.mp3', -- Long jump wall bonk
	[CHAR_SOUND_WHOA] =              'friend_inside_me.mp3', -- Grabbing ledge
	[CHAR_SOUND_EEUH] =              'friend_inside_me.mp3', -- Climbing over ledge
	[CHAR_SOUND_WAAAOOOW] =          'friend_inside_me.mp3', -- Falling a long distance
	[CHAR_SOUND_TWIRL_BOUNCE] =      'friend_inside_me.mp3', -- Bouncing off of a flower spring
	[CHAR_SOUND_GROUND_POUND_WAH] =  'friend_inside_me.mp3', 
	[CHAR_SOUND_HRMM] =              'friend_inside_me.mp3', -- Lifting something
	[CHAR_SOUND_HERE_WE_GO] =        'friend_inside_me.mp3', -- Star get
	[CHAR_SOUND_SO_LONGA_BOWSER] =   'friend_inside_me.mp3', -- Throwing Bowser
--DAMAGE
	[CHAR_SOUND_ATTACKED] = 'friend_inside_me.mp3', -- Damaged
	[CHAR_SOUND_PANTING] = 'friend_inside_me.mp3', -- Low health
	[CHAR_SOUND_ON_FIRE] = 'friend_inside_me.mp3', -- Burned
--SLEEP SOUNDS
	[CHAR_SOUND_IMA_TIRED] = 'friend_inside_me.mp3', -- Mario feeling tired
	[CHAR_SOUND_YAWNING] = 'friend_inside_me.mp3', -- Mario yawning before he sits down to sleep
	[CHAR_SOUND_SNORING1] = 'friend_inside_me.mp3', -- Snore Inhale
	[CHAR_SOUND_SNORING2] = 'friend_inside_me.mp3', -- Exhale
	[CHAR_SOUND_SNORING3] = 'friend_inside_me.mp3', -- Sleep talking / mumbling
--COUGHING (USED IN THE GAS MAZE)
	[CHAR_SOUND_COUGHING1] = 'friend_inside_me.mp3', -- Cough take 1
	[CHAR_SOUND_COUGHING2] = 'friend_inside_me.mp3', -- Cough take 2
	[CHAR_SOUND_COUGHING3] = 'friend_inside_me.mp3', -- Cough take 3
--DEATH
	[CHAR_SOUND_DYING] = 'friend_inside_me.mp3', -- Dying from damage
	[CHAR_SOUND_DROWNING] = 'friend_inside_me.mp3', -- Running out of air underwater
	[CHAR_SOUND_MAMA_MIA] = 'friend_inside_me.mp3' -- Booted out of level
}

local HEALTH_METER_FRIEND_INSIDE_ME = {
    label = {
        left = get_texture_info("friend-side1"),
        right = get_texture_info("friend-side2"),
    },
    pie = {
        [1] = get_texture_info("friend1"),
        [2] = get_texture_info("friend2"),
        [3] = get_texture_info("friend3"),
        [4] = get_texture_info("friend4"),
        [5] = get_texture_info("friend5"),
        [6] = get_texture_info("friend6"),
        [7] = get_texture_info("friend7"),
        [8] = get_texture_info("friend8"),
    }
}

-- All Located in "actors"
local CAPTABLE_FRIEND_INSIDE_ME = {
	normal = smlua_model_util_get_id("image_friend_geo"),
    wing = smlua_model_util_get_id("image_wings_geo"),
    metal = smlua_model_util_get_id("image_metalfriend_geo"),
    metalWing = smlua_model_util_get_id("image_metalwings_geo"),
}

local FRIEND_INSIDE_MECourseInfo = {
    top = TEX_COURSE_FRIEND_TOP,
    bottom = TEX_COURSE_FRIEND_BOTTOM,
}


local CSloaded = false
local function on_character_select_load()
    -- Adds the custom character to the Character Select Menu
    CT_FRIEND_INSIDE_ME = _G.charSelect.character_add(
        "Friend Inside Me", -- Character Name
        "Friend Inside Me", -- Description
        "Friend Inside Me", -- Credits
        "515151",           -- Menu Color
        E_MODEL_FRIEND_INSIDE_ME,       -- Character Model
        CT_MARIO,           -- Override Character
        TEX_FRIEND_INSIDE_ME, -- Life Icon
        1,                  -- Camera Scale
        0                   -- Vertical Offset
    )

    -- Adds a voice to your character
    -- (Sounds do not exist in template)
    _G.charSelect.character_add_voice(E_MODEL_FRIEND_INSIDE_ME, VOICETABLE_FRIEND_INSIDE_ME)

	_G.charSelect.character_add_celebration_star(E_MODEL_FRIEND_INSIDE_ME, E_MODEL_STAR_INSIDE_ME, TEX_STARICON_INSIDE_ME)
    -- Adds a health meter to your character
    -- (Textures do not exist in template)
    _G.charSelect.character_add_health_meter(CT_FRIEND_INSIDE_ME, HEALTH_METER_FRIEND_INSIDE_ME)
    -- Adds credits to the credits menu
    _G.charSelect.credit_add(TEXT_MOD_NAME, "Friend Inside Me", "Friend Inside Me")
	

	_G.charSelect.character_add_caps(E_MODEL_FRIEND_INSIDE_ME, CAPTABLE_FRIEND_INSIDE_ME)
	_G.charSelect.character_add_course_texture(CT_FRIEND_INSIDE_ME, FRIEND_INSIDE_MECourseInfo)
	
    CSloaded = true
end


local function on_character_sound(m, sound)
    if not CSloaded then return end
    if _G.charSelect.character_get_voice(m) == VOICETABLE_FRIEND_INSIDE_ME then return _G.charSelect.voice.sound(m, sound) end
end

local function on_character_snore(m)
    if not CSloaded then return end
    if _G.charSelect.character_get_voice(m) == VOICETABLE_FRIEND_INSIDE_ME then return _G.charSelect.voice.snore(m) end
end

local function for_each_object_with_behavior(behavior, func) -- by isaac
    local o = obj_get_first_with_behavior_id(behavior)
    while o do
        func(o)
        o = obj_get_next_with_same_behavior_id(o)
    end
end

--Bubble Functions

local function set_bluebubble(obj)
	if _G.charSelect.character_get_current_number() == CT_FRIEND_INSIDE_ME then
    obj_set_model_extended(obj, E_MODEL_BLUEBUBBLE)
	else
	obj_set_model_extended(obj, E_MODEL_YELLOW_COIN)
	end
end


local function set_redbubble(obj)
	if _G.charSelect.character_get_current_number() == CT_FRIEND_INSIDE_ME then
    obj_set_model_extended(obj, E_MODEL_REDBUBBLE)
	else
	obj_set_model_extended(obj, E_MODEL_RED_COIN)
	end
end



local function set_yellowbubble(obj)
	if _G.charSelect.character_get_current_number() == CT_FRIEND_INSIDE_ME then
    obj_set_model_extended(obj, E_MODEL_YELLOWBUBBLE)
	else
	obj_set_model_extended(obj, E_MODEL_BLUE_COIN)
	end
end



hook_event(HOOK_UPDATE, function()
    for_each_object_with_behavior(id_bhvYellowCoin, set_bluebubble)
    for_each_object_with_behavior(id_bhvMovingYellowCoin, set_bluebubble)
	for_each_object_with_behavior(id_bhvTemporaryYellowCoin, set_bluebubble)
	for_each_object_with_behavior(id_bhvRedCoin, set_redbubble)
	for_each_object_with_behavior(id_bhvBlueCoinJumping, set_yellowbubble)
	for_each_object_with_behavior(id_bhvBlueCoinSliding, set_yellowbubble)
	for_each_object_with_behavior(id_bhvHiddenBlueCoin, set_yellowbubble)
	for_each_object_with_behavior(id_bhvMrIBlueCoin, set_yellowbubble)
	for_each_object_with_behavior(id_bhvMovingBlueCoin, set_yellowbubble)
end)

hook_event(HOOK_ON_MODS_LOADED, on_character_select_load)
hook_event(HOOK_CHARACTER_SOUND, on_character_sound)
hook_event(HOOK_MARIO_UPDATE, on_character_snore)