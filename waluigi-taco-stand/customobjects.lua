E_MODEL_TOMATO                       = smlua_model_util_get_id("tomato_geo")
E_MODEL_LETTUCE                      = smlua_model_util_get_id("lettuce_geo")
E_MODEL_BEEF                         = smlua_model_util_get_id("beef_geo")
E_MODEL_MUSHROOM                     = smlua_model_util_get_id("mushroom_geo")
E_MODEL_CHEESE                       = smlua_model_util_get_id("cheese_geo")
E_MODEL_GARLIC                       = smlua_model_util_get_id("garlic_geo")
E_MODEL_COCONUT                      = smlua_model_util_get_id("coconut_geo")
E_MODEL_CACTUS_FOOD                  = smlua_model_util_get_id("cactus_food_geo")
E_MODEL_CHICKEN                      = smlua_model_util_get_id("chicken_geo")
E_MODEL_EYEBALL_FOOD                 = smlua_model_util_get_id("eyeball_food_geo")
E_MODEL_BULLYHORNS                   = smlua_model_util_get_id("bullyhorns_geo")
E_MODEL_SPICY_SAUCE                  = smlua_model_util_get_id("spicy_sauce_geo")
E_MODEL_SPIDER_LEGS                  = smlua_model_util_get_id("spider_legs_geo")

-- Ingredient IDs
INGRED_TOMATO                        = 0
INGRED_LETTUCE                       = 1
INGRED_MUSHROOM                      = 2
INGRED_CHEESE                        = 3
INGRED_BACON                         = 4
INGRED_GARLIC                        = 5
INGRED_COCONUT                       = 6
INGRED_CHICKEN                       = 7
INGRED_CACTUS_FOOD                   = 8
INGRED_SPICY_SAUCE                   = 9
INGRED_SPIDER_LEGS                   = 10
INGRED_BULLYHORNS                    = 11
INGRED_EYEBALL_FOOD                  = 12
INGRED_FISH                          = 13

gGlobalSyncTable.ingred_tomato       = 0
gGlobalSyncTable.ingred_lettuce      = 0
gGlobalSyncTable.ingred_mushroom     = 0
gGlobalSyncTable.ingred_cheese       = 0
gGlobalSyncTable.ingred_bacon        = 0
gGlobalSyncTable.ingred_garlic       = 0
gGlobalSyncTable.ingred_coconut      = 0
gGlobalSyncTable.ingred_chicken      = 0
gGlobalSyncTable.ingred_cactus_food  = 0
gGlobalSyncTable.ingred_spicy_sauce  = 0
gGlobalSyncTable.ingred_spider_legs  = 0
gGlobalSyncTable.ingred_bullyhorns   = 0
gGlobalSyncTable.ingred_eyeball_food = 0
gGlobalSyncTable.ingred_fish         = 0

gGlobalSyncTable.endlessMode         = false

local ingredientKeys                 = {
    [INGRED_TOMATO]       = "ingred_tomato",
    [INGRED_LETTUCE]      = "ingred_lettuce",
    [INGRED_MUSHROOM]     = "ingred_mushroom",
    [INGRED_CHEESE]       = "ingred_cheese",
    [INGRED_BACON]        = "ingred_bacon",
    [INGRED_GARLIC]       = "ingred_garlic",
    [INGRED_COCONUT]      = "ingred_coconut",
    [INGRED_CHICKEN]      = "ingred_chicken",
    [INGRED_CACTUS_FOOD]  = "ingred_cactus_food",
    [INGRED_SPICY_SAUCE]  = "ingred_spicy_sauce",
    [INGRED_SPIDER_LEGS]  = "ingred_spider_legs",
    [INGRED_BULLYHORNS]   = "ingred_bullyhorns",
    [INGRED_EYEBALL_FOOD] = "ingred_eyeball_food",
    [INGRED_FISH]         = "ingred_fish"
}

---@param t integer
function AddIngredient(t)
    local key = ingredientKeys[t]
    if key then
        gGlobalSyncTable[key] = gGlobalSyncTable[key] + 1
    end
end

function ClearIngredients()
    for _, key in pairs(ingredientKeys) do
        gGlobalSyncTable[key] = 0
    end
end

function HasIngredients(requiredList)
    for _, ingredId in ipairs(requiredList) do
        local key = ingredientKeys[ingredId]
        if not key or gGlobalSyncTable[key] <= 0 then
            return false
        end
    end
    return true
end

local IngredientData = {
    [LEVEL_BITDW] = {
        --2ndparam        ingredient             model
        [1] = { ingred = INGRED_LETTUCE, model = E_MODEL_LETTUCE },
        [2] = { ingred = INGRED_CHEESE, model = E_MODEL_CHEESE },
        [4] = { ingred = INGRED_TOMATO, model = E_MODEL_TOMATO },
        [8] = { ingred = INGRED_MUSHROOM, model = E_MODEL_MUSHROOM },
        [45] = { ingred = INGRED_BACON, model = E_MODEL_BEEF },
    },
    [LEVEL_BITFS] = {
        --2ndparam        ingredient             model
        [2] = { ingred = INGRED_COCONUT, model = E_MODEL_COCONUT },
        [4] = { ingred = INGRED_GARLIC, model = E_MODEL_GARLIC },
        [5] = { ingred = INGRED_CHEESE, model = E_MODEL_CHEESE },
        [45] = { ingred = INGRED_BACON, model = E_MODEL_BEEF },
    },
    [LEVEL_BITS] = {
        --2ndparam        ingredient             model
        [1] = { ingred = INGRED_LETTUCE, model = E_MODEL_LETTUCE },
        [4] = { ingred = INGRED_CHEESE, model = E_MODEL_CHEESE },
        [8] = { ingred = INGRED_TOMATO, model = E_MODEL_TOMATO },
        [9] = { ingred = INGRED_CHICKEN, model = E_MODEL_CHICKEN },
        [45] = { ingred = INGRED_BACON, model = E_MODEL_BEEF },
        [46] = { ingred = INGRED_CACTUS_FOOD, model = E_MODEL_CACTUS_FOOD },
        [47] = { ingred = INGRED_CHICKEN, model = E_MODEL_CHICKEN },
    },
    [LEVEL_WMOTR] = {
        --2ndparam        ingredient             model
        [1] = { ingred = INGRED_SPICY_SAUCE, model = E_MODEL_SPICY_SAUCE },
        [42] = { ingred = INGRED_BULLYHORNS, model = E_MODEL_BULLYHORNS },
        [43] = { ingred = INGRED_SPIDER_LEGS, model = E_MODEL_SPIDER_LEGS },
        [44] = { ingred = INGRED_EYEBALL_FOOD, model = E_MODEL_EYEBALL_FOOD },
        [45] = { ingred = INGRED_BACON, model = E_MODEL_BEEF },
    },
}

SOUND_GENERAL_SHORT_STAR_CUSTOM = SOUND_ARG_LOAD(SOUND_BANK_GENERAL, 0x16, 0x00, SOUND_DISCRETE)

function ingredient_init(o)
    network_init_object(o, true, nil)
end

---@param o Object
function Func_Custom_0x8040a800(o)
    o.oGraphYOffset = -15
    if get_global_timer() & 4 == 0 then
        spawn_non_sync_object(id_bhvSparkleSpawn, E_MODEL_NONE, o.oPosX, o.oPosY, o.oPosZ, nil)
    end
    cur_obj_scale(0.38)
    if IngredientData[gNetworkPlayers[0].currLevelNum] then
        local data = IngredientData[gNetworkPlayers[0].currLevelNum][o.oBehParams2ndByte]
        if data then
            obj_set_model_extended(o, data.model)

            local player = nearest_player_to_object(o)
            if obj_check_hitbox_overlap(o, player) then
                AddIngredient(data.ingred)
                obj_mark_for_deletion(o)
                play_sound(SOUND_GENERAL_SHORT_STAR_CUSTOM, gGlobalSoundSource);
            end
        end
    end
end

local function goomba_update_edit(o)
    o.oNumLootCoins = 0
end

local function piranha_update_edit(o)
    if o.oAction == PIRANHA_PLANT_ACT_SHRINK_AND_DIE and o.oTimer == 0 then
        if is_nearest_mario_state_to_object(gMarioStates[0], o) ~= 0 then
            spawn_sync_object(Bhv_Custom_0x13000174, E_MODEL_NONE, o.oPosX, o.oPosY, o.oPosZ,
                function(obj)
                    obj.oBehParams2ndByte = 1
                end)
        end
    end
end

local bhvNewGoomba = hook_behavior(id_bhvGoomba, OBJ_LIST_PUSHABLE, false, nil, goomba_update_edit)
local bhvNewScuttlebug = hook_behavior(id_bhvScuttlebug, OBJ_LIST_PUSHABLE, false, nil, goomba_update_edit)
local bhvNewBully = hook_behavior(id_bhvSmallBully, OBJ_LIST_PUSHABLE, false, nil, goomba_update_edit)
local bhvNewPiranhaPlant = hook_behavior(id_bhvPiranhaPlant, OBJ_LIST_GENACTOR, false, nil, piranha_update_edit)

local bhvNewKlepto = hook_behavior(id_bhvKlepto, OBJ_LIST_GENACTOR, true,
    function(o)
        o.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE|OBJ_FLAG_MOVE_XZ_USING_FVEL|OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW

        o.oAnimations = gObjectAnimations.klepto_seg5_anims_05008CFC
        cur_obj_init_animation(0)
        o.hitboxRadius = 200
        o.hitboxHeight = 130
        network_init_object(o, true, nil)
    end,
    function(o)
        if o.oAction == 0 then
            o.oForwardVel = 16
            o.oMoveAngleYaw = o.oMoveAngleYaw + 0x125
            if obj_check_hitbox_overlap(o, nearest_player_to_object(o)) then
                o.oAction = 1
                play_sound(SOUND_OBJ_KLEPTO1, gGlobalSoundSource)
            end
        elseif o.oAction == 1 then
            o.oForwardVel = 0
            cur_obj_init_animation(1)
            o.header.gfx.animInfo.animFrame = 0

            o.oPosY = o.oPosY - 30

            if o.oPosY <= 0 then
                if is_nearest_mario_state_to_object(gMarioStates[0], o) ~= 0 then
                    spawn_sync_object(Bhv_Custom_0x13000174, E_MODEL_NONE, o.oPosX, o.oPosY + 30, o.oPosZ,
                        function(obj)
                            obj.oBehParams2ndByte = 9
                        end)
                end
                obj_mark_for_deletion(o)
            end
        end
    end)

hook_behavior(id_bhvMrIBlueCoin, OBJ_LIST_DESTRUCTIVE, true, nil, function(o) obj_mark_for_deletion(o) end)
hook_behavior(id_bhvMovingYellowCoin, OBJ_LIST_DESTRUCTIVE, true, nil, function(o) obj_mark_for_deletion(o) end)

hook_event(HOOK_ON_OBJECT_UNLOAD, function(o)
    local bhvId = get_id_from_behavior(o.behavior)
    local toSpawnbyte = -1
    if bhvId == bhvNewGoomba then
        toSpawnbyte = 45
    elseif bhvId == id_bhvPokey then
        toSpawnbyte = 46
    elseif bhvId == bhvNewScuttlebug then
        toSpawnbyte = 43
    elseif bhvId == id_bhvMrI then
        toSpawnbyte = 44
    elseif bhvId == bhvNewBully then
        toSpawnbyte = 42
    end

    if toSpawnbyte ~= -1 then
        spawn_sync_object(Bhv_Custom_0x13000174, E_MODEL_NONE, o.oPosX, o.oPosY, o.oPosZ,
            function(obj)
                obj.oBehParams2ndByte = toSpawnbyte
                if bhvId == bhvNewBully then
                    obj.oPosY = obj.oPosY + 400
                end
            end)
    end
end)

local function dorrie_new(o)
    o.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE|OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW|OBJ_FLAG_MOVE_XZ_USING_FVEL
    o.oAnimations = gObjectAnimations.dorrie_seg6_anims_0600F638
    o.collisionData = gGlobalObjectCollisionData.dorrie_seg6_collision_0600F644
    o.oCollisionDistance = 4000
    cur_obj_init_animation(0)
    cur_obj_set_home_once()
    o.oFriction = 1000
    o.oDragStrength = 2
    o.oGravity = -400
    o.oWallHitboxRadius = 1000
    --GETOU-
    --network_init_object(o, true, nil)
end

local function dorrie_new_loop(o)
    if gMarioStates[0].marioObj.platform == o then
        o.oForwardVel = approach_s16_symmetric(o.oForwardVel, 45, 3)
        o.oMoveAngleYaw = approach_s16_symmetric(o.oMoveAngleYaw, gMarioStates[0].faceAngle.y, 0x150)
    else
        o.oForwardVel = approach_s16_symmetric(o.oForwardVel, 11, 3)
        o.oMoveAngleYaw = o.oMoveAngleYaw + 0x90
    end
    load_object_collision_model()
end

hook_behavior(id_bhvDorrie, OBJ_LIST_SURFACE, true, dorrie_new, dorrie_new_loop)

function mr_rent_update(o)
    o.oFriction = 1
    cur_obj_move_standard(-78)
    vec3f_set(o.header.gfx.pos, o.oPosX, o.oPosY, o.oPosZ)
    vec3f_set(o.header.gfx.angle, o.oFaceAnglePitch, o.oFaceAngleYaw, o.oFaceAngleRoll)
    if o.oAction == 0 then
        if cutscene_object_with_dialog(CUTSCENE_DIALOG, o, 41) ~= 0 then
            o.oAction = 1
            o.oMoveAngleYaw = o.oMoveAngleYaw + 32768
            o.oFaceAngleYaw = o.oMoveAngleYaw
        end
    elseif o.oAction == 1 then
        o.oForwardVel = 8
        cur_obj_init_animation_with_accel_and_sound(9, 8 * 0.09);
    end

    if o.oPosX > 1160 then
        obj_mark_for_deletion(o)
    end
end

CustomersDefault = {
    --GROUP 1
    {
        model = E_MODEL_GOOMBA,
        dialog = 32,
        ingreds = { INGRED_BACON, INGRED_CHEESE },
        anims = gObjectAnimations.goomba_seg8_anims_0801DA4C,
        defaultanim = 0,
        lvl = LEVEL_BITDW
    },
    {
        model = E_MODEL_GOOMBA,
        dialog = 19,
        ingreds = { INGRED_LETTUCE, INGRED_BACON },
        anims = gObjectAnimations.goomba_seg8_anims_0801DA4C,
        defaultanim = 0,
        lvl = LEVEL_BITDW
    },
    {
        model = E_MODEL_KOOPA_WITH_SHELL,
        dialog = 30,
        ingreds = { INGRED_LETTUCE, INGRED_TOMATO, INGRED_MUSHROOM },
        anims = gObjectAnimations.koopa_seg6_anims_06011364,
        defaultanim = 7,
        lvl = LEVEL_BITDW,
    },
    --GROUP 2
    {
        model = E_MODEL_GOOMBA,
        dialog = 35,
        ingreds = { INGRED_FISH },
        anims = gObjectAnimations.goomba_seg8_anims_0801DA4C,
        defaultanim = 0,
        lvl = LEVEL_BITFS
    },
    {
        model = E_MODEL_UKIKI,
        dialog = 36,
        ingreds = { INGRED_COCONUT, INGRED_BACON },
        anims = gObjectAnimations.ukiki_seg5_anims_05015784,
        defaultanim = 7,
        lvl = LEVEL_BITFS
    },
    {
        model = E_MODEL_UKIKI,
        dialog = 39,
        ingreds = { INGRED_GARLIC },
        anims = gObjectAnimations.ukiki_seg5_anims_05015784,
        defaultanim = 7,
        lvl = LEVEL_BITFS
    },
    {
        model = E_MODEL_KOOPA_WITH_SHELL,
        dialog = 40,
        ingreds = { INGRED_BACON, INGRED_CHEESE },
        anims = gObjectAnimations.koopa_seg6_anims_06011364,
        defaultanim = 7,
        lvl = LEVEL_BITFS,
    },
    {
        model = E_MODEL_GOOMBA,
        dialog = 42,
        ingreds = { INGRED_COCONUT, INGRED_FISH, INGRED_BACON, INGRED_CHEESE, INGRED_GARLIC },
        anims = gObjectAnimations.goomba_seg8_anims_0801DA4C,
        defaultanim = 0,
        lvl = LEVEL_BITFS
    },
    --GROUP 3
    {
        model = E_MODEL_UKIKI,
        dialog = 43,
        ingreds = { INGRED_CHEESE, INGRED_LETTUCE, INGRED_BACON },
        anims = gObjectAnimations.ukiki_seg5_anims_05015784,
        defaultanim = 7,
        lvl = LEVEL_BITS
    },
    {
        model = E_MODEL_KOOPA_WITH_SHELL,
        dialog = 46,
        ingreds = { INGRED_LETTUCE, INGRED_TOMATO, INGRED_CACTUS_FOOD },
        anims = gObjectAnimations.koopa_seg6_anims_06011364,
        defaultanim = 7,
        lvl = LEVEL_BITS
    },
    {
        model = E_MODEL_KOOPA_WITH_SHELL,
        dialog = 49,
        ingreds = { INGRED_CACTUS_FOOD, INGRED_TOMATO, INGRED_CHEESE },
        anims = gObjectAnimations.koopa_seg6_anims_06011364,
        defaultanim = 7,
        lvl = LEVEL_BITS
    },
    {
        model = E_MODEL_GOOMBA,
        dialog = 48,
        ingreds = { INGRED_CHICKEN },
        anims = gObjectAnimations.goomba_seg8_anims_0801DA4C,
        defaultanim = 0,
        lvl = LEVEL_BITS
    },
    {
        model = E_MODEL_WHOMP,
        dialog = 50,
        ingreds = { INGRED_CHICKEN, INGRED_BACON },
        anims = gObjectAnimations.whomp_seg6_anims_06020A04,
        defaultanim = 0,
        lvl = LEVEL_BITS
    },
    {
        model = E_MODEL_GOOMBA,
        dialog = 51,
        ingreds = { INGRED_LETTUCE, INGRED_TOMATO, INGRED_BACON },
        anims = gObjectAnimations.goomba_seg8_anims_0801DA4C,
        defaultanim = 0,
        lvl = LEVEL_BITS
    },
    --GROUP 4
    {
        model = E_MODEL_WHOMP,
        dialog = 53,
        ingreds = { INGRED_SPIDER_LEGS, INGRED_BACON, INGRED_SPICY_SAUCE, INGRED_EYEBALL_FOOD, INGRED_BULLYHORNS },
        anims = gObjectAnimations.whomp_seg6_anims_06020A04,
        defaultanim = 0,
        lvl = LEVEL_WMOTR
    },
    --GROUP 5
    {
        model = E_MODEL_KOOPA_WITH_SHELL,
        dialog = 52,
        ingreds = {},
        anims = gObjectAnimations.koopa_seg6_anims_06011364,
        defaultanim = 7,
        lvl = LEVEL_BITS
    },
}

CustomersEndless = {
    --GROUP 1
    {
        model = E_MODEL_TOAD,
        dialog = DIALOG_160,
        ingreds = { INGRED_LETTUCE },
        anims = gObjectAnimations.toad_seg6_anims_0600FB58,
        defaultanim = 6,
        lvl = LEVEL_BITS
    },
    {
        model = E_MODEL_KOOPA_WITHOUT_SHELL,
        dialog = DIALOG_161,
        ingreds = { INGRED_LETTUCE, INGRED_BACON, INGRED_TOMATO },
        anims = gObjectAnimations.koopa_seg6_anims_06011364,
        defaultanim = 7,
        lvl = LEVEL_BITDW
    },
    {
        model = E_MODEL_KOOPA_WITH_SHELL,
        dialog = DIALOG_162,
        ingreds = { INGRED_EYEBALL_FOOD, INGRED_BULLYHORNS, INGRED_SPICY_SAUCE },
        anims = gObjectAnimations.koopa_seg6_anims_06011364,
        defaultanim = 7,
        lvl = LEVEL_WMOTR,
    },
    --GROUP 2
    {
        model = E_MODEL_GOOMBA,
        dialog = DIALOG_163,
        ingreds = { INGRED_COCONUT, INGRED_GARLIC },
        anims = gObjectAnimations.goomba_seg8_anims_0801DA4C,
        defaultanim = 0,
        lvl = LEVEL_BITFS
    },
    {
        model = E_MODEL_UKIKI,
        dialog = DIALOG_164,
        ingreds = { INGRED_SPICY_SAUCE },
        anims = gObjectAnimations.ukiki_seg5_anims_05015784,
        defaultanim = 7,
        lvl = LEVEL_WMOTR
    },
    {
        model = E_MODEL_UKIKI,
        dialog = DIALOG_165,
        ingreds = { INGRED_BACON },
        anims = gObjectAnimations.ukiki_seg5_anims_05015784,
        defaultanim = 7,
        lvl = LEVEL_BITS
    },
    {
        model = E_MODEL_KOOPA_WITH_SHELL,
        dialog = DIALOG_166,
        ingreds = { INGRED_GARLIC, INGRED_CHEESE },
        anims = gObjectAnimations.koopa_seg6_anims_06011364,
        defaultanim = 7,
        lvl = LEVEL_BITFS,
    },
    {
        model = E_MODEL_KOOPA_WITH_SHELL,
        dialog = DIALOG_167,
        ingreds = { INGRED_CHICKEN, INGRED_CHEESE },
        anims = gObjectAnimations.koopa_seg6_anims_06011364,
        defaultanim = 7,
        lvl = LEVEL_BITS,
    },
    {
        model = E_MODEL_UKIKI,
        dialog = 43,
        ingreds = { INGRED_CHEESE, INGRED_LETTUCE, INGRED_BACON },
        anims = gObjectAnimations.ukiki_seg5_anims_05015784,
        defaultanim = 7,
        lvl = LEVEL_BITS
    },
    {
        model = E_MODEL_KOOPA_WITH_SHELL,
        dialog = 46,
        ingreds = { INGRED_LETTUCE, INGRED_TOMATO, INGRED_CACTUS_FOOD },
        anims = gObjectAnimations.koopa_seg6_anims_06011364,
        defaultanim = 7,
        lvl = LEVEL_BITS
    },
    {
        model = E_MODEL_KOOPA_WITH_SHELL,
        dialog = 49,
        ingreds = { INGRED_CACTUS_FOOD, INGRED_TOMATO, INGRED_CHEESE },
        anims = gObjectAnimations.koopa_seg6_anims_06011364,
        defaultanim = 7,
        lvl = LEVEL_BITS
    },
    {
        model = E_MODEL_GOOMBA,
        dialog = 35,
        ingreds = { INGRED_FISH },
        anims = gObjectAnimations.goomba_seg8_anims_0801DA4C,
        defaultanim = 0,
        lvl = LEVEL_BITFS
    },
    {
        model = E_MODEL_UKIKI,
        dialog = 36,
        ingreds = { INGRED_COCONUT, INGRED_BACON },
        anims = gObjectAnimations.ukiki_seg5_anims_05015784,
        defaultanim = 7,
        lvl = LEVEL_BITFS
    },
    {
        model = E_MODEL_UKIKI,
        dialog = 39,
        ingreds = { INGRED_GARLIC },
        anims = gObjectAnimations.ukiki_seg5_anims_05015784,
        defaultanim = 7,
        lvl = LEVEL_BITFS
    },
    {
        model = E_MODEL_KOOPA_WITH_SHELL,
        dialog = 40,
        ingreds = { INGRED_BACON, INGRED_CHEESE },
        anims = gObjectAnimations.koopa_seg6_anims_06011364,
        defaultanim = 7,
        lvl = LEVEL_BITFS,
    },
    {
        model = E_MODEL_GOOMBA,
        dialog = 42,
        ingreds = { INGRED_COCONUT, INGRED_FISH, INGRED_BACON, INGRED_CHEESE, INGRED_GARLIC },
        anims = gObjectAnimations.goomba_seg8_anims_0801DA4C,
        defaultanim = 0,
        lvl = LEVEL_BITFS
    },
}

customToID = {
    [0] = CustomersDefault,
    [1] = CustomersEndless
}

gGlobalSyncTable.CustomersID = 0
Customers = customToID[gGlobalSyncTable.CustomersID]

gGlobalSyncTable.currentCustomer = 1

local function customer_init(o)
    o.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    o.oOpacity = 255

    local customer = Customers[o.oBehParams]
    if gGlobalSyncTable.endlessMode then
        if network_is_server() then
            gGlobalSyncTable.currentCustomer = random_u16() % #Customers
            if gGlobalSyncTable.currentCustomer == 16 then
                gGlobalSyncTable.currentCustomer = 12
            end

            if gGlobalSyncTable.currentCustomer <= 0 then
                gGlobalSyncTable.currentCustomer = 3
            end
            customer = Customers[random_u16() % #Customers]
        end
    end
    if not customer then return end
    obj_set_model_extended(o, customer.model)

    o.oAnimations = customer.anims
    cur_obj_init_animation(customer.defaultanim)
    local scale = 1.5
    if customer.model == E_MODEL_GOOMBA then
        scale = 1.7
    elseif customer.model == E_MODEL_KOOPA_WITH_SHELL then
        scale = 2.1
    elseif customer.model == E_MODEL_WHOMP then
        scale = 1.1
    elseif customer.model == E_MODEL_UKIKI then
        scale = 1
    end
    cur_obj_scale(scale)
    o.oPosY = find_floor_height(o.oPosX, o.oPosY, o.oPosZ)
    o.oFaceAngleYaw = o.oFaceAngleYaw - 16384
end

local function customer_spawn_loop(o)
    math.randomseed(math.random(234, 29839834), get_time())
    local iForPos = 0
    local spawnSize = #Customers
    if gGlobalSyncTable.tacoRank == 0 then
        spawnSize = 3
    elseif gGlobalSyncTable.tacoRank == 1 then
        spawnSize = 8
    elseif gGlobalSyncTable.tacoRank == 2 then
        spawnSize = 14
    elseif gGlobalSyncTable.tacoRank == 3 then
        spawnSize = 15
    elseif gGlobalSyncTable.tacoRank == 4 then
        spawnSize = 16
    end
    local spawnReal = gGlobalSyncTable.currentCustomer
    if gGlobalSyncTable.endlessMode then
        for i = 1, 90 do
            iForPos = iForPos + 1
            spawn_non_sync_object(bhvCustomer, 0, o.oPosX - (sins(10970) * (iForPos * 260)), o.oPosY,
                o.oPosZ - (coss(10970) * (iForPos * 260)), function(k)
                    k.oBehParams = i
                    if iForPos == 1 then
                        k.oFaceAngleYaw = k.oFaceAngleYaw - 16384
                    end
                end)
        end
    else
        for i = spawnReal, spawnSize do
            iForPos = iForPos + 1
            spawn_non_sync_object(bhvCustomer, 0, o.oPosX - (sins(10970) * (iForPos * 260)), o.oPosY,
                o.oPosZ - (coss(10970) * (iForPos * 260)), function(k)
                    k.oBehParams = i
                    if iForPos == 1 then
                        k.oFaceAngleYaw = k.oFaceAngleYaw - 16384
                    end
                end)
        end
    end
    obj_mark_for_deletion(o);
end

bhvCustomerSpawner = hook_behavior(nil, OBJ_LIST_GENACTOR, true, function(o) network_init_object(o, true, nil) end,
    customer_spawn_loop)
bhvCustomer = hook_behavior(nil, OBJ_LIST_GENACTOR, true, customer_init, nil)

local function fish_ingredient(o)
    o.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE|OBJ_FLAG_MOVE_XZ_USING_FVEL|OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW
    o.oAnimations = gObjectAnimations.blue_fish_seg3_anims_0301C2B0
    cur_obj_init_animation(0)
    o.oAngleVelYaw = o.oFaceAngleYaw
    o.oAngleVelPitch = o.oFaceAngleYaw + 32768
    o.hitboxRadius = 40
    o.hitboxHeight = 40
    network_init_object(o, true, nil)
end

local function fish_ingredient_loop(o)
    o.oForwardVel = 8

    if o.oAction == 0 then
        o.oMoveAngleYaw = approach_s16_symmetric(o.oMoveAngleYaw, o.oAngleVelYaw, 0x300)
        if o.oTimer > 80 then
            o.oAction = 1
            o.oTimer = 0
        end
    elseif o.oAction == 1 then
        o.oMoveAngleYaw = approach_s16_symmetric(o.oMoveAngleYaw, o.oAngleVelPitch, 0x300)
        if o.oTimer > 80 then
            o.oAction = 0
            o.oTimer = 0
        end
    end
    if get_global_timer() & 6 == 0 then
        spawn_non_sync_object(id_bhvSparkleSpawn, E_MODEL_NONE, o.oPosX, o.oPosY, o.oPosZ, nil)
    end
    if obj_check_hitbox_overlap(o, nearest_player_to_object(o)) then
        AddIngredient(INGRED_FISH)
        play_sound(SOUND_GENERAL_SHORT_STAR_CUSTOM, gGlobalSoundSource);
        obj_mark_for_deletion(o)
    end
end

hook_behavior(id_bhvCapSwitchBase, OBJ_LIST_GENACTOR, true, fish_ingredient, fish_ingredient_loop)

local function mouse_init(o)
    o.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE|OBJ_FLAG_MOVE_XZ_USING_FVEL|OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW
    o.oInteractType = INTERACT_DAMAGE
    o.oMoveAngleYaw = 11374
    o.oAngleVelYaw = o.oFaceAngleYaw
    o.oAngleVelPitch = o.oFaceAngleYaw + 32768
    o.hitboxRadius = 60
    o.hitboxHeight = 60
    o.oAction = 2
    o.oDamageOrCoinValue = 1
    o.oIntangibleTimer = 0
    cur_obj_set_home_once()
    obj_set_model_extended(o, E_MODEL_YOSHI_EGG)
    network_init_object(o, true, nil)
    obj_set_billboard(o)
end

local function mouse_loop(o)
    o.oAnimState = o.oAnimState + 1

    if o.oAction == 0 then
        o.oForwardVel = 8

        if o.oTimer > 80 then
            o.oAction = 1
            o.oTimer = 0
        end
    elseif o.oAction == 1 then
        o.oForwardVel = -8
        if o.oTimer > 80 then
            o.oAction = 0
            o.oTimer = 0
        end
    elseif o.oAction == 2 then
        cur_obj_set_pos_to_home()
        cur_obj_hide()
    end
    local p = nearest_player_to_object(o)
    if o.oAction == 2 then
        if dist_between_objects(o, p) < 800 then
            o.oAction = 0
            cur_obj_unhide()
        end
    end
    if dist_between_objects(o, p) > 800 then
        o.oAction = 2
    end
    if o.oInteractStatus ~= 0 then
        if is_nearest_mario_state_to_object(gMarioStates[0], o) ~= 0 then
            spawn_sync_object(Bhv_Custom_0x13000174, E_MODEL_NONE, o.oPosX + 200, o.oPosY, o.oPosZ,
                function(obj)
                    obj.oBehParams2ndByte = 5
                end)
        end
    end
    o.oInteractStatus = 0
end


Bhv_Custom_0x130001e0 = hook_behavior(nil, OBJ_LIST_GENACTOR, true, mouse_init, mouse_loop)
