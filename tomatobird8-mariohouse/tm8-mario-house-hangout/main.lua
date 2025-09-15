-- name: [Hangout] Mario's House (Tomatobird8 Ver.)
-- description: An Old Hack by Tomatobird8 that replaces Bob-Omb Battlefield with Mario's House which you can explore. Now turned into a hangout map you can visit with the /house-tb8 command.

LEVEL_TB8_HOUSE = level_register("level_tm8house_entry", COURSE_NONE, "Mario's House (Tomatobird8 Version)", "tb8", 28000, 0x00, 0x28, 0x28)

function markhouse()
    if gNetworkPlayers[0] then
        warp_to_level(LEVEL_TB8_HOUSE, 1, 0)
        return true
    end
end

hook_chat_command("house-tb8", "Warps you to Mario's House (Tomatobird8 Ver.)", markhouse)

movtexqc_register('tb8housewater', LEVEL_TB8_HOUSE, 1, 0)