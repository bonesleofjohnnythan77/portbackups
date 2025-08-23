
---Helpers-----------------------------------------------------------------------------

function get_star_count()
    return save_file_get_total_star_count(get_current_save_file_num() - 1, COURSE_MIN - 1, COURSE_MAX - 1)
end

local function for_each_object_with_behavior(behavior, func) -- by isaac
    local o = obj_get_first_with_behavior_id(behavior)
    while o do
        func(o)
        o = obj_get_next_with_same_behavior_id(o)
    end
end


--------------------------------------------------------------------------------------

--Hide Cannon Grate at 30 stars.------------------------------------------------------

--- @param o Object
local function bhv_custom_castle_cannon_grate_init(o)
    o.oFlags = (OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE)
    o.collisionData = smlua_collision_util_get("castle_grounds_seg7_collision_cannon_grill")
    o.oCollisionDistance = 4000
    load_object_collision_model()

    if get_star_count() >= 30 then -- 30 star check
        o.activeFlags = ACTIVE_FLAG_DEACTIVATED
    end
end

local function bhv_custom_castle_cannon_grate_loop()
    load_object_collision_model()
end

id_bhvSMSRHiddenAt120Stars = hook_behavior(id_bhvHiddenAt120Stars, OBJ_LIST_SURFACE, true, bhv_custom_castle_cannon_grate_init, bhv_custom_castle_cannon_grate_loop, "bhvSMSRHiddenAt120Stars")

---Shrink King Whomp------------------------------------------------------------------

local function bhv_custom_kingwhomp(o)

        obj_scale(o, 1.5)

  
end

hook_behavior(id_bhvWhompKingBoss, OBJ_LIST_SURFACE, false, nil, bhv_custom_kingwhomp)

---Bowser has 2 HP on BITFS Fight------------------------------------------------------

local function bowser_2hp(o)

if gNetworkPlayers[0].currLevelNum == LEVEL_BOWSER_2 then
    o.oHealth = 2
end

end

hook_behavior(id_bhvBowser, OBJ_LIST_GENACTOR, false, bowser_2hp, nil)


----------------------------Apparently the 70 star door is hardcoded to open regardless of star count, feel free to correct me though I may be wrong.-----------------------------------------------

function bhv_custom_star_door_wall_loop(o)
    if get_star_count() >= 70 then
        o.activeFlags = ACTIVE_FLAG_DEACTIVATED
    end
end