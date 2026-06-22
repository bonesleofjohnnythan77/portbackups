gGlobalSyncTable.gameComplete = 0
if network_is_server() then
    local save = get_current_save_file_num() - 1
    local customerText = "customer" .. save
    local rankText = "tacoRank" .. save
    local gameCompText = "gameComp" .. save
    local function SaveAll()
        if get_global_timer() & 32 == 0 then
            if gGlobalSyncTable.gameComplete == 0 then
                mod_storage_save_number(customerText, gGlobalSyncTable.currentCustomer)
                mod_storage_save_number(rankText, gGlobalSyncTable.tacoRank)
            end
            mod_storage_save_number(gameCompText, gGlobalSyncTable.gameComplete)
        end
    end

    if save_file_get_flags() & SAVE_FLAG_HAVE_METAL_CAP == 0 then
        gGlobalSyncTable.currentCustomer = 1
        gGlobalSyncTable.tacoRank = 0
        gGlobalSyncTable.gameComplete=0
        mod_storage_save_number(customerText, gGlobalSyncTable.currentCustomer)
        mod_storage_save_number(rankText, gGlobalSyncTable.tacoRank)
        mod_storage_save_number(gameCompText, gGlobalSyncTable.gameComplete)
    else
        local loadcustom = mod_storage_load_number(customerText)
        local loadrank = mod_storage_load_number(rankText)
        local loadgame = mod_storage_load_number(gameCompText)
        if loadcustom == 0 then loadcustom = 1 end
        gGlobalSyncTable.currentCustomer = loadcustom
        gGlobalSyncTable.tacoRank = loadrank
        gGlobalSyncTable.gameState = 2
        gGlobalSyncTable.gameComplete = loadgame

        if loadgame == 1 then
            gGlobalSyncTable.gameState = 6
            warp_to_level(LEVEL_CASTLE_GROUNDS, 1, 1)
        end
    end

    hook_event(HOOK_UPDATE, SaveAll)
end
