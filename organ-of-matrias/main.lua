-- name: \\#59d7c0\\Organ of Matrias
-- description: 
-- incompatible: romhack

gLevelValues.entryLevel = LEVEL_CASTLE


gServerSettings.skipIntro = 1
gServerSettings.stayInLevelAfterStar = false

camera_set_use_course_specific_settings(0)
camera_set_romhack_override(RCO_ALL)
rom_hack_cam_set_collisions(0)
camera_romhack_allow_centering(0)

smlua_audio_utils_replace_sequence(0x01, 0x22, 75, "01_Seq_custom")
smlua_audio_utils_replace_sequence(0x02, 0x11, 75, "02_Seq_custom")
smlua_audio_utils_replace_sequence(0x0B, 0x14, 75, "0B_Seq_custom")
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
smlua_audio_utils_replace_sequence(0x1E, 0x1B, 75, "1E_Seq_custom")
smlua_audio_utils_replace_sequence(0x1F, 0x1A, 75, "1F_Seq_custom")
smlua_audio_utils_replace_sequence(0x20, 0x23, 75, "20_Seq_custom")
smlua_audio_utils_replace_sequence(0x21, 0x24, 75, "21_Seq_custom")
smlua_audio_utils_replace_sequence(0x23, 0x25, 75, "23_Seq_custom")
smlua_audio_utils_replace_sequence(0x24, 0x25, 75, "24_Seq_custom")
smlua_audio_utils_replace_sequence(0x31, 0x1D, 75, "31_Seq_custom")

set_exclamation_box_contents({
    { id = 0,  unused = 0, firstByte = 0, model = E_MODEL_MARIOS_WING_CAP,   behavior = id_bhvWingCap },
    { id = 1,  unused = 0, firstByte = 0, model = E_MODEL_MARIOS_METAL_CAP,  behavior = id_bhvMetalCap },
    { id = 2,  unused = 0, firstByte = 0, model = E_MODEL_MARIOS_CAP,        behavior = id_bhvVanishCap },
    { id = 3,  unused = 0, firstByte = 0, model = E_MODEL_KOOPA_SHELL,       behavior = id_bhvKoopaShell },
    { id = 4,  unused = 0, firstByte = 0, model = E_MODEL_YELLOW_COIN,       behavior = id_bhvSingleCoinGetsSpawned },
    { id = 5,  unused = 0, firstByte = 0, model = E_MODEL_NONE,              behavior = id_bhvThreeCoinsSpawn },
    { id = 6,  unused = 0, firstByte = 0, model = E_MODEL_NONE,              behavior = id_bhvTenCoinsSpawn },
    { id = 7,  unused = 0, firstByte = 0, model = E_MODEL_1UP,               behavior = id_bhv1upWalking },
    { id = 8,  unused = 0, firstByte = 0, model = E_MODEL_STAR,              behavior = id_bhvSpawnedStar },
    { id = 9,  unused = 0, firstByte = 0, model = E_MODEL_NONE,               behavior = id_bhvSpeedMario },
    { id = 10, unused = 0, firstByte = 1, model = E_MODEL_STAR,              behavior = id_bhvSpawnedStar },
    { id = 11, unused = 0, firstByte = 2, model = E_MODEL_STAR,              behavior = id_bhvSpawnedStar },
    { id = 12, unused = 0, firstByte = 3, model = E_MODEL_STAR,              behavior = id_bhvSpawnedStar },
    { id = 13, unused = 0, firstByte = 4, model = E_MODEL_STAR,              behavior = id_bhvSpawnedStar },
    { id = 14, unused = 0, firstByte = 5, model = E_MODEL_STAR,              behavior = id_bhvSpawnedStar },
  --{ id = 99, unused = 0, firstByte = 0, model = E_MODEL_NONE,              behavior = nil },
})

vec3f_set(gLevelValues.starPositions.KoopaBobStarPos, 3030, 4500, -4600)
vec3f_set(gLevelValues.starPositions.KoopaThiStarPos, 7100, -1300, -6000)
vec3f_set(gLevelValues.starPositions.KingBobombStarPos, 2000.0, 4500.0, -4500.0)
vec3f_set(gLevelValues.starPositions.KingWhompStarPos, 180.0, 3880.0, 340.0)
vec3f_set(gLevelValues.starPositions.EyerockStarPos, 0.0, -900.0, -3700.0)
vec3f_set(gLevelValues.starPositions.BigBullyStarPos, 0, 950.0, -6800.0)
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
vec3f_set(gLevelValues.starPositions.MrIStarPos, 1370, 2000.0, -320.0)
vec3f_set(gLevelValues.starPositions.BalconyBooStarPos, 700.0, 3200.0, 1900.0)
vec3f_set(gLevelValues.starPositions.BigBullyTrioStarPos, 3700.0, 600.0, -5500.0)

--Disable Act Select on Tetrisworld

hook_event(HOOK_USE_ACT_SELECT, function(levelNum)
    -- Only disable Act Select on Whomp's Fortress (LEVEL_WF is 2)
    if levelNum == LEVEL_WF then
        return false
    end

    -- Let the default behavior happen elsewhere
    return nil
end)

--Act 6 Sparkles of Doom

local function bhv_challenge_effect_loop(o)
    -- Only activate during LEVEL_BOB, Act 6
    if gNetworkPlayers[0].currLevelNum ~= LEVEL_BOB or gNetworkPlayers[0].currActNum ~= 6 then
        return
    end

    local p = gMarioStates[0].marioObj
    if not p then return end

    -- Spawn sparkles around Mario (non-sync, cosmetic)
    spawn_non_sync_object(id_bhvSparkleSpawn, E_MODEL_NONE,
        p.oPosX, p.oPosY + 50, p.oPosZ, nil)

	if o.oTimer == 55 then
        spawn_non_sync_object(id_bhvBowserShockWave, E_MODEL_BOWSER_WAVE,
            p.oPosX, p.oPosY, p.oPosZ, nil)
    elseif o.oTimer > 55 then
        o.oTimer = 0
    end

end

-- Register as a dummy behavior so its loop runs constantly
id_bhvChallengeEffect = hook_behavior(nil, OBJ_LIST_DEFAULT, true, nil, bhv_challenge_effect_loop)

