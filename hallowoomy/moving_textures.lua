-- Moving Textures (WaterBoxes)
--   Every movtext type is set to 1 (normal water texture)
--   If you want to configure and setup other water type, change the value here
movtexqc_register('bob_1_Movtex_0', 9, 1, 0)
movtexqc_register('sa_1_Movtex_0', 20, 1, 0)
movtexqc_register('castle_courtyard_1_Movtex_0', 26, 1, 0)

-- Scroll Textures
--   Uncomment and replace <id>, <offset> and <count> with the proper values
--   if you want to have scroll textures in your mod.
--[[
add_scroll_target(<id>, "VB_bob_1_0xe02c960", <offset>, <count>)
add_scroll_target(<id>, "VB_sa_1_0xe022460", <offset>, <count>)
add_scroll_target(<id>, "VB_sa_1_0xe023bd0", <offset>, <count>)
add_scroll_target(<id>, "VB_castle_courtyard_1_0xe024f60", <offset>, <count>)
add_scroll_target(<id>, "VB_bowser_1_1_0xe004430", <offset>, <count>)
--]]
