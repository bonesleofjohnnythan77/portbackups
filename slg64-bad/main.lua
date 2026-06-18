-- name: Super Luigi Galaxy 64 DEMO 2.0b
-- description: Extracted with rom-decomp-64.
-- incompatible: romhack

gLevelValues.fixCollisionBugs = true
gLevelValues.cellHeightLimit = 32767
gLevelValues.floorLowerLimit = -32768
gLevelValues.floorLowerLimitMisc = -31768
gLevelValues.floorLowerLimitShadow = -31768
gServerSettings.skipIntro = 1
movtexqc_register('jrb_area_1_water_type_0_collection', LEVEL_JRB, 1, 0)

camera_set_use_course_specific_settings(0)
camera_set_romhack_override(RCO_ALL)
rom_hack_cam_set_collisions(0)
camera_romhack_allow_centering(0)
camera_romhack_allow_dpad_usage(1)
camera_allow_toxic_gas_camera(1)

local msg = true

hook_event(HOOK_ON_LEVEL_INIT, function ()
    if msg then
        djui_popup_create("\\#FF0000\\IMPORTANT!\n\\#FFFFFF\\If you get stuck in a wall or in a black screen use the \\#FF0000\\/imstuck\\#FFFFFF\\ chat command to return to the start level.", 4)
        msg = nil
    end
    
end)

hook_chat_command("imstuck", "\\#FFFFFF\\Warps you back to the start level if you get softlocked.", function ()
    warp_to_start_level()
    djui_chat_message_create("Im no longer stuck! You saved me!")
    return true
end)

vec3f_set(gLevelValues.starPositions.KoopaBobStarPos, 3030, 4500, -4600)
vec3f_set(gLevelValues.starPositions.KoopaThiStarPos, 7100, -1300, -6000)
vec3f_set(gLevelValues.starPositions.KingBobombStarPos, -522.0, 0.0, 795.0)
vec3f_set(gLevelValues.starPositions.KingWhompStarPos, 180.0, 3880.0, 340.0)
vec3f_set(gLevelValues.starPositions.EyerockStarPos, -159.0, -1168.0, -975.0)
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