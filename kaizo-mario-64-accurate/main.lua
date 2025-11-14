-- name: \\#ff0000\\Kaizo \\#dcdcdc\\Mario 64 v1.1
-- description: A hack made by OmegaEdge29 and Released in 2009, Kaizo Mario 64 is a romhack of the game that cranks up the difficulty by a brutal amount.\n\nIt fills every level with annoying enemies, deadly fire, and other kinds of dangerous traps. Even though the level geometry is the same, collecting all 120 stars is one HELL of a challenge.\n\nPorted by B. Bones Johnson
-- incompatible: romhack

gLevelValues.entryLevel = LEVEL_CASTLE_GROUNDS




vec3f_set(gLevelValues.starPositions.KoopaBobStarPos, 3030, 4500, -4600)
vec3f_set(gLevelValues.starPositions.KoopaThiStarPos, 7100, -1300, -6000)
vec3f_set(gLevelValues.starPositions.KingBobombStarPos, 2000.0, 4500.0, -4500.0)
vec3f_set(gLevelValues.starPositions.KingWhompStarPos, 180.0, 3880.0, 340.0)
vec3f_set(gLevelValues.starPositions.EyerockStarPos, 0.0, -900.0, -3700.0)
vec3f_set(gLevelValues.starPositions.BigBullyStarPos, 3700.0, 600.0, -5500.0)
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
vec3f_set(gLevelValues.starPositions.BigBullyTrioStarPos, 0.0, 950.0, -6800.0)


--I FUCKING HATE SHIFTING SAND LAND AND RAINBOW RIDE WHY DON'T THEY WORK WHY WHY WHY WHY WHAT MAKES THEM SO FUCKING DIFFERENT I AM SO DONE

local FRAMES_TO_DELETE = 60

--- @param o Object
local function bhv_collision_pad_init(o)
    o.collisionData = gGlobalObjectCollisionData.exclamation_box_outline_seg8_collision_08025F78
end

--- @param o Object
local function bhv_collision_pad_loop(o)
    load_object_collision_model()

    if o.oTimer >= FRAMES_TO_DELETE then
        o.activeFlags = ACTIVE_FLAG_DEACTIVATED
    end
end

--- @param o Object
local collisionTable = {
    [0] = smlua_collision_util_get("bits_seg7_collision_0701AA84"),
    [1] = smlua_collision_util_get("rr_seg7_collision_07029508"),
}


local angleVelTable = {
    [0] = 300,
    [1] = -300,
    [2] = 600,
    [3] = -600,
	[4] = 1400,
}

local function bhv_rotating_octagonal_plat_init(obj)

	obj.oFlags = (OBJ_FLAG_ACTIVE_FROM_AFAR | OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    local behParams = obj.oBehParams or 0


    local collIndex = (behParams >> 16) & 0xFF
    if collisionTable[collIndex] then
        obj.collisionData = collisionTable[collIndex]
    end


    local velIndex = (behParams >> 24) & 0xFF
    if angleVelTable[velIndex] then
        obj.oAngleVelYaw = angleVelTable[velIndex]
    else
        obj.oAngleVelYaw = 0
    end
end

local function bhv_rotating_octagonal_plat_loop(obj)
	load_object_collision_model()

    obj.oFaceAngleYaw = (obj.oFaceAngleYaw or 0) + (obj.oAngleVelYaw or 0)
end

-- Give 1 HP after bubble pop in Rainbow Ride only because FUCK YOU I AINT LETTING Y'ALL CHEESE THIS ONE WITH BUBBLES

--- @param m MarioState
function on_before_action(m)
    local np = gNetworkPlayers[m.playerIndex]
    if np == nil then return end

    
    if np.currLevelNum ~= LEVEL_RR and np.currLevelNum ~= LEVEL_BITS then return end

    if m.prevAction == ACT_BUBBLED and m.action ~= ACT_BUBBLED then
        m.health = 0x100 
		m.healCounter = 0
    end
end

hook_event(HOOK_BEFORE_SET_MARIO_ACTION, on_before_action)

-- Hook behavior
id_bhvCollisionPad = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_collision_pad_init, bhv_collision_pad_loop, "bhvCollisionSSLThing")
hook_behavior(id_bhvOctagonalPlatformRotating, OBJ_LIST_SURFACE, true, bhv_rotating_octagonal_plat_init, bhv_rotating_octagonal_plat_loop)