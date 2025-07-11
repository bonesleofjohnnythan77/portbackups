if _G.OmmEnabled then
    _G.OmmApi.omm_register_game("The Power Star Journey", function() return true end, function()
        ---------------
        -- Game data --
        ---------------

        _G.OmmApi.omm_register_game_data(-1, 0, nil, true, true, 0xFFFF00, 250)
		
		-----------------
        -- Level stars --
        -----------------

		_G.OmmApi.omm_register_level_stars(LEVEL_BOB, 0xFFFFFF0)
        _G.OmmApi.omm_register_level_stars(LEVEL_WF, 0xFFFFFF0)
		_G.OmmApi.omm_register_level_stars(LEVEL_HMC, 0xFFFFFF0)
		_G.OmmApi.omm_register_level_stars(LEVEL_LLL, 0xFFFFFF0)
        _G.OmmApi.omm_register_level_stars(LEVEL_SSL, 0xFFFFFF0)
		_G.OmmApi.omm_register_level_stars(LEVEL_SL, 0xFFFFFF0)
        _G.OmmApi.omm_register_level_stars(LEVEL_WDW, 0xFFFFFF0)
		_G.OmmApi.omm_register_level_stars(LEVEL_TTM, 0xFFFFFF0)
		_G.OmmApi.omm_register_level_stars(LEVEL_THI, 0xFFFFFF0)
        _G.OmmApi.omm_register_level_stars(LEVEL_TTC, 0xFFFFFF0)
		_G.OmmApi.omm_register_level_stars(LEVEL_RR, 0xFFFFFF0)

        --------------------
        -- Star behaviors --
        --------------------
		
		
        --------------------
        -- Camera presets --
        --------------------

        -------------------------
        -- Camera no-col boxes --
        -------------------------

        ----------------
        -- Warp pipes --
        ----------------

        -------------------
        -- Non-Stop mode --
        -------------------
    end)
end
