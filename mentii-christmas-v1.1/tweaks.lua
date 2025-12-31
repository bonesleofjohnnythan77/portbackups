gLevelValues.exitCastleLevel = 16
gLevelValues.exitCastleArea = 1
gLevelValues.exitCastleWarpNode = 10
gBehaviorValues.KingBobombFVel = 3.0
gBehaviorValues.KingBobombYawVel = 256
gBehaviorValues.KingBobombHealth = 3
gBehaviorValues.KingWhompHealth = 3
gBehaviorValues.KoopaThiAgility = 6.0
gBehaviorValues.KoopaBobAgility = 4.0
gBehaviorValues.MipsStar1Requirement = 15
gBehaviorValues.MipsStar2Requirement = 50
gBehaviorValues.ToadStar1Requirement = 12
gBehaviorValues.ToadStar2Requirement = 25
gBehaviorValues.ToadStar3Requirement = 35
gLevelValues.pssSlideStarTime = 630
gLevelValues.metalCapDuration = 900
gLevelValues.wingCapDuration = 2700
gLevelValues.vanishCapDuration = 900
gLevelValues.metalCapDurationCotmc = 900
gLevelValues.wingCapDurationTotwc = 1800
gLevelValues.vanishCapDurationVcutm = 900
gBehaviorValues.starsNeededForDialog.dialog1 = 0
gBehaviorValues.starsNeededForDialog.dialog2 = 0
gBehaviorValues.starsNeededForDialog.dialog3 = 0
gBehaviorValues.starsNeededForDialog.dialog4 = 0
gBehaviorValues.starsNeededForDialog.dialog5 = 0
gBehaviorValues.starsNeededForDialog.dialog6 = 0

--infinite lives
function on_death()
    gMarioStates[0].numLives = 4 
end

hook_event(HOOK_ON_DEATH, on_death)