-- Moonshine Sound Player
----------
-- Data --
----------

smlua_audio_utils_replace_sequence(0x01, 0x0C, 0, "01_Seq_custom")

sMoonshineAudioData = {
    [0x2C] = { loopStart = 57.31, loopEnd = 137.25, volume = 0.80, filename = "sound/hotel.ogg" },
    [0x2B] = { loopStart = 89.20, loopEnd = 172.00, volume = 0.80, filename = "sound/secret.ogg" },
    [0x0E] = { loopStart = 89.20, loopEnd = 172.00, volume = 0.80, filename = "sound/shell.ogg" },
    [0x23] = { loopStart = 0.00, loopEnd = 14.91, volume = 0.80, filename = "sound/hub.ogg" },
}

sMoonshineBackgroundSeqs = {
    [LEVEL_BOB]   = { [1] = 0x2C },
    [LEVEL_VCUTM] = { [1] = 0x2B },
    [LEVEL_SA]    = { [1] = 0x2B },
    [LEVEL_BITDW] = { [1] = 0x2B },
    [LEVEL_CASTLE] = { [1] = 0x23 },
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
	storedBackgroundMusic = nil, -- for the shell
}

function moonshine_get_seq_to_play(level, area)
    local m = gMarioStates[0]
 if m.riddenObj ~= nil then
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


------------
-- Update --
-----------

function moonshine_update_audio()
    local m = gMarioStates[0]
    if m ~= nil then
        local np = gNetworkPlayers[m.playerIndex]
        if np ~= nil then
            local newSeq = moonshine_get_seq_to_play(np.currLevelNum, np.currAreaIndex)

           -- Handle Shell music (music changes when riding shell)
		if newSeq == 0x0E then
			-- Only store background music data if we're not already in shell mode
			if sMoonshineAudioState.seq ~= 0x0E then
			stop_background_music(get_current_background_music())
			sMoonshineAudioState.storedBackgroundMusic = {
			seq = sMoonshineAudioState.seq,
			audio = sMoonshineAudioState.audio,
            volume = sMoonshineAudioState.volume,
            isPlaying = sMoonshineAudioState.isPlaying
			}
			-- Stop the current background stream
			if sMoonshineAudioState.audio ~= nil then
			audio_stream_stop(sMoonshineAudioState.audio)
        end
    end

    if sMoonshineAudioState.seq ~= newSeq then
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
elseif sMoonshineAudioState.seq == 0x0E then
    -- We were previously in shell music but now we're not
    if sMoonshineAudioState.audio ~= nil then
        audio_stream_stop(sMoonshineAudioState.audio)
    end
    
    -- Restore the previous background music if we had stored it
    if sMoonshineAudioState.storedBackgroundMusic then
        sMoonshineAudioState.seq = sMoonshineAudioState.storedBackgroundMusic.seq
        sMoonshineAudioState.audio = sMoonshineAudioState.storedBackgroundMusic.audio
        sMoonshineAudioState.volume = sMoonshineAudioState.storedBackgroundMusic.volume
        sMoonshineAudioState.isPlaying = sMoonshineAudioState.storedBackgroundMusic.isPlaying
        
        -- Restart the audio stream if it was playing
        if sMoonshineAudioState.audio and sMoonshineAudioState.isPlaying then
            audio_stream_play(sMoonshineAudioState.audio, true, sMoonshineAudioState.volume)
        end
        
        sMoonshineAudioState.storedBackgroundMusic = nil
    else
        -- No stored music, reset to default state
        sMoonshineAudioState.seq = newSeq
        sMoonshineAudioState.audio = nil
        sMoonshineAudioState.isPlaying = false
    end
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
