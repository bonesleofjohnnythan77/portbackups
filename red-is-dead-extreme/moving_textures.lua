-- Moving Textures (WaterBoxes)
--   Every movtext type is set to 1 (normal water texture)
--   If you want to configure and setup other water type, change the value here
movtexqc_register('hmc_1_Movtex_0', 7, 1, 0)
movtexqc_register('rr_1_Movtex_0', 15, 1, 0)
movtexqc_register('wmotr_1_Movtex_0', 31, 1, 0)
movtexqc_register('wmotr_1_Movtex_1', 31, 1, 0)

-- Scroll Textures
--   Uncomment and replace <id>, <offset> and <count> with the proper values
--   if you want to have scroll textures in your mod.
--[[
add_scroll_target(<id>, "VB_wmotr_1_0xe026dd0", <offset>, <count>)
--]]
