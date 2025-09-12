-- name: \\#ff0000\\Kaizo \\#dcdcdc\\Mario 64 \\#F29704\\2
-- description: An unofficial sequel to Kaizo Mario 64 created by MarvMario and MrMarioTendo, it has 108 stars across the vanilla levels, but with more enemies, moved objects, and plenty of fire.
-- incompatible: romhack

gLevelValues.entryLevel = LEVEL_CASTLE_GROUNDS

camera_set_use_course_specific_settings(false)

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


--Safety Measure to avoid ! Boxes not being stand-on-able

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


-- Hook behavior
id_bhvCollisionPad = hook_behavior(nil, OBJ_LIST_SURFACE, true, bhv_collision_pad_init, bhv_collision_pad_loop, "bhvCollisionThing")


