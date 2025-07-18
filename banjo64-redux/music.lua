-- Moonshine Sound Player
----------
-- Data --
----------

sMoonshineAudioData = {
    [0x0C] = { loopStart = 0.0, loopEnd = 249.0, volume = 0.80, filename = "sound/spiralmountain.ogg" },
    [0x33] = { loopStart = 77.0, loopEnd = 155.0, volume = 0.80, filename = "sound/fileselect.ogg" },	
    [0x04] = { loopStart = 119.0, loopEnd = 232.0, volume = 0.80, filename = "sound/gruntylair.ogg" },
    [0x03] = { loopStart = 124.0, loopEnd = 248.0, volume = 0.80, filename = "sound/mumbomountain.ogg" },
    [0x05] = { loopStart = 92.0, loopEnd = 185.0, volume = 0.80, filename = "sound/tickertower.ogg" },
    [0x06] = { loopStart = 53.0, loopEnd = 107.0, volume = 0.80, filename = "sound/mumbohut.ogg" },
    [0x07] = { loopStart = 132.0, loopEnd = 264.0, volume = 0.80, filename = "sound/clickclockwinter.ogg" },
    [0x08] = { loopStart = 66.0, loopEnd = 131.0, volume = 0.80, filename = "sound/clickclocklobby.ogg" },
}

sMoonshineBackgroundSeqs = {

--Spiral Mountain
    [LEVEL_CASTLE_GROUNDS]   = { [1] = 0x0C, [2] = 0x33 },
	
--Grunty's Lair
    [LEVEL_CASTLE] = { [1] = 0x04 },
	
--Mumbo's Mountain
	[LEVEL_BOB]   = { [1] = 0x03, [2] = 0x05, [3] = 0x06 },
	
--Click Clock Wood Lobby
	[LEVEL_SA] = { [1] = 0x08 },

--Click Clock Wood Winter
	[LEVEL_CCM] = { [1] = 0x07, [2] = 0x06 },
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

JIGGY_APPEAR = audio_stream_load("jiggyappear.mp3")
JIGGY_GET = audio_stream_load("jiggyget.mp3")

function star(x, SEQ_ID)
        
        if SEQ_ID == SEQ_EVENT_CUTSCENE_STAR_SPAWN then
             audio_stream_play(JIGGY_APPEAR, false, 1)
			 sound_set_background_music_default_volume(SEQ_EVENT_CUTSCENE_STAR_SPAWN, 0)
        end
		
		if SEQ_ID == SEQ_EVENT_CUTSCENE_COLLECT_STAR then
             audio_stream_play(JIGGY_GET, false, 1)
			 sound_set_background_music_default_volume(SEQ_EVENT_CUTSCENE_COLLECT_STAR, 0)
        end
end

hook_event(HOOK_ON_SEQ_LOAD, star)