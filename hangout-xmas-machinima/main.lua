-- name: \\#E46009\\[Hangout]\\#dcdcdc\\ Christmas Machinima Map
-- description: A short christmas themed map with a custom song and no evident goal created by Bronzed_Mario3. It is unknown in what video it appears, it's been now turned into a hangout map you can visit with the /xmas-machinima command.\n\nPorted by B. Bones Johnson

LEVEL_XMAS_MACHINIMA = level_register("level_xmas_machinima_entry", COURSE_NONE, "Christmas Machinima Map", "xmach", 28000, 0x00, 0x28, 0x28)

local function xmasmachinima()
    if gNetworkPlayers[0] then
        warp_to_level(LEVEL_XMAS_MACHINIMA, 1, 0)
        return true
    end
end

local function xmasinit()
    if gNetworkPlayers[0].currLevelNum == LEVEL_XMAS_MACHINIMA then
        area_get_warp_node(0xF0).node.destLevel = LEVEL_XMAS_MACHINIMA
        area_get_warp_node(0xF1).node.destLevel = LEVEL_XMAS_MACHINIMA
        area_get_warp_node(0x08).node.destLevel = LEVEL_XMAS_MACHINIMA
        area_get_warp_node(16).node.destLevel = LEVEL_XMAS_MACHINIMA
    end
end
hook_event(HOOK_ON_LEVEL_INIT, xmasinit)


hook_chat_command("xmasch", "Warps you to the Christmas Machinima Map", xmasmachinima)


smlua_audio_utils_replace_sequence(0x4A, 0x25, 75, "xmas-machinima")

smlua_text_utils_dialog_replace(DIALOG_167,1,3,30,200,
("You can exit back\
to Castle Grounds using\
this here Warp Pipe."))