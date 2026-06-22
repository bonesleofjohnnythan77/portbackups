-- Moonshine Sound Player
----------
-- Data --
----------

sMoonshineAudioData = {
    [0x36] = { loopStart = 00.00, loopEnd = 60.80, volume = 0.80, filename = "sound/yoshi.ogg" },
    [0x25] = { loopStart = 00.00, loopEnd = 70.21, volume = 0.80, filename = "sound/nimbus.ogg" },
    [0x0E] = { loopStart = 00.00, loopEnd = 22.92, volume = 0.80, filename = "sound/options.ogg" },
    [0x26] = { loopStart = 67.42, loopEnd = 135.53, volume = 0.80, filename = "sound/outrun.ogg" },
    [0x27] = { loopStart = 59.56, loopEnd = 110.21, volume = 0.80, filename = "sound/cloudman.ogg" },
}

sMoonshineBackgroundSeqs = {
    [LEVEL_CASTLE_GROUNDS]   = { [1] = 0x36 },
    [LEVEL_BOB] = { [1] = 0x25 }, -- Default song for LEVEL_BOB
}

-----------
-- State --
-----------

sMoonshineAudioState = {
    audio = nil,
    seq = 0x00,
    position = 0.0,
    volume = 0.0,
    isPlaying = false,
    actSelectDelayTimer = 0, -- Timer for delay before Act Select music plays
}

function moonshine_get_seq_to_play(level, area)
    if obj_get_first_with_behavior_id(id_bhvActSelector) ~= nil then
        return 0x0E -- Act Select music
    else
        local seq = sMoonshineBackgroundSeqs[level]
        if seq ~= nil and seq[area] ~= nil then
            return seq[area] -- Return sequence for the current level
        end
    end
    return 0x00 -- Default to 0 if no valid sequence is found
end

function moonshine_get_audio_target_volume()
    if is_game_paused() then return 0.0 end
    if get_current_background_music() > 0 then return 0.0 end
    if get_current_background_music_target_volume() ~= 0 then return 0.0 end
    if get_current_background_music_max_target_volume() ~= 0 then return 0.0 end
    if is_current_background_music_volume_lowered() ~= 0 then return 0.5 end
    return 1.0
end

-- Handle music changes based on pads in LEVEL_BOB
---@param m MarioState
local function handle_bob_pads(m)
    if m.playerIndex ~= 0 then return end -- Only handle for the local player

    if m.floor then
        if m.floor.type == 27 then
            sMoonshineBackgroundSeqs[LEVEL_BOB][1] = 0x26 -- "outrun.ogg"
        elseif m.floor.type == 28 then
            sMoonshineBackgroundSeqs[LEVEL_BOB][1] = 0x27 -- "cloudman.ogg"
        elseif m.floor.type == 29 then
            sMoonshineBackgroundSeqs[LEVEL_BOB][1] = 0x25 -- "nimbus.ogg"
        end
    end
end

hook_event(HOOK_BEFORE_PHYS_STEP, handle_bob_pads)

------------
-- Update --
-----------

function moonshine_update_audio()
    local m = gMarioStates[0]
    if m ~= nil then
        local np = gNetworkPlayers[m.playerIndex]
        if np ~= nil then
            local newSeq = moonshine_get_seq_to_play(np.currLevelNum, np.currAreaIndex)

            -- Handle Act Selector music
            if newSeq == 0x0E then
                stop_background_music(get_current_background_music())

                -- Delay before Act Select music starts
                if sMoonshineAudioState.actSelectDelayTimer < 0.1 then
                    sMoonshineAudioState.actSelectDelayTimer = sMoonshineAudioState.actSelectDelayTimer + 1 / 60
                    return
                end

                if sMoonshineAudioState.seq ~= newSeq then
                    if sMoonshineAudioState.audio ~= nil then
                        audio_stream_stop(sMoonshineAudioState.audio)
                        sMoonshineAudioState.audio = nil
                        sMoonshineAudioState.isPlaying = false
                    end
                    local data = sMoonshineAudioData[newSeq]
                    if data then
                        sMoonshineAudioState.audio = audio_stream_load(data.filename)
                        if sMoonshineAudioState.audio then
                            audio_stream_set_looping(sMoonshineAudioState.audio, true)
                            sMoonshineAudioState.volume = data.volume
                            audio_stream_play(sMoonshineAudioState.audio, true, sMoonshineAudioState.volume)
                            sMoonshineAudioState.isPlaying = true
                        end
                    end
                    sMoonshineAudioState.seq = newSeq
                end
                return
            end

            -- Handle level music
            if sMoonshineAudioState.seq ~= newSeq then
                if sMoonshineAudioState.audio ~= nil then
                    audio_stream_stop(sMoonshineAudioState.audio)
                    sMoonshineAudioState.isPlaying = false
                    sMoonshineAudioState.audio = nil
                end
                sMoonshineAudioState.seq = newSeq
            end

            if sMoonshineAudioState.seq ~= 0x00 then
                local data = sMoonshineAudioData[sMoonshineAudioState.seq]
                if data and sMoonshineAudioState.audio == nil then
                    sMoonshineAudioState.audio = audio_stream_load(data.filename)
                    if sMoonshineAudioState.audio then
                        audio_stream_set_looping(sMoonshineAudioState.audio, true)
                        sMoonshineAudioState.volume = 0.0 -- Start at 0 for fade-in
                        audio_stream_play(sMoonshineAudioState.audio, true, 0)
                        sMoonshineAudioState.isPlaying = true
                    end
                end

                if sMoonshineAudioState.audio then
                    local targetVolume = moonshine_get_audio_target_volume()
                    local volumeChangeRate = 0.05

                    if sMoonshineAudioState.volume ~= targetVolume then
                        local volumeDifference = targetVolume - sMoonshineAudioState.volume
                        local volumeChange = math.min(math.abs(volumeDifference), volumeChangeRate)

                        if volumeDifference > 0 then
                            sMoonshineAudioState.volume = sMoonshineAudioState.volume + volumeChange
                        else
                            sMoonshineAudioState.volume = sMoonshineAudioState.volume - volumeChange
                        end

                        audio_stream_set_volume(sMoonshineAudioState.audio, data.volume * sMoonshineAudioState.volume)
                    end

                    local currentPosition = audio_stream_get_position(sMoonshineAudioState.audio)
                    if currentPosition >= data.loopEnd then
                        audio_stream_set_position(sMoonshineAudioState.audio, data.loopStart)
                    end
                end
            end
        end
    end
end

hook_event(HOOK_UPDATE, moonshine_update_audio)
