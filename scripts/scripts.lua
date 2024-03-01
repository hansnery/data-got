-- define lua functions
function NoOp(self, source)
end

function TDArcherTowerUpgradeDispenser( self )
	ObjectBroadcastEventToAllies(self, "BeTowerUpgraded", 120)
end

function TDArcherTowerUpgrade01(self)
	ObjectGrantUpgrade( self, "Upgrade_ElvenSilverthornArrows" )
end

function kill(self) -- Kill unit self.
	ExecuteAction("NAMED_KILL", self);
end

function RadiatePhialFear( self )
	ObjectBroadcastEventToEnemies( self, "BeAfraidOfPhial", 75 )
end

function RadiateUncontrollableFear( self )
	ObjectBroadcastEventToEnemies( self, "BeUncontrollablyAfraid", 350 )
end
-- ;;,;;
function RadiateUncontrollableFearBoromir( self )
	ObjectBroadcastEventToEnemies( self, "BeUncontrollablyAfraid", 300 )
end

function RadiateUncontrollableFearBoromirTrue( self )
	ObjectBroadcastEventToEnemies( self, "BeUncontrollablyAfraid", 250 )
end

function RadiateUncontrollableFearWK( self )
	ObjectBroadcastEventToEnemies( self, "BeUncontrollablyAfraid", 200 )
end

function RadiateGateDamageFear(self)
	ObjectBroadcastEventToAllies(self, "BeAfraidOfGateDamaged", 200)
end

function RadiateBalrogFear(self)
	ObjectBroadcastEventToEnemies(self, "BeAfraidOfBalrog", 180)
end

function OnMumakilCreated(self)
	ObjectHideSubObjectPermanently( self, "Houda01", true )
	ObjectHideSubObjectPermanently( self, "WIRE", true )
	ObjectHideSubObjectPermanently( self, "BANNERS", true )
	ObjectHideSubObjectPermanently( self, "EYEGLOW", true )
end

function OnTrollCreated(self)
	ObjectHideSubObjectPermanently( self, "Trunk01", true )
	ObjectGrantUpgrade( self, "Upgrade_SwitchToRockThrowing" )
end

function OnGundabadTrollCreated(self)
	ObjectHideSubObjectPermanently( self, "Trunk01", true )
	ObjectHideSubObjectPermanently( self, "HELMET", true )
	ObjectHideSubObjectPermanently( self, "SCYTHES", true )
	ObjectHideSubObjectPermanently( self, "ARMOR", true )
	ObjectHideSubObjectPermanently( self, "PAULDRONS", true )
	ObjectGrantUpgrade( self, "Upgrade_SwitchToRockThrowing" )
end

function OnCreepTrollCreated(self)
	ObjectHideSubObjectPermanently( self, "Trunk01", true )
	ObjectHideSubObjectPermanently( self, "ROCK", true )
end

function OnTrollPackCreated(self)
	ObjectHideSubObjectPermanently( self, "GREAVES", true )
	ObjectHideSubObjectPermanently( self, "CLUB", true )
	ObjectHideSubObjectPermanently( self, "BRACERS", true )
	ObjectHideSubObjectPermanently( self, "PAULDRONS", true )
end

function OnCaptureFlagCreated(self)
	ObjectHideSubObjectPermanently( self, "FLAG_ISENGARD", true)
	ObjectHideSubObjectPermanently( self, "FLAG_MORDOR", true)
	ObjectHideSubObjectPermanently( self, "FLAG_WILD", true)
	ObjectHideSubObjectPermanently( self, "FLAG_MEN", true)
	ObjectHideSubObjectPermanently( self, "FLAG_ELVES", true)
	ObjectHideSubObjectPermanently( self, "FLAG_DWARVES", true)
	ObjectHideSubObjectPermanently( self, "FLAG_ANGMAR", true)
	ObjectHideSubObjectPermanently( self, "FLAG_ARNOR", true)
	ObjectHideSubObjectPermanently( self, "FLAG_ROHAN", true)
	ObjectHideSubObjectPermanently( self, "FLAG_DG", true)
	ObjectHideSubObjectPermanently( self, "FLAG_WR", true)
end

function OnCaptureFlagGenericEvent(self,data)
	local str = ObjectCapturingObjectPlayerSide(self)
	if str == nil then
		str = ObjectPlayerSide(self)
	end

	ObjectHideSubObjectPermanently( self, "FLAG_NEUTRAL", true)

	ObjectHideSubObjectPermanently( self, "FLAG_ISENGARD", true)
	ObjectHideSubObjectPermanently( self, "FLAG_MORDOR", true)
	ObjectHideSubObjectPermanently( self, "FLAG_WILD", true)
	ObjectHideSubObjectPermanently( self, "FLAG_MEN", true)
	ObjectHideSubObjectPermanently( self, "FLAG_ELVES", true)
	ObjectHideSubObjectPermanently( self, "FLAG_DWARVES", true)
	ObjectHideSubObjectPermanently( self, "FLAG_ANGMAR", true)
	ObjectHideSubObjectPermanently( self, "FLAG_ARNOR", true)
	ObjectHideSubObjectPermanently( self, "FLAG_ROHAN", true)
	ObjectHideSubObjectPermanently( self, "FLAG_DG", true)
	ObjectHideSubObjectPermanently( self, "FLAG_WR", true)
	ObjectHideSubObjectPermanently( self, "Cylinder01", true)

	if str == "Isengard" then
		ObjectHideSubObjectPermanently( self, "FLAG_ISENGARD", false)
	elseif str == "Mordor" then
		ObjectHideSubObjectPermanently( self, "FLAG_MORDOR", false)
	elseif str == "Men" then
		ObjectHideSubObjectPermanently( self, "FLAG_MEN", false)
	elseif str == "Arnor" then	-- Added for v2.3 ;;,;;
		ObjectHideSubObjectPermanently( self, "FLAG_ARNOR", false)
	elseif str == "Dwarves" then
		ObjectHideSubObjectPermanently( self, "FLAG_DWARVES", false)
	elseif str == "Elves" then
		ObjectHideSubObjectPermanently( self, "FLAG_ELVES", false)
	elseif str == "Wild" then
		ObjectHideSubObjectPermanently( self, "FLAG_WILD", false)
	elseif str == "Rohan" then
		ObjectHideSubObjectPermanently( self, "FLAG_ROHAN", false)
	elseif str == "Angmar" then
		ObjectHideSubObjectPermanently( self, "Cylinder01", false)
	elseif str == "Guldur" then
		ObjectHideSubObjectPermanently( self, "FLAG_DG", false)
	elseif str == "Mirkwood" then
		ObjectHideSubObjectPermanently( self, "FLAG_WR", false)
	else
		ObjectHideSubObjectPermanently( self, "FLAG_NEUTRAL", false)
	end
end

function OnGoodCampaignCaptureFlagGenericEvent(self,data)
	local str = ObjectCapturingObjectPlayerSide(self)
	if str == nil then
		str = ObjectPlayerSide(self)
	end

	ObjectHideSubObjectPermanently( self, "FLAG_NEUTRAL", true)

	ObjectHideSubObjectPermanently( self, "FLAG_ISENGARD", true)
	ObjectHideSubObjectPermanently( self, "FLAG_MORDOR", true)
	ObjectHideSubObjectPermanently( self, "FLAG_WILD", true)
	ObjectHideSubObjectPermanently( self, "FLAG_MEN", true)
	ObjectHideSubObjectPermanently( self, "FLAG_ELVES", true)
	ObjectHideSubObjectPermanently( self, "FLAG_DWARVES", true)
	ObjectHideSubObjectPermanently( self, "FLAG_ANGMAR", true)
	ObjectHideSubObjectPermanently( self, "FLAG_ARNOR", true)
	ObjectHideSubObjectPermanently( self, "FLAG_ROHAN", true)
	ObjectHideSubObjectPermanently( self, "FLAG_DG", true)
	ObjectHideSubObjectPermanently( self, "FLAG_WR", true)
	ObjectHideSubObjectPermanently( self, "Cylinder01", true)

	if str == "Isengard" then
		ObjectHideSubObjectPermanently( self, "FLAG_MEN", false)
	elseif str == "Mordor" then
		ObjectHideSubObjectPermanently( self, "FLAG_MEN", false)
	elseif str == "Men" then
		ObjectHideSubObjectPermanently( self, "FLAG_MEN", false)
	elseif str == "Arnor" then	-- Added for v2.3 ;;,;;
		ObjectHideSubObjectPermanently( self, "FLAG_MEN", false)
	elseif str == "Dwarves" then
		ObjectHideSubObjectPermanently( self, "FLAG_MEN", false)
	elseif str == "Elves" then
		ObjectHideSubObjectPermanently( self, "FLAG_MEN", false)
	elseif str == "Wild" then
		ObjectHideSubObjectPermanently( self, "FLAG_MEN", false)
	elseif str == "Rohan" then
		ObjectHideSubObjectPermanently( self, "FLAG_MEN", false)
	elseif str == "Angmar" then
		ObjectHideSubObjectPermanently( self, "FLAG_MEN", false)
	elseif str == "Guldur" then
		ObjectHideSubObjectPermanently( self, "FLAG_MEN", false)
	elseif str == "Mirkwood" then
		ObjectHideSubObjectPermanently( self, "FLAG_MEN", false)
	elseif str == "Fellowship" then
		ObjectHideSubObjectPermanently( self, "FLAG_MEN", false)
	else
		ObjectHideSubObjectPermanently( self, "FLAG_NEUTRAL", false)
	end
end

function OnGoodCampaignCaptureFlagGenericEventRohan(self,data)
	local str = ObjectCapturingObjectPlayerSide(self)
	if str == nil then
		str = ObjectPlayerSide(self)
	end

	ObjectHideSubObjectPermanently( self, "FLAG_NEUTRAL", true)

	ObjectHideSubObjectPermanently( self, "FLAG_ISENGARD", true)
	ObjectHideSubObjectPermanently( self, "FLAG_MORDOR", true)
	ObjectHideSubObjectPermanently( self, "FLAG_WILD", true)
	ObjectHideSubObjectPermanently( self, "FLAG_MEN", true)
	ObjectHideSubObjectPermanently( self, "FLAG_ELVES", true)
	ObjectHideSubObjectPermanently( self, "FLAG_DWARVES", true)
	ObjectHideSubObjectPermanently( self, "FLAG_ANGMAR", true)
	ObjectHideSubObjectPermanently( self, "FLAG_ARNOR", true)
	ObjectHideSubObjectPermanently( self, "FLAG_ROHAN", true)
	ObjectHideSubObjectPermanently( self, "FLAG_DG", true)
	ObjectHideSubObjectPermanently( self, "FLAG_WR", true)
	ObjectHideSubObjectPermanently( self, "Cylinder01", true)

	if str == "Isengard" then
		ObjectHideSubObjectPermanently( self, "FLAG_ROHAN", false)
	elseif str == "Mordor" then
		ObjectHideSubObjectPermanently( self, "FLAG_ROHAN", false)
	elseif str == "Men" then
		ObjectHideSubObjectPermanently( self, "FLAG_ROHAN", false)
	elseif str == "Arnor" then	-- Added for v2.3 ;;,;;
		ObjectHideSubObjectPermanently( self, "FLAG_ROHAN", false)
	elseif str == "Dwarves" then
		ObjectHideSubObjectPermanently( self, "FLAG_ROHAN", false)
	elseif str == "Elves" then
		ObjectHideSubObjectPermanently( self, "FLAG_ROHAN", false)
	elseif str == "Wild" then
		ObjectHideSubObjectPermanently( self, "FLAG_ROHAN", false)
	elseif str == "Rohan" then
		ObjectHideSubObjectPermanently( self, "FLAG_ROHAN", false)
	elseif str == "Angmar" then
		ObjectHideSubObjectPermanently( self, "FLAG_ROHAN", false)
	elseif str == "Guldur" then
		ObjectHideSubObjectPermanently( self, "FLAG_ROHAN", false)
	elseif str == "Mirkwood" then
		ObjectHideSubObjectPermanently( self, "FLAG_ROHAN", false)
	elseif str == "Fellowship" then
		ObjectHideSubObjectPermanently( self, "FLAG_ROHAN", false)
	else
		ObjectHideSubObjectPermanently( self, "FLAG_NEUTRAL", false)
	end
end

function OnTrollGenericEvent(self,data)

	local str = tostring( data )

	if str == "show_rock" then
		ObjectHideSubObjectPermanently( self, "ROCK", false )
	elseif str == "hide_rock" then
		ObjectHideSubObjectPermanently( self, "ROCK", true )
	end
end

function OnCatapultTrollGenericEvent(self,data)

	local str = tostring( data )

	if str == "show_rock" then
		ObjectHideSubObjectPermanently( self, "PROJECTILE", false )
	elseif str == "hide_rock" then
		ObjectHideSubObjectPermanently( self, "PROJECTILE", true )
	end
end

function OnSnowTrollGenericEvent(self,data)

	local str = tostring( data )

	if str == "show_spear" then
		ObjectHideSubObjectPermanently( self, "SPEAR", false )
	elseif str == "hide_spear" then
		ObjectHideSubObjectPermanently( self, "SPEAR", true )
	end
end

function OnEntCreated(self)
	--ObjectShowSubObjectPermanently( self, "ROCK", true )
	ObjectGrantUpgrade( self, "Upgrade_SwitchToRockThrowing" )
end

function OnMountainGiantCreated(self)
	--ObjectHideSubObjectPermanently( self, "ROCK", true )
	ObjectGrantUpgrade( self, "Upgrade_SwitchToRockThrowing" )
end

function OnMountainGiantGenericEvent(self)

	local str = tostring( data )

	if str == "show_rock" then
		ObjectHideSubObjectPermanently( self, "ROCK", false )
	elseif str == "hide_rock" then
		ObjectHideSubObjectPermanently( self, "ROCK", true )
	end
end

function GoIntoRampage(self)
	ObjectEnterRampageState(self)

	--Broadcast fear to surrounding unit(if we actually rampaged)
	if ObjectTestModelCondition(self, "WEAPONSET_RAMPAGE") then
		ObjectBroadcastEventToUnits(self, "BeAfraidOfRampage", 250)
	end
end

function MakeMeAlert(self)
	ObjectEnterAlertState(self)
end

function BeEnraged(self)
	--Broadcast enraged to surrounding units.
	ObjectBroadcastEventToAllies(self, "BeingEnraged", 500)
end

function BecomeEnraged(self)
	ObjectSetEnragedState(self, true)
end

function StopEnraged(self)
	ObjectSetEnragedState(self, false)
end

function BecomeUncontrollablyAfraid(self, other)
	if not ObjectTestCanSufferFear(self) then
		return
	end

	ObjectEnterUncontrollableCowerState(self, other)
end

function BecomeAfraidOfRampage(self, other)
	if not ObjectTestCanSufferFear(self) then
		return
	end

	ObjectEnterCowerState(self, other)
end

function BecomeAfraidOfBalrog(self, other)
	if not ObjectTestCanSufferFear(self) then
		return
	end

	ObjectEnterCowerState(self, other)
end

function RadiateTerror(self, other)
	ObjectBroadcastEventToEnemies(self, "BeTerrified", 180)
end

function RadiateTerrorEx(self, other, terrorRange)
	ObjectBroadcastEventToEnemies(self, "BeTerrified", terrorRange)
end

function RadiateFearEx(self, other, terrorRange)
	ObjectBroadcastEventToEnemies( self, "BeAfraidOfPhial", 200 )
end

function BecomeTerrified(self, other)
	ObjectEnterRunAwayPanicState(self, other)
end

function BecomeAfraidOfGateDamaged(self, other)
	if not ObjectTestCanSufferFear(self) then
		return
	end

	ObjectEnterCowerState(self,other)
end


function ChantForUnit(self) -- Used by units to broadcast the chant event to their own side.
	ObjectBroadcastEventToAllies(self, "BeginChanting", 9999)
end

function StopChantForUnit(self) -- Used by units to stop the chant event to their own side.
	ObjectBroadcastEventToAllies(self, "StopChanting", 9999)
end

function BeginCheeringForGrond(self)
	ObjectSetChanting(self, true)
end

function StopCheeringForGrond(self)
	ObjectSetChanting(self, false)
end

function BeInMountedState(self)
    ObjectGrantUpgrade( self, "Upgrade_IsMounted" )
end

function BeNotInMountedState(self)
    ObjectRemoveUpgrade( self, "Upgrade_IsMounted" )
end

function OnMordorArcherCreated(self)
    ObjectHideSubObjectPermanently( self, "HIPS", true )
    ObjectHideSubObjectPermanently( self, "GREAVES", true )
    ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
    ObjectHideSubObjectPermanently( self, "ARROWFIRE", true )
    -- helmet types
    ObjectHideSubObjectPermanently( self, "HELMET01", true )
    ObjectHideSubObjectPermanently( self, "HELMET02", true )
    ObjectHideSubObjectPermanently( self, "HELMET03", true )
    ObjectHideSubObjectPermanently( self, "HELMET04", true )
    ObjectHideSubObjectPermanently( self, "HELMET05", true )
    ObjectHideSubObjectPermanently( self, "HAIR", true )
    -- head types
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "HEAD04", true )
    -- collar types
    ObjectHideSubObjectPermanently( self, "COLLARA", true )
    ObjectHideSubObjectPermanently( self, "COLLARB", true )
    -- weapon types
    ObjectHideSubObjectPermanently( self, "BOW01", true )
    ObjectHideSubObjectPermanently( self, "BOW02", true )
    -- body types
    ObjectHideSubObjectPermanently( self, "BODY01", true )
    ObjectHideSubObjectPermanently( self, "BODY02", true )
    ObjectHideSubObjectPermanently( self, "BODY03", true )
    -- leg types
    ObjectHideSubObjectPermanently( self, "LEGS01", true )
    ObjectHideSubObjectPermanently( self, "LEGS02", true )
    -- shoulder types
    ObjectHideSubObjectPermanently( self, "SHOULDER01", true )
    ObjectHideSubObjectPermanently( self, "SHOULDER02", true )
    ObjectHideSubObjectPermanently( self, "SHOULDER03", true )

    -- assign random gear
    local helm = GetRandomNumber()
    local head = GetRandomNumber()
    local collar = GetRandomNumber()
    local bow = GetRandomNumber()
    local body = GetRandomNumber()
    local legs = GetRandomNumber()
    local shoulders = GetRandomNumber()
    local hips = GetRandomNumber()


    -- assign random helm
    if helm <= 0.12 then
        ObjectHideSubObjectPermanently( self, "HELMET01", false )
    elseif helm <= 0.24 then
        ObjectHideSubObjectPermanently( self, "HELMET02", false )
    elseif helm <= 0.36 then
        ObjectHideSubObjectPermanently( self, "HELMET03", false )
    elseif helm <= 0.48 then
        ObjectHideSubObjectPermanently( self, "HELMET04", false )
    elseif helm <= 0.60 then
        ObjectHideSubObjectPermanently( self, "HELMET05", false )
    elseif helm <= 0.72 then
        ObjectHideSubObjectPermanently( self, "HAIR", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    -- assign random head
    if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    end

    -- assign random collar
    if collar <= 0.25 then
        ObjectHideSubObjectPermanently( self, "COLLARA", false )
    elseif collar <= 0.50 then
        ObjectHideSubObjectPermanently( self, "COLLARB", false )
    else
        ObjectHideSubObjectPermanently( self, "NONE", false )
    end

    -- assign random bow
    if bow <= 0.50 then
        ObjectHideSubObjectPermanently( self, "BOW01", false )
    else
        ObjectHideSubObjectPermanently( self, "BOW02", false )
    end

    -- assign random body
    if body <= 0.33 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif body <= 0.66 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
    else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
    end

    -- assign random legs
    if legs <= 0.33 then
        ObjectHideSubObjectPermanently( self, "LEGS01", false )
    elseif legs <= 0.66 then
        ObjectHideSubObjectPermanently( self, "LEGS02", false )
        ObjectHideSubObjectPermanently( self, "GREAVES", false )
    else
        ObjectHideSubObjectPermanently( self, "LEGS02", false )
    end

    -- assign random shoulders
    if shoulders <= 0.18 then
        ObjectHideSubObjectPermanently( self, "SHOULDER01", false )
    elseif shoulders <= 0.36 then
        ObjectHideSubObjectPermanently( self, "SHOULDER02", false )
    elseif shoulders <= 0.54 then
        ObjectHideSubObjectPermanently( self, "SHOULDER03", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    -- assign random hips
    if hips <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HIPS", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end
end

function OnLastAllianceMordorArcherCreated(self)
    ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
    ObjectHideSubObjectPermanently( self, "ARROWFIRE", true )
    -- body types
    ObjectHideSubObjectPermanently( self, "BODY01", true )
    ObjectHideSubObjectPermanently( self, "BODY02", true )
    ObjectHideSubObjectPermanently( self, "BODY03", true )

    -- assign random gear
    local body = GetRandomNumber()

    -- assign random body
    if body <= 0.33 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif body <= 0.66 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
    else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
    end
end

function OnMordorTowerArcherCreated(self)
    ObjectHideSubObjectPermanently( self, "HIPS", true )
    ObjectHideSubObjectPermanently( self, "GREAVES", true )
    ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
    ObjectHideSubObjectPermanently( self, "ARROWFIRE", true )
	ObjectHideSubObjectPermanently( self, "FireArowTip", true )
	ObjectHideSubObjectPermanently( self, "BARB", true )
	ObjectHideSubObject( self, "ArrowNock", true )
    -- helmet types
    ObjectHideSubObjectPermanently( self, "HELMET01", true )
    ObjectHideSubObjectPermanently( self, "HELMET02", true )
    ObjectHideSubObjectPermanently( self, "HELMET03", true )
    ObjectHideSubObjectPermanently( self, "HELMET04", true )
    ObjectHideSubObjectPermanently( self, "HELMET05", true )
    ObjectHideSubObjectPermanently( self, "HAIR", true )
    -- head types
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "HEAD04", true )
    -- collar types
    ObjectHideSubObjectPermanently( self, "COLLARA", true )
    ObjectHideSubObjectPermanently( self, "COLLARB", true )
    -- weapon types
    ObjectHideSubObjectPermanently( self, "BOW01", true )
    ObjectHideSubObjectPermanently( self, "BOW02", true )
    -- body types
    ObjectHideSubObjectPermanently( self, "BODY01", true )
    ObjectHideSubObjectPermanently( self, "BODY02", true )
    ObjectHideSubObjectPermanently( self, "BODY03", true )
    -- leg types
    ObjectHideSubObjectPermanently( self, "LEGS01", true )
    ObjectHideSubObjectPermanently( self, "LEGS02", true )
    -- shoulder types
    ObjectHideSubObjectPermanently( self, "SHOULDER01", true )
    ObjectHideSubObjectPermanently( self, "SHOULDER02", true )
    ObjectHideSubObjectPermanently( self, "SHOULDER03", true )

    -- assign random gear
    local helm = GetRandomNumber()
    local head = GetRandomNumber()
    local collar = GetRandomNumber()
    local bow = GetRandomNumber()
    local body = GetRandomNumber()
    local legs = GetRandomNumber()
    local shoulders = GetRandomNumber()
    local hips = GetRandomNumber()


    -- assign random helm
    if helm <= 0.12 then
        ObjectHideSubObjectPermanently( self, "HELMET01", false )
    elseif helm <= 0.24 then
        ObjectHideSubObjectPermanently( self, "HELMET02", false )
    elseif helm <= 0.36 then
        ObjectHideSubObjectPermanently( self, "HELMET03", false )
    elseif helm <= 0.48 then
        ObjectHideSubObjectPermanently( self, "HELMET04", false )
    elseif helm <= 0.60 then
        ObjectHideSubObjectPermanently( self, "HELMET05", false )
    elseif helm <= 0.72 then
        ObjectHideSubObjectPermanently( self, "HAIR", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    -- assign random head
    if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    end

    -- assign random collar
    if collar <= 0.25 then
        ObjectHideSubObjectPermanently( self, "COLLARA", false )
    elseif collar <= 0.50 then
        ObjectHideSubObjectPermanently( self, "COLLARB", false )
    else
        ObjectHideSubObjectPermanently( self, "NONE", false )
    end

    -- assign random bow
    if bow <= 0.50 then
        ObjectHideSubObjectPermanently( self, "BOW01", false )
    else
        ObjectHideSubObjectPermanently( self, "BOW02", false )
    end

    -- assign random body
    if body <= 0.33 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif body <= 0.66 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
    else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
    end

    -- assign random legs
    if legs <= 0.33 then
        ObjectHideSubObjectPermanently( self, "LEGS01", false )
    elseif legs <= 0.66 then
        ObjectHideSubObjectPermanently( self, "LEGS02", false )
        ObjectHideSubObjectPermanently( self, "GREAVES", false )
    else
        ObjectHideSubObjectPermanently( self, "LEGS02", false )
    end

    -- assign random shoulders
    if shoulders <= 0.18 then
        ObjectHideSubObjectPermanently( self, "SHOULDER01", false )
    elseif shoulders <= 0.36 then
        ObjectHideSubObjectPermanently( self, "SHOULDER02", false )
    elseif shoulders <= 0.54 then
        ObjectHideSubObjectPermanently( self, "SHOULDER03", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    -- assign random hips
    if hips <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HIPS", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end
end

function OnMordorBannerCreated(self)
    ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "GREAVES", true )
    -- helmet types
    ObjectHideSubObjectPermanently( self, "HELMET01", true )
    ObjectHideSubObjectPermanently( self, "HELMET02", true )
    ObjectHideSubObjectPermanently( self, "HELMET03", true )
    ObjectHideSubObjectPermanently( self, "HELMET04", true )
    ObjectHideSubObjectPermanently( self, "HELMET05", true )
    ObjectHideSubObjectPermanently( self, "HAIR", true )
    -- head types
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "HEAD04", true )
    -- collar types
    ObjectHideSubObjectPermanently( self, "COLLARA", true )
    ObjectHideSubObjectPermanently( self, "COLLARB", true )
    -- weapon types
    ObjectHideSubObjectPermanently( self, "SWORDR01", true )
    ObjectHideSubObjectPermanently( self, "SWORDR02", true )
    ObjectHideSubObjectPermanently( self, "SWORDR03", true )
    ObjectHideSubObjectPermanently( self, "SWORDR04", true )
    ObjectHideSubObjectPermanently( self, "SWORDR05", true )
    -- body types
    ObjectHideSubObjectPermanently( self, "BODY01", true )
    ObjectHideSubObjectPermanently( self, "BODY02", true )
    ObjectHideSubObjectPermanently( self, "BODY03", true )
    -- leg types
    ObjectHideSubObjectPermanently( self, "LEGS01", true )
    ObjectHideSubObjectPermanently( self, "LEGS02", true )
    -- shoulder types
    ObjectHideSubObjectPermanently( self, "SHOULDER01", true )
    ObjectHideSubObjectPermanently( self, "SHOULDER02", true )
    ObjectHideSubObjectPermanently( self, "SHOULDER03", true )

    -- assign random gear
    local helm = GetRandomNumber()
    local head = GetRandomNumber()
    local collar = GetRandomNumber()
    local weapon = GetRandomNumber()
    local body = GetRandomNumber()
    local legs = GetRandomNumber()
    local shoulders = GetRandomNumber()

    -- assign random helm
    if helm <= 0.12 then
        ObjectHideSubObjectPermanently( self, "HELMET01", false )
    elseif helm <= 0.24 then
        ObjectHideSubObjectPermanently( self, "HELMET02", false )
    elseif helm <= 0.36 then
        ObjectHideSubObjectPermanently( self, "HELMET03", false )
    elseif helm <= 0.48 then
        ObjectHideSubObjectPermanently( self, "HELMET04", false )
    elseif helm <= 0.60 then
        ObjectHideSubObjectPermanently( self, "HELMET05", false )
    elseif helm <= 0.72 then
        ObjectHideSubObjectPermanently( self, "HAIR", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    -- assign random head
    if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    end

    -- assign random collar
    if collar <= 0.25 then
        ObjectHideSubObjectPermanently( self, "COLLARA", false )
    elseif collar <= 0.50 then
        ObjectHideSubObjectPermanently( self, "COLLARB", false )
    else
        ObjectHideSubObjectPermanently( self, "NONE", false )
    end

    -- assign random weapon
    if weapon <= 0.20 then
        ObjectHideSubObjectPermanently( self, "SWORDR01", false )
    elseif weapon <= 0.40 then
        ObjectHideSubObjectPermanently( self, "SWORDR02", false )
    elseif weapon <= 0.60 then
        ObjectHideSubObjectPermanently( self, "SWORDR03", false )
    elseif weapon <= 0.80 then
        ObjectHideSubObjectPermanently( self, "SWORDR04", false )
    else
        ObjectHideSubObjectPermanently( self, "SWORDR05", false )
    end

    -- assign random body
    if body <= 0.33 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif body <= 0.66 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
    else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
    end

    -- assign random legs
    if legs <= 0.33 then
        ObjectHideSubObjectPermanently( self, "LEGS01", false )
    elseif legs <= 0.66 then
        ObjectHideSubObjectPermanently( self, "LEGS02", false )
        ObjectHideSubObjectPermanently( self, "GREAVES", false )
    else
        ObjectHideSubObjectPermanently( self, "LEGS02", false )
    end

    -- assign random shoulders
    if shoulders <= 0.18 then
        ObjectHideSubObjectPermanently( self, "SHOULDER01", false )
    elseif shoulders <= 0.36 then
        ObjectHideSubObjectPermanently( self, "SHOULDER02", false )
    elseif shoulders <= 0.54 then
        ObjectHideSubObjectPermanently( self, "SHOULDER03", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end
end

function OnMordorSpearmenCreated(self)
    ObjectHideSubObjectPermanently( self, "HIPS", true )
    ObjectHideSubObjectPermanently( self, "GREAVES", true )
    ObjectHideSubObjectPermanently( self, "QUIVER", true )
    -- helmet types
    ObjectHideSubObjectPermanently( self, "HELMET01", true )
    ObjectHideSubObjectPermanently( self, "HELMET02", true )
    ObjectHideSubObjectPermanently( self, "HELMET03", true )
    ObjectHideSubObjectPermanently( self, "HELMET04", true )
    ObjectHideSubObjectPermanently( self, "HELMET05", true )
    ObjectHideSubObjectPermanently( self, "HAIR", true )
    -- head types
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "HEAD04", true )
    -- collar types
    ObjectHideSubObjectPermanently( self, "COLLARA", true )
    ObjectHideSubObjectPermanently( self, "COLLARB", true )
    -- weapon types
    ObjectHideSubObjectPermanently( self, "SPEAR01", true )
    ObjectHideSubObjectPermanently( self, "SPEAR02", true )
    ObjectHideSubObjectPermanently( self, "SPEAR03", true )
    ObjectHideSubObjectPermanently( self, "SPEAR04", true )
    -- body types
    ObjectHideSubObjectPermanently( self, "BODY01", true )
    ObjectHideSubObjectPermanently( self, "BODY02", true )
    ObjectHideSubObjectPermanently( self, "BODY03", true )
    -- leg types
    ObjectHideSubObjectPermanently( self, "LEGS01", true )
    ObjectHideSubObjectPermanently( self, "LEGS02", true )
    -- shoulder types
    ObjectHideSubObjectPermanently( self, "SHOULDER01", true )
    ObjectHideSubObjectPermanently( self, "SHOULDER02", true )
    ObjectHideSubObjectPermanently( self, "SHOULDER03", true )

    -- assign random gear
    local helm = GetRandomNumber()
    local head = GetRandomNumber()
    local collar = GetRandomNumber()
    local spear = GetRandomNumber()
    local body = GetRandomNumber()
    local legs = GetRandomNumber()
    local shoulders = GetRandomNumber()
    local hips = GetRandomNumber()

    -- assign random helm
    if helm <= 0.12 then
        ObjectHideSubObjectPermanently( self, "HELMET01", false )
    elseif helm <= 0.24 then
        ObjectHideSubObjectPermanently( self, "HELMET02", false )
    elseif helm <= 0.36 then
        ObjectHideSubObjectPermanently( self, "HELMET03", false )
    elseif helm <= 0.48 then
        ObjectHideSubObjectPermanently( self, "HELMET04", false )
    elseif helm <= 0.60 then
        ObjectHideSubObjectPermanently( self, "HELMET05", false )
    elseif helm <= 0.72 then
        ObjectHideSubObjectPermanently( self, "HAIR", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    -- assign random head
    if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    end

    -- assign random collar
    if collar <= 0.25 then
        ObjectHideSubObjectPermanently( self, "COLLARA", false )
    elseif collar <= 0.50 then
        ObjectHideSubObjectPermanently( self, "COLLARB", false )
    else
        ObjectHideSubObjectPermanently( self, "NONE", false )
    end

    -- assign random spear
    if spear <= 0.25 then
        ObjectHideSubObjectPermanently( self, "SPEAR01", false )
    elseif spear <= 0.50 then
        ObjectHideSubObjectPermanently( self, "SPEAR02", false )
    elseif spear <= 0.75 then
        ObjectHideSubObjectPermanently( self, "SPEAR03", false )
    else
        ObjectHideSubObjectPermanently( self, "SPEAR04", false )
    end

    -- assign random body
    if body <= 0.33 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif body <= 0.66 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
    else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
    end

    -- assign random legs
    if legs <= 0.33 then
        ObjectHideSubObjectPermanently( self, "LEGS01", false )
    elseif legs <= 0.66 then
        ObjectHideSubObjectPermanently( self, "LEGS02", false )
        ObjectHideSubObjectPermanently( self, "GREAVES", false )
    else
        ObjectHideSubObjectPermanently( self, "LEGS02", false )
    end

    -- assign random shoulders
    if shoulders <= 0.18 then
        ObjectHideSubObjectPermanently( self, "SHOULDER01", false )
    elseif shoulders <= 0.36 then
        ObjectHideSubObjectPermanently( self, "SHOULDER02", false )
    elseif shoulders <= 0.54 then
        ObjectHideSubObjectPermanently( self, "SHOULDER03", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    -- assign random hips
    if hips <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HIPS", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end
end

function OnMordorNewFighterCreated(self)
    ObjectHideSubObjectPermanently( self, "HIPS", true )
    ObjectHideSubObjectPermanently( self, "GREAVES", true )
    ObjectHideSubObjectPermanently( self, "QUIVER", true )
    -- helmet types
    ObjectHideSubObjectPermanently( self, "HELMET01", true )
    ObjectHideSubObjectPermanently( self, "HELMET02", true )
    ObjectHideSubObjectPermanently( self, "HELMET03", true )
    ObjectHideSubObjectPermanently( self, "HELMET04", true )
    ObjectHideSubObjectPermanently( self, "HELMET05", true )
    ObjectHideSubObjectPermanently( self, "HAIR", true )
    -- head types
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "HEAD04", true )
    -- collar types
    ObjectHideSubObjectPermanently( self, "COLLARA", true )
    ObjectHideSubObjectPermanently( self, "COLLARB", true )
    -- weapon types
    ObjectHideSubObjectPermanently( self, "SWORDL01", true )
    ObjectHideSubObjectPermanently( self, "SWORDL02", true )
    ObjectHideSubObjectPermanently( self, "SWORDL03", true )
    ObjectHideSubObjectPermanently( self, "SWORDL04", true )
    ObjectHideSubObjectPermanently( self, "SWORDL05", true )
    ObjectHideSubObjectPermanently( self, "SWORDR01", true )
    ObjectHideSubObjectPermanently( self, "SWORDR02", true )
    ObjectHideSubObjectPermanently( self, "SWORDR03", true )
    ObjectHideSubObjectPermanently( self, "SWORDR04", true )
    ObjectHideSubObjectPermanently( self, "SWORDR05", true )
    ObjectHideSubObjectPermanently( self, "SHIELD01", true )
    ObjectHideSubObjectPermanently( self, "SHIELD02", true )
    ObjectHideSubObjectPermanently( self, "SHIELD03", true )
    ObjectHideSubObjectPermanently( self, "SHIELD04", true )
    ObjectHideSubObjectPermanently( self, "SHIELD05", true )
    -- body types
    ObjectHideSubObjectPermanently( self, "BODY01", true )
    ObjectHideSubObjectPermanently( self, "BODY02", true )
    ObjectHideSubObjectPermanently( self, "BODY03", true )
    -- leg types
    ObjectHideSubObjectPermanently( self, "LEGS01", true )
    ObjectHideSubObjectPermanently( self, "LEGS02", true )
    -- shoulder types
    ObjectHideSubObjectPermanently( self, "SHOULDER01", true )
    ObjectHideSubObjectPermanently( self, "SHOULDER02", true )
    ObjectHideSubObjectPermanently( self, "SHOULDER03", true )

    -- assign random gear
    local helm = GetRandomNumber()
    local head = GetRandomNumber()
    local collar = GetRandomNumber()
    local leftweapon = GetRandomNumber()
    local rightweapon = GetRandomNumber()
    local body = GetRandomNumber()
    local legs = GetRandomNumber()
    local shoulders = GetRandomNumber()
    local hips = GetRandomNumber()

    -- assign random helm
    if helm <= 0.12 then
        ObjectHideSubObjectPermanently( self, "HELMET01", false )
    elseif helm <= 0.24 then
        ObjectHideSubObjectPermanently( self, "HELMET02", false )
    elseif helm <= 0.36 then
        ObjectHideSubObjectPermanently( self, "HELMET03", false )
    elseif helm <= 0.48 then
        ObjectHideSubObjectPermanently( self, "HELMET04", false )
    elseif helm <= 0.60 then
        ObjectHideSubObjectPermanently( self, "HELMET05", false )
    elseif helm <= 0.72 then
        ObjectHideSubObjectPermanently( self, "HAIR", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    -- assign random head
    if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    end

    -- assign random collar
    if collar <= 0.25 then
        ObjectHideSubObjectPermanently( self, "COLLARA", false )
    elseif collar <= 0.50 then
        ObjectHideSubObjectPermanently( self, "COLLARB", false )
    else
        ObjectHideSubObjectPermanently( self, "NONE", false )
    end

    -- assign random weapon right hand
    if rightweapon <= 0.20 then
        ObjectHideSubObjectPermanently( self, "SWORDR01", false )
    elseif rightweapon <= 0.40 then
        ObjectHideSubObjectPermanently( self, "SWORDR02", false )
    elseif rightweapon <= 0.60 then
        ObjectHideSubObjectPermanently( self, "SWORDR03", false )
    elseif rightweapon <= 0.80 then
        ObjectHideSubObjectPermanently( self, "SWORDR04", false )
    else
        ObjectHideSubObjectPermanently( self, "SWORDR05", false )
    end

        -- assign random weapon left hand
    if leftweapon <= 0.09 then
        ObjectHideSubObjectPermanently( self, "SWORDL01", false )
    elseif leftweapon <= 0.18 then
        ObjectHideSubObjectPermanently( self, "SWORDL02", false )
    elseif leftweapon <= 0.27 then
        ObjectHideSubObjectPermanently( self, "SWORDL03", false )
    elseif leftweapon <= 0.36 then
        ObjectHideSubObjectPermanently( self, "SWORDL04", false )
    elseif leftweapon <= 0.45 then
        ObjectHideSubObjectPermanently( self, "SWORDL05", false )
    elseif leftweapon <= 0.54 then
        ObjectHideSubObjectPermanently( self, "SHIELD01", false )
    elseif leftweapon <= 0.63 then
        ObjectHideSubObjectPermanently( self, "SHIELD02", false )
    elseif leftweapon <= 0.72 then
        ObjectHideSubObjectPermanently( self, "SHIELD03", false )
    elseif leftweapon <= 0.81 then
        ObjectHideSubObjectPermanently( self, "SHIELD04", false )
    elseif leftweapon <= 0.90 then
        ObjectHideSubObjectPermanently( self, "SHIELD05", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    -- assign random body
    if body <= 0.33 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif body <= 0.66 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
    else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
    end

    -- assign random legs
    if legs <= 0.33 then
        ObjectHideSubObjectPermanently( self, "LEGS01", false )
    elseif legs <= 0.66 then
        ObjectHideSubObjectPermanently( self, "LEGS02", false )
        ObjectHideSubObjectPermanently( self, "GREAVES", false )
    else
        ObjectHideSubObjectPermanently( self, "LEGS02", false )
    end

    -- assign random shoulders
    if shoulders <= 0.18 then
        ObjectHideSubObjectPermanently( self, "SHOULDER01", false )
    elseif shoulders <= 0.36 then
        ObjectHideSubObjectPermanently( self, "SHOULDER02", false )
    elseif shoulders <= 0.54 then
        ObjectHideSubObjectPermanently( self, "SHOULDER03", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    -- assign random hips
    if hips <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HIPS", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end
end

function OnDeadMordorNewFighterCreated(self)
    ObjectHideSubObjectPermanently( self, "HIPS", true )
    ObjectHideSubObjectPermanently( self, "GREAVES", true )
    ObjectHideSubObjectPermanently( self, "QUIVER", true )
    -- helmet types
    ObjectHideSubObjectPermanently( self, "HELMET01", true )
    ObjectHideSubObjectPermanently( self, "HELMET02", true )
    ObjectHideSubObjectPermanently( self, "HELMET03", true )
    ObjectHideSubObjectPermanently( self, "HELMET04", true )
    ObjectHideSubObjectPermanently( self, "HELMET05", true )
    ObjectHideSubObjectPermanently( self, "HAIR", true )
    -- head types
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "HEAD04", true )
    -- collar types
    ObjectHideSubObjectPermanently( self, "COLLARA", true )
    ObjectHideSubObjectPermanently( self, "COLLARB", true )
    -- weapon types
    ObjectHideSubObjectPermanently( self, "SWORDL01", true )
    ObjectHideSubObjectPermanently( self, "SWORDL02", true )
    ObjectHideSubObjectPermanently( self, "SWORDL03", true )
    ObjectHideSubObjectPermanently( self, "SWORDL04", true )
    ObjectHideSubObjectPermanently( self, "SWORDL05", true )
    ObjectHideSubObjectPermanently( self, "SWORDR01", true )
    ObjectHideSubObjectPermanently( self, "SWORDR02", true )
    ObjectHideSubObjectPermanently( self, "SWORDR03", true )
    ObjectHideSubObjectPermanently( self, "SWORDR04", true )
    ObjectHideSubObjectPermanently( self, "SWORDR05", true )
    ObjectHideSubObjectPermanently( self, "SHIELD01", true )
    ObjectHideSubObjectPermanently( self, "SHIELD02", true )
    ObjectHideSubObjectPermanently( self, "SHIELD03", true )
    ObjectHideSubObjectPermanently( self, "SHIELD04", true )
    ObjectHideSubObjectPermanently( self, "SHIELD05", true )
    -- body types
    ObjectHideSubObjectPermanently( self, "BODY01", true )
    ObjectHideSubObjectPermanently( self, "BODY02", true )
    ObjectHideSubObjectPermanently( self, "BODY03", true )
    -- leg types
    ObjectHideSubObjectPermanently( self, "LEGS01", true )
    ObjectHideSubObjectPermanently( self, "LEGS02", true )
    -- shoulder types
    ObjectHideSubObjectPermanently( self, "SHOULDER01", true )
    ObjectHideSubObjectPermanently( self, "SHOULDER02", true )
    ObjectHideSubObjectPermanently( self, "SHOULDER03", true )

    -- assign random gear
    local helm = GetRandomNumber()
    local head = GetRandomNumber()
    local collar = GetRandomNumber()
    local body = GetRandomNumber()
    local legs = GetRandomNumber()
    local shoulders = GetRandomNumber()
    local hips = GetRandomNumber()

    -- assign random helm
    if helm <= 0.12 then
        ObjectHideSubObjectPermanently( self, "HELMET01", false )
    elseif helm <= 0.24 then
        ObjectHideSubObjectPermanently( self, "HELMET02", false )
    elseif helm <= 0.36 then
        ObjectHideSubObjectPermanently( self, "HELMET03", false )
    elseif helm <= 0.48 then
        ObjectHideSubObjectPermanently( self, "HELMET04", false )
    elseif helm <= 0.60 then
        ObjectHideSubObjectPermanently( self, "HELMET05", false )
    elseif helm <= 0.72 then
        ObjectHideSubObjectPermanently( self, "HAIR", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    -- assign random head
    if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    end

    -- assign random collar
    if collar <= 0.25 then
        ObjectHideSubObjectPermanently( self, "COLLARA", false )
    elseif collar <= 0.50 then
        ObjectHideSubObjectPermanently( self, "COLLARB", false )
    else
        ObjectHideSubObjectPermanently( self, "NONE", false )
    end

    -- assign random body
    if body <= 0.33 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif body <= 0.66 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
    else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
    end

    -- assign random legs
    if legs <= 0.33 then
        ObjectHideSubObjectPermanently( self, "LEGS01", false )
    elseif legs <= 0.66 then
        ObjectHideSubObjectPermanently( self, "LEGS02", false )
        ObjectHideSubObjectPermanently( self, "GREAVES", false )
    else
        ObjectHideSubObjectPermanently( self, "LEGS02", false )
    end

    -- assign random shoulders
    if shoulders <= 0.18 then
        ObjectHideSubObjectPermanently( self, "SHOULDER01", false )
    elseif shoulders <= 0.36 then
        ObjectHideSubObjectPermanently( self, "SHOULDER02", false )
    elseif shoulders <= 0.54 then
        ObjectHideSubObjectPermanently( self, "SHOULDER03", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    -- assign random hips
    if hips <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HIPS", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end
end

-- MORDOR ORC LAST ALLIANCE (LOW POLY)
function OnLastAllianceMordorNewFighterCreated(self)
    -- weapon types
    ObjectHideSubObjectPermanently( self, "WEAP01", true )
    ObjectHideSubObjectPermanently( self, "WEAP02", true )
	ObjectHideSubObjectPermanently( self, "SHIELD", true )
    -- body types
    ObjectHideSubObjectPermanently( self, "BODY01", true )
    ObjectHideSubObjectPermanently( self, "BODY02", true )
    ObjectHideSubObjectPermanently( self, "BODY03", true )

    -- assign random gear
    local weapon = GetRandomNumber()
    local body = GetRandomNumber()


    -- assign random weapon right hand
    if weapon <= 0.50 then
        ObjectHideSubObjectPermanently( self, "WEAP01", false )
		ObjectHideSubObjectPermanently( self, "SHIELD", false )
    else
		ObjectHideSubObjectPermanently( self, "WEAP01", false )
        ObjectHideSubObjectPermanently( self, "WEAP02", false )
    end

    -- assign random body
    if body <= 0.33 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif body <= 0.66 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
    else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
    end

end

-- PEASANT FUNCTIONS :D

-- peasant 1: polearms
function OnRohanPeasant1Created(self)
    --Hide Objects code
    --Hide FB
    ObjectHideSubObjectPermanently( self, "FORGED_SPEAR", true )
    --Hide Farm Weapons
    ObjectHideSubObjectPermanently( self, "SCYTHE", true )
    ObjectHideSubObjectPermanently( self, "PITCHFORK", true )
    --Hide Helmets
    ObjectHideSubObjectPermanently( self, "HELMET01", true )
    ObjectHideSubObjectPermanently( self, "HELMET02", true )
    ObjectHideSubObjectPermanently( self, "HELMET03", true )

    local helmet    =    GetRandomNumber()

    if helmet <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HELMET01", false )
    elseif helmet <= 0.60 then
        ObjectHideSubObjectPermanently( self, "HELMET02", false )
    else
        ObjectHideSubObjectPermanently( self, "HELMET03", false )
    end
    -- Farm Weapon Random
    local weapon    =    GetRandomNumber()

    if weapon <= 0.50 then
        ObjectHideSubObjectPermanently( self, "SCYTHE", false )
    else
        ObjectHideSubObjectPermanently( self, "PITCHFORK", false )
    end

end

-- peasant 2: swords

function OnRohanPeasant2Created(self)
    --Hide Objects code
    --Hide FB
    ObjectHideSubObjectPermanently( self, "FORGED_SWORD", true )
    ObjectHideSubObjectPermanently( self, "FORGED_AXE", true )
    --Hide Farm Weapons
    ObjectHideSubObjectPermanently( self, "AXE", true )
    --Hide Hats
    ObjectHideSubObjectPermanently( self, "HAT", true )
    ObjectHideSubObjectPermanently( self, "DHAT", true )
    --Hide Drafted Headgear
    ObjectHideSubObjectPermanently( self, "DHAT", true )
    ObjectHideSubObjectPermanently( self, "DHELMET", true )
    --Hide Drafted Weapons
    ObjectHideSubObjectPermanently( self, "DAXE", true )
    --Hide Shield
    ObjectHideSubObjectPermanently( self, "SHIELDBACK", true )
    ObjectHideSubObjectPermanently( self, "SHIELD", true )

    -- Hat or no hat
    local hat    =    GetRandomNumber()

    if hat <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HAT", false )
    else
        -- no hat
    end

    -- shield or no shield
    local shield    =    GetRandomNumber()

    if shield <= 0.85 then
        ObjectHideSubObjectPermanently( self, "SHIELD", false )
    else
        -- no shield
    end

    -- Farm Weapon Random
    local weapon    =    GetRandomNumber()

    if weapon <= 0.80 then
        ObjectHideSubObjectPermanently( self, "SICKLE", false )
    else
    -- bare hands
    end

    -- Hat or helmet for kid

    local head    =    GetRandomNumber()

    if head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "DHELMET", false )
    else
        ObjectHideSubObjectPermanently( self, "DHAT", false )
    end

end

-- peasant 3: axes

function OnRohanPeasant3Created(self)
    --Hide Objects code
    --Hide FB
    ObjectHideSubObjectPermanently( self, "FORGED_SWORD", true )
    ObjectHideSubObjectPermanently( self, "FORGED_AXE", true )
    --Hide Farm Weapons
    ObjectHideSubObjectPermanently( self, "SICKLE", true )
    --Hide Hats
    ObjectHideSubObjectPermanently( self, "HAT", true )
    ObjectHideSubObjectPermanently( self, "DHAT", true )
    --Hide Drafted Headgear
    ObjectHideSubObjectPermanently( self, "DHAT", true )
    ObjectHideSubObjectPermanently( self, "DHELMET", true )
    --Hide Drafted Weapons
    ObjectHideSubObjectPermanently( self, "DSWORD", true )
    --Hide Shield
    ObjectHideSubObjectPermanently( self, "SHIELD", true )

    -- Hat or no hat
    local hat    =    GetRandomNumber()

    if hat <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HAT", false )
    else
        -- no hat
    end

    -- Farm Weapon Random
    local weapon    =    GetRandomNumber()

    if weapon <= 0.80 then
        ObjectHideSubObjectPermanently( self, "AXE", false )
    else
    -- bare hands
    end

    -- Hat or helmet for drafted kid

    local head    =    GetRandomNumber()

    if head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "DHELMET", false )
    else
        ObjectHideSubObjectPermanently( self, "DHAT", false )
    end

end

function OnMordorFighterCreated(self)
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
	ObjectHideSubObjectPermanently( self, "FORGED_BLADES", true )
	ObjectHideSubObjectPermanently( self, "HELM1", true )
	ObjectHideSubObjectPermanently( self, "HELM2", true )
	ObjectHideSubObjectPermanently( self, "CLOAK", true )

    local helmet         =    GetRandomNumber()

	local cloak         =    GetRandomNumber()

    if helmet <= 0.333 then
        ObjectHideSubObjectPermanently( self, "HELM1", false )
     else
        ObjectHideSubObjectPermanently( self, "HELM2", false )
    end

	if cloak <= 0.333 then
        ObjectHideSubObjectPermanently( self, "CLOAK", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

end

function MordorFighterBecomeUncontrollablyAfraid(self,other)
	local wasAfraid = ObjectTestModelCondition(self, "EMOTION_AFRAID")

	BecomeUncontrollablyAfraid(self,other)                 -- Call base function appropriate to many unit types

	-- Play unit-specific sound, but only when first entering state (not every time troll sends out fear message!)
	-- BecomeAfraidOfTroll may fail, don't play sound if we didn't enter fear state
		if ( not wasAfraid ) and ObjectTestModelCondition(self, "EMOTION_AFRAID") then
		ObjectPlaySound(self, "MordorFighterEntFear")
	end
end

function MordorFighterBecomeAfraidOfPhial(self,other)
	local wasAfraid = ObjectTestModelCondition(self, "EMOTION_AFRAID")

	BecomeUncontrollablyAfraid(self,other)
	-- BecomeAfraidOfTroll(self,other)                 -- Call base function appropriate to many unit types

	-- Play unit-specific sound, but only when first entering state (not every time troll sends out fear message!)
	-- BecomeAfraidOfTroll may fail, don't play sound if we didn't enter fear state
--		if ( not wasAfraid ) and ObjectTestModelCondition(self, "EMOTION_AFRAID") then
--			ObjectPlaySound(self, "MordorFighterEntFear")
--		end
end

function OnMordorCorsairCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "Forged_Blade01", true )
end

function WildInfantryBecomeAfraidOfPhial(self,other)
	local wasAfraid = ObjectTestModelCondition(self, "EMOTION_AFRAID")
	BecomeUncontrollablyAfraid(self,other)
end


function ShelobBecomeAfraidOfPhial(self,other)
	local wasAfraid = ObjectTestModelCondition(self, "EMOTION_AFRAID")

	BecomeUncontrollablyAfraid(self,other)
	-- BecomeAfraidOfTroll(self,other)                 -- Call base function appropriate to many unit types

	-- Play unit-specific sound, but only when first entering state (not every time troll sends out fear message!)
	-- BecomeAfraidOfTroll may fail, don't play sound if we didn't enter fear state
--		if ( not wasAfraid ) and ObjectTestModelCondition(self, "EMOTION_AFRAID") then
--			ObjectPlaySound(self, "MordorFighterEntFear")
--		end
end

function OnInfantryBannerCreated(self)
	ObjectHideSubObjectPermanently( self, "Glow", true )
end

function OnMordorUrukBannerCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
end

function OnCavalryCreated(self)
	ObjectHideSubObjectPermanently( self, "Glow", true )
end

function OnGondorKingsguardCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "Hammer1", true )
	ObjectHideSubObjectPermanently( self, "Glow", true )
	ObjectHideSubObjectPermanently( self, "Glow1", true )
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "BANNER01", true )
    ObjectHideSubObjectPermanently( self, "BANNER02", true )
    ObjectHideSubObjectPermanently( self, "BANNER03", true )
	local banner          =    GetRandomNumber()
	local head          =    GetRandomNumber()
    if head <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    end

    if banner <= 0.4 then
        ObjectHideSubObjectPermanently( self, "BANNER01", false )
    elseif banner <= 0.8 then
        ObjectHideSubObjectPermanently( self, "BANNER02", false )
	else
        ObjectHideSubObjectPermanently( self, "BANNER03", false )
    end

end

function OnAnnuminasKingsGuardCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "Hammer1", true )
	ObjectHideSubObjectPermanently( self, "Glow", true )
	ObjectHideSubObjectPermanently( self, "Glow1", true )
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HEAD04", true )
	local head          =    GetRandomNumber()
	if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    end

end

function OnGondorFighterCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "Hammer1", true )
	ObjectHideSubObjectPermanently( self, "Glow", true )
	ObjectHideSubObjectPermanently( self, "Glow1", true )
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "BANNER01", true )
    ObjectHideSubObjectPermanently( self, "BANNER02", true )
    ObjectHideSubObjectPermanently( self, "BANNER03", true )
	local banner          =    GetRandomNumber()
	local head          =    GetRandomNumber()
    if head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
	else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

    if banner <= 0.4 then
        ObjectHideSubObjectPermanently( self, "BANNER01", false )
    elseif banner <= 0.8 then
        ObjectHideSubObjectPermanently( self, "BANNER02", false )
	else
        ObjectHideSubObjectPermanently( self, "BANNER03", false )
    end

end

function OnSAGondorFighterCreated(self)
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "HA", true )
    ObjectHideSubObjectPermanently( self, "HACLOAK", true )
	local banner          =    GetRandomNumber()
	local head          =    GetRandomNumber()
    if head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
	else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end
end

function OnFornostSoldierCreated(self)
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
	ObjectHideSubObjectPermanently( self, "WINGS", true )
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HEAD04", true )
    ObjectHideSubObjectPermanently( self, "SHIELD01", true )
    ObjectHideSubObjectPermanently( self, "SHIELD02", true )
    ObjectHideSubObjectPermanently( self, "SHIELD03", true )
	local shield          =    GetRandomNumber()
	local head          =    GetRandomNumber()

	if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    end

    if shield <= 0.4 then
        ObjectHideSubObjectPermanently( self, "SHIELD01", false )
    elseif shield <= 0.8 then
        ObjectHideSubObjectPermanently( self, "SHIELD02", false )
	else
        ObjectHideSubObjectPermanently( self, "SHIELD03", false )
    end

end
function OnFornostChestCreated(self)
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
	ObjectHideSubObjectPermanently( self, "WINGS", true )
	ObjectHideSubObjectPermanently( self, "WINGS01", true )
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HEAD04", true )
    ObjectHideSubObjectPermanently( self, "SHIELD01", true )
    ObjectHideSubObjectPermanently( self, "SHIELD02", true )
    ObjectHideSubObjectPermanently( self, "SHIELD03", true )
	local shield          =    GetRandomNumber()
	local head          =    GetRandomNumber()

	if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    end

    if shield <= 0.4 then
        ObjectHideSubObjectPermanently( self, "SHIELD01", false )
    elseif shield <= 0.8 then
        ObjectHideSubObjectPermanently( self, "SHIELD02", false )
	else
        ObjectHideSubObjectPermanently( self, "SHIELD03", false )
    end

end
function OnArthedainKnightCreated(self)
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
	ObjectHideSubObjectPermanently( self, "WINGS", true )
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HEAD04", true )
    ObjectHideSubObjectPermanently( self, "HORSE01", true )
    ObjectHideSubObjectPermanently( self, "HORSE02", true )
    ObjectHideSubObjectPermanently( self, "HORSE03", true )
    ObjectHideSubObjectPermanently( self, "HORSE04", true )
	ObjectHideSubObjectPermanently( self, "SHIELD01", true )
    ObjectHideSubObjectPermanently( self, "SHIELD02", true )
    ObjectHideSubObjectPermanently( self, "SHIELD03", true )
	local shield          =    GetRandomNumber()
    local horse         =    GetRandomNumber()
    local head 		=   GetRandomNumber()

    if horse <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HORSE01", false )
    elseif horse <= 0.6 then
        ObjectHideSubObjectPermanently( self, "HORSE02", false )
    elseif horse <= 0.8 then
        ObjectHideSubObjectPermanently( self, "HORSE03", false )
     else
        ObjectHideSubObjectPermanently( self, "HORSE04", false )
    end

	if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    end

	if shield <= 0.4 then
        ObjectHideSubObjectPermanently( self, "SHIELD01", false )
    elseif shield <= 0.8 then
        ObjectHideSubObjectPermanently( self, "SHIELD02", false )
	else
        ObjectHideSubObjectPermanently( self, "SHIELD03", false )
    end
end

function OnFornostArcherCreated(self)
	ObjectHideSubObjectPermanently( self, "HA", true )
	ObjectHideSubObjectPermanently( self, "WINGS", true )
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HEAD04", true )
	local head          =    GetRandomNumber()

	if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    end

end

function OnFornostBannerCreated(self)
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
	ObjectHideSubObjectPermanently( self, "WINGS", true )
    ObjectHideSubObjectPermanently( self, "BANNER01", true )
    ObjectHideSubObjectPermanently( self, "BANNER02", true )
    ObjectHideSubObjectPermanently( self, "BANNER03", true )
	local banner          =    GetRandomNumber()

    if banner <= 0.4 then
        ObjectHideSubObjectPermanently( self, "BANNER01", false )
    elseif banner <= 0.8 then
        ObjectHideSubObjectPermanently( self, "BANNER02", false )
	else
        ObjectHideSubObjectPermanently( self, "BANNER03", false )
    end

end

function OnDorwinionCaptainCreated(self)
	ObjectHideSubObjectPermanently( self, "WREATH", true )
	ObjectHideSubObjectPermanently( self, "PATCH", true )
	local accessory          =    GetRandomNumber()

	if accessory <= 0.3 then
        ObjectHideSubObjectPermanently( self, "WREATH", false )
    elseif accessory <= 0.7 then
        ObjectHideSubObjectPermanently( self, "PATCH", false )
	else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

end

function OnHobbitBounderCreated(self)
	ObjectHideSubObjectPermanently( self, "BOUNDERSATCHEL", true )
	ObjectHideSubObjectPermanently( self, "HAT01", true )
	ObjectHideSubObjectPermanently( self, "HAT02", true )
	ObjectHideSubObjectPermanently( self, "HAT03", true )
	ObjectHideSubObjectPermanently( self, "HAT04", true )
	ObjectHideSubObjectPermanently( self, "BODY01", true )
	ObjectHideSubObjectPermanently( self, "BODY02", true )
	ObjectHideSubObjectPermanently( self, "BODY03", true )
	ObjectHideSubObjectPermanently( self, "PIPE", true )
	ObjectHideSubObjectPermanently( self, "FEATHER", true )	
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HEAD04", true )
	ObjectHideSubObjectPermanently( self, "HEAD05", true )
	ObjectHideSubObjectPermanently( self, "HEAD06", true )
	ObjectHideSubObjectPermanently( self, "HEAD07", true )
	ObjectHideSubObjectPermanently( self, "HEAD08", true )
	ObjectHideSubObjectPermanently( self, "HEAD09", true )
	ObjectHideSubObjectPermanently( self, "BADGE", true )

	local head          =    GetRandomNumber()
	local bag          =    GetRandomNumber()
	local hat          =    GetRandomNumber()
	local body          =    GetRandomNumber()
	local pipe          =    GetRandomNumber()
	local feather          =    GetRandomNumber()	

    if head <= 0.2 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head <= 0.4 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    elseif head <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    elseif head <= 0.6 then
        ObjectHideSubObjectPermanently( self, "HEAD05", false )
    elseif head <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEAD06", false )
    elseif head <= 0.8 then
        ObjectHideSubObjectPermanently( self, "HEAD07", false )
    elseif head <= 0.9 then
        ObjectHideSubObjectPermanently( self, "HEAD08", false )
	else
        ObjectHideSubObjectPermanently( self, "HEAD09", false )
    end

    if pipe <= 0.3 then
        ObjectHideSubObjectPermanently( self, "PIPE", false )
	else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    if bag <= 0.5 then
        ObjectHideSubObjectPermanently( self, "BOUNDERSATCHEL", false )
	else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    if hat <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HAT01", false )
    elseif hat <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HAT02", false )
    elseif hat <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HAT03", false )
	else
        ObjectHideSubObjectPermanently( self, "HAT04", false )
    end
	
    if feather <= 0.5 then
        ObjectHideSubObjectPermanently( self, "FEATHER", false )
	else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end		

    if body <= 0.3 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif body <= 0.7 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
	else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
    end

end

function OnHobbitShirriffCreated(self)
	ObjectHideSubObjectPermanently( self, "BOUNDERSATCHEL", true )
	ObjectHideSubObjectPermanently( self, "HAT01", true )
	ObjectHideSubObjectPermanently( self, "HAT02", true )
	ObjectHideSubObjectPermanently( self, "HAT03", true )
	ObjectHideSubObjectPermanently( self, "HAT04", true )
	ObjectHideSubObjectPermanently( self, "BODY01", true )
	ObjectHideSubObjectPermanently( self, "BODY02", true )
	ObjectHideSubObjectPermanently( self, "BODY03", true )
	ObjectHideSubObjectPermanently( self, "PIPE", true )
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HEAD04", true )
	ObjectHideSubObjectPermanently( self, "HEAD05", true )

	local head          =    GetRandomNumber()
	local bag          =    GetRandomNumber()
	local hat          =    GetRandomNumber()
	local body          =    GetRandomNumber()
	local pipe          =    GetRandomNumber()

	if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
	elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
	elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
	else
        ObjectHideSubObjectPermanently( self, "HEAD05", false )
	end

    if pipe <= 0.3 then
        ObjectHideSubObjectPermanently( self, "PIPE", false )
	else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    if bag <= 0.5 then
        ObjectHideSubObjectPermanently( self, "BOUNDERSATCHEL", false )
	else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    if hat <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HAT01", false )
    elseif hat <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HAT02", false )
    elseif hat <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HAT03", false )
	else
        ObjectHideSubObjectPermanently( self, "HAT04", false )
    end

    if body <= 0.3 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif body <= 0.7 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
	else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
    end

end

function OnDancingHobbitCreated(self)
	ObjectHideSubObjectPermanently( self, "HAT01", true )
	ObjectHideSubObjectPermanently( self, "HAT02", true )
	ObjectHideSubObjectPermanently( self, "HAT03", true )
	ObjectHideSubObjectPermanently( self, "BODY01", true )
	ObjectHideSubObjectPermanently( self, "BODY02", true )
	ObjectHideSubObjectPermanently( self, "BODY03", true )
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "FOOT01", true )
    ObjectHideSubObjectPermanently( self, "FOOT02", true )
    ObjectHideSubObjectPermanently( self, "FOOT03", true )

	local head          =    GetRandomNumber()
	local hat          =    GetRandomNumber()
	local body          =    GetRandomNumber()
	local feet          =    GetRandomNumber()

    if head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
	else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

    if hat <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HAT01", false )
    elseif hat <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HAT02", false )
	else
        ObjectHideSubObjectPermanently( self, "HAT03", false )
    end

    if body <= 0.3 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif body <= 0.7 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
	else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
    end

    if feet <= 0.3 then
        ObjectHideSubObjectPermanently( self, "FOOT01", false )
    elseif feet <= 0.7 then
        ObjectHideSubObjectPermanently( self, "FOOT02", false )
	else
        ObjectHideSubObjectPermanently( self, "FOOT03", false )
    end

end

function OnHaradNomadCreated(self)
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )
end

function OnHaradNomadDeployed(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl2" )
    ObjectGrantUpgrade( self, "Upgrade_IsMounted" )
end

function OnHaradNomadMoving(self)
    ObjectRemoveUpgrade( self, "Upgrade_IsMounted" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )
end

function OnAragornCreated(self)
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )
	ObjectHideSubObjectPermanently( self, "PLANE02", true )
end

function OnArwenCreated(self)

    ObjectHideSubObjectPermanently( self, "FRONTHAIR", true )

    local hair 			=   GetRandomNumber()

    if hair <= 0.50 then
        ObjectHideSubObjectPermanently( self, "FRONTHAIR", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end
end

function OnArveduiCreated(self)
    ObjectGrantUpgrade( self, "Upgrade_SonsOfElrond" )
	ObjectHideSubObjectPermanently( self, "PLANE02", true )
end

function OnThorinCreated(self)
	ObjectHideSubObjectPermanently( self, "ORCRIST01", true )
	ObjectHideSubObjectPermanently( self, "SHEATH", true )
end

function OnAzogCreated(self)
	ObjectHideSubObjectPermanently( self, "PLANE02", true )
	ObjectHideSubObjectPermanently( self, "WEAPS", true)
	ObjectHideSubObjectPermanently( self, "ARMOR", true )
    ObjectHideSubObjectPermanently( self, "AZOGHA", true )
end

function OnBlackrootArcherCreated(self)
	-- ObjectHideSubObjectPermanently( self, "arrow", true )		-- This gets hidden pending the art being fixed.  it is the pre-new-archer-firing-pattern arrow
	ObjectHideSubObjectPermanently( self, "FireArowTip", true ) -- This gets hidden because the Fire Arrow upgrade turns it on.
	ObjectHideSubObjectPermanently( self, "ARMOR", true)
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "BODY01", true )
    ObjectHideSubObjectPermanently( self, "BODY02", true )
    ObjectHideSubObjectPermanently( self, "COIF", true )

	local body          =    GetRandomNumber()
	local coif          =    GetRandomNumber()
	local head          =    GetRandomNumber()

    if body <= 0.5 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
     else
        ObjectHideSubObjectPermanently( self, "BODY02", false )
    end

    if coif <= 0.5 then
        ObjectHideSubObjectPermanently( self, "COIF", false )
    else
		-- nothing
    end

    if head <= 0.35 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.65 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
	else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end
end

function OnDainCreated(self)
	-- ObjectHideSubObjectPermanently( self, "arrow", true )		-- This gets hidden pending the art being fixed.  it is the pre-new-archer-firing-pattern arrow
	ObjectHideSubObjectPermanently( self, "PAULDRONS", true ) -- This gets hidden because the Fire Arrow upgrade turns it on.
	ObjectHideSubObjectPermanently( self, "CLOAK", true)
	local shield          =    GetRandomNumber()
    if shield <= 0.5 then
        ObjectHideSubObjectPermanently( self, "PAULDRONS", false )
     else
        ObjectHideSubObjectPermanently( self, "CLOAK", false )
	end
end

function OnElegostCreated(self)
	ObjectHideSubObjectPermanently( self, "HEAD", true )
	ObjectHideSubObjectPermanently( self, "HEADHOOD", true)
	ObjectHideSubObjectPermanently( self, "HOODDOWN", true)
	ObjectHideSubObjectPermanently( self, "HOODUP", true)

	local hood          =    GetRandomNumber()

    if hood <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HEAD", false )
        ObjectHideSubObjectPermanently( self, "HOODDOWN", false )
     else
        ObjectHideSubObjectPermanently( self, "HEADHOOD", false )
        ObjectHideSubObjectPermanently( self, "HOODUP", false )
	end
end

function OnGondorDolMaArmsCreated(self)
	-- ObjectHideSubObjectPermanently( self, "arrow", true )		-- This gets hidden pending the art being fixed.  it is the pre-new-archer-firing-pattern arrow
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FireArowTip", true ) -- This gets hidden because the Fire Arrow upgrade turns it on.
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "HELMETWINGA", true )
    ObjectHideSubObjectPermanently( self, "HELMETWINGB", true )
    ObjectHideSubObjectPermanently( self, "SASH01", true )
    ObjectHideSubObjectPermanently( self, "SASH02", true )
	local head          =    GetRandomNumber()
	local helmet          =    GetRandomNumber()
	local sash          =    GetRandomNumber()

    if head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
	else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

    if sash <= 0.5 then
        ObjectHideSubObjectPermanently( self, "SASH01", false )
	else
        ObjectHideSubObjectPermanently( self, "SASH02", false )
    end

    if helmet <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HELMETWINGA", false )
	else
        ObjectHideSubObjectPermanently( self, "HELMETWINGB", false )
    end
end

function OnGondorArcherCreated(self)
	-- ObjectHideSubObjectPermanently( self, "arrow", true )		-- This gets hidden pending the art being fixed.  it is the pre-new-archer-firing-pattern arrow
	ObjectHideSubObjectPermanently( self, "FireArowTip", true ) -- This gets hidden because the Fire Arrow upgrade turns it on.
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
	local head          =    GetRandomNumber()
    if head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
	else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end
end

function OnOsgiliathVetCreated(self)
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
 end

function DragonStrikeDragonCreated(self)
	ObjectForbidPlayerCommands( self, true )
end

function OnLegolasCreated(self)
	-- ObjectHideSubObjectPermanently( self, "arrow02", true )		-- This gets hidden pending the art being fixed.  it is the pre-new-archer-firing-pattern arrow
	-- ObjectHideSubObjectPermanently( self, "arrow", true )		-- This gets hidden pending the art being fixed.  it is the pre-new-archer-firing-pattern arrow
end

function OnGimliCreated(self)
	--ObjectHideSubObjectPermanently( self, "AXE02", true )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )
end

function OnKingDainCreated(self)
	ObjectHideSubObjectPermanently( self, "HEAD", true )
	ObjectHideSubObjectPermanently( self, "CROWN", true )
    ObjectHideSubObjectPermanently( self, "HEADHELMET", true )
	ObjectHideSubObjectPermanently( self, "HELMET", true )

	local head          =    GetRandomNumber()
    if head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEAD", false )
		ObjectHideSubObjectPermanently( self, "CROWN", false )
    else
        ObjectHideSubObjectPermanently( self, "HEADHELMET", false )
		ObjectHideSubObjectPermanently( self, "HELMET", false )
    end	
end

function OnGloinCreated(self)
	ObjectHideSubObjectPermanently( self, "HEAD", true )
    ObjectHideSubObjectPermanently( self, "HEADHELMET", true )
	ObjectHideSubObjectPermanently( self, "HELMET", true )

	local head          =    GetRandomNumber()
    if head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEAD", false )
    else
        ObjectHideSubObjectPermanently( self, "HEADHELMET", false )
		ObjectHideSubObjectPermanently( self, "HELMET", false )
    end	
end

function OnCampaignGloinCreated(self)
    ObjectHideSubObjectPermanently( self, "HEADHELMET", true )
	ObjectHideSubObjectPermanently( self, "HELMET", true )
end

function OnEomerCreated(self)
	ObjectHideSubObjectPermanently( self, "HEAD", true )
    ObjectHideSubObjectPermanently( self, "HEADHELMET", true )
	ObjectHideSubObjectPermanently( self, "HELM", true )

	local head          =    GetRandomNumber()
    if head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEAD", false )
    else
        ObjectHideSubObjectPermanently( self, "HEADHELMET", false )
		ObjectHideSubObjectPermanently( self, "HELM", false )
    end	
end	

function OnRohanArcherCreated(self)
	ObjectHideSubObjectPermanently( self, "FireArowTip", true ) -- yes, it's a typo in the art.
	-- ObjectHideSubObjectPermanently( self, "ArrowNock", true )
	-- ObjectHideSubObjectPermanently( self, "arrow", true )
end

function OnRohanWestfolderCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "HA", true )
end

function OnGaladrielCreated(self)
	ObjectHideSubObjectPermanently( self, "CROWNNC", true )
	local crown          =    GetRandomNumber()
    if crown <= 0.5 then
        ObjectHideSubObjectPermanently( self, "CROWNNC", false )
	else
        ObjectHideSubObjectPermanently( self, "NONE", false )
    end
end

function GondorFighterBecomeAfraid(self, other)
	local wasAfraid = ObjectTestModelCondition(self, "EMOTION_AFRAID")

	-- An object has a 100% chance to become afraid.
	-- An object has a 66% chance to be feared, 33% chance to run away.
	if GetRandomNumber() <= 0.67 then
		ObjectEnterFearState(self, other, false) -- become afraid of other.
	else --if GetRandomNumber() > 0.67 then
		ObjectEnterRunAwayPanicState(self, other) -- run away.

	end

	if ( not wasAfraid ) and ObjectTestModelCondition(self, "EMOTION_AFRAID") then
		ObjectPlaySound(self, "GondorSoldierScream")
	end

end


function GondorFighterBecomeAfraidOfGateDamaged(self, other)
	local wasAfraid = ObjectTestModelCondition(self, "EMOTION_AFRAID")

	BecomeAfraidOfGateDamaged(self,other)                 -- Call base function appropriate to many unit types

	-- Play unit-specific sound, but only when first entering state (not every time troll sends out fear message!)
	-- BecomeAfraidOfGateDamaged may fail, don't play sound if we didn't enter fear state

	if ( not wasAfraid ) and ObjectTestModelCondition(self, "EMOTION_AFRAID") then
		ObjectPlaySound(self, "GondorSoldierScream")
	end
end

function GondorFighterRecoverFromTerror(self)
	-- Add recovery sound
	ObjectPlaySound(self, "GondorSoldierRecoverFromTerror")
end

function SpyMoving(self, other)
	print(ObjectDescription(self).." spying movement of "..ObjectDescription(other));
end

--function GandalfConsiderUsingDefensePower(self, other, delay, amount)
--	-- Put up the shield if a big attack is coming and we have time to block it
--	if tonumber(delay) > 1 then
--		if tonumber(amount) >= 100 then
--			ObjectDoSpecialPower(self, "SpecialPowerShieldBubble")
--			return
--		end
--	end
--
--	-- Or, if we are being hit and there are alot of guys arround, do our cool pushback power
--	if tonumber(ObjectCountNearbyEnemies(self, 50)) >= 4 then
--		ObjectDoSpecialPower(self, "SpecialPowerTelekeneticPush")
--		return
--	end
--end

-- Added for 2.0 from DC patch ;;,;;
function GandalfUseDefensePower(self, other, delay, amount)
  ObjectDoSpecialPower(self, "SpecialPowerShieldBubble")
end

function GandalfTriggerWizardBlast(self)
	ObjectCreateAndFireTempWeapon(self, "GandalfWizardBlast")
end

--function SarumanConsiderUsingDefensePower(self, other, delay, amount)
--	-- Put up the shield if a big attack is coming and we have time to block it
--E4	if tonumber(delay) > 1 then
--E4		if tonumber(amount) >= 25 then
--E4			ObjectDoSpecialPower(self, "SpecialPowerShieldBubble")
--E4			return
--E4		end
--E4	end
--
--	-- Or, if we are being hit and there are alot of guys arround, do our cool pushback power
--	if tonumber(ObjectCountNearbyEnemies(self, 50)) >= 4 then
--		ObjectDoSpecialPower(self, "SpecialPowerTelekeneticPush")
--		return
--	end
--end

function BalrogTriggerBreatheFire(self)
	ObjectCreateAndFireTempWeapon(self, "MordorBalrogBreath")
end

function OnNewRohirrimCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_BladeA", true )
	ObjectHideSubObjectPermanently( self, "Forged_BladeB", true )
	ObjectHideSubObjectPermanently( self, "Forged_BladeC", true )
	ObjectHideSubObjectPermanently( self, "SHIELD01", true )
	ObjectHideSubObjectPermanently( self, "SHIELD02", true )
	ObjectHideSubObjectPermanently( self, "SHIELD03", true )
	ObjectHideSubObjectPermanently( self, "SHIELD04", true )
	ObjectHideSubObjectPermanently( self, "SHIELD05", true )
	ObjectHideSubObjectPermanently( self, "SHIELD06", true )
	ObjectHideSubObjectPermanently( self, "SHIELD07", true )
	ObjectHideSubObjectPermanently( self, "FireArowTip", true )
    ObjectHideSubObjectPermanently( self, "HORSE01", true )
    ObjectHideSubObjectPermanently( self, "HORSE02", true )
    ObjectHideSubObjectPermanently( self, "HORSE03", true )
    ObjectHideSubObjectPermanently( self, "HORSE04", true )
	ObjectHideSubObjectPermanently( self, "BODY01", true )
	ObjectHideSubObjectPermanently( self, "BODY02", true )
	ObjectHideSubObjectPermanently( self, "BODY03", true )
	ObjectHideSubObjectPermanently( self, "CLOAK01", true )
	ObjectHideSubObjectPermanently( self, "CLOAK02", true )
	ObjectHideSubObjectPermanently( self, "CLOAK03", true )
	ObjectHideSubObjectPermanently( self, "COIF", true )
	ObjectHideSubObjectPermanently( self, "HELM01", true )
	ObjectHideSubObjectPermanently( self, "HELM02", true )
	ObjectHideSubObjectPermanently( self, "HELM03", true )
	ObjectHideSubObjectPermanently( self, "NEWHELM01", true )
	ObjectHideSubObjectPermanently( self, "NEWHELM02", true )
	ObjectHideSubObjectPermanently( self, "NEWHELM03", true )
	ObjectHideSubObjectPermanently( self, "NEWHELM04", true )
	ObjectHideSubObjectPermanently( self, "NEWHELM05", true )
	ObjectHideSubObjectPermanently( self, "NEWHELM06", true )
	ObjectHideSubObjectPermanently( self, "NEWHELM07", true )
	ObjectHideSubObjectPermanently( self, "NEWHELM08", true )
	ObjectHideSubObjectPermanently( self, "NEWHELM09", true )
	ObjectHideSubObjectPermanently( self, "HELMHEAD01", true )
	ObjectHideSubObjectPermanently( self, "HELMHEAD02", true )
	ObjectHideSubObjectPermanently( self, "NOHELM01", true )
	ObjectHideSubObjectPermanently( self, "NOHELM02", true )
	ObjectHideSubObjectPermanently( self, "LEGS01", true )
	ObjectHideSubObjectPermanently( self, "LEGS02", true )
	ObjectHideSubObjectPermanently( self, "LEGS03", true )

    local horse         =    GetRandomNumber()
    local shield 		=   GetRandomNumber()
    local head 		=   GetRandomNumber()
    local bodies 		=   GetRandomNumber()
    local cloaks 		=   GetRandomNumber()
    local legs 		=   GetRandomNumber()

    if bodies <= 0.4 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif bodies <= 0.8 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
     else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
    end

    if cloaks <= 0.4 then
        ObjectHideSubObjectPermanently( self, "CLOAK01", false )
    elseif cloaks <= 0.8 then
        ObjectHideSubObjectPermanently( self, "CLOAK03", false )
     else
        ObjectHideSubObjectPermanently( self, "CLOAK02", false )
    end

    if legs <= 0.4 then
        ObjectHideSubObjectPermanently( self, "LEGS01", false )
	elseif legs <= 0.8 then
        ObjectHideSubObjectPermanently( self, "LEGS02", false )
     else
        ObjectHideSubObjectPermanently( self, "LEGS03", false )
    end

    if horse <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HORSE01", false )
    elseif horse <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HORSE02", false )
    elseif horse <= 0.8 then
        ObjectHideSubObjectPermanently( self, "HORSE03", false )
     else
        ObjectHideSubObjectPermanently( self, "HORSE04", false )
    end

    if shield <= 0.1 then
        ObjectHideSubObjectPermanently( self, "SHIELD01", false )
    elseif shield <= 0.3 then
        ObjectHideSubObjectPermanently( self, "SHIELD02", false )
    elseif shield <= 0.4 then
        ObjectHideSubObjectPermanently( self, "SHIELD03", false )
    elseif shield <= 0.5 then
        ObjectHideSubObjectPermanently( self, "SHIELD04", false )
    elseif shield <= 0.7 then
        ObjectHideSubObjectPermanently( self, "SHIELD05", false )
    elseif shield <= 0.9 then
        ObjectHideSubObjectPermanently( self, "SHIELD06", false )
     else
        ObjectHideSubObjectPermanently( self, "SHIELD07", false )
    end

    if head <= 0.10 then
        ObjectHideSubObjectPermanently( self, "NOHELM01", false )
    elseif head <= 0.15 then
        ObjectHideSubObjectPermanently( self, "NOHELM02", false )
    elseif head <= 0.20 then
        ObjectHideSubObjectPermanently( self, "COIF", false )
    elseif head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "NEWHELM01", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.30 then
        ObjectHideSubObjectPermanently( self, "NEWHELM02", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.35 then
        ObjectHideSubObjectPermanently( self, "NEWHELM03", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.40 then
        ObjectHideSubObjectPermanently( self, "NEWHELM04", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.45 then
        ObjectHideSubObjectPermanently( self, "NEWHELM05", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "NEWHELM06", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.55 then
        ObjectHideSubObjectPermanently( self, "NEWHELM07", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.58 then
        ObjectHideSubObjectPermanently( self, "NEWHELM08", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.60 then
        ObjectHideSubObjectPermanently( self, "NEWHELM09", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.65 then
        ObjectHideSubObjectPermanently( self, "NEWHELM01", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
    elseif head <= 0.70 then
        ObjectHideSubObjectPermanently( self, "NEWHELM02", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
    elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "NEWHELM04", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
    elseif head <= 0.80 then
        ObjectHideSubObjectPermanently( self, "NEWHELM05", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
    elseif head <= 0.85 then
        ObjectHideSubObjectPermanently( self, "NEWHELM06", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
    elseif head <= 0.90 then
        ObjectHideSubObjectPermanently( self, "NEWHELM07", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
    elseif head <= 0.95 then
        ObjectHideSubObjectPermanently( self, "NEWHELM08", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
    elseif head <= 0.99 then
        ObjectHideSubObjectPermanently( self, "NEWHELM09", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
	else
        ObjectHideSubObjectPermanently( self, "NEWHELM03", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
    end
end

function OnRohirrimBannerCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_BladeA", true )
	ObjectHideSubObjectPermanently( self, "Forged_BladeB", true )
	ObjectHideSubObjectPermanently( self, "Forged_BladeC", true )
	ObjectHideSubObjectPermanently( self, "SHIELD01", true )
	ObjectHideSubObjectPermanently( self, "SHIELD02", true )
	ObjectHideSubObjectPermanently( self, "SHIELD03", true )
	ObjectHideSubObjectPermanently( self, "SHIELD04", true )
	ObjectHideSubObjectPermanently( self, "SHIELD05", true )
	ObjectHideSubObjectPermanently( self, "SHIELD06", true )
	ObjectHideSubObjectPermanently( self, "SHIELD07", true )
	ObjectHideSubObjectPermanently( self, "FireArowTip", true )
    ObjectHideSubObjectPermanently( self, "HORSE01", true )
    ObjectHideSubObjectPermanently( self, "HORSE02", true )
    ObjectHideSubObjectPermanently( self, "HORSE03", true )
    ObjectHideSubObjectPermanently( self, "HORSE04", true )
	ObjectHideSubObjectPermanently( self, "BODY01", true )
	ObjectHideSubObjectPermanently( self, "BODY02", true )
	ObjectHideSubObjectPermanently( self, "BODY03", true )
	ObjectHideSubObjectPermanently( self, "CLOAK01", true )
	ObjectHideSubObjectPermanently( self, "CLOAK02", true )
	ObjectHideSubObjectPermanently( self, "CLOAK03", true )
	ObjectHideSubObjectPermanently( self, "COIF", true )
	ObjectHideSubObjectPermanently( self, "HELM01", true )
	ObjectHideSubObjectPermanently( self, "HELM02", true )
	ObjectHideSubObjectPermanently( self, "HELM03", true )
	ObjectHideSubObjectPermanently( self, "NEWHELM01", true )
	ObjectHideSubObjectPermanently( self, "NEWHELM02", true )
	ObjectHideSubObjectPermanently( self, "NEWHELM03", true )
	ObjectHideSubObjectPermanently( self, "NEWHELM04", true )
	ObjectHideSubObjectPermanently( self, "NEWHELM05", true )
	ObjectHideSubObjectPermanently( self, "NEWHELM06", true )
	ObjectHideSubObjectPermanently( self, "NEWHELM07", true )
	ObjectHideSubObjectPermanently( self, "NEWHELM08", true )
	ObjectHideSubObjectPermanently( self, "NEWHELM09", true )
	ObjectHideSubObjectPermanently( self, "HELMHEAD01", true )
	ObjectHideSubObjectPermanently( self, "HELMHEAD02", true )
	ObjectHideSubObjectPermanently( self, "NOHELM01", true )
	ObjectHideSubObjectPermanently( self, "NOHELM02", true )
	ObjectHideSubObjectPermanently( self, "LEGS01", true )
	ObjectHideSubObjectPermanently( self, "LEGS02", true )
	ObjectHideSubObjectPermanently( self, "LEGS03", true )
	ObjectHideSubObjectPermanently( self, "FLAG01", true )
	ObjectHideSubObjectPermanently( self, "FLAG02", true )
	ObjectHideSubObjectPermanently( self, "FLAG03", true )

    local horse         =    GetRandomNumber()
    local shield 		=   GetRandomNumber()
    local head 		=   GetRandomNumber()
    local bodies 		=   GetRandomNumber()
    local cloaks 		=   GetRandomNumber()
    local legs 		=   GetRandomNumber()
    local flags 		=   GetRandomNumber()

    if flags <= 0.3 then
        ObjectHideSubObjectPermanently( self, "FLAG01", false )
    elseif flags <= 0.6 then
        ObjectHideSubObjectPermanently( self, "FLAG03", false )
     else
        ObjectHideSubObjectPermanently( self, "FLAG03", false )
    end

    if bodies <= 0.4 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif bodies <= 0.8 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
     else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
    end

    if cloaks <= 0.4 then
        ObjectHideSubObjectPermanently( self, "CLOAK01", false )
    elseif cloaks <= 0.8 then
        ObjectHideSubObjectPermanently( self, "CLOAK03", false )
     else
        ObjectHideSubObjectPermanently( self, "CLOAK02", false )
    end

    if legs <= 0.4 then
        ObjectHideSubObjectPermanently( self, "LEGS01", false )
	elseif legs <= 0.8 then
        ObjectHideSubObjectPermanently( self, "LEGS02", false )
     else
        ObjectHideSubObjectPermanently( self, "LEGS03", false )
    end

    if horse <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HORSE01", false )
    elseif horse <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HORSE02", false )
    elseif horse <= 0.8 then
        ObjectHideSubObjectPermanently( self, "HORSE03", false )
     else
        ObjectHideSubObjectPermanently( self, "HORSE04", false )
    end

    if shield <= 0.1 then
        ObjectHideSubObjectPermanently( self, "SHIELD01", false )
    elseif shield <= 0.3 then
        ObjectHideSubObjectPermanently( self, "SHIELD02", false )
    elseif shield <= 0.4 then
        ObjectHideSubObjectPermanently( self, "SHIELD03", false )
    elseif shield <= 0.5 then
        ObjectHideSubObjectPermanently( self, "SHIELD04", false )
    elseif shield <= 0.7 then
        ObjectHideSubObjectPermanently( self, "SHIELD05", false )
    elseif shield <= 0.9 then
        ObjectHideSubObjectPermanently( self, "SHIELD06", false )
     else
        ObjectHideSubObjectPermanently( self, "SHIELD07", false )
    end

    if head <= 0.10 then
        ObjectHideSubObjectPermanently( self, "NOHELM01", false )
    elseif head <= 0.15 then
        ObjectHideSubObjectPermanently( self, "NOHELM02", false )
    elseif head <= 0.20 then
        ObjectHideSubObjectPermanently( self, "COIF", false )
    elseif head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "NEWHELM01", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.30 then
        ObjectHideSubObjectPermanently( self, "NEWHELM02", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.35 then
        ObjectHideSubObjectPermanently( self, "NEWHELM03", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.40 then
        ObjectHideSubObjectPermanently( self, "NEWHELM04", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.45 then
        ObjectHideSubObjectPermanently( self, "NEWHELM05", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "NEWHELM06", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.55 then
        ObjectHideSubObjectPermanently( self, "NEWHELM07", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.58 then
        ObjectHideSubObjectPermanently( self, "NEWHELM08", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.60 then
        ObjectHideSubObjectPermanently( self, "NEWHELM09", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.65 then
        ObjectHideSubObjectPermanently( self, "NEWHELM01", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
    elseif head <= 0.70 then
        ObjectHideSubObjectPermanently( self, "NEWHELM02", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
    elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "NEWHELM04", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
    elseif head <= 0.80 then
        ObjectHideSubObjectPermanently( self, "NEWHELM05", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
    elseif head <= 0.85 then
        ObjectHideSubObjectPermanently( self, "NEWHELM06", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
    elseif head <= 0.90 then
        ObjectHideSubObjectPermanently( self, "NEWHELM07", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
    elseif head <= 0.95 then
        ObjectHideSubObjectPermanently( self, "NEWHELM08", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
    elseif head <= 0.99 then
        ObjectHideSubObjectPermanently( self, "NEWHELM09", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
	else
        ObjectHideSubObjectPermanently( self, "NEWHELM03", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
    end
end

function OnNewRohirrimArcherCreated(self)
	ObjectHideSubObjectPermanently( self, "SHIELD01", true )
	ObjectHideSubObjectPermanently( self, "SHIELD02", true )
	ObjectHideSubObjectPermanently( self, "SHIELD03", true )
	ObjectHideSubObjectPermanently( self, "SHIELD04", true )
	ObjectHideSubObjectPermanently( self, "SHIELD05", true )
	ObjectHideSubObjectPermanently( self, "SHIELD06", true )
	ObjectHideSubObjectPermanently( self, "SHIELD07", true )
	ObjectHideSubObjectPermanently( self, "SHIELD09", true )
	ObjectHideSubObjectPermanently( self, "SHIELD10", true )
	ObjectHideSubObjectPermanently( self, "SHIELD11", true )
	ObjectHideSubObjectPermanently( self, "SHIELD12", true )
	ObjectHideSubObjectPermanently( self, "SHIELD13", true )
	ObjectHideSubObjectPermanently( self, "SHIELD14", true )
	ObjectHideSubObjectPermanently( self, "SHIELD15", true )
	ObjectHideSubObjectPermanently( self, "SHIELD16", true )
	ObjectHideSubObjectPermanently( self, "SHIELD17", true )
	ObjectHideSubObjectPermanently( self, "SHIELD18", true )
	ObjectHideSubObjectPermanently( self, "SHIELD19", true )
	ObjectHideSubObjectPermanently( self, "SHIELD20", true )
	ObjectHideSubObjectPermanently( self, "SHIELD21", true )
	ObjectHideSubObjectPermanently( self, "SHIELD22", true )
	ObjectHideSubObjectPermanently( self, "QUIVERA", true )
	ObjectHideSubObjectPermanently( self, "QUIVERB", true )
	ObjectHideSubObjectPermanently( self, "FireArowTip", true )
    ObjectHideSubObjectPermanently( self, "HORSE01", true )
    ObjectHideSubObjectPermanently( self, "HORSE02", true )
    ObjectHideSubObjectPermanently( self, "HORSE03", true )
    ObjectHideSubObjectPermanently( self, "HORSE04", true )
	ObjectHideSubObjectPermanently( self, "BODY01", true )
	ObjectHideSubObjectPermanently( self, "BODY02", true )
	ObjectHideSubObjectPermanently( self, "BODY03", true )
	ObjectHideSubObjectPermanently( self, "CLOAK01", true )
	ObjectHideSubObjectPermanently( self, "CLOAK02", true )
	ObjectHideSubObjectPermanently( self, "CLOAK03", true )
	ObjectHideSubObjectPermanently( self, "COIF", true )
	ObjectHideSubObjectPermanently( self, "HELM01", true )
	ObjectHideSubObjectPermanently( self, "HELM02", true )
	ObjectHideSubObjectPermanently( self, "HELM03", true )
	ObjectHideSubObjectPermanently( self, "NEWHELM01", true )
	ObjectHideSubObjectPermanently( self, "NEWHELM02", true )
	ObjectHideSubObjectPermanently( self, "NEWHELM03", true )
	ObjectHideSubObjectPermanently( self, "NEWHELM04", true )
	ObjectHideSubObjectPermanently( self, "NEWHELM05", true )
	ObjectHideSubObjectPermanently( self, "NEWHELM06", true )
	ObjectHideSubObjectPermanently( self, "NEWHELM07", true )
	ObjectHideSubObjectPermanently( self, "NEWHELM08", true )
	ObjectHideSubObjectPermanently( self, "NEWHELM09", true )
	ObjectHideSubObjectPermanently( self, "HELMHEAD01", true )
	ObjectHideSubObjectPermanently( self, "HELMHEAD02", true )
	ObjectHideSubObjectPermanently( self, "NOHELM01", true )
	ObjectHideSubObjectPermanently( self, "NOHELM02", true )
	ObjectHideSubObjectPermanently( self, "LEGS01", true )
	ObjectHideSubObjectPermanently( self, "LEGS02", true )
	ObjectHideSubObjectPermanently( self, "LEGS03", true )

    local horse         =    GetRandomNumber()
    local shield 		=   GetRandomNumber()
    local head 		=   GetRandomNumber()
    local bodies 		=   GetRandomNumber()
    local cloaks 		=   GetRandomNumber()
    local legs 		=   GetRandomNumber()

    if bodies <= 0.4 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif bodies <= 0.8 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
     else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
    end

    if cloaks <= 0.4 then
        ObjectHideSubObjectPermanently( self, "CLOAK01", false )
    elseif cloaks <= 0.8 then
        ObjectHideSubObjectPermanently( self, "CLOAK03", false )
     else
        ObjectHideSubObjectPermanently( self, "CLOAK02", false )
    end

    if legs <= 0.4 then
        ObjectHideSubObjectPermanently( self, "LEGS01", false )
	elseif legs <= 0.8 then
        ObjectHideSubObjectPermanently( self, "LEGS02", false )
     else
        ObjectHideSubObjectPermanently( self, "LEGS03", false )
    end

    if horse <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HORSE01", false )
    elseif horse <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HORSE02", false )
    elseif horse <= 0.8 then
        ObjectHideSubObjectPermanently( self, "HORSE03", false )
     else
        ObjectHideSubObjectPermanently( self, "HORSE04", false )
    end

    if shield <= 0.1 then
        ObjectHideSubObjectPermanently( self, "SHIELD01", false )
        ObjectHideSubObjectPermanently( self, "QUIVERB", false )
    elseif shield <= 0.12 then
        ObjectHideSubObjectPermanently( self, "SHIELD02", false )
        ObjectHideSubObjectPermanently( self, "QUIVERB", false )
    elseif shield <= 0.16 then
        ObjectHideSubObjectPermanently( self, "SHIELD03", false )
        ObjectHideSubObjectPermanently( self, "QUIVERB", false )
    elseif shield <= 0.20 then
        ObjectHideSubObjectPermanently( self, "SHIELD04", false )
        ObjectHideSubObjectPermanently( self, "QUIVERB", false )
    elseif shield <= 0.24 then
        ObjectHideSubObjectPermanently( self, "SHIELD05", false )
        ObjectHideSubObjectPermanently( self, "QUIVERB", false )
    elseif shield <= 0.32 then
        ObjectHideSubObjectPermanently( self, "SHIELD06", false )
        ObjectHideSubObjectPermanently( self, "QUIVERB", false )
    elseif shield <= 0.36 then
        ObjectHideSubObjectPermanently( self, "SHIELD07", false )
        ObjectHideSubObjectPermanently( self, "QUIVERB", false )
    elseif shield <= 0.42 then
        ObjectHideSubObjectPermanently( self, "SHIELD08", false )
        ObjectHideSubObjectPermanently( self, "QUIVERA", false )
    elseif shield <= 0.48 then
        ObjectHideSubObjectPermanently( self, "SHIELD09", false )
        ObjectHideSubObjectPermanently( self, "QUIVERA", false )
    elseif shield <= 0.52 then
        ObjectHideSubObjectPermanently( self, "SHIELD10", false )
        ObjectHideSubObjectPermanently( self, "QUIVERA", false )
    elseif shield <= 0.56 then
        ObjectHideSubObjectPermanently( self, "SHIELD11", false )
        ObjectHideSubObjectPermanently( self, "QUIVERA", false )
    elseif shield <= 0.62 then
        ObjectHideSubObjectPermanently( self, "SHIELD12", false )
        ObjectHideSubObjectPermanently( self, "QUIVERA", false )
    elseif shield <= 0.68 then
        ObjectHideSubObjectPermanently( self, "SHIELD13", false )
        ObjectHideSubObjectPermanently( self, "QUIVERA", false )
    elseif shield <= 0.72 then
        ObjectHideSubObjectPermanently( self, "SHIELD14", false )
        ObjectHideSubObjectPermanently( self, "QUIVERA", false )
    elseif shield <= 0.78 then
        ObjectHideSubObjectPermanently( self, "SHIELD15", false )
        ObjectHideSubObjectPermanently( self, "QUIVERA", false )
    elseif shield <= 0.84 then
        ObjectHideSubObjectPermanently( self, "SHIELD16", false )
        ObjectHideSubObjectPermanently( self, "QUIVERA", false )
    elseif shield <= 0.86 then
        ObjectHideSubObjectPermanently( self, "SHIELD17", false )
        ObjectHideSubObjectPermanently( self, "QUIVERA", false )
    elseif shield <= 0.88 then
        ObjectHideSubObjectPermanently( self, "SHIELD18", false )
        ObjectHideSubObjectPermanently( self, "QUIVERA", false )
    elseif shield <= 0.92 then
        ObjectHideSubObjectPermanently( self, "SHIELD19", false )
        ObjectHideSubObjectPermanently( self, "QUIVERA", false )
	elseif shield <= 0.96 then
        ObjectHideSubObjectPermanently( self, "SHIELD20", false )
        ObjectHideSubObjectPermanently( self, "QUIVERA", false )
    elseif shield <= 0.99 then
        ObjectHideSubObjectPermanently( self, "SHIELD21", false )
        ObjectHideSubObjectPermanently( self, "QUIVERA", false )
     else
        ObjectHideSubObjectPermanently( self, "SHIELD22", false )
        ObjectHideSubObjectPermanently( self, "QUIVERA", false )
    end

    if head <= 0.10 then
        ObjectHideSubObjectPermanently( self, "NOHELM01", false )
    elseif head <= 0.15 then
        ObjectHideSubObjectPermanently( self, "NOHELM02", false )
    elseif head <= 0.20 then
        ObjectHideSubObjectPermanently( self, "COIF", false )
    elseif head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "NEWHELM01", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.30 then
        ObjectHideSubObjectPermanently( self, "NEWHELM02", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.35 then
        ObjectHideSubObjectPermanently( self, "NEWHELM03", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.40 then
        ObjectHideSubObjectPermanently( self, "NEWHELM04", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.45 then
        ObjectHideSubObjectPermanently( self, "NEWHELM05", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "NEWHELM06", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.55 then
        ObjectHideSubObjectPermanently( self, "NEWHELM07", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.58 then
        ObjectHideSubObjectPermanently( self, "NEWHELM08", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.60 then
        ObjectHideSubObjectPermanently( self, "NEWHELM09", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.65 then
        ObjectHideSubObjectPermanently( self, "NEWHELM01", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
    elseif head <= 0.70 then
        ObjectHideSubObjectPermanently( self, "NEWHELM02", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
    elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "NEWHELM04", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
    elseif head <= 0.80 then
        ObjectHideSubObjectPermanently( self, "NEWHELM05", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
    elseif head <= 0.85 then
        ObjectHideSubObjectPermanently( self, "NEWHELM06", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
    elseif head <= 0.90 then
        ObjectHideSubObjectPermanently( self, "NEWHELM07", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
    elseif head <= 0.95 then
        ObjectHideSubObjectPermanently( self, "NEWHELM08", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
    elseif head <= 0.99 then
        ObjectHideSubObjectPermanently( self, "NEWHELM09", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
	else
        ObjectHideSubObjectPermanently( self, "NEWHELM03", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
    end
end

function OnRohirrimCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "SHIELD", true )
	ObjectHideSubObjectPermanently( self, "FireArowTip", true )
end

function OnHorsemenoftheMarkCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )

    ObjectHideSubObjectPermanently( self, "CLOAK01", true )
    ObjectHideSubObjectPermanently( self, "CLOAK02", true )
    ObjectHideSubObjectPermanently( self, "CLOAK03", true )

    ObjectHideSubObjectPermanently( self, "BODY01", true )
    ObjectHideSubObjectPermanently( self, "BODY02", true )
    ObjectHideSubObjectPermanently( self, "BODY03", true )

    ObjectHideSubObjectPermanently( self, "GUGEL01", true )
    ObjectHideSubObjectPermanently( self, "GUGEL02", true )
    ObjectHideSubObjectPermanently( self, "GUGEL03", true )

    ObjectHideSubObjectPermanently( self, "COIF01", true )
    ObjectHideSubObjectPermanently( self, "COIF02", true )
    ObjectHideSubObjectPermanently( self, "COIF03", true )

    ObjectHideSubObjectPermanently( self, "SHIELDA", true )
    ObjectHideSubObjectPermanently( self, "SHIELDB", true )

    ObjectHideSubObjectPermanently( self, "HORSE01", true )
    ObjectHideSubObjectPermanently( self, "HORSE02", true )
    ObjectHideSubObjectPermanently( self, "HORSE03", true )
    ObjectHideSubObjectPermanently( self, "HORSE04", true )

    local horse         =    GetRandomNumber()
    local shield         =    GetRandomNumber()
    local cloak         =    GetRandomNumber()
    local head 			=   GetRandomNumber()
    local body 			=   GetRandomNumber()

    if horse <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HORSE01", false )
    elseif horse <= 0.6 then
        ObjectHideSubObjectPermanently( self, "HORSE02", false )
    elseif horse <= 0.8 then
        ObjectHideSubObjectPermanently( self, "HORSE03", false )
     else
        ObjectHideSubObjectPermanently( self, "HORSE04", false )
    end

    if head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "GUGEL01", false )
        ObjectHideSubObjectPermanently( self, "COIF01", false )
    elseif head <= 0.6 then
        ObjectHideSubObjectPermanently( self, "GUGEL02", false )
        ObjectHideSubObjectPermanently( self, "COIF02", false )
     else
        ObjectHideSubObjectPermanently( self, "GUGEL03", false )
        ObjectHideSubObjectPermanently( self, "COIF03", false )
    end

    if cloak <= 0.3 then
        ObjectHideSubObjectPermanently( self, "CLOAK01", false )
    elseif cloak <= 0.6 then
        ObjectHideSubObjectPermanently( self, "CLOAK02", false )
     else
        ObjectHideSubObjectPermanently( self, "CLOAK03", false )
    end

    if shield <= 0.5 then
        ObjectHideSubObjectPermanently( self, "SHIELDA", false )
     else
        ObjectHideSubObjectPermanently( self, "SHIELDB", false )
    end

    if body <= 0.3 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif body <= 0.6 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
     else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
    end
end

function OnKingsguardCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FireArowTip", true )

    ObjectHideSubObjectPermanently( self, "HELMHEAD01", true )
    ObjectHideSubObjectPermanently( self, "HELMHEAD02", true )

    ObjectHideSubObjectPermanently( self, "QUIVERA", true )
    ObjectHideSubObjectPermanently( self, "QUIVERB", true )

    ObjectHideSubObjectPermanently( self, "HORSE01", true )
    ObjectHideSubObjectPermanently( self, "HORSE02", true )
    ObjectHideSubObjectPermanently( self, "HORSE03", true )
    ObjectHideSubObjectPermanently( self, "HORSE04", true )

    local horse         =    GetRandomNumber()
    local quiver         =    GetRandomNumber()
    local head 		=   GetRandomNumber()

    if horse <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HORSE01", false )
    elseif horse <= 0.6 then
        ObjectHideSubObjectPermanently( self, "HORSE02", false )
    elseif horse <= 0.8 then
        ObjectHideSubObjectPermanently( self, "HORSE03", false )
     else
        ObjectHideSubObjectPermanently( self, "HORSE04", false )
    end

    if head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
     else
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
    end

    if quiver <= 0.50 then
        ObjectHideSubObjectPermanently( self, "QUIVERA", false )
     else
        ObjectHideSubObjectPermanently( self, "QUIVERB", false )
    end
end

function OnSummonedRohirrimCreated(self)
	ObjectGrantUpgrade( self, "Upgrade_RohanHeavyArmorForRohirrim" ) -- ;,;
	ObjectGrantUpgrade( self, "Upgrade_RohanHorseShield" )
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FireArowTip", true ) -- ;,; Added in v5.1
end

function OnGondorCavalryCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "HIPS", true )
	ObjectHideSubObjectPermanently( self, "SHIELD", true )

    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "HORSE01", true )
    ObjectHideSubObjectPermanently( self, "HORSE02", true )
    ObjectHideSubObjectPermanently( self, "HORSE03", true )
    ObjectHideSubObjectPermanently( self, "HORSE04", true )

    local horse         =    GetRandomNumber()
    local head 		=   GetRandomNumber()

    if horse <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HORSE01", false )
    elseif horse <= 0.6 then
        ObjectHideSubObjectPermanently( self, "HORSE02", false )
    elseif horse <= 0.8 then
        ObjectHideSubObjectPermanently( self, "HORSE03", false )
     else
        ObjectHideSubObjectPermanently( self, "HORSE04", false )
    end

    if head <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end
end

function OnSnowbournCreated(self)
	ObjectHideSubObjectPermanently( self, "FB", true )
	ObjectHideSubObjectPermanently( self, "SHLD_01", true )
    ObjectHideSubObjectPermanently( self, "CLOAK01", true )
    ObjectHideSubObjectPermanently( self, "CLOAK02", true )
    ObjectHideSubObjectPermanently( self, "CLOAK03", true )
    ObjectHideSubObjectPermanently( self, "HORSE01", true )
    ObjectHideSubObjectPermanently( self, "HORSE02", true )
    ObjectHideSubObjectPermanently( self, "HORSE03", true )
    ObjectHideSubObjectPermanently( self, "FLAG01", true )
    ObjectHideSubObjectPermanently( self, "FLAG02", true )
    ObjectHideSubObjectPermanently( self, "FLAG03", true )

    local horse         =    GetRandomNumber()
    local body 		=   GetRandomNumber()
    local flag 		=   GetRandomNumber()

    if horse <= 0.4 then
        ObjectHideSubObjectPermanently( self, "HORSE01", false )
    elseif horse <= 0.8 then
        ObjectHideSubObjectPermanently( self, "HORSE02", false )
     else
        ObjectHideSubObjectPermanently( self, "HORSE03", false )
    end

    if body <= 0.3 then
        ObjectHideSubObjectPermanently( self, "CLOAK01", false )
    elseif body <= 0.7 then
        ObjectHideSubObjectPermanently( self, "CLOAK02", false )
     else
        ObjectHideSubObjectPermanently( self, "CLOAK03", false )
    end

    if flag <= 0.3 then
        ObjectHideSubObjectPermanently( self, "FLAG01", false )
    elseif flag <= 0.7 then
        ObjectHideSubObjectPermanently( self, "FLAG02", false )
     else
        ObjectHideSubObjectPermanently( self, "FLAG03", false )
    end
end

function OnRohanCatapultCreated(self)
	--ObjectHideSubObjectPermanently( self, "PROJECTILEROCK", true )
	--ObjectHideSubObjectPermanently( self, "HAY", true )
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "OBJECT02", true )

	ObjectHideSubObjectPermanently( self, "BODY01", true )
	ObjectHideSubObjectPermanently( self, "BODY02", true )
	ObjectHideSubObjectPermanently( self, "BODY02sleeve", true )
	ObjectHideSubObjectPermanently( self, "BODY03", true )
	ObjectHideSubObjectPermanently( self, "CLOAK01", true )
	ObjectHideSubObjectPermanently( self, "CLOAK02", true )
	ObjectHideSubObjectPermanently( self, "CLOAK03", true )
	ObjectHideSubObjectPermanently( self, "COIF", true )
	ObjectHideSubObjectPermanently( self, "HELM01", true )
	ObjectHideSubObjectPermanently( self, "HELM02", true )
	ObjectHideSubObjectPermanently( self, "HELM03", true )
	ObjectHideSubObjectPermanently( self, "HELMHEAD01", true )
	ObjectHideSubObjectPermanently( self, "HELMHEAD02", true )
	ObjectHideSubObjectPermanently( self, "NOHELM01", true )
	ObjectHideSubObjectPermanently( self, "NOHELM02", true )
	ObjectHideSubObjectPermanently( self, "LEGS01", true )
	ObjectHideSubObjectPermanently( self, "LEGS02", true )

	ObjectHideSubObjectPermanently( self, "BODY01B", true )
	ObjectHideSubObjectPermanently( self, "BODY02B", true )
	ObjectHideSubObjectPermanently( self, "BODY02sleeveB", true )
	ObjectHideSubObjectPermanently( self, "BODY03B", true )
	ObjectHideSubObjectPermanently( self, "CLOAK01B", true )
	ObjectHideSubObjectPermanently( self, "CLOAK02B", true )
	ObjectHideSubObjectPermanently( self, "CLOAK03B", true )
	ObjectHideSubObjectPermanently( self, "COIFB", true )
	ObjectHideSubObjectPermanently( self, "HELM01B", true )
	ObjectHideSubObjectPermanently( self, "HELM02B", true )
	ObjectHideSubObjectPermanently( self, "HELM03B", true )
	ObjectHideSubObjectPermanently( self, "HELMHEAD01B", true )
	ObjectHideSubObjectPermanently( self, "HELMHEAD02B", true )
	ObjectHideSubObjectPermanently( self, "NOHELM01B", true )
	ObjectHideSubObjectPermanently( self, "NOHELM02B", true )
	ObjectHideSubObjectPermanently( self, "LEGS01B", true )
	ObjectHideSubObjectPermanently( self, "LEGS02B", true )

    local head          =    GetRandomNumber()
    local legs          =    GetRandomNumber()
    local cloaks          =    GetRandomNumber()
    local bodies          =    GetRandomNumber()
    local headb          =    GetRandomNumber()
    local legsb          =    GetRandomNumber()
    local cloaksb          =    GetRandomNumber()
    local bodiesb          =    GetRandomNumber()

    if bodies <= 0.2 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif bodies <= 0.5 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
		elseif bodies <= 0.7 then
        ObjectHideSubObjectPermanently( self, "BODY02sleeve", false )
     else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
    end
    if cloaks <= 0.3 then
        ObjectHideSubObjectPermanently( self, "CLOAK01", false )
    elseif cloaks <= 0.6 then
        ObjectHideSubObjectPermanently( self, "CLOAK03", false )
     else
        ObjectHideSubObjectPermanently( self, "CLOAK02", false )
    end
    if legs <= 0.5 then
        ObjectHideSubObjectPermanently( self, "LEGS01", false )
     else
        ObjectHideSubObjectPermanently( self, "LEGS02", false )
    end
    if head <= 0.1 then
        ObjectHideSubObjectPermanently( self, "NOHELM01", false )
    elseif head <= 0.2 then
        ObjectHideSubObjectPermanently( self, "NOHELM02", false )
    elseif head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "COIF", false )
    elseif head <= 0.4 then
        ObjectHideSubObjectPermanently( self, "HELM01", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HELM02", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.65 then
        ObjectHideSubObjectPermanently( self, "HELM03", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HELM01", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
    elseif head <= 0.9 then
        ObjectHideSubObjectPermanently( self, "HELM02", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HELM03", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
    end
    if bodiesb <= 0.2 then
        ObjectHideSubObjectPermanently( self, "BODY01B", false )
    elseif bodiesb <= 0.5 then
        ObjectHideSubObjectPermanently( self, "BODY02B", false )
		elseif bodiesb <= 0.7 then
        ObjectHideSubObjectPermanently( self, "BODY02sleeveB", false )
     else
        ObjectHideSubObjectPermanently( self, "BODY03B", false )
    end
    if cloaksb <= 0.3 then
        ObjectHideSubObjectPermanently( self, "CLOAK01B", false )
    elseif cloaksb <= 0.6 then
        ObjectHideSubObjectPermanently( self, "CLOAK03B", false )
     else
        ObjectHideSubObjectPermanently( self, "CLOAK02B", false )
    end
    if legsb <= 0.5 then
        ObjectHideSubObjectPermanently( self, "LEGS01B", false )
     else
        ObjectHideSubObjectPermanently( self, "LEGS02B", false )
    end
    if headb <= 0.1 then
        ObjectHideSubObjectPermanently( self, "NOHELM01B", false )
    elseif headb <= 0.2 then
        ObjectHideSubObjectPermanently( self, "NOHELM02B", false )
    elseif headb <= 0.3 then
        ObjectHideSubObjectPermanently( self, "COIFB", false )
    elseif headb <= 0.4 then
        ObjectHideSubObjectPermanently( self, "HELM01B", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01B", false )
    elseif headb <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HELM02B", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01B", false )
    elseif headb <= 0.65 then
        ObjectHideSubObjectPermanently( self, "HELM03B", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01B", false )
    elseif headb <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HELM01B", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02B", false )
    elseif headb <= 0.9 then
        ObjectHideSubObjectPermanently( self, "HELM02B", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02B", false )
     else
        ObjectHideSubObjectPermanently( self, "HELM03B", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02B", false )
    end
end

function OnYeomenPeasantCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "OBJECT02", true )
	ObjectHideSubObjectPermanently( self, "BODY01", true )
	ObjectHideSubObjectPermanently( self, "BODY02", true )
	ObjectHideSubObjectPermanently( self, "BODY03", true )
	ObjectHideSubObjectPermanently( self, "CLOAK01", true )
	ObjectHideSubObjectPermanently( self, "CLOAK02", true )
	ObjectHideSubObjectPermanently( self, "CLOAK03", true )
	ObjectHideSubObjectPermanently( self, "COIF", true )
	ObjectHideSubObjectPermanently( self, "HELM01", true )
	ObjectHideSubObjectPermanently( self, "HELM02", true )
	ObjectHideSubObjectPermanently( self, "HELM03", true )
	ObjectHideSubObjectPermanently( self, "HELMHEAD01", true )
	ObjectHideSubObjectPermanently( self, "HELMHEAD02", true )
	ObjectHideSubObjectPermanently( self, "NOHELM01", true )
	ObjectHideSubObjectPermanently( self, "NOHELM02", true )
	ObjectHideSubObjectPermanently( self, "LEGS01", true )
	ObjectHideSubObjectPermanently( self, "LEGS02", true )
	ObjectHideSubObjectPermanently( self, "SHIELD01", true )
	ObjectHideSubObjectPermanently( self, "SHIELD02", true )
	ObjectHideSubObjectPermanently( self, "SHIELD03", true )
	ObjectHideSubObjectPermanently( self, "SHIELD04", true )
	ObjectHideSubObjectPermanently( self, "SHIELD05", true )
	ObjectHideSubObjectPermanently( self, "SHIELD06", true )
	ObjectHideSubObjectPermanently( self, "SHIELD07", true )
    local head          =    GetRandomNumber()
    local shield          =    GetRandomNumber()
    local legs          =    GetRandomNumber()
    local cloaks          =    GetRandomNumber()
    local bodies          =    GetRandomNumber()
    if bodies <= 0.3 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif bodies <= 0.6 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
     else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
    end
    if cloaks <= 0.3 then
        ObjectHideSubObjectPermanently( self, "CLOAK01", false )
    elseif cloaks <= 0.6 then
        ObjectHideSubObjectPermanently( self, "CLOAK03", false )
     else
        ObjectHideSubObjectPermanently( self, "CLOAK02", false )
    end
    if legs <= 0.5 then
        ObjectHideSubObjectPermanently( self, "LEGS01", false )
     else
        ObjectHideSubObjectPermanently( self, "LEGS02", false )
    end
    if shield <= 0.1 then
        ObjectHideSubObjectPermanently( self, "SHIELD01", false )
    elseif shield <= 0.3 then
        ObjectHideSubObjectPermanently( self, "SHIELD02", false )
    elseif shield <= 0.4 then
        ObjectHideSubObjectPermanently( self, "SHIELD03", false )
    elseif shield <= 0.5 then
        ObjectHideSubObjectPermanently( self, "SHIELD04", false )
    elseif shield <= 0.7 then
        ObjectHideSubObjectPermanently( self, "SHIELD05", false )
    elseif shield <= 0.9 then
        ObjectHideSubObjectPermanently( self, "SHIELD06", false )
     else
        ObjectHideSubObjectPermanently( self, "SHIELD07", false )
    end
    if head <= 0.1 then
        ObjectHideSubObjectPermanently( self, "NOHELM01", false )
    elseif head <= 0.2 then
        ObjectHideSubObjectPermanently( self, "NOHELM02", false )
    elseif head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "COIF", false )
    elseif head <= 0.4 then
        ObjectHideSubObjectPermanently( self, "HELM01", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HELM02", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.65 then
        ObjectHideSubObjectPermanently( self, "HELM03", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HELM01", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
    elseif head <= 0.9 then
        ObjectHideSubObjectPermanently( self, "HELM02", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HELM03", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
    end
end

function OnYeomenArcherRangeCreated(self)
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
end

function OnYeomenPeasantArcherCreated(self)
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
	ObjectHideSubObjectPermanently( self, "BODY01", true )
	ObjectHideSubObjectPermanently( self, "BODY02", true )
	ObjectHideSubObjectPermanently( self, "BODY03", true )
	ObjectHideSubObjectPermanently( self, "BODY01SLEEVE", true )
	ObjectHideSubObjectPermanently( self, "BODY02SLEEVE", true )
	ObjectHideSubObjectPermanently( self, "BODY03SLEEVE", true )
	ObjectHideSubObjectPermanently( self, "CLOAK01", true )
	ObjectHideSubObjectPermanently( self, "CLOAK02", true )
	ObjectHideSubObjectPermanently( self, "CLOAK03", true )
	ObjectHideSubObjectPermanently( self, "COIF", true )
	ObjectHideSubObjectPermanently( self, "HELM01", true )
	ObjectHideSubObjectPermanently( self, "HELM02", true )
	ObjectHideSubObjectPermanently( self, "HELM03", true )
	ObjectHideSubObjectPermanently( self, "HELMHEAD01", true )
	ObjectHideSubObjectPermanently( self, "HELMHEAD02", true )
	ObjectHideSubObjectPermanently( self, "NOHELM01", true )
	ObjectHideSubObjectPermanently( self, "NOHELM02", true )
	ObjectHideSubObjectPermanently( self, "LEGS01", true )
	ObjectHideSubObjectPermanently( self, "LEGS02", true )
    local head          =    GetRandomNumber()
    local shield          =    GetRandomNumber()
    local legs          =    GetRandomNumber()
    local cloaks          =    GetRandomNumber()
    local bodies          =    GetRandomNumber()
    if bodies <= 0.2 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif bodies <= 0.3 then
        ObjectHideSubObjectPermanently( self, "BODY01SLEEVE", false )
	elseif bodies <= 0.5 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
	elseif bodies <= 0.7 then
        ObjectHideSubObjectPermanently( self, "BODY02SLEEVE", false )
	elseif bodies <= 0.9 then
        ObjectHideSubObjectPermanently( self, "BODY03", false )
     else
        ObjectHideSubObjectPermanently( self, "BODY03SLEEVE", false )
    end
    if cloaks <= 0.3 then
        ObjectHideSubObjectPermanently( self, "CLOAK01", false )
    elseif cloaks <= 0.6 then
        ObjectHideSubObjectPermanently( self, "CLOAK03", false )
     else
        ObjectHideSubObjectPermanently( self, "CLOAK02", false )
    end
    if legs <= 0.5 then
        ObjectHideSubObjectPermanently( self, "LEGS01", false )
     else
        ObjectHideSubObjectPermanently( self, "LEGS02", false )
    end
    if head <= 0.1 then
        ObjectHideSubObjectPermanently( self, "NOHELM01", false )
    elseif head <= 0.2 then
        ObjectHideSubObjectPermanently( self, "NOHELM02", false )
    elseif head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "COIF", false )
    elseif head <= 0.4 then
        ObjectHideSubObjectPermanently( self, "HELM01", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HELM02", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.65 then
        ObjectHideSubObjectPermanently( self, "HELM03", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HELM01", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
    elseif head <= 0.9 then
        ObjectHideSubObjectPermanently( self, "HELM02", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HELM03", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
    end
end

function OnDwarvenBattleWagonCreated(self)
	ObjectHideSubObjectPermanently( self, "dwarfHearth", true )
	ObjectHideSubObjectPermanently( self, "dwarfHearthFire", true )
	ObjectHideSubObjectPermanently( self, "Banner_L", true )
	ObjectHideSubObjectPermanently( self, "Glow", true )
	ObjectHideSubObjectPermanently( self, "BLADES_L", true )
	ObjectHideSubObjectPermanently( self, "BLADES_R", true )
	ObjectHideSubObjectPermanently( self, "FLAGS", true )
    ObjectHideSubObjectPermanently( self, "A_RAMHORN1", true )
    ObjectHideSubObjectPermanently( self, "A_RAMHORN2", true )
    ObjectHideSubObjectPermanently( self, "A_RAM", true )
    ObjectHideSubObjectPermanently( self, "A_RAM2", true )
    ObjectHideSubObjectPermanently( self, "A_RAM3", true )
    ObjectHideSubObjectPermanently( self, "A_A_RAMHORN1", true )
    ObjectHideSubObjectPermanently( self, "A_A_RAMHORN2", true )
    ObjectHideSubObjectPermanently( self, "A_A_RAM", true )
    ObjectHideSubObjectPermanently( self, "A_A_RAM2", true )
    ObjectHideSubObjectPermanently( self, "A_A_RAM3", true )
    ObjectHideSubObjectPermanently( self, "F_A_RAMHORN1", true )
    ObjectHideSubObjectPermanently( self, "F_A_RAMHORN2", true )
    ObjectHideSubObjectPermanently( self, "F_A_RAM", true )
    ObjectHideSubObjectPermanently( self, "F_A_RAM2", true )
    ObjectHideSubObjectPermanently( self, "F_A_RAM3", true )
    ObjectHideSubObjectPermanently( self, "C_A_RAMHORN1", true )
    ObjectHideSubObjectPermanently( self, "C_A_RAMHORN2", true )
    ObjectHideSubObjectPermanently( self, "C_A_RAM", true )
    ObjectHideSubObjectPermanently( self, "C_A_RAM2", true )
    ObjectHideSubObjectPermanently( self, "C_A_RAM3", true )
    local helmet         =    GetRandomNumber()
    local armor          =    GetRandomNumber()
    local helmet1         =    GetRandomNumber()
    local armor1          =    GetRandomNumber()
    local helmet2        =    GetRandomNumber()
    local armor2          =    GetRandomNumber()
    local helmet3         =    GetRandomNumber()
    local armor3          =    GetRandomNumber()
    if helmet <= 0.3 then
        ObjectHideSubObjectPermanently( self, "A_RAM", false )
    elseif helmet <= 0.6 then
        ObjectHideSubObjectPermanently( self, "A_RAM2", false )
     else
        ObjectHideSubObjectPermanently( self, "A_RAM3", false )
    end
    if armor <= 0.5 then
        ObjectHideSubObjectPermanently( self, "A_RAMHORN1", false )
     else
        ObjectHideSubObjectPermanently( self, "A_RAMHORN2", false )
    end
    if helmet1 <= 0.3 then
        ObjectHideSubObjectPermanently( self, "A_A_RAM", false )
    elseif helmet1 <= 0.6 then
        ObjectHideSubObjectPermanently( self, "A_A_RAM2", false )
     else
        ObjectHideSubObjectPermanently( self, "A_A_RAM3", false )
    end
    if armor1 <= 0.5 then
        ObjectHideSubObjectPermanently( self, "A_A_RAMHORN1", false )
     else
        ObjectHideSubObjectPermanently( self, "A_A_RAMHORN2", false )
    end
    if helmet2 <= 0.3 then
        ObjectHideSubObjectPermanently( self, "C_A_RAM", false )
    elseif helmet2 <= 0.6 then
        ObjectHideSubObjectPermanently( self, "C_A_RAM2", false )
     else
        ObjectHideSubObjectPermanently( self, "C_A_RAM3", false )
    end
    if armor2 <= 0.5 then
        ObjectHideSubObjectPermanently( self, "C_A_RAMHORN1", false )
     else
        ObjectHideSubObjectPermanently( self, "C_A_RAMHORN2", false )
    end
    if helmet3 <= 0.3 then
        ObjectHideSubObjectPermanently( self, "F_A_RAM", false )
    elseif helmet3 <= 0.6 then
        ObjectHideSubObjectPermanently( self, "F_A_RAM2", false )
     else
        ObjectHideSubObjectPermanently( self, "F_A_RAM3", false )
    end
    if armor3 <= 0.5 then
        ObjectHideSubObjectPermanently( self, "F_A_RAMHORN1", false )
     else
        ObjectHideSubObjectPermanently( self, "F_A_RAMHORN2", false )
    end
end

function OnEvilMenBlackRiderCreated(self)
	-- @todo place appropriate functionality here
end

function OnBallistaFortCreated(self)
	ObjectHideSubObjectPermanently( self, "MinedArrow", true )
    ObjectHideSubObjectPermanently( self, "HELMET01", true )
    ObjectHideSubObjectPermanently( self, "HELMET02", true )
end

function OnBallistaCreated(self)
	ObjectHideSubObjectPermanently( self, "MinedArrow", true )
    ObjectHideSubObjectPermanently( self, "O1_HELMET01", true )
    ObjectHideSubObjectPermanently( self, "O2_HELMET01", true )
    ObjectHideSubObjectPermanently( self, "O1_HELMET02", true )
    ObjectHideSubObjectPermanently( self, "O2_HELMET02", true )
end

function OnCatapultCreated(self)
	ObjectHideSubObjectPermanently( self, "PROJECTILEROCK", true )
	ObjectHideSubObjectPermanently( self, "FIREPLANE", true )
end

function OnMordorFortressCatapultCreated(self)
	ObjectHideSubObjectPermanently( self, "PROJECTILE", true )
	ObjectHideSubObjectPermanently( self, "PROJECTILEFX", true )
end

function OnTrebuchetCreated(self)
	ObjectHideSubObjectPermanently( self, "FIREPLANE", true )
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
	local head          =    GetRandomNumber()
    if head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
	else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end
end

function OnArnorTrebuchetCreated(self)
	ObjectHideSubObjectPermanently( self, "FIREPLANE", true )
	ObjectHideSubObjectPermanently( self, "WINGS", true )
	ObjectHideSubObjectPermanently( self, "WINGS01", true )
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
	local head          =    GetRandomNumber()
    if head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
	else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end
end

function OnRevelerCreated(self)
	ObjectHideSubObjectPermanently( self, "FIREPLANE", true )
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "BODY01", true )
    ObjectHideSubObjectPermanently( self, "BODY02", true )
    ObjectHideSubObjectPermanently( self, "BODY03", true )
	local head          =    GetRandomNumber()
	local body          =    GetRandomNumber()
    if head <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
	else
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    end

    if body <= 0.3 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif body <= 0.7 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
	else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
    end
end

function OnTrebuchetFortCreated(self)
	ObjectHideSubObjectPermanently( self, "FIREPLANE", true )
	ObjectHideSubObjectPermanently( self, "MANATARMSA", true )
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
	local head          =    GetRandomNumber()
    if head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
	else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end
end


function OnTrollSlingCreated(self)
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
end

function OnPorterCreated(self)
	ObjectHideSubObjectPermanently( self, "ARROWS", true )
	ObjectHideSubObjectPermanently( self, "BRAZIER", true )
	ObjectHideSubObjectPermanently( self, "BOWS", true )
	ObjectHideSubObjectPermanently( self, "TREBUCHET_FIRE", true )
	ObjectHideSubObjectPermanently( self, "SWORDS", true )
	ObjectHideSubObjectPermanently( self, "SHIELDS", true )
	ObjectHideSubObjectPermanently( self, "ARMOR", true )
	ObjectHideSubObjectPermanently( self, "BANNERS", true )
end

function OnEvilPorterCreated(self)
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
	ObjectHideSubObjectPermanently( self, "ARROW_UPGRADE", true )
	ObjectHideSubObjectPermanently( self, "ARMOR_UPGRADE", true )
	ObjectHideSubObjectPermanently( self, "GOLD", true )
	ObjectHideSubObjectPermanently( self, "SWORD_UPGRADES", true )
end

function OnPeasantCreated(self)
	ObjectHideSubObjectPermanently( self, "BODY01", true )
	ObjectHideSubObjectPermanently( self, "BODY02", true )
	ObjectHideSubObjectPermanently( self, "BODY03", true )
	ObjectHideSubObjectPermanently( self, "BODY04", true )
	ObjectHideSubObjectPermanently( self, "BODY05", true )
	ObjectHideSubObjectPermanently( self, "BODY06", true )
	ObjectHideSubObjectPermanently( self, "CLOAK01", true )
	ObjectHideSubObjectPermanently( self, "CLOAK02", true )
	ObjectHideSubObjectPermanently( self, "CLOAK03", true )
	ObjectHideSubObjectPermanently( self, "HELM01", true )
	ObjectHideSubObjectPermanently( self, "HELM02", true )
	ObjectHideSubObjectPermanently( self, "HELM03", true )
	ObjectHideSubObjectPermanently( self, "HELM04", true )
	ObjectHideSubObjectPermanently( self, "HELM05", true )
	ObjectHideSubObjectPermanently( self, "HELM06", true )
	ObjectHideSubObjectPermanently( self, "HELM07", true )
	ObjectHideSubObjectPermanently( self, "HELM08", true )
	ObjectHideSubObjectPermanently( self, "HELM09", true )
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HEAD04", true )
	ObjectHideSubObjectPermanently( self, "HEAD05", true )
	ObjectHideSubObjectPermanently( self, "HEAD06", true )
	ObjectHideSubObjectPermanently( self, "CAP01", true )
	ObjectHideSubObjectPermanently( self, "CAP02", true )
	ObjectHideSubObjectPermanently( self, "CAP03", true )
	ObjectHideSubObjectPermanently( self, "GUGEL01", true )
	ObjectHideSubObjectPermanently( self, "GUGEL02", true )
	ObjectHideSubObjectPermanently( self, "DRAFTSWORD", true )
	ObjectHideSubObjectPermanently( self, "SHEATH", true )
	ObjectHideSubObjectPermanently( self, "WEAP01", true )
	ObjectHideSubObjectPermanently( self, "WEAP02", true )
	ObjectHideSubObjectPermanently( self, "WEAP03", true )
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
	ObjectHideSubObjectPermanently( self, "SHIELDA", true )
	ObjectHideSubObjectPermanently( self, "SHIELDB", true )
	ObjectHideSubObjectPermanently( self, "Broom", true )

    local body    =    GetRandomNumber()

    if body <= 0.2 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif body <= 0.3 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
    elseif body <= 0.5 then
        ObjectHideSubObjectPermanently( self, "BODY03", false )
    elseif body <= 0.7 then
        ObjectHideSubObjectPermanently( self, "BODY04", false )
    elseif body <= 0.8 then
        ObjectHideSubObjectPermanently( self, "BODY05", false )
	else
        ObjectHideSubObjectPermanently( self, "BODY06", false )
    end

    local cloak    =    GetRandomNumber()

    if cloak <= 0.3 then
        ObjectHideSubObjectPermanently( self, "CLOAK01", false )
    elseif cloak <= 0.6	then
        ObjectHideSubObjectPermanently( self, "CLOAK02", false )
    elseif cloak <= 0.8 then
        ObjectHideSubObjectPermanently( self, "CLOAK03", false )
	else
        -- no cloak
    end

    local head    =    GetRandomNumber()

    if head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
        ObjectHideSubObjectPermanently( self, "HEAD04", false )		--drafted model
    elseif head <= 0.6	then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
        ObjectHideSubObjectPermanently( self, "HEAD05", false )		--drafted model
    else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
        ObjectHideSubObjectPermanently( self, "HEAD06", false )		--drafted model
    end

    local hat    =    GetRandomNumber()

    if hat <= 0.2 then
        ObjectHideSubObjectPermanently( self, "CAP01", false )
    elseif hat <= 0.3 then
        ObjectHideSubObjectPermanently( self, "CAP02", false )
    elseif hat <= 0.5 then
        ObjectHideSubObjectPermanently( self, "CAP03", false )
    elseif hat <= 0.7 then
        ObjectHideSubObjectPermanently( self, "GUGEL01", false )
		ObjectHideSubObjectPermanently( self, "HEAD01", true )
		ObjectHideSubObjectPermanently( self, "HEAD02", true )
		ObjectHideSubObjectPermanently( self, "HEAD03", true )
    elseif hat <= 0.8 then
        ObjectHideSubObjectPermanently( self, "GUGEL02", false )
		ObjectHideSubObjectPermanently( self, "HEAD01", true )
		ObjectHideSubObjectPermanently( self, "HEAD02", true )
		ObjectHideSubObjectPermanently( self, "HEAD03", true )
	else
		-- no hat
    end

    local weapon    =    GetRandomNumber()

    if weapon <= 0.3 then
        ObjectHideSubObjectPermanently( self, "WEAP01", false )
    elseif weapon <= 0.6	then
        ObjectHideSubObjectPermanently( self, "WEAP02", false )
    else
        ObjectHideSubObjectPermanently( self, "WEAP03", false )
    end

    local shield    =    GetRandomNumber()

    if shield <= 0.5 then
        ObjectHideSubObjectPermanently( self, "SHIELDA", false )
    else
        ObjectHideSubObjectPermanently( self, "SHIELDB", false )
    end

    local helmet    =    GetRandomNumber()

    if helmet <= 0.2 then
        ObjectHideSubObjectPermanently( self, "HELM01", false )
    elseif helmet <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HELM02", false )
    elseif helmet <= 0.4 then
        ObjectHideSubObjectPermanently( self, "HELM03", false )
    elseif helmet <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HELM04", false )
    elseif helmet <= 0.6 then
        ObjectHideSubObjectPermanently( self, "HELM05", false )
    elseif helmet <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HELM06", false )
    elseif helmet <= 0.8 then
        ObjectHideSubObjectPermanently( self, "HELM07", false )
    elseif helmet <= 0.9 then
        ObjectHideSubObjectPermanently( self, "HELM08", false )
	else
        ObjectHideSubObjectPermanently( self, "HELM09", false )
    end

end

function OnDraftedPeasantCreated(self)
	ObjectGrantUpgrade( self, "Upgrade_Drafted" )
	ObjectHideSubObjectPermanently( self, "BODY01", true )
	ObjectHideSubObjectPermanently( self, "BODY02", true )
	ObjectHideSubObjectPermanently( self, "BODY03", true )
	ObjectHideSubObjectPermanently( self, "BODY04", true )
	ObjectHideSubObjectPermanently( self, "BODY05", true )
	ObjectHideSubObjectPermanently( self, "BODY06", true )
	ObjectHideSubObjectPermanently( self, "CLOAK01", true )
	ObjectHideSubObjectPermanently( self, "CLOAK02", true )
	ObjectHideSubObjectPermanently( self, "CLOAK03", true )
	ObjectHideSubObjectPermanently( self, "HELM01", true )
	ObjectHideSubObjectPermanently( self, "HELM02", true )
	ObjectHideSubObjectPermanently( self, "HELM03", true )
	ObjectHideSubObjectPermanently( self, "HELM04", true )
	ObjectHideSubObjectPermanently( self, "HELM05", true )
	ObjectHideSubObjectPermanently( self, "HELM06", true )
	ObjectHideSubObjectPermanently( self, "HELM07", true )
	ObjectHideSubObjectPermanently( self, "HELM08", true )
	ObjectHideSubObjectPermanently( self, "HELM09", true )
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "CAP01", true )
	ObjectHideSubObjectPermanently( self, "CAP02", true )
	ObjectHideSubObjectPermanently( self, "CAP03", true )
	ObjectHideSubObjectPermanently( self, "GUGEL01", true )
	ObjectHideSubObjectPermanently( self, "GUGEL02", true )
	--ObjectHideSubObjectPermanently( self, "DRAFTSWORD", true )
	--ObjectHideSubObjectPermanently( self, "SHEATH", true )
	ObjectHideSubObjectPermanently( self, "WEAP01", true )
	ObjectHideSubObjectPermanently( self, "WEAP02", true )
	ObjectHideSubObjectPermanently( self, "WEAP03", true )
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
	ObjectHideSubObjectPermanently( self, "SHIELDA", true )
	ObjectHideSubObjectPermanently( self, "SHIELDB", true )
	ObjectHideSubObjectPermanently( self, "Broom", true )

    local body    =    GetRandomNumber()

    if body <= 0.2 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif body <= 0.3 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
    elseif body <= 0.5 then
        ObjectHideSubObjectPermanently( self, "BODY03", false )
    elseif body <= 0.7 then
        ObjectHideSubObjectPermanently( self, "BODY04", false )
    elseif body <= 0.8 then
        ObjectHideSubObjectPermanently( self, "BODY05", false )
	else
        ObjectHideSubObjectPermanently( self, "BODY06", false )
    end

    local cloak    =    GetRandomNumber()

    if cloak <= 0.3 then
        ObjectHideSubObjectPermanently( self, "CLOAK01", false )
    elseif cloak <= 0.6	then
        ObjectHideSubObjectPermanently( self, "CLOAK02", false )
    elseif cloak <= 0.8 then
        ObjectHideSubObjectPermanently( self, "CLOAK03", false )
	else
        -- no cloak
    end

    local head    =    GetRandomNumber()

    if head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    elseif head <= 0.6	then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
        ObjectHideSubObjectPermanently( self, "HEAD05", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
        ObjectHideSubObjectPermanently( self, "HEAD06", false )
    end

    local shield    =    GetRandomNumber()

    if shield <= 0.3 then
        ObjectHideSubObjectPermanently( self, "SHIELDA", false )
    else
        ObjectHideSubObjectPermanently( self, "SHIELDB", false )
    end

    local helmet    =    GetRandomNumber()

    if helmet <= 0.2 then
        ObjectHideSubObjectPermanently( self, "HELM01", false )
    elseif helmet <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HELM02", false )
    elseif helmet <= 0.4 then
        ObjectHideSubObjectPermanently( self, "HELM03", false )
    elseif helmet <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HELM04", false )
    elseif helmet <= 0.6 then
        ObjectHideSubObjectPermanently( self, "HELM05", false )
    elseif helmet <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HELM06", false )
    elseif helmet <= 0.8 then
        ObjectHideSubObjectPermanently( self, "HELM07", false )
    elseif helmet <= 0.9 then
        ObjectHideSubObjectPermanently( self, "HELM08", false )
	else
        ObjectHideSubObjectPermanently( self, "HELM09", false )
    end

end

function OnDraftTowerPeasantCreated(self)
	ObjectHideSubObjectPermanently( self, "BODY01", true )
	ObjectHideSubObjectPermanently( self, "BODY02", true )
	ObjectHideSubObjectPermanently( self, "BODY03", true )
	ObjectHideSubObjectPermanently( self, "BODY04", true )
	ObjectHideSubObjectPermanently( self, "BODY05", true )
	ObjectHideSubObjectPermanently( self, "BODY06", true )
	ObjectHideSubObjectPermanently( self, "CLOAK01", true )
	ObjectHideSubObjectPermanently( self, "CLOAK02", true )
	ObjectHideSubObjectPermanently( self, "CLOAK03", true )
	ObjectHideSubObjectPermanently( self, "HELM01", true )
	ObjectHideSubObjectPermanently( self, "HELM02", true )
	ObjectHideSubObjectPermanently( self, "HELM03", true )
	ObjectHideSubObjectPermanently( self, "HELM04", true )
	ObjectHideSubObjectPermanently( self, "HELM05", true )
	ObjectHideSubObjectPermanently( self, "HELM06", true )
	ObjectHideSubObjectPermanently( self, "HELM07", true )
	ObjectHideSubObjectPermanently( self, "HELM08", true )
	ObjectHideSubObjectPermanently( self, "HELM09", true )
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "CAP01", true )
	ObjectHideSubObjectPermanently( self, "CAP02", true )
	ObjectHideSubObjectPermanently( self, "CAP03", true )
	ObjectHideSubObjectPermanently( self, "GUGEL01", true )
	ObjectHideSubObjectPermanently( self, "GUGEL02", true )
	ObjectHideSubObjectPermanently( self, "DRAFTSWORD", true )
	ObjectHideSubObjectPermanently( self, "SHEATH", true )
	ObjectHideSubObjectPermanently( self, "WEAP01", true )
	ObjectHideSubObjectPermanently( self, "WEAP02", true )
	ObjectHideSubObjectPermanently( self, "WEAP03", true )
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
	ObjectHideSubObjectPermanently( self, "SHIELDA", true )
	ObjectHideSubObjectPermanently( self, "SHIELDB", true )
	ObjectHideSubObjectPermanently( self, "Broom", true )

    local body    =    GetRandomNumber()

    if body <= 0.2 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif body <= 0.3 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
    elseif body <= 0.5 then
        ObjectHideSubObjectPermanently( self, "BODY03", false )
    elseif body <= 0.7 then
        ObjectHideSubObjectPermanently( self, "BODY04", false )
    elseif body <= 0.8 then
        ObjectHideSubObjectPermanently( self, "BODY05", false )
	else
        ObjectHideSubObjectPermanently( self, "BODY06", false )
    end

    local cloak    =    GetRandomNumber()

    if cloak <= 0.3 then
        ObjectHideSubObjectPermanently( self, "CLOAK01", false )
    elseif cloak <= 0.6	then
        ObjectHideSubObjectPermanently( self, "CLOAK02", false )
    elseif cloak <= 0.8 then
        ObjectHideSubObjectPermanently( self, "CLOAK03", false )
	else
        -- no cloak
    end

    local head    =    GetRandomNumber()

    if head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.6	then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

    local weapon    =    GetRandomNumber()

    if weapon <= 0.3 then
        ObjectHideSubObjectPermanently( self, "WEAP01", false )
    elseif weapon <= 0.6	then
        ObjectHideSubObjectPermanently( self, "WEAP02", false )
    else
        ObjectHideSubObjectPermanently( self, "WEAP03", false )
    end

    local helmet    =    GetRandomNumber()

    if helmet <= 0.2 then
        ObjectHideSubObjectPermanently( self, "HELM01", false )
    elseif helmet <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HELM02", false )
    elseif helmet <= 0.4 then
        ObjectHideSubObjectPermanently( self, "HELM03", false )
    elseif helmet <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HELM04", false )
    elseif helmet <= 0.6 then
        ObjectHideSubObjectPermanently( self, "HELM05", false )
    elseif helmet <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HELM06", false )
    elseif helmet <= 0.8 then
        ObjectHideSubObjectPermanently( self, "HELM07", false )
    elseif helmet <= 0.9 then
        ObjectHideSubObjectPermanently( self, "HELM08", false )
	else
        ObjectHideSubObjectPermanently( self, "HELM09", false )
    end

end

function OnMordorSauronCreated(self)
	ObjectHideSubObjectPermanently( self, "SHARD01", true )
	ObjectHideSubObjectPermanently( self, "SHARD02", true )
	ObjectHideSubObjectPermanently( self, "SHARD03", true )
	ObjectHideSubObjectPermanently( self, "SHARD04", true )
	ObjectHideSubObjectPermanently( self, "SHARD05", true )
	ObjectHideSubObjectPermanently( self, "SHARD06", true )
	ObjectHideSubObjectPermanently( self, "SHARD07", true )
	ObjectHideSubObjectPermanently( self, "SHARD08", true )
	ObjectHideSubObjectPermanently( self, "SHARD09", true )
	ObjectHideSubObjectPermanently( self, "SHARD10", true )
	ObjectHideSubObjectPermanently( self, "SHARD11", true )
	ObjectHideSubObjectPermanently( self, "SHARD12", true )
	ObjectHideSubObjectPermanently( self, "SHARD13", true )
	ObjectHideSubObjectPermanently( self, "SHARD14", true )
	ObjectHideSubObjectPermanently( self, "SHARD15", true )
	ObjectHideSubObjectPermanently( self, "SHARD16", true )
	ObjectHideSubObjectPermanently( self, "SHARD17", true )
	ObjectHideSubObjectPermanently( self, "SHARD18", true )
	ObjectHideSubObjectPermanently( self, "SHARD19", true )
	ObjectHideSubObjectPermanently( self, "SHARD20", true )
	ObjectDoSpecialPower( self, "SpecialAbilitySauronDarkness" ) -- ;,;
end

function OnWhiteWinterCreated(self)
	ObjectDoSpecialPower( self, "SpellBookWhiteWinterFX" ) -- ;,;
end

function OnFreezingRainCreated(self)
	ObjectDoSpecialPower( self, "SpellBookRainFX" ) -- ;,;
end

function OnUnrelentingSunCreated(self)
	ObjectDoSpecialPower( self, "SpellBookUnrelentingSun" ) -- ;,;
end

function OnWisdomOfTheEldarCreated(self)
	ObjectDoSpecialPower( self, "ElrondRingOfAir" ) -- ;,;
end

function OnManifestTerrorActivated(self)
    ObjectDoSpecialPower( self, "SpecialAbilityRazariManifestedTerrorTotem" ) -- ;,;
    ObjectGrantUpgrade( self, "Upgrade_CanTaunt" )
end

function OnNoldorExilesCreated(self)
	ObjectHideSubObject( self, "ARROW", true )
	ObjectHideSubObject( self, "ARROWNOCKUP", true )
	ObjectHideSubObject( self, "QUIVERUP", true )
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )

	ObjectHideSubObjectPermanently( self, "BODY1", true )
	ObjectHideSubObjectPermanently( self, "BODY2", true )
	ObjectHideSubObjectPermanently( self, "BODY3", true )

	ObjectHideSubObjectPermanently( self, "HEAD1", true )
	ObjectHideSubObjectPermanently( self, "HEAD2", true )
	ObjectHideSubObjectPermanently( self, "HEAD3", true )

	ObjectHideSubObjectPermanently( self, "SASH1", true )
	ObjectHideSubObjectPermanently( self, "SASH2", true )
	ObjectHideSubObjectPermanently( self, "SASH3", true )


    local head         =    GetRandomNumber()
	local body         =    GetRandomNumber()

	if body <= 0.333 then
        ObjectHideSubObjectPermanently( self, "BODY1", false )
		ObjectHideSubObjectPermanently( self, "SASH1", false )
    elseif body <= 0.666 then
        ObjectHideSubObjectPermanently( self, "BODY2", false )
		ObjectHideSubObjectPermanently( self, "SASH2", false )
     else
        ObjectHideSubObjectPermanently( self, "BODY3", false )
		ObjectHideSubObjectPermanently( self, "SASH3", false )
    end

	if head <= 0.333 then
        ObjectHideSubObjectPermanently( self, "HEAD1", false )
    elseif head <= 0.666 then
        ObjectHideSubObjectPermanently( self, "HEAD2", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD3", false )
    end

end

function OnVineyardCreated(self)

	ObjectHideSubObjectPermanently( self, "BODY", true )
	ObjectHideSubObjectPermanently( self, "BODY_A", true )
	ObjectHideSubObjectPermanently( self, "BODYF", true )
	ObjectHideSubObjectPermanently( self, "BODYF_A", true )

	ObjectHideSubObjectPermanently( self, "HEAD", true )
	ObjectHideSubObjectPermanently( self, "HEAD_A", true )
	ObjectHideSubObjectPermanently( self, "HEADF", true )
	ObjectHideSubObjectPermanently( self, "HEADF_A", true )



    local bodya         =    GetRandomNumber()
	local body         =    GetRandomNumber()

    if body <= 0.50 then
		ObjectHideSubObjectPermanently( self, "HEAD", false )
		ObjectHideSubObjectPermanently( self, "BODY", false )
    else
		ObjectHideSubObjectPermanently( self, "HEADF", false )
		ObjectHideSubObjectPermanently( self, "BODYF", false )
    end

    if bodya <= 0.50 then
		ObjectHideSubObjectPermanently( self, "HEAD_A", false )
		ObjectHideSubObjectPermanently( self, "BODY_A", false )
    else
		ObjectHideSubObjectPermanently( self, "HEADF_A", false )
		ObjectHideSubObjectPermanently( self, "BODY_A", false )
    end

end

function OnGreyCompanyCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FireArowTip", true )



	ObjectHideSubObjectPermanently( self, "HEADHELM01", true )
	ObjectHideSubObjectPermanently( self, "HEADHELM02", true )
	ObjectHideSubObjectPermanently( self, "HEADHELM03", true )
	ObjectHideSubObjectPermanently( self, "HEADHELM04", true )

	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HEAD04", true )

	ObjectHideSubObjectPermanently( self, "BODYJERKIN", true )
	ObjectHideSubObjectPermanently( self, "BODYDUSTER", true )

	ObjectHideSubObjectPermanently( self, "HOODHELM", true )
	ObjectHideSubObjectPermanently( self, "HOOD", true )

	ObjectHideSubObjectPermanently( self, "HELMET", true )
	ObjectHideSubObjectPermanently( self, "HOODDOWN", true )

	ObjectHideSubObjectPermanently( self, "MASK", true )

    local head         =    GetRandomNumber()
    local helmet         =    GetRandomNumber()
    local body 		=   GetRandomNumber()
	local mask 		=   GetRandomNumber()

    if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEADHELM01", false )
		ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEADHELM02", false )
		ObjectHideSubObjectPermanently( self, "HEAD02", false )
	elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEADHELM03", false )
		ObjectHideSubObjectPermanently( self, "HEAD03", false )
    else
        ObjectHideSubObjectPermanently( self, "HEADHELM04", false )
		ObjectHideSubObjectPermanently( self, "HEAD04", false )
    end

	if body <= 0.500 then
        ObjectHideSubObjectPermanently( self, "BODYJERKIN", false )
    else
        ObjectHideSubObjectPermanently( self, "BODYDUSTER", false )
    end

    if helmet <= 0.600 then
        ObjectHideSubObjectPermanently( self, "HOODHELM", false )
        ObjectHideSubObjectPermanently( self, "HOOD", false )
    else
        ObjectHideSubObjectPermanently( self, "HELMET", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN", false )
    end

	if mask <= 0.300 then
        ObjectHideSubObjectPermanently( self, "MASK", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end
end

function OnGreyCompanyMountedCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FireArowTip", true )

	ObjectHideSubObjectPermanently( self, "HEADHELM01", true )
	ObjectHideSubObjectPermanently( self, "HEADHELM02", true )
	ObjectHideSubObjectPermanently( self, "HEADHELM03", true )
	ObjectHideSubObjectPermanently( self, "HEADHELM04", true )

	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HEAD04", true )

	ObjectHideSubObjectPermanently( self, "BODYJERKIN", true )
	ObjectHideSubObjectPermanently( self, "BODYDUSTER", true )

	ObjectHideSubObjectPermanently( self, "HOODHELM", true )
	ObjectHideSubObjectPermanently( self, "HOOD", true )

	ObjectHideSubObjectPermanently( self, "HELMET", true )
	ObjectHideSubObjectPermanently( self, "HOODDOWN", true )

	ObjectHideSubObjectPermanently( self, "MASK", true )

	ObjectHideSubObjectPermanently( self, "HORSE01", true )
	ObjectHideSubObjectPermanently( self, "HORSE02", true )
	ObjectHideSubObjectPermanently( self, "HORSE03", true )
	ObjectHideSubObjectPermanently( self, "HORSE04", true )

	ObjectHideSubObjectPermanently( self, "SWORD", true )
	ObjectHideSubObjectPermanently( self, "SPEAR", true )
	ObjectHideSubObjectPermanently( self, "SWORDSCAB", true )

	local bedroll    =    GetRandomNumber()
	local weapon    =    GetRandomNumber()

	if bedroll <= 0.50 then
        ObjectHideSubObjectPermanently( self, "BEDROLL", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

	if weapon <= 0.50 then
        ObjectHideSubObjectPermanently( self, "SPEAR", false )
		ObjectHideSubObjectPermanently( self, "SWORDSCAB", false )
    else
        ObjectHideSubObjectPermanently( self, "SWORD", false )
    end

    local head         =    GetRandomNumber()
	local mask 		=   GetRandomNumber()
    local body 		=   GetRandomNumber()
	local horse		=	GetRandomNumber()

	if head <= 0.125 then
        ObjectHideSubObjectPermanently( self, "HEADHELM01", false )
		ObjectHideSubObjectPermanently( self, "HELMET", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN", false )
		elseif head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEADHELM02", false )
		ObjectHideSubObjectPermanently( self, "HELMET", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN", false )
		elseif head <= 0.375 then
        ObjectHideSubObjectPermanently( self, "HEADHELM03", false )
		ObjectHideSubObjectPermanently( self, "HELMET", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN", false )
		elseif head <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HEADHELM04", false )
		ObjectHideSubObjectPermanently( self, "HELMET", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN", false )
		elseif head <= 0.625 then
        ObjectHideSubObjectPermanently( self, "HEADHELM01", false )
		ObjectHideSubObjectPermanently( self, "HOODHELM", false )
		ObjectHideSubObjectPermanently( self, "HOOD", false )
		elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEADHELM02", false )
		ObjectHideSubObjectPermanently( self, "HOODHELM", false )
		ObjectHideSubObjectPermanently( self, "HOOD", false )
		elseif head <= 0.875 then
        ObjectHideSubObjectPermanently( self, "HEADHELM03", false )
		ObjectHideSubObjectPermanently( self, "HOODHELM", false )
		ObjectHideSubObjectPermanently( self, "HOOD", false )
		else
        ObjectHideSubObjectPermanently( self, "HEADHELM04", false )
		ObjectHideSubObjectPermanently( self, "HOODHELM", false )
		ObjectHideSubObjectPermanently( self, "HOOD", false )
	end

    if body <= 0.500 then
        ObjectHideSubObjectPermanently( self, "BODYJERKIN", false )
    else
        ObjectHideSubObjectPermanently( self, "BODYDUSTER", false )
    end

	if horse <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HORSE01", false )
    elseif horse <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HORSE02", false )
    elseif horse <= 0.8 then
        ObjectHideSubObjectPermanently( self, "HORSE03", false )
     else
        ObjectHideSubObjectPermanently( self, "HORSE04", false )
    end
end

function OnGreyCompanyMountedBannerCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FireArowTip", true )

	ObjectHideSubObjectPermanently( self, "HEADHELM01", true )
	ObjectHideSubObjectPermanently( self, "HEADHELM02", true )
	ObjectHideSubObjectPermanently( self, "HEADHELM03", true )
	ObjectHideSubObjectPermanently( self, "HEADHELM04", true )

	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HEAD04", true )

	ObjectHideSubObjectPermanently( self, "BODYJERKIN", true )
	ObjectHideSubObjectPermanently( self, "BODYDUSTER", true )

	ObjectHideSubObjectPermanently( self, "HOODHELM", true )
	ObjectHideSubObjectPermanently( self, "HOOD", true )

	ObjectHideSubObjectPermanently( self, "HELMET", true )
	ObjectHideSubObjectPermanently( self, "HOODDOWN", true )

	ObjectHideSubObjectPermanently( self, "MASK", true )

	ObjectHideSubObjectPermanently( self, "HORSE01", true )
	ObjectHideSubObjectPermanently( self, "HORSE02", true )
	ObjectHideSubObjectPermanently( self, "HORSE03", true )
	ObjectHideSubObjectPermanently( self, "HORSE04", true )

    local head         =    GetRandomNumber()
    local body 		=   GetRandomNumber()
	local horse		=	GetRandomNumber()

	if head <= 0.125 then
        ObjectHideSubObjectPermanently( self, "HEADHELM01", false )
		ObjectHideSubObjectPermanently( self, "HELMET", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN", false )
		elseif head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEADHELM02", false )
		ObjectHideSubObjectPermanently( self, "HELMET", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN", false )
		elseif head <= 0.375 then
        ObjectHideSubObjectPermanently( self, "HEADHELM03", false )
		ObjectHideSubObjectPermanently( self, "HELMET", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN", false )
		elseif head <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HEADHELM04", false )
		ObjectHideSubObjectPermanently( self, "HELMET", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN", false )
		elseif head <= 0.625 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN", false )
		elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN", false )
		elseif head <= 0.875 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN", false )
		else
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN", false )
	end

    if body <= 0.500 then
        ObjectHideSubObjectPermanently( self, "BODYJERKIN", false )
    else
        ObjectHideSubObjectPermanently( self, "BODYDUSTER", false )
    end

	if horse <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HORSE01", false )
    elseif horse <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HORSE02", false )
    elseif horse <= 0.8 then
        ObjectHideSubObjectPermanently( self, "HORSE03", false )
     else
        ObjectHideSubObjectPermanently( self, "HORSE04", false )
    end
end

function OnDunedainRangerGatheringCreated(self)

    ObjectHideSubObjectPermanently( self, "FireArowTip", true )
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
	ObjectHideSubObjectPermanently( self, "FORGED_SPEAR", true )
	ObjectHideSubObjectPermanently( self, "ARROWUP", true )
	ObjectHideSubObjectPermanently( self, "QUIVARROWUP", true )


	;------------------------HEADS HELMET
	ObjectHideSubObjectPermanently( self, "HELMET", true )
	ObjectHideSubObjectPermanently( self, "HEADHELM01", true )
	ObjectHideSubObjectPermanently( self, "HEADHELM02", true )
	ObjectHideSubObjectPermanently( self, "HEADHELM03", true )
	ObjectHideSubObjectPermanently( self, "HEADHELM04", true )

	;------------------------HEADS UNHOODED
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HEAD04", true )

	;------------------------HEADS HOODED
	ObjectHideSubObjectPermanently( self, "HEADHOOD01", true )
	ObjectHideSubObjectPermanently( self, "HEADHOOD02", true )
	ObjectHideSubObjectPermanently( self, "HEADHOOD03", true )
	ObjectHideSubObjectPermanently( self, "HEADHOOD04", true )

	ObjectHideSubObjectPermanently( self, "MASK", true )
	;------------------------CLOAKS
	ObjectHideSubObjectPermanently( self, "CLOAK01", true )
	ObjectHideSubObjectPermanently( self, "CLOAK02", true )
	ObjectHideSubObjectPermanently( self, "CLOAK03", true )
	ObjectHideSubObjectPermanently( self, "CLOAK04", true )

	ObjectHideSubObjectPermanently( self, "CLOAK01B", true )
	ObjectHideSubObjectPermanently( self, "CLOAK02B", true )
	ObjectHideSubObjectPermanently( self, "CLOAK03B", true )
	ObjectHideSubObjectPermanently( self, "CLOAK04B", true )
	;------------------------HOODS
	ObjectHideSubObjectPermanently( self, "HOOD01", true )
	ObjectHideSubObjectPermanently( self, "HOOD02", true )
	ObjectHideSubObjectPermanently( self, "HOOD03", true )
	ObjectHideSubObjectPermanently( self, "HOOD04", true )

	ObjectHideSubObjectPermanently( self, "HOODDOWN01", true )
	ObjectHideSubObjectPermanently( self, "HOODDOWN02", true )
	ObjectHideSubObjectPermanently( self, "HOODDOWN03", true )
	ObjectHideSubObjectPermanently( self, "HOODDOWN04", true )

	;------------------------HEADS UNHOODED HA
	ObjectHideSubObjectPermanently( self, "HEAD01HA", true )
	ObjectHideSubObjectPermanently( self, "HEAD02HA", true )
	ObjectHideSubObjectPermanently( self, "HEAD03HA", true )
	ObjectHideSubObjectPermanently( self, "HEAD04HA", true )
	;------------------------HEADS HOODED HA
	ObjectHideSubObjectPermanently( self, "HEADHOOD01HA", true )
	ObjectHideSubObjectPermanently( self, "HEADHOOD02HA", true )
	ObjectHideSubObjectPermanently( self, "HEADHOOD03HA", true )
	ObjectHideSubObjectPermanently( self, "HEADHOOD04HA", true )

	ObjectHideSubObjectPermanently( self, "MASKHA", true )
	;------------------------CLOAKS HA
	ObjectHideSubObjectPermanently( self, "CLOAK01HA", true )
	ObjectHideSubObjectPermanently( self, "CLOAK02HA", true )
	ObjectHideSubObjectPermanently( self, "CLOAK03HA", true )
	ObjectHideSubObjectPermanently( self, "CLOAK04HA", true )

	ObjectHideSubObjectPermanently( self, "CLOAK01BHA", true )
	ObjectHideSubObjectPermanently( self, "CLOAK02BHA", true )
	ObjectHideSubObjectPermanently( self, "CLOAK03BHA", true )
	ObjectHideSubObjectPermanently( self, "CLOAK04BHA", true )
	;------------------------HOODS HA
	ObjectHideSubObjectPermanently( self, "HOOD01HA", true )
	ObjectHideSubObjectPermanently( self, "HOOD02HA", true )
	ObjectHideSubObjectPermanently( self, "HOOD03HA", true )
	ObjectHideSubObjectPermanently( self, "HOOD04HA", true )

	ObjectHideSubObjectPermanently( self, "HOODDOWN01HA", true )
	ObjectHideSubObjectPermanently( self, "HOODDOWN02HA", true )
	ObjectHideSubObjectPermanently( self, "HOODDOWN03HA", true )
	ObjectHideSubObjectPermanently( self, "HOODDOWN04HA", true )

	;------------------------BODY
	ObjectHideSubObjectPermanently( self, "BODY01", true )
	ObjectHideSubObjectPermanently( self, "BODY02", true )
	ObjectHideSubObjectPermanently( self, "BODY03", true )
	ObjectHideSubObjectPermanently( self, "BODY04", true )

	ObjectHideSubObjectPermanently( self, "BODY01HA", true )
	ObjectHideSubObjectPermanently( self, "BODY02HA", true )
	ObjectHideSubObjectPermanently( self, "BODY03HA", true )
	ObjectHideSubObjectPermanently( self, "BODY04HA", true )
	;------------------------ARMS COAT
	ObjectHideSubObjectPermanently( self, "ARMS01", true )
	ObjectHideSubObjectPermanently( self, "ARMS02", true )
	ObjectHideSubObjectPermanently( self, "ARMS03", true )
	ObjectHideSubObjectPermanently( self, "ARMS04", true )
	;------------------------ARMS HA
	ObjectHideSubObjectPermanently( self, "ARMS01HA", true )
	ObjectHideSubObjectPermanently( self, "ARMS02HA", true )
	ObjectHideSubObjectPermanently( self, "ARMS03HA", true )
	ObjectHideSubObjectPermanently( self, "ARMS04HA", true )

	local body    =    GetRandomNumber()
	local bodyha    =    GetRandomNumber()

	if body <= 0.25 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
		ObjectHideSubObjectPermanently( self, "ARMS01", false )
    elseif body <= 0.50 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
		ObjectHideSubObjectPermanently( self, "ARMS02", false )
    elseif body <= 0.75 then
        ObjectHideSubObjectPermanently( self, "BODY03", false )
		ObjectHideSubObjectPermanently( self, "ARMS03", false )
    else
        ObjectHideSubObjectPermanently( self, "BODY04", false )
		ObjectHideSubObjectPermanently( self, "ARMS04", false )
    end

	if bodyha <= 0.25 then
        ObjectHideSubObjectPermanently( self, "BODY01HA", false )
		ObjectHideSubObjectPermanently( self, "ARMS01HA", false )
    elseif bodyha <= 0.50 then
        ObjectHideSubObjectPermanently( self, "BODY02HA", false )
		ObjectHideSubObjectPermanently( self, "ARMS02HA", false )
    elseif bodyha <= 0.75 then
        ObjectHideSubObjectPermanently( self, "BODY03HA", false )
		ObjectHideSubObjectPermanently( self, "ARMS03HA", false )
    else
        ObjectHideSubObjectPermanently( self, "BODY04HA", false )
		ObjectHideSubObjectPermanently( self, "ARMS04HA", false )
    end

	--- randomize head, and cloak assets---
	-- first decide whether he has a hood, or no hood (50% chance each)
	-- second decides which head variation to use
	-- third decides which cloak color to use
	-- fourth decides if he wears a mask or not (Only on helmet and hood up rangers)
	local ranger = GetRandomNumber()
	local head	   =    GetRandomNumber()
	local cloak    =    GetRandomNumber()
	local mask    =    GetRandomNumber()

	-- if he does not have a helmet or hooded cloak, we choose normal heads and cloaks with hoods down
	if ranger <= 0.50 then
		-- Bare Head
		if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
		elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
		elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
		else
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
		end
		-- Hood Down Cloak
		if cloak <= 0.125 then
        ObjectHideSubObjectPermanently( self, "CLOAK01", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN01", false )
		elseif cloak <= 0.25 then
        ObjectHideSubObjectPermanently( self, "CLOAK02", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN02", false )
		elseif cloak <= 0.375 then
        ObjectHideSubObjectPermanently( self, "CLOAK03", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN03", false )
		elseif cloak <= 0.5 then
        ObjectHideSubObjectPermanently( self, "CLOAK04", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN04", false )
		elseif cloak <= 0.625 then
        ObjectHideSubObjectPermanently( self, "CLOAK01B", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN01", false )
		elseif cloak <= 0.75 then
        ObjectHideSubObjectPermanently( self, "CLOAK02B", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN02", false )
		elseif cloak <= 0.875 then
        ObjectHideSubObjectPermanently( self, "CLOAK03B", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN03", false )
		else
        ObjectHideSubObjectPermanently( self, "CLOAK04B", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN04", false )
		end
	else
		-- Hooded Head
		if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEADHOOD01", false )
		elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEADHOOD02", false )
		elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEADHOOD03", false )
		else
        ObjectHideSubObjectPermanently( self, "HEADHOOD04", false )
		end
		-- Hooded Cloak
		if cloak <= 0.125 then
        ObjectHideSubObjectPermanently( self, "CLOAK01", false )
		ObjectHideSubObjectPermanently( self, "HOOD01", false )
		elseif cloak <= 0.25 then
        ObjectHideSubObjectPermanently( self, "CLOAK02", false )
		ObjectHideSubObjectPermanently( self, "HOOD02", false )
		elseif cloak <= 0.375 then
        ObjectHideSubObjectPermanently( self, "CLOAK03", false )
		ObjectHideSubObjectPermanently( self, "HOOD03", false )
		elseif cloak <= 0.5 then
        ObjectHideSubObjectPermanently( self, "CLOAK04", false )
		ObjectHideSubObjectPermanently( self, "HOOD04", false )
		elseif cloak <= 0.625 then
        ObjectHideSubObjectPermanently( self, "CLOAK01B", false )
		ObjectHideSubObjectPermanently( self, "HOOD01", false )
		elseif cloak <= 0.75 then
        ObjectHideSubObjectPermanently( self, "CLOAK02B", false )
		ObjectHideSubObjectPermanently( self, "HOOD02", false )
		elseif cloak <= 0.875 then
        ObjectHideSubObjectPermanently( self, "CLOAK03B", false )
		ObjectHideSubObjectPermanently( self, "HOOD03", false )
		else
        ObjectHideSubObjectPermanently( self, "CLOAK04B", false )
		ObjectHideSubObjectPermanently( self, "HOOD04", false )
		end
		-- Mask
		if mask <= 0.50 then
        ObjectHideSubObjectPermanently( self, "MASK", false )
		else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
		end
	end

	--- randomize head, helm, and cloak assets---
	-- first decide whether he has a helmet, hood, or no hood (33% chance each)
	-- second decides which head variation to use
	-- third decides which cloak color to use
	-- fourth decides if he wears a mask or not (Only on helmet and hood up rangers)
	local rangerha = GetRandomNumber()

	-- if he does not have a helmet or hooded cloak, we choose normal heads and cloaks with hoods down
	if rangerha <= 0.33 then
		-- Bare Head
		if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEAD01HA", false )
		elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEAD02HA", false )
		elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEAD03HA", false )
		else
        ObjectHideSubObjectPermanently( self, "HEAD04HA", false )
		end
		-- Hood Down Cloak
		if cloak <= 0.125 then
        ObjectHideSubObjectPermanently( self, "CLOAK01HA", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN01HA", false )
		elseif cloak <= 0.25 then
        ObjectHideSubObjectPermanently( self, "CLOAK02HA", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN02HA", false )
		elseif cloak <= 0.375 then
        ObjectHideSubObjectPermanently( self, "CLOAK03HA", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN03HA", false )
		elseif cloak <= 0.5 then
        ObjectHideSubObjectPermanently( self, "CLOAK04HA", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN04HA", false )
		elseif cloak <= 0.625 then
        ObjectHideSubObjectPermanently( self, "CLOAK01BHA", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN01HA", false )
		elseif cloak <= 0.75 then
        ObjectHideSubObjectPermanently( self, "CLOAK02BHA", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN02HA", false )
		elseif cloak <= 0.875 then
        ObjectHideSubObjectPermanently( self, "CLOAK03BHA", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN03HA", false )
		else
        ObjectHideSubObjectPermanently( self, "CLOAK04BHA", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN04HA", false )
		end
	-- if he has a helmet, we chead the head, unhide helmet, choose which cloak with hood down, and choose if he has a mask or not
    elseif rangerha <= 0.66 then
		-- Helmet Head
		if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEADHELM01", false )
		ObjectHideSubObjectPermanently( self, "HELMET", false )
		elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEADHELM02", false )
		ObjectHideSubObjectPermanently( self, "HELMET", false )
		elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEADHELM03", false )
		ObjectHideSubObjectPermanently( self, "HELMET", false )
		else
        ObjectHideSubObjectPermanently( self, "HEADHELM04", false )
		ObjectHideSubObjectPermanently( self, "HELMET", false )
		end
		-- Hood Down Cloak
		if cloak <= 0.125 then
        ObjectHideSubObjectPermanently( self, "CLOAK01HA", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN01HA", false )
		elseif cloak <= 0.25 then
        ObjectHideSubObjectPermanently( self, "CLOAK02HA", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN02HA", false )
		elseif cloak <= 0.375 then
        ObjectHideSubObjectPermanently( self, "CLOAK03HA", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN03HA", false )
		elseif cloak <= 0.5 then
        ObjectHideSubObjectPermanently( self, "CLOAK04HA", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN04HA", false )
		elseif cloak <= 0.625 then
        ObjectHideSubObjectPermanently( self, "CLOAK01BHA", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN01HA", false )
		elseif cloak <= 0.75 then
        ObjectHideSubObjectPermanently( self, "CLOAK02BHA", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN02HA", false )
		elseif cloak <= 0.875 then
        ObjectHideSubObjectPermanently( self, "CLOAK03BHA", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN03HA", false )
		else
        ObjectHideSubObjectPermanently( self, "CLOAK04BHA", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN04HA", false )
		end
		-- Mask
		if maskha <= 0.50 then
        ObjectHideSubObjectPermanently( self, "MASKHA", false )
		else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
		end
	-- if he has a hooded cloak, we choose hooded heads, which hooded cloak, and vary if he has a mask or not
	else
		-- Hooded Head
		if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEADHOOD01HA", false )
		elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEADHOOD02HA", false )
		elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEADHOOD03HA", false )
		else
        ObjectHideSubObjectPermanently( self, "HEADHOOD04HA", false )
		end
		-- Hooded Cloak
		if cloak <= 0.125 then
        ObjectHideSubObjectPermanently( self, "CLOAK01HA", false )
		ObjectHideSubObjectPermanently( self, "HOOD01HA", false )
		elseif cloak <= 0.25 then
        ObjectHideSubObjectPermanently( self, "CLOAK02HA", false )
		ObjectHideSubObjectPermanently( self, "HOOD02HA", false )
		elseif cloak <= 0.375 then
        ObjectHideSubObjectPermanently( self, "CLOAK03HA", false )
		ObjectHideSubObjectPermanently( self, "HOOD03HA", false )
		elseif cloak <= 0.5 then
        ObjectHideSubObjectPermanently( self, "CLOAK04HA", false )
		ObjectHideSubObjectPermanently( self, "HOOD04HA", false )
		elseif cloak <= 0.625 then
        ObjectHideSubObjectPermanently( self, "CLOAK01BHA", false )
		ObjectHideSubObjectPermanently( self, "HOOD01HA", false )
		elseif cloak <= 0.75 then
        ObjectHideSubObjectPermanently( self, "CLOAK02BHA", false )
		ObjectHideSubObjectPermanently( self, "HOOD02HA", false )
		elseif cloak <= 0.875 then
        ObjectHideSubObjectPermanently( self, "CLOAK03BHA", false )
		ObjectHideSubObjectPermanently( self, "HOOD03HA", false )
		else
        ObjectHideSubObjectPermanently( self, "CLOAK04BHA", false )
		ObjectHideSubObjectPermanently( self, "HOOD04HA", false )
		end
		-- Mask
		if mask <= 0.50 then
        ObjectHideSubObjectPermanently( self, "MASKHA", false )
		else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
		end
	end

end

function OnDunedainRangerCreated(self)

    ObjectHideSubObjectPermanently( self, "FireArowTip", true )
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
	ObjectHideSubObjectPermanently( self, "FORGED_SPEAR", true )
	ObjectHideSubObjectPermanently( self, "ARROWUP", true )
	ObjectHideSubObjectPermanently( self, "QUIVARROWUP", true )


	;------------------------HEADS HELMET
	ObjectHideSubObjectPermanently( self, "HELMET", true )
	ObjectHideSubObjectPermanently( self, "HEADHELM01", true )
	ObjectHideSubObjectPermanently( self, "HEADHELM02", true )
	ObjectHideSubObjectPermanently( self, "HEADHELM03", true )
	ObjectHideSubObjectPermanently( self, "HEADHELM04", true )

	;------------------------HEADS UNHOODED
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HEAD04", true )

	;------------------------HEADS HOODED
	ObjectHideSubObjectPermanently( self, "HEADHOOD01", true )
	ObjectHideSubObjectPermanently( self, "HEADHOOD02", true )
	ObjectHideSubObjectPermanently( self, "HEADHOOD03", true )
	ObjectHideSubObjectPermanently( self, "HEADHOOD04", true )

	ObjectHideSubObjectPermanently( self, "MASK", true )
	;------------------------CLOAKS
	ObjectHideSubObjectPermanently( self, "CLOAK01", true )
	ObjectHideSubObjectPermanently( self, "CLOAK02", true )
	ObjectHideSubObjectPermanently( self, "CLOAK03", true )
	ObjectHideSubObjectPermanently( self, "CLOAK04", true )

	ObjectHideSubObjectPermanently( self, "CLOAK01B", true )
	ObjectHideSubObjectPermanently( self, "CLOAK02B", true )
	ObjectHideSubObjectPermanently( self, "CLOAK03B", true )
	ObjectHideSubObjectPermanently( self, "CLOAK04B", true )
	;------------------------HOODS
	ObjectHideSubObjectPermanently( self, "HOOD01", true )
	ObjectHideSubObjectPermanently( self, "HOOD02", true )
	ObjectHideSubObjectPermanently( self, "HOOD03", true )
	ObjectHideSubObjectPermanently( self, "HOOD04", true )

	ObjectHideSubObjectPermanently( self, "HOODDOWN01", true )
	ObjectHideSubObjectPermanently( self, "HOODDOWN02", true )
	ObjectHideSubObjectPermanently( self, "HOODDOWN03", true )
	ObjectHideSubObjectPermanently( self, "HOODDOWN04", true )

	;------------------------HEADS UNHOODED HA
	ObjectHideSubObjectPermanently( self, "HEAD01HA", true )
	ObjectHideSubObjectPermanently( self, "HEAD02HA", true )
	ObjectHideSubObjectPermanently( self, "HEAD03HA", true )
	ObjectHideSubObjectPermanently( self, "HEAD04HA", true )
	;------------------------HEADS HOODED HA
	ObjectHideSubObjectPermanently( self, "HEADHOOD01HA", true )
	ObjectHideSubObjectPermanently( self, "HEADHOOD02HA", true )
	ObjectHideSubObjectPermanently( self, "HEADHOOD03HA", true )
	ObjectHideSubObjectPermanently( self, "HEADHOOD04HA", true )

	ObjectHideSubObjectPermanently( self, "MASKHA", true )
	;------------------------CLOAKS HA
	ObjectHideSubObjectPermanently( self, "CLOAK01HA", true )
	ObjectHideSubObjectPermanently( self, "CLOAK02HA", true )
	ObjectHideSubObjectPermanently( self, "CLOAK03HA", true )
	ObjectHideSubObjectPermanently( self, "CLOAK04HA", true )

	ObjectHideSubObjectPermanently( self, "CLOAK01BHA", true )
	ObjectHideSubObjectPermanently( self, "CLOAK02BHA", true )
	ObjectHideSubObjectPermanently( self, "CLOAK03BHA", true )
	ObjectHideSubObjectPermanently( self, "CLOAK04BHA", true )
	;------------------------HOODS HA
	ObjectHideSubObjectPermanently( self, "HOOD01HA", true )
	ObjectHideSubObjectPermanently( self, "HOOD02HA", true )
	ObjectHideSubObjectPermanently( self, "HOOD03HA", true )
	ObjectHideSubObjectPermanently( self, "HOOD04HA", true )

	ObjectHideSubObjectPermanently( self, "HOODDOWN01HA", true )
	ObjectHideSubObjectPermanently( self, "HOODDOWN02HA", true )
	ObjectHideSubObjectPermanently( self, "HOODDOWN03HA", true )
	ObjectHideSubObjectPermanently( self, "HOODDOWN04HA", true )

	;------------------------BODY
	ObjectHideSubObjectPermanently( self, "BODY01", true )
	ObjectHideSubObjectPermanently( self, "BODY02", true )
	ObjectHideSubObjectPermanently( self, "BODY03", true )
	ObjectHideSubObjectPermanently( self, "BODY04", true )

	ObjectHideSubObjectPermanently( self, "BODY01HA", true )
	ObjectHideSubObjectPermanently( self, "BODY02HA", true )
	ObjectHideSubObjectPermanently( self, "BODY03HA", true )
	ObjectHideSubObjectPermanently( self, "BODY04HA", true )
	;------------------------ARMS COAT
	ObjectHideSubObjectPermanently( self, "ARMS01", true )
	ObjectHideSubObjectPermanently( self, "ARMS02", true )
	ObjectHideSubObjectPermanently( self, "ARMS03", true )
	ObjectHideSubObjectPermanently( self, "ARMS04", true )
	;------------------------ARMS HA
	ObjectHideSubObjectPermanently( self, "ARMS01HA", true )
	ObjectHideSubObjectPermanently( self, "ARMS02HA", true )
	ObjectHideSubObjectPermanently( self, "ARMS03HA", true )
	ObjectHideSubObjectPermanently( self, "ARMS04HA", true )
	;------------------------EXTRA GEAR
	ObjectHideSubObjectPermanently( self, "DAGGER", true )
	ObjectHideSubObjectPermanently( self, "BAG", true )
	ObjectHideSubObjectPermanently( self, "BEDROLL", true )

	local bag    =    GetRandomNumber()
	local dagger    =    GetRandomNumber()


	if bag <= 0.33 then
        ObjectHideSubObjectPermanently( self, "BAG", false )
    elseif bag <= 0.66 then
        ObjectHideSubObjectPermanently( self, "BEDROLL", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

	if dagger <= 0.50 then
        ObjectHideSubObjectPermanently( self, "DAGGER", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

	local body    =    GetRandomNumber()
	local bodyha    =    GetRandomNumber()

	if body <= 0.25 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
		ObjectHideSubObjectPermanently( self, "ARMS01", false )
    elseif body <= 0.50 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
		ObjectHideSubObjectPermanently( self, "ARMS02", false )
    elseif body <= 0.75 then
        ObjectHideSubObjectPermanently( self, "BODY03", false )
		ObjectHideSubObjectPermanently( self, "ARMS03", false )
    else
        ObjectHideSubObjectPermanently( self, "BODY04", false )
		ObjectHideSubObjectPermanently( self, "ARMS04", false )
    end

	if bodyha <= 0.25 then
        ObjectHideSubObjectPermanently( self, "BODY01HA", false )
		ObjectHideSubObjectPermanently( self, "ARMS01HA", false )
    elseif bodyha <= 0.50 then
        ObjectHideSubObjectPermanently( self, "BODY02HA", false )
		ObjectHideSubObjectPermanently( self, "ARMS02HA", false )
    elseif bodyha <= 0.75 then
        ObjectHideSubObjectPermanently( self, "BODY03HA", false )
		ObjectHideSubObjectPermanently( self, "ARMS03HA", false )
    else
        ObjectHideSubObjectPermanently( self, "BODY04HA", false )
		ObjectHideSubObjectPermanently( self, "ARMS04HA", false )
    end

	--- randomize head, and cloak assets---
	-- first decide whether he has a hood, or no hood (50% chance each)
	-- second decides which head variation to use
	-- third decides which cloak color to use
	-- fourth decides if he wears a mask or not (Only on helmet and hood up rangers)
	local ranger = GetRandomNumber()
	local head	   =    GetRandomNumber()
	local cloak    =    GetRandomNumber()
	local mask    =    GetRandomNumber()

	-- if he does not have a helmet or hooded cloak, we choose normal heads and cloaks with hoods down
	if ranger <= 0.50 then
		-- Bare Head
		if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
		elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
		elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
		else
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
		end
		-- Hood Down Cloak
		if cloak <= 0.125 then
        ObjectHideSubObjectPermanently( self, "CLOAK01", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN01", false )
		elseif cloak <= 0.25 then
        ObjectHideSubObjectPermanently( self, "CLOAK02", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN02", false )
		elseif cloak <= 0.375 then
        ObjectHideSubObjectPermanently( self, "CLOAK03", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN03", false )
		elseif cloak <= 0.5 then
        ObjectHideSubObjectPermanently( self, "CLOAK04", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN04", false )
		elseif cloak <= 0.625 then
        ObjectHideSubObjectPermanently( self, "CLOAK01B", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN01", false )
		elseif cloak <= 0.75 then
        ObjectHideSubObjectPermanently( self, "CLOAK02B", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN02", false )
		elseif cloak <= 0.875 then
        ObjectHideSubObjectPermanently( self, "CLOAK03B", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN03", false )
		else
        ObjectHideSubObjectPermanently( self, "CLOAK04B", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN04", false )
		end
	else
		-- Hooded Head
		if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEADHOOD01", false )
		elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEADHOOD02", false )
		elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEADHOOD03", false )
		else
        ObjectHideSubObjectPermanently( self, "HEADHOOD04", false )
		end
		-- Hooded Cloak
		if cloak <= 0.125 then
        ObjectHideSubObjectPermanently( self, "CLOAK01", false )
		ObjectHideSubObjectPermanently( self, "HOOD01", false )
		elseif cloak <= 0.25 then
        ObjectHideSubObjectPermanently( self, "CLOAK02", false )
		ObjectHideSubObjectPermanently( self, "HOOD02", false )
		elseif cloak <= 0.375 then
        ObjectHideSubObjectPermanently( self, "CLOAK03", false )
		ObjectHideSubObjectPermanently( self, "HOOD03", false )
		elseif cloak <= 0.5 then
        ObjectHideSubObjectPermanently( self, "CLOAK04", false )
		ObjectHideSubObjectPermanently( self, "HOOD04", false )
		elseif cloak <= 0.625 then
        ObjectHideSubObjectPermanently( self, "CLOAK01B", false )
		ObjectHideSubObjectPermanently( self, "HOOD01", false )
		elseif cloak <= 0.75 then
        ObjectHideSubObjectPermanently( self, "CLOAK02B", false )
		ObjectHideSubObjectPermanently( self, "HOOD02", false )
		elseif cloak <= 0.875 then
        ObjectHideSubObjectPermanently( self, "CLOAK03B", false )
		ObjectHideSubObjectPermanently( self, "HOOD03", false )
		else
        ObjectHideSubObjectPermanently( self, "CLOAK04B", false )
		ObjectHideSubObjectPermanently( self, "HOOD04", false )
		end
		-- Mask
		if mask <= 0.50 then
        ObjectHideSubObjectPermanently( self, "MASK", false )
		else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
		end
	end

	--- randomize head, helm, and cloak assets---
	-- first decide whether he has a helmet, hood, or no hood (33% chance each)
	-- second decides which head variation to use
	-- third decides which cloak color to use
	-- fourth decides if he wears a mask or not (Only on helmet and hood up rangers)
	local rangerha = GetRandomNumber()

	-- if he does not have a helmet or hooded cloak, we choose normal heads and cloaks with hoods down
	if rangerha <= 0.33 then
		-- Bare Head
		if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEAD01HA", false )
		elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEAD02HA", false )
		elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEAD03HA", false )
		else
        ObjectHideSubObjectPermanently( self, "HEAD04HA", false )
		end
		-- Hood Down Cloak
		if cloak <= 0.125 then
        ObjectHideSubObjectPermanently( self, "CLOAK01HA", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN01HA", false )
		elseif cloak <= 0.25 then
        ObjectHideSubObjectPermanently( self, "CLOAK02HA", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN02HA", false )
		elseif cloak <= 0.375 then
        ObjectHideSubObjectPermanently( self, "CLOAK03HA", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN03HA", false )
		elseif cloak <= 0.5 then
        ObjectHideSubObjectPermanently( self, "CLOAK04HA", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN04HA", false )
		elseif cloak <= 0.625 then
        ObjectHideSubObjectPermanently( self, "CLOAK01BHA", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN01HA", false )
		elseif cloak <= 0.75 then
        ObjectHideSubObjectPermanently( self, "CLOAK02BHA", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN02HA", false )
		elseif cloak <= 0.875 then
        ObjectHideSubObjectPermanently( self, "CLOAK03BHA", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN03HA", false )
		else
        ObjectHideSubObjectPermanently( self, "CLOAK04BHA", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN04HA", false )
		end
	-- if he has a helmet, we chead the head, unhide helmet, choose which cloak with hood down, and choose if he has a mask or not
    elseif rangerha <= 0.66 then
		-- Helmet Head
		if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEADHELM01", false )
		ObjectHideSubObjectPermanently( self, "HELMET", false )
		elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEADHELM02", false )
		ObjectHideSubObjectPermanently( self, "HELMET", false )
		elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEADHELM03", false )
		ObjectHideSubObjectPermanently( self, "HELMET", false )
		else
        ObjectHideSubObjectPermanently( self, "HEADHELM04", false )
		ObjectHideSubObjectPermanently( self, "HELMET", false )
		end
		-- Hood Down Cloak
		if cloak <= 0.125 then
        ObjectHideSubObjectPermanently( self, "CLOAK01HA", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN01HA", false )
		elseif cloak <= 0.25 then
        ObjectHideSubObjectPermanently( self, "CLOAK02HA", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN02HA", false )
		elseif cloak <= 0.375 then
        ObjectHideSubObjectPermanently( self, "CLOAK03HA", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN03HA", false )
		elseif cloak <= 0.5 then
        ObjectHideSubObjectPermanently( self, "CLOAK04HA", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN04HA", false )
		elseif cloak <= 0.625 then
        ObjectHideSubObjectPermanently( self, "CLOAK01BHA", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN01HA", false )
		elseif cloak <= 0.75 then
        ObjectHideSubObjectPermanently( self, "CLOAK02BHA", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN02HA", false )
		elseif cloak <= 0.875 then
        ObjectHideSubObjectPermanently( self, "CLOAK03BHA", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN03HA", false )
		else
        ObjectHideSubObjectPermanently( self, "CLOAK04BHA", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN04HA", false )
		end
		-- Mask
		if maskha <= 0.50 then
        ObjectHideSubObjectPermanently( self, "MASKHA", false )
		else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
		end
	-- if he has a hooded cloak, we choose hooded heads, which hooded cloak, and vary if he has a mask or not
	else
		-- Hooded Head
		if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEADHOOD01HA", false )
		elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEADHOOD02HA", false )
		elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEADHOOD03HA", false )
		else
        ObjectHideSubObjectPermanently( self, "HEADHOOD04HA", false )
		end
		-- Hooded Cloak
		if cloak <= 0.125 then
        ObjectHideSubObjectPermanently( self, "CLOAK01HA", false )
		ObjectHideSubObjectPermanently( self, "HOOD01HA", false )
		elseif cloak <= 0.25 then
        ObjectHideSubObjectPermanently( self, "CLOAK02HA", false )
		ObjectHideSubObjectPermanently( self, "HOOD02HA", false )
		elseif cloak <= 0.375 then
        ObjectHideSubObjectPermanently( self, "CLOAK03HA", false )
		ObjectHideSubObjectPermanently( self, "HOOD03HA", false )
		elseif cloak <= 0.5 then
        ObjectHideSubObjectPermanently( self, "CLOAK04HA", false )
		ObjectHideSubObjectPermanently( self, "HOOD04HA", false )
		elseif cloak <= 0.625 then
        ObjectHideSubObjectPermanently( self, "CLOAK01BHA", false )
		ObjectHideSubObjectPermanently( self, "HOOD01HA", false )
		elseif cloak <= 0.75 then
        ObjectHideSubObjectPermanently( self, "CLOAK02BHA", false )
		ObjectHideSubObjectPermanently( self, "HOOD02HA", false )
		elseif cloak <= 0.875 then
        ObjectHideSubObjectPermanently( self, "CLOAK03BHA", false )
		ObjectHideSubObjectPermanently( self, "HOOD03HA", false )
		else
        ObjectHideSubObjectPermanently( self, "CLOAK04BHA", false )
		ObjectHideSubObjectPermanently( self, "HOOD04HA", false )
		end
		-- Mask
		if mask <= 0.50 then
        ObjectHideSubObjectPermanently( self, "MASKHA", false )
		else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
		end
	end

end

function OnArthedainSentinelCreated(self)

    ObjectHideSubObjectPermanently( self, "FireArowTip", true )
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
	ObjectHideSubObjectPermanently( self, "ARROWUP", true )
	ObjectHideSubObjectPermanently( self, "QUIVARROWUP", true )

	;------------------------HEADS
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HEAD04", true )
	ObjectHideSubObjectPermanently( self, "HEADHOOD01", true )
	ObjectHideSubObjectPermanently( self, "HEADHOOD02", true )
	ObjectHideSubObjectPermanently( self, "HEADHOOD03", true )
	ObjectHideSubObjectPermanently( self, "HEADHOOD04", true )
	ObjectHideSubObjectPermanently( self, "HEADHELM01", true )
	ObjectHideSubObjectPermanently( self, "HEADHELM02", true )
	ObjectHideSubObjectPermanently( self, "HEADHELM03", true )
	ObjectHideSubObjectPermanently( self, "HEADHELM04", true )
	ObjectHideSubObjectPermanently( self, "MASK", true )
	ObjectHideSubObjectPermanently( self, "HELMET", true )
	;------------------------CLOAKS
	ObjectHideSubObjectPermanently( self, "CLOAK01", true )
	ObjectHideSubObjectPermanently( self, "CLOAK02", true )
	ObjectHideSubObjectPermanently( self, "CLOAK03", true )
	ObjectHideSubObjectPermanently( self, "CLOAK04", true )
	;------------------------HOODS
	ObjectHideSubObjectPermanently( self, "HOOD01", true )
	ObjectHideSubObjectPermanently( self, "HOOD02", true )
	ObjectHideSubObjectPermanently( self, "HOOD03", true )
	ObjectHideSubObjectPermanently( self, "HOOD04", true )
	ObjectHideSubObjectPermanently( self, "HOODDOWN01", true )
	ObjectHideSubObjectPermanently( self, "HOODDOWN02", true )
	ObjectHideSubObjectPermanently( self, "HOODDOWN03", true )
	ObjectHideSubObjectPermanently( self, "HOODDOWN04", true )
	;------------------------GEAR
	ObjectHideSubObjectPermanently( self, "BEDROLL", true )
	ObjectHideSubObjectPermanently( self, "BAG", true )
	ObjectHideSubObjectPermanently( self, "DAGGER", true )

	local bag    =    GetRandomNumber()
	local dagger    =    GetRandomNumber()

	if bag <= 0.50 then
        ObjectHideSubObjectPermanently( self, "BAG", false )
    else
        ObjectHideSubObjectPermanently( self, "BEDROLL", false )
    end

	if dagger <= 0.50 then
        ObjectHideSubObjectPermanently( self, "DAGGER", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

	--- randomize head, helm, and cloak assets---
	-- first decide whether he has a helmet, hood, or no hood (33% chance each)
	-- second decides which head variation to use
	-- third decides which cloak color to use
	-- fourth decides if he wears a mask or not (Only on helmet and hood up rangers)
	local ranger = GetRandomNumber()
	local head	   =    GetRandomNumber()
	local cloak    =    GetRandomNumber()
	local mask    =    GetRandomNumber()

	-- if he does not have a helmet or hooded cloak, we choose normal heads and cloaks with hoods down
	if ranger <= 0.33 then
		-- Bare Head
		if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
		elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
		elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
		else
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
		end
		-- Hood Down Cloak
		if cloak <= 0.25 then
        ObjectHideSubObjectPermanently( self, "CLOAK01", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN01", false )
		elseif cloak <= 0.50 then
        ObjectHideSubObjectPermanently( self, "CLOAK02", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN02", false )
		elseif cloak <= 0.75 then
        ObjectHideSubObjectPermanently( self, "CLOAK03", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN03", false )
		else
        ObjectHideSubObjectPermanently( self, "CLOAK04", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN04", false )
		end
	-- if he has a helmet, we chead the head, unhide helmet, choose which cloak with hood down, and choose if he has a mask or not
    elseif ranger <= 0.66 then
		-- Helmet Head
		if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEADHELM01", false )
		ObjectHideSubObjectPermanently( self, "HELMET", false )
		elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEADHELM02", false )
		ObjectHideSubObjectPermanently( self, "HELMET", false )
		elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEADHELM03", false )
		ObjectHideSubObjectPermanently( self, "HELMET", false )
		else
        ObjectHideSubObjectPermanently( self, "HEADHELM04", false )
		ObjectHideSubObjectPermanently( self, "HELMET", false )
		end
		-- Hood Down Cloak
		if cloak <= 0.25 then
        ObjectHideSubObjectPermanently( self, "CLOAK01", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN01", false )
		elseif cloak <= 0.50 then
        ObjectHideSubObjectPermanently( self, "CLOAK02", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN02", false )
		elseif cloak <= 0.75 then
        ObjectHideSubObjectPermanently( self, "CLOAK03", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN03", false )
		else
        ObjectHideSubObjectPermanently( self, "CLOAK04", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN04", false )
		end
		-- Mask
		if mask <= 0.50 then
        ObjectHideSubObjectPermanently( self, "MASK", false )
		else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
		end
	-- if he has a hooded cloak, we choose hooded heads, which hooded cloak, and vary if he has a mask or not
	else
		-- Hooded Head
		if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEADHOOD01", false )
		elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEADHOOD02", false )
		elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEADHOOD03", false )
		else
        ObjectHideSubObjectPermanently( self, "HEADHOOD04", false )
		end
		-- Hooded Cloak
		if cloak <= 0.25 then
        ObjectHideSubObjectPermanently( self, "CLOAK01", false )
		ObjectHideSubObjectPermanently( self, "HOOD01", false )
		elseif cloak <= 0.50 then
        ObjectHideSubObjectPermanently( self, "CLOAK02", false )
		ObjectHideSubObjectPermanently( self, "HOOD02", false )
		elseif cloak <= 0.75 then
        ObjectHideSubObjectPermanently( self, "CLOAK03", false )
		ObjectHideSubObjectPermanently( self, "HOOD03", false )
		else
        ObjectHideSubObjectPermanently( self, "CLOAK04", false )
		ObjectHideSubObjectPermanently( self, "HOOD04", false )
		end
		-- Mask
		if mask <= 0.50 then
        ObjectHideSubObjectPermanently( self, "MASK", false )
		else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
		end
	end

end

function OnDunedainOutriderCreated(self)

    ObjectHideSubObjectPermanently( self, "FireArowTip", true )
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
	ObjectHideSubObjectPermanently( self, "ARROWUP", true )
	ObjectHideSubObjectPermanently( self, "QUIVARROWUP", true )

	;------------------------HEADS
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HEAD04", true )
	ObjectHideSubObjectPermanently( self, "MASK", true )
	ObjectHideSubObjectPermanently( self, "HELMET", true )
	;------------------------CLOAKS
	ObjectHideSubObjectPermanently( self, "CLOAK01", true )
	ObjectHideSubObjectPermanently( self, "CLOAK02", true )
	ObjectHideSubObjectPermanently( self, "CLOAK03", true )
	ObjectHideSubObjectPermanently( self, "CLOAK04", true )
	;------------------------BODY
	ObjectHideSubObjectPermanently( self, "HOODDOWN01", true )
	ObjectHideSubObjectPermanently( self, "HOODDOWN02", true )
	ObjectHideSubObjectPermanently( self, "HOODDOWN03", true )
	ObjectHideSubObjectPermanently( self, "HOODDOWN04", true )
	;------------------------HORSE
	ObjectHideSubObjectPermanently( self, "HORSE01", true )
	ObjectHideSubObjectPermanently( self, "HORSE02", true )
	ObjectHideSubObjectPermanently( self, "HORSE03", true )
	ObjectHideSubObjectPermanently( self, "HORSE04", true )
	;------------------------GEAR
	ObjectHideSubObjectPermanently( self, "BEDROLL", true )
	ObjectHideSubObjectPermanently( self, "BAG", true )
	ObjectHideSubObjectPermanently( self, "DAGGER", true )

	local head	   =    GetRandomNumber()
	local horse	   =    GetRandomNumber()
	local cloak    =    GetRandomNumber()

	local bag    =    GetRandomNumber()
	local bedroll    =    GetRandomNumber()
	local dagger    =    GetRandomNumber()

	if bag <= 0.50 then
        ObjectHideSubObjectPermanently( self, "BAG", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end
	if bedroll <= 0.50 then
        ObjectHideSubObjectPermanently( self, "BEDROLL", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end
	if dagger <= 0.50 then
        ObjectHideSubObjectPermanently( self, "DAGGER", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

	if head <= 0.083 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.166 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head <= 0.249 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
	elseif head <= 0.332 then
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    elseif head <= 0.415 then
        ObjectHideSubObjectPermanently( self, "HEADHELM01", false )
		ObjectHideSubObjectPermanently( self, "HELMET", false )
	elseif head <= 0.498 then
        ObjectHideSubObjectPermanently( self, "HEADHELM02", false )
		ObjectHideSubObjectPermanently( self, "HELMET", false )
    elseif head <= 0.581 then
        ObjectHideSubObjectPermanently( self, "HEADHELM03", false )
		ObjectHideSubObjectPermanently( self, "HELMET", false )
	elseif head <= 0.664 then
        ObjectHideSubObjectPermanently( self, "HEADHELM04", false )
		ObjectHideSubObjectPermanently( self, "HELMET", false )
    elseif head <= 0.747 then
        ObjectHideSubObjectPermanently( self, "HEADHELM01", false )
		ObjectHideSubObjectPermanently( self, "HELMET", false )
		ObjectHideSubObjectPermanently( self, "MASK", false )
	elseif head <= 0.83 then
        ObjectHideSubObjectPermanently( self, "HEADHELM02", false )
		ObjectHideSubObjectPermanently( self, "HELMET", false )
		ObjectHideSubObjectPermanently( self, "MASK", false )
    elseif head <= 0.913 then
        ObjectHideSubObjectPermanently( self, "HEADHELM03", false )
		ObjectHideSubObjectPermanently( self, "HELMET", false )
		ObjectHideSubObjectPermanently( self, "MASK", false )
    else
        ObjectHideSubObjectPermanently( self, "HEADHELM04", false )
		ObjectHideSubObjectPermanently( self, "HELMET", false )
		ObjectHideSubObjectPermanently( self, "MASK", false )
    end

	if horse <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HORSE01", false )
    elseif horse <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HORSE02", false )
    elseif horse <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HORSE03", false )
    else
        ObjectHideSubObjectPermanently( self, "HORSE04", false )
    end

	if cloak <= 0.25 then
        ObjectHideSubObjectPermanently( self, "CLOAK01", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN01", false )
    elseif cloak <= 0.50 then
        ObjectHideSubObjectPermanently( self, "CLOAK02", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN02", false )
    elseif cloak <= 0.75 then
        ObjectHideSubObjectPermanently( self, "CLOAK03", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN03", false )
    else
        ObjectHideSubObjectPermanently( self, "CLOAK04", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN04", false )
    end
end

function OnTookArcher01Created(self)
	ObjectHideSubObject( self, "ARROW", true )
	ObjectHideSubObjectPermanently( self, "ARROWNOCK_UP", true )
	ObjectHideSubObjectPermanently( self, "QUIVERUP", true )
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )

	ObjectHideSubObjectPermanently( self, "JACKET01", true )
	ObjectHideSubObjectPermanently( self, "JACKET02", true )
	ObjectHideSubObjectPermanently( self, "JACKET03", true )

	ObjectHideSubObjectPermanently( self, "PIPE", true )

	ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HEAD04", true )
	ObjectHideSubObjectPermanently( self, "HEAD05", true )
	ObjectHideSubObjectPermanently( self, "HEAD06", true )
	ObjectHideSubObjectPermanently( self, "HEAD07", true )
	ObjectHideSubObjectPermanently( self, "HEAD08", true )
	ObjectHideSubObjectPermanently( self, "HEAD09", true )

	ObjectHideSubObjectPermanently( self, "HAT01", true )
	ObjectHideSubObjectPermanently( self, "HAT02", true )
	ObjectHideSubObjectPermanently( self, "HAT03", true )


	ObjectHideSubObjectPermanently( self, "SATCHEL", true )


    local head         =    GetRandomNumber()
	local body         =    GetRandomNumber()
	local pipe         =    GetRandomNumber()
	local bag         =    GetRandomNumber()
	local hat         =    GetRandomNumber()

	if bag <= 0.50 then
        ObjectHideSubObjectPermanently( self, "SATCHEL", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

	if pipe <= 0.3 then
        ObjectHideSubObjectPermanently( self, "PIPE", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

	if body <= 0.333 then
        ObjectHideSubObjectPermanently( self, "JACKET01", false )
    elseif body <= 0.666 then
        ObjectHideSubObjectPermanently( self, "JACKET02", false )
     else
        ObjectHideSubObjectPermanently( self, "JACKET03", false )
    end

    if head <= 0.2 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head <= 0.4 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    elseif head <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    elseif head <= 0.6 then
        ObjectHideSubObjectPermanently( self, "HEAD05", false )
    elseif head <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEAD06", false )
    elseif head <= 0.8 then
        ObjectHideSubObjectPermanently( self, "HEAD07", false )
    elseif head <= 0.9 then
        ObjectHideSubObjectPermanently( self, "HEAD08", false )
	else
        ObjectHideSubObjectPermanently( self, "HEAD09", false )
    end

    if hat <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HAT01", false )
    elseif hat <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HAT02", false )
	else
        ObjectHideSubObjectPermanently( self, "HAT03", false )
    end

end

function OnTookArcher02Created(self)
	ObjectHideSubObject( self, "ARROW", true )
	ObjectHideSubObjectPermanently( self, "ARROWNOCK_UP", true )
	ObjectHideSubObjectPermanently( self, "QUIVERUP", true )
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )

	ObjectHideSubObjectPermanently( self, "NOSLEEVE01", true )
	ObjectHideSubObjectPermanently( self, "NOSLEEVE02", true )
	ObjectHideSubObjectPermanently( self, "NOSLEEVE03", true )

	ObjectHideSubObjectPermanently( self, "PIPE", true )

	ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HEAD04", true )
	ObjectHideSubObjectPermanently( self, "HEAD05", true )
	ObjectHideSubObjectPermanently( self, "HEAD06", true )
	ObjectHideSubObjectPermanently( self, "HEAD07", true )
	ObjectHideSubObjectPermanently( self, "HEAD08", true )
	ObjectHideSubObjectPermanently( self, "HEAD09", true )

	ObjectHideSubObjectPermanently( self, "HAT01", true )
	ObjectHideSubObjectPermanently( self, "HAT02", true )
	ObjectHideSubObjectPermanently( self, "HAT03", true )


	ObjectHideSubObjectPermanently( self, "SATCHEL", true )


    local head         =    GetRandomNumber()
	local body         =    GetRandomNumber()
	local pipe         =    GetRandomNumber()
	local bag         =    GetRandomNumber()
	local hat         =    GetRandomNumber()

	if bag <= 0.50 then
        ObjectHideSubObjectPermanently( self, "SATCHEL", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

	if pipe <= 0.3 then
        ObjectHideSubObjectPermanently( self, "PIPE", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

	if body <= 0.333 then
        ObjectHideSubObjectPermanently( self, "NOSLEEVE01", false )
    elseif body <= 0.666 then
        ObjectHideSubObjectPermanently( self, "NOSLEEVE02", false )
     else
        ObjectHideSubObjectPermanently( self, "NOSLEEVE03", false )
    end

    if head <= 0.2 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head <= 0.4 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    elseif head <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    elseif head <= 0.6 then
        ObjectHideSubObjectPermanently( self, "HEAD05", false )
    elseif head <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEAD06", false )
    elseif head <= 0.8 then
        ObjectHideSubObjectPermanently( self, "HEAD07", false )
    elseif head <= 0.9 then
        ObjectHideSubObjectPermanently( self, "HEAD08", false )
	else
        ObjectHideSubObjectPermanently( self, "HEAD09", false )
    end

    if hat <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HAT01", false )
    elseif hat <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HAT02", false )
	else
        ObjectHideSubObjectPermanently( self, "HAT03", false )
    end

end

function OnTookArcher03Created(self)
	ObjectHideSubObject( self, "ARROW", true )
	ObjectHideSubObjectPermanently( self, "ARROWNOCK_UP", true )
	ObjectHideSubObjectPermanently( self, "QUIVERUP", true )
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )

	ObjectHideSubObjectPermanently( self, "SHIRT01", true )
	ObjectHideSubObjectPermanently( self, "SHIRT02", true )
	ObjectHideSubObjectPermanently( self, "SHIRT03", true )

	ObjectHideSubObjectPermanently( self, "PIPE", true )

	ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HEAD04", true )
	ObjectHideSubObjectPermanently( self, "HEAD05", true )
	ObjectHideSubObjectPermanently( self, "HEAD06", true )
	ObjectHideSubObjectPermanently( self, "HEAD07", true )
	ObjectHideSubObjectPermanently( self, "HEAD08", true )
	ObjectHideSubObjectPermanently( self, "HEAD09", true )

	ObjectHideSubObjectPermanently( self, "HAT01", true )
	ObjectHideSubObjectPermanently( self, "HAT02", true )
	ObjectHideSubObjectPermanently( self, "HAT03", true )


	ObjectHideSubObjectPermanently( self, "SATCHEL", true )


    local head         =    GetRandomNumber()
	local body         =    GetRandomNumber()
	local pipe         =    GetRandomNumber()
	local bag         =    GetRandomNumber()
	local hat         =    GetRandomNumber()

	if bag <= 0.50 then
        ObjectHideSubObjectPermanently( self, "SATCHEL", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

	if pipe <= 0.3 then
        ObjectHideSubObjectPermanently( self, "PIPE", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

	if body <= 0.333 then
        ObjectHideSubObjectPermanently( self, "SHIRT01", false )
    elseif body <= 0.666 then
        ObjectHideSubObjectPermanently( self, "SHIRT02", false )
     else
        ObjectHideSubObjectPermanently( self, "SHIRT03", false )
    end

    if head <= 0.2 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head <= 0.4 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    elseif head <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    elseif head <= 0.6 then
        ObjectHideSubObjectPermanently( self, "HEAD05", false )
    elseif head <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEAD06", false )
    elseif head <= 0.8 then
        ObjectHideSubObjectPermanently( self, "HEAD07", false )
    elseif head <= 0.9 then
        ObjectHideSubObjectPermanently( self, "HEAD08", false )
	else
        ObjectHideSubObjectPermanently( self, "HEAD09", false )
    end

    if hat <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HAT01", false )
    elseif hat <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HAT02", false )
	else
        ObjectHideSubObjectPermanently( self, "HAT03", false )
    end

end

function OnBreelandTownsguardCreated(self)
	ObjectHideSubObject( self, "ARROW", true )
	ObjectHideSubObject( self, "ARROWNOCKUP", true )
	ObjectHideSubObject( self, "QUIVERUP", true )
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )

	ObjectHideSubObjectPermanently( self, "BODY01", true )
	ObjectHideSubObjectPermanently( self, "BODY02", true )
	ObjectHideSubObjectPermanently( self, "BODY03", true )
	ObjectHideSubObjectPermanently( self, "BODY04", true )

	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HEAD04", true )
	ObjectHideSubObjectPermanently( self, "HEAD05", true )

	ObjectHideSubObjectPermanently( self, "HELMET01", true )
	ObjectHideSubObjectPermanently( self, "HELMET02", true )
	ObjectHideSubObjectPermanently( self, "HELMET03", true )

	ObjectHideSubObjectPermanently( self, "LEGS01", true )
    ObjectHideSubObjectPermanently( self, "LEGS02", true )


    local head         =    GetRandomNumber()
	local body         =    GetRandomNumber()
	local legs         =    GetRandomNumber()
	local helm         =    GetRandomNumber()

	if legs <= 0.50 then
        ObjectHideSubObjectPermanently( self, "LEGS01", false )
     else
        ObjectHideSubObjectPermanently( self, "LEGS02", false )
    end

	if helm <= 0.333 then
        ObjectHideSubObjectPermanently( self, "HELMET01", false )
    elseif helm <= 0.666 then
        ObjectHideSubObjectPermanently( self, "HELMET02", false )
     else
        ObjectHideSubObjectPermanently( self, "HELMET03", false )
    end

	if head <= 0.2 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.4 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head <= 0.6 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    elseif head <= 0.8 then
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
	else
        ObjectHideSubObjectPermanently( self, "HEAD05", false )
    end

	if body <= 0.25 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
	elseif body <= 0.50 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
	elseif body <= 0.75 then
        ObjectHideSubObjectPermanently( self, "BODY03", false )
     else
        ObjectHideSubObjectPermanently( self, "BODY04", false )
    end

end

function OnChetwoodHunterCreated(self)
	-- upgrade objects
	ObjectHideSubObject( self, "ARROWU", true )
	ObjectHideSubObject( self, "QARROWU", true )
	-- body
	ObjectHideSubObjectPermanently( self, "BODY01", true )
	ObjectHideSubObjectPermanently( self, "BODY02", true )
	ObjectHideSubObjectPermanently( self, "BODY03", true )

	ObjectHideSubObjectPermanently( self, "ARMS01", true )
	ObjectHideSubObjectPermanently( self, "ARMS02", true )
	ObjectHideSubObjectPermanently( self, "ARMS03", true )


	-- decorative objects

	ObjectHideSubObjectPermanently( self, "BELT01", true )
	ObjectHideSubObjectPermanently( self, "BELT02", true )
	
	ObjectHideSubObjectPermanently( self, "QUIVER01", true )
	ObjectHideSubObjectPermanently( self, "QUIVER02", true )

	ObjectHideSubObjectPermanently( self, "POUCH", true )

	ObjectHideSubObjectPermanently( self, "SEAX", true )

	ObjectHideSubObjectPermanently( self, "BAG", true )

	-- hat objects

	ObjectHideSubObjectPermanently( self, "HATR01", true )
	ObjectHideSubObjectPermanently( self, "HATR02", true )

	ObjectHideSubObjectPermanently( self, "HAT01", true )

	-- heads with hats
	ObjectHideSubObjectPermanently( self, "HEADH01", true )
	ObjectHideSubObjectPermanently( self, "HEADH02", true )
	ObjectHideSubObjectPermanently( self, "HEADH03", true )
	ObjectHideSubObjectPermanently( self, "HEADH04", true )
	ObjectHideSubObjectPermanently( self, "HEADH05", true )

	-- heads with nothing
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HEAD04", true )
	ObjectHideSubObjectPermanently( self, "HEAD05", true )


	-- assign random gear thing
	local belt = GetRandomNumber()
	local bag = GetRandomNumber()
	local pouch = GetRandomNumber()
	local seax = GetRandomNumber()
	local quiver = GetRandomNumber()

	if belt <= 0.5 then
		ObjectHideSubObjectPermanently( self, "BELT01", false )
    else
		ObjectHideSubObjectPermanently( self, "BELT02", false )
	end

	if seax <= 0.5 then
		ObjectHideSubObjectPermanently( self, "SEAX", false )
    else
		ObjectHideSubObjectPermanently( self, "NOTHING", false )
	end

	if pouch <= 0.5 then
		ObjectHideSubObjectPermanently( self, "POUCH", false )
    else
		ObjectHideSubObjectPermanently( self, "NOTHING", false )
	end
	
	if bag <= 0.5 then
		ObjectHideSubObjectPermanently( self, "BAG", false )
    else
		ObjectHideSubObjectPermanently( self, "NOTHING", false )
	end
	
	if quiver <= 0.5 then
		ObjectHideSubObjectPermanently( self, "QUIVER01", false )
    else
		ObjectHideSubObjectPermanently( self, "QUIVER02", false )
	end


	-- body
	local body = GetRandomNumber()

	if body <= 0.333 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
		ObjectHideSubObjectPermanently( self, "ARMS01", false )
    elseif body <= 0.666 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
		ObjectHideSubObjectPermanently( self, "ARMS02", false )
    else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
		ObjectHideSubObjectPermanently( self, "ARMS03", false )
    end

	--- randomize head, helm, and cloak assets---
	-- first "hunter" decides whether he has no headware or a hat(50% none 50% chance hat)
	-- second "faceNohat" chooses which head to use C:
	-- third "cap" decides which hat variation to use
	-- fourth "facehat" chooses which head for a hat to use C:

	local hunter = GetRandomNumber()
	local cap = GetRandomNumber()
	local faceNohat = GetRandomNumber()
	local facehat = GetRandomNumber()

	-- if he does not have a hat we choose normal heads
	if hunter <= 0.50 then
		if faceNohat <= 0.20 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
		elseif faceNohat <= 0.40 then
			ObjectHideSubObjectPermanently( self, "HEAD02", false )
		elseif faceNohat <= 0.60 then
			ObjectHideSubObjectPermanently( self, "HEAD03", false )
		elseif faceNohat <= 0.80 then
			ObjectHideSubObjectPermanently( self, "HEAD04", false )
		else
			ObjectHideSubObjectPermanently( self, "HEAD05", false )
		end

	-- if he does have a hat we choose hat heads
	else
	
		if cap <= 0.333 then
			ObjectHideSubObjectPermanently( self, "HAT01", false )
		elseif cap <= 0.666 then
			ObjectHideSubObjectPermanently( self, "HATR01", false )
		else
			ObjectHideSubObjectPermanently( self, "HATR02", false )
		end
		
		if cap <= 0.5 then
        ObjectHideSubObjectPermanently( self, "CAP01", false )
		else
			ObjectHideSubObjectPermanently( self, "CAP02", false )
		end
		
		if facehat <= 0.20 then
        ObjectHideSubObjectPermanently( self, "HEADH01", false )
		elseif facehat <= 0.40 then
			ObjectHideSubObjectPermanently( self, "HEADH02", false )
		elseif facehat <= 0.60 then
			ObjectHideSubObjectPermanently( self, "HEADH03", false )
		elseif facehat <= 0.80 then
			ObjectHideSubObjectPermanently( self, "HEADH04", false )
		else
			ObjectHideSubObjectPermanently( self, "HEADH05", false )
		end
		
	end

end

function OnGlorfindelCreated(self)
    ObjectHideSubObjectPermanently( self, "HELMET", true )
    ObjectHideSubObjectPermanently( self, "HEADHELM", true )
    ObjectHideSubObjectPermanently( self, "HAIRHELM", true )

    ObjectHideSubObjectPermanently( self, "BANGS", true )
    ObjectHideSubObjectPermanently( self, "HAIR", true )
    ObjectHideSubObjectPermanently( self, "HEAD", true )

    local head 			=   GetRandomNumber()

    if head <= 0.40 then
        ObjectHideSubObjectPermanently( self, "HELMET", false )
		ObjectHideSubObjectPermanently( self, "HEADHELM", false )
		ObjectHideSubObjectPermanently( self, "HAIRHELM", false )
     else
        ObjectHideSubObjectPermanently( self, "BANGS", false )
		ObjectHideSubObjectPermanently( self, "HAIR", false )
		ObjectHideSubObjectPermanently( self, "HEAD", false )
    end
end

function OnGlorfindelCampaignCreated(self)
    ObjectHideSubObjectPermanently( self, "HELMET", true )
    ObjectHideSubObjectPermanently( self, "HEADHELM", true )
    ObjectHideSubObjectPermanently( self, "HAIRHELM", true )
end

function OnRivendellBannerElfCreated(self)

	ObjectHideSubObjectPermanently( self, "QUIVERHASW", true )
	ObjectHideSubObjectPermanently( self, "BNR01", true )
	ObjectHideSubObjectPermanently( self, "BNR02", true )
	ObjectHideSubObjectPermanently( self, "BNR03", true )

    ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )

	ObjectHideSubObjectPermanently( self, "HORSE01", true )
	ObjectHideSubObjectPermanently( self, "HORSE02", true )
	ObjectHideSubObjectPermanently( self, "HORSE03", true )
	ObjectHideSubObjectPermanently( self, "HORSE04", true )
	ObjectHideSubObjectPermanently( self, "TAIL01", true )
	ObjectHideSubObjectPermanently( self, "TAIL02", true )
	ObjectHideSubObjectPermanently( self, "TAIL03", true )
	ObjectHideSubObjectPermanently( self, "TAIL04", true )


    local horse         =    GetRandomNumber()
    local head         =    GetRandomNumber()
	local banner         =    GetRandomNumber()

	if head <= 0.333 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.666 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
	else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

	if banner <= 0.4 then
        ObjectHideSubObjectPermanently( self, "BNR01", false )
	elseif banner <= 0.8 then
        ObjectHideSubObjectPermanently( self, "BNR02", false )
	else
        ObjectHideSubObjectPermanently( self, "BNR03", false )
    end

	if horse <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HORSE01", false )
	ObjectHideSubObjectPermanently( self, "TAIL01", true )
	elseif horse <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HORSE02", false )
	ObjectHideSubObjectPermanently( self, "TAIL02", true )
	elseif horse <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HORSE03", false )
	ObjectHideSubObjectPermanently( self, "TAIL03", true )
     else
        ObjectHideSubObjectPermanently( self, "HORSE04", false )
	ObjectHideSubObjectPermanently( self, "TAIL04", true )
    end
end

function OnRivendellSwordElfCreatedDorm(self)
    ObjectHideSubObjectPermanently( self, "DORMHEAD01", true )
	ObjectHideSubObjectPermanently( self, "DORMHEAD02", true )
    ObjectHideSubObjectPermanently( self, "DORMHEAD03", true )
    ObjectHideSubObjectPermanently( self, "DORMHEAD04", true )
    ObjectHideSubObjectPermanently( self, "DORMHEAD05", true )
    ObjectHideSubObjectPermanently( self, "DORMHEAD06", true )

    local head         =    GetRandomNumber()

    if head <= 0.17 then
        ObjectHideSubObjectPermanently( self, "DORMHEAD01", false )
    elseif head <= 0.34 then
        ObjectHideSubObjectPermanently( self, "DORMHEAD02", false )
    elseif head <= 0.51 then
        ObjectHideSubObjectPermanently( self, "DORMHEAD03", false )
    elseif head <= 0.68 then
        ObjectHideSubObjectPermanently( self, "DORMHEAD04", false )
    elseif head <= 0.85 then
        ObjectHideSubObjectPermanently( self, "DORMHEAD05", false )
     else
        ObjectHideSubObjectPermanently( self, "DORMHEAD06", false )
    end
end

function OnRivendellSwordElfCreated(self)
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )

	ObjectHideSubObjectPermanently( self, "BODY01", true )
	ObjectHideSubObjectPermanently( self, "BODY02", true )
	ObjectHideSubObjectPermanently( self, "BODY03", true )

    ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "HEAD04", true )
    ObjectHideSubObjectPermanently( self, "HEAD05", true )
    ObjectHideSubObjectPermanently( self, "HEAD06", true )
	ObjectHideSubObjectPermanently( self, "HEAD01HA", true )
	ObjectHideSubObjectPermanently( self, "HEAD02HA", true )
    ObjectHideSubObjectPermanently( self, "HEAD02HA01", true )

    local head         =    GetRandomNumber()
	local body         =    GetRandomNumber()
	local helmet	   =	GetRandomNumber()

    if head <= 0.17 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.34 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head <= 0.51 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    elseif head <= 0.68 then
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    elseif head <= 0.85 then
        ObjectHideSubObjectPermanently( self, "HEAD05", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD06", false )
    end

	if helmet <= 0.333 then
        ObjectHideSubObjectPermanently( self, "HEAD01HA", false )
    elseif helmet <= 0.666 then
        ObjectHideSubObjectPermanently( self, "HEAD02HA", false )
	else
        ObjectHideSubObjectPermanently( self, "HEAD02HA01", false )
    end

	if body <= 0.333 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif body <= 0.666 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
	else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
    end

end

function OnRivendellBowElfCreated(self)
	ObjectHideSubObject( self, "ARROWNOCKSW", true )
	ObjectHideSubObject( self, "QUIVERSW", true )
	ObjectHideSubObject( self, "QUIVERHASW", true )
	ObjectHideSubObjectPermanently( self, "BODY01", true )
	ObjectHideSubObjectPermanently( self, "BODY02", true )
	ObjectHideSubObjectPermanently( self, "BODY03", true )

    ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "HEAD04", true )
    ObjectHideSubObjectPermanently( self, "HEAD05", true )
    ObjectHideSubObjectPermanently( self, "HEAD06", true )
	ObjectHideSubObjectPermanently( self, "HEAD01HA", true )
	ObjectHideSubObjectPermanently( self, "HEAD02HA", true )
    ObjectHideSubObjectPermanently( self, "HEAD02HA01", true )

    local head         =    GetRandomNumber()
	local body         =    GetRandomNumber()
	local helmet	   =	GetRandomNumber()

    if head <= 0.17 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.34 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head <= 0.51 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    elseif head <= 0.68 then
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    elseif head <= 0.85 then
        ObjectHideSubObjectPermanently( self, "HEAD05", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD06", false )
    end

	if helmet <= 0.333 then
        ObjectHideSubObjectPermanently( self, "HEAD01HA", false )
    elseif helmet <= 0.666 then
        ObjectHideSubObjectPermanently( self, "HEAD02HA", false )
	else
        ObjectHideSubObjectPermanently( self, "HEAD02HA01", false )
    end

	if body <= 0.333 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif body <= 0.666 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
	else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
    end
end

function OnRivendellWarriorCreated(self)
	ObjectHideSubObject( self, "ARROW", true )
	ObjectHideSubObject( self, "ARROWNOCKUP", true )
	ObjectHideSubObject( self, "QUIVERUP", true )
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
	ObjectHideSubObjectPermanently( self, "BANNER01", true )
	ObjectHideSubObjectPermanently( self, "BANNER02", true )
	ObjectHideSubObjectPermanently( self, "BANNER03", true )

	ObjectHideSubObjectPermanently( self, "REGELF01", true )
	ObjectHideSubObjectPermanently( self, "REGELF02", true )
	ObjectHideSubObjectPermanently( self, "REGELF03", true )
	ObjectHideSubObjectPermanently( self, "REGELF04", true )
	ObjectHideSubObjectPermanently( self, "HAELF01", true )
	ObjectHideSubObjectPermanently( self, "HAELF02", true )
	ObjectHideSubObjectPermanently( self, "HAELF03", true )
	ObjectHideSubObjectPermanently( self, "HAELF04", true )

    ObjectHideSubObjectPermanently( self, "HEADBLACK", true )
	ObjectHideSubObjectPermanently( self, "HEADBLACKHA", true )
    ObjectHideSubObjectPermanently( self, "HEADBLACK1", true )
    ObjectHideSubObjectPermanently( self, "HEADBLACK1HA", true )
    ObjectHideSubObjectPermanently( self, "HEADBLACK2", true )
    ObjectHideSubObjectPermanently( self, "HEADBLACK2HA", true )
    ObjectHideSubObjectPermanently( self, "HEADBLACK3", true )
    ObjectHideSubObjectPermanently( self, "HEADBLACK3HA", true )
	ObjectHideSubObjectPermanently( self, "HEADBROWN", true )
    ObjectHideSubObjectPermanently( self, "HEADBROWN1", true )
    ObjectHideSubObjectPermanently( self, "HEADBROWN1HA", true )
	ObjectHideSubObjectPermanently( self, "HEADBROWNHA", true )
	ObjectHideSubObjectPermanently( self, "HEADGRAY", true )
    ObjectHideSubObjectPermanently( self, "HEADGRAY1", true )
    ObjectHideSubObjectPermanently( self, "HEADGRAY1HA", true )
	ObjectHideSubObjectPermanently( self, "HEADGRAYHA", true )

    local head         =    GetRandomNumber()
	local body         =    GetRandomNumber()
	local banner         =    GetRandomNumber()

    if head <= 0.1 then
        ObjectHideSubObjectPermanently( self, "HEADBLACK", false )
		ObjectHideSubObjectPermanently( self, "HEADBLACKHA", false )
    elseif head <= 0.2 then
        ObjectHideSubObjectPermanently( self, "HEADBLACK1", false )
		ObjectHideSubObjectPermanently( self, "HEADBLACK1HA", false )
	elseif head <= 0.4 then
        ObjectHideSubObjectPermanently( self, "HEADBLACK2", false )
		ObjectHideSubObjectPermanently( self, "HEADBLACK2HA", false )
	elseif head <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HEADBLACK3", false )
		ObjectHideSubObjectPermanently( self, "HEADBLACK3HA", false )
	elseif head <= 0.6 then
        ObjectHideSubObjectPermanently( self, "HEADBROWN", false )
		ObjectHideSubObjectPermanently( self, "HEADBROWNHA", false )
	elseif head <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEADBROWN1", false )
		ObjectHideSubObjectPermanently( self, "HEADBROWN1HA", false )
	elseif head <= 0.8 then
        ObjectHideSubObjectPermanently( self, "HEADGRAY", false )
		ObjectHideSubObjectPermanently( self, "HEADGRAYHA", false )
     else
        ObjectHideSubObjectPermanently( self, "HEADGRAY1", false )
		ObjectHideSubObjectPermanently( self, "HEADGRAY1HA", false )
    end

	if body <= 0.25 then
        ObjectHideSubObjectPermanently( self, "REGELF01", false )
		ObjectHideSubObjectPermanently( self, "HAELF01", false )
	elseif body <= 0.50 then
        ObjectHideSubObjectPermanently( self, "REGELF02", false )
		ObjectHideSubObjectPermanently( self, "HAELF02", false )
	elseif body <= 0.75 then
        ObjectHideSubObjectPermanently( self, "REGELF03", false )
		ObjectHideSubObjectPermanently( self, "HAELF03", false )
     else
        ObjectHideSubObjectPermanently( self, "REGELF04", false )
		ObjectHideSubObjectPermanently( self, "HAELF04", false )
    end

	if banner <= 0.4 then
        ObjectHideSubObjectPermanently( self, "BANNER01", false )
	elseif banner <= 0.8 then
        ObjectHideSubObjectPermanently( self, "BANNER02", false )
     else
        ObjectHideSubObjectPermanently( self, "BANNER03", false )
    end

end

function OnRivendellWarriorMountCreated(self)
	ObjectHideSubObjectPermanently( self, "BODY01", true )
	ObjectHideSubObjectPermanently( self, "BODY02", true )
	ObjectHideSubObjectPermanently( self, "BODY03", true )

    ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "HEAD04", true )
    ObjectHideSubObjectPermanently( self, "HEAD05", true )
    ObjectHideSubObjectPermanently( self, "HEAD06", true )
	ObjectHideSubObjectPermanently( self, "HEAD01HA", true )
	ObjectHideSubObjectPermanently( self, "HEAD02HA", true )
    ObjectHideSubObjectPermanently( self, "HEAD02HA01", true )

	ObjectHideSubObjectPermanently( self, "HORSE01", true )
	ObjectHideSubObjectPermanently( self, "HORSE02", true )
	ObjectHideSubObjectPermanently( self, "HORSE03", true )
	ObjectHideSubObjectPermanently( self, "HORSE04", true )


    local horse         =    GetRandomNumber()
    local head         =    GetRandomNumber()
	local body         =    GetRandomNumber()
	local helmet	   =	GetRandomNumber()


	if horse <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HORSE01", false )
	elseif horse <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HORSE02", false )
	elseif horse <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HORSE03", false )
     else
        ObjectHideSubObjectPermanently( self, "HORSE04", false )
    end

    if head <= 0.17 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.34 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head <= 0.51 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    elseif head <= 0.68 then
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    elseif head <= 0.85 then
        ObjectHideSubObjectPermanently( self, "HEAD05", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD06", false )
    end

	if helmet <= 0.333 then
        ObjectHideSubObjectPermanently( self, "HEAD01HA", false )
    elseif helmet <= 0.666 then
        ObjectHideSubObjectPermanently( self, "HEAD02HA", false )
	else
        ObjectHideSubObjectPermanently( self, "HEAD02HA01", false )
    end
end

function OnSentinelWoodyEndCreated(self)
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )

    ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )


    local head         =    GetRandomNumber()
	local body         =    GetRandomNumber()
	local helmet	   =	GetRandomNumber()

    if head <= 0.333 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.666 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end
end

function OnLANoldorBannerCreated(self)
	ObjectHideSubObject( self, "ARROW", true )
	ObjectHideSubObject( self, "ARROWNOCKUP", true )
	ObjectHideSubObject( self, "QUIVERUP", true )
	ObjectHideSubObject( self, "SHEATHED", true )
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )

    -- ObjectHideSubObjectPermanently( self, "HEADBLACK", true )
	-- ObjectHideSubObjectPermanently( self, "HEADBLACKHA", true )
    -- ObjectHideSubObjectPermanently( self, "HEADBLACK1", true )
    -- ObjectHideSubObjectPermanently( self, "HEADBLACK1HA", true )
    -- ObjectHideSubObjectPermanently( self, "HEADBLACK2", true )
    -- ObjectHideSubObjectPermanently( self, "HEADBLACK2HA", true )
    -- ObjectHideSubObjectPermanently( self, "HEADBLACK3", true )
    -- ObjectHideSubObjectPermanently( self, "HEADBLACK3HA", true )
	-- ObjectHideSubObjectPermanently( self, "HEADBROWN", true )
    -- ObjectHideSubObjectPermanently( self, "HEADBROWN1", true )
    -- ObjectHideSubObjectPermanently( self, "HEADBROWN1HA", true )
	-- ObjectHideSubObjectPermanently( self, "HEADBROWNHA", true )
	-- ObjectHideSubObjectPermanently( self, "HEADGRAY", true )
    -- ObjectHideSubObjectPermanently( self, "HEADGRAY1", true )
    -- ObjectHideSubObjectPermanently( self, "HEADGRAY1HA", true )
	-- ObjectHideSubObjectPermanently( self, "HEADGRAYHA", true )

    -- local head         =    GetRandomNumber()

    -- if head <= 0.1 then
        -- ObjectHideSubObjectPermanently( self, "HEADBLACK", false )
    -- elseif head <= 0.2 then
        -- ObjectHideSubObjectPermanently( self, "HEADBLACK1", false )
	-- elseif head <= 0.4 then
        -- ObjectHideSubObjectPermanently( self, "HEADBLACKHA", false )
	-- elseif head <= 0.5 then
        -- ObjectHideSubObjectPermanently( self, "HEADBLACK1HA", false )
	-- elseif head <= 0.6 then
        -- ObjectHideSubObjectPermanently( self, "HEADBROWN", false )
	-- elseif head <= 0.7 then
        -- ObjectHideSubObjectPermanently( self, "HEADBROWNHA", false )
	-- elseif head <= 0.8 then
        -- ObjectHideSubObjectPermanently( self, "HEADGRAY", false )
     -- else
        -- ObjectHideSubObjectPermanently( self, "HEADGRAYHA", false )
    -- end

end

function OnLANoldorCreated(self)
	ObjectHideSubObject( self, "ARROW", true )
	ObjectHideSubObject( self, "ARROWNOCKUP", true )
	ObjectHideSubObject( self, "QUIVERUP", true )
	ObjectHideSubObject( self, "SHEATHED", true )
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )

    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD01HA", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD02HA", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "HEAD03HA", true )

    local head         =    GetRandomNumber()

    if head <= 0.333 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
		ObjectHideSubObjectPermanently( self, "HEAD01HA", false )
    elseif head <= 0.666 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
		ObjectHideSubObjectPermanently( self, "HEAD02HA", false )
	else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
		ObjectHideSubObjectPermanently( self, "HEAD03HA", false )
    end

end

function OnRivendellNoldorCreated(self)
	ObjectHideSubObject( self, "ARROW", true )
	ObjectHideSubObject( self, "ARROWNOCKUP", true )
	ObjectHideSubObject( self, "QUIVERUP", true )
	ObjectHideSubObject( self, "SHEATHED", true )

    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD01HA", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD02HA", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "HEAD03HA", true )

    local head         =    GetRandomNumber()

    if head <= 0.333 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
		ObjectHideSubObjectPermanently( self, "HEAD01HA", false )
    elseif head <= 0.666 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
		ObjectHideSubObjectPermanently( self, "HEAD02HA", false )
	else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
		ObjectHideSubObjectPermanently( self, "HEAD03HA", false )
    end

end



function OnLorienInfantryBannerCreated(self)
	ObjectHideSubObjectPermanently( self, "Glow", true )
    ObjectHideSubObjectPermanently( self, "HEAD1", true )
    ObjectHideSubObjectPermanently( self, "HEAD2", true )
    ObjectHideSubObjectPermanently( self, "HEAD3", true )
    ObjectHideSubObjectPermanently( self, "BANNER1", true )
    ObjectHideSubObjectPermanently( self, "BANNER2", true )
    ObjectHideSubObjectPermanently( self, "BANNER3", true )

    local helmet         =    GetRandomNumber()
	local banner         =    GetRandomNumber()

    if helmet <= 0.333 then
        ObjectHideSubObjectPermanently( self, "HEAD1", false )
    elseif helmet <= 0.666 then
        ObjectHideSubObjectPermanently( self, "HEAD2", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD3", false )
    end

    if banner <= 0.333 then
        ObjectHideSubObjectPermanently( self, "BANNER1", false )
    elseif banner <= 0.666 then
        ObjectHideSubObjectPermanently( self, "BANNER2", false )
     else
        ObjectHideSubObjectPermanently( self, "BANNER3", false )
    end
end

function OnLorienWarriorCreated(self)
	ObjectHideSubObjectPermanently( self, "FORGED_SWORD", true )
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
	ObjectHideSubObjectPermanently( self, "FORGED_AXE", true )
	ObjectHideSubObjectPermanently( self, "MALLORNBOW", true )

	ObjectHideSubObjectPermanently( self, "BODY01", true )
	ObjectHideSubObjectPermanently( self, "BODY02", true )
	ObjectHideSubObjectPermanently( self, "BODY03", true )
	ObjectHideSubObjectPermanently( self, "BODY04", true )

    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )

    local helmet         =    GetRandomNumber()

	local body         =    GetRandomNumber()

	local sash         =    GetRandomNumber()

    if helmet <= 0.333 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif helmet <= 0.666 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

    if body <= 0.25 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif body <= 0.50 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
	elseif body <= 0.75 then
        ObjectHideSubObjectPermanently( self, "BODY03", false )
	else
        ObjectHideSubObjectPermanently( self, "BODY04", false )
    end

end

function OnMountedAmrothCreated(self)
	ObjectHideSubObjectPermanently( self, "CROWN01", true )
	ObjectHideSubObjectPermanently( self, "CROWN02", true )
	ObjectHideSubObjectPermanently( self, "CROWN03", true )

    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )

    ObjectHideSubObjectPermanently( self, "TAIL01", true )
    ObjectHideSubObjectPermanently( self, "TAIL02", true )
    ObjectHideSubObjectPermanently( self, "TAIL03", true )

    ObjectHideSubObjectPermanently( self, "HORSE01", true )
    ObjectHideSubObjectPermanently( self, "HORSE02", true )
    ObjectHideSubObjectPermanently( self, "HORSE03", true )

    ObjectHideSubObjectPermanently( self, "SHIELD", true )
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )

    local helmet         =    GetRandomNumber()

	local crown         =    GetRandomNumber()

	local horse         =    GetRandomNumber()

    if helmet <= 0.333 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif helmet <= 0.666 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

	if crown <= 0.333 then
        ObjectHideSubObjectPermanently( self, "CROWN01", false )
    elseif crown <= 0.666 then
        ObjectHideSubObjectPermanently( self, "CROWN02", false )
     else
        ObjectHideSubObjectPermanently( self, "CROWN03", false )
    end

	if horse <= 0.333 then
        ObjectHideSubObjectPermanently( self, "HORSE01", false )
        ObjectHideSubObjectPermanently( self, "TAIL01", false )
    elseif horse <= 0.666 then
        ObjectHideSubObjectPermanently( self, "HORSE02", false )
        ObjectHideSubObjectPermanently( self, "TAIL02", false )
     else
        ObjectHideSubObjectPermanently( self, "HORSE03", false )
        ObjectHideSubObjectPermanently( self, "TAIL03", false )
    end

end

function OnDismountedAmrothCreated(self)
	ObjectHideSubObjectPermanently( self, "CROWN01", true )
	ObjectHideSubObjectPermanently( self, "CROWN02", true )
	ObjectHideSubObjectPermanently( self, "CROWN03", true )

    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )

    local helmet         =    GetRandomNumber()

	local crown         =    GetRandomNumber()

    if helmet <= 0.333 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif helmet <= 0.666 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

	if crown <= 0.333 then
        ObjectHideSubObjectPermanently( self, "CROWN01", false )
    elseif crown <= 0.666 then
        ObjectHideSubObjectPermanently( self, "CROWN02", false )
     else
        ObjectHideSubObjectPermanently( self, "CROWN03", false )
    end

end

function OnNoldorKnightCreated(self)
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
	ObjectHideSubObjectPermanently( self, "SHIELD", true )

    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )

    local helmet         =    GetRandomNumber()

    if helmet <= 0.333 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif helmet <= 0.666 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

end

function OnLorienStalkerCreated(self)
	ObjectHideSubObject( self, "ARROW", true )
	ObjectHideSubObject( self, "ARROWNOCK", true )
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
end

function OnLorienMarchwardenBannerCreated(self)
	ObjectHideSubObject( self, "ARROW", true )
	ObjectHideSubObject( self, "ARROWNOCK", true )
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FORGED_AXE", true )
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
	ObjectHideSubObjectPermanently( self, "MALLORNBOW", true )

	ObjectHideSubObjectPermanently( self, "BNR01", true )
    ObjectHideSubObjectPermanently( self, "BNR02", true )
    ObjectHideSubObjectPermanently( self, "BNR03", true )
	ObjectHideSubObjectPermanently( self, "BNR04", true )
	ObjectHideSubObjectPermanently( self, "GALADBNR", true )



	local banner         =    GetRandomNumber()

	if banner <= 0.25 then
        ObjectHideSubObjectPermanently( self, "BNR01", false )
    elseif banner <= 0.50 then
        ObjectHideSubObjectPermanently( self, "BNR02", false )
	elseif banner <= 0.75 then
        ObjectHideSubObjectPermanently( self, "BNR03", false )
	else
        ObjectHideSubObjectPermanently( self, "BNR04", false )
    end

end

function OnKinnLaiMasterCreated(self)
	ObjectHideSubObject( self, "ARROW", true )
	ObjectHideSubObject( self, "ARROWNOCK", true )
	ObjectHideSubObjectPermanently( self, "FBR", true )
	ObjectHideSubObjectPermanently( self, "FBL", true )
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HEAD04", true )

    local head         =    GetRandomNumber()

    if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
	elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
	else
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    end

end

function OnLorienMarchwardenCreated(self)
	ObjectHideSubObject( self, "ARROW", true )
	ObjectHideSubObject( self, "ARROWNOCK", true )
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
	ObjectHideSubObjectPermanently( self, "MALLORNBOW", true )

	ObjectHideSubObjectPermanently( self, "MARCHBODY01", true )
	ObjectHideSubObjectPermanently( self, "MARCHARMSA01", true )
	ObjectHideSubObjectPermanently( self, "SASH01", true )

	ObjectHideSubObjectPermanently( self, "MARCHBODY02", true )
	ObjectHideSubObjectPermanently( self, "MARCHARMSA02", true )
	ObjectHideSubObjectPermanently( self, "SASH02", true )

	ObjectHideSubObjectPermanently( self, "CAPE01", true )
	ObjectHideSubObjectPermanently( self, "CAPE02", true )

    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )

    local helmet         =    GetRandomNumber()

	local body         =    GetRandomNumber()

	local cape         =    GetRandomNumber()

    if helmet <= 0.333 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif helmet <= 0.666 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

	if body <= 0.5 then
        ObjectHideSubObjectPermanently( self, "MARCHBODY01", false )
		ObjectHideSubObjectPermanently( self, "MARCHARMSA01", false )
		ObjectHideSubObjectPermanently( self, "SASH01", false )
     else
        ObjectHideSubObjectPermanently( self, "MARCHBODY02", false )
		ObjectHideSubObjectPermanently( self, "MARCHARMSA02", false )
		ObjectHideSubObjectPermanently( self, "SASH02", false )
    end

	if cape <= 0.5 then
        ObjectHideSubObjectPermanently( self, "CAPE01", false )
     else
        ObjectHideSubObjectPermanently( self, "CAPE02", false )
    end

end

function OnHaldirCreated (self)
	ObjectHideSubObjectPermanently( self, "CAPE01", true )
	ObjectHideSubObjectPermanently( self, "CAPE02", true )
	ObjectHideSubObjectPermanently( self, "CAPE02PIN", true )

	local cape         =    GetRandomNumber()

	if cape <= 0.5 then
        ObjectHideSubObjectPermanently( self, "CAPE01", false )
     else
        ObjectHideSubObjectPermanently( self, "CAPE02", false )
		ObjectHideSubObjectPermanently( self, "CAPE02PIN", false )
    end
end

function OnLorienSentinelCreated(self)
	ObjectHideSubObject( self, "ARROW", true )
	ObjectHideSubObject( self, "ARROWNOCK", true )
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
	ObjectHideSubObjectPermanently( self, "MALLORNBOW", true )

    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )

    local helmet         =    GetRandomNumber()

    if helmet <= 0.333 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif helmet <= 0.666 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

end

function OnPalaceGuardCreated(self)
	ObjectHideSubObject( self, "ARROW", true )
	ObjectHideSubObject( self, "ARROWNOCK", true )
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
	ObjectHideSubObjectPermanently( self, "MALLORNBOW", true )

	ObjectHideSubObjectPermanently( self, "BODY1", true )
	ObjectHideSubObjectPermanently( self, "BODY2", true )
	ObjectHideSubObjectPermanently( self, "BODY3", true )
	ObjectHideSubObjectPermanently( self, "BODYHA", true )

	ObjectHideSubObjectPermanently( self, "VAMBRACES", true )

	ObjectHideSubObjectPermanently( self, "SHAWL", true )

    ObjectHideSubObjectPermanently( self, "HEAD1", true )
    ObjectHideSubObjectPermanently( self, "HEAD2", true )
    ObjectHideSubObjectPermanently( self, "HEAD3", true )

    local helmet         =    GetRandomNumber()

	local body         =    GetRandomNumber()

	local sash         =    GetRandomNumber()

    if helmet <= 0.333 then
        ObjectHideSubObjectPermanently( self, "HEAD1", false )
    elseif helmet <= 0.666 then
        ObjectHideSubObjectPermanently( self, "HEAD2", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD3", false )
    end

	if body <= 0.333 then
        ObjectHideSubObjectPermanently( self, "BODY1", false )
    elseif body <= 0.666 then
        ObjectHideSubObjectPermanently( self, "BODY2", false )
     else
        ObjectHideSubObjectPermanently( self, "BODY3", false )
    end

	if sash <= 0.5 then
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
     else
        ObjectHideSubObjectPermanently( self, "SHAWL", false )
    end

end

function OnLorienNimrodelCreated(self)
	ObjectHideSubObject( self, "ARROW", true )
	ObjectHideSubObject( self, "ARROWNOCK", true )
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
	ObjectHideSubObjectPermanently( self, "MALLORNBOW", true )
	ObjectHideSubObjectPermanently( self, "SHIELD01", true )
	ObjectHideSubObjectPermanently( self, "BODY01", true )
	ObjectHideSubObjectPermanently( self, "BODY02", true )
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HORSE01", true )
    ObjectHideSubObjectPermanently( self, "HORSE02", true )
    ObjectHideSubObjectPermanently( self, "HORSE03", true )
    ObjectHideSubObjectPermanently( self, "HORSE04", true )
	ObjectHideSubObjectPermanently( self, "CLOAK01", true )
    ObjectHideSubObjectPermanently( self, "CLOAK02", true )
    ObjectHideSubObjectPermanently( self, "CLOAK03", true )
    ObjectHideSubObjectPermanently( self, "CLOAK04", true )
	ObjectHideSubObjectPermanently( self, "CLOAKHA01", true )
    ObjectHideSubObjectPermanently( self, "CLOAKHA02", true )
    ObjectHideSubObjectPermanently( self, "BANNER1", true )
    ObjectHideSubObjectPermanently( self, "BANNER2", true )
    ObjectHideSubObjectPermanently( self, "BANNER3", true )

	local banner         =    GetRandomNumber()
    local helmet         =    GetRandomNumber()
	local body         =    GetRandomNumber()
	local horse         =    GetRandomNumber()
	local cloak			=	GetRandomNumber()
	local armor         =    GetRandomNumber()

    if helmet <= 0.333 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif helmet <= 0.666 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

    if body <= 0.50 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
     else
        ObjectHideSubObjectPermanently( self, "BODY02", false )
    end

    if armor <= 0.50 then
        ObjectHideSubObjectPermanently( self, "CLOAKHA01", false )
     else
        ObjectHideSubObjectPermanently( self, "CLOAKHA02", false )
    end

	if horse <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HORSE01", false )
    elseif horse <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HORSE02", false )
    elseif horse <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HORSE03", false )
     else
        ObjectHideSubObjectPermanently( self, "HORSE04", false )
    end

	if cloak <= 0.25 then
        ObjectHideSubObjectPermanently( self, "CLOAK01", false )
    elseif cloak <= 0.50 then
        ObjectHideSubObjectPermanently( self, "CLOAK02", false )
    elseif cloak <= 0.75 then
        ObjectHideSubObjectPermanently( self, "CLOAK03", false )
     else
        ObjectHideSubObjectPermanently( self, "CLOAK04", false )
    end

    if banner <= 0.333 then
        ObjectHideSubObjectPermanently( self, "BANNER1", false )
    elseif banner <= 0.666 then
        ObjectHideSubObjectPermanently( self, "BANNER2", false )
     else
        ObjectHideSubObjectPermanently( self, "BANNER3", false )
    end

end

function OnLorienSilverTreeCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )

    ObjectHideSubObjectPermanently( self, "HEAD1", true )
    ObjectHideSubObjectPermanently( self, "HEAD2", true )
    ObjectHideSubObjectPermanently( self, "HEAD3", true )


    local helmet         =    GetRandomNumber()

    if helmet <= 0.333 then
        ObjectHideSubObjectPermanently( self, "HEAD1", false )
    elseif helmet <= 0.666 then
        ObjectHideSubObjectPermanently( self, "HEAD2", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD3", false )
    end

end

function OnLorienSilverTreeMeleeCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )

    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )


    local helmet         =    GetRandomNumber()

    if helmet <= 0.333 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif helmet <= 0.666 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

end

function OnLorienNandorCreated(self)
	ObjectHideSubObject( self, "ARROW", true )
	ObjectHideSubObject( self, "ARROWNOCK", true )
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )

    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )

	ObjectHideSubObjectPermanently( self, "HEADBAND01", true )
    ObjectHideSubObjectPermanently( self, "HEADBAND02", true )
    ObjectHideSubObjectPermanently( self, "HEADBAND03", true )

    local helmet         =    GetRandomNumber()

	local plume         =    GetRandomNumber()

    if helmet <= 0.333 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif helmet <= 0.666 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

	if plume <= 0.333 then
        ObjectHideSubObjectPermanently( self, "HEADBAND01", false )
    elseif plume <= 0.666 then
        ObjectHideSubObjectPermanently( self, "HEADBAND02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEADBAND03", false )
    end

end

function OnMirkwoodWoodmenCreated(self)
	-- ObjectHideSubObjectPermanently( self, "arrow", true )		-- This gets hidden pending the art being fixed.  it is the pre-new-archer-firing-pattern arrow
	ObjectHideSubObjectPermanently( self, "FireArowTip", true ) -- This gets hidden because the Fire Arrow upgrade turns it on.
	ObjectHideSubObjectPermanently( self, "Forged_Blade1", true )
	ObjectHideSubObjectPermanently( self, "Forged_Blade2", true )

	ObjectHideSubObjectPermanently( self, "QARROWU", true )
	ObjectHideSubObjectPermanently( self, "ARROWNOCKU", true )

	ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HEAD04", true )

	ObjectHideSubObjectPermanently( self, "BODY01", true )
    ObjectHideSubObjectPermanently( self, "BODY02", true )
	ObjectHideSubObjectPermanently( self, "BODY03", true )
    ObjectHideSubObjectPermanently( self, "BODY04", true )

	ObjectHideSubObjectPermanently( self, "HAT01", true )
    ObjectHideSubObjectPermanently( self, "HAT02", true )

	-- Various Gear
	ObjectHideSubObjectPermanently( self, "SMALLAXE01", true )
    ObjectHideSubObjectPermanently( self, "SMALLAXE02", true )
	ObjectHideSubObjectPermanently( self, "DAGGER", true )
    ObjectHideSubObjectPermanently( self, "KNIFE", true )
	ObjectHideSubObjectPermanently( self, "SEAX", true )

	local body          =    GetRandomNumber()
	local seax          =    GetRandomNumber()
	local knife          =    GetRandomNumber()
	local dagger          =    GetRandomNumber()
	local smallaxe          =    GetRandomNumber()
	local axe          =    GetRandomNumber()
	local hat          =    GetRandomNumber()
	local head          =    GetRandomNumber()

    if body <= 0.25 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif body <= 0.50 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
	elseif body <= 0.75 then
        ObjectHideSubObjectPermanently( self, "BODY03", false )
	else
        ObjectHideSubObjectPermanently( self, "BODY04", false )
    end

	if axe <= 0.5 then
        ObjectHideSubObjectPermanently( self, "AXE01", false )
    else
		ObjectHideSubObjectPermanently( self, "AXE02", false )
    end

	if smallaxe <= 0.3 then
        ObjectHideSubObjectPermanently( self, "SMALLAXE01", false )
    elseif smallaxe <= 0.6 then
        ObjectHideSubObjectPermanently( self, "SMALLAXE02", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

	if hat <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HAT01", false )
    elseif hat <= 0.6 then
        ObjectHideSubObjectPermanently( self, "HAT02", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    if seax <= 0.5 then
        ObjectHideSubObjectPermanently( self, "SEAX", false )
    else
		-- nothing
    end

	if knife <= 0.5 then
        ObjectHideSubObjectPermanently( self, "KNIFE", false )
    else
		-- nothing
    end

	if dagger <= 0.5 then
        ObjectHideSubObjectPermanently( self, "DAGGER", false )
    else
		-- nothing
    end

    if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
	elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
	else
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    end
end

function OnMirkwoodDruidsCreated(self)
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )

    local head         =    GetRandomNumber()

    if head <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

end

function OnRegularMirkwoodWarriorCreated(self)
    ObjectHideSubObjectPermanently( self, "QUIVER_U", true )
    ObjectHideSubObjectPermanently( self, "ARROWNOCKU", true )
	ObjectHideSubObject( self, "ARROWNOCK", true )
    ObjectHideSubObjectPermanently( self, "SILVERPAULTOP", true )
    ObjectHideSubObjectPermanently( self, "SILVERPAULBOT", true )
    ObjectHideSubObjectPermanently( self, "SILVERBODY", true )
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
    ObjectHideSubObjectPermanently( self, "SILVERHELMET", true )
    ObjectHideSubObjectPermanently( self, "HELMETHA", true )
    ObjectHideSubObjectPermanently( self, "HELMHED1", true )
    ObjectHideSubObjectPermanently( self, "HELMHED2", true )
    ObjectHideSubObjectPermanently( self, "HELMHED3", true )
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )

    local head         =    GetRandomNumber()

    if head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.6 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

end

function OnMirkwoodSlayerCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blades", true )
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "HELMETHA", true )

    local head         =    GetRandomNumber()

    if head <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

end

function OnMirkwoodRoyalBannerCreated(self)
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "BANNER01", true )
    ObjectHideSubObjectPermanently( self, "BANNER02", true )
    ObjectHideSubObjectPermanently( self, "BANNER03", true )
    ObjectHideSubObjectPermanently( self, "BANNER04", true )

    local head         =    GetRandomNumber()
    local banner         =    GetRandomNumber()

    if head <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

    if banner <= 0.25 then
        ObjectHideSubObjectPermanently( self, "BANNER01", false )
    elseif banner <= 0.50 then
        ObjectHideSubObjectPermanently( self, "BANNER02", false )
    elseif banner <= 0.75 then
        ObjectHideSubObjectPermanently( self, "BANNER03", false )
     else
        ObjectHideSubObjectPermanently( self, "BANNER04", false )
    end

end

function OnGildedGuardBannerCreated(self)
    ObjectHideSubObjectPermanently( self, "HELMET", true )
    ObjectHideSubObjectPermanently( self, "COIF", true )
end

function OnSilverBannerMirkwoodWarriorCreated(self)
    ObjectHideSubObjectPermanently( self, "ARROWHOLDERUP", true )
    ObjectHideSubObjectPermanently( self, "ARROWNOCKUP", true )
	ObjectHideSubObject( self, "ARROWNOCK", true )
    ObjectHideSubObjectPermanently( self, "PAULDRONTOP", true )
    ObjectHideSubObjectPermanently( self, "PAULDRONSBOTTOM", true )
    ObjectHideSubObjectPermanently( self, "BODY", true )
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
    ObjectHideSubObjectPermanently( self, "SILVERHELMET", true )
    ObjectHideSubObjectPermanently( self, "HELMET", true )
    ObjectHideSubObjectPermanently( self, "HELMHED1", true )
    ObjectHideSubObjectPermanently( self, "HELMHED2", true )
    ObjectHideSubObjectPermanently( self, "HELMHED3", true )
    ObjectHideSubObjectPermanently( self, "HEAD1", true )
    ObjectHideSubObjectPermanently( self, "HEAD2", true )
    ObjectHideSubObjectPermanently( self, "HEAD3", true )

    local head         =    GetRandomNumber()

    if head <= 0.1 then
        ObjectHideSubObjectPermanently( self, "HEAD1", false )
    elseif head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HEAD2", false )
    elseif head <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HEAD3", false )
    elseif head <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HELMHED1", false )
        ObjectHideSubObjectPermanently( self, "SILVERHELMET", false )
    elseif head <= 0.9 then
        ObjectHideSubObjectPermanently( self, "HELMHED2", false )
        ObjectHideSubObjectPermanently( self, "SILVERHELMET", false )
     else
        ObjectHideSubObjectPermanently( self, "HELMHED3", false )
        ObjectHideSubObjectPermanently( self, "SILVERHELMET", false )
    end

end

-- each gender has 2 w3d files so I seperated local entries required
function OnRegularMirkwoodSilvanBannerCreated(self)
-- weapons, gear, e.t.c. objects
    ObjectHideSubObjectPermanently( self, "QARROWSU", true )
    ObjectHideSubObjectPermanently( self, "ARROWNOCKU", true )
    ObjectHideSubObjectPermanently( self, "BOW01", true )
	ObjectHideSubObjectPermanently( self, "BOW02", true )
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )

-- normal heads
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "FACEMASK", true )
-- normal bodies
    ObjectHideSubObjectPermanently( self, "BODY01", true )
    ObjectHideSubObjectPermanently( self, "BODY02", true )
    ObjectHideSubObjectPermanently( self, "BODY03", true )
    ObjectHideSubObjectPermanently( self, "HOODDOWN01", true )
    ObjectHideSubObjectPermanently( self, "HOODDOWN02", true )
    ObjectHideSubObjectPermanently( self, "HOODDOWN03", true )
	ObjectHideSubObjectPermanently( self, "HOODUP01", true )
    ObjectHideSubObjectPermanently( self, "HOODUP02", true )
    ObjectHideSubObjectPermanently( self, "HOODUP03", true )
	ObjectHideSubObjectPermanently( self, "ARMS01", true )
    ObjectHideSubObjectPermanently( self, "ARMS02", true )

	ObjectHideSubObjectPermanently( self, "HOODDOWNHA", true )
	ObjectHideSubObjectPermanently( self, "HOODUPHA", true )

    local heads         =    GetRandomNumber()

    local body         =    GetRandomNumber()

	local hoodha         =    GetRandomNumber()

	local arms         =    GetRandomNumber()

    local bow         =    GetRandomNumber()

	local mask         =    GetRandomNumber()

    if heads <= 0.4 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif heads <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

    if body <= 0.16 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
        ObjectHideSubObjectPermanently( self, "HOODDOWN01", false )
    elseif body <= 0.33 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
        ObjectHideSubObjectPermanently( self, "HOODUP01", false )
     elseif body <= 0.50 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
        ObjectHideSubObjectPermanently( self, "HOODDOWN02", false )
	elseif body <= 0.66 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
        ObjectHideSubObjectPermanently( self, "HOODUP02", false )
	elseif body <= 0.83 then
        ObjectHideSubObjectPermanently( self, "BODY03", false )
        ObjectHideSubObjectPermanently( self, "HOODDOWN03", false )
	else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
        ObjectHideSubObjectPermanently( self, "HOODUP03", false )

    end

    if bow <= 0.5 then
        ObjectHideSubObjectPermanently( self, "BOW01", false )
     else
        ObjectHideSubObjectPermanently( self, "BOW02", false )
    end

	if hoodha <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HOODDOWNHA", false )
     else
        ObjectHideSubObjectPermanently( self, "HOODUPHA", false )
    end

	if arms <= 0.5 then
        ObjectHideSubObjectPermanently( self, "ARMS01", false )
     else
        ObjectHideSubObjectPermanently( self, "ARMS02", false )
    end

	if mask <= 0.5 then
        ObjectHideSubObjectPermanently( self, "FACEMASK", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end
end

function OnAvariWarriorsCreated(self)
-- weapons, gear, e.t.c. objects
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )

-- normal heads
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "HEAD04", true )

    local heads         =    GetRandomNumber()

    if heads <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif heads <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif heads <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    end
end

function OnRegularMirkwoodSilvanElfCreated(self)
-- weapons, gear, e.t.c. objects
    ObjectHideSubObjectPermanently( self, "QARROWSU", true )
    ObjectHideSubObjectPermanently( self, "ARROWNOCKU", true )
    ObjectHideSubObjectPermanently( self, "BOW01", true )
	ObjectHideSubObjectPermanently( self, "BOW02", true )
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )

-- normal heads
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "FACEMASK", true )
-- normal bodies
    ObjectHideSubObjectPermanently( self, "BODY01", true )
    ObjectHideSubObjectPermanently( self, "BODY02", true )
    ObjectHideSubObjectPermanently( self, "BODY03", true )
    ObjectHideSubObjectPermanently( self, "HOODDOWN01", true )
    ObjectHideSubObjectPermanently( self, "HOODDOWN02", true )
    ObjectHideSubObjectPermanently( self, "HOODDOWN03", true )
	ObjectHideSubObjectPermanently( self, "HOODUP01", true )
    ObjectHideSubObjectPermanently( self, "HOODUP02", true )
    ObjectHideSubObjectPermanently( self, "HOODUP03", true )
	ObjectHideSubObjectPermanently( self, "ARMS01", true )
    ObjectHideSubObjectPermanently( self, "ARMS02", true )

	ObjectHideSubObjectPermanently( self, "HOODDOWNHA", true )
	ObjectHideSubObjectPermanently( self, "HOODUPHA", true )

    local heads         =    GetRandomNumber()

    local body         =    GetRandomNumber()

	local hoodha         =    GetRandomNumber()

	local arms         =    GetRandomNumber()

    local bow         =    GetRandomNumber()

	local mask         =    GetRandomNumber()

    if heads <= 0.4 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif heads <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

    if body <= 0.16 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
        ObjectHideSubObjectPermanently( self, "HOODDOWN01", false )
    elseif body <= 0.33 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
        ObjectHideSubObjectPermanently( self, "HOODUP01", false )
     elseif body <= 0.50 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
        ObjectHideSubObjectPermanently( self, "HOODDOWN02", false )
	elseif body <= 0.66 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
        ObjectHideSubObjectPermanently( self, "HOODUP02", false )
	elseif body <= 0.83 then
        ObjectHideSubObjectPermanently( self, "BODY03", false )
        ObjectHideSubObjectPermanently( self, "HOODDOWN03", false )
	else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
        ObjectHideSubObjectPermanently( self, "HOODUP03", false )

    end

    if bow <= 0.5 then
        ObjectHideSubObjectPermanently( self, "BOW01", false )
     else
        ObjectHideSubObjectPermanently( self, "BOW02", false )
    end

	if hoodha <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HOODDOWNHA", false )
     else
        ObjectHideSubObjectPermanently( self, "HOODUPHA", false )
    end

	if arms <= 0.5 then
        ObjectHideSubObjectPermanently( self, "ARMS01", false )
     else
        ObjectHideSubObjectPermanently( self, "ARMS02", false )
    end

	if mask <= 0.5 then
        ObjectHideSubObjectPermanently( self, "FACEMASK", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end
end

function OnRegularMirkwoodSilvanRiderElfCreated(self)
-- weapons, gear, e.t.c. objects
    ObjectHideSubObjectPermanently( self, "QARROWSU", true )
    ObjectHideSubObjectPermanently( self, "ARROWNOCKU", true )
    ObjectHideSubObjectPermanently( self, "BOW01", true )
	ObjectHideSubObjectPermanently( self, "BOW02", true )
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )

-- normal heads
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "FACEMASK", true )
-- normal bodies
    ObjectHideSubObjectPermanently( self, "BODY01", true )
    ObjectHideSubObjectPermanently( self, "BODY02", true )
    ObjectHideSubObjectPermanently( self, "BODY03", true )
    ObjectHideSubObjectPermanently( self, "HOODDOWN01", true )
    ObjectHideSubObjectPermanently( self, "HOODDOWN02", true )
    ObjectHideSubObjectPermanently( self, "HOODDOWN03", true )

	-- horses
    ObjectHideSubObjectPermanently( self, "HORSE01", true )
    ObjectHideSubObjectPermanently( self, "HORSE02", true )
    ObjectHideSubObjectPermanently( self, "HORSE03", true )
	ObjectHideSubObjectPermanently( self, "HORSE04", true )

    local heads         =    GetRandomNumber()

    local body         =    GetRandomNumber()

    local bow         =    GetRandomNumber()

	local mask         =    GetRandomNumber()

	local horse         =    GetRandomNumber()

    if heads <= 0.4 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif heads <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

    if body <= 0.33 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
        ObjectHideSubObjectPermanently( self, "HOODDOWN01", false )
     elseif body <= 0.67 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
        ObjectHideSubObjectPermanently( self, "HOODDOWN02", false )
	else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
        ObjectHideSubObjectPermanently( self, "HOODDOWN03", false )
    end

	if horse <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HORSE01", false )
    elseif horse <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HORSE02", false )
    elseif horse <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HORSE03", false )
     else
        ObjectHideSubObjectPermanently( self, "HORSE04", false )
    end

    if bow <= 0.5 then
        ObjectHideSubObjectPermanently( self, "BOW01", false )
     else
        ObjectHideSubObjectPermanently( self, "BOW02", false )
    end

	if mask <= 0.5 then
        ObjectHideSubObjectPermanently( self, "FACEMASK", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end
end

function OnMirkwoodSilvanRiderBannerCreated(self)
-- weapons, gear, e.t.c. objects
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
	ObjectHideSubObjectPermanently( self, "ARMOR", true )

-- normal heads
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "FACEMASK", true )
-- normal bodies
    ObjectHideSubObjectPermanently( self, "BODY01", true )
    ObjectHideSubObjectPermanently( self, "BODY02", true )
    ObjectHideSubObjectPermanently( self, "BODY03", true )
    ObjectHideSubObjectPermanently( self, "BODYHA", true )
    ObjectHideSubObjectPermanently( self, "HOODDOWN01", true )
    ObjectHideSubObjectPermanently( self, "HOODDOWN02", true )
    ObjectHideSubObjectPermanently( self, "HOODDOWN03", true )
    ObjectHideSubObjectPermanently( self, "HOODDOWNHA", true )
    ObjectHideSubObjectPermanently( self, "ARMSHA", true )
    ObjectHideSubObjectPermanently( self, "LEGSHA", true )

	-- horses
    ObjectHideSubObjectPermanently( self, "HORSE01", true )
    ObjectHideSubObjectPermanently( self, "HORSE02", true )
    ObjectHideSubObjectPermanently( self, "HORSE03", true )
	ObjectHideSubObjectPermanently( self, "HORSE04", true )

    local heads         =    GetRandomNumber()

    local body         =    GetRandomNumber()

    local bow         =    GetRandomNumber()

	local mask         =    GetRandomNumber()

	local horse         =    GetRandomNumber()

    if heads <= 0.4 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif heads <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

    if body <= 0.33 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
        ObjectHideSubObjectPermanently( self, "HOODDOWN01", false )
     elseif body <= 0.67 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
        ObjectHideSubObjectPermanently( self, "HOODDOWN02", false )
	else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
        ObjectHideSubObjectPermanently( self, "HOODDOWN03", false )
    end

	if horse <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HORSE01", false )
    elseif horse <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HORSE02", false )
    elseif horse <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HORSE03", false )
     else
        ObjectHideSubObjectPermanently( self, "HORSE04", false )
    end

	if mask <= 0.5 then
        ObjectHideSubObjectPermanently( self, "FACEMASK", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end
end

-- each gender has 2 w3d files so I seperated local entries required
function OnRegularMirkwoodSilvanArcherCreated(self)
-- weapons, gear, e.t.c. objects
    ObjectHideSubObjectPermanently( self, "QUIVERHA", true )
    ObjectHideSubObjectPermanently( self, "ARROWQUIVUP", true )
    ObjectHideSubObjectPermanently( self, "ARROWNOCKUP", true )
    ObjectHideSubObjectPermanently( self, "BOW2", true )
    ObjectHideSubObjectPermanently( self, "BOW1", true )
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
-- regular ha objects
    ObjectHideSubObjectPermanently( self, "BODYMHOODHA", true )
	ObjectHideSubObjectPermanently( self, "LEGGUARDSM", true )
    ObjectHideSubObjectPermanently( self, "ARMSMHA", true )
    ObjectHideSubObjectPermanently( self, "HOODMHA", true )
    ObjectHideSubObjectPermanently( self, "BODYMHA", true )
    ObjectHideSubObjectPermanently( self, "HOODMDOWNHA", true )
-- female ha objects
    ObjectHideSubObjectPermanently( self, "BODYFHOODHA", true )
	ObjectHideSubObjectPermanently( self, "LEGGUARDSF", true )
    ObjectHideSubObjectPermanently( self, "ARMSFHA", true )
    ObjectHideSubObjectPermanently( self, "HOODFHA", true )
    ObjectHideSubObjectPermanently( self, "BODYFHA", true )
    ObjectHideSubObjectPermanently( self, "HOODFDOWNHA", true )
-- normal heads
    ObjectHideSubObjectPermanently( self, "HEADM1", true )
    ObjectHideSubObjectPermanently( self, "HEADM2", true )
    ObjectHideSubObjectPermanently( self, "HEADM3", true )
-- heads for hoods
    ObjectHideSubObjectPermanently( self, "HEADMHOOD1", true )
    ObjectHideSubObjectPermanently( self, "HEADMHOOD2", true )
    ObjectHideSubObjectPermanently( self, "HEADMHOOD3", true )
-- normal female heads
    ObjectHideSubObjectPermanently( self, "HEADF1", true )
    ObjectHideSubObjectPermanently( self, "HEADF2", true )
    ObjectHideSubObjectPermanently( self, "HEADF3", true )
-- female heads for hoods
    ObjectHideSubObjectPermanently( self, "HEADFHOOD1", true )
    ObjectHideSubObjectPermanently( self, "HEADFHOOD2", true )
    ObjectHideSubObjectPermanently( self, "HEADFHOOD3", true )
-- normal bodies
    ObjectHideSubObjectPermanently( self, "BODYM1", true )
    ObjectHideSubObjectPermanently( self, "BODYM2", true )
    ObjectHideSubObjectPermanently( self, "BODYM3", true )
    ObjectHideSubObjectPermanently( self, "HOODMDOWN1", true )
    ObjectHideSubObjectPermanently( self, "HOODMDOWN2", true )
    ObjectHideSubObjectPermanently( self, "HOODMDOWN3", true )
-- heads for bodies
    ObjectHideSubObjectPermanently( self, "BODYMHOOD1", true )
    ObjectHideSubObjectPermanently( self, "BODYMHOOD2", true )
    ObjectHideSubObjectPermanently( self, "BODYMHOOD3", true )
    ObjectHideSubObjectPermanently( self, "HOODM1", true )
    ObjectHideSubObjectPermanently( self, "HOODM2", true )
    ObjectHideSubObjectPermanently( self, "HOODM3", true )
-- normal female bodies
    ObjectHideSubObjectPermanently( self, "BODYF1", true )
    ObjectHideSubObjectPermanently( self, "BODYF2", true )
    ObjectHideSubObjectPermanently( self, "BODYF3", true )
    ObjectHideSubObjectPermanently( self, "HOODFDOWN1", true )
    ObjectHideSubObjectPermanently( self, "HOODFDOWN2", true )
    ObjectHideSubObjectPermanently( self, "HOODFDOWN3", true )
-- female heads for bodies
    ObjectHideSubObjectPermanently( self, "BODYFHOOD1", true )
    ObjectHideSubObjectPermanently( self, "BODYFHOOD2", true )
    ObjectHideSubObjectPermanently( self, "BODYFHOOD3", true )
    ObjectHideSubObjectPermanently( self, "HOODF1", true )
    ObjectHideSubObjectPermanently( self, "HOODF2", true )
    ObjectHideSubObjectPermanently( self, "HOODF3", true )

    local mheads1         =    GetRandomNumber()
    local mheads2         =    GetRandomNumber()
    local fheads1         =    GetRandomNumber()
    local fheads2         =    GetRandomNumber()

    local mbody1         =    GetRandomNumber()
    local mbody2         =    GetRandomNumber()
    local fbody1         =    GetRandomNumber()
    local fbody2         =    GetRandomNumber()

    local bow         =    GetRandomNumber()

    if mheads1 <= 0.4 then
        ObjectHideSubObjectPermanently( self, "HEADM1", false )
    elseif mheads1 <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEADM2", false )
     else
        ObjectHideSubObjectPermanently( self, "HEADM3", false )
    end

    if mheads2 <= 0.4 then
        ObjectHideSubObjectPermanently( self, "HEADMHOOD1", false )
    elseif mheads2 <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEADMHOOD2", false )
     else
        ObjectHideSubObjectPermanently( self, "HEADMHOOD3", false )
    end

    if fheads1 <= 0.4 then
        ObjectHideSubObjectPermanently( self, "HEADF1", false )
    elseif fheads1 <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEADF2", false )
     else
        ObjectHideSubObjectPermanently( self, "HEADF3", false )
    end

    if fheads2 <= 0.4 then
        ObjectHideSubObjectPermanently( self, "HEADFHOOD1", false )
    elseif fheads2 <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEADFHOOD2", false )
     else
        ObjectHideSubObjectPermanently( self, "HEADFHOOD3", false )
    end

    if mbody1 <= 0.4 then
        ObjectHideSubObjectPermanently( self, "BODYM1", false )
        ObjectHideSubObjectPermanently( self, "HOODMDOWN1", false )
    elseif mbody1 <= 0.7 then
        ObjectHideSubObjectPermanently( self, "BODYM2", false )
        ObjectHideSubObjectPermanently( self, "HOODMDOWN2", false )
     else
        ObjectHideSubObjectPermanently( self, "BODYM3", false )
        ObjectHideSubObjectPermanently( self, "HOODMDOWN3", false )
    end

    if mbody2 <= 0.4 then
        ObjectHideSubObjectPermanently( self, "BODYMHOOD1", false )
        ObjectHideSubObjectPermanently( self, "HOODM1", false )
    elseif mbody2 <= 0.7 then
        ObjectHideSubObjectPermanently( self, "BODYMHOOD2", false )
        ObjectHideSubObjectPermanently( self, "HOODM2", false )
     else
        ObjectHideSubObjectPermanently( self, "BODYMHOOD3", false )
        ObjectHideSubObjectPermanently( self, "HOODM3", false )
    end

    if fbody1 <= 0.4 then
        ObjectHideSubObjectPermanently( self, "BODYF1", false )
        ObjectHideSubObjectPermanently( self, "HOODFDOWN1", false )
    elseif fbody1 <= 0.7 then
        ObjectHideSubObjectPermanently( self, "BODYF2", false )
        ObjectHideSubObjectPermanently( self, "HOODFDOWN2", false )
     else
        ObjectHideSubObjectPermanently( self, "BODYF3", false )
        ObjectHideSubObjectPermanently( self, "HOODFDOWN3", false )
    end

    if fbody2 <= 0.4 then
        ObjectHideSubObjectPermanently( self, "BODYFHOOD1", false )
        ObjectHideSubObjectPermanently( self, "HOODF1", false )
    elseif fbody2 <= 0.7 then
        ObjectHideSubObjectPermanently( self, "BODYFHOOD2", false )
        ObjectHideSubObjectPermanently( self, "HOODF2", false )
     else
        ObjectHideSubObjectPermanently( self, "BODYFHOOD3", false )
        ObjectHideSubObjectPermanently( self, "HOODF3", false )
    end

    if bow <= 0.5 then
        ObjectHideSubObjectPermanently( self, "BOW1", false )
     else
        ObjectHideSubObjectPermanently( self, "BOW2", false )
    end
end

function OnElvenWarriorCreated(self)
	ObjectHideSubObject( self, "ARROW", true )
	ObjectHideSubObject( self, "ARROWNOCK", true )
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )

    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )

    local helmet         =    GetRandomNumber()

    if helmet <= 0.333 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif helmet <= 0.666 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

end

function OnIsengardLadderCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "Glow", true )
	ObjectHideSubObjectPermanently( self, "HELMET01", true )
	ObjectHideSubObjectPermanently( self, "HELMET01X", true )
	ObjectHideSubObjectPermanently( self, "HELMET02", true )
	ObjectHideSubObjectPermanently( self, "HELMET02X", true )
	ObjectHideSubObjectPermanently( self, "HELMET03", true )
	ObjectHideSubObjectPermanently( self, "HELMET03X", true )
	ObjectHideSubObjectPermanently( self, "SHIELD01", true )
	ObjectHideSubObjectPermanently( self, "SHIELD02", true )
	ObjectHideSubObjectPermanently( self, "GAUNTLET_S", true )

    local helmet         =    GetRandomNumber()
    local helmet2         =    GetRandomNumber()

    if helmet <= 0.333 then
        ObjectHideSubObjectPermanently( self, "HELMET01", false )
    elseif helmet <= 0.666 then
        ObjectHideSubObjectPermanently( self, "HELMET02", false )
     else
        ObjectHideSubObjectPermanently( self, "HELMET03", false )
    end

    if helmet2 <= 0.333 then
        ObjectHideSubObjectPermanently( self, "HELMET01X", false )
    elseif helmet2 <= 0.666 then
        ObjectHideSubObjectPermanently( self, "HELMET02X", false )
     else
        ObjectHideSubObjectPermanently( self, "HELMET03X", false )
    end
end

function OnIsengardArcherCreated(self)
	ObjectHideSubObject( self, "ARROWNOCK", true )
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
	ObjectHideSubObjectPermanently( self, "HA", true )
	ObjectHideSubObjectPermanently( self, "HELMET01", true )
	ObjectHideSubObjectPermanently( self, "HELMET02", true )
	ObjectHideSubObjectPermanently( self, "QUIVERA", true )
	ObjectHideSubObjectPermanently( self, "QUIVERB", true )

    local quiver         =    GetRandomNumber()
    local helmet         =    GetRandomNumber()

    if quiver <= 0.5 then
        ObjectHideSubObjectPermanently( self, "QUIVERA", false )
    else
        ObjectHideSubObjectPermanently( self, "QUIVERB", false )
    end
end

function OnIsengardBeserkerCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "TORCH", true )
	ObjectHideSubObjectPermanently( self, "CREST", true )
	ObjectHideSubObjectPermanently( self, "ARROWS", true )
end


function OnIsengardFighterCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "Glow", true )
	ObjectHideSubObjectPermanently( self, "HELMET01", true )
	ObjectHideSubObjectPermanently( self, "HELMET02", true )
	ObjectHideSubObjectPermanently( self, "SHIELD01", true )
	ObjectHideSubObjectPermanently( self, "SHIELD02", true )
	ObjectHideSubObjectPermanently( self, "GAUNTLET_S", true )

    local helmet         =    GetRandomNumber()
    local shield         =    GetRandomNumber()

    if helmet <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HELMET01", false )
    else
        ObjectHideSubObjectPermanently( self, "HELMET02", false )
    end

    if shield <= 0.50 then
        ObjectHideSubObjectPermanently( self, "SHIELD01", false )
    else
        ObjectHideSubObjectPermanently( self, "SHIELD02", false )
    end
end

function OnIsengardFighterLowPolyCreated(self)
	ObjectHideSubObject( self, "ARROWNOCK", true )
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "Glow", true )
	ObjectHideSubObjectPermanently( self, "SHIELD01", true )
	ObjectHideSubObjectPermanently( self, "SHIELD02", true )
	ObjectHideSubObjectPermanently( self, "HA", true )
	ObjectHideSubObjectPermanently( self, "QUIVERA", true )
	ObjectHideSubObjectPermanently( self, "QUIVERB", true )	

    local shield         =    GetRandomNumber()
	local quiver         =    GetRandomNumber()

    if shield <= 0.50 then
        ObjectHideSubObjectPermanently( self, "SHIELD01", false )
    else
        ObjectHideSubObjectPermanently( self, "SHIELD02", false )
    end
	
    if quiver <= 0.5 then
        ObjectHideSubObjectPermanently( self, "QUIVERA", false )
    else
        ObjectHideSubObjectPermanently( self, "QUIVERB", false )
    end	
end

function OnIsengardSwordsLowPolyCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "Glow", true )
	ObjectHideSubObjectPermanently( self, "SHIELD01", true )
	ObjectHideSubObjectPermanently( self, "SHIELD02", true )
	ObjectHideSubObjectPermanently( self, "HA", true )
	ObjectHideSubObjectPermanently( self, "GAUNTLET_S", true )	

    local shield         =    GetRandomNumber()
	local quiver         =    GetRandomNumber()

    if shield <= 0.50 then
        ObjectHideSubObjectPermanently( self, "SHIELD01", false )
    else
        ObjectHideSubObjectPermanently( self, "SHIELD02", false )
    end
	
    if quiver <= 0.5 then
        ObjectHideSubObjectPermanently( self, "QUIVERA", false )
    else
        ObjectHideSubObjectPermanently( self, "QUIVERB", false )
    end	
end

function OnIsengardShieldBearerCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "HELMETA", true )
	ObjectHideSubObjectPermanently( self, "HELMET02", true )
	ObjectHideSubObjectPermanently( self, "SHIELD01", true )
	ObjectHideSubObjectPermanently( self, "SHIELD02", true )
	ObjectHideSubObjectPermanently( self, "SHIELD03", true )
	ObjectHideSubObjectPermanently( self, "HA", true )

    local helmet         =    GetRandomNumber()
    local shield         =    GetRandomNumber()

    if helmet <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HELMETA", false )
    else
        ObjectHideSubObjectPermanently( self, "HELMET02", false )
    end

    if shield <= 0.33 then
        ObjectHideSubObjectPermanently( self, "SHIELD01", false )
    elseif shield <= 0.66 then
        ObjectHideSubObjectPermanently( self, "SHIELD02", false )
    else
        ObjectHideSubObjectPermanently( self, "SHIELD03", false )
    end
end

function OnIsengardScoutCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "Glow", true )
	ObjectHideSubObjectPermanently( self, "SHIELD01", true )
	ObjectHideSubObjectPermanently( self, "SHIELD02", true )
	ObjectHideSubObjectPermanently( self, "QUIVER01", true )
	ObjectHideSubObjectPermanently( self, "QUIVER02", true )

	local quiver         =    GetRandomNumber()
    local shield         =    GetRandomNumber()

    if quiver <= 0.5 then
        ObjectHideSubObjectPermanently( self, "QUIVER01", false )
    else
        ObjectHideSubObjectPermanently( self, "QUIVER02", false )
    end

	if shield <= 0.333 then
        ObjectHideSubObjectPermanently( self, "SHIELD01", false )
		ObjectGrantUpgrade( self, "Upgrade_AragornCostume_01" )
    elseif shield <= 0.666 then
        ObjectHideSubObjectPermanently( self, "SHIELD02", false )
		ObjectGrantUpgrade( self, "Upgrade_AragornCostume_01" )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end
end

function OnDeadIsengardScoutCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "Glow", true )
	ObjectHideSubObjectPermanently( self, "SHIELD01", true )
	ObjectHideSubObjectPermanently( self, "SHIELD02", true )
	ObjectHideSubObjectPermanently( self, "QUIVER01", true )
	ObjectHideSubObjectPermanently( self, "QUIVER02", true )
	ObjectHideSubObjectPermanently( self, "BOW", true )
	ObjectHideSubObjectPermanently( self, "SWORD01", true )
	ObjectHideSubObjectPermanently( self, "AXE", true )

	local quiver         =    GetRandomNumber()
    local shield         =    GetRandomNumber()

	if quiver <= 0.333 then
        ObjectHideSubObjectPermanently( self, "QUIVER01", false )
        ObjectHideSubObjectPermanently( self, "BOW", false )
    elseif quiver <= 0.666 then
        ObjectHideSubObjectPermanently( self, "QUIVER02", false )
        ObjectHideSubObjectPermanently( self, "BOW", false )
     else
        ObjectHideSubObjectPermanently( self, "SWORD01", false )
        ObjectHideSubObjectPermanently( self, "AXE", false )
    end

	if shield <= 0.333 then
        ObjectHideSubObjectPermanently( self, "SHIELD01", false )
    elseif shield <= 0.666 then
        ObjectHideSubObjectPermanently( self, "SHIELD02", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end
end

function OnIsengardScoutHobbitCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "Glow", true )
	ObjectHideSubObjectPermanently( self, "SHIELD01", true )
	ObjectHideSubObjectPermanently( self, "SHIELD02", true )
	ObjectHideSubObjectPermanently( self, "QUIVER01", true )
	ObjectHideSubObjectPermanently( self, "QUIVER02", true )
	ObjectHideSubObjectPermanently( self, "BOW", true )
	ObjectHideSubObjectPermanently( self, "ARROW", true )
	
	ObjectHideSubObjectPermanently( self, "HASHIELD", true )
	ObjectHideSubObjectPermanently( self, "HASCABBARD", true )
	ObjectHideSubObjectPermanently( self, "HAMERRYSWORD", true )
	ObjectHideSubObjectPermanently( self, "HAHEADNEW", true )
	ObjectHideSubObjectPermanently( self, "HABODY", true )
	ObjectHideSubObjectPermanently( self, "HALEGS", true )
	ObjectHideSubObjectPermanently( self, "SCABBARD", true )
	ObjectHideSubObjectPermanently( self, "MERRYSWORD", true )
	ObjectHideSubObjectPermanently( self, "CLOAK", true )

	ObjectHideSubObjectPermanently( self, "HASWORD", true )
	ObjectHideSubObjectPermanently( self, "SATCHEL", true )
	ObjectHideSubObjectPermanently( self, "HASHEATH", true )
end

function OnIsengardRuffianCreated(self)
	-- upgrade objects
	ObjectHideSubObjectPermanently( self, "FORGED_SPEAR", true )
	-- body
	ObjectHideSubObjectPermanently( self, "BODY01", true )
	ObjectHideSubObjectPermanently( self, "BODY02", true )
	ObjectHideSubObjectPermanently( self, "BODY03", true )

	ObjectHideSubObjectPermanently( self, "ARMS01", true )
	ObjectHideSubObjectPermanently( self, "ARMS02", true )
	ObjectHideSubObjectPermanently( self, "ARMS03", true )

	-- weapons
	ObjectHideSubObjectPermanently( self, "CLEAVERR", true )
	ObjectHideSubObjectPermanently( self, "CUDGELR", true )
	ObjectHideSubObjectPermanently( self, "KNIFER", true )
	ObjectHideSubObjectPermanently( self, "SWORD01", true )


	ObjectHideSubObjectPermanently( self, "CLEAVERL", true )
	ObjectHideSubObjectPermanently( self, "CUDGELL", true )
	ObjectHideSubObjectPermanently( self, "KNIFEL", true )
	ObjectHideSubObjectPermanently( self, "U_FIRE", true )
	ObjectHideSubObjectPermanently( self, "TORCH", true )


	-- decorative objects

	ObjectHideSubObjectPermanently( self, "BELT01", true )
	ObjectHideSubObjectPermanently( self, "BELT02", true )

	ObjectHideSubObjectPermanently( self, "MANACLES01", true )
	ObjectHideSubObjectPermanently( self, "MANACLES02", true )
	ObjectHideSubObjectPermanently( self, "MANACLES03", true )

	ObjectHideSubObjectPermanently( self, "SEAX", true )

	ObjectHideSubObjectPermanently( self, "WHIP", true )

	-- hat objects

	ObjectHideSubObjectPermanently( self, "MASK01", true )
	ObjectHideSubObjectPermanently( self, "SHAWL01", true )

	ObjectHideSubObjectPermanently( self, "MASK02", true )
	ObjectHideSubObjectPermanently( self, "SHAWL02", true )

	ObjectHideSubObjectPermanently( self, "CAP01", true )
	ObjectHideSubObjectPermanently( self, "CAP02", true )

	ObjectHideSubObjectPermanently( self, "GUGEL01", true )
	ObjectHideSubObjectPermanently( self, "GUGEL02", true )

	-- heads with hats
	ObjectHideSubObjectPermanently( self, "HEADL01H", true )
	ObjectHideSubObjectPermanently( self, "HEADL02H", true )

	ObjectHideSubObjectPermanently( self, "HEADB01H", true )

	-- heads with nothing
	ObjectHideSubObjectPermanently( self, "HEADL01", true )
	ObjectHideSubObjectPermanently( self, "HEADL02", true )

	ObjectHideSubObjectPermanently( self, "HEADB01", true )

	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HEAD04", true )
	ObjectHideSubObjectPermanently( self, "HEAD05", true )
	ObjectHideSubObjectPermanently( self, "HEAD06", true )


	-- assign random gear thing
	local belt = GetRandomNumber()
	local manacles = GetRandomNumber()
	local weaponr = GetRandomNumber()
	local weaponl = GetRandomNumber()
	local whip = GetRandomNumber()
	local seax = GetRandomNumber()

	if belt <= 0.5 then
		ObjectHideSubObjectPermanently( self, "BELT01", false )
    else
		ObjectHideSubObjectPermanently( self, "BELT02", false )
	end

	if seax <= 0.5 then
		ObjectHideSubObjectPermanently( self, "SEAX", false )
    else
		ObjectHideSubObjectPermanently( self, "NOTHING", false )
	end

	if whip <= 0.5 then
		ObjectHideSubObjectPermanently( self, "WHIP", false )
    else
		ObjectHideSubObjectPermanently( self, "NOTHING", false )
	end

	if manacles <= 0.25 then
        ObjectHideSubObjectPermanently( self, "MANACLES01", false )
    elseif manacles <= 0.50 then
        ObjectHideSubObjectPermanently( self, "MANACLES02", false )
    elseif manacles <= 0.75 then
        ObjectHideSubObjectPermanently( self, "MANACLES03", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

	if weaponr <= 0.25 then
        ObjectHideSubObjectPermanently( self, "CLEAVERR", false )
    elseif weaponr <= 0.50 then
        ObjectHideSubObjectPermanently( self, "CUDGELR", false )
	elseif weaponr <= 0.75 then
        ObjectHideSubObjectPermanently( self, "KNIFER", false )
    else
        ObjectHideSubObjectPermanently( self, "SWORD01", false )
    end

	if weaponl <= 0.25 then
        ObjectHideSubObjectPermanently( self, "CLEAVERL", false )
    elseif weaponl <= 0.50 then
        ObjectHideSubObjectPermanently( self, "CUDGELL", false )
	elseif weaponl <= 0.75 then
        ObjectHideSubObjectPermanently( self, "KNIFEL", false )
    else
        ObjectHideSubObjectPermanently( self, "TORCH", false )
		ObjectHideSubObjectPermanently( self, "U_FIRE", false )
    end

	-- body
	local body = GetRandomNumber()
	local arms = GetRandomNumber()

	if body <= 0.333 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif body <= 0.666 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
    else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
    end

	if arms <= 0.333 then
		ObjectHideSubObjectPermanently( self, "ARMS01", false )
    elseif arms <= 0.666 then
		ObjectHideSubObjectPermanently( self, "ARMS02", false )
    else
		ObjectHideSubObjectPermanently( self, "ARMS03", false )
    end

	--- randomize head, helm, and cloak assets---
	-- first decide whether he has no headware,a hat, or a gugel (50% none 25% chance hat 25% chance gugel)
	-- second decides which hat variation to use
	-- third decides what type of mask or shawl to use
	-- fourth chooses which head to use C:
	-- fourth chooses which head for a hat to use C:
	-- fifth decides which gugel and head to use C:

	local ruffian = GetRandomNumber()
	local cap = GetRandomNumber()
	local mask = GetRandomNumber()
	local faceNohat = GetRandomNumber()
	local facehat = GetRandomNumber()
	local gugel = GetRandomNumber()

	-- if he does not have a hat or gugel we choose normal heads with shawl
	if ruffian <= 0.75 then
		if mask <= 0.30 then
			ObjectHideSubObjectPermanently( self, "MASK01", false )
			ObjectHideSubObjectPermanently( self, "SHAWL01", false )
		elseif mask <= 0.45 then
			ObjectHideSubObjectPermanently( self, "MASK02", false )
			ObjectHideSubObjectPermanently( self, "SHAWL02", false )
		elseif mask <= 0.55 then
			ObjectHideSubObjectPermanently( self, "MASK01", false )
		elseif mask <= 0.65 then
			ObjectHideSubObjectPermanently( self, "SHAWL01", false )
		elseif mask <= 0.70 then
			ObjectHideSubObjectPermanently( self, "MASK02", false )
		elseif mask <= 0.75 then
			ObjectHideSubObjectPermanently( self, "SHAWL02", false )
		else
			ObjectHideSubObjectPermanently( self, "NOTHING", false )
		end

		if faceNohat <= 0.111 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
		elseif faceNohat <= 0.222 then
			ObjectHideSubObjectPermanently( self, "HEAD02", false )
		elseif faceNohat <= 0.333 then
			ObjectHideSubObjectPermanently( self, "HEAD03", false )
		elseif faceNohat <= 0.444 then
			ObjectHideSubObjectPermanently( self, "HEAD04", false )
		elseif faceNohat <= 0.555 then
			ObjectHideSubObjectPermanently( self, "HEAD05", false )
		elseif faceNohat <= 0.666 then
		ObjectHideSubObjectPermanently( self, "HEAD06", false )
		elseif faceNohat <= 0.777 then
			ObjectHideSubObjectPermanently( self, "HEADL01", false )
		elseif faceNohat <= 0.888 then
			ObjectHideSubObjectPermanently( self, "HEADL02", false )
		else
			ObjectHideSubObjectPermanently( self, "HEADB01", false )
		end

	-- if he does have a hat but not a gugel, we choose hat heads with shawl
    elseif ruffian <= 0.90 then
		if cap <= 0.5 then
        ObjectHideSubObjectPermanently( self, "CAP01", false )
		else
			ObjectHideSubObjectPermanently( self, "CAP02", false )
		end

		if mask <= 0.30 then
			ObjectHideSubObjectPermanently( self, "MASK01", false )
			ObjectHideSubObjectPermanently( self, "SHAWL01", false )
		elseif mask <= 0.45 then
			ObjectHideSubObjectPermanently( self, "MASK02", false )
			ObjectHideSubObjectPermanently( self, "SHAWL02", false )
		elseif mask <= 0.55 then
			ObjectHideSubObjectPermanently( self, "MASK01", false )
		elseif mask <= 0.65 then
			ObjectHideSubObjectPermanently( self, "SHAWL01", false )
		elseif mask <= 0.70 then
			ObjectHideSubObjectPermanently( self, "MASK02", false )
		elseif mask <= 0.75 then
			ObjectHideSubObjectPermanently( self, "SHAWL02", false )
		else
			ObjectHideSubObjectPermanently( self, "NOTHING", false )
		end

		if facehat <= 0.5 then
			ObjectHideSubObjectPermanently( self, "HEADL01H", false )
		else
			ObjectHideSubObjectPermanently( self, "HEADL02H", false )
		end

	-- if he has a has a gugel, vary HEADB01H with GUGEL01 and GUGEL02
	else
		if gugel <= 0.5 then
			ObjectHideSubObjectPermanently( self, "GUGEL01", false )
			ObjectHideSubObjectPermanently( self, "HEADB01H", false )
		else
			ObjectHideSubObjectPermanently( self, "GUGEL02", false )
			ObjectHideSubObjectPermanently( self, "HEADB01H", false )
		end
	end

end

function OnIsengardRuffianArcherCreated(self)
	-- upgrade objects
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
	ObjectHideSubObjectPermanently( self, "FORGED_SPEAR", true )
	-- body
	ObjectHideSubObjectPermanently( self, "BODY01", true )
	ObjectHideSubObjectPermanently( self, "BODY02", true )
	ObjectHideSubObjectPermanently( self, "BODY03", true )

	ObjectHideSubObjectPermanently( self, "ARMS01", true )
	ObjectHideSubObjectPermanently( self, "ARMS02", true )
	ObjectHideSubObjectPermanently( self, "ARMS03", true )

	-- weapons
	ObjectHideSubObjectPermanently( self, "CLEAVERR", true )
	ObjectHideSubObjectPermanently( self, "CUDGELR", true )
	ObjectHideSubObjectPermanently( self, "KNIFER", true )
	ObjectHideSubObjectPermanently( self, "SWORD01", true )


	ObjectHideSubObjectPermanently( self, "CLEAVERL", true )
	ObjectHideSubObjectPermanently( self, "CUDGELL", true )
	ObjectHideSubObjectPermanently( self, "KNIFEL", true )
	ObjectHideSubObjectPermanently( self, "U_FIRE", true )
	ObjectHideSubObjectPermanently( self, "TORCH", true )

	ObjectHideSubObjectPermanently( self, "BKNIFE", true )
	ObjectHideSubObjectPermanently( self, "BCUDGEL", true )


	-- decorative objects

	ObjectHideSubObjectPermanently( self, "BELT01", true )
	ObjectHideSubObjectPermanently( self, "BELT02", true )

	ObjectHideSubObjectPermanently( self, "MANACLES01", true )
	ObjectHideSubObjectPermanently( self, "MANACLES02", true )
	ObjectHideSubObjectPermanently( self, "MANACLES03", true )

	ObjectHideSubObjectPermanently( self, "SEAX", true )

	ObjectHideSubObjectPermanently( self, "WHIP", true )

	-- hat objects

	ObjectHideSubObjectPermanently( self, "MASK01", true )
	ObjectHideSubObjectPermanently( self, "SHAWL01", true )

	ObjectHideSubObjectPermanently( self, "MASK02", true )
	ObjectHideSubObjectPermanently( self, "SHAWL02", true )

	ObjectHideSubObjectPermanently( self, "CAP01", true )
	ObjectHideSubObjectPermanently( self, "CAP02", true )

	ObjectHideSubObjectPermanently( self, "GUGEL01", true )
	ObjectHideSubObjectPermanently( self, "GUGEL02", true )

	-- heads with hats
	ObjectHideSubObjectPermanently( self, "HEADL01H", true )
	ObjectHideSubObjectPermanently( self, "HEADL02H", true )

	ObjectHideSubObjectPermanently( self, "HEADB01H", true )

	-- heads with nothing
	ObjectHideSubObjectPermanently( self, "HEADL01", true )
	ObjectHideSubObjectPermanently( self, "HEADL02", true )

	ObjectHideSubObjectPermanently( self, "HEADB01", true )

	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HEAD04", true )
	ObjectHideSubObjectPermanently( self, "HEAD05", true )
	ObjectHideSubObjectPermanently( self, "HEAD06", true )


	-- assign random gear thing
	local belt = GetRandomNumber()
	local manacles = GetRandomNumber()
	local weaponr = GetRandomNumber()
	local weaponl = GetRandomNumber()
	local whip = GetRandomNumber()
	local seax = GetRandomNumber()
	local beltweapon = GetRandomNumber()

	if belt <= 0.5 then
		ObjectHideSubObjectPermanently( self, "BELT01", false )
    else
		ObjectHideSubObjectPermanently( self, "BELT02", false )
	end

	if beltweapon <= 0.5 then
		ObjectHideSubObjectPermanently( self, "BKNIFE", false )
    else
		ObjectHideSubObjectPermanently( self, "BCUDGEL", false )
	end

	if seax <= 0.5 then
		ObjectHideSubObjectPermanently( self, "SEAX", false )
    else
		ObjectHideSubObjectPermanently( self, "NOTHING", false )
	end

	if whip <= 0.5 then
		ObjectHideSubObjectPermanently( self, "WHIP", false )
    else
		ObjectHideSubObjectPermanently( self, "NOTHING", false )
	end

	if manacles <= 0.25 then
        ObjectHideSubObjectPermanently( self, "MANACLES01", false )
    elseif manacles <= 0.50 then
        ObjectHideSubObjectPermanently( self, "MANACLES02", false )
    elseif manacles <= 0.75 then
        ObjectHideSubObjectPermanently( self, "MANACLES03", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

	if weaponr <= 0.25 then
        ObjectHideSubObjectPermanently( self, "CLEAVERR", false )
    elseif weaponr <= 0.50 then
        ObjectHideSubObjectPermanently( self, "CUDGELR", false )
	elseif weaponr <= 0.75 then
        ObjectHideSubObjectPermanently( self, "KNIFER", false )
    else
        ObjectHideSubObjectPermanently( self, "SWORD01", false )
    end

	if weaponl <= 0.25 then
        ObjectHideSubObjectPermanently( self, "CLEAVERL", false )
    elseif weaponl <= 0.50 then
        ObjectHideSubObjectPermanently( self, "CUDGELL", false )
	elseif weaponl <= 0.75 then
        ObjectHideSubObjectPermanently( self, "KNIFEL", false )
    else
        ObjectHideSubObjectPermanently( self, "TORCH", false )
		ObjectHideSubObjectPermanently( self, "U_FIRE", false )
    end

	-- body
	local body = GetRandomNumber()
	local arms = GetRandomNumber()

	if body <= 0.333 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif body <= 0.666 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
    else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
    end

	if arms <= 0.333 then
		ObjectHideSubObjectPermanently( self, "ARMS01", false )
    elseif arms <= 0.666 then
		ObjectHideSubObjectPermanently( self, "ARMS02", false )
    else
		ObjectHideSubObjectPermanently( self, "ARMS03", false )
    end


	--- randomize head, helm, and cloak assets---
	-- first decide whether he has no headware,a hat, or a gugel (50% none 25% chance hat 25% chance gugel)
	-- second decides which hat variation to use
	-- third decides what type of mask or shawl to use
	-- fourth chooses which head to use C:
	-- fourth chooses which head for a hat to use C:
	-- fifth decides which gugel and head to use C:

	local ruffian = GetRandomNumber()
	local cap = GetRandomNumber()
	local mask = GetRandomNumber()
	local faceNohat = GetRandomNumber()
	local facehat = GetRandomNumber()
	local gugel = GetRandomNumber()

	-- if he does not have a hat or gugel we choose normal heads with shawl
	if ruffian <= 0.75 then
		if mask <= 0.30 then
			ObjectHideSubObjectPermanently( self, "MASK01", false )
			ObjectHideSubObjectPermanently( self, "SHAWL01", false )
		elseif mask <= 0.45 then
			ObjectHideSubObjectPermanently( self, "MASK02", false )
			ObjectHideSubObjectPermanently( self, "SHAWL02", false )
		elseif mask <= 0.55 then
			ObjectHideSubObjectPermanently( self, "MASK01", false )
		elseif mask <= 0.65 then
			ObjectHideSubObjectPermanently( self, "SHAWL01", false )
		elseif mask <= 0.70 then
			ObjectHideSubObjectPermanently( self, "MASK02", false )
		elseif mask <= 0.75 then
			ObjectHideSubObjectPermanently( self, "SHAWL02", false )
		else
			ObjectHideSubObjectPermanently( self, "NOTHING", false )
		end

		if faceNohat <= 0.111 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
		elseif faceNohat <= 0.222 then
			ObjectHideSubObjectPermanently( self, "HEAD02", false )
		elseif faceNohat <= 0.333 then
			ObjectHideSubObjectPermanently( self, "HEAD03", false )
		elseif faceNohat <= 0.444 then
			ObjectHideSubObjectPermanently( self, "HEAD04", false )
		elseif faceNohat <= 0.555 then
			ObjectHideSubObjectPermanently( self, "HEAD05", false )
		elseif faceNohat <= 0.666 then
		ObjectHideSubObjectPermanently( self, "HEAD06", false )
		elseif faceNohat <= 0.777 then
			ObjectHideSubObjectPermanently( self, "HEADL01", false )
		elseif faceNohat <= 0.888 then
			ObjectHideSubObjectPermanently( self, "HEADL02", false )
		else
			ObjectHideSubObjectPermanently( self, "HEADB01", false )
		end

	-- if he does have a hat but not a gugel, we choose hat heads with shawl
    elseif ruffian <= 0.90 then
		if cap <= 0.5 then
        ObjectHideSubObjectPermanently( self, "CAP01", false )
		else
			ObjectHideSubObjectPermanently( self, "CAP02", false )
		end

		if mask <= 0.30 then
			ObjectHideSubObjectPermanently( self, "MASK01", false )
			ObjectHideSubObjectPermanently( self, "SHAWL01", false )
		elseif mask <= 0.45 then
			ObjectHideSubObjectPermanently( self, "MASK02", false )
			ObjectHideSubObjectPermanently( self, "SHAWL02", false )
		elseif mask <= 0.55 then
			ObjectHideSubObjectPermanently( self, "MASK01", false )
		elseif mask <= 0.65 then
			ObjectHideSubObjectPermanently( self, "SHAWL01", false )
		elseif mask <= 0.70 then
			ObjectHideSubObjectPermanently( self, "MASK02", false )
		elseif mask <= 0.75 then
			ObjectHideSubObjectPermanently( self, "SHAWL02", false )
		else
			ObjectHideSubObjectPermanently( self, "NOTHING", false )
		end

		if facehat <= 0.5 then
			ObjectHideSubObjectPermanently( self, "HEADL01H", false )
		else
			ObjectHideSubObjectPermanently( self, "HEADL02H", false )
		end
	-- if he has a has a gugel, vary HEADB01H with GUGEL01 and GUGEL02
	else
		if gugel <= 0.5 then
			ObjectHideSubObjectPermanently( self, "GUGEL01", false )
			ObjectHideSubObjectPermanently( self, "HEADB01H", false )
		else
			ObjectHideSubObjectPermanently( self, "GUGEL02", false )
			ObjectHideSubObjectPermanently( self, "HEADB01H", false )
		end
	end

end

function OnIsengardPikemanCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "Glow", true )
	ObjectHideSubObjectPermanently( self, "HELMET01", true )
	ObjectHideSubObjectPermanently( self, "HELMET02", true )

    local helmet         =    GetRandomNumber()
    local shield         =    GetRandomNumber()

    if helmet <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HELMET01", false )
    else
        ObjectHideSubObjectPermanently( self, "HELMET02", false )
    end

end

function OnIsengardBannerCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "Glow", true )
	ObjectHideSubObjectPermanently( self, "FLAG01", true )
	ObjectHideSubObjectPermanently( self, "FLAG02", true )
	ObjectHideSubObjectPermanently( self, "FLAG03", true )

    local shield         =    GetRandomNumber()

    if shield <= 0.333 then
        ObjectHideSubObjectPermanently( self, "FLAG01", false )
    elseif shield <= 0.666 then
        ObjectHideSubObjectPermanently( self, "FLAG02", false )
     else
        ObjectHideSubObjectPermanently( self, "FLAG03", false )
    end
end

function OnIsengardWildmanCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "Torch", true )
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
	ObjectHideSubObjectPermanently( self, "WILDMAN1", true )
	ObjectHideSubObjectPermanently( self, "WILDMAN2", true )
	ObjectHideSubObjectPermanently( self, "WILDMAN3", true )
	ObjectHideSubObjectPermanently( self, "WILDMAN4", true )

	ObjectHideSubObjectPermanently( self, "PICK", true )
	ObjectHideSubObjectPermanently( self, "SICKLE", true )
	ObjectHideSubObjectPermanently( self, "AXE", true )
	ObjectHideSubObjectPermanently( self, "ROHANAXE", true )
	ObjectHideSubObjectPermanently( self, "URUKSWORD", true )

	ObjectHideSubObjectPermanently( self, "FORKLEFT", true )
	ObjectHideSubObjectPermanently( self, "SICKLELEFT", true )
	ObjectHideSubObjectPermanently( self, "AXELEFT", true )
	ObjectHideSubObjectPermanently( self, "ROHANAXELEFT", true )
	ObjectHideSubObjectPermanently( self, "URUKSWORDLEFT", true )

    local body         =    GetRandomNumber()
    local weaponleft         =    GetRandomNumber()
    local weaponright         =    GetRandomNumber()

    if body <= 0.25 then
        ObjectHideSubObjectPermanently( self, "WILDMAN1", false )
    elseif body <= 0.50 then
        ObjectHideSubObjectPermanently( self, "WILDMAN2", false )
    elseif body <= 0.75 then
        ObjectHideSubObjectPermanently( self, "WILDMAN3", false )
     else
        ObjectHideSubObjectPermanently( self, "WILDMAN4", false )
    end

    if weaponright <= 0.20 then
        ObjectHideSubObjectPermanently( self, "PICK", false )
    elseif weaponright <= 0.40 then
        ObjectHideSubObjectPermanently( self, "SICKLE", false )
    elseif weaponright <= 0.60 then
        ObjectHideSubObjectPermanently( self, "AXE", false )
    elseif weaponright <= 0.80 then
        ObjectHideSubObjectPermanently( self, "URUKSWORD", false )
     else
        ObjectHideSubObjectPermanently( self, "ROHANAXE", false )
    end

    if weaponleft <= 0.20 then
        ObjectHideSubObjectPermanently( self, "FORKLEFT", false )
    elseif weaponleft <= 0.40 then
        ObjectHideSubObjectPermanently( self, "ROHANAXELEFT", false )
    elseif weaponleft <= 0.60 then
        ObjectHideSubObjectPermanently( self, "SICKLELEFT", false )
    elseif weaponleft <= 0.80 then
        ObjectHideSubObjectPermanently( self, "AXELEFT", false )
     else
        ObjectHideSubObjectPermanently( self, "URUKSWORDLEFT", false )
    end

end

function OnIsengardWildmanAxeCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "Torch", true )
	ObjectHideSubObjectPermanently( self, "FireArowTip", true )
	ObjectHideSubObjectPermanently( self, "WILDMAN1", true )
	ObjectHideSubObjectPermanently( self, "WILDMAN2", true )
	ObjectHideSubObjectPermanently( self, "WILDMAN3", true )
	ObjectHideSubObjectPermanently( self, "WILDMAN4", true )

	ObjectHideSubObjectPermanently( self, "AXELEFT", true )
	ObjectHideSubObjectPermanently( self, "ROHANAXELEFT", true )

    local body         =    GetRandomNumber()
    local weaponleft         =    GetRandomNumber()

    if body <= 0.25 then
        ObjectHideSubObjectPermanently( self, "WILDMAN1", false )
    elseif body <= 0.50 then
        ObjectHideSubObjectPermanently( self, "WILDMAN2", false )
    elseif body <= 0.75 then
        ObjectHideSubObjectPermanently( self, "WILDMAN3", false )
     else
        ObjectHideSubObjectPermanently( self, "WILDMAN4", false )
    end

    if weaponleft <= 0.50 then
        ObjectHideSubObjectPermanently( self, "ROHANAXELEFT", false )
     else
        ObjectHideSubObjectPermanently( self, "AXELEFT", false )
    end

end

function OnIsengardWildmanSpearCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "Torch", true )
	ObjectHideSubObjectPermanently( self, "FireArowTip", true )
	ObjectHideSubObjectPermanently( self, "WILDMAN1", true )
	ObjectHideSubObjectPermanently( self, "WILDMAN2", true )
	ObjectHideSubObjectPermanently( self, "WILDMAN3", true )
	ObjectHideSubObjectPermanently( self, "WILDMAN4", true )

	ObjectHideSubObjectPermanently( self, "SCYTHE", true )
	ObjectHideSubObjectPermanently( self, "SPEAR", true )
	ObjectHideSubObjectPermanently( self, "PITCHFORK", true )

    local body         =    GetRandomNumber()
    local weaponleft         =    GetRandomNumber()

    if body <= 0.25 then
        ObjectHideSubObjectPermanently( self, "WILDMAN1", false )
    elseif body <= 0.50 then
        ObjectHideSubObjectPermanently( self, "WILDMAN2", false )
    elseif body <= 0.75 then
        ObjectHideSubObjectPermanently( self, "WILDMAN3", false )
     else
        ObjectHideSubObjectPermanently( self, "WILDMAN4", false )
    end

    if weaponleft <= 0.30 then
        ObjectHideSubObjectPermanently( self, "SCYTHE", false )
		ObjectGrantUpgrade( self, "Upgrade_AragornCostume_01" )
    elseif weaponleft <= 0.60 then
        ObjectHideSubObjectPermanently( self, "SPEAR", false )
     else
        ObjectHideSubObjectPermanently( self, "PITCHFORK", false )
    end

end

function OnWildSpiderRiderCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
	ObjectHideSubObject( self, "ARROWNOCK", true )
end

function OnEasterlingArcherCreated(self)
	ObjectHideSubObjectPermanently( self, "FireArowTip", true )
	ObjectHideSubObjectPermanently( self, "BARB", true )
	ObjectHideSubObject( self, "ArrowNock", true )
end

function OnHaradrimArcherCreated(self)
	ObjectHideSubObjectPermanently( self, "FireArowTip", true )
	ObjectHideSubObjectPermanently( self, "ARMORA", true )
	ObjectHideSubObjectPermanently( self, "ARMORB", true )
	ObjectHideSubObjectPermanently( self, "ARMORC", true )
	ObjectHideSubObjectPermanently( self, "BODYA", true )
	ObjectHideSubObjectPermanently( self, "BODYB", true )
	ObjectHideSubObjectPermanently( self, "BODYC", true )
	ObjectHideSubObjectPermanently( self, "BRACERSB", true )
	ObjectHideSubObjectPermanently( self, "HATA", true )
	ObjectHideSubObjectPermanently( self, "HATB", true )
	ObjectHideSubObjectPermanently( self, "HATC", true )
	ObjectHideSubObjectPermanently( self, "HATD", true )
	ObjectHideSubObjectPermanently( self, "HATE", true )
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "SASHA", true )
	ObjectHideSubObjectPermanently( self, "SASHB", true )
	ObjectHideSubObjectPermanently( self, "SASHC", true )
	ObjectHideSubObjectPermanently( self, "SASHD", true )
	ObjectHideSubObjectPermanently( self, "SHAWLA", true )
	ObjectHideSubObjectPermanently( self, "SHAWLB", true )
	ObjectHideSubObjectPermanently( self, "SKIRTA", true )
	ObjectHideSubObjectPermanently( self, "SKIRTB", true )
	ObjectHideSubObjectPermanently( self, "SKIRTC", true )
	ObjectHideSubObjectPermanently( self, "SKIRTD", true )
	ObjectHideSubObjectPermanently( self, "TROUSERSA", true )
	ObjectHideSubObjectPermanently( self, "TROUSERSB", true )

    local shoulder          =    GetRandomNumber()
    local body          =    GetRandomNumber()
    local bracer          =    GetRandomNumber()
    local hat          =    GetRandomNumber()
    local head          =    GetRandomNumber()
    local sash          =    GetRandomNumber()
    local shawl          =    GetRandomNumber()
    local trouser          =    GetRandomNumber()

    if shoulder <= 0.5 then
        ObjectHideSubObjectPermanently( self, "ARMORC", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    if body <= 0.33 then
        ObjectHideSubObjectPermanently( self, "BODYA", false )
    elseif body <= 0.66 then
        ObjectHideSubObjectPermanently( self, "BODYB", false )
     else
        ObjectHideSubObjectPermanently( self, "BODYC", false )
    end

    if bracer <= 0.5 then
        ObjectHideSubObjectPermanently( self, "BRACERSB", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    if hat <= 0.20 then
        ObjectHideSubObjectPermanently( self, "HATA", false )
    elseif hat <= 0.40 then
        ObjectHideSubObjectPermanently( self, "HATB", false )
    elseif hat <= 0.60 then
        ObjectHideSubObjectPermanently( self, "HATC", false )
    elseif hat <= 0.80 then
        ObjectHideSubObjectPermanently( self, "HATD", false )
     else
        ObjectHideSubObjectPermanently( self, "HATE", false )
    end

    if head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

    if sash <= 0.25 then
        ObjectHideSubObjectPermanently( self, "SASHA", false )
    elseif sash <= 0.50 then
        ObjectHideSubObjectPermanently( self, "SASHB", false )
    elseif sash <= 0.75 then
        ObjectHideSubObjectPermanently( self, "SASHC", false )
     else
        ObjectHideSubObjectPermanently( self, "SASHD", false )
    end

    if shawl <= 0.15 then
        ObjectHideSubObjectPermanently( self, "SHAWLA", false )
    elseif shawl <= 0.30 then
        ObjectHideSubObjectPermanently( self, "SHAWLB", false )
    elseif shawl <= 0.65 then
        ObjectHideSubObjectPermanently( self, "ARMORA", false )
     else
        ObjectHideSubObjectPermanently( self, "ARMORA", false )
        ObjectHideSubObjectPermanently( self, "ARMORB", false )
    end

    if trouser <= 0.17 then
        ObjectHideSubObjectPermanently( self, "TROUSERSA", false )
    elseif trouser <= 0.34 then
        ObjectHideSubObjectPermanently( self, "TROUSERSB", false )
    elseif trouser <= 0.51 then
        ObjectHideSubObjectPermanently( self, "SKIRTA", false )
        ObjectHideSubObjectPermanently( self, "SKIRTB", false )
    elseif trouser <= 0.68 then
        ObjectHideSubObjectPermanently( self, "SKIRTA", false )
        ObjectHideSubObjectPermanently( self, "SKIRTC", false )
    elseif trouser <= 0.85 then
        ObjectHideSubObjectPermanently( self, "SKIRTD", false )
        ObjectHideSubObjectPermanently( self, "SKIRTB", false )
     else
        ObjectHideSubObjectPermanently( self, "SKIRTD", false )
        ObjectHideSubObjectPermanently( self, "SKIRTC", false )
    end

end

function OnHaradrimTribalRaiderCreated(self)
	ObjectHideSubObjectPermanently( self, "ARMORA", true )
	ObjectHideSubObjectPermanently( self, "ARMORB", true )
	ObjectHideSubObjectPermanently( self, "ARMORC", true )
	ObjectHideSubObjectPermanently( self, "BODYA", true )
	ObjectHideSubObjectPermanently( self, "BODYB", true )
	ObjectHideSubObjectPermanently( self, "BODYC", true )
	ObjectHideSubObjectPermanently( self, "BRACERSB", true )
	ObjectHideSubObjectPermanently( self, "HATA", true )
	ObjectHideSubObjectPermanently( self, "HATB", true )
	ObjectHideSubObjectPermanently( self, "HATC", true )
	ObjectHideSubObjectPermanently( self, "HATD", true )
	ObjectHideSubObjectPermanently( self, "HATE", true )
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "SASHA", true )
	ObjectHideSubObjectPermanently( self, "SASHB", true )
	ObjectHideSubObjectPermanently( self, "SASHC", true )
	ObjectHideSubObjectPermanently( self, "SASHD", true )
	ObjectHideSubObjectPermanently( self, "SHAWLA", true )
	ObjectHideSubObjectPermanently( self, "SHAWLB", true )
	ObjectHideSubObjectPermanently( self, "SKIRTA", true )
	ObjectHideSubObjectPermanently( self, "SKIRTB", true )
	ObjectHideSubObjectPermanently( self, "SKIRTC", true )
	ObjectHideSubObjectPermanently( self, "SKIRTD", true )
	ObjectHideSubObjectPermanently( self, "TROUSERSA", true )
	ObjectHideSubObjectPermanently( self, "TROUSERSB", true )
	ObjectHideSubObjectPermanently( self, "HORSE01", true )
	ObjectHideSubObjectPermanently( self, "HORSE02", true )
	ObjectHideSubObjectPermanently( self, "HORSE03", true )
	ObjectHideSubObjectPermanently( self, "HORSE04", true )

    local shoulder          =    GetRandomNumber()
    local body          =    GetRandomNumber()
    local bracer          =    GetRandomNumber()
    local hat          =    GetRandomNumber()
    local head          =    GetRandomNumber()
    local sash          =    GetRandomNumber()
    local shawl          =    GetRandomNumber()
    local trouser          =    GetRandomNumber()
    local horse          =    GetRandomNumber()

    if shoulder <= 0.5 then
        ObjectHideSubObjectPermanently( self, "ARMORC", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    if body <= 0.33 then
        ObjectHideSubObjectPermanently( self, "BODYA", false )
    elseif body <= 0.66 then
        ObjectHideSubObjectPermanently( self, "BODYB", false )
     else
        ObjectHideSubObjectPermanently( self, "BODYC", false )
    end

    if bracer <= 0.5 then
        ObjectHideSubObjectPermanently( self, "BRACERSB", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    if hat <= 0.20 then
        ObjectHideSubObjectPermanently( self, "HATA", false )
    elseif hat <= 0.40 then
        ObjectHideSubObjectPermanently( self, "HATB", false )
    elseif hat <= 0.60 then
        ObjectHideSubObjectPermanently( self, "HATC", false )
    elseif hat <= 0.80 then
        ObjectHideSubObjectPermanently( self, "HATD", false )
     else
        ObjectHideSubObjectPermanently( self, "HATE", false )
    end

    if head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

    if sash <= 0.25 then
        ObjectHideSubObjectPermanently( self, "SASHA", false )
    elseif sash <= 0.50 then
        ObjectHideSubObjectPermanently( self, "SASHB", false )
    elseif sash <= 0.75 then
        ObjectHideSubObjectPermanently( self, "SASHC", false )
     else
        ObjectHideSubObjectPermanently( self, "SASHD", false )
    end

    if shawl <= 0.15 then
        ObjectHideSubObjectPermanently( self, "SHAWLA", false )
    elseif shawl <= 0.30 then
        ObjectHideSubObjectPermanently( self, "SHAWLB", false )
    elseif shawl <= 0.65 then
        ObjectHideSubObjectPermanently( self, "ARMORA", false )
     else
        ObjectHideSubObjectPermanently( self, "ARMORA", false )
        ObjectHideSubObjectPermanently( self, "ARMORB", false )
    end

    if trouser <= 0.17 then
        ObjectHideSubObjectPermanently( self, "TROUSERSA", false )
    elseif trouser <= 0.34 then
        ObjectHideSubObjectPermanently( self, "TROUSERSB", false )
    elseif trouser <= 0.51 then
        ObjectHideSubObjectPermanently( self, "SKIRTA", false )
        ObjectHideSubObjectPermanently( self, "SKIRTB", false )
    elseif trouser <= 0.68 then
        ObjectHideSubObjectPermanently( self, "SKIRTA", false )
        ObjectHideSubObjectPermanently( self, "SKIRTC", false )
    elseif trouser <= 0.85 then
        ObjectHideSubObjectPermanently( self, "SKIRTD", false )
        ObjectHideSubObjectPermanently( self, "SKIRTB", false )
     else
        ObjectHideSubObjectPermanently( self, "SKIRTD", false )
        ObjectHideSubObjectPermanently( self, "SKIRTC", false )
    end

	if horse <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HORSE01", false )
	elseif horse <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HORSE02", false )
	elseif horse <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HORSE03", false )
     else
        ObjectHideSubObjectPermanently( self, "HORSE04", false )
    end

end

function OnWildGoblinArcherCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
	ObjectHideSubObjectPermanently( self, "SHIELD", true )
	ObjectHideSubObjectPermanently( self, "HELM01", true )
	ObjectHideSubObjectPermanently( self, "HELM02", true )
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "SHIELD", true )

    local head          =    GetRandomNumber()
    local helmet          =    GetRandomNumber()
	local shield		=		GetRandomNumber()

    if head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

    if helmet <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HELM01", false )
    elseif helmet <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HELM01", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

	if shield <= 0.3 then
        ObjectHideSubObjectPermanently( self, "SHIELD", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end
end

function OnWildGoblinFighterCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
	ObjectHideSubObjectPermanently( self, "SHIELD", true )
	ObjectHideSubObjectPermanently( self, "HELM01", true )
	ObjectHideSubObjectPermanently( self, "HELM02", true )
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "SHIELD", true )

    local head          =    GetRandomNumber()
    local helmet          =    GetRandomNumber()
	local shield		=		GetRandomNumber()

    if head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

    if helmet <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HELM01", false )
    elseif helmet <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HELM01", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

	if shield <= 0.3 then
        ObjectHideSubObjectPermanently( self, "SHIELD", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end
end

function OnWildGoblinSpearmanCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
	ObjectHideSubObjectPermanently( self, "POISON_BLADE", true )
	ObjectHideSubObjectPermanently( self, "SHIELD", true )
	ObjectHideSubObjectPermanently( self, "HELM01", true )
	ObjectHideSubObjectPermanently( self, "HELM02", true )

    local helmet          =    GetRandomNumber()

    if helmet <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HELM01", false )
    elseif helmet <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HELM01", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end
end

function OnWildGoblinNeutralCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
	ObjectHideSubObjectPermanently( self, "SHIELD", true )
	ObjectHideSubObjectPermanently( self, "HELM01", true )
	ObjectHideSubObjectPermanently( self, "HELM02", true )
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )

    local head          =    GetRandomNumber()
    local helmet          =    GetRandomNumber()
    local shield          =    GetRandomNumber()

    if head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

	if helmet <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HELM01", false )
     else
        ObjectHideSubObjectPermanently( self, "HELM02", false )
    end

	if shield <= 0.3 then
        ObjectHideSubObjectPermanently( self, "SHIELD", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end
end

function OnGarrisonableCreated(self)
	ObjectHideSubObjectPermanently( self, "GARRISON01", true )
	ObjectHideSubObjectPermanently( self, "GARRISON02", true )
	ObjectHideSubObjectPermanently( self, "KINGS", true )
	ObjectHideSubObjectPermanently( self, "EREDLUIN", true )
	ObjectHideSubObjectPermanently( self, "MORIA", true )
	ObjectHideSubObjectPermanently( self, "MITHRIM", true )
	ObjectHideSubObjectPermanently( self, "IRONHILLS", true )
	ObjectHideSubObjectPermanently( self, "BNR_EYE", true )
	ObjectHideSubObjectPermanently( self, "BNR_CIRITH", true )
	ObjectHideSubObjectPermanently( self, "BNR_MORGUL", true )
	ObjectHideSubObjectPermanently( self, "BNR_RHUN", true )
	ObjectHideSubObjectPermanently( self, "BNR_EYE01", true )
	ObjectHideSubObjectPermanently( self, "BNR_CIRITH01", true )
	ObjectHideSubObjectPermanently( self, "BNR_MORGUL01", true )
	ObjectHideSubObjectPermanently( self, "BNR_RHUN01", true )
	ObjectHideSubObjectPermanently( self, "MORGULFX", true )
	ObjectHideSubObjectPermanently( self, "TORCHES", true )
	ObjectHideSubObjectPermanently( self, "DRAGONS", true )
end

function OnIthilienGarrisonableCreated(self)
	ObjectHideSubObjectPermanently( self, "GARRISON01", true )
	ObjectHideSubObjectPermanently( self, "GARRISON02", true )
	ObjectHideSubObjectPermanently( self, "KINGS", true )
	ObjectHideSubObjectPermanently( self, "EREDLUIN", true )
	ObjectHideSubObjectPermanently( self, "MORIA", true )
	ObjectHideSubObjectPermanently( self, "MITHRIM", true )
	ObjectHideSubObjectPermanently( self, "IRONHILLS", true )
	ObjectHideSubObjectPermanently( self, "BNR_EYE", true )
	ObjectHideSubObjectPermanently( self, "BNR_CIRITH", true )
	ObjectHideSubObjectPermanently( self, "BNR_MORGUL", true )
	ObjectHideSubObjectPermanently( self, "BNR_RHUN", true )
	ObjectHideSubObjectPermanently( self, "BNR_EYE01", true )
	ObjectHideSubObjectPermanently( self, "BNR_CIRITH01", true )
	ObjectHideSubObjectPermanently( self, "BNR_MORGUL01", true )
	ObjectHideSubObjectPermanently( self, "BNR_RHUN01", true )
	ObjectHideSubObjectPermanently( self, "MORGULFX", true )
	ObjectHideSubObjectPermanently( self, "TORCHES", true )
	ObjectHideSubObjectPermanently( self, "DRAGONS", true )
	ObjectHideSubObjectPermanently( self, "HOUSE COLOR", true )
end

function OnDwarvenDaleman(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FORGED_ARROW", true )
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "BACKSHIELD", true )
    ObjectHideSubObjectPermanently( self, "DALESHIELD", true )
    ObjectHideSubObjectPermanently( self, "HA", true )

    local head          =    GetRandomNumber()

    if head <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end
end

function OnDwarvenDalemanMelee(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FORGED_ARROW", true )
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "BACKSHIELD", true )
    ObjectHideSubObjectPermanently( self, "DALESHIELD", true )
    ObjectHideSubObjectPermanently( self, "HA", true )
    ObjectHideSubObjectPermanently( self, "QUIVER", true )

    local head          =    GetRandomNumber()

    if head <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end
end

function OnDaleRoyalGuardCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FORGED_ARROW", true )
    ObjectHideSubObjectPermanently( self, "QUIVER", true )
end

function OnDwarvenDalemanCavalry(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FORGED_ARROW", true )
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )

    local head          =    GetRandomNumber()

    if head <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end
end

function OnDwarvenLaketowner(self)
    ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
    ObjectHideSubObjectPermanently( self, "HEADA", true )
    ObjectHideSubObjectPermanently( self, "HEADB", true )
    ObjectHideSubObjectPermanently( self, "HEADC", true )
    ObjectHideSubObjectPermanently( self, "HEADD", true )
    ObjectHideSubObjectPermanently( self, "HELMETA", true )

    local head          =    GetRandomNumber()

    if head <= 0.2 then
        ObjectHideSubObjectPermanently( self, "HEADA", false )
    elseif head <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HEADB", false )
    elseif head <= 0.8 then
        ObjectHideSubObjectPermanently( self, "HEADC", false )
     else
        ObjectHideSubObjectPermanently( self, "HEADD", false )
    end
end

function OnDwarvenLaketownGuard(self)
    ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
    ObjectHideSubObjectPermanently( self, "HEADA", true )
    ObjectHideSubObjectPermanently( self, "HEADB", true )
    ObjectHideSubObjectPermanently( self, "HEADC", true )
    ObjectHideSubObjectPermanently( self, "HEADD", true )

    local head          =    GetRandomNumber()

    if head <= 0.2 then
        ObjectHideSubObjectPermanently( self, "HEADA", false )
    elseif head <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HEADB", false )
    elseif head <= 0.8 then
        ObjectHideSubObjectPermanently( self, "HEADC", false )
     else
        ObjectHideSubObjectPermanently( self, "HEADD", false )
    end
end

function OnDwarvenDorwinion(self)
    ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "HEAD04", true )
    ObjectHideSubObjectPermanently( self, "FEATHER01", true )
    ObjectHideSubObjectPermanently( self, "FEATHER02", true )
    ObjectHideSubObjectPermanently( self, "FEATHER03", true )


    local feather          =    GetRandomNumber()
    local head          =    GetRandomNumber()

    if feather <= 0.4 then
        ObjectHideSubObjectPermanently( self, "FEATHER01", false )
    elseif feather <= 0.8 then
        ObjectHideSubObjectPermanently( self, "FEATHER02", false )
     else
        ObjectHideSubObjectPermanently( self, "FEATHER03", false )
    end

    if head <= 0.2 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head <= 0.8 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    end
end

function OnDwarvenMenBannerCreated(self)
    ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
    ObjectHideSubObjectPermanently( self, "HEADA", true )
    ObjectHideSubObjectPermanently( self, "HEADB", true )
    ObjectHideSubObjectPermanently( self, "HEADC", true )
    ObjectHideSubObjectPermanently( self, "HEADD", true )
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "QUIVER", true )

    local head          =    GetRandomNumber()
    local dale          =    GetRandomNumber()

    if head <= 0.2 then
        ObjectHideSubObjectPermanently( self, "HEADA", false )
    elseif head <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HEADB", false )
    elseif head <= 0.8 then
        ObjectHideSubObjectPermanently( self, "HEADC", false )
     else
        ObjectHideSubObjectPermanently( self, "HEADD", false )
    end

    if dale <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif dale <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end
end

function OnDwarvenZerkerCreated(self)
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "HEAD04", true )

    local head          =    GetRandomNumber()

    if head <= 0.2 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head <= 0.8 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    end
end

function OnDwarvenRiderCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "IHSHIELDA", true )
	ObjectHideSubObjectPermanently( self, "IHSHIELDB", true )
    ObjectHideSubObjectPermanently( self, "HORNS1", true )
    ObjectHideSubObjectPermanently( self, "HORNS2", true )
    ObjectHideSubObjectPermanently( self, "BIGSHEEPA", true )
    ObjectHideSubObjectPermanently( self, "BIGSHEEPB", true )
    ObjectHideSubObjectPermanently( self, "BIGSHEEPC", true )
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "HEAD04", true )

    local helmet         =    GetRandomNumber()
    local head          =    GetRandomNumber()
    local armor          =    GetRandomNumber()
    local shield          =    GetRandomNumber()

    if helmet <= 0.3 then
        ObjectHideSubObjectPermanently( self, "BIGSHEEPA", false )
    elseif helmet <= 0.6 then
        ObjectHideSubObjectPermanently( self, "BIGSHEEPB", false )
     else
        ObjectHideSubObjectPermanently( self, "BIGSHEEPC", false )
    end

    if head <= 0.2 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head <= 0.8 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    end

    if armor <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HORNS1", false )
     else
        ObjectHideSubObjectPermanently( self, "HORNS2", false )
    end

    if shield <= 0.5 then
        ObjectHideSubObjectPermanently( self, "IHSHIELDA", false )
     else
        ObjectHideSubObjectPermanently( self, "IHSHIELDB", false )
    end

end

function OnIronHillDemoCreated(self)
    ObjectHideSubObjectPermanently( self, "BIGSHEEPA_1", true )
    ObjectHideSubObjectPermanently( self, "BIGSHEEPA_2", true )
    ObjectHideSubObjectPermanently( self, "BIGSHEEPA_3", true )
    ObjectHideSubObjectPermanently( self, "BIGSHEEPA1", true )
    ObjectHideSubObjectPermanently( self, "BIGSHEEPA2", true )
    ObjectHideSubObjectPermanently( self, "BIGSHEEPA3", true )

    local helmet         =    GetRandomNumber()
    local armor          =    GetRandomNumber()

    if helmet <= 0.3 then
        ObjectHideSubObjectPermanently( self, "BIGSHEEPA_1", false )
    elseif helmet <= 0.6 then
        ObjectHideSubObjectPermanently( self, "BIGSHEEPA_2", false )
     else
        ObjectHideSubObjectPermanently( self, "BIGSHEEPA_3", false )
    end

    if armor <= 0.3 then
        ObjectHideSubObjectPermanently( self, "BIGSHEEPA1", false )
    elseif armor <= 0.6 then
        ObjectHideSubObjectPermanently( self, "BIGSHEEPA2", false )
     else
        ObjectHideSubObjectPermanently( self, "BIGSHEEPA3", false )
    end
end

function OnDwarvenGoatCreated(self)
    ObjectHideSubObjectPermanently( self, "HORNS1", true )
    ObjectHideSubObjectPermanently( self, "HORNS2", true )
    ObjectHideSubObjectPermanently( self, "BIGSHEEPA", true )
    ObjectHideSubObjectPermanently( self, "BIGSHEEPB", true )
    ObjectHideSubObjectPermanently( self, "BIGSHEEPC", true )

    local helmet         =    GetRandomNumber()
    local armor          =    GetRandomNumber()

    if helmet <= 0.3 then
        ObjectHideSubObjectPermanently( self, "BIGSHEEPA", false )
    elseif helmet <= 0.6 then
        ObjectHideSubObjectPermanently( self, "BIGSHEEPB", false )
     else
        ObjectHideSubObjectPermanently( self, "BIGSHEEPC", false )
    end

    if armor <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HORNS1", false )
     else
        ObjectHideSubObjectPermanently( self, "HORNS2", false )
    end

end

function OnDwarvenGuardianCreated(self)
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
	ObjectHideSubObjectPermanently( self, "FORGED_01", true )
	ObjectHideSubObjectPermanently( self, "FORGED_02", true )
	ObjectHideSubObjectPermanently( self, "FORGED_03", true )
	ObjectHideSubObjectPermanently( self, "FORGED_HAMMER", true )
	ObjectHideSubObjectPermanently( self, "MITHRIL", true )
	ObjectHideSubObjectPermanently( self, "HAMMER", true )
    ObjectHideSubObjectPermanently( self, "BODY01", true )
    ObjectHideSubObjectPermanently( self, "BODY02", true )
    ObjectHideSubObjectPermanently( self, "BODY03", true )
    ObjectHideSubObjectPermanently( self, "BODY04", true )
    ObjectHideSubObjectPermanently( self, "BODY05", true )
    ObjectHideSubObjectPermanently( self, "BODY06", true )
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "HEAD04", true )
    ObjectHideSubObjectPermanently( self, "HEAD05", true )
    ObjectHideSubObjectPermanently( self, "HEAD06", true )
    ObjectHideSubObjectPermanently( self, "SHIELDA01", true )
    ObjectHideSubObjectPermanently( self, "SHIELDA02", true )
    ObjectHideSubObjectPermanently( self, "SHIELDA03", true )
    ObjectHideSubObjectPermanently( self, "SHIELDB01", true )
    ObjectHideSubObjectPermanently( self, "SHIELDB02", true )
    ObjectHideSubObjectPermanently( self, "SHIELDB03", true )
    ObjectHideSubObjectPermanently( self, "SHIELDB04", true )
    ObjectHideSubObjectPermanently( self, "SHIELDC", true )
    ObjectHideSubObjectPermanently( self, "WEAP01", true )
    ObjectHideSubObjectPermanently( self, "WEAP02", true )
    ObjectHideSubObjectPermanently( self, "WEAP03", true )
    ObjectHideSubObjectPermanently( self, "HA", true )
    ObjectHideSubObjectPermanently( self, "MASK", true )

    local armor         =    GetRandomNumber()
    local head          =    GetRandomNumber()
    local shield          =    GetRandomNumber()
    local weapon          =    GetRandomNumber()

    if armor <= 0.17 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif armor <= 0.34 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
    elseif armor <= 0.51 then
        ObjectHideSubObjectPermanently( self, "BODY03", false )
    elseif armor <= 0.68 then
        ObjectHideSubObjectPermanently( self, "BODY04", false )
    elseif armor <= 0.85 then
        ObjectHideSubObjectPermanently( self, "BODY05", false )
     else
        ObjectHideSubObjectPermanently( self, "BODY06", false )
    end

    if head <= 0.17 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.34 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head <= 0.51 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    elseif head <= 0.68 then
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    elseif head <= 0.85 then
        ObjectHideSubObjectPermanently( self, "HEAD05", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD06", false )
    end

    if shield <= 0.5 then
        ObjectHideSubObjectPermanently( self, "SHIELDC", false )
    elseif shield <= 0.57 then
        ObjectHideSubObjectPermanently( self, "SHIELDA01", false )
    elseif shield <= 0.64 then
        ObjectHideSubObjectPermanently( self, "SHIELDA02", false )
    elseif shield <= 0.71 then
        ObjectHideSubObjectPermanently( self, "SHIELDA03", false )
    elseif shield <= 0.79 then
        ObjectHideSubObjectPermanently( self, "SHIELDB01", false )
    elseif shield <= 0.86 then
        ObjectHideSubObjectPermanently( self, "SHIELDB02", false )
    elseif shield <= 0.93 then
        ObjectHideSubObjectPermanently( self, "SHIELDB03", false )
     else
        ObjectHideSubObjectPermanently( self, "SHIELDB04", false )
    end

    if weapon <= 0.33 then
        ObjectHideSubObjectPermanently( self, "WEAP01", false )
		ObjectGrantUpgrade( self, "Upgrade_AragornCostume_01" )
    elseif weapon <= 0.66 then
        ObjectHideSubObjectPermanently( self, "WEAP02", false )
		ObjectGrantUpgrade( self, "Upgrade_AragornCostume_02" )
     else
        ObjectHideSubObjectPermanently( self, "WEAP03", false )
		ObjectGrantUpgrade( self, "Upgrade_AragornCostume_03" )
    end

end

function OnLossothHunterCreated(self)
    ObjectHideSubObjectPermanently( self, "BODY01", true )
    ObjectHideSubObjectPermanently( self, "BODY02", true )
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "SKATESA", true )
    ObjectHideSubObjectPermanently( self, "SKATESB", true )
    ObjectHideSubObjectPermanently( self, "SNOWSHOES", true )
    ObjectHideSubObjectPermanently( self, "GLASSES", true )

    local armor         =    GetRandomNumber()
    local head          =    GetRandomNumber()
    local skates          =    GetRandomNumber()
    local snowshoes          =    GetRandomNumber()
    local glasses          =    GetRandomNumber()

    if armor <= 0.50 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
     else
        ObjectHideSubObjectPermanently( self, "BODY02", false )
    end

    if head <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

    if skates <= 0.50 then
        ObjectHideSubObjectPermanently( self, "SKATESA", false )
        ObjectHideSubObjectPermanently( self, "SKATESB", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

	if snowshoes <= 0.50 then
        ObjectHideSubObjectPermanently( self, "SNOWSHOES", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

	if glasses <= 0.50 then
        ObjectHideSubObjectPermanently( self, "GLASSES", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

end

function OnArmedMinerCreated(self)
    ObjectHideSubObjectPermanently( self, "BODY01", true )
    ObjectHideSubObjectPermanently( self, "BODY02", true )
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "SHOVEL", true )
    ObjectHideSubObjectPermanently( self, "SATCHEL", true )

    local armor         =    GetRandomNumber()
    local head          =    GetRandomNumber()
    local shovel          =    GetRandomNumber()
    local satchel          =    GetRandomNumber()

    if armor <= 0.50 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
     else
        ObjectHideSubObjectPermanently( self, "BODY02", false )
    end

    if head <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

     if shovel <= 0.50 then
        ObjectHideSubObjectPermanently( self, "SHOVEL", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

	if satchel <= 0.50 then
        ObjectHideSubObjectPermanently( self, "SATCHEL", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

end

function OnDwarvenGrimHammerCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )

    local head          =    GetRandomNumber()

    if head <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

end

function OnDwarvenGuardianBannerCreated(self)
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "HEAD04", true )
    ObjectHideSubObjectPermanently( self, "BODY01", true )
    ObjectHideSubObjectPermanently( self, "BODY02", true )
    ObjectHideSubObjectPermanently( self, "WEAP01", true )
    ObjectHideSubObjectPermanently( self, "WEAP02", true )
    ObjectHideSubObjectPermanently( self, "WEAP03", true )

    local armor         =    GetRandomNumber()
    local head          =    GetRandomNumber()
    local weapon          =    GetRandomNumber()

    if armor <= 0.50 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
     else
        ObjectHideSubObjectPermanently( self, "BODY02", false )
    end

     if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    end

    if weapon <= 0.33 then
        ObjectHideSubObjectPermanently( self, "WEAP01", false )
    elseif weapon <= 0.66 then
        ObjectHideSubObjectPermanently( self, "WEAP02", false )
     else
        ObjectHideSubObjectPermanently( self, "WEAP03", false )
    end

end

function OnMineLauncherCreated(self)
    ObjectHideSubObjectPermanently( self, "HELMET01", true )
    ObjectHideSubObjectPermanently( self, "HELMET02", true )
end

function OnIsengardMineCreated(self)
    ObjectHideSubObjectPermanently( self, "O1_HELMET01", true )
    ObjectHideSubObjectPermanently( self, "O2_HELMET01", true )
    ObjectHideSubObjectPermanently( self, "O1_HELMET02", true )
    ObjectHideSubObjectPermanently( self, "O2_HELMET02", true )
end

function OnIronHillsSpearsCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "Hammer1", true )
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "HEAD04", true )
    ObjectHideSubObjectPermanently( self, "HEAD05", true )
    ObjectHideSubObjectPermanently( self, "HEAD06", true )
    ObjectHideSubObjectPermanently( self, "HEAD07", true )
    ObjectHideSubObjectPermanently( self, "HEAD08", true )
    ObjectHideSubObjectPermanently( self, "HEAD09", true )
    ObjectHideSubObjectPermanently( self, "HEAD10", true )
    ObjectHideSubObjectPermanently( self, "HEAD11", true )
    ObjectHideSubObjectPermanently( self, "HEAD12", true )

    local head          =    GetRandomNumber()

	    if head <= 0.1 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.2 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
	elseif head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    elseif head <= 0.4 then
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
	elseif head <= 0.45 then
        ObjectHideSubObjectPermanently( self, "HEAD05", false )
    elseif head <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HEAD06", false )
	elseif head <= 0.6 then
        ObjectHideSubObjectPermanently( self, "HEAD07", false )
    elseif head <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEAD08", false )
	elseif head <= 0.8 then
        ObjectHideSubObjectPermanently( self, "HEAD09", false )
    elseif head <= 0.85 then
        ObjectHideSubObjectPermanently( self, "HEAD10", false )
	elseif head <= 0.9 then
        ObjectHideSubObjectPermanently( self, "HEAD11", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD12", false )
    end

end

function OnIronHillsWarriorsCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "Hammer1", true )
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "HEAD04", true )
    ObjectHideSubObjectPermanently( self, "HEAD05", true )
    ObjectHideSubObjectPermanently( self, "HEAD06", true )
    ObjectHideSubObjectPermanently( self, "HEAD07", true )
    ObjectHideSubObjectPermanently( self, "HEAD08", true )
    ObjectHideSubObjectPermanently( self, "HEAD09", true )
    ObjectHideSubObjectPermanently( self, "HEAD10", true )
    ObjectHideSubObjectPermanently( self, "HEAD11", true )
    ObjectHideSubObjectPermanently( self, "HEAD12", true )

    local head          =    GetRandomNumber()

	    if head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.6 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
	elseif head <= 0.8 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    end

end

function OnIronHillsCbowsCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "Hammer1", true )
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "HEAD04", true )
    ObjectHideSubObjectPermanently( self, "HEAD05", true )
    ObjectHideSubObjectPermanently( self, "HEAD06", true )
    ObjectHideSubObjectPermanently( self, "HEAD07", true )
    ObjectHideSubObjectPermanently( self, "HEAD08", true )

    local head          =    GetRandomNumber()

	    if head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    elseif head <= 0.6 then
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
	elseif head <= 0.8 then
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    end

end

function OnDwarvenVWCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "Hammer1", true )
end

function OnKhazadGuardCreated(self)
    ObjectHideSubObjectPermanently( self, "HEAD1", true )
    ObjectHideSubObjectPermanently( self, "HEAD2", true )
    ObjectHideSubObjectPermanently( self, "HEAD3", true )

    local head          =    GetRandomNumber()

     if head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HEAD1", false )
    elseif head <= 0.6 then
        ObjectHideSubObjectPermanently( self, "HEAD2", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD3", false )
    end

end

function OnKhazadVetCreated(self)
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "HEAD04", true )
    ObjectHideSubObjectPermanently( self, "TANKARD", true )
    ObjectHideSubObjectPermanently( self, "STRAP", true )
    ObjectHideSubObjectPermanently( self, "HEAD", true )

    local head          =    GetRandomNumber()
    local tankard          =    GetRandomNumber()
    local behead          =    GetRandomNumber()

     if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    end

     if tankard <= 0.50 then
        ObjectHideSubObjectPermanently( self, "TANKARD", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

     if behead <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEAD", false )
        ObjectHideSubObjectPermanently( self, "STRAP", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

end

function OnKhazadUzbadulCreated(self)
    ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )

    local head          =    GetRandomNumber()

     if head <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

end

function OnEredLuinDwarfCreated(self)
    ObjectHideSubObjectPermanently( self, "BODY01", true )
    ObjectHideSubObjectPermanently( self, "BODY02", true )
    ObjectHideSubObjectPermanently( self, "BODY03", true )

	ObjectHideSubObjectPermanently( self, "OINSTAFF", true )
    ObjectHideSubObjectPermanently( self, "BOFURAXE", true )
    ObjectHideSubObjectPermanently( self, "THORINAXE", true )

    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HEAD04", true )
    ObjectHideSubObjectPermanently( self, "HEAD05", true )
    ObjectHideSubObjectPermanently( self, "HEAD06", true )
	ObjectHideSubObjectPermanently( self, "HEAD07", true )

	ObjectHideSubObjectPermanently( self, "SHIELD01", true )
    ObjectHideSubObjectPermanently( self, "SHIELD02", true )
    ObjectHideSubObjectPermanently( self, "SHIELD03", true )

	ObjectHideSubObjectPermanently( self, "SWORD01L", true )
    ObjectHideSubObjectPermanently( self, "SMALLAXE01L", true )
    ObjectHideSubObjectPermanently( self, "SMALLAXE02L", true )

	ObjectHideSubObjectPermanently( self, "SWORD01R", true )
    ObjectHideSubObjectPermanently( self, "SMALLAXE01R", true )
    ObjectHideSubObjectPermanently( self, "SMALLAXE02R", true )

	ObjectHideSubObjectPermanently( self, "PICKAXE", true )

    ObjectHideSubObjectPermanently( self, "DAGGER01", true )
    ObjectHideSubObjectPermanently( self, "DAGGER02", true )



    local body         =    GetRandomNumber()
    local head          =    GetRandomNumber()
    local twohweapon          =    GetRandomNumber()
	local onehweaponr          =    GetRandomNumber()
	local onehweaponl          =    GetRandomNumber()
	local pickaxe          =    GetRandomNumber()
	local daggers          =    GetRandomNumber()
	local shield          =    GetRandomNumber()

	if pickaxe <= 0.5 then
        ObjectHideSubObjectPermanently( self, "PICKAXE", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    if daggers <= 0.3 then
        ObjectHideSubObjectPermanently( self, "DAGGER01", false )
    elseif daggers <= 0.6 then
        ObjectHideSubObjectPermanently( self, "DAGGER02", false )
	elseif daggers <= 0.8 then
        ObjectHideSubObjectPermanently( self, "DAGGER01", false )
		ObjectHideSubObjectPermanently( self, "DAGGER02", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

	if shield <= 0.2 then
        ObjectHideSubObjectPermanently( self, "SHIELD01", false )
    elseif shield <= 0.4 then
        ObjectHideSubObjectPermanently( self, "SHIELD02", false )
	elseif shield <= 0.6 then
        ObjectHideSubObjectPermanently( self, "SHIELD03", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

	if twohweapon <= 0.3 then
        ObjectHideSubObjectPermanently( self, "OINSTAFF", false )
    elseif twohweapon <= 0.6 then
        ObjectHideSubObjectPermanently( self, "BOFURAXE", false )
     else
        ObjectHideSubObjectPermanently( self, "THORINAXE", false )
    end

	if onehweaponr <= 0.4 then
        ObjectHideSubObjectPermanently( self, "SWORD01R", false )
    elseif onehweaponr <= 0.8 then
        ObjectHideSubObjectPermanently( self, "SMALLAXE01R", false )
     else
        ObjectHideSubObjectPermanently( self, "SMALLAXE02R", false )
    end

	if onehweaponl <= 0.4 then
        ObjectHideSubObjectPermanently( self, "SWORD01L", false )
    elseif onehweaponl <= 0.8 then
        ObjectHideSubObjectPermanently( self, "SMALLAXE01L", false )
     else
        ObjectHideSubObjectPermanently( self, "SMALLAXE02L", false )
    end

    if body <= 0.4 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif body <= 0.8 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
     else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
    end

     if head <= 0.14 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.28 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head <= 0.42 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    elseif head <= 0.56 then
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    elseif head <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEAD05", false )
    elseif head <= 0.84 then
        ObjectHideSubObjectPermanently( self, "HEAD06", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD07", false )
    end

end

function OnEredLuinGuardCreated(self)
    ObjectHideSubObjectPermanently( self, "MITHRIL", true )
    ObjectHideSubObjectPermanently( self, "BODY01", true )
    ObjectHideSubObjectPermanently( self, "BODY02", true )
    ObjectHideSubObjectPermanently( self, "BODY03", true )
	ObjectHideSubObjectPermanently( self, "ARMOR", true )
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HEAD04", true )

    local body         =    GetRandomNumber()
    local head          =    GetRandomNumber()
	local armor          =    GetRandomNumber()

    if body <= 0.4 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif body <= 0.8 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
     else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
    end

    if head <= 0.25 then
		ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.50 then
		ObjectHideSubObjectPermanently( self, "HEAD02", false )
	elseif head <= 0.75 then
		ObjectHideSubObjectPermanently( self, "HEAD03", false )
    else
		ObjectHideSubObjectPermanently( self, "HEAD04", false )
    end

	if armor <= 0.5 then
        ObjectHideSubObjectPermanently( self, "ARMOR", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

end

function OnEredLuinBannerCreated(self)
    ObjectHideSubObjectPermanently( self, "BODY01", true )
    ObjectHideSubObjectPermanently( self, "BODY02", true )
    ObjectHideSubObjectPermanently( self, "BODY03", true )

	ObjectHideSubObjectPermanently( self, "OINSTAFF", true )
    ObjectHideSubObjectPermanently( self, "BOFURAXE", true )
    ObjectHideSubObjectPermanently( self, "THORINAXE", true )

    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HEAD04", true )
    ObjectHideSubObjectPermanently( self, "HEAD05", true )
    ObjectHideSubObjectPermanently( self, "HEAD06", true )
	ObjectHideSubObjectPermanently( self, "HEAD07", true )

	ObjectHideSubObjectPermanently( self, "SHIELDH01", true )
    ObjectHideSubObjectPermanently( self, "SHIELDH02", true )
    ObjectHideSubObjectPermanently( self, "SHIELDH03", true )

	ObjectHideSubObjectPermanently( self, "SWORD01L", true )
    ObjectHideSubObjectPermanently( self, "SMALLAXE01L", true )
    ObjectHideSubObjectPermanently( self, "SMALLAXE02L", true )

	ObjectHideSubObjectPermanently( self, "SWORD01R", true )
    ObjectHideSubObjectPermanently( self, "SMALLAXE01R", true )
    ObjectHideSubObjectPermanently( self, "SMALLAXE02R", true )

	ObjectHideSubObjectPermanently( self, "PICKAXE", true )

    ObjectHideSubObjectPermanently( self, "DAGGER01", true )
    ObjectHideSubObjectPermanently( self, "DAGGER02", true )



    local body         =    GetRandomNumber()
    local head          =    GetRandomNumber()
    local twohweapon          =    GetRandomNumber()
	local onehweaponr          =    GetRandomNumber()
	local onehweaponl          =    GetRandomNumber()
	local pickaxe          =    GetRandomNumber()
	local daggers          =    GetRandomNumber()
	local shield          =    GetRandomNumber()

	if pickaxe <= 0.5 then
        ObjectHideSubObjectPermanently( self, "PICKAXE", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    if daggers <= 0.3 then
        ObjectHideSubObjectPermanently( self, "DAGGER01", false )
    elseif daggers <= 0.6 then
        ObjectHideSubObjectPermanently( self, "DAGGER02", false )
	elseif daggers <= 0.8 then
        ObjectHideSubObjectPermanently( self, "DAGGER01", false )
		ObjectHideSubObjectPermanently( self, "DAGGER02", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

	if shield <= 0.4 then
        ObjectHideSubObjectPermanently( self, "SHIELDH01", false )
    elseif shield <= 0.8 then
        ObjectHideSubObjectPermanently( self, "SHIELDH02", false )
     else
        ObjectHideSubObjectPermanently( self, "SHIELDH03", false )
    end

	if twohweapon <= 0.3 then
        ObjectHideSubObjectPermanently( self, "OINSTAFF", false )
    elseif twohweapon <= 0.6 then
        ObjectHideSubObjectPermanently( self, "BOFURAXE", false )
     else
        ObjectHideSubObjectPermanently( self, "THORINAXE", false )
    end

	if onehweaponr <= 0.4 then
        ObjectHideSubObjectPermanently( self, "SWORD01R", false )
    elseif onehweaponr <= 0.8 then
        ObjectHideSubObjectPermanently( self, "SMALLAXE01R", false )
     else
        ObjectHideSubObjectPermanently( self, "SMALLAXE02R", false )
    end

	if onehweaponl <= 0.4 then
        ObjectHideSubObjectPermanently( self, "SWORD01L", false )
    elseif onehweaponl <= 0.8 then
        ObjectHideSubObjectPermanently( self, "SMALLAXE01L", false )
     else
        ObjectHideSubObjectPermanently( self, "SMALLAXE02L", false )
    end

    if body <= 0.4 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif body <= 0.8 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
     else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
    end

     if head <= 0.14 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.28 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head <= 0.42 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    elseif head <= 0.56 then
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    elseif head <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEAD05", false )
    elseif head <= 0.84 then
        ObjectHideSubObjectPermanently( self, "HEAD06", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD07", false )
    end

end

function OnKhazadBannerCreated(self)
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )

	local head          =    GetRandomNumber()

	if head <= 0.33 then
	ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

end

function OnDwarvenCivCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "Hammer1", true )
    ObjectHideSubObjectPermanently( self, "PAULDRONS01", true )
    ObjectHideSubObjectPermanently( self, "CLOAK1", true )
    ObjectHideSubObjectPermanently( self, "CLOAK2", true )
    ObjectHideSubObjectPermanently( self, "CLOAK3", true )
    ObjectHideSubObjectPermanently( self, "CLOAK4", true )
    ObjectHideSubObjectPermanently( self, "CIV1", true )
    ObjectHideSubObjectPermanently( self, "CIV2", true )
    ObjectHideSubObjectPermanently( self, "CIV3", true )
    ObjectHideSubObjectPermanently( self, "CIV4", true )
    ObjectHideSubObjectPermanently( self, "LEGS1", true )
    ObjectHideSubObjectPermanently( self, "LEGS2", true )
    ObjectHideSubObjectPermanently( self, "LEGS3", true )
    ObjectHideSubObjectPermanently( self, "LEGS4", true )

    local helmet         =    GetRandomNumber()
    local head          =    GetRandomNumber()
    local armor          =    GetRandomNumber()

    if helmet <= 0.3 then
        ObjectHideSubObjectPermanently( self, "CLOAK1", false )
    elseif helmet <= 0.6 then
        ObjectHideSubObjectPermanently( self, "CLOAK2", false )
	elseif helmet <= 0.8 then
        ObjectHideSubObjectPermanently( self, "CLOAK2", false )
     else
        ObjectHideSubObjectPermanently( self, "CLOAK4", false )
    end

    if head <= 0.2 then
        ObjectHideSubObjectPermanently( self, "CIV1", false )
        ObjectHideSubObjectPermanently( self, "LEGS1", false )
    elseif head <= 0.5 then
        ObjectHideSubObjectPermanently( self, "CIV2", false )
        ObjectHideSubObjectPermanently( self, "LEGS2", false )
    elseif head <= 0.7 then
        ObjectHideSubObjectPermanently( self, "CIV3", false )
        ObjectHideSubObjectPermanently( self, "LEGS3", false )
     else
        ObjectHideSubObjectPermanently( self, "CIV4", false )
        ObjectHideSubObjectPermanently( self, "LEGS4", false )
    end

    if armor <= 0.5 then
        ObjectHideSubObjectPermanently( self, "PAULDRONS01", false )
     else
        ObjectHideSubObjectPermanently( self, "PAULDRONS02", false )
    end

end

function OnDwarvenArcherCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "Hammer1", true )
    ObjectHideSubObjectPermanently( self, "PAULDRONS01", true )
    ObjectHideSubObjectPermanently( self, "PAULDRONS02", true )
    ObjectHideSubObjectPermanently( self, "AXE01", true )
    ObjectHideSubObjectPermanently( self, "AXE02", true )
    ObjectHideSubObjectPermanently( self, "AXE03", true )
    ObjectHideSubObjectPermanently( self, "QUIVERA", true )
    ObjectHideSubObjectPermanently( self, "QUIVERB", true )
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "HEAD04", true )
    ObjectHideSubObjectPermanently( self, "HEAD05", true )
    ObjectHideSubObjectPermanently( self, "HEAD06", true )
    ObjectHideSubObjectPermanently( self, "HEAD07", true )
    ObjectHideSubObjectPermanently( self, "HEAD08", true )

    local helmet         =    GetRandomNumber()
    local head          =    GetRandomNumber()
    local armor          =    GetRandomNumber()
    local weaponleft     =    GetRandomNumber()

    if helmet <= 0.5 then
        ObjectHideSubObjectPermanently( self, "QUIVERA", false )
     else
        ObjectHideSubObjectPermanently( self, "QUIVERB", false )
    end

    if head <= 0.2 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif helmet <= 0.4 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    elseif head <= 0.6 then
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    elseif head <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEAD05", false )
    elseif head <= 0.8 then
        ObjectHideSubObjectPermanently( self, "HEAD06", false )
    elseif head <= 0.9 then
        ObjectHideSubObjectPermanently( self, "HEAD07", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD08", false )
    end

    if armor <= 0.5 then
        ObjectHideSubObjectPermanently( self, "PAULDRONS01", false )
     else
        ObjectHideSubObjectPermanently( self, "PAULDRONS02", false )
    end

    if weaponleft <= 0.30 then
        ObjectHideSubObjectPermanently( self, "AXE01", false )
    elseif weaponleft <= 0.60 then
        ObjectHideSubObjectPermanently( self, "AXE02", false )
     else
        ObjectHideSubObjectPermanently( self, "AXE03", false )
    end

end

function OnMoundDwellerMounted(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl2" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl3" )
	ObjectSetEnragedState(self, true)
	--ExecuteAction("NAMED_KILL", self)
end

function OnMoundDwellerNotMounted(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl3" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )
	ObjectSetEnragedState(self, false)
	--ExecuteAction("NAMED_KILL", self)
end

function CreateAHeroHideEverything(self)
	ObjectHideSubObjectPermanently( self, "SWORD", true )
	ObjectHideSubObjectPermanently( self, "BOW", true )
	ObjectHideSubObjectPermanently( self, "BOW_03", true )
	ObjectHideSubObjectPermanently( self, "BOW_04", true )
	ObjectHideSubObjectPermanently( self, "BOW_05", true )
	ObjectHideSubObjectPermanently( self, "TRUNK01", true )
	ObjectHideSubObjectPermanently( self, "STAFF_LIGHT", true )
	ObjectHideSubObjectPermanently( self, "OBJECT01", true )

	ObjectHideSubObjectPermanently( self, "SHIELD01", true )
	ObjectHideSubObjectPermanently( self, "SHIELD_01", true )
	ObjectHideSubObjectPermanently( self, "SHIELD_02", true )
	ObjectHideSubObjectPermanently( self, "SPEAR", true )
	ObjectHideSubObjectPermanently( self, "SHIELD_B", true )
	ObjectHideSubObjectPermanently( self, "SHIELD_C", true )
	ObjectHideSubObjectPermanently( self, "SHIELD_D", true )
	ObjectHideSubObjectPermanently( self, "B_SHIELD", true )
	ObjectHideSubObjectPermanently( self, "WEAPON_A", true )
	ObjectHideSubObjectPermanently( self, "WEAPON_B", true )
	ObjectHideSubObjectPermanently( self, "WEAPON_C", true )
	ObjectHideSubObjectPermanently( self, "WEAPON_D", true )

	ObjectHideSubObjectPermanently( self, "WEAP_01", true )
	ObjectHideSubObjectPermanently( self, "WEAP_02", true )
	ObjectHideSubObjectPermanently( self, "WEAP_03", true )
	ObjectHideSubObjectPermanently( self, "WEAP_04", true )
	ObjectHideSubObjectPermanently( self, "WEAP_05", true )
	ObjectHideSubObjectPermanently( self, "WEAP_06", true )

	ObjectHideSubObjectPermanently( self, "AXE02", true )

	ObjectHideSubObjectPermanently( self, "AxeWeapon", true )
	ObjectHideSubObjectPermanently( self, "Belthronding", true )
	-- ObjectHideSubObjectPermanently( self, "Mithlondrecurve", true )
	ObjectHideSubObjectPermanently( self, "Dwarf_Axe01", true )
	ObjectHideSubObjectPermanently( self, "FireBrand", true )
	ObjectHideSubObjectPermanently( self, "FireBrand_SM", true )
	ObjectHideSubObjectPermanently( self, "FireBrand_FX01", true )
	ObjectHideSubObjectPermanently( self, "FireBrand_FX02", true )
	ObjectHideSubObjectPermanently( self, "Gurthang", true )
	ObjectHideSubObjectPermanently( self, "Gurthang_SM", true )
	ObjectHideSubObjectPermanently( self, "HeroOfTheWestShield", true )
	ObjectHideSubObjectPermanently( self, "HeroOfTheWestShield_SM", true )
	ObjectHideSubObjectPermanently( self, "MithlondBow", true )
	ObjectHideSubObjectPermanently( self, "TrollBane", true )
	ObjectHideSubObjectPermanently( self, "TrollBane_SM", true )
	ObjectHideSubObjectPermanently( self, "TrollBane_FX01", true )
	ObjectHideSubObjectPermanently( self, "TrollBane_FX02", true )
	ObjectHideSubObjectPermanently( self, "TrollMace", true )
	ObjectHideSubObjectPermanently( self, "TrollSword", true )
	ObjectHideSubObjectPermanently( self, "WestronSword", true )
	ObjectHideSubObjectPermanently( self, "WestronSword", true )
	ObjectHideSubObjectPermanently( self, "WestronSword_SM", true )
	ObjectHideSubObjectPermanently( self, "WizardStaff01", true )
	ObjectHideSubObjectPermanently( self, "WizStaff01_FX01", true )
	ObjectHideSubObjectPermanently( self, "WizStaff01_FX2", true )
	ObjectHideSubObjectPermanently( self, "WizStaff01_FX3", true )
	ObjectHideSubObjectPermanently( self, "WizStaff01_FX4", true )
	ObjectHideSubObjectPermanently( self, "WizardStaff02", true )
	ObjectHideSubObjectPermanently( self, "WizStaff02_FX1", true )
	ObjectHideSubObjectPermanently( self, "WizardStaff03", true )
	ObjectHideSubObjectPermanently( self, "WizStaff03_FX01", true )
	ObjectHideSubObjectPermanently( self, "WizStaff03_FX02", true )
	ObjectHideSubObjectPermanently( self, "WizardStaff04", true )
	ObjectHideSubObjectPermanently( self, "WizStaff04_FX01", true )
	ObjectHideSubObjectPermanently( self, "WizStaff04_FX02", true )
	ObjectHideSubObjectPermanently( self, "WizStaff04_FX03", true )
	ObjectHideSubObjectPermanently( self, "WizStaff04_FX04", true )
	ObjectHideSubObjectPermanently( self, "WizStaff04_FX05", true )
	ObjectHideSubObjectPermanently( self, "WizStaff04_FX06", true )
	ObjectHideSubObjectPermanently( self, "WizStaff04_FX07", true )
	ObjectHideSubObjectPermanently( self, "WizardSword", true )
	ObjectHideSubObjectPermanently( self, "CMSword01", true )
	ObjectHideSubObjectPermanently( self, "CMSword02", true )
	ObjectHideSubObjectPermanently( self, "CHEST_00", true )
	ObjectHideSubObjectPermanently( self, "CHEST_01", true )
	ObjectHideSubObjectPermanently( self, "CHEST_02", true )
	ObjectHideSubObjectPermanently( self, "CHEST_03", true)
	ObjectHideSubObjectPermanently( self, "CHEST_04", true )
	ObjectHideSubObjectPermanently( self, "CHEST_05", true )
	ObjectHideSubObjectPermanently( self, "CHEST_06", true)
	ObjectHideSubObjectPermanently( self, "BOOT_00", true )
	ObjectHideSubObjectPermanently( self, "BOOT_01", true )
	ObjectHideSubObjectPermanently( self, "BOOT_02", true )
	ObjectHideSubObjectPermanently( self, "BOOT_03", true )
	ObjectHideSubObjectPermanently( self, "BOOT_04", true )
	ObjectHideSubObjectPermanently( self, "BOOT_05", true )
	ObjectHideSubObjectPermanently( self, "BOOT_06", true )
	ObjectHideSubObjectPermanently( self, "SHLD_00", true )
	ObjectHideSubObjectPermanently( self, "SHLD_01", true )
	ObjectHideSubObjectPermanently( self, "SHLD_02", true )
	ObjectHideSubObjectPermanently( self, "SHLD_03", true )
	ObjectHideSubObjectPermanently( self, "SHLD_04", true )
	ObjectHideSubObjectPermanently( self, "SHLD_05", true )
	ObjectHideSubObjectPermanently( self, "SHLD_06", true )
	ObjectHideSubObjectPermanently( self, "SHLD_07", true )
	ObjectHideSubObjectPermanently( self, "SHLD_08", true )
	ObjectHideSubObjectPermanently( self, "SHLD_09", true )
	ObjectHideSubObjectPermanently( self, "SLDR_00", true )
	ObjectHideSubObjectPermanently( self, "SLDR_01", true )
	ObjectHideSubObjectPermanently( self, "SLDR_02", true )
	ObjectHideSubObjectPermanently( self, "SLDR_03", true )
	ObjectHideSubObjectPermanently( self, "SLDR_04", true )
	ObjectHideSubObjectPermanently( self, "SLDR_05", true )
	ObjectHideSubObjectPermanently( self, "SLDR_06", true )
	ObjectHideSubObjectPermanently( self, "SLDR_07", true )
	ObjectHideSubObjectPermanently( self, "SLDR_08", true )
	ObjectHideSubObjectPermanently( self, "Shield_1OG", true )
	ObjectHideSubObjectPermanently( self, "Shield_2OG", true )
	ObjectHideSubObjectPermanently( self, "HAIR_00", true )
	ObjectHideSubObjectPermanently( self, "HAIR_01", true )
	ObjectHideSubObjectPermanently( self, "HLMT_00", true )
	ObjectHideSubObjectPermanently( self, "HLMT_01", true )
	ObjectHideSubObjectPermanently( self, "HLMT_02", true )
	ObjectHideSubObjectPermanently( self, "HLMT_03", true )
	ObjectHideSubObjectPermanently( self, "HLMT_03A", true )
	ObjectHideSubObjectPermanently( self, "HLMT_03B", true )
	ObjectHideSubObjectPermanently( self, "HLMT_04", true )
	ObjectHideSubObjectPermanently( self, "HLMT_05", true )
	ObjectHideSubObjectPermanently( self, "HLMT_05A", true )
	ObjectHideSubObjectPermanently( self, "HLMT_05B", true )
	ObjectHideSubObjectPermanently( self, "HLMT_06", true )
	ObjectHideSubObjectPermanently( self, "HLMT_07", true )
	ObjectHideSubObjectPermanently( self, "HLMT_07_LOD1", true )
	ObjectHideSubObjectPermanently( self, "HLMT_08", true )
	ObjectHideSubObjectPermanently( self, "HLMT_09", true )
	ObjectHideSubObjectPermanently( self, "HLMT_10", true )
	ObjectHideSubObjectPermanently( self, "GNLT_00", true )
	ObjectHideSubObjectPermanently( self, "GNLT_01", true )
	ObjectHideSubObjectPermanently( self, "GNLT_02", true )
	ObjectHideSubObjectPermanently( self, "GNLT_03", true )
	ObjectHideSubObjectPermanently( self, "GNLT_04", true )
	ObjectHideSubObjectPermanently( self, "GNLT_05", true )
	ObjectHideSubObjectPermanently( self, "GNLT_06", true )
	ObjectHideSubObjectPermanently( self, "GNLT_07", true )
	ObjectHideSubObjectPermanently( self, "GNLT_08", true )
	ObjectHideSubObjectPermanently( self, "GHLT_08", true )
	ObjectHideSubObjectPermanently( self, "GNLT_09", true )
	ObjectHideSubObjectPermanently( self, "GNLT_09_LOD1", true )
	ObjectHideSubObjectPermanently( self, "GNLT_10", true )
	ObjectHideSubObjectPermanently( self, "SPR_01", true )
	ObjectHideSubObjectPermanently( self, "PAXE_01", true )
	ObjectHideSubObjectPermanently( self, "PAXE_01_LOD1", true )
	ObjectHideSubObjectPermanently( self, "SWRD_01", true )
	ObjectHideSubObjectPermanently( self, "SWRD_02", true )
	ObjectHideSubObjectPermanently( self, "SWRD_03", true )
	ObjectHideSubObjectPermanently( self, "SWRD_04", true )
	ObjectHideSubObjectPermanently( self, "SWRD_05", true )
	ObjectHideSubObjectPermanently( self, "SWD_01", true )
	ObjectHideSubObjectPermanently( self, "SWD_02", true )
	ObjectHideSubObjectPermanently( self, "SWD_03", true )
	ObjectHideSubObjectPermanently( self, "SWD_04", true )
	ObjectHideSubObjectPermanently( self, "STFF_05", true )
	ObjectHideSubObjectPermanently( self, "STFF_06", true )
	ObjectHideSubObjectPermanently( self, "objSLDR_01", true )
	ObjectHideSubObjectPermanently( self, "objSLDR_02", true )
	ObjectHideSubObjectPermanently( self, "objSLDR_03", true )
	ObjectHideSubObjectPermanently( self, "objHLMT_01", true )
	ObjectHideSubObjectPermanently( self, "objHLMT_02", true )
	ObjectHideSubObjectPermanently( self, "objHLMT_03", true )
	ObjectHideSubObjectPermanently( self, "objHLMT_04", true )
	ObjectHideSubObjectPermanently( self, "Uruk_Sword_01", true )
	ObjectHideSubObjectPermanently( self, "Uruk_Sword_02", true )
	ObjectHideSubObjectPermanently( self, "Uruk_Sword_03", true )
	ObjectHideSubObjectPermanently( self, "TrollTree", true )
	ObjectHideSubObjectPermanently( self, "TrollHammer", true )
	ObjectHideSubObjectPermanently( self, "CLUB_01", true )
	ObjectHideSubObjectPermanently( self, "CLUB_02", true )
	ObjectHideSubObjectPermanently( self, "CLUB_03", true )
	ObjectHideSubObjectPermanently( self, "HMR_01", true )
	ObjectHideSubObjectPermanently( self, "HMR_02", true )
	ObjectHideSubObjectPermanently( self, "HMR_03", true )
	ObjectHideSubObjectPermanently( self, "HMR_04", true )
	ObjectHideSubObjectPermanently( self, "BEARD_04", true )
	ObjectHideSubObjectPermanently( self, "BEARD_03", true )
	ObjectHideSubObjectPermanently( self, "BEARD_02", true )
	ObjectHideSubObjectPermanently( self, "BEARD_01", true )
	ObjectHideSubObjectPermanently( self, "BODY_01", true )
	ObjectHideSubObjectPermanently( self, "BODY_02", true )
	ObjectHideSubObjectPermanently( self, "BODY_03", true )
	ObjectHideSubObjectPermanently( self, "BODY_04", true )
	ObjectHideSubObjectPermanently( self, "BODY_05", true )
	ObjectHideSubObjectPermanently( self, "BODY_06", true )
	ObjectHideSubObjectPermanently( self, "BODY_07", true )
	ObjectHideSubObjectPermanently( self, "BODY_08", true )
	ObjectHideSubObjectPermanently( self, "AUX_01", true )
	ObjectHideSubObjectPermanently( self, "AUX_02", true )
	ObjectHideSubObjectPermanently( self, "AUX_03", true )
	ObjectHideSubObjectPermanently( self, "AUX_04", true )
	ObjectHideSubObjectPermanently( self, "AUX_05", true )
	ObjectHideSubObjectPermanently( self, "AUX_06", true )
	ObjectHideSubObjectPermanently( self, "AUX_07", true )
	ObjectHideSubObjectPermanently( self, "AUX_07", true )
	ObjectHideSubObjectPermanently( self, "AUX_08", true )
	ObjectHideSubObjectPermanently( self, "AUX_09", true )
	ObjectHideSubObjectPermanently( self, "AXE_01", true )
	ObjectHideSubObjectPermanently( self, "AXE_02", true )
	ObjectHideSubObjectPermanently( self, "AXE_03", true )
	ObjectHideSubObjectPermanently( self, "AXE_04", true )
	ObjectHideSubObjectPermanently( self, "AXE_05", true )
	ObjectHideSubObjectPermanently( self, "AXE_06", true )
	ObjectHideSubObjectPermanently( self, "AXE_07", true )
	ObjectHideSubObjectPermanently( self, "AXE_08", true )
	ObjectHideSubObjectPermanently( self, "AXE_09", true )
	ObjectHideSubObjectPermanently( self, "AXE_10", true )
	ObjectHideSubObjectPermanently( self, "AXE_11", true )
	ObjectHideSubObjectPermanently( self, "AXE_12", true )
	ObjectHideSubObjectPermanently( self, "AXE_13", true )
	ObjectHideSubObjectPermanently( self, "AXE_14", true )
	ObjectHideSubObjectPermanently( self, "AXE_15", true )
	ObjectHideSubObjectPermanently( self, "AXE_16", true )
	ObjectHideSubObjectPermanently( self, "AXE_17", true )
	ObjectHideSubObjectPermanently( self, "AXE_18", true )
	ObjectHideSubObjectPermanently( self, "BARREL", true )
	ObjectHideSubObjectPermanently( self, "OBJECT02", true )	-- Barrel on the Orc Raider
	ObjectHideSubObjectPermanently( self, "ARROW", true )
	ObjectHideSubObjectPermanently( self, "PLANE02", true )
	ObjectHideSubObjectPermanently( self, "ATHELASBAG", true )
	ObjectHideSubObjectPermanently( self, "SATCHEL", true )
	ObjectHideSubObjectPermanently( self, "WATERSKIN", true )
	ObjectHideSubObjectPermanently( self, "VAMBRACE01", true )
	ObjectHideSubObjectPermanently( self, "VAMBRACE02", true )
	ObjectHideSubObjectPermanently( self, "VAMBRACE03", true )
	ObjectHideSubObjectPermanently( self, "VAMBRACE04", true )
	ObjectHideSubObjectPermanently( self, "VAMBRACE01", true )
	ObjectHideSubObjectPermanently( self, "BEDROLL", true )
	ObjectHideSubObjectPermanently( self, "BACKBAG", true )
	ObjectHideSubObjectPermanently( self, "POUCH", true )
	ObjectHideSubObjectPermanently( self, "DAGGER", true )
	ObjectHideSubObjectPermanently( self, "BROOCH01", true )
	ObjectHideSubObjectPermanently( self, "BROOCH02", true )
	ObjectHideSubObjectPermanently( self, "BROOCH03", true )
	ObjectHideSubObjectPermanently( self, "BROOCH04", true )
	ObjectHideSubObjectPermanently( self, "BROOCH05", true )
	ObjectHideSubObjectPermanently( self, "BROOCH06", true )
	ObjectHideSubObjectPermanently( self, "BROOCH07", true )
	ObjectHideSubObjectPermanently( self, "BROOCH08", true )
	ObjectHideSubObjectPermanently( self, "BROOCH09", true )
	ObjectHideSubObjectPermanently( self, "HEADBAND", true )
	ObjectHideSubObjectPermanently( self, "PIPE", true )
	ObjectHideSubObjectPermanently( self, "HEAD", true )
	ObjectHideSubObjectPermanently( self, "NOHOOD", true )
	ObjectHideSubObjectPermanently( self, "OUTRIDER", true )
	ObjectHideSubObjectPermanently( self, "HOODHELM", true )
	ObjectHideSubObjectPermanently( self, "GREYHELM", true )
	ObjectHideSubObjectPermanently( self, "HEADHELM", true )
	ObjectHideSubObjectPermanently( self, "HOOD", true )
	ObjectHideSubObjectPermanently( self, "HEAD", true )
	ObjectHideSubObjectPermanently( self, "HEADHOOD", true )
	ObjectHideSubObjectPermanently( self, "CIRCLET", true )
	ObjectHideSubObjectPermanently( self, "MASK", true )
	ObjectHideSubObjectPermanently( self, "HELMHOOD", true )
	ObjectHideSubObjectPermanently( self, "SWORD01S", true )
	ObjectHideSubObjectPermanently( self, "SWORD02S", true )
	ObjectHideSubObjectPermanently( self, "SWORD03S", true )
	ObjectHideSubObjectPermanently( self, "SWORD04S", true )
	ObjectHideSubObjectPermanently( self, "SWORD05S", true )
	ObjectHideSubObjectPermanently( self, "SWORD06S", true )
	ObjectHideSubObjectPermanently( self, "SWORD07S", true )
	
	ObjectHideSubObjectPermanently( self, "VENDELHELMET", true )
	ObjectHideSubObjectPermanently( self, "FRUMHELMET", true )
	ObjectHideSubObjectPermanently( self, "CULTHELMET", true )
	ObjectHideSubObjectPermanently( self, "DKHELMET", true )
	ObjectHideSubObjectPermanently( self, "ARNORCROWN", true )
	ObjectHideSubObjectPermanently( self, "GONDORCROWN", true )
	ObjectHideSubObjectPermanently( self, "CARCROWN", true )
	ObjectHideSubObjectPermanently( self, "NORTHCROWN", true )
	ObjectHideSubObjectPermanently( self, "RESTHELMET", true )
	ObjectHideSubObjectPermanently( self, "KOTDHELMET", true )
	ObjectHideSubObjectPermanently( self, "GKHELM", true )
	ObjectHideSubObjectPermanently( self, "SOUTHHELM", true )
	ObjectHideSubObjectPermanently( self, "DUNDANHELMET", true )
	ObjectHideSubObjectPermanently( self, "CASTPAULDRONS", true )
	ObjectHideSubObjectPermanently( self, "BONEPAULDRONS", true )
	ObjectHideSubObjectPermanently( self, "CULTPAULDRONS", true )
	ObjectHideSubObjectPermanently( self, "DKPAULDRONS", true )
	ObjectHideSubObjectPermanently( self, "RESTPAULDRONS", true )
	ObjectHideSubObjectPermanently( self, "SOUTHPAULDRONS", true )
	ObjectHideSubObjectPermanently( self, "VENDELBRACERS", true )
	ObjectHideSubObjectPermanently( self, "BONEBRACERS", true )
	ObjectHideSubObjectPermanently( self, "BRACELETS", true )
	ObjectHideSubObjectPermanently( self, "VENDELSHIELD", true )
	ObjectHideSubObjectPermanently( self, "FRUMSHIELD", true )
	ObjectHideSubObjectPermanently( self, "ARNORSHIELD", true )
	ObjectHideSubObjectPermanently( self, "KINGSHIELD", true )
	ObjectHideSubObjectPermanently( self, "SOUTHSHIELD", true )
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "BONEGEAR", true )
	ObjectHideSubObjectPermanently( self, "NORTHBELT", true )
	ObjectHideSubObjectPermanently( self, "SOUTHBELT", true )
	ObjectHideSubObjectPermanently( self, "VENDELSWORD", true )
	ObjectHideSubObjectPermanently( self, "SOUTHSWORD", true )
	ObjectHideSubObjectPermanently( self, "MACE", true )
	ObjectHideSubObjectPermanently( self, "FRUMSWORD", true )
	ObjectHideSubObjectPermanently( self, "GKSWORD", true )
end

function OnCreateAHeroFunctions(self)
	CreateAHeroHideEverything(self)
end

function OnEvilShipCreated(self)
	ObjectHideSubObjectPermanently( self, "CAULDRON", true )
	ObjectHideSubObjectPermanently( self, "CAULDRON_FIRE", true )
	ObjectHideSubObjectPermanently( self, "CAULDRON_TOP", true )
	ObjectHideSubObjectPermanently( self, "CROWSNEST", true )
	ObjectHideSubObjectPermanently( self, "FLAG", true )
	ObjectHideSubObjectPermanently( self, "BANNER", true )
end

function OnGoodShipCreated(self)
	ObjectHideSubObjectPermanently( self, "UG_FLAMING_01", true )
	ObjectHideSubObjectPermanently( self, "UG_FLAMING_02", true )
	ObjectHideSubObjectPermanently( self, "UG_FLAMING_FIRE", true )
	ObjectHideSubObjectPermanently( self, "UG_ARMOR", true )
	ObjectHideSubObjectPermanently( self, "BANNER", true )
end

function OnShipWrightCreated(self)
	ObjectHideSubObjectPermanently( self, "GoodPart_A", true )
	ObjectHideSubObjectPermanently( self, "GoodPart_B", true )
	ObjectHideSubObjectPermanently( self, "EvilPart_A", true )
	ObjectHideSubObjectPermanently( self, "EvilPart_B", true )
end

function OnDormitoryBuildVariation(self,variation)

	local var = tonumber(variation)

	if var == 1 then
		ObjectSetGeometryActive( self, "VersionOne", true )
		ObjectSetGeometryActive( self, "VersionTwo", false )
	elseif var == 2 then
		ObjectSetGeometryActive( self, "VersionOne", false )
		ObjectSetGeometryActive( self, "VersionTwo", true )
	end

end

function EvilWotrOutpostCreated(self)
	ObjectHideSubObjectPermanently( self, "I HC_BANNER", true )
	ObjectHideSubObjectPermanently( self, "FELLOWSHIPBADGE", true )
end

function OnEredLuinCitadelCreated(self)
	ObjectHideSubObjectPermanently( self, "AXE02", true )
	ObjectHideSubObjectPermanently( self, "AXE1", true )
	ObjectHideSubObjectPermanently( self, "EUGUARD", true )
	ObjectHideSubObjectPermanently( self, "EUHEAD", true )
	ObjectHideSubObjectPermanently( self, "HA", true )
end

function OnEreborFortressCreated(self)
	ObjectHideSubObjectPermanently( self, "MOAT", true )
	ObjectHideSubObjectPermanently( self, "WATER", true )
	ObjectHideSubObjectPermanently( self, "BRAZIERS", true )
	ObjectHideSubObjectPermanently( self, "BANNERS", true )
	ObjectHideSubObjectPermanently( self, "BANNERS2", true )
	ObjectHideSubObjectPermanently( self, "STATUESA", true )
	ObjectHideSubObjectPermanently( self, "STATUESB", true )
	ObjectHideSubObjectPermanently( self, "BUNKERICE", true )
	ObjectHideSubObjectPermanently( self, "HORNS", true )
	ObjectHideSubObjectPermanently( self, "FORTS", true )
	ObjectHideSubObjectPermanently( self, "ARKENA", true )
	ObjectHideSubObjectPermanently( self, "ARKENB", true )
	ObjectSetGeometryActive( self, "HighTowerGeom", false )

    local era    =    GetRandomNumber()

    if era <= 0.5 then
		ObjectGrantUpgrade( self, "Upgrade_HobbitEreborAI" )
    else
        ObjectGrantUpgrade( self, "Upgrade_LotREreborAI" )
    end
end

function OnRohanFortressCreated(self)
	ObjectHideSubObjectPermanently( self, "BANNERS01", true )
	ObjectHideSubObjectPermanently( self, "BELL", true )
	ObjectHideSubObjectPermanently( self, "HORNS", true )
	ObjectHideSubObjectPermanently( self, "MEADHALL_A", true )
	ObjectHideSubObjectPermanently( self, "MEADHALL_B", true )
	ObjectHideSubObjectPermanently( self, "HASTY", true )
	ObjectHideSubObjectPermanently( self, "STATUESB", true )
	ObjectSetGeometryActive( self, "HighTowerGeom", false )
end

function OnFortressCreated(self)
	ObjectHideSubObjectPermanently( self, "DBFBANNER", true )
	ObjectSetGeometryActive( self, "HighTowerGeom", false )
end

function OnGuldurFortressKeepCreated(self)
	ObjectHideSubObjectPermanently( self, "SORCERY", true )
	ObjectHideSubObjectPermanently( self, "ENCROACH", true )
	ObjectHideSubObjectPermanently( self, "PALANTIR", true )
	ObjectHideSubObjectPermanently( self, "TORCHES", true )
end

function OnWildFortressCreated(self)
	ObjectHideSubObjectPermanently( self, "DBFBANNER", true )
	ObjectHideSubObjectPermanently( self, "GUNDABAD", true )
	ObjectSetGeometryActive( self, "HighTowerGeom", false )
end

function OnMinasMorgulCreated(self)
	ObjectHideSubObjectPermanently( self, "CYLINDER01", true )
	ObjectSetGeometryActive( self, "HighTowerGeom", false )
end

function NeutralGollum_RingStealerDamaged(self,other)

	if ObjectHasUpgrade( other, "Upgrade_RingHero" ) == 0 then
		ObjectChangeAllegianceFromNonPlayablePlayer( self, other )
	end

end

function NeutralGollum_RingStealerSlaughtered(self,other)
	ObjectRemoveUpgrade( other, "Upgrade_RingHero" )
end

function OnNecromancerStatueCreated(self)
	ObjectDoSpecialPower(self, "SpecialAbilityGateWatchersFear")
end

function OnKennelWolfCreated(self) --
	ObjectGrantUpgrade( self, "Upgrade_AngmarSpikedCollar" )
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "Glow", true )
end

function BecomeDismounted(self) --
    ObjectRemoveUpgrade( self, "Upgrade_AITriggerMount" )
    ObjectGrantUpgrade( self, "Upgrade_AITriggerDismount" )
end

function BecomeMounted(self) --
    ObjectRemoveUpgrade( self, "Upgrade_AITriggerDismount" )
    ObjectGrantUpgrade( self, "Upgrade_AITriggerMount" )
end

function OnGundabadOrcCreated(self)

    ObjectHideSubObjectPermanently( self, "WEAPON1", true )
    ObjectHideSubObjectPermanently( self, "WEAPON2", true )
    ObjectHideSubObjectPermanently( self, "WEAPON3", true )

    ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
    ObjectHideSubObjectPermanently( self, "FORGED_BLADES", true )

    local weapon         =    GetRandomNumber()

    if weapon <= 0.333 then
        ObjectHideSubObjectPermanently( self, "WEAPON1", false )
    elseif weapon <= 0.666 then
        ObjectHideSubObjectPermanently( self, "WEAPON2", false )
     else
        ObjectHideSubObjectPermanently( self, "WEAPON3", false )
    end
end

function OnBodyGuardOrcCreated(self)
    ObjectHideSubObjectPermanently( self, "HEADS01", true )
    ObjectHideSubObjectPermanently( self, "HEADS02", true )

    ObjectHideSubObjectPermanently( self, "SHDLR2", true )
    ObjectHideSubObjectPermanently( self, "SHDLR3", true )
    ObjectHideSubObjectPermanently( self, "AXEA", true )
    ObjectHideSubObjectPermanently( self, "SWORDB", true )
    ObjectHideSubObjectPermanently( self, "SWORDA", true )

    ObjectHideSubObjectPermanently( self, "SHLDR1", true )
    ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
    ObjectHideSubObjectPermanently( self, "FORGED_BLADES", true )
    ObjectHideSubObjectPermanently( self, "FireArowTip", true )

    local heads          =    GetRandomNumber()
    local shdlr          =    GetRandomNumber()
    local weapon          =    GetRandomNumber()

    if heads <= 0.500 then
        ObjectHideSubObjectPermanently( self, "HEADS01", false )
     else
        ObjectHideSubObjectPermanently( self, "HEADS02", false )
    end

    if shdlr <= 0.3 then
        ObjectHideSubObjectPermanently( self, "SHDLR2", false )
	elseif shdlr <= 0.5 then
        ObjectHideSubObjectPermanently( self, "SHDLR3", false )
	elseif shdlr <= 0.8 then
        ObjectHideSubObjectPermanently( self, "SHLDR1", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    if weapon <= 0.3 then
        ObjectHideSubObjectPermanently( self, "SWORDA", false )
    elseif weapon <= 0.6 then
        ObjectHideSubObjectPermanently( self, "SWORDB", false )
    else
        ObjectHideSubObjectPermanently( self, "AXEA", false )
    end
end

function OnDolGuldurOrcCreated(self)

    ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
    ObjectHideSubObjectPermanently( self, "FORGED_BLADES", true )
    ObjectHideSubObjectPermanently( self, "FORGED_BLADE01", true )
    ObjectHideSubObjectPermanently( self, "FireArowTip", true )
    ObjectHideSubObjectPermanently( self, "HELMET01", true )
    ObjectHideSubObjectPermanently( self, "HELMET02", true )
    ObjectHideSubObjectPermanently( self, "HELMET03", true )

    local helmet         =    GetRandomNumber()

    if helmet <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HELMET01", false )
    elseif helmet <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HELMET02", false )
     else
        ObjectHideSubObjectPermanently( self, "HELMET03", false )
    end

    local warg         =    GetRandomNumber()

    if warg <= 0.5 then
        --
     else
		ObjectGrantUpgrade( self, "Upgrade_AngmarFighterFearless" )
    end

end

function OnDolGuldurOrcOldCreated(self)

    ObjectHideSubObjectPermanently( self, "s1", true )
    ObjectHideSubObjectPermanently( self, "s2", true )
    ObjectHideSubObjectPermanently( self, "s3", true )

    ObjectHideSubObjectPermanently( self, "h1", true )
    ObjectHideSubObjectPermanently( self, "h2", true )
    ObjectHideSubObjectPermanently( self, "h3", true )
    ObjectHideSubObjectPermanently( self, "h4", true )
    ObjectHideSubObjectPermanently( self, "h5", true )

    ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
    ObjectHideSubObjectPermanently( self, "FORGED_BLADES", true )
    ObjectHideSubObjectPermanently( self, "FireArowTip", true )

    local helmet         =    GetRandomNumber()
    local armor          =    GetRandomNumber()

    if helmet <= 0.33 then
        ObjectHideSubObjectPermanently( self, "s1", false )
    elseif helmet <= 0.66 then
        ObjectHideSubObjectPermanently( self, "s2", false )
     else
        ObjectHideSubObjectPermanently( self, "s3", false )
    end

    if armor <= 0.200 then
        ObjectHideSubObjectPermanently( self, "h1", false )
    elseif armor <= 0.400 then
        ObjectHideSubObjectPermanently( self, "h2", false )
    elseif armor <= 0.600 then
        ObjectHideSubObjectPermanently( self, "h3", false )
    elseif armor <= 0.800 then
        ObjectHideSubObjectPermanently( self, "h4", false )
    else
        ObjectHideSubObjectPermanently( self, "h5", false )
    end
end

function OnMountainOrcCreated(self)

    ObjectHideSubObjectPermanently( self, "BEARD01", true )
    ObjectHideSubObjectPermanently( self, "BEARD02", true )
    ObjectHideSubObjectPermanently( self, "BEARD03", true )
    ObjectHideSubObjectPermanently( self, "BEARD04", true )

    ObjectHideSubObjectPermanently( self, "HAIR01", true )
    ObjectHideSubObjectPermanently( self, "HAIR02", true )
    ObjectHideSubObjectPermanently( self, "HAIR03", true )

    ObjectHideSubObjectPermanently( self, "FUR_L", true )
    ObjectHideSubObjectPermanently( self, "FUR_R", true )

    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )

    ObjectHideSubObjectPermanently( self, "CHIPS", true )
    ObjectHideSubObjectPermanently( self, "BODY01", true )
    ObjectHideSubObjectPermanently( self, "BODY02", true )

    ObjectHideSubObjectPermanently( self, "HELMET01", true )
    ObjectHideSubObjectPermanently( self, "HELMET02", true )
    ObjectHideSubObjectPermanently( self, "HELMET03", true )

    ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
    ObjectHideSubObjectPermanently( self, "FireArowTip", true )

    local helmet         =    GetRandomNumber()
    local hair         =    GetRandomNumber()
    local fur         =    GetRandomNumber()
    local beard         =    GetRandomNumber()
    local head         =    GetRandomNumber()
    local armor          =    GetRandomNumber()
    local chips          =    GetRandomNumber()

    if fur <= 0.3 then
        ObjectHideSubObjectPermanently( self, "FUR_L", false )
    elseif fur <= 0.5 then
        ObjectHideSubObjectPermanently( self, "FUR_R", false )
    elseif fur <= 0.8 then
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
     else
        ObjectHideSubObjectPermanently( self, "FUR_L", false )
        ObjectHideSubObjectPermanently( self, "FUR_R", false )
    end

    if hair <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HAIR01", false )
    elseif hair <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HAIR02", false )
    elseif hair <= 0.8 then
        ObjectHideSubObjectPermanently( self, "HAIR03", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    if helmet <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HELMET01", false )
    elseif helmet <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HELMET02", false )
     else
        ObjectHideSubObjectPermanently( self, "HELMET03", false )
    end

    if head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

    if armor <= 0.5 then
        ObjectHideSubObjectPermanently( self, "CHIPS", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    if chips <= 0.5 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
     else
        ObjectHideSubObjectPermanently( self, "BODY02", false )
    end

    if beard <= 0.3 then
        ObjectHideSubObjectPermanently( self, "BEARD01", false )
    elseif beard <= 0.5 then
        ObjectHideSubObjectPermanently( self, "BEARD02", false )
    elseif beard <= 0.8 then
        ObjectHideSubObjectPermanently( self, "BEARD03", false )
    elseif beard <= 0.8 then
        ObjectHideSubObjectPermanently( self, "BEARD04", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end
end

function OnGondorPGCreated(self)

	ObjectHideSubObjectPermanently( self, "FORGED_SPEAR", true )
	ObjectHideSubObjectPermanently( self, "FORGED_AXE", true )
	ObjectHideSubObjectPermanently( self, "ARMOR", true )
	ObjectHideSubObjectPermanently( self, "HORSE01", true )
	ObjectHideSubObjectPermanently( self, "HORSE02", true )
	ObjectHideSubObjectPermanently( self, "HORSE03", true )
	ObjectHideSubObjectPermanently( self, "HORSE04", true )
	ObjectHideSubObjectPermanently( self, "TAIL01", true )
	ObjectHideSubObjectPermanently( self, "TAIL02", true )
	ObjectHideSubObjectPermanently( self, "TAIL03", true )
	ObjectHideSubObjectPermanently( self, "TAIL04", true )
	ObjectHideSubObjectPermanently( self, "STASH1", true )
	ObjectHideSubObjectPermanently( self, "STASH2", true )
	ObjectHideSubObjectPermanently( self, "STASH3", true )
	ObjectHideSubObjectPermanently( self, "BODY01", true )
	ObjectHideSubObjectPermanently( self, "BODY02", true )

    local horse         =    GetRandomNumber()
    local stache         =    GetRandomNumber()
    local body         =    GetRandomNumber()

	if horse <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HORSE01", false )
	ObjectHideSubObjectPermanently( self, "TAIL01", false )
	elseif horse <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HORSE02", false )
	ObjectHideSubObjectPermanently( self, "TAIL02", false )
	elseif horse <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HORSE03", false )
	ObjectHideSubObjectPermanently( self, "TAIL03", false )
     else
        ObjectHideSubObjectPermanently( self, "HORSE04", false )
	ObjectHideSubObjectPermanently( self, "TAIL04", false )
    end

	if stache <= 0.333 then
        ObjectHideSubObjectPermanently( self, "STASH1", false )
    elseif stache <= 0.666 then
        ObjectHideSubObjectPermanently( self, "STASH2", false )
    else
        ObjectHideSubObjectPermanently( self, "STASH3", false )
    end

    if body <= 0.5 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
     else
        ObjectHideSubObjectPermanently( self, "BODY02", false )
    end
end

function OnIthilienRangerCreated(self)

    ObjectHideSubObjectPermanently( self, "FireArowTip", true )
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
	ObjectHideSubObjectPermanently( self, "FORGED_SPEAR", true )
	ObjectHideSubObjectPermanently( self, "ARROWUP", true )
	ObjectHideSubObjectPermanently( self, "QUIVARROWUP", true )

	;------------------------HEADS UNHOODED
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HEAD04", true )
	ObjectHideSubObjectPermanently( self, "HEAD05", true )

	;------------------------HEADS HOODED
	ObjectHideSubObjectPermanently( self, "HEADHOOD01", true )
	ObjectHideSubObjectPermanently( self, "HEADHOOD02", true )
	ObjectHideSubObjectPermanently( self, "HEADHOOD03", true )
	ObjectHideSubObjectPermanently( self, "HEADHOOD04", true )
	ObjectHideSubObjectPermanently( self, "HEADHOOD05", true )

	ObjectHideSubObjectPermanently( self, "MASK", true )
	;------------------------CLOAKS
	ObjectHideSubObjectPermanently( self, "CLOAK01", true )
	ObjectHideSubObjectPermanently( self, "CLOAK02", true )
	ObjectHideSubObjectPermanently( self, "CLOAK03", true )
	ObjectHideSubObjectPermanently( self, "CLOAK04", true )
	;------------------------HOODS
	ObjectHideSubObjectPermanently( self, "HOOD01", true )
	ObjectHideSubObjectPermanently( self, "HOOD02", true )
	ObjectHideSubObjectPermanently( self, "HOOD03", true )
	ObjectHideSubObjectPermanently( self, "HOOD04", true )

	ObjectHideSubObjectPermanently( self, "HOODDOWN01", true )
	ObjectHideSubObjectPermanently( self, "HOODDOWN02", true )
	ObjectHideSubObjectPermanently( self, "HOODDOWN03", true )
	ObjectHideSubObjectPermanently( self, "HOODDOWN04", true )

	;------------------------BODY NO TABARD
	ObjectHideSubObjectPermanently( self, "BODY01", true )
	ObjectHideSubObjectPermanently( self, "BODY02", true )
	ObjectHideSubObjectPermanently( self, "BODY03", true )
	
	;------------------------BODY TABARD	
	ObjectHideSubObjectPermanently( self, "BODYTAB01", true )
	ObjectHideSubObjectPermanently( self, "BODYTAB02", true )
	ObjectHideSubObjectPermanently( self, "BODYTAB03", true )
	
	ObjectHideSubObjectPermanently( self, "TABARD01", true )
	ObjectHideSubObjectPermanently( self, "TABARD02", true )
	ObjectHideSubObjectPermanently( self, "TABARD03", true )

	;------------------------ARMS
	ObjectHideSubObjectPermanently( self, "ARMS01", true )
	ObjectHideSubObjectPermanently( self, "ARMS02", true )
	ObjectHideSubObjectPermanently( self, "ARMS03", true )
	
	;------------------------LEGS
	ObjectHideSubObjectPermanently( self, "LEGS01", true )
	ObjectHideSubObjectPermanently( self, "LEGS02", true )
	
	;------------------------EXTRA GEAR
	ObjectHideSubObjectPermanently( self, "POUCH", true )
	ObjectHideSubObjectPermanently( self, "POUCHSTRAP", true )
	
	ObjectHideSubObjectPermanently( self, "QUIVER01", true )
	ObjectHideSubObjectPermanently( self, "QUIVER02", true )
	ObjectHideSubObjectPermanently( self, "QUIVER03", true )

	local quiver    =    GetRandomNumber()
	local pouches    =    GetRandomNumber()
	local legs    =    GetRandomNumber()


	if quiver <= 0.33 then
        ObjectHideSubObjectPermanently( self, "QUIVER01", false )
    elseif quiver <= 0.66 then
        ObjectHideSubObjectPermanently( self, "QUIVER02", false )
    else
        ObjectHideSubObjectPermanently( self, "QUIVER03", false )
    end

	if pouches <= 0.70 then
        ObjectHideSubObjectPermanently( self, "POUCH", false )
		ObjectHideSubObjectPermanently( self, "POUCHSTRAP", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end
	
	if legs <= 0.50 then
        ObjectHideSubObjectPermanently( self, "LEGS01", false )
    else
        ObjectHideSubObjectPermanently( self, "LEGS02", false )
    end

	local body    =    GetRandomNumber()

	if body <= 0.166 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
		ObjectHideSubObjectPermanently( self, "ARMS01", false )
    elseif body <= 0.332 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
		ObjectHideSubObjectPermanently( self, "ARMS02", false )
    elseif body <= 0.498 then
        ObjectHideSubObjectPermanently( self, "BODY03", false )
		ObjectHideSubObjectPermanently( self, "ARMS03", false )
	elseif body <= 0.664 then
        ObjectHideSubObjectPermanently( self, "BODYTAB01", false )
		ObjectHideSubObjectPermanently( self, "TABARD01", false )
		ObjectHideSubObjectPermanently( self, "ARMS02", false )
    elseif body <= 0.83 then
        ObjectHideSubObjectPermanently( self, "BODYTAB02", false )
		ObjectHideSubObjectPermanently( self, "TABARD02", false )
		ObjectHideSubObjectPermanently( self, "ARMS01", false )	
    else
        ObjectHideSubObjectPermanently( self, "BODYTAB03", false )
		ObjectHideSubObjectPermanently( self, "TABARD03", false )
		ObjectHideSubObjectPermanently( self, "ARMS03", false )
    end

	--- randomize head, and cloak assets---
	-- ranger decides whether he has a hood, or no hood (50% chance each)
	-- head decides which head variation to use
	-- cloak decides which cloak color to use
	-- mask decides if he wears a mask or not (Only on hood up rangers)
	local ranger = GetRandomNumber()
	local head	   =    GetRandomNumber()
	local cloak    =    GetRandomNumber()
	local mask    =    GetRandomNumber()

	if ranger <= 0.35 then
		-- Bare Head
		if head <= 0.20 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
		elseif head <= 0.40 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
		elseif head <= 0.60 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
		elseif head <= 0.80 then
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
		else
        ObjectHideSubObjectPermanently( self, "HEAD05", false )
		end
		-- Hood Down Cloak
		if cloak <= 0.35 then
        ObjectHideSubObjectPermanently( self, "CLOAK01", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN01", false )
		elseif cloak <= 0.70 then
		ObjectHideSubObjectPermanently( self, "CLOAK04", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN04", false )
		elseif cloak <= 0.85 then
        ObjectHideSubObjectPermanently( self, "CLOAK03", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN03", false )
		else
        ObjectHideSubObjectPermanently( self, "CLOAK02", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN02", false )
		end
	else
		-- Hooded Head
		if head <= 0.20 then
        ObjectHideSubObjectPermanently( self, "HEADHOOD01", false )
		elseif head <= 0.40 then
        ObjectHideSubObjectPermanently( self, "HEADHOOD02", false )
		elseif head <= 0.60 then
        ObjectHideSubObjectPermanently( self, "HEADHOOD03", false )
		elseif head <= 0.80 then
        ObjectHideSubObjectPermanently( self, "HEADHOOD04", false )
		else
        ObjectHideSubObjectPermanently( self, "HEADHOOD05", false )
		end
		-- Hooded Cloak
		if cloak <= 0.35 then
        ObjectHideSubObjectPermanently( self, "CLOAK01", false )
		ObjectHideSubObjectPermanently( self, "HOOD01", false )
		elseif cloak <= 0.70 then
        ObjectHideSubObjectPermanently( self, "CLOAK04", false )
		ObjectHideSubObjectPermanently( self, "HOOD04", false )
		elseif cloak <= 0.85 then
        ObjectHideSubObjectPermanently( self, "CLOAK03", false )
		ObjectHideSubObjectPermanently( self, "HOOD03", false )
		else
		ObjectHideSubObjectPermanently( self, "CLOAK02", false )
		ObjectHideSubObjectPermanently( self, "HOOD02", false )
		end
		-- Mask
		if mask <= 0.50 then
        ObjectHideSubObjectPermanently( self, "MASK", false )
		else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
		end
	end
end

function OnIthilienOutriderCreated(self)

    ObjectHideSubObjectPermanently( self, "FireArowTip", true )
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
	ObjectHideSubObjectPermanently( self, "FORGED_SPEAR", true )
	ObjectHideSubObjectPermanently( self, "ARROWUP", true )
	ObjectHideSubObjectPermanently( self, "QUIVARROWUP", true )

	;------------------------HORSES
	ObjectHideSubObjectPermanently( self, "HORSE01", true )
	ObjectHideSubObjectPermanently( self, "HORSE02", true )
	ObjectHideSubObjectPermanently( self, "HORSE03", true )
	ObjectHideSubObjectPermanently( self, "HORSE04", true )
	;------------------------HEADS UNHOODED
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HEAD04", true )
	ObjectHideSubObjectPermanently( self, "HEAD05", true )

	;------------------------CLOAKS
	ObjectHideSubObjectPermanently( self, "CLOAK01", true )
	ObjectHideSubObjectPermanently( self, "CLOAK02", true )
	ObjectHideSubObjectPermanently( self, "CLOAK03", true )
	ObjectHideSubObjectPermanently( self, "CLOAK04", true )
	;------------------------HOODS
	ObjectHideSubObjectPermanently( self, "HOOD01", true )
	ObjectHideSubObjectPermanently( self, "HOOD02", true )
	ObjectHideSubObjectPermanently( self, "HOOD03", true )
	ObjectHideSubObjectPermanently( self, "HOOD04", true )

	ObjectHideSubObjectPermanently( self, "HOODDOWN01", true )
	ObjectHideSubObjectPermanently( self, "HOODDOWN02", true )
	ObjectHideSubObjectPermanently( self, "HOODDOWN03", true )
	ObjectHideSubObjectPermanently( self, "HOODDOWN04", true )

	;------------------------BODY NO TABARD
	ObjectHideSubObjectPermanently( self, "BODY01", true )
	ObjectHideSubObjectPermanently( self, "BODY02", true )
	ObjectHideSubObjectPermanently( self, "BODY03", true )
	
	;------------------------BODY TABARD	
	ObjectHideSubObjectPermanently( self, "BODYTAB01", true )
	ObjectHideSubObjectPermanently( self, "BODYTAB02", true )
	ObjectHideSubObjectPermanently( self, "BODYTAB03", true )
	
	ObjectHideSubObjectPermanently( self, "TABARD01", true )
	ObjectHideSubObjectPermanently( self, "TABARD02", true )
	ObjectHideSubObjectPermanently( self, "TABARD03", true )

	;------------------------ARMS
	ObjectHideSubObjectPermanently( self, "ARMS01", true )
	ObjectHideSubObjectPermanently( self, "ARMS02", true )
	ObjectHideSubObjectPermanently( self, "ARMS03", true )
	
	;------------------------LEGS
	ObjectHideSubObjectPermanently( self, "LEGS01", true )
	ObjectHideSubObjectPermanently( self, "LEGS02", true )
	
	;------------------------EXTRA GEAR
	ObjectHideSubObjectPermanently( self, "POUCH", true )
	ObjectHideSubObjectPermanently( self, "POUCHSTRAP", true )
	
	ObjectHideSubObjectPermanently( self, "QUIVER01", true )
	ObjectHideSubObjectPermanently( self, "QUIVER02", true )
	ObjectHideSubObjectPermanently( self, "QUIVER03", true )

	local quiver    =    GetRandomNumber()
	local pouches    =    GetRandomNumber()
	local legs    =    GetRandomNumber()
	local horse    =    GetRandomNumber()


	if quiver <= 0.33 then
        ObjectHideSubObjectPermanently( self, "QUIVER01", false )
    elseif quiver <= 0.66 then
        ObjectHideSubObjectPermanently( self, "QUIVER02", false )
    else
        ObjectHideSubObjectPermanently( self, "QUIVER03", false )
    end

	if pouches <= 0.70 then
        ObjectHideSubObjectPermanently( self, "POUCH", false )
		ObjectHideSubObjectPermanently( self, "POUCHSTRAP", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end
	
	if legs <= 0.50 then
        ObjectHideSubObjectPermanently( self, "LEGS01", false )
    else
        ObjectHideSubObjectPermanently( self, "LEGS02", false )
    end
	
	if horse <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HORSE01", false )
    elseif horse <= 0.6 then
        ObjectHideSubObjectPermanently( self, "HORSE02", false )
    elseif horse <= 0.8 then
        ObjectHideSubObjectPermanently( self, "HORSE03", false )
     else
        ObjectHideSubObjectPermanently( self, "HORSE04", false )
    end

	local body    =    GetRandomNumber()

	if body <= 0.166 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
		ObjectHideSubObjectPermanently( self, "ARMS01", false )
    elseif body <= 0.332 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
		ObjectHideSubObjectPermanently( self, "ARMS02", false )
    elseif body <= 0.498 then
        ObjectHideSubObjectPermanently( self, "BODY03", false )
		ObjectHideSubObjectPermanently( self, "ARMS03", false )
	elseif body <= 0.664 then
        ObjectHideSubObjectPermanently( self, "BODYTAB01", false )
		ObjectHideSubObjectPermanently( self, "TABARD01", false )
		ObjectHideSubObjectPermanently( self, "ARMS02", false )
    elseif body <= 0.83 then
        ObjectHideSubObjectPermanently( self, "BODYTAB02", false )
		ObjectHideSubObjectPermanently( self, "TABARD02", false )
		ObjectHideSubObjectPermanently( self, "ARMS01", false )	
    else
        ObjectHideSubObjectPermanently( self, "BODYTAB03", false )
		ObjectHideSubObjectPermanently( self, "TABARD03", false )
		ObjectHideSubObjectPermanently( self, "ARMS03", false )
    end

	local head	   =    GetRandomNumber()
	local cloak    =    GetRandomNumber()
	local mask    =    GetRandomNumber()

	if head <= 0.20 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
		elseif head <= 0.40 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
		elseif head <= 0.60 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
		elseif head <= 0.80 then
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
		else
        ObjectHideSubObjectPermanently( self, "HEAD05", false )
		end
		-- Hood Down Cloak
		if cloak <= 0.35 then
        ObjectHideSubObjectPermanently( self, "CLOAK01", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN01", false )
		elseif cloak <= 0.70 then
		ObjectHideSubObjectPermanently( self, "CLOAK04", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN04", false )
		elseif cloak <= 0.85 then
        ObjectHideSubObjectPermanently( self, "CLOAK03", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN03", false )
		else
        ObjectHideSubObjectPermanently( self, "CLOAK02", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN02", false )
	end
end

function OnIthilienRangerGatheringCreated(self)

    ObjectHideSubObjectPermanently( self, "FireArowTip", true )
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
	ObjectHideSubObjectPermanently( self, "FORGED_SPEAR", true )
	ObjectHideSubObjectPermanently( self, "ARROWUP", true )
	ObjectHideSubObjectPermanently( self, "QUIVARROWUP", true )

	;------------------------HEADS UNHOODED
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HEAD04", true )
	ObjectHideSubObjectPermanently( self, "HEAD05", true )

	;------------------------HEADS HOODED
	ObjectHideSubObjectPermanently( self, "HEADHOOD01", true )
	ObjectHideSubObjectPermanently( self, "HEADHOOD02", true )
	ObjectHideSubObjectPermanently( self, "HEADHOOD03", true )
	ObjectHideSubObjectPermanently( self, "HEADHOOD04", true )
	ObjectHideSubObjectPermanently( self, "HEADHOOD05", true )

	ObjectHideSubObjectPermanently( self, "MASK", true )
	;------------------------CLOAKS
	ObjectHideSubObjectPermanently( self, "CLOAK01", true )
	ObjectHideSubObjectPermanently( self, "CLOAK02", true )
	ObjectHideSubObjectPermanently( self, "CLOAK03", true )
	ObjectHideSubObjectPermanently( self, "CLOAK04", true )
	;------------------------HOODS
	ObjectHideSubObjectPermanently( self, "HOOD01", true )
	ObjectHideSubObjectPermanently( self, "HOOD02", true )
	ObjectHideSubObjectPermanently( self, "HOOD03", true )
	ObjectHideSubObjectPermanently( self, "HOOD04", true )

	ObjectHideSubObjectPermanently( self, "HOODDOWN01", true )
	ObjectHideSubObjectPermanently( self, "HOODDOWN02", true )
	ObjectHideSubObjectPermanently( self, "HOODDOWN03", true )
	ObjectHideSubObjectPermanently( self, "HOODDOWN04", true )

	;------------------------BODY NO TABARD
	ObjectHideSubObjectPermanently( self, "BODY01", true )
	ObjectHideSubObjectPermanently( self, "BODY02", true )
	ObjectHideSubObjectPermanently( self, "BODY03", true )
	
	;------------------------BODY TABARD	
	ObjectHideSubObjectPermanently( self, "BODYTAB01", true )
	ObjectHideSubObjectPermanently( self, "BODYTAB02", true )
	ObjectHideSubObjectPermanently( self, "BODYTAB03", true )
	
	ObjectHideSubObjectPermanently( self, "TABARD01", true )
	ObjectHideSubObjectPermanently( self, "TABARD02", true )
	ObjectHideSubObjectPermanently( self, "TABARD03", true )

	;------------------------ARMS
	ObjectHideSubObjectPermanently( self, "ARMS01", true )
	ObjectHideSubObjectPermanently( self, "ARMS02", true )
	ObjectHideSubObjectPermanently( self, "ARMS03", true )
	
	;------------------------LEGS
	ObjectHideSubObjectPermanently( self, "LEGS01", true )
	ObjectHideSubObjectPermanently( self, "LEGS02", true )
	
	;------------------------EXTRA GEAR
	ObjectHideSubObjectPermanently( self, "POUCH", true )
	ObjectHideSubObjectPermanently( self, "POUCHSTRAP", true )
	
	ObjectHideSubObjectPermanently( self, "QUIVER01", true )
	ObjectHideSubObjectPermanently( self, "QUIVER02", true )
	ObjectHideSubObjectPermanently( self, "QUIVER03", true )

	local quiver    =    GetRandomNumber()
	local pouches    =    GetRandomNumber()
	local legs    =    GetRandomNumber()


	if quiver <= 0.33 then
        ObjectHideSubObjectPermanently( self, "QUIVER01", false )
    elseif quiver <= 0.66 then
        ObjectHideSubObjectPermanently( self, "QUIVER02", false )
    else
        ObjectHideSubObjectPermanently( self, "QUIVER03", false )
    end

	if pouches <= 0.70 then
        ObjectHideSubObjectPermanently( self, "POUCH", false )
		ObjectHideSubObjectPermanently( self, "POUCHSTRAP", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end
	
	if legs <= 0.50 then
        ObjectHideSubObjectPermanently( self, "LEGS01", false )
    else
        ObjectHideSubObjectPermanently( self, "LEGS02", false )
    end

	local body    =    GetRandomNumber()

	if body <= 0.166 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
		ObjectHideSubObjectPermanently( self, "ARMS01", false )
    elseif body <= 0.332 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
		ObjectHideSubObjectPermanently( self, "ARMS02", false )
    elseif body <= 0.498 then
        ObjectHideSubObjectPermanently( self, "BODY03", false )
		ObjectHideSubObjectPermanently( self, "ARMS03", false )
	elseif body <= 0.664 then
        ObjectHideSubObjectPermanently( self, "BODYTAB01", false )
		ObjectHideSubObjectPermanently( self, "TABARD01", false )
		ObjectHideSubObjectPermanently( self, "ARMS02", false )
    elseif body <= 0.83 then
        ObjectHideSubObjectPermanently( self, "BODYTAB02", false )
		ObjectHideSubObjectPermanently( self, "TABARD02", false )
		ObjectHideSubObjectPermanently( self, "ARMS01", false )	
    else
        ObjectHideSubObjectPermanently( self, "BODYTAB03", false )
		ObjectHideSubObjectPermanently( self, "TABARD03", false )
		ObjectHideSubObjectPermanently( self, "ARMS03", false )
    end

	--- randomize head, and cloak assets---
	-- ranger decides whether he has a hood, or no hood (50% chance each)
	-- head decides which head variation to use
	-- cloak decides which cloak color to use
	-- mask decides if he wears a mask or not (Only on hood up rangers)
	local ranger = GetRandomNumber()
	local head	   =    GetRandomNumber()
	local cloak    =    GetRandomNumber()
	local mask    =    GetRandomNumber()

	if ranger <= 0.35 then
		-- Bare Head
		if head <= 0.20 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
		elseif head <= 0.40 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
		elseif head <= 0.60 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
		elseif head <= 0.80 then
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
		else
        ObjectHideSubObjectPermanently( self, "HEAD05", false )
		end
		-- Hood Down Cloak
		if cloak <= 0.35 then
        ObjectHideSubObjectPermanently( self, "CLOAK01", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN01", false )
		elseif cloak <= 0.70 then
		ObjectHideSubObjectPermanently( self, "CLOAK04", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN04", false )
		elseif cloak <= 0.85 then
        ObjectHideSubObjectPermanently( self, "CLOAK03", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN03", false )
		else
        ObjectHideSubObjectPermanently( self, "CLOAK02", false )
		ObjectHideSubObjectPermanently( self, "HOODDOWN02", false )
		end
	else
		-- Hooded Head
		if head <= 0.20 then
        ObjectHideSubObjectPermanently( self, "HEADHOOD01", false )
		elseif head <= 0.40 then
        ObjectHideSubObjectPermanently( self, "HEADHOOD02", false )
		elseif head <= 0.60 then
        ObjectHideSubObjectPermanently( self, "HEADHOOD03", false )
		elseif head <= 0.80 then
        ObjectHideSubObjectPermanently( self, "HEADHOOD04", false )
		else
        ObjectHideSubObjectPermanently( self, "HEADHOOD05", false )
		end
		-- Hooded Cloak
		if cloak <= 0.35 then
        ObjectHideSubObjectPermanently( self, "CLOAK01", false )
		ObjectHideSubObjectPermanently( self, "HOOD01", false )
		elseif cloak <= 0.70 then
        ObjectHideSubObjectPermanently( self, "CLOAK04", false )
		ObjectHideSubObjectPermanently( self, "HOOD04", false )
		elseif cloak <= 0.85 then
        ObjectHideSubObjectPermanently( self, "CLOAK03", false )
		ObjectHideSubObjectPermanently( self, "HOOD03", false )
		else
		ObjectHideSubObjectPermanently( self, "CLOAK02", false )
		ObjectHideSubObjectPermanently( self, "HOOD02", false )
		end
		-- Mask
		if mask <= 0.50 then
        ObjectHideSubObjectPermanently( self, "MASK", false )
		else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
		end
	end
end

function OnIthilienPathfinderCreated(self)

    ObjectHideSubObjectPermanently( self, "FireArowTip", true )
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
	ObjectHideSubObjectPermanently( self, "FORGED_SPEAR", true )
	ObjectHideSubObjectPermanently( self, "ARROWUP", true )
	ObjectHideSubObjectPermanently( self, "QUIVARROWUP", true )

	;------------------------HEADS HOODED
	ObjectHideSubObjectPermanently( self, "HEADHOOD01", true )
	ObjectHideSubObjectPermanently( self, "HEADHOOD02", true )
	ObjectHideSubObjectPermanently( self, "HEADHOOD03", true )
	ObjectHideSubObjectPermanently( self, "HEADHOOD04", true )
	ObjectHideSubObjectPermanently( self, "HEADHOOD05", true )

	ObjectHideSubObjectPermanently( self, "MASK", true )
	;------------------------CLOAKS
	ObjectHideSubObjectPermanently( self, "CLOAK01", true )
	ObjectHideSubObjectPermanently( self, "CLOAK02", true )
	ObjectHideSubObjectPermanently( self, "CLOAK03", true )
	ObjectHideSubObjectPermanently( self, "CLOAK04", true )
	;------------------------HOODS
	ObjectHideSubObjectPermanently( self, "HOOD01", true )
	ObjectHideSubObjectPermanently( self, "HOOD02", true )
	ObjectHideSubObjectPermanently( self, "HOOD03", true )
	ObjectHideSubObjectPermanently( self, "HOOD04", true )

	;------------------------BODY NO TABARD
	ObjectHideSubObjectPermanently( self, "BODY01", true )
	ObjectHideSubObjectPermanently( self, "BODY02", true )
	ObjectHideSubObjectPermanently( self, "BODY03", true )
	

	;------------------------ARMS
	ObjectHideSubObjectPermanently( self, "ARMS01", true )
	ObjectHideSubObjectPermanently( self, "ARMS02", true )
	ObjectHideSubObjectPermanently( self, "ARMS03", true )
	
	;------------------------LEGS
	ObjectHideSubObjectPermanently( self, "LEGS01", true )
	ObjectHideSubObjectPermanently( self, "LEGS02", true )
	

	local legs    =    GetRandomNumber()
	
	if legs <= 0.50 then
        ObjectHideSubObjectPermanently( self, "LEGS01", false )
    else
        ObjectHideSubObjectPermanently( self, "LEGS02", false )
    end

	local body    =    GetRandomNumber()
	local arms    =    GetRandomNumber()
	
	if body <= 0.33 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif body <= 0.66 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
    else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
    end
	
	if arms <= 0.33 then
        ObjectHideSubObjectPermanently( self, "ARMS01", false )
    elseif arms <= 0.66 then
        ObjectHideSubObjectPermanently( self, "ARMS02", false )
    else
        ObjectHideSubObjectPermanently( self, "ARMS03", false )
    end

	--- randomize head, and cloak assets---
	-- head decides which head variation to use
	-- cloak decides which cloak color to use
	-- mask decides if he wears a mask or not (Only on hood up rangers)
	local head	   =    GetRandomNumber()
	local cloak    =    GetRandomNumber()
	local mask    =    GetRandomNumber()

		-- Hooded Head
		if head <= 0.20 then
        ObjectHideSubObjectPermanently( self, "HEADHOOD01", false )
		elseif head <= 0.40 then
        ObjectHideSubObjectPermanently( self, "HEADHOOD02", false )
		elseif head <= 0.60 then
        ObjectHideSubObjectPermanently( self, "HEADHOOD03", false )
		elseif head <= 0.80 then
        ObjectHideSubObjectPermanently( self, "HEADHOOD04", false )
		else
        ObjectHideSubObjectPermanently( self, "HEADHOOD05", false )
		end
		-- Hooded Cloak
		if cloak <= 0.35 then
        ObjectHideSubObjectPermanently( self, "CLOAK01", false )
		ObjectHideSubObjectPermanently( self, "HOOD01", false )
		elseif cloak <= 0.70 then
        ObjectHideSubObjectPermanently( self, "CLOAK04", false )
		ObjectHideSubObjectPermanently( self, "HOOD04", false )
		elseif cloak <= 0.85 then
        ObjectHideSubObjectPermanently( self, "CLOAK03", false )
		ObjectHideSubObjectPermanently( self, "HOOD03", false )
		else
		ObjectHideSubObjectPermanently( self, "CLOAK02", false )
		ObjectHideSubObjectPermanently( self, "HOOD02", false )
		end
		-- Mask
		if mask <= 0.50 then
        ObjectHideSubObjectPermanently( self, "MASK", false )
		else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
		end
end

function OnNimrodelCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "SHIELD", true )
	ObjectHideSubObjectPermanently( self, "FireArowTip", true )
	ObjectHideSubObjectPermanently( self, "BODYLA1", true )
	ObjectHideSubObjectPermanently( self, "BODYLA2", true )
	ObjectHideSubObjectPermanently( self, "BODYLA3", true )
	ObjectHideSubObjectPermanently( self, "HEADLA1", true )
	ObjectHideSubObjectPermanently( self, "HEADLA2", true )
	ObjectHideSubObjectPermanently( self, "HEADLA3", true )
	ObjectHideSubObjectPermanently( self, "HORSE1", true )
	ObjectHideSubObjectPermanently( self, "HORSE2", true )
	ObjectHideSubObjectPermanently( self, "HORSE3", true )

    local head         =    GetRandomNumber()
    local horse         =    GetRandomNumber()
    local body 		=   GetRandomNumber()

    if horse <= 0.400 then
        ObjectHideSubObjectPermanently( self, "HORSE1", false )
    elseif horse <= 0.800 then
        ObjectHideSubObjectPermanently( self, "HORSE2", false )
    else
        ObjectHideSubObjectPermanently( self, "HORSE3", false )
    end

    if head <= 0.400 then
        ObjectHideSubObjectPermanently( self, "HEADLA1", false )
    elseif head <= 0.800 then
        ObjectHideSubObjectPermanently( self, "HEADLA1", false )
    else
        ObjectHideSubObjectPermanently( self, "HEADLA1", false )
    end

    if body <= 0.400 then
        ObjectHideSubObjectPermanently( self, "BODYLA1", false )
    elseif body <= 0.800 then
        ObjectHideSubObjectPermanently( self, "BODYLA2", false )
    else
        ObjectHideSubObjectPermanently( self, "BODYLA3", false )
    end
end

function OnDolAmrothKnightCreated(self)

    ObjectHideSubObjectPermanently( self, "M_LANCE01", true )
    ObjectHideSubObjectPermanently( self, "M_LANCE02", true )
    ObjectHideSubObjectPermanently( self, "SHIELD01", true )
    ObjectHideSubObjectPermanently( self, "SHIELD02", true )
    ObjectHideSubObjectPermanently( self, "SHIELD03", true )
    ObjectHideSubObjectPermanently( self, "SHIELD04", true )
    ObjectHideSubObjectPermanently( self, "SHIELD05", true )
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )

    local weapon         =    GetRandomNumber()
    local head         =    GetRandomNumber()
    local shield         =    GetRandomNumber()

    if weapon <= 0.5 then
        ObjectHideSubObjectPermanently( self, "M_LANCE01", false )
     else
        ObjectHideSubObjectPermanently( self, "M_LANCE02", false )
    end

    if head <= 0.03 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

    if shield <= 0.2 then
        ObjectHideSubObjectPermanently( self, "SHIELD01", false )
    elseif shield <= 0.4 then
        ObjectHideSubObjectPermanently( self, "SHIELD02", false )
    elseif shield <= 0.6 then
        ObjectHideSubObjectPermanently( self, "SHIELD03", false )
    elseif shield <= 0.8 then
        ObjectHideSubObjectPermanently( self, "SHIELD04", false )
     else
        ObjectHideSubObjectPermanently( self, "SHIELD05", false )
    end
end

function OnVariagOutriderCreated(self)
    ObjectHideSubObjectPermanently( self, "FireArowTip", true )
	ObjectHideSubObjectPermanently( self, "BARB", true )
	ObjectHideSubObject( self, "ArrowNock", true )

	ObjectHideSubObjectPermanently( self, "HAPAULDRONS", true )
	ObjectHideSubObjectPermanently( self, "HELMET01", true )
	ObjectHideSubObjectPermanently( self, "HELMET02", true )
	ObjectHideSubObjectPermanently( self, "HELMET03", true )
	ObjectHideSubObjectPermanently( self, "HELMET04", true )

	ObjectHideSubObjectPermanently( self, "SHIELD03", true )
    ObjectHideSubObjectPermanently( self, "SHIELD02", true )
    ObjectHideSubObjectPermanently( self, "SHIELD01", true )

    ObjectHideSubObjectPermanently( self, "BODY01", true )
    ObjectHideSubObjectPermanently( self, "BODY02", true )

    ObjectHideSubObjectPermanently( self, "HORSEA", true )
    ObjectHideSubObjectPermanently( self, "HORSEB", true )
    ObjectHideSubObjectPermanently( self, "HORSEC", true )
    ObjectHideSubObjectPermanently( self, "HORSED", true )

    ObjectHideSubObjectPermanently( self, "CAP01", true )
    ObjectHideSubObjectPermanently( self, "CAP02", true )

    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )

    local body         =    GetRandomNumber()
    local horse         =    GetRandomNumber()
    local head          =    GetRandomNumber()
    local shield          =    GetRandomNumber()
    local weapon          =    GetRandomNumber()
	local cap          =    GetRandomNumber()

    if body <= 0.5 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    else
        ObjectHideSubObjectPermanently( self, "BODY02", false )
    end

    if horse <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HORSEA", false )
    elseif horse <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HORSEB", false )
    elseif horse <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HORSEC", false )
    else
        ObjectHideSubObjectPermanently( self, "HORSED", false )
    end

    if cap <= 0.5 then
        ObjectHideSubObjectPermanently( self, "CAP01", false )
    else
        ObjectHideSubObjectPermanently( self, "CAP02", false )
    end

    if weapon <= 0.20 then
				ObjectGrantUpgrade( self, "Upgrade_AragornCostume_03" )
    elseif weapon <= 0.40 then
				ObjectGrantUpgrade( self, "Upgrade_AragornCostume_02" )
     elseif weapon <= 0.60 then
				ObjectGrantUpgrade( self, "Upgrade_AragornCostume_01" )
	else
				ObjectGrantUpgrade( self, "Upgrade_AragornCostume_04" )
    end

    if shield <= 0.3 then
        ObjectHideSubObjectPermanently( self, "SHIELD03", false )
    elseif shield <= 0.6 then
        ObjectHideSubObjectPermanently( self, "SHIELD02", false )
     else
        ObjectHideSubObjectPermanently( self, "SHIELD01", false )
    end

    if head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    elseif head <= 0.6 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    end
end

function OnVariagOutriderBannerCreated(self)
	ObjectHideSubObjectPermanently( self, "WEAP01", true )
	ObjectHideSubObjectPermanently( self, "WEAP02", true )
	ObjectHideSubObjectPermanently( self, "WEAP03", true )
	ObjectHideSubObjectPermanently( self, "WEAP04", true )
	ObjectHideSubObjectPermanently( self, "WEAP01FB", true )
	ObjectHideSubObjectPermanently( self, "WEAP02FB", true )
	ObjectHideSubObjectPermanently( self, "WEAP03FB", true )
	ObjectHideSubObjectPermanently( self, "WEAP04FB", true )

	ObjectHideSubObjectPermanently( self, "HAPAULDRONS", true )
	ObjectHideSubObjectPermanently( self, "HELMET01", true )
	ObjectHideSubObjectPermanently( self, "HELMET02", true )
	ObjectHideSubObjectPermanently( self, "HELMET03", true )
	ObjectHideSubObjectPermanently( self, "HELMET04", true )

	ObjectHideSubObjectPermanently( self, "SHIELD03", true )
    ObjectHideSubObjectPermanently( self, "SHIELD02", true )
    ObjectHideSubObjectPermanently( self, "SHIELD01", true )

    ObjectHideSubObjectPermanently( self, "BODY01", true )
    ObjectHideSubObjectPermanently( self, "BODY02", true )

	ObjectHideSubObjectPermanently( self, "HORSE01", true )
	ObjectHideSubObjectPermanently( self, "HORSE02", true )
	ObjectHideSubObjectPermanently( self, "HORSE03", true )
	ObjectHideSubObjectPermanently( self, "HORSE04", true )
	ObjectHideSubObjectPermanently( self, "TAIL01", true )
	ObjectHideSubObjectPermanently( self, "TAIL02", true )
	ObjectHideSubObjectPermanently( self, "TAIL03", true )
	ObjectHideSubObjectPermanently( self, "TAIL04", true )

    ObjectHideSubObjectPermanently( self, "CAP01", true )
    ObjectHideSubObjectPermanently( self, "CAP02", true )

    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )

    local body         =    GetRandomNumber()
    local horse         =    GetRandomNumber()
    local head          =    GetRandomNumber()
    local shield          =    GetRandomNumber()
    local weapon          =    GetRandomNumber()
    local cap          =    GetRandomNumber()

    if body <= 0.5 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    else
        ObjectHideSubObjectPermanently( self, "BODY02", false )
    end

     if horse <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HORSE01", false )
	ObjectHideSubObjectPermanently( self, "TAIL01", false )
     elseif horse <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HORSE02", false )
	ObjectHideSubObjectPermanently( self, "TAIL02", false )
     elseif horse <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HORSE03", false )
	ObjectHideSubObjectPermanently( self, "TAIL03", false )
     else
        ObjectHideSubObjectPermanently( self, "HORSE04", false )
	ObjectHideSubObjectPermanently( self, "TAIL04", false )
    end

    if cap <= 0.5 then
        ObjectHideSubObjectPermanently( self, "CAP01", false )
    else
        ObjectHideSubObjectPermanently( self, "CAP02", false )
    end

	if weapon <= 0.20 then
        ObjectHideSubObjectPermanently( self, "WEAP03", false )
				ObjectGrantUpgrade( self, "Upgrade_AragornCostume_03" )
    elseif weapon <= 0.40 then
        ObjectHideSubObjectPermanently( self, "WEAP02", false )
				ObjectGrantUpgrade( self, "Upgrade_AragornCostume_02" )
     elseif weapon <= 0.60 then
        ObjectHideSubObjectPermanently( self, "WEAP01", false )
				ObjectGrantUpgrade( self, "Upgrade_AragornCostume_01" )
	else
        ObjectHideSubObjectPermanently( self, "WEAP04", false )
				ObjectGrantUpgrade( self, "Upgrade_AragornCostume_04" )
    end

    if shield <= 0.3 then
        ObjectHideSubObjectPermanently( self, "SHIELD03", false )
    elseif shield <= 0.6 then
        ObjectHideSubObjectPermanently( self, "SHIELD02", false )
     else
        ObjectHideSubObjectPermanently( self, "SHIELD01", false )
    end

    if head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    elseif head <= 0.6 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    end
end

function OnVariagCreated(self)
	ObjectHideSubObjectPermanently( self, "WEAP01", true )
	ObjectHideSubObjectPermanently( self, "WEAP02", true )
	ObjectHideSubObjectPermanently( self, "WEAP03", true )
	ObjectHideSubObjectPermanently( self, "WEAP04", true )
	ObjectHideSubObjectPermanently( self, "WEAP01FB", true )
	ObjectHideSubObjectPermanently( self, "WEAP02FB", true )
	ObjectHideSubObjectPermanently( self, "WEAP03FB", true )
	ObjectHideSubObjectPermanently( self, "WEAP04FB", true )

	ObjectHideSubObjectPermanently( self, "HAPAULDRONS", true )
	ObjectHideSubObjectPermanently( self, "HELMET01", true )
	ObjectHideSubObjectPermanently( self, "HELMET02", true )
	ObjectHideSubObjectPermanently( self, "HELMET03", true )
	ObjectHideSubObjectPermanently( self, "HELMET04", true )

	ObjectHideSubObjectPermanently( self, "SHIELD03", true )
    ObjectHideSubObjectPermanently( self, "SHIELD02", true )
    ObjectHideSubObjectPermanently( self, "SHIELD01", true )

    ObjectHideSubObjectPermanently( self, "BODY01", true )
    ObjectHideSubObjectPermanently( self, "BODY02", true )

    ObjectHideSubObjectPermanently( self, "CAP01", true )
    ObjectHideSubObjectPermanently( self, "CAP02", true )

    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )

    local body         =    GetRandomNumber()
    local head          =    GetRandomNumber()
    local shield          =    GetRandomNumber()
	local weapon          =    GetRandomNumber()
	local cap          =    GetRandomNumber()

    if body <= 0.5 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    else
        ObjectHideSubObjectPermanently( self, "BODY02", false )
    end

    if cap <= 0.5 then
        ObjectHideSubObjectPermanently( self, "CAP01", false )
    else
        ObjectHideSubObjectPermanently( self, "CAP02", false )
    end

	if weapon <= 0.20 then
        ObjectHideSubObjectPermanently( self, "WEAP03", false )
				ObjectGrantUpgrade( self, "Upgrade_AragornCostume_03" )
    elseif weapon <= 0.40 then
        ObjectHideSubObjectPermanently( self, "WEAP02", false )
				ObjectGrantUpgrade( self, "Upgrade_AragornCostume_02" )
     elseif weapon <= 0.60 then
        ObjectHideSubObjectPermanently( self, "WEAP01", false )
				ObjectGrantUpgrade( self, "Upgrade_AragornCostume_01" )
	else
        ObjectHideSubObjectPermanently( self, "WEAP04", false )
				ObjectGrantUpgrade( self, "Upgrade_AragornCostume_04" )
    end

    if shield <= 0.3 then
        ObjectHideSubObjectPermanently( self, "SHIELD03", false )
    elseif shield <= 0.6 then
        ObjectHideSubObjectPermanently( self, "SHIELD02", false )
     else
        ObjectHideSubObjectPermanently( self, "SHIELD01", false )
    end

    if head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    elseif head <= 0.6 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    end
end

function OnGoblinTownFighterCreated(self)
    ObjectHideSubObjectPermanently( self, "ARMORA", true )
    ObjectHideSubObjectPermanently( self, "ARMORAB", true )
    ObjectHideSubObjectPermanently( self, "ARMORB", true )
    ObjectHideSubObjectPermanently( self, "GOBLIN", true )
    ObjectHideSubObjectPermanently( self, "GOBLINA", true )
    ObjectHideSubObjectPermanently( self, "GOBLINB", true )
    ObjectHideSubObjectPermanently( self, "WEAP1", true )
    ObjectHideSubObjectPermanently( self, "WEAP2", true )
    ObjectHideSubObjectPermanently( self, "WEAP3", true )
    ObjectHideSubObjectPermanently( self, "WEAP4", true )
    ObjectHideSubObjectPermanently( self, "WEAP5", true )
    ObjectHideSubObjectPermanently( self, "WEAP6", true )

    local helmet         =    GetRandomNumber()
    local head          =    GetRandomNumber()
    local shield          =    GetRandomNumber()

    if helmet <= 0.2 then
        ObjectHideSubObjectPermanently( self, "ARMORA", false )
    elseif helmet <= 0.4 then
        ObjectHideSubObjectPermanently( self, "ARMORB", false )
    elseif helmet <= 0.8 then
        ObjectHideSubObjectPermanently( self, "ARMORAB", false )
     else
        ObjectHideSubObjectPermanently( self, "ARMORA", false )
        ObjectHideSubObjectPermanently( self, "ARMORAB", false )
        ObjectHideSubObjectPermanently( self, "ARMORB", false )
    end

    if shield <= 0.3 then
        ObjectHideSubObjectPermanently( self, "GOBLIN", false )
    elseif shield <= 0.6 then
        ObjectHideSubObjectPermanently( self, "GOBLINA", false )
     else
        ObjectHideSubObjectPermanently( self, "GOBLINB", false )
    end

    if head <= 0.10 then
        ObjectHideSubObjectPermanently( self, "WEAP1", false )
    elseif head <= 0.20 then
        ObjectHideSubObjectPermanently( self, "WEAP2", false )
    elseif head <= 0.30 then
        ObjectHideSubObjectPermanently( self, "WEAP3", false )
    elseif head <= 0.37 then
        ObjectHideSubObjectPermanently( self, "WEAP4", false )
    elseif head <= 0.40 then
        ObjectHideSubObjectPermanently( self, "WEAP5", false )
    elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "WEAP6", false )

    elseif head <= 0.60 then
        ObjectHideSubObjectPermanently( self, "WEAP1", false )
        ObjectHideSubObjectPermanently( self, "WEAP3", false )
    elseif head <= 0.70 then
        ObjectHideSubObjectPermanently( self, "WEAP2", false )
        ObjectHideSubObjectPermanently( self, "WEAP6", false )
    elseif head <= 0.80 then
        ObjectHideSubObjectPermanently( self, "WEAP3", false )
        ObjectHideSubObjectPermanently( self, "WEAP6", false )
    elseif head <= 0.90 then
        ObjectHideSubObjectPermanently( self, "WEAP2", false )
        ObjectHideSubObjectPermanently( self, "WEAP4", false )
     else
        ObjectHideSubObjectPermanently( self, "WEAP1", false )
        ObjectHideSubObjectPermanently( self, "WEAP6", false )
    end
end

function OnGoblinTownFighterMillCreated(self)
    ObjectHideSubObjectPermanently( self, "ARMORA", true )
    ObjectHideSubObjectPermanently( self, "ARMORAB", true )
    ObjectHideSubObjectPermanently( self, "ARMORB", true )
    ObjectHideSubObjectPermanently( self, "ARMORA1", true )
    ObjectHideSubObjectPermanently( self, "ARMORAB1", true )
    ObjectHideSubObjectPermanently( self, "ARMORB1", true )
    ObjectHideSubObjectPermanently( self, "GOBLIN", true )
    ObjectHideSubObjectPermanently( self, "GOBLINA", true )
    ObjectHideSubObjectPermanently( self, "GOBLINB", true )
    ObjectHideSubObjectPermanently( self, "GOBLIN1", true )
    ObjectHideSubObjectPermanently( self, "GOBLINA1", true )
    ObjectHideSubObjectPermanently( self, "GOBLINB1", true )

    local helmet         =    GetRandomNumber()
    local head          =    GetRandomNumber()
    local shield          =    GetRandomNumber()
    local body          =    GetRandomNumber()

    if helmet <= 0.2 then
        ObjectHideSubObjectPermanently( self, "ARMORA", false )
    elseif helmet <= 0.4 then
        ObjectHideSubObjectPermanently( self, "ARMORB", false )
    elseif helmet <= 0.8 then
        ObjectHideSubObjectPermanently( self, "ARMORAB", false )
     else
        ObjectHideSubObjectPermanently( self, "ARMORA", false )
        ObjectHideSubObjectPermanently( self, "ARMORAB", false )
        ObjectHideSubObjectPermanently( self, "ARMORB", false )
    end

    if shield <= 0.3 then
        ObjectHideSubObjectPermanently( self, "GOBLIN", false )
    elseif shield <= 0.6 then
        ObjectHideSubObjectPermanently( self, "GOBLINA", false )
     else
        ObjectHideSubObjectPermanently( self, "GOBLINB", false )
    end

    if body <= 0.3 then
        ObjectHideSubObjectPermanently( self, "GOBLIN1", false )
    elseif body <= 0.6 then
        ObjectHideSubObjectPermanently( self, "GOBLINA1", false )
     else
        ObjectHideSubObjectPermanently( self, "GOBLINB1", false )
    end

    if head <= 0.2 then
        ObjectHideSubObjectPermanently( self, "ARMORA1", false )
    elseif head <= 0.4 then
        ObjectHideSubObjectPermanently( self, "ARMORB1", false )
    elseif head <= 0.8 then
        ObjectHideSubObjectPermanently( self, "ARMORAB1", false )
     else
        ObjectHideSubObjectPermanently( self, "ARMORA1", false )
        ObjectHideSubObjectPermanently( self, "ARMORAB1", false )
        ObjectHideSubObjectPermanently( self, "ARMORB1", false )
    end
end

function OnLamedonCreated(self)
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "ARMOR", true )
    ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
    ObjectHideSubObjectPermanently( self, "SHIELDA", true )
    ObjectHideSubObjectPermanently( self, "SHIELDB", true )
    ObjectHideSubObjectPermanently( self, "SASH01", true )
    ObjectHideSubObjectPermanently( self, "SASH02", true )
    ObjectHideSubObjectPermanently( self, "SASH03", true )
	ObjectHideSubObjectPermanently( self, "GEAR", true)

    local head          =    GetRandomNumber()
	local sash          =    GetRandomNumber()
    local shield          =    GetRandomNumber()


    if shield <= 0.2 then
        ObjectHideSubObjectPermanently( self, "SHIELDA", false )
     else
        ObjectHideSubObjectPermanently( self, "SHIELDB", false )
    end

	if sash <= 0.2 then
        ObjectHideSubObjectPermanently( self, "SASH01", false )
     elseif sash <= 0.4 then
        ObjectHideSubObjectPermanently( self, "SASH02", false )
     else
        ObjectHideSubObjectPermanently( self, "SASH03", false )
    end

    if head <= 0.03 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end
end

function OnGwathloCreated(self)
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )

    local head          =    GetRandomNumber()

    if head <= 0.03 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end
end

function OnPelargirCreated(self)
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
	ObjectHideSubObjectPermanently( self, "PAULDRONS", true )

    local head          =    GetRandomNumber()
	local sash          =    GetRandomNumber()
    local shield          =    GetRandomNumber()

    if head <= 0.03 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end
end

function OnLinhirCreated(self)
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "ARMOR", true )
    ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
    ObjectHideSubObjectPermanently( self, "BODY01", true )
    ObjectHideSubObjectPermanently( self, "BODY02", true )
    ObjectHideSubObjectPermanently( self, "BODY03", true )
    ObjectHideSubObjectPermanently( self, "ARMS01", true )
    ObjectHideSubObjectPermanently( self, "ARMS02", true )
    ObjectHideSubObjectPermanently( self, "ARMS03", true )

    local head          =    GetRandomNumber()
	local sash          =    GetRandomNumber()


	if sash <= 0.4 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
        ObjectHideSubObjectPermanently( self, "ARMS01", false )
--     elseif sash <= 0.6 then -- removed
--        ObjectHideSubObjectPermanently( self, "BODY03", false )
--        ObjectHideSubObjectPermanently( self, "ARMS03", false )
     else
        ObjectHideSubObjectPermanently( self, "BODY02", false )
        ObjectHideSubObjectPermanently( self, "ARMS02", false )
    end

    if head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
	else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end
end

function OnKataphractCreated(self)
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
	ObjectHideSubObjectPermanently( self, "SHIELD", true )
	ObjectHideSubObjectPermanently( self, "FireArowTip", true )
	ObjectHideSubObjectPermanently( self, "HELM01", true )
	ObjectHideSubObjectPermanently( self, "HELM02", true )
	ObjectHideSubObjectPermanently( self, "HELM03", true )
	ObjectHideSubObjectPermanently( self, "HA01", true )
	ObjectHideSubObjectPermanently( self, "HA02", true )
	ObjectHideSubObjectPermanently( self, "DRAGONORNAMENT", true )
	ObjectHideSubObjectPermanently( self, "SHIELDBACK", true )
	ObjectHideSubObjectPermanently( self, "HELMET", true )

	local sash          =    GetRandomNumber()

	if sash <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HELM01", false )
     elseif sash <= 0.6 then
        ObjectHideSubObjectPermanently( self, "HELM02", false )
     else
        ObjectHideSubObjectPermanently( self, "HELM03", false )
    end
end

function OnEasterlingSwordsmenCreated(self)
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
	ObjectHideSubObjectPermanently( self, "HA01", true )
	ObjectHideSubObjectPermanently( self, "HA02", true )
end

function OnEasterlingBannerCreated(self)
	ObjectHideSubObjectPermanently( self, "BANNER01", true )
	ObjectHideSubObjectPermanently( self, "BANNER02", true )
	ObjectHideSubObjectPermanently( self, "BANNER03", true )

	local flag          =    GetRandomNumber()

	if flag <= 0.33 then
        ObjectHideSubObjectPermanently( self, "BANNER01", false )
     elseif flag <= 0.66 then
        ObjectHideSubObjectPermanently( self, "BANNER02", false )
     else
        ObjectHideSubObjectPermanently( self, "BANNER03", false )
    end
end

function OnMorgulOrcCreated(self)
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
		ObjectHideSubObjectPermanently( self, "HELMET01", true )
		ObjectHideSubObjectPermanently( self, "HELMET02", true )
		ObjectHideSubObjectPermanently( self, "HELMET03", true )
		ObjectHideSubObjectPermanently( self, "HELMET04", true )
    ObjectHideSubObjectPermanently( self, "WEAP01FB", true )
		ObjectHideSubObjectPermanently( self, "WEAP02FB", true )
		ObjectHideSubObjectPermanently( self, "WEAP03FB", true )
    ObjectHideSubObjectPermanently( self, "SHIELD01", true )
    ObjectHideSubObjectPermanently( self, "SHIELD02", true )
    ObjectHideSubObjectPermanently( self, "SHIELD03", true )
		ObjectHideSubObjectPermanently( self, "SHIELD04", true )
		ObjectHideSubObjectPermanently( self, "WEAP01", true )
		ObjectHideSubObjectPermanently( self, "WEAP02", true )
		ObjectHideSubObjectPermanently( self, "WEAP03", true )
		ObjectHideSubObjectPermanently( self, "PIKE01FB", true )
		ObjectHideSubObjectPermanently( self, "PIKE02FB", true )
		ObjectHideSubObjectPermanently( self, "PIKE03FB", true )
		ObjectHideSubObjectPermanently( self, "PIKE01", true )
		ObjectHideSubObjectPermanently( self, "PIKE02", true )
		ObjectHideSubObjectPermanently( self, "PIKE03", true )

    local head          =    GetRandomNumber()
    local shield          =    GetRandomNumber()
		local helmet          =    GetRandomNumber()
		local weapon				=    GetRandomNumber()

    if head <= 0.333 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    elseif head <= 0.666 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    end

		if shield <= 0.2 then
        ObjectHideSubObjectPermanently( self, "SHIELD02", false )
    elseif shield <= 0.4 then
        ObjectHideSubObjectPermanently( self, "SHIELD03", false )
		elseif shield <= 0.7 then
        ObjectHideSubObjectPermanently( self, "SHIELD04", false )
     else
        ObjectHideSubObjectPermanently( self, "SHIELD01", false )
    end

		if helmet <= 0.2 then
        ObjectHideSubObjectPermanently( self, "HELMET02", false )
    elseif shield <= 0.4 then
        ObjectHideSubObjectPermanently( self, "HELMET03", false )
		elseif shield <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HELMET04", false )
     else
        ObjectHideSubObjectPermanently( self, "HELMET01", false )
    end

		if weapon <= 0.333 then
        ObjectHideSubObjectPermanently( self, "WEAP03", false )
				ObjectHideSubObjectPermanently( self, "PIKE03", false )
				ObjectGrantUpgrade( self, "Upgrade_AragornCostume_03" )
    elseif head <= 0.666 then
        ObjectHideSubObjectPermanently( self, "WEAP02", false )
				ObjectHideSubObjectPermanently( self, "PIKE02", false )
				ObjectGrantUpgrade( self, "Upgrade_AragornCostume_02" )
     else
        ObjectHideSubObjectPermanently( self, "WEAP01", false )
				ObjectHideSubObjectPermanently( self, "PIKE01", false )
				ObjectGrantUpgrade( self, "Upgrade_AragornCostume_01" )
    end
end



function OnIsengardDunlandGuardCreated(self)
    ObjectHideSubObjectPermanently( self, "HEAVY", true )
	ObjectHideSubObjectPermanently( self, "BODYA", true )
	ObjectHideSubObjectPermanently( self, "BODYB", true )
    ObjectHideSubObjectPermanently( self, "TORCH", true )
    ObjectHideSubObjectPermanently( self, "FireArowTip", true )
    ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
    ObjectHideSubObjectPermanently( self, "SHIELDA", true )
    ObjectHideSubObjectPermanently( self, "SHIELDB", true )
    ObjectHideSubObjectPermanently( self, "SHIELDC", true )
    -- helmet types
    ObjectHideSubObjectPermanently( self, "HEAD1", true )
    ObjectHideSubObjectPermanently( self, "HEAD2", true )
    ObjectHideSubObjectPermanently( self, "HEAD3", true )
    ObjectHideSubObjectPermanently( self, "HEAD4", true )

    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "HEAD04", true )

    local helm = GetRandomNumber()
    local head = GetRandomNumber()
    local head2 = GetRandomNumber()
    local body = GetRandomNumber()
    local armor = GetRandomNumber()
    local shield   =    GetRandomNumber()


    if shield <= 0.4 then
        ObjectHideSubObjectPermanently( self, "SHIELDA", false )
    elseif shield <= 0.8 then
        ObjectHideSubObjectPermanently( self, "SHIELDB", false )
     else
        ObjectHideSubObjectPermanently( self, "SHIELDC", false )
    end

    if armor <= 0.5 then
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAVY", false )
    end

    if body <= 0.5 then
        ObjectHideSubObjectPermanently( self, "BODYA", false )
     else
        ObjectHideSubObjectPermanently( self, "BODYB", false )
    end

    if helm <= 0.7 then
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
     else
        ObjectHideSubObjectPermanently( self, "HELMET", false )
    end

    if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEAD1", false )
        elseif head <= 0.50 then
          ObjectHideSubObjectPermanently( self, "HEAD2", false )
    elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEAD3", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD4", false )
    end
    if head2 <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
        elseif head2 <= 0.50 then
          ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head2 <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    end
end

function OnGBarracksCreated(self)
	ObjectHideSubObjectPermanently( self, "RACK1", true )
	ObjectHideSubObjectPermanently( self, "RACK2", true )

    local weapon         =    GetRandomNumber()

    if weapon <= 0.5 then
        ObjectHideSubObjectPermanently( self, "RACK2", false )
     else
        ObjectHideSubObjectPermanently( self, "RACK1", false )
    end
end

function OnStarlightActivated(self) --
	ObjectBroadcastEventToEnemies( self, "BeUncontrollablyAfraid", 350 )
end

function OnFirienholtWardenCreated(self)
end

function OnBeaconGuardsFunctionsCreated(self)
    ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )

    local head = GetRandomNumber()

    if head <= 0.333 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.666 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end
end

function OnRohanFarmCreated(self)
	--ObjectDoSpecialPower(self, "SpecialAbilitRohanFarmProduction")
	ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl3" )
	ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl7" )
	ObjectGrantUpgrade( self, "Upgrade_GondorArcheryRangeLevel2" )

	local animals         =    GetRandomNumber()

    if animals <= 0.5 then
        ObjectGrantUpgrade( self, "Upgrade_GondorArcheryRangeLevel2" )
    else
        --ObjectGrantUpgrade( self, "Upgrade_GondorStableLevel2" )
    end
end

function OnRohanFarmBuilding(self)
	ObjectGrantUpgrade( self, "Upgrade_BuildArmySwords" )
	ObjectGrantUpgrade( self, "Upgrade_GondorBarracksLevel3" )
end

function OnEowynReadinessActivated(self)
	ObjectDoSpecialPower(self, "SpecialAbilitRohanFarmPeasantry")
    ObjectRemoveUpgrade( self, "Upgrade_SwitchToRockThrowing" )
    ObjectGrantUpgrade( self, "Upgrade_Drafted" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl4" )	-- unlock the peasant button
end

function OnEowynReadinessDeactivated(self)
    ObjectRemoveUpgrade( self, "Upgrade_Drafted" )
    ObjectGrantUpgrade( self, "Upgrade_SwitchToRockThrowing" )
end

function OnEowynWeaponToggle(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl2" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl3" )
end

function OnEowynNotWeaponToggle(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl3" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )
end

function OnEowynMounted(self)
    ObjectRemoveUpgrade( self, "Upgrade_SwitchToRockThrowing" )
    ObjectGrantUpgrade( self, "Upgrade_Drafted" )
end

function OnEowynNotMounted(self)
    ObjectRemoveUpgrade( self, "Upgrade_Drafted" )
    ObjectGrantUpgrade( self, "Upgrade_SwitchToRockThrowing" )
end

function OnYeomenBannerCreated(self)
	ObjectHideSubObjectPermanently( self, "BODY01", true )
	ObjectHideSubObjectPermanently( self, "BODY02", true )
	ObjectHideSubObjectPermanently( self, "BODY03", true )
	ObjectHideSubObjectPermanently( self, "BODY04", true )
	ObjectHideSubObjectPermanently( self, "FLAG01", true )
	ObjectHideSubObjectPermanently( self, "FLAG02", true )
	ObjectHideSubObjectPermanently( self, "FLAG03", true )
	ObjectHideSubObjectPermanently( self, "COIF", true )
	ObjectHideSubObjectPermanently( self, "HELM01", true )
	ObjectHideSubObjectPermanently( self, "HELM02", true )
	ObjectHideSubObjectPermanently( self, "HELM03", true )
	ObjectHideSubObjectPermanently( self, "HELMHEAD01", true )
	ObjectHideSubObjectPermanently( self, "HELMHEAD02", true )
	ObjectHideSubObjectPermanently( self, "NOHELM01", true )
	ObjectHideSubObjectPermanently( self, "NOHELM02", true )
    local head          =    GetRandomNumber()
    local flags          =    GetRandomNumber()
    local bodies          =    GetRandomNumber()
    if bodies <= 0.2 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif bodies <= 0.5 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
	elseif bodies <= 0.8 then
        ObjectHideSubObjectPermanently( self, "BODY03", false )
     else
        ObjectHideSubObjectPermanently( self, "BODY04", false )
    end
    if flags <= 0.3 then
        ObjectHideSubObjectPermanently( self, "FLAG01", false )
    elseif flags <= 0.6 then
        ObjectHideSubObjectPermanently( self, "FLAG03", false )
     else
        ObjectHideSubObjectPermanently( self, "FLAG03", false )
    end
    if head <= 0.1 then
        ObjectHideSubObjectPermanently( self, "NOHELM01", false )
    elseif head <= 0.2 then
        ObjectHideSubObjectPermanently( self, "NOHELM02", false )
    elseif head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "COIF", false )
    elseif head <= 0.4 then
        ObjectHideSubObjectPermanently( self, "HELM01", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HELM02", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.65 then
        ObjectHideSubObjectPermanently( self, "HELM03", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HELM01", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
    elseif head <= 0.9 then
        ObjectHideSubObjectPermanently( self, "HELM02", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HELM03", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
    end
end

function OnAxemenofLossCreated(self)
    ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
    ObjectHideSubObjectPermanently( self, "ARMOR", true )
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    local helmet         =    GetRandomNumber()
    if helmet <= 0.333 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif helmet <= 0.666 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end
end

function OnTheodredCreated(self)
	ObjectHideSubObjectPermanently( self, "HELM", true )
	ObjectHideSubObjectPermanently( self, "CLOAK", true )
end

--function OnRohanBuildingDruedain(self)
--	ObjectDoSpecialPower(self, "SpecialAbilityFaithfulStoneSummon")
--end

function OnDruedainDeactivated(self)
    ObjectRemoveUpgrade( self, "Upgrade_DwarfFighterFearless" )
    ObjectGrantUpgrade( self, "Upgrade_AngmarFighterFearless" )
end

function OnDruedainActivated(self)
    ObjectRemoveUpgrade( self, "Upgrade_AngmarFighterFearless" )
    ObjectGrantUpgrade( self, "Upgrade_DwarfFighterFearless" )
end

function OnTheodenGloriousChargeChained(self)
	ObjectDoSpecialPower(self, "SpecialAbilityTheodenGloriousCharge")
end

function OnRhunWarBannerBuffLevel1(self)
	ObjectDoSpecialPower(self, "SpecialAbilityActivateeDummy")
end

function OnRhunWarBannerBuffLevel2(self)
	ObjectDoSpecialPower(self, "SpecialAbilityActivateeDummy2")
end

function OnYeomenRamCrewCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "OBJECT02", true )
	ObjectHideSubObjectPermanently( self, "BODY01", true )
	ObjectHideSubObjectPermanently( self, "BODY02", true )
	ObjectHideSubObjectPermanently( self, "BODY03", true )
	ObjectHideSubObjectPermanently( self, "CLOAK01", true )
	ObjectHideSubObjectPermanently( self, "CLOAK02", true )
	ObjectHideSubObjectPermanently( self, "CLOAK03", true )
	ObjectHideSubObjectPermanently( self, "COIF", true )
	ObjectHideSubObjectPermanently( self, "HELM01", true )
	ObjectHideSubObjectPermanently( self, "HELM02", true )
	ObjectHideSubObjectPermanently( self, "HELM03", true )
	ObjectHideSubObjectPermanently( self, "HELMHEAD01", true )
	ObjectHideSubObjectPermanently( self, "HELMHEAD02", true )
	ObjectHideSubObjectPermanently( self, "NOHELM01", true )
	ObjectHideSubObjectPermanently( self, "NOHELM02", true )
	ObjectHideSubObjectPermanently( self, "LEGS01", true )
	ObjectHideSubObjectPermanently( self, "LEGS02", true )
	ObjectHideSubObjectPermanently( self, "SHIELD01", true )
	ObjectHideSubObjectPermanently( self, "SHIELD02", true )
	ObjectHideSubObjectPermanently( self, "SHIELD03", true )
	ObjectHideSubObjectPermanently( self, "SHIELD04", true )
	ObjectHideSubObjectPermanently( self, "SHIELD05", true )
	ObjectHideSubObjectPermanently( self, "SHIELD06", true )
	ObjectHideSubObjectPermanently( self, "SHIELD07", true )
    local head          =    GetRandomNumber()
    local shield          =    GetRandomNumber()
    local legs          =    GetRandomNumber()
    local cloaks          =    GetRandomNumber()
    local bodies          =    GetRandomNumber()
    if bodies <= 0.3 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif bodies <= 0.6 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
     else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
    end
    if cloaks <= 0.3 then
        ObjectHideSubObjectPermanently( self, "CLOAK01", false )
    elseif cloaks <= 0.6 then
        ObjectHideSubObjectPermanently( self, "CLOAK03", false )
     else
        ObjectHideSubObjectPermanently( self, "CLOAK02", false )
    end
    if legs <= 0.5 then
        ObjectHideSubObjectPermanently( self, "LEGS01", false )
     else
        ObjectHideSubObjectPermanently( self, "LEGS02", false )
    end
    if shield <= 0.1 then
        ObjectHideSubObjectPermanently( self, "SHIELD01", false )
    elseif shield <= 0.3 then
        ObjectHideSubObjectPermanently( self, "SHIELD02", false )
    elseif shield <= 0.4 then
        ObjectHideSubObjectPermanently( self, "SHIELD03", false )
    elseif shield <= 0.5 then
        ObjectHideSubObjectPermanently( self, "SHIELD04", false )
    elseif shield <= 0.7 then
        ObjectHideSubObjectPermanently( self, "SHIELD05", false )
    elseif shield <= 0.9 then
        ObjectHideSubObjectPermanently( self, "SHIELD06", false )
     else
        ObjectHideSubObjectPermanently( self, "SHIELD07", false )
    end
    if head <= 0.15 then
        ObjectHideSubObjectPermanently( self, "COIF", false )
    elseif head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HELM01", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HELM02", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.65 then
        ObjectHideSubObjectPermanently( self, "HELM03", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD01", false )
    elseif head <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HELM01", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
    elseif head <= 0.9 then
        ObjectHideSubObjectPermanently( self, "HELM02", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HELM03", false )
        ObjectHideSubObjectPermanently( self, "HELMHEAD02", false )
    end
end

function OnRivendellUnitsEvenstar(self)
	ObjectDoSpecialPower(self, "SpecialAbilityArwenEvenstarUnits")
end

function OnRivendellUnitsEvenstarActive(self)
    ObjectGrantUpgrade( self, "Upgrade_DwarvenForgedBlades" )
    ObjectRemoveUpgrade( self, "Upgrade_RohanForgedBlades" )
end

function OnRivendellUnitsEvenstarNotActive(self)
    ObjectGrantUpgrade( self, "Upgrade_RohanForgedBlades" )
    ObjectRemoveUpgrade( self, "Upgrade_DwarvenForgedBlades" )
end

function OnAragornBow(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl2" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl3" )
end

function OnAragornSword(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl3" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )
end

function OnAragornHeroesBuff(self)
	ObjectDoSpecialPower(self, "SpecialAbilityAragornHeroesBuff")
end

function OnHobbitsStealth(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl2" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl3" )
end

function OnHobbitsNotStealth(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl3" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )
end

function OnSwornAllegianceActivated(self)
    ObjectRemoveUpgrade( self, "Upgrade_SwitchToRockThrowing" )
    ObjectGrantUpgrade( self, "Upgrade_Drafted" )
end

function OnSwornAllegianceDeactivated(self)
    ObjectRemoveUpgrade( self, "Upgrade_Drafted" )
    ObjectGrantUpgrade( self, "Upgrade_SwitchToRockThrowing" )
end

function OnForlongCreated(self)
    ObjectGrantUpgrade( self, "Upgrade_Evilboyos" )
end

function OnBelohkMounted(self)
    ObjectHideSubObjectPermanently( self, "FireArowTip", true )
	ObjectHideSubObjectPermanently( self, "BARB", true )
	ObjectHideSubObject( self, "ArrowNock", true )
end

function OnTwinUserTwoOn(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl2" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl3" )
end

function OnTwinUserTwoOff(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl3" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )
end

function BannerOfArwenUser2(self)
  ObjectDoSpecialPower(self, "SpecialAbilityBannerOfArwenSelf")
end

function OnRuinsStatueCreated(self)
	ObjectHideSubObjectPermanently( self, "OSBSTA02", true )
	ObjectHideSubObjectPermanently( self, "OSBSTA03", true )
	local chance  = 	GetRandomNumber()
	if chance <= 0.50 then
		ObjectHideSubObjectPermanently( self, "OSBSTA02", false )
	elseif chance > 0.50 then
		ObjectHideSubObjectPermanently( self, "OSBSTA03", false )
	end
end

function OnRuinsColumnCreated(self)
	ObjectHideSubObjectPermanently( self, "OBJECT20", true )
	ObjectHideSubObjectPermanently( self, "OBJECT21", true )
	ObjectHideSubObjectPermanently( self, "OSBRUIN06", true )
	ObjectHideSubObjectPermanently( self, "OSBRUIN14", true )
	local chance  = 	GetRandomNumber()

	if chance <= 0.25 then
		ObjectHideSubObjectPermanently( self, "OBJECT20", false )
	elseif chance <= 0.50 then
		ObjectHideSubObjectPermanently( self, "OBJECT21", false )
	elseif chance <= 0.75 then
		ObjectHideSubObjectPermanently( self, "OSBRUIN14", false )
	elseif chance > 0.75 then
		ObjectHideSubObjectPermanently( self, "OSBRUIN06", false )
	end
end

function OnRuinsDebrisCreated(self)
	ObjectHideSubObjectPermanently( self, "OSBRUINRUB01", true )
	ObjectHideSubObjectPermanently( self, "OSBRUINRUB03", true )
	local chance  = 	GetRandomNumber()
	if chance <= 0.50 then
		ObjectHideSubObjectPermanently( self, "OSBRUINRUB01", false )
	elseif chance > 0.50 then
		ObjectHideSubObjectPermanently( self, "OSBRUINRUB03", false )
	end
end

function DenethorTerror(self)
  ObjectDoSpecialPower(self, "SpecialAbilityScreech")
end

function WKTerror(self)
  ObjectDoSpecialPower(self, "SpecialAbilityHornOfGondor")
end

function TBRoar(self)
  ObjectDoSpecialPower(self, "SpecialAbilityRoar")
end

function ChillOfTheGrave(self)
  ObjectDoSpecialPower(self, "SpecialAbilitDraftTowerAnimation")
end

function OnUser2Activated(self)
    ObjectRemoveUpgrade( self, "Upgrade_SwitchToRockThrowing" )
    ObjectGrantUpgrade( self, "Upgrade_Drafted" )
end

function OnUser2Deactivated(self)
    ObjectRemoveUpgrade( self, "Upgrade_Drafted" )
    ObjectGrantUpgrade( self, "Upgrade_SwitchToRockThrowing" )
end

function OnUser5Deactivated(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl2" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl3" )
end

function OnUser5Activated(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl3" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )
end

function OnUser7Deactivated(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl4" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl5" )
end

function OnUser7Activated(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl5" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl4" )
end

function OnUser6Deactivated(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl6" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl7" )
end

function OnUser6Activated(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl7" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl6" )
end

function OnMordorTowerExpansionCreated(self)
	ObjectHideSubObjectPermanently( self, "TOWERGLOW", true )
end

function OnGateWatcherCreated(self)
	ObjectHideSubObjectPermanently( self, "UNGOLGLOW", true )
end

function OnMordorCatapultExpansionCreated(self)
	ObjectHideSubObjectPermanently( self, "CATAGLOW", true )
end

function OnDraftTowerCreated(self)
	ObjectHideSubObjectPermanently( self, "EORED", true )
	ObjectHideSubObjectPermanently( self, "FIRIEN", true )
	ObjectHideSubObjectPermanently( self, "WESTA", true )
	ObjectHideSubObjectPermanently( self, "WESTB", true )
end

function OnDraftTowerFinished(self)
    ObjectGrantUpgrade( self, "Upgrade_ObjectLevel1" )
end

function OnPeasantsDeactivated(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl2" )
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl4" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl3" )
end

function OnPeasantsActivated(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl3" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )
end

function OnProductionActivated(self)
    ObjectRemoveUpgrade( self, "Upgrade_HorseDiscipline" )
    ObjectGrantUpgrade( self, "Upgrade_CanTaunt" )
end

function OnProductionDeactivated(self)
    ObjectRemoveUpgrade( self, "Upgrade_CanTaunt" )
    ObjectGrantUpgrade( self, "Upgrade_HorseDiscipline" )
end

function OnFarmProducing(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl7" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl10" )
end

function OnFarmNotProducing(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl10" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl7" )
end

function OnDurinDoorsCreated(self)
    ObjectHideSubObjectPermanently( self, "FX_L", true )
    ObjectHideSubObjectPermanently( self, "FX_R", true )
end

function OnHelmingasCreated(self)
    ObjectGrantUpgrade( self, "Upgrade_HorseDiscipline" )
	ObjectHideSubObjectPermanently( self, "SHIELDA", true )
	ObjectHideSubObjectPermanently( self, "SHIELDB", true )
	ObjectHideSubObjectPermanently( self, "SHIELDC", true )
	ObjectHideSubObjectPermanently( self, "HORSE01", true )
	ObjectHideSubObjectPermanently( self, "HORSE02", true )
	ObjectHideSubObjectPermanently( self, "HORSE03", true )
	ObjectHideSubObjectPermanently( self, "TAIL01", true )
	ObjectHideSubObjectPermanently( self, "TAIL02", true )
	ObjectHideSubObjectPermanently( self, "TAIL03", true )
	local shield  = 	GetRandomNumber()
	local horse  = 	GetRandomNumber()
	local tail  = 	GetRandomNumber()
	if shield <= 0.33 then
		ObjectHideSubObjectPermanently( self, "SHIELDA", false )
	elseif shield <= 0.66 then
		ObjectHideSubObjectPermanently( self, "SHIELDB", false )
	else
		ObjectHideSubObjectPermanently( self, "SHIELDC", false )
	end
	if horse <= 0.33 then
		ObjectHideSubObjectPermanently( self, "HORSE01", false )
	elseif horse <= 0.66 then
		ObjectHideSubObjectPermanently( self, "HORSE02", false )
	else
		ObjectHideSubObjectPermanently( self, "HORSE03", false )
	end
	if tail <= 0.33 then
		ObjectHideSubObjectPermanently( self, "TAIL01", false )
	elseif tail <= 0.66 then
		ObjectHideSubObjectPermanently( self, "TAIL02", false )
	else
		ObjectHideSubObjectPermanently( self, "TAIL03", false )
	end
end

function OnPippinCreated(self)
	ObjectHideSubObjectPermanently( self, "HAHEADNEW", true )
	ObjectHideSubObjectPermanently( self, "LORIENCLOAK", true)
	ObjectHideSubObjectPermanently( self, "LORIENBROOCH", true )
    ObjectHideSubObjectPermanently( self, "HABODY", true )
    ObjectHideSubObjectPermanently( self, "HASHEATHS", true )
    ObjectHideSubObjectPermanently( self, "HASHEATH", true )
    ObjectHideSubObjectPermanently( self, "HASWORD", true )
end

function OnMerryCreated(self)
	ObjectHideSubObjectPermanently( self, "HAHEADNEW", true )
	ObjectHideSubObjectPermanently( self, "LORIENCLOAK", true)
	ObjectHideSubObjectPermanently( self, "LORIENBROOCH", true )
    ObjectHideSubObjectPermanently( self, "HASHIELD", true )
    ObjectHideSubObjectPermanently( self, "HABODY", true )
    ObjectHideSubObjectPermanently( self, "HALEGS", true )
    ObjectHideSubObjectPermanently( self, "HASCABBARDS", true )
    ObjectHideSubObjectPermanently( self, "HASCABBARD", true )
    ObjectHideSubObjectPermanently( self, "HAMERRYSWORD", true )
end

function OnPorterMounted(self)
    ObjectRemoveUpgrade( self, "Upgrade_HorseDiscipline" )
    ObjectGrantUpgrade( self, "Upgrade_CanTaunt" )
end

function OnPorterDisounted(self)
    ObjectRemoveUpgrade( self, "Upgrade_CanTaunt" )
    ObjectGrantUpgrade( self, "Upgrade_HorseDiscipline" )
end

function OnLibraryCreated(self)
	ObjectGrantUpgrade( self, "Upgrade_GondorStableLevel2" )
	ObjectDoSpecialPower(self, "SpecialAbilityLibraryDisabled")
end

function OnLibraryIdle(self)
	ObjectDoSpecialPower(self, "SpecialAbilityLibraryDisabled")
end

function OnTwinsDeathEggCreated(self)
	ObjectDoSpecialPower(self, "SpecialAbilityLibraryDisabled")
end

function OnIsengardInfantryFocusCreated(self)
	ObjectGrantUpgrade( self, "Upgrade_StructureLevel1" )
	ObjectGrantUpgrade( self, "Upgrade_GondorStableLevel2" )
	ObjectDoSpecialPower(self, "SpecialAbilityLibraryDisabled")
end

function OnIsengardFocusCreated(self)
	ObjectGrantUpgrade( self, "Upgrade_StructureLevel1" )
end

function OnBoromirStubborn(self)
	ObjectDoSpecialPower(self, "SpecialAbilityBoromirStubborn")
end

function OnBerserkerWithTorch(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl2" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl3" )
end

function OnBerserkerWithoutTorch(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl3" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )
end

function OnNecromancerMounted(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl2" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl3" )
end

function OnNecromancerNotMounted(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl3" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )
end

function OnDainMounted(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl2" )
    ObjectGrantUpgrade( self, "Upgrade_IsMounted" )
end

function OnDainNotMounted(self)
    ObjectRemoveUpgrade( self, "Upgrade_IsMounted" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )
end

function OnUniversalBuildplotCreated(self)
    ObjectGrantUpgrade( self, "Upgrade_HorseDiscipline" )
end

function OnHasharinStanceSubtlety(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl5" )
		ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl6" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl4" )
end

function OnHasharinStanceCombat(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl4" )
		ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl6" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl5" )
end

function OnHasharinStanceAssassination(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl4" )
		ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl5" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl6" )
end


function OnHaradCommandsetEnabled(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl6" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl7" )
end

function OnHaradCommandsetDisabled(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl7" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl6" )
end

function OnHaradBCEnabled(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl4" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl5" )
end

function OnHaradBCDisabled(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl5" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl4" )
end

function OnHaradHAEnabled(self)
    ObjectRemoveUpgrade( self, "Upgrade_HorseDiscipline" )
    ObjectGrantUpgrade( self, "Upgrade_CanTaunt" )
end

function OnHaradHADisabled(self)
    ObjectRemoveUpgrade( self, "Upgrade_CanTaunt" )
    ObjectGrantUpgrade( self, "Upgrade_HorseDiscipline" )
end

function OnHaradFAEnabled(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl2" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl3" )
end

function OnHaradFADisabled(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl3" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )
end

function OnHaradMUEnabled(self)
    ObjectRemoveUpgrade( self, "Upgrade_MordorOrcPitLevel2" )
    ObjectGrantUpgrade( self, "Upgrade_MordorOrcPitLevel3" )
end

function OnHaradMUDisabled(self)
    ObjectRemoveUpgrade( self, "Upgrade_MordorOrcPitLevel3" )
    ObjectGrantUpgrade( self, "Upgrade_MordorOrcPitLevel2" )
end

function OnRestlessBarrowActivated(self)
	ObjectDoSpecialPower(self, "SpecialAbilityGuldurSpawnRestless")
end

function OnCreateRisenDead(self)
	ObjectDoSpecialPower(self, "SpecialAbilityCreateRisenDead")
end

function OnFinishedGuldurBuilding(self)
	--ObjectDoSpecialPower(self, "SpecialAbilityGuldurBuilderKiller")
end

function OnFinishedGuldurBuilding2(self)
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl3" )
end

function OnFinishedGuldurSpireSorcery(self)
	ObjectDoSpecialPower(self, "SpecialAbilityGuldurBuilderKiller")
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl6" )
end

function OnGuldurBuildingCreated(self)
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl5" )
end

function OnCreateGuldurSpiderLair(self)
	ObjectDoSpecialPower(self, "SpecialAbilityGuldurBuilderKiller")
	ObjectDoSpecialPower(self, "SpecialAbilityLibraryDisabled")
end

function OnRestlessWarriorCreated(self)
	ObjectHideSubObjectPermanently( self, "AXE", true )
	ObjectHideSubObjectPermanently( self, "SWORDB", true )

    local weapon    =    GetRandomNumber()

    if weapon <= 0.5 then
        ObjectHideSubObjectPermanently( self, "AXE", false )
    else
        ObjectHideSubObjectPermanently( self, "SWORDB", false )
    end

end

function OnCaHRestlessWarriorCreated(self)

    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl6" )
	ObjectHideSubObjectPermanently( self, "AXE", true )
	ObjectHideSubObjectPermanently( self, "SWORDB", true )

    local weapon    =    GetRandomNumber()

    if weapon <= 0.5 then
        ObjectHideSubObjectPermanently( self, "AXE", false )
    else
        ObjectHideSubObjectPermanently( self, "SWORDB", false )
    end

end

function OnCaHRisenDeadCreated(self)

    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl6" )

end

function OnBrokenRabbleCreated(self)
    --ObjectGrantUpgrade( self, "Upgrade_HorseDiscipline" )
	ObjectHideSubObjectPermanently( self, "WEAP1", true )
	ObjectHideSubObjectPermanently( self, "WEAP2", true )
	ObjectHideSubObjectPermanently( self, "WEAP3", true )

    local weapon    =    GetRandomNumber()

    if weapon <= 0.33 then
        ObjectHideSubObjectPermanently( self, "WEAP1", false )
	elseif weapon <= 0.66 then
		ObjectHideSubObjectPermanently( self, "WEAP2", false )
    else
        ObjectHideSubObjectPermanently( self, "WEAP3", false )
    end

end

function OnAngmarSnagaCreated(self)
    --ObjectGrantUpgrade( self, "Upgrade_HorseDiscipline" )
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "WEAP1", true )
	ObjectHideSubObjectPermanently( self, "WEAP2", true )
	ObjectHideSubObjectPermanently( self, "WEAP3", true )

    local head    =    GetRandomNumber()
    local weapon    =    GetRandomNumber()

    if head <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
	elseif weapon <= 0.66 then
		ObjectHideSubObjectPermanently( self, "HEAD02", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

    if weapon <= 0.33 then
        ObjectHideSubObjectPermanently( self, "WEAP1", false )
	elseif weapon <= 0.66 then
		ObjectHideSubObjectPermanently( self, "WEAP2", false )
    else
        ObjectHideSubObjectPermanently( self, "WEAP3", false )
    end

end

function OnBrokenRabbleSlavedCreated(self)
	ObjectHideSubObjectPermanently( self, "WEAP1", true )
	ObjectHideSubObjectPermanently( self, "WEAP2", true )
	ObjectHideSubObjectPermanently( self, "WEAP3", true )
end

function OnBrokenRabbleHordeCreated(self)
    ObjectGrantUpgrade( self, "Upgrade_HorseDiscipline" )
end

function OnRisenDeadOrcCreated(self)
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )

    local head    =    GetRandomNumber()

    if head <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
	elseif head <= 0.66 then
		ObjectHideSubObjectPermanently( self, "HEAD02", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end
end

function OnGuldurOrcGaolerCreated(self)
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "SPEARA", true )
	ObjectHideSubObjectPermanently( self, "SPEARB", true )
	ObjectHideSubObjectPermanently( self, "SPEARC", true )

    local head    =    GetRandomNumber()

    if head <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
	elseif head <= 0.66 then
		ObjectHideSubObjectPermanently( self, "HEAD02", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

    local spear    =    GetRandomNumber()

    if spear <= 0.33 then
        ObjectHideSubObjectPermanently( self, "SPEARA", false )
	elseif spear <= 0.66 then
		ObjectHideSubObjectPermanently( self, "SPEARB", false )
    else
        ObjectHideSubObjectPermanently( self, "SPEARC", false )
    end
end

function OnGuldurSpiderRiderCreated(self)
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "SPEARA", true )
	ObjectHideSubObjectPermanently( self, "SPEARB", true )
	ObjectHideSubObjectPermanently( self, "SPEARC", true )
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )

    local head    =    GetRandomNumber()

    if head <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
	elseif head <= 0.66 then
		ObjectHideSubObjectPermanently( self, "HEAD02", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

    local spear    =    GetRandomNumber()

    if spear <= 0.33 then
        ObjectHideSubObjectPermanently( self, "SPEARA", false )
	elseif spear <= 0.66 then
		ObjectHideSubObjectPermanently( self, "SPEARB", false )
    else
        ObjectHideSubObjectPermanently( self, "SPEARC", false )
    end
end

function OnGuldurOrcGaolerForBrokenRabbleCreated(self)
    --ObjectGrantUpgrade( self, "Upgrade_HorseDiscipline" )
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "SPEARA", true )
	ObjectHideSubObjectPermanently( self, "SPEARB", true )
	ObjectHideSubObjectPermanently( self, "SPEARC", true )

    local head    =    GetRandomNumber()

    if head <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
	elseif head <= 0.66 then
		ObjectHideSubObjectPermanently( self, "HEAD02", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

    local spear    =    GetRandomNumber()

    if spear <= 0.33 then
        ObjectHideSubObjectPermanently( self, "SPEARA", false )
	elseif spear <= 0.66 then
		ObjectHideSubObjectPermanently( self, "SPEARB", false )
    else
        ObjectHideSubObjectPermanently( self, "SPEARC", false )
    end
end

function OnGuldurOrcArcherCreated(self)
    ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
    ObjectHideSubObjectPermanently( self, "ARROWFIRE", true )
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )

    local head    =    GetRandomNumber()

    if head <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
	elseif head <= 0.66 then
		ObjectHideSubObjectPermanently( self, "HEAD02", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end
end

function OnGuldurOrcBannerCreated(self)
    --ObjectGrantUpgrade( self, "Upgrade_HorseDiscipline" )
    ObjectShowSubObjectPermanently( self, "WEAP2", true )
end

function GrishnakhDamageDealer(self, other, delay, amount)
    local armor    =    GetRandomNumber()
    if armor <= 0.5 then
		ObjectDoSpecialPower(self, "SpecialAbilityGrishnakhTenacity")
	else
		--
	end
end

function OnGuldurPorterCreated(self)
    --ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl10" )
end

function OnGuldurBuildingUp(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl3" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )
	--ObjectDoSpecialPower(self, "SpecialAbilityGuldurBuilderKiller")
end

function OnGuldurNotBuildingUp(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl2" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl3" )
end

function OnCastellanCreated(self)
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )
end

function OnMuzgashCreated(self)
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )
end
function OnMuzgashHero(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl2" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl3" )
end
function OnMuzgashHeroOff(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl3" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )
end

function OnGuldurTrapperCreated(self)
	ObjectHideSubObjectPermanently( self, "SPEARS", true )
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HEAD04", true )
	ObjectHideSubObjectPermanently( self, "SHROOM01", true )
	ObjectHideSubObjectPermanently( self, "SHROOM02", true )
	ObjectHideSubObjectPermanently( self, "SHROOM03", true )
	ObjectHideSubObjectPermanently( self, "SHROOM04", true )
	ObjectHideSubObjectPermanently( self, "SHROOM05", true )
	ObjectHideSubObjectPermanently( self, "CHEST", true )

    local head    =    GetRandomNumber()
    local mushroom1    =    GetRandomNumber()
    local mushroom2    =    GetRandomNumber()
    local mushroom3    =    GetRandomNumber()
    local mushroom4    =    GetRandomNumber()
    local mushroom5    =    GetRandomNumber()

    if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
	elseif head <= 0.50 then
		ObjectHideSubObjectPermanently( self, "HEAD02", false )
	elseif head <= 0.75 then
		ObjectHideSubObjectPermanently( self, "HEAD03", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    end

    if mushroom1 <= 0.5 then
        ObjectHideSubObjectPermanently( self, "SHROOM01", false )
    else
        --
    end

    if mushroom2 <= 0.5 then
        ObjectHideSubObjectPermanently( self, "SHROOM02", false )
    else
        --
    end

    if mushroom3 <= 0.5 then
        ObjectHideSubObjectPermanently( self, "SHROOM03", false )
    else
        --
    end

    if mushroom4 <= 0.5 then
        ObjectHideSubObjectPermanently( self, "SHROOM04", false )
    else
        --
    end

    if mushroom5 <= 0.5 then
        ObjectHideSubObjectPermanently( self, "CHEST", false )
    else
        --
    end

end

function OnGuldurTrapperCaptainCreated(self)
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HEAD04", true )
	ObjectHideSubObjectPermanently( self, "SHROOM01", true )
	ObjectHideSubObjectPermanently( self, "SHROOM02", true )
	ObjectHideSubObjectPermanently( self, "SHROOM03", true )
	ObjectHideSubObjectPermanently( self, "SHROOM04", true )
	ObjectHideSubObjectPermanently( self, "SHROOM05", true )
	ObjectHideSubObjectPermanently( self, "CHEST", true )

    local head    =    GetRandomNumber()
    local mushroom1    =    GetRandomNumber()
    local mushroom2    =    GetRandomNumber()
    local mushroom3    =    GetRandomNumber()
    local mushroom4    =    GetRandomNumber()
    local mushroom5    =    GetRandomNumber()

    if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
	elseif head <= 0.50 then
		ObjectHideSubObjectPermanently( self, "HEAD02", false )
	elseif head <= 0.75 then
		ObjectHideSubObjectPermanently( self, "HEAD03", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    end

    if mushroom1 <= 0.5 then
        ObjectHideSubObjectPermanently( self, "SHROOM01", false )
    else
        --
    end

    if mushroom2 <= 0.5 then
        ObjectHideSubObjectPermanently( self, "SHROOM02", false )
    else
        --
    end

    if mushroom3 <= 0.5 then
        ObjectHideSubObjectPermanently( self, "SHROOM03", false )
    else
        --
    end

    if mushroom4 <= 0.5 then
        ObjectHideSubObjectPermanently( self, "SHROOM04", false )
    else
        --
    end

    if mushroom5 <= 0.5 then
        ObjectHideSubObjectPermanently( self, "CHEST", false )
    else
        --
    end

end

function OnGuldurOrcRavagerCreated(self)
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )

    local head    =    GetRandomNumber()

    if head <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    end
end

function OnGuldurImprisoned(self)
	ObjectDoSpecialPower(self, "SpecialAbilityGuldurImprisonTargeted")
end

function OnGuldurFountGarrisoned(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl6" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl7" )
end

function OnGuldurFountNotGarrisoned(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl7" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl6" )
end

function OnGuldurPorterWorking(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl7" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl10" )
	--ExecuteAction("NAMED_KILL", self)
end

function OnGuldurPorterWorkingTest(self)
	ExecuteAction("NAMED_KILL", self)
    ObjectGrantUpgrade( self, "Upgrade_CanTaunt" )
end

function OnGuldurPorterWorkingTest2(self)
    ObjectGrantUpgrade( self, "Upgrade_CanTaunt" )
end

function OnGuldurPorterNotWorking(self)
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl7" )
end

function OnCargastCreated(self)
    --ObjectGrantUpgrade( self, "Upgrade_SwitchToRockThrowing" )
end

function OnCargastMoving(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl6" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl7" )
end

function UsingDarkAwakening(self)
	ObjectDoSpecialPower(self, "SpecialAbilitCargastDarkAwakeningSummon")
end

function OnDarkAwakening(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl7" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl6" )
end

function OffDarkAwakening(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl6" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl7" )
end

function OnMemoryOfMordor(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl7" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl6" )
	ObjectDoSpecialPower(self, "SpecialAbilitMemoryOfMordorSummon")
end

function OffMemoryOfMordor(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl6" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl7" )
end

function OnHuornRoots(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl7" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl6" )
	ObjectDoSpecialPower(self, "SpecialAbilitMemoryOfMordorSummon")
end

function OffHuornRoots(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl6" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl7" )
end

function GuldurInfestationDisabled(self)
    ObjectRemoveUpgrade( self, "Upgrade_GuldurInfestationEnabled" )
	ObjectGrantUpgrade( self, "Upgrade_SwitchToTree" )
end

function GuldurInfestationEnabled(self)
    ObjectGrantUpgrade( self, "Upgrade_GuldurInfestationEnabled" )
    ObjectRemoveUpgrade( self, "Upgrade_SwitchToTree" )
end

function OnGothmogCreated(self)
    ObjectGrantUpgrade( self, "Upgrade_AmrothKnights" )
end

function OnGothmogNewCreated(self)
    ObjectGrantUpgrade( self, "Upgrade_AmrothKnights" )
	ObjectHideSubObjectPermanently( self, "SWORD", true )
	ObjectHideSubObjectPermanently( self, "MACE", true )

	local weapon    =    GetRandomNumber()
    if weapon <= 0.50 then
        ObjectHideSubObjectPermanently( self, "SWORD", false )
     else
        ObjectHideSubObjectPermanently( self, "MACE", false )
    end
end

function OnBoromirCreated(self)	
	ObjectHideSubObjectPermanently( self, "HEAD", true )
	ObjectHideSubObjectPermanently( self, "HEADCLK", true )
	
	ObjectHideSubObjectPermanently( self, "HOOD", true )
	ObjectHideSubObjectPermanently( self, "FURCLOAK", true )
	ObjectHideSubObjectPermanently( self, "CLASPS", true )
	
	ObjectHideSubObjectPermanently( self, "BSHIELDCLOAK", true )
	
	ObjectHideSubObjectPermanently( self, "BSHIELD", true )
	
	
	local cloak    =    GetRandomNumber()
	
	local cloak    =    GetRandomNumber()
    if cloak <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HEAD", false )
		ObjectHideSubObjectPermanently( self, "BSHIELD", false )
     else
        ObjectHideSubObjectPermanently( self, "HEADCLK", false )
		ObjectHideSubObjectPermanently( self, "HOOD", false )
		ObjectHideSubObjectPermanently( self, "FURCLOAK", false )
		ObjectHideSubObjectPermanently( self, "CLASPS", false )
		ObjectHideSubObjectPermanently( self, "BSHIELDCLOAK", false )
    end
	
end

function OnFaramirCreated(self)
    ObjectGrantUpgrade( self, "Upgrade_AmrothKnights" )
	ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )
	
	ObjectHideSubObjectPermanently( self, "BODY", true )
	ObjectHideSubObjectPermanently( self, "BODYDUSTER", true )
	
	ObjectHideSubObjectPermanently( self, "HOOD", true )
	ObjectHideSubObjectPermanently( self, "HEADHOOD", true )
	
	ObjectHideSubObjectPermanently( self, "HOODDOWN", true )
	ObjectHideSubObjectPermanently( self, "HEAD", true )
	
	
	local hood    =    GetRandomNumber()
	local body    =    GetRandomNumber()
	
	local hood    =    GetRandomNumber()
    if hood <= 0.20 then
        ObjectHideSubObjectPermanently( self, "HOOD", false )
		ObjectHideSubObjectPermanently( self, "HEADHOOD", false )
     else
        ObjectHideSubObjectPermanently( self, "HOODDOWN", false )
		ObjectHideSubObjectPermanently( self, "HEAD", false )
    end
	
	local body    =    GetRandomNumber()
    if body <= 0.65 then
        ObjectHideSubObjectPermanently( self, "BODY", false )
     else
        ObjectHideSubObjectPermanently( self, "BODYDUSTER", false )
    end
	
end

function OnCampaignFaramirCreated(self)
    ObjectGrantUpgrade( self, "Upgrade_AmrothKnights" )
	ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )	
end

function OnSuladanCreated(self)
	ObjectGrantUpgrade( self, "Upgrade_IsMounted" )
	ObjectGrantUpgrade( self, "Upgrade_SonsOfElrond" )
end

function OnShagratCreated(self)
    ObjectGrantUpgrade( self, "Upgrade_Arkenstone" )
end

function OnThranduilCreated(self)
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl7" )
    local robe    =    GetRandomNumber()

    if robe <= 0.2 then
        --
	elseif robe <= 0.4 then
		ObjectGrantUpgrade( self, "Upgrade_AragornCostume_01" )
	elseif robe <= 0.6 then
		ObjectGrantUpgrade( self, "Upgrade_AragornCostume_02" )
	elseif robe <= 0.8 then
		ObjectGrantUpgrade( self, "Upgrade_AragornCostume_03" )
    else
        ObjectGrantUpgrade( self, "Upgrade_AragornCostume_04" )
    end
end

function OnNecromancerHasTheRing(self)
	ObjectDoSpecialPower( self, "SpecialAbilitySauronDarkness" )
end

function OnWitchKingHasTheRing(self)
	ObjectDoSpecialPower( self, "SpecialAbilitySauronDarkness" )
end

function OnGuldurGaolRank3(self)
    ObjectGrantUpgrade( self, "Upgrade_Arkenstone" )
end

function OnThorinNewCreated(self)
	ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl4" )
	--ObjectDoSpecialPower( self, "SpecialAbilityDainAxeEnabler" )
end

function OnDainAxe(self)
	ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl4" )
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl5" )
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl6" )
	--ObjectDoSpecialPower( self, "SpecialAbilityDainAxeEnabler" )
end

function OnDainHammer(self)
	ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl5" )
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl4" )
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl6" )
	--ObjectDoSpecialPower( self, "SpecialAbilityDainHammerEnabler" )
end

function OnDainRedAxe(self)
	ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl6" )
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl4" )
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl5" )
	--ObjectDoSpecialPower( self, "SpecialAbilityDainRedAxeEnabler" )
end

function OnCursedTreasureDeactivated(self)
    ObjectRemoveUpgrade( self, "Upgrade_CursedTreasureActivated" )
    ObjectGrantUpgrade( self, "Upgrade_CursedTreasureDesactivated" )
end

function OnCursedTreasureActivated(self)
    ObjectRemoveUpgrade( self, "Upgrade_CursedTreasureDesactivated" )
    ObjectGrantUpgrade( self, "Upgrade_CursedTreasureActivated" )
end

function OnMirkwoodPorterCreated(self)
    ObjectHideSubObjectPermanently( self, "GUPORTERLUIGI", true )
end

function OnTollKeepersActivated(self)
	ObjectDoSpecialPower(self, "SpecialAbilityTollKeepersSummon")
end

function OnSindarNoblesCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade01", true )
	ObjectHideSubObjectPermanently( self, "SHIELD", true )

    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )

    ObjectHideSubObjectPermanently( self, "HORSE01", true )
    ObjectHideSubObjectPermanently( self, "HORSE02", true )
    ObjectHideSubObjectPermanently( self, "HORSE03", true )

    ObjectHideSubObjectPermanently( self, "TAIL01", true )
    ObjectHideSubObjectPermanently( self, "TAIL02", true )
    ObjectHideSubObjectPermanently( self, "TAIL03", true )

    local horse         =    GetRandomNumber()
    local head 			=   GetRandomNumber()
    local tail 			=   GetRandomNumber()

    if horse <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HORSE01", false )
    elseif horse <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HORSE02", false )
     else
        ObjectHideSubObjectPermanently( self, "HORSE03", false )
    end

    if head <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

    if tail <= 0.33 then
        ObjectHideSubObjectPermanently( self, "TAIL01", false )
    elseif tail <= 0.66 then
        ObjectHideSubObjectPermanently( self, "TAIL02", false )
     else
        ObjectHideSubObjectPermanently( self, "TAIL03", false )
    end
end

function OnSindarNoblesBannerCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "OFFICEHELM", true )

    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )

    ObjectHideSubObjectPermanently( self, "HORSE02", true )
    ObjectHideSubObjectPermanently( self, "HORSE03", true )
    ObjectHideSubObjectPermanently( self, "HORSE04", true )

    local head 			=   GetRandomNumber()
    local helmet 			=   GetRandomNumber()


    if head <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

    if helmet <= 0.50 then
        ObjectHideSubObjectPermanently( self, "OFFICEHELM", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end
end

function OnThorinArkenstone(self)
	ObjectDoSpecialPower(self, "SpecialAbilityThorinBecomesKing")
end

function OnMasterLaketownCreated(self)

    ObjectHideSubObjectPermanently( self, "HAT", true )

    local hat 			=   GetRandomNumber()

    if hat <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HAT", false )
     else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end
end

function OnHelmingasHordeMounted(self)
    ObjectRemoveUpgrade( self, "Upgrade_HorseDiscipline" )
    ObjectGrantUpgrade( self, "Upgrade_CanTaunt" )
end

function OnHelmingasHordeDismounted(self)
    ObjectGrantUpgrade( self, "Upgrade_HorseDiscipline" )
    ObjectRemoveUpgrade( self, "Upgrade_CanTaunt" )
end

function LegolasNearGimli(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl3" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )
end

function LegolasNotNearGimli(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl2" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl3" )
end

function OnLegolasGarrisoned(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl6" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl7" )
end

function OnLegolasNotGarrisoned(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl7" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl6" )
end

function OnMirkwoodTreasuryCreated(self)
    ObjectHideSubObjectPermanently( self, "RANK2", true )
    ObjectHideSubObjectPermanently( self, "RANK3", true )
end

function OnBeorningCreated(self)
    ObjectHideSubObjectPermanently( self, "HEADA", true )
    ObjectHideSubObjectPermanently( self, "HEADB", true )
    ObjectHideSubObjectPermanently( self, "HEADC", true )
    ObjectHideSubObjectPermanently( self, "ARMSA", true )
    ObjectHideSubObjectPermanently( self, "ARMSB", true )
    ObjectHideSubObjectPermanently( self, "ARMSC", true )
    ObjectHideSubObjectPermanently( self, "BODYA", true )
    ObjectHideSubObjectPermanently( self, "BODYB", true )

    local head 			=   GetRandomNumber()
    local arms         =    GetRandomNumber()
    local body 			=   GetRandomNumber()

    if head <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HEADA", false )
    elseif head <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HEADB", false )
     else
        ObjectHideSubObjectPermanently( self, "HEADC", false )
    end

    if arms <= 0.33 then
        ObjectHideSubObjectPermanently( self, "ARMSA", false )
    elseif arms <= 0.66 then
        ObjectHideSubObjectPermanently( self, "ARMSB", false )
     else
        ObjectHideSubObjectPermanently( self, "ARMSC", false )
    end

    if body <= 0.50 then
        ObjectHideSubObjectPermanently( self, "BODYA", false )
     else
        ObjectHideSubObjectPermanently( self, "BODYB", false )
    end
end

function OnHelmingasMounted(self)
    ObjectRemoveUpgrade( self, "Upgrade_HorseDiscipline" )
    ObjectGrantUpgrade( self, "Upgrade_CanTaunt" )
end

function OnHelmingasDismounted(self)
    ObjectRemoveUpgrade( self, "Upgrade_CanTaunt" )
    ObjectGrantUpgrade( self, "Upgrade_HorseDiscipline" )
end

function BeorningRampageOn(self)
    ObjectRemoveUpgrade( self, "Upgrade_HorseDiscipline" )
    ObjectGrantUpgrade( self, "Upgrade_CanTaunt" )
end

function BeorningRampageOff(self)
    ObjectRemoveUpgrade( self, "Upgrade_CanTaunt" )
    ObjectGrantUpgrade( self, "Upgrade_HorseDiscipline" )
end

function OnThranduilRank7(self)
    ObjectGrantUpgrade( self, "Upgrade_Evilboyos" )
end

function OnGrimbeornUnlocked(self)
    ObjectGrantUpgrade( self, "Upgrade_Arkenstone" )
end

function OnBlackWinds(self)
	ExecuteAction("NAMED_KILL", self)
end

function OnBearToggle(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl2" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl3" )
	ObjectBroadcastEventToEnemies(self, "BeTerrified", 300)
end

function OffBearToggle(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl3" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )
end

function OffBearToggleDummy(self)
	ObjectDoSpecialPower(self, "SpecialAbilityGrimbeornBearToggleOff")
end

function OromeHuntEgg(self)
  ObjectDoSpecialPower(self, "SpecialAbilityOromeEggSelf")
end

function OromeHuntEgg2Activated(self)
  ObjectDoSpecialPower(self, "SpecialAbilityOromeHeal")
end

function IdrialCleanseShadowActivated(self)
  ObjectDoSpecialPower(self, "SpecialAbilityOromeHeal")
  ObjectDoSpecialPower(self, "SpecialAbilityActivateeDummy")
end

function OromeHuntEgg3Activated(self)
  ObjectDoSpecialPower(self, "SpecialAbilityOromeRefresh")
end

function OnArtOfWar(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl2" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl3" )
end

function OffArtOfWar(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl3" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )
end

function OnVeteranArtOfWar(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl5" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl4" )
end

function OffVeteranArtOfWar(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl4" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl5" )
end

function OnGrimbeornCreated(self)
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )
end

function OnHeroRetreat(self)
	ObjectDoSpecialPower(self, "SpecialAbilityHeroRetreat")
end

function OnRetreat(self)
	ObjectRemoveUpgrade( self, "Upgrade_AIRetreatOFF" )
	ObjectGrantUpgrade( self, "Upgrade_AIRetreatON" )
end

function OnUser55Activated(self)
    ObjectGrantUpgrade( self, "Upgrade_AIRetreatOFF" )
    ObjectRemoveUpgrade( self, "Upgrade_AIRetreatON" )
end

function OnUser45Activated(self)
    ObjectRemoveUpgrade( self, "Upgrade_AIRetreatOFF" )
    ObjectGrantUpgrade( self, "Upgrade_AIRetreatON" )
end

function OnUser45Deactivated(self)
    ObjectRemoveUpgrade( self, "Upgrade_AIRetreatON" )
    ObjectGrantUpgrade( self, "Upgrade_AIRetreatOFF" )
end

function OnBrandCreated(self)
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )
	ObjectGrantUpgrade( self, "Upgrade_SonsOfElrond" )
end

function OnBrandBow(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl3" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )
end

function OnBrandSword(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl2" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl3" )
end

function OnElegostHeal(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl3" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )
end

function OffElegostHeal(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl2" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl3" )
end

function OnHadhodStoneHewer(self)
    ObjectRemoveUpgrade( self, "Upgrade_CanTaunt" )
    ObjectGrantUpgrade( self, "Upgrade_HorseDiscipline" )
end

function OffHadhodStoneHewer(self)
    ObjectRemoveUpgrade( self, "Upgrade_HorseDiscipline" )
    ObjectGrantUpgrade( self, "Upgrade_CanTaunt" )
end

function GloinsAxe(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl3" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )
end

function BalinsAxe(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl2" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl3" )
end

function OnDwarvenGrudge(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl3" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )
end

function OffDwarvenGrudge(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl2" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl3" )
end

function OnBeorningCreated(self)
    ObjectHideSubObjectPermanently( self, "HEADA", true )
    ObjectHideSubObjectPermanently( self, "HEADB", true )
    ObjectHideSubObjectPermanently( self, "HEADC", true )
    ObjectHideSubObjectPermanently( self, "ARMSA", true )
    ObjectHideSubObjectPermanently( self, "ARMSB", true )
    ObjectHideSubObjectPermanently( self, "ARMSC", true )
    ObjectHideSubObjectPermanently( self, "BODYA", true )
    ObjectHideSubObjectPermanently( self, "BODYB", true )

    local head 			=   GetRandomNumber()
    local arms         =    GetRandomNumber()
    local body 			=   GetRandomNumber()

    if head <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HEADA", false )
    elseif head <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HEADB", false )
     else
        ObjectHideSubObjectPermanently( self, "HEADC", false )
    end

    if arms <= 0.33 then
        ObjectHideSubObjectPermanently( self, "ARMSA", false )
    elseif arms <= 0.66 then
        ObjectHideSubObjectPermanently( self, "ARMSB", false )
     else
        ObjectHideSubObjectPermanently( self, "ARMSC", false )
    end

    if body <= 0.50 then
        ObjectHideSubObjectPermanently( self, "BODYA", false )
     else
        ObjectHideSubObjectPermanently( self, "BODYB", false )
    end
end

function OnStonehelmCreated(self)
    ObjectHideSubObjectPermanently( self, "STONEHELM1", true )
    ObjectHideSubObjectPermanently( self, "STONEHELM2", true )
	ObjectHideSubObjectPermanently( self, "HELMET", false )
end

function OnStonehelmActive(self)
    ObjectHideSubObjectPermanently( self, "HELMET", true )
    ObjectHideSubObjectPermanently( self, "STONEHELM1", false )
    ObjectHideSubObjectPermanently( self, "STONEHELM2", false )
end

function OnStonehelmNotActive(self)
    ObjectHideSubObjectPermanently( self, "HELMET", false )
    ObjectHideSubObjectPermanently( self, "STONEHELM1", true )
    ObjectHideSubObjectPermanently( self, "STONEHELM2", true )
end

function OnOloghaiCreated(self)
    ObjectHideSubObjectPermanently( self, "CLUB_01", true )
    ObjectHideSubObjectPermanently( self, "HMR_02", true )

    local weapon 			=   GetRandomNumber()

    if weapon <= 0.50 then
        ObjectHideSubObjectPermanently( self, "CLUB_01", false )
     else
        ObjectHideSubObjectPermanently( self, "HMR_02", false )
    end
end

function ArkenstoneUpgrade(self)
    ObjectGrantUpgrade( self, "Upgrade_Arkenstone" )
end

function OnIronHillsGuardCreated(self)
	ObjectHideSubObjectPermanently( self, "BANNER", true )
end

function OnAncientStatute(self)
    ObjectRemoveUpgrade( self, "Upgrade_CanTaunt" )
    ObjectGrantUpgrade( self, "Upgrade_HorseDiscipline" )
end

function OffAncientStatute(self)
    ObjectRemoveUpgrade( self, "Upgrade_HorseDiscipline" )
    ObjectGrantUpgrade( self, "Upgrade_CanTaunt" )
end

function OnMordorFortressCreated(self)
	ObjectHideSubObjectPermanently( self, "MORGULGLOW", true )
	ObjectHideSubObjectPermanently( self, "MORGULTOWER", true )
	ObjectHideSubObjectPermanently( self, "TOWERGLOW", true )
	ObjectHideSubObjectPermanently( self, "LAVAMOATA", true )
	ObjectHideSubObjectPermanently( self, "LAVAMOATB", true )
	ObjectHideSubObjectPermanently( self, "LAVAMOATC", true )
	ObjectHideSubObjectPermanently( self, "STACKSA", true )
	ObjectHideSubObjectPermanently( self, "STACKSB", true )
	ObjectHideSubObjectPermanently( self, "BANNERS", true )
	ObjectSetGeometryActive( self, "HighTowerGeom", false )
end

function OnRhunFortressCreated(self)
	ObjectHideSubObjectPermanently( self, "DRAGONS", true )
	ObjectHideSubObjectPermanently( self, "WAYSOFWAR", true )
	ObjectHideSubObjectPermanently( self, "SPIRE", true )
	ObjectHideSubObjectPermanently( self, "BANNERS", true )
	ObjectSetGeometryActive( self, "HighTowerGeom", false )
end

function OnHaradFortressCreated(self)
	ObjectHideSubObjectPermanently( self, "THREATA", true )
	ObjectHideSubObjectPermanently( self, "THREATB", true )
	ObjectHideSubObjectPermanently( self, "HARONDOR", true )
	ObjectHideSubObjectPermanently( self, "MAHUD", true )
	ObjectHideSubObjectPermanently( self, "NAFARATA", true )
	ObjectHideSubObjectPermanently( self, "NAFARATB", true )
	ObjectHideSubObjectPermanently( self, "NAFARATC", true )
	ObjectHideSubObjectPermanently( self, "HEGEMONY", true )
	ObjectSetGeometryActive( self, "HighTowerGeom", false )
end

function HarondorSubjugation(self)
    ObjectGrantUpgrade( self, "Upgrade_Arkenstone" )
end

function MahudSubjugation(self)
    ObjectGrantUpgrade( self, "Upgrade_Evilboyos" )
end

function Hegemony(self)
    ObjectGrantUpgrade( self, "Upgrade_RohanFortressHornsOfHammerhand" )
end

function WyrmGiantUnlock(self)
    ObjectGrantUpgrade( self, "Upgrade_WildFortressNorthernWastesTrigger" )
end

function GundabadHordeUnlock(self)
    ObjectGrantUpgrade( self, "Upgrade_WildFortressWebCocoon" )
end

function SnowPalm(self)
    ObjectGrantUpgrade( self, "Upgrade_HasIsenSiegeWorks" )
end

function WargSentryUnlocked(self)
    ObjectGrantUpgrade( self, "Upgrade_Arkenstone" )
end

function OnIsengardOrcArcherCreated(self)
    ObjectHideSubObjectPermanently( self, "HIPS", true )
    ObjectHideSubObjectPermanently( self, "GREAVES", true )
    ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
    ObjectHideSubObjectPermanently( self, "ARROWFIRE", true )
    -- helmet types
    ObjectHideSubObjectPermanently( self, "HELMET06", true )
    ObjectHideSubObjectPermanently( self, "HELMET07", true )
    ObjectHideSubObjectPermanently( self, "HAIR", true )
    -- head types
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "HEAD04", true )
    -- collar types
    ObjectHideSubObjectPermanently( self, "COLLARA", true )
    ObjectHideSubObjectPermanently( self, "COLLARB", true )
    -- weapon types
    ObjectHideSubObjectPermanently( self, "BOW01", true )
    ObjectHideSubObjectPermanently( self, "BOW02", true )
    -- body types
    ObjectHideSubObjectPermanently( self, "BODY01", true )
    ObjectHideSubObjectPermanently( self, "BODY02", true )
    ObjectHideSubObjectPermanently( self, "BODY03", true )
    -- leg types
    ObjectHideSubObjectPermanently( self, "LEGS01", true )
    ObjectHideSubObjectPermanently( self, "LEGS02", true )
    -- shoulder types
    ObjectHideSubObjectPermanently( self, "SHOULDERL", true )
    ObjectHideSubObjectPermanently( self, "SHOULDERR", true )

    -- assign random gear
    local helm = GetRandomNumber()
    local head = GetRandomNumber()
    local collar = GetRandomNumber()
    local bow = GetRandomNumber()
    local body = GetRandomNumber()
    local legs = GetRandomNumber()
    local shoulders = GetRandomNumber()
    local hips = GetRandomNumber()


    -- assign random helm
    if helm <= 0.35 then
        ObjectHideSubObjectPermanently( self, "HELMET06", false )
    elseif helm <= 0.70 then
        ObjectHideSubObjectPermanently( self, "HELMET07", false )
    elseif helm <= 0.90 then
        ObjectHideSubObjectPermanently( self, "HAIR", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    -- assign random head
    if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    end

    -- assign random collar
    if collar <= 0.25 then
        ObjectHideSubObjectPermanently( self, "COLLARA", false )
    elseif collar <= 0.50 then
        ObjectHideSubObjectPermanently( self, "COLLARB", false )
    else
        ObjectHideSubObjectPermanently( self, "NONE", false )
    end

    -- assign random bow
    if bow <= 0.50 then
        ObjectHideSubObjectPermanently( self, "BOW01", false )
    else
        ObjectHideSubObjectPermanently( self, "BOW02", false )
    end

    -- assign random body
    if body <= 0.33 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif body <= 0.66 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
    else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
    end

    -- assign random legs
    if legs <= 0.33 then
        ObjectHideSubObjectPermanently( self, "LEGS01", false )
    elseif legs <= 0.66 then
        ObjectHideSubObjectPermanently( self, "LEGS02", false )
        ObjectHideSubObjectPermanently( self, "GREAVES", false )
    else
        ObjectHideSubObjectPermanently( self, "LEGS02", false )
    end

    -- assign random shoulders
    if shoulders <= 0.18 then
        ObjectHideSubObjectPermanently( self, "SHOULDERL", false )
    elseif shoulders <= 0.36 then
        ObjectHideSubObjectPermanently( self, "SHOULDERR", false )
    elseif shoulders <= 0.54 then
        ObjectHideSubObjectPermanently( self, "SHOULDERL", false )
        ObjectHideSubObjectPermanently( self, "SHOULDERR", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    -- assign random hips
    if hips <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HIPS", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end
end

function OnIsengardOrcBannerCreated(self)
    ObjectHideSubObjectPermanently( self, "GREAVES", true )
    -- helmet types
    ObjectHideSubObjectPermanently( self, "HELMET06", true )
    ObjectHideSubObjectPermanently( self, "HELMET07", true )
    ObjectHideSubObjectPermanently( self, "HAIR", true )
    -- head types
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "HEAD04", true )
    -- collar types
    ObjectHideSubObjectPermanently( self, "COLLARA", true )
    ObjectHideSubObjectPermanently( self, "COLLARB", true )
    -- weapon types
    ObjectHideSubObjectPermanently( self, "SWORDR01", true )
    ObjectHideSubObjectPermanently( self, "SWORDR02", true )
    ObjectHideSubObjectPermanently( self, "SWORDR03", true )
    ObjectHideSubObjectPermanently( self, "SWORDR04", true )
    ObjectHideSubObjectPermanently( self, "SWORDR05", true )
    -- body types
    ObjectHideSubObjectPermanently( self, "BODY01", true )
    ObjectHideSubObjectPermanently( self, "BODY02", true )
    ObjectHideSubObjectPermanently( self, "BODY03", true )
    -- leg types
    ObjectHideSubObjectPermanently( self, "LEGS01", true )
    ObjectHideSubObjectPermanently( self, "LEGS02", true )
    -- shoulder types
    ObjectHideSubObjectPermanently( self, "SHOULDERL", true )
    ObjectHideSubObjectPermanently( self, "SHOULDERR", true )
    -- banner types
    ObjectHideSubObjectPermanently( self, "FLAG01", true )
    ObjectHideSubObjectPermanently( self, "FLAG02", true )
    ObjectHideSubObjectPermanently( self, "FLAG03", true )

    -- assign random gear
    local helm = GetRandomNumber()
    local head = GetRandomNumber()
    local collar = GetRandomNumber()
    local weapon = GetRandomNumber()
    local body = GetRandomNumber()
    local legs = GetRandomNumber()
    local shoulders = GetRandomNumber()
    local banner = GetRandomNumber()

    -- assign random helm
    if helm <= 0.35 then
        ObjectHideSubObjectPermanently( self, "HELMET06", false )
    elseif helm <= 0.70 then
        ObjectHideSubObjectPermanently( self, "HELMET07", false )
    elseif helm <= 0.90 then
        ObjectHideSubObjectPermanently( self, "HAIR", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    -- assign random head
    if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    end

    -- assign random collar
    if collar <= 0.25 then
        ObjectHideSubObjectPermanently( self, "COLLARA", false )
    elseif collar <= 0.50 then
        ObjectHideSubObjectPermanently( self, "COLLARB", false )
    else
        ObjectHideSubObjectPermanently( self, "NONE", false )
    end

    -- assign random weapon
    if weapon <= 0.20 then
        ObjectHideSubObjectPermanently( self, "SWORDR01", false )
    elseif weapon <= 0.40 then
        ObjectHideSubObjectPermanently( self, "SWORDR02", false )
    elseif weapon <= 0.60 then
        ObjectHideSubObjectPermanently( self, "SWORDR03", false )
    elseif weapon <= 0.80 then
        ObjectHideSubObjectPermanently( self, "SWORDR04", false )
    else
        ObjectHideSubObjectPermanently( self, "SWORDR05", false )
    end

    -- assign random body
    if body <= 0.33 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif body <= 0.66 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
    else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
    end

    -- assign random legs
    if legs <= 0.33 then
        ObjectHideSubObjectPermanently( self, "LEGS01", false )
    elseif legs <= 0.66 then
        ObjectHideSubObjectPermanently( self, "LEGS02", false )
        ObjectHideSubObjectPermanently( self, "GREAVES", false )
    else
        ObjectHideSubObjectPermanently( self, "LEGS02", false )
    end

    -- assign random shoulders
    if shoulders <= 0.18 then
        ObjectHideSubObjectPermanently( self, "SHOULDERL", false )
    elseif shoulders <= 0.36 then
        ObjectHideSubObjectPermanently( self, "SHOULDERR", false )
    elseif shoulders <= 0.54 then
        ObjectHideSubObjectPermanently( self, "SHOULDERL", false )
        ObjectHideSubObjectPermanently( self, "SHOULDERR", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    -- assign random banner
    if banner <= 0.333 then
        ObjectHideSubObjectPermanently( self, "FLAG01", false )
    elseif banner <= 0.666 then
        ObjectHideSubObjectPermanently( self, "FLAG02", false )
     else
        ObjectHideSubObjectPermanently( self, "FLAG03", false )
    end
end

function OnIsengardOrcSpearmenCreated(self)
    ObjectHideSubObjectPermanently( self, "HIPS", true )
    ObjectHideSubObjectPermanently( self, "GREAVES", true )
    ObjectHideSubObjectPermanently( self, "QUIVER", true )
    -- helmet types
    ObjectHideSubObjectPermanently( self, "HELMET06", true )
    ObjectHideSubObjectPermanently( self, "HELMET07", true )
    ObjectHideSubObjectPermanently( self, "HAIR", true )
    -- head types
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "HEAD04", true )
    -- collar types
    ObjectHideSubObjectPermanently( self, "COLLARA", true )
    ObjectHideSubObjectPermanently( self, "COLLARB", true )
    -- weapon types
    ObjectHideSubObjectPermanently( self, "SPEAR01", true )
    ObjectHideSubObjectPermanently( self, "SPEAR02", true )
    ObjectHideSubObjectPermanently( self, "SPEAR03", true )
    ObjectHideSubObjectPermanently( self, "SPEAR04", true )
    ObjectHideSubObjectPermanently( self, "SPEAR05", true )
    -- body types
    ObjectHideSubObjectPermanently( self, "BODY01", true )
    ObjectHideSubObjectPermanently( self, "BODY02", true )
    ObjectHideSubObjectPermanently( self, "BODY03", true )
    -- leg types
    ObjectHideSubObjectPermanently( self, "LEGS01", true )
    ObjectHideSubObjectPermanently( self, "LEGS02", true )
    -- shoulder types
    ObjectHideSubObjectPermanently( self, "SHOULDERL", true )
    ObjectHideSubObjectPermanently( self, "SHOULDERR", true )

    -- assign random gear
    local helm = GetRandomNumber()
    local head = GetRandomNumber()
    local collar = GetRandomNumber()
    local spear = GetRandomNumber()
    local body = GetRandomNumber()
    local legs = GetRandomNumber()
    local shoulders = GetRandomNumber()
    local hips = GetRandomNumber()

    -- assign random helm
    if helm <= 0.35 then
        ObjectHideSubObjectPermanently( self, "HELMET06", false )
    elseif helm <= 0.70 then
        ObjectHideSubObjectPermanently( self, "HELMET07", false )
    elseif helm <= 0.90 then
        ObjectHideSubObjectPermanently( self, "HAIR", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    -- assign random head
    if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    end

    -- assign random collar
    if collar <= 0.25 then
        ObjectHideSubObjectPermanently( self, "COLLARA", false )
    elseif collar <= 0.50 then
        ObjectHideSubObjectPermanently( self, "COLLARB", false )
    else
        ObjectHideSubObjectPermanently( self, "NONE", false )
    end

    -- assign random spear
    if spear <= 0.25 then
        ObjectHideSubObjectPermanently( self, "SPEAR01", false )
    elseif spear <= 0.50 then
        ObjectHideSubObjectPermanently( self, "SPEAR02", false )
    elseif spear <= 0.75 then
        ObjectHideSubObjectPermanently( self, "SPEAR03", false )
    else
        ObjectHideSubObjectPermanently( self, "SPEAR04", false )
    end

    -- assign random body
    if body <= 0.33 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif body <= 0.66 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
    else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
    end

    -- assign random legs
    if legs <= 0.33 then
        ObjectHideSubObjectPermanently( self, "LEGS01", false )
    elseif legs <= 0.66 then
        ObjectHideSubObjectPermanently( self, "LEGS02", false )
        ObjectHideSubObjectPermanently( self, "GREAVES", false )
    else
        ObjectHideSubObjectPermanently( self, "LEGS02", false )
    end

    -- assign random shoulders
    if shoulders <= 0.18 then
        ObjectHideSubObjectPermanently( self, "SHOULDERL", false )
    elseif shoulders <= 0.36 then
        ObjectHideSubObjectPermanently( self, "SHOULDERR", false )
    elseif shoulders <= 0.54 then
        ObjectHideSubObjectPermanently( self, "SHOULDERL", false )
        ObjectHideSubObjectPermanently( self, "SHOULDERR", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    -- assign random hips
    if hips <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HIPS", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end
end

function OnIsengardOrcFighterCreated(self)
    ObjectHideSubObjectPermanently( self, "HIPS", true )
    ObjectHideSubObjectPermanently( self, "GREAVES", true )
    ObjectHideSubObjectPermanently( self, "QUIVER", true )
    -- helmet types
    ObjectHideSubObjectPermanently( self, "HELMET06", true )
    ObjectHideSubObjectPermanently( self, "HELMET07", true )
    ObjectHideSubObjectPermanently( self, "HAIR", true )
    -- head types
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "HEAD04", true )
    -- collar types
    ObjectHideSubObjectPermanently( self, "COLLARA", true )
    ObjectHideSubObjectPermanently( self, "COLLARB", true )
    -- weapon types
    ObjectHideSubObjectPermanently( self, "SWORDL01", true )
    ObjectHideSubObjectPermanently( self, "SWORDL02", true )
    ObjectHideSubObjectPermanently( self, "SWORDL03", true )
    ObjectHideSubObjectPermanently( self, "SWORDL04", true )
    ObjectHideSubObjectPermanently( self, "SWORDL05", true )
    ObjectHideSubObjectPermanently( self, "SWORDR01", true )
    ObjectHideSubObjectPermanently( self, "SWORDR02", true )
    ObjectHideSubObjectPermanently( self, "SWORDR03", true )
    ObjectHideSubObjectPermanently( self, "SWORDR04", true )
    ObjectHideSubObjectPermanently( self, "SWORDR05", true )
    ObjectHideSubObjectPermanently( self, "SHIELD01", true )
    ObjectHideSubObjectPermanently( self, "SHIELD02", true )
    ObjectHideSubObjectPermanently( self, "SHIELD03", true )
    -- body types
    ObjectHideSubObjectPermanently( self, "BODY01", true )
    ObjectHideSubObjectPermanently( self, "BODY02", true )
    ObjectHideSubObjectPermanently( self, "BODY03", true )
    -- leg types
    ObjectHideSubObjectPermanently( self, "LEGS01", true )
    ObjectHideSubObjectPermanently( self, "LEGS02", true )
    -- shoulder types
    ObjectHideSubObjectPermanently( self, "SHOULDERL", true )
    ObjectHideSubObjectPermanently( self, "SHOULDERR", true )

    -- assign random gear
    local helm = GetRandomNumber()
    local head = GetRandomNumber()
    local collar = GetRandomNumber()
    local leftweapon = GetRandomNumber()
    local rightweapon = GetRandomNumber()
    local body = GetRandomNumber()
    local legs = GetRandomNumber()
    local shoulders = GetRandomNumber()
    local hips = GetRandomNumber()

    -- assign random helm
    if helm <= 0.35 then
        ObjectHideSubObjectPermanently( self, "HELMET06", false )
    elseif helm <= 0.70 then
        ObjectHideSubObjectPermanently( self, "HELMET07", false )
    elseif helm <= 0.90 then
        ObjectHideSubObjectPermanently( self, "HAIR", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    -- assign random head
    if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    end

    -- assign random collar
    if collar <= 0.25 then
        ObjectHideSubObjectPermanently( self, "COLLARA", false )
    elseif collar <= 0.50 then
        ObjectHideSubObjectPermanently( self, "COLLARB", false )
    else
        ObjectHideSubObjectPermanently( self, "NONE", false )
    end

    -- assign random weapon right hand
    if rightweapon <= 0.20 then
        ObjectHideSubObjectPermanently( self, "SWORDR01", false )
    elseif rightweapon <= 0.40 then
        ObjectHideSubObjectPermanently( self, "SWORDR02", false )
    elseif rightweapon <= 0.60 then
        ObjectHideSubObjectPermanently( self, "SWORDR03", false )
    elseif rightweapon <= 0.80 then
        ObjectHideSubObjectPermanently( self, "SWORDR04", false )
    else
        ObjectHideSubObjectPermanently( self, "SWORDR05", false )
    end

        -- assign random weapon left hand
    if leftweapon <= 0.11 then
        ObjectHideSubObjectPermanently( self, "SWORDL01", false )
    elseif leftweapon <= 0.22 then
        ObjectHideSubObjectPermanently( self, "SWORDL02", false )
    elseif leftweapon <= 0.33 then
        ObjectHideSubObjectPermanently( self, "SWORDL03", false )
    elseif leftweapon <= 0.44 then
        ObjectHideSubObjectPermanently( self, "SWORDL04", false )
    elseif leftweapon <= 0.55 then
        ObjectHideSubObjectPermanently( self, "SWORDL05", false )
    elseif leftweapon <= 0.66 then
        ObjectHideSubObjectPermanently( self, "SHIELD01", false )
    elseif leftweapon <= 0.77 then
        ObjectHideSubObjectPermanently( self, "SHIELD02", false )
    elseif leftweapon <= 0.88 then
        ObjectHideSubObjectPermanently( self, "SHIELD03", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    -- assign random body
    if body <= 0.33 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif body <= 0.66 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
    else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
    end

    -- assign random legs
    if legs <= 0.33 then
        ObjectHideSubObjectPermanently( self, "LEGS01", false )
    elseif legs <= 0.66 then
        ObjectHideSubObjectPermanently( self, "LEGS02", false )
        ObjectHideSubObjectPermanently( self, "GREAVES", false )
    else
        ObjectHideSubObjectPermanently( self, "LEGS02", false )
    end

    -- assign random shoulders
    if shoulders <= 0.18 then
        ObjectHideSubObjectPermanently( self, "SHOULDERL", false )
    elseif shoulders <= 0.36 then
        ObjectHideSubObjectPermanently( self, "SHOULDERR", false )
    elseif shoulders <= 0.54 then
        ObjectHideSubObjectPermanently( self, "SHOULDERL", false )
        ObjectHideSubObjectPermanently( self, "SHOULDERR", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    -- assign random hips
    if hips <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HIPS", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end
end

function OnEreborWallCreated(self)
	ObjectHideSubObjectPermanently( self, "SNOW", true )
end

function OnNecromancerGetTheRing(self)
    ObjectGrantUpgrade( self, "Upgrade_NecromancerRingHero" )
end

function OnGuldurFortressGetTheRing(self)
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl4" )
end

function OnDunlandHuskarlCreated(self)
    ObjectHideSubObjectPermanently( self, "HA", true )
	ObjectHideSubObjectPermanently( self, "HEADA", true )
	ObjectHideSubObjectPermanently( self, "HEADB", true )
	ObjectHideSubObjectPermanently( self, "HEADC", true )
	ObjectHideSubObjectPermanently( self, "SHIELDA", true )
	ObjectHideSubObjectPermanently( self, "SHIELDB", true )
	ObjectHideSubObjectPermanently( self, "SHIELDC", true )

    local head = GetRandomNumber()
    local shield1 = GetRandomNumber()
    local shield2 = GetRandomNumber()

    -- assign random head
    if head <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HEADA", false )
    elseif head <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HEADB", false )
    else
        ObjectHideSubObjectPermanently( self, "HEADC", false )
    end

    -- assign random shield
    if shield1 <= 0.5 then
        --no shield
    else
		if shield2 <= 0.33 then
			ObjectHideSubObjectPermanently( self, "SHIELDA", false )
		elseif shield2 <= 0.66 then
			ObjectHideSubObjectPermanently( self, "SHIELDB", false )
		else
			ObjectHideSubObjectPermanently( self, "SHIELDC", false )
		end
    end
end

function OnDunlandAxemenCreated(self)
    ObjectHideSubObjectPermanently( self, "FireArowTip", true )
    ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
    ObjectHideSubObjectPermanently( self, "HA", true )
	ObjectHideSubObjectPermanently( self, "HEADA", true )
	ObjectHideSubObjectPermanently( self, "HEADB", true )
	ObjectHideSubObjectPermanently( self, "HEADC", true )
	ObjectHideSubObjectPermanently( self, "SHIELDA", true )
	ObjectHideSubObjectPermanently( self, "SHIELDB", true )
	ObjectHideSubObjectPermanently( self, "SHIELDC", true )

    local head = GetRandomNumber()
    local shield = GetRandomNumber()

    -- assign random head
    if head <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HEADA", false )
    elseif head <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HEADB", false )
    else
        ObjectHideSubObjectPermanently( self, "HEADC", false )
    end


	if shield <= 0.33 then
		ObjectHideSubObjectPermanently( self, "SHIELDA", false )
	elseif shield <= 0.66 then
		ObjectHideSubObjectPermanently( self, "SHIELDB", false )
	else
		ObjectHideSubObjectPermanently( self, "SHIELDC", false )
	end
end

function OnOathswornWarriorCreated(self)
	ObjectHideSubObjectPermanently( self, "HEADA", true )
	ObjectHideSubObjectPermanently( self, "HEADB", true )
	ObjectHideSubObjectPermanently( self, "HEADC", true )
	ObjectHideSubObjectPermanently( self, "SHIELDA", true )
	ObjectHideSubObjectPermanently( self, "SHIELDB", true )
	ObjectHideSubObjectPermanently( self, "SHIELDC", true )
	ObjectHideSubObjectPermanently( self, "HORNS", true )
	ObjectHideSubObjectPermanently( self, "HORNS2", true )

    local head = GetRandomNumber()
    local shield = GetRandomNumber()
	local horns = GetRandomNumber()

    -- assign random head
    if head <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HEADA", false )
    elseif head <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HEADB", false )
    else
        ObjectHideSubObjectPermanently( self, "HEADC", false )
    end


	if shield <= 0.33 then
		ObjectHideSubObjectPermanently( self, "SHIELDA", false )
	elseif shield <= 0.66 then
		ObjectHideSubObjectPermanently( self, "SHIELDB", false )
	else
		ObjectHideSubObjectPermanently( self, "SHIELDC", false )
	end

	if horns <= 0.33 then
		ObjectHideSubObjectPermanently( self, "HORNS", false )
	elseif horns <= 0.66 then
		ObjectHideSubObjectPermanently( self, "HORNS2", false )
	else
		ObjectHideSubObjectPermanently( self, "NOTHING", false )
	end
end

function OnWulfgarCreated(self)
    ObjectGrantUpgrade( self, "Upgrade_Evilboyos" )
end

function OnHaradMahudHunterCreated(self)
	ObjectHideSubObjectPermanently( self, "SHOULDERA", true )
	ObjectHideSubObjectPermanently( self, "SHOULDERB", true )
	ObjectHideSubObjectPermanently( self, "HAIRA", true )
	ObjectHideSubObjectPermanently( self, "HAIRB", true )
	ObjectHideSubObjectPermanently( self, "CLOAK", true )
	ObjectHideSubObjectPermanently( self, "RINGA", true )
	ObjectHideSubObjectPermanently( self, "RINGB", true )
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HEAD04", true )
	ObjectHideSubObjectPermanently( self, "SHIELDA", true )
	ObjectHideSubObjectPermanently( self, "SHIELDB", true )
	ObjectHideSubObjectPermanently( self, "DECOA", true )
	ObjectHideSubObjectPermanently( self, "DECOB", true )

    local shoulder = GetRandomNumber()
    local hair = GetRandomNumber()
    local cloak = GetRandomNumber()
    local ring = GetRandomNumber()
    local head = GetRandomNumber()
    local shield = GetRandomNumber()
    local deco = GetRandomNumber()

    -- assign random shoulder
    if shoulder <= 0.25 then
        ObjectHideSubObjectPermanently( self, "SHOULDERA", false )
    elseif shoulder <= 0.50 then
        ObjectHideSubObjectPermanently( self, "SHOULDERB", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    -- assign random hair
    if hair <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HAIRA", false )
    elseif hair <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HAIRB", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    -- assign random cloak
    if hair <= 0.50 then
        ObjectHideSubObjectPermanently( self, "CLOAK", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    -- assign random ring
    if ring <= 0.25 then
        ObjectHideSubObjectPermanently( self, "RINGA", false )
    elseif ring <= 0.50 then
        ObjectHideSubObjectPermanently( self, "RINGB", false )
    else
        ObjectHideSubObjectPermanently( self, "RINGA", false )
        ObjectHideSubObjectPermanently( self, "RINGB", false )
    end

    -- assign random head
    if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    end

    -- assign random shield
    if shield <= 0.25 then
        ObjectHideSubObjectPermanently( self, "SHIELDA", false )
    elseif shield <= 0.50 then
        ObjectHideSubObjectPermanently( self, "SHIELDB", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    -- assign random deco
    if deco <= 0.25 then
        ObjectHideSubObjectPermanently( self, "DECOA", false )
    elseif deco <= 0.50 then
        ObjectHideSubObjectPermanently( self, "DECOB", false )
    else
        ObjectHideSubObjectPermanently( self, "DECOA", false )
        ObjectHideSubObjectPermanently( self, "DECOB", false )
    end
end

function OnHaradMahudWarriorCreated(self)
	ObjectHideSubObjectPermanently( self, "SHOULDERA", true )
	ObjectHideSubObjectPermanently( self, "SHOULDERB", true )
	ObjectHideSubObjectPermanently( self, "HAIRA", true )
	ObjectHideSubObjectPermanently( self, "HAIRB", true )
	ObjectHideSubObjectPermanently( self, "CLOAK", true )
	ObjectHideSubObjectPermanently( self, "RINGA", true )
	ObjectHideSubObjectPermanently( self, "RINGB", true )
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HEAD04", true )
	ObjectHideSubObjectPermanently( self, "SHIELDA", true )
	ObjectHideSubObjectPermanently( self, "SHIELDB", true )
	ObjectHideSubObjectPermanently( self, "DECOA", true )
	ObjectHideSubObjectPermanently( self, "DECOB", true )
	ObjectHideSubObjectPermanently( self, "ARMORB", true )

    local shoulder = GetRandomNumber()
    local hair = GetRandomNumber()
    local cloak = GetRandomNumber()
    local ring = GetRandomNumber()
    local head = GetRandomNumber()
    local shield = GetRandomNumber()
    local deco = GetRandomNumber()
    local armor = GetRandomNumber()

    -- assign random shoulder
    if shoulder <= 0.50 then
        ObjectHideSubObjectPermanently( self, "SHOULDERA", false )
    else
        ObjectHideSubObjectPermanently( self, "SHOULDERB", false )
    end

    -- assign random hair
    if hair <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HAIRA", false )
    elseif hair <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HAIRB", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    -- assign random cloak
    if hair <= 0.50 then
        ObjectHideSubObjectPermanently( self, "CLOAK", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    -- assign random ring
    if ring <= 0.25 then
        ObjectHideSubObjectPermanently( self, "RINGA", false )
    elseif ring <= 0.50 then
        ObjectHideSubObjectPermanently( self, "RINGB", false )
    else
        ObjectHideSubObjectPermanently( self, "RINGA", false )
        ObjectHideSubObjectPermanently( self, "RINGB", false )
    end

    -- assign random head
    if head <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    end

    -- assign random shield
    if shield <= 0.50 then
        ObjectHideSubObjectPermanently( self, "SHIELDA", false )
    else
        ObjectHideSubObjectPermanently( self, "SHIELDB", false )
    end

    -- assign random deco
    if deco <= 0.25 then
        ObjectHideSubObjectPermanently( self, "DECOA", false )
    elseif deco <= 0.50 then
        ObjectHideSubObjectPermanently( self, "DECOB", false )
    else
        ObjectHideSubObjectPermanently( self, "DECOA", false )
        ObjectHideSubObjectPermanently( self, "DECOB", false )
    end

    -- assign random armor
    if armor <= 0.25 then
        ObjectHideSubObjectPermanently( self, "ARMORB", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end
end

function OnBuildMeAnArmyCreated (self)
	ObjectDoSpecialPower(self, "SpecialPowerBuildMeAnArmy")
end

function OnStatArmorDamage(self)
    ObjectRemoveUpgrade( self, "Upgrade_TestBuilding_2" )
	ObjectGrantUpgrade( self, "Upgrade_TestBuilding" )
end

function OnStatKnockbackDamage(self)
    ObjectRemoveUpgrade( self, "Upgrade_TestBuilding" )
	ObjectGrantUpgrade( self, "Upgrade_TestBuilding_2" )
end

function OnRowdyTubDwarfCreated(self)
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )

    local head = GetRandomNumber()

    -- assign random head
    if head <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

end

function OnCassimirCreated(self)
	ObjectHideSubObjectPermanently( self, "HELMET", true )
	ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )
end

function OnCassimirMounted(self)
	ObjectHideSubObjectPermanently( self, "HELMET", false )
	ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl2" )
	ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl3" )
end

function OnCassimirDismounted(self)
	ObjectHideSubObjectPermanently( self, "HELMET", true )
	ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl3" )
	ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )
end

function OnHaradBlackNumenoreanCreated(self)
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HA", true )
	ObjectHideSubObjectPermanently( self, "MASK", true )
	ObjectHideSubObjectPermanently( self, "SASH", true )
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )

    local head = GetRandomNumber()
    local mask = GetRandomNumber()
    local sash = GetRandomNumber()

    -- assign random head
    if head <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

    -- assign random mask
    if mask <= 0.50 then
        ObjectHideSubObjectPermanently( self, "MASK", false )
    else
        ObjectHideSubObjectPermanently( self, "NONE", false )
    end

    -- assign random sash
    if sash <= 0.50 then
        ObjectHideSubObjectPermanently( self, "SASH", false )
    else
        ObjectHideSubObjectPermanently( self, "NONE", false )
    end

end

function OnHaradBlackNumenoreanVanguardCreated(self)
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HA", true )
	ObjectHideSubObjectPermanently( self, "MASK", true )
	ObjectHideSubObjectPermanently( self, "SASH", true )
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )

    local head = GetRandomNumber()
    local mask = GetRandomNumber()
    local sash = GetRandomNumber()

    -- assign random head
    if head <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

    -- assign random mask
    if mask <= 0.50 then
        ObjectHideSubObjectPermanently( self, "MASK", false )
    else
        ObjectHideSubObjectPermanently( self, "NONE", false )
    end

    -- assign random sash
    if sash <= 0.50 then
        ObjectHideSubObjectPermanently( self, "SASH", false )
    else
        ObjectHideSubObjectPermanently( self, "NONE", false )
    end

end

function OnHaradRoyalBlackNumenoreanCreated(self)
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "HA", true )
	ObjectHideSubObjectPermanently( self, "MASK", true )
	ObjectHideSubObjectPermanently( self, "SASH", true )
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
	ObjectHideSubObjectPermanently( self, "HIPS", true )

    local head = GetRandomNumber()
    local mask = GetRandomNumber()
    local sash = GetRandomNumber()

    -- assign random head
    if head <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

    -- assign random mask
    if mask <= 0.50 then
        ObjectHideSubObjectPermanently( self, "MASK", false )
    else
        ObjectHideSubObjectPermanently( self, "NONE", false )
    end

    -- assign random sash
    if sash <= 0.50 then
        ObjectHideSubObjectPermanently( self, "SASH", false )
    else
        ObjectHideSubObjectPermanently( self, "NONE", false )
    end

end

function OnHaradBlackNumenoreanBalconyCreated(self)
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
	ObjectHideSubObjectPermanently( self, "MASK", true )
	ObjectHideSubObjectPermanently( self, "SASH", true )
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )

    local head = GetRandomNumber()
    local mask = GetRandomNumber()
    local sash = GetRandomNumber()

    -- assign random head
    if head <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

    -- assign random mask
    if mask <= 0.50 then
        ObjectHideSubObjectPermanently( self, "MASK", false )
    else
        ObjectHideSubObjectPermanently( self, "NONE", false )
    end

    -- assign random sash
    if sash <= 0.50 then
        ObjectHideSubObjectPermanently( self, "SASH", false )
    else
        ObjectHideSubObjectPermanently( self, "NONE", false )
    end

end

function OnMordorSlaveCreatedCreated(self)
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )

    local head = GetRandomNumber()

    -- assign random head
    if head <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

end

function OnSiegeMumakCreated(self)
	ObjectHideSubObjectPermanently( self, "WIRE", true )
	ObjectHideSubObjectPermanently( self, "FIREPLANE", true )
	ObjectHideSubObjectPermanently( self, "SBANNERS", true )
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
	local head          =    GetRandomNumber()
    if head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
	else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end
end

function OnThreeTrollsCooking(self)
    ObjectGrantUpgrade( self, "Upgrade_AIRetreatON" )
    ObjectRemoveUpgrade( self, "Upgrade_AIRetreatOFF" )
end

function OnThreeTrollsNotCooking(self)
    ObjectGrantUpgrade( self, "Upgrade_AIRetreatOFF" )
    ObjectRemoveUpgrade( self, "Upgrade_AIRetreatON" )
end

function OnHarondorRaiderCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )

    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "HORSE01", true )
    ObjectHideSubObjectPermanently( self, "HORSE02", true )
    ObjectHideSubObjectPermanently( self, "HORSE03", true )
    ObjectHideSubObjectPermanently( self, "HORSE04", true )
    ObjectHideSubObjectPermanently( self, "SHIELD01", true )
    ObjectHideSubObjectPermanently( self, "SHIELD02", true )
    ObjectHideSubObjectPermanently( self, "SHIELD03", true )
    ObjectHideSubObjectPermanently( self, "HELMET01", true )
    ObjectHideSubObjectPermanently( self, "HELMET02", true )
    ObjectHideSubObjectPermanently( self, "HELMET03", true )
    ObjectHideSubObjectPermanently( self, "MASK01", true )
    ObjectHideSubObjectPermanently( self, "MASK02", true )
    ObjectHideSubObjectPermanently( self, "BODY01", true )
    ObjectHideSubObjectPermanently( self, "BODY02", true )
    ObjectHideSubObjectPermanently( self, "CLOAK01", true )
    ObjectHideSubObjectPermanently( self, "CLOAK02", true )
    ObjectHideSubObjectPermanently( self, "SASH01", true )
    ObjectHideSubObjectPermanently( self, "SASH02", true )
	ObjectHideSubObjectPermanently( self, "PAULD01", true)
	ObjectHideSubObjectPermanently( self, "PAULD02", true)

    local horse     =   GetRandomNumber()
    local head 		=   GetRandomNumber()
	local shield 	=   GetRandomNumber()
	local helmet 	=   GetRandomNumber()
	local mask 		=   GetRandomNumber()
	local body 		=   GetRandomNumber()
	local cloak 	=   GetRandomNumber()
	local sash 		=   GetRandomNumber()
	local armor		= 	GetRandomNumber()

    if horse <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HORSE01", false )
    elseif horse <= 0.6 then
        ObjectHideSubObjectPermanently( self, "HORSE02", false )
    elseif horse <= 0.8 then
        ObjectHideSubObjectPermanently( self, "HORSE03", false )
     else
        ObjectHideSubObjectPermanently( self, "HORSE04", false )
    end

    if head <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

    if shield <= 0.33 then
        ObjectHideSubObjectPermanently( self, "SHIELD01", false )
    elseif shield <= 0.66 then
        ObjectHideSubObjectPermanently( self, "SHIELD02", false )
     else
        ObjectHideSubObjectPermanently( self, "SHIELD03", false )
    end

    if helmet <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HELMET01", false )
    elseif helmet <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HELMET02", false )
     else
        ObjectHideSubObjectPermanently( self, "HELMET03", false )
    end

    if mask <= 0.33 then
        ObjectHideSubObjectPermanently( self, "MASK01", false )
    elseif mask <= 0.66 then
        ObjectHideSubObjectPermanently( self, "MASK02", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    if body <= 0.50 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    else
        ObjectHideSubObjectPermanently( self, "BODY02", false )
    end

    if cloak <= 0.50 then
        ObjectHideSubObjectPermanently( self, "CLOAK01", false )
    else
        ObjectHideSubObjectPermanently( self, "CLOAK02", false )
    end

    if sash <= 0.50 then
        ObjectHideSubObjectPermanently( self, "SASH01", false )
    else
        ObjectHideSubObjectPermanently( self, "SASH02", false )
    end

	if armor <= 0.5 then
        ObjectHideSubObjectPermanently( self, "PAULD01", false )
     else
        ObjectHideSubObjectPermanently( self, "PAULD02", false )
    end
end

function OnHarondorInfantryCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )

    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "SHIELD01", true )
    ObjectHideSubObjectPermanently( self, "SHIELD02", true )
    ObjectHideSubObjectPermanently( self, "SHIELD03", true )
    ObjectHideSubObjectPermanently( self, "HELMET01", true )
    ObjectHideSubObjectPermanently( self, "HELMET02", true )
    ObjectHideSubObjectPermanently( self, "HELMET03", true )
    ObjectHideSubObjectPermanently( self, "MASK01", true )
    ObjectHideSubObjectPermanently( self, "MASK02", true )
    ObjectHideSubObjectPermanently( self, "BODY01", true )
    ObjectHideSubObjectPermanently( self, "BODY02", true )
    ObjectHideSubObjectPermanently( self, "CLOAK01", true )
    ObjectHideSubObjectPermanently( self, "CLOAK02", true )
    ObjectHideSubObjectPermanently( self, "SASH01", true )
    ObjectHideSubObjectPermanently( self, "SASH02", true )
	ObjectHideSubObjectPermanently( self, "PAULD01", true)
	ObjectHideSubObjectPermanently( self, "PAULD02", true)

    local head 		=   GetRandomNumber()
	local shield 	=   GetRandomNumber()
	local helmet 	=   GetRandomNumber()
	local mask 		=   GetRandomNumber()
	local body 		=   GetRandomNumber()
	local cloak 	=   GetRandomNumber()
	local sash 		=   GetRandomNumber()
	local armor		= 	GetRandomNumber()

    if head <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

    if shield <= 0.33 then
        ObjectHideSubObjectPermanently( self, "SHIELD01", false )
    elseif shield <= 0.66 then
        ObjectHideSubObjectPermanently( self, "SHIELD02", false )
     else
        ObjectHideSubObjectPermanently( self, "SHIELD03", false )
    end

    if helmet <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HELMET01", false )
    elseif helmet <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HELMET02", false )
     else
        ObjectHideSubObjectPermanently( self, "HELMET03", false )
    end

    if mask <= 0.33 then
        ObjectHideSubObjectPermanently( self, "MASK01", false )
    elseif mask <= 0.66 then
        ObjectHideSubObjectPermanently( self, "MASK02", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    if body <= 0.50 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    else
        ObjectHideSubObjectPermanently( self, "BODY02", false )
    end

    if cloak <= 0.50 then
        ObjectHideSubObjectPermanently( self, "CLOAK01", false )
    else
        ObjectHideSubObjectPermanently( self, "CLOAK02", false )
    end

    if sash <= 0.50 then
        ObjectHideSubObjectPermanently( self, "SASH01", false )
    else
        ObjectHideSubObjectPermanently( self, "SASH02", false )
    end

	if armor <= 0.5 then
        ObjectHideSubObjectPermanently( self, "PAULD01", false )
     else
        ObjectHideSubObjectPermanently( self, "PAULD02", false )
    end
end

function OnHarondorArcherCreated(self)
	ObjectHideSubObjectPermanently( self, "FireArowTip", true )

    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "SHIELDBACK01", true )
    ObjectHideSubObjectPermanently( self, "SHIELDBACK02", true )
    ObjectHideSubObjectPermanently( self, "SHIELDBACK03", true )
    ObjectHideSubObjectPermanently( self, "HELMET01", true )
    ObjectHideSubObjectPermanently( self, "HELMET02", true )
    ObjectHideSubObjectPermanently( self, "HELMET03", true )
    ObjectHideSubObjectPermanently( self, "MASK01", true )
    ObjectHideSubObjectPermanently( self, "MASK02", true )
    ObjectHideSubObjectPermanently( self, "BODY01", true )
    ObjectHideSubObjectPermanently( self, "BODY02", true )
    ObjectHideSubObjectPermanently( self, "CLOAK01", true )
    ObjectHideSubObjectPermanently( self, "CLOAK02", true )
    ObjectHideSubObjectPermanently( self, "SASH01", true )
    ObjectHideSubObjectPermanently( self, "SASH02", true )
	ObjectHideSubObjectPermanently( self, "PAULD01", true)
	ObjectHideSubObjectPermanently( self, "PAULD02", true)

    local head 		=   GetRandomNumber()
	local shieldback 	=   GetRandomNumber()
	local helmet 	=   GetRandomNumber()
	local mask 		=   GetRandomNumber()
	local body 		=   GetRandomNumber()
	local cloak 	=   GetRandomNumber()
	local sash 		=   GetRandomNumber()
	local armor		= 	GetRandomNumber()

    if head <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

    if shieldback <= 0.33 then
        ObjectHideSubObjectPermanently( self, "SHIELDBACK01", false )
    elseif shieldback <= 0.66 then
        ObjectHideSubObjectPermanently( self, "SHIELDBACK02", false )
     else
        ObjectHideSubObjectPermanently( self, "SHIELDBACK03", false )
    end

    if helmet <= 0.33 then
        ObjectHideSubObjectPermanently( self, "HELMET01", false )
    elseif helmet <= 0.66 then
        ObjectHideSubObjectPermanently( self, "HELMET02", false )
     else
        ObjectHideSubObjectPermanently( self, "HELMET03", false )
    end

    if mask <= 0.33 then
        ObjectHideSubObjectPermanently( self, "MASK01", false )
    elseif mask <= 0.66 then
        ObjectHideSubObjectPermanently( self, "MASK02", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    if body <= 0.50 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    else
        ObjectHideSubObjectPermanently( self, "BODY02", false )
    end

    if cloak <= 0.50 then
        ObjectHideSubObjectPermanently( self, "CLOAK01", false )
    else
        ObjectHideSubObjectPermanently( self, "CLOAK02", false )
    end

    if sash <= 0.50 then
        ObjectHideSubObjectPermanently( self, "SASH01", false )
    else
        ObjectHideSubObjectPermanently( self, "SASH02", false )
    end

	if armor <= 0.5 then
        ObjectHideSubObjectPermanently( self, "PAULD01", false )
     else
        ObjectHideSubObjectPermanently( self, "PAULD02", false )
    end
end

function OnOsgiliathSecretDoorCreated(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl3" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )
end

function OsgiliathDoorOpen(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl2" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl3" )
end

function OsgiliathDoorClosed(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl3" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )
end

function OnGondorFortressCreated(self)
	ObjectHideSubObjectPermanently( self, "GBFBNNRS", true )
	ObjectSetGeometryActive( self, "HighTowerGeom", false )
end

function OnFishCreated(self)
	ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )
    ObjectHideSubObjectPermanently( self, "ROD_LINE", true )
    ObjectHideSubObjectPermanently( self, "BODY01", true )
    ObjectHideSubObjectPermanently( self, "BODY02", true )
    ObjectHideSubObjectPermanently( self, "BODY03", true )
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "HEAD04", true )
    ObjectHideSubObjectPermanently( self, "HEAD05", true )
    ObjectHideSubObjectPermanently( self, "HEAD06", true )

    -- assign random gear
    local body = GetRandomNumber()
    local head = GetRandomNumber()


    -- assign random body
    if body <= 0.33 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
    elseif body <= 0.66 then
        ObjectHideSubObjectPermanently( self, "BODY02", false )
    else
        ObjectHideSubObjectPermanently( self, "BODY03", false )
    end

    -- assign random head
    if head <= 0.16 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif head <= 0.32 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    elseif head <= 0.48 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    elseif head <= 0.64 then
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    elseif head <= 0.80 then
        ObjectHideSubObjectPermanently( self, "HEAD05", false )
    else
        ObjectHideSubObjectPermanently( self, "HEAD06", false )
    end
end
function OnFishEvilCreated(self)
	ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )
    ObjectHideSubObjectPermanently( self, "ROD_LINE", true )
    ObjectHideSubObjectPermanently( self, "BODY01", true )	--Orc
    ObjectHideSubObjectPermanently( self, "HEAD01", true )	--Orc
    ObjectHideSubObjectPermanently( self, "LEGS01", true )	--Orc
    ObjectHideSubObjectPermanently( self, "MUCORSAIR1", true )
    ObjectHideSubObjectPermanently( self, "MUCORSAIR2", true )
	
    local body = GetRandomNumber()

    -- assign random body
    if body <= 0.5 then
        ObjectHideSubObjectPermanently( self, "MUCORSAIR1", false )
    else
        ObjectHideSubObjectPermanently( self, "MUCORSAIR2", false )
    end
end
function OnFishMounted(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl2" )
    ObjectGrantUpgrade( self, "Upgrade_IsMounted" )
    ObjectHideSubObjectPermanently( self, "ROD_LINE", false )
end
function OnFishNotMounted(self)
    ObjectRemoveUpgrade( self, "Upgrade_IsMounted" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl2" )
    ObjectHideSubObjectPermanently( self, "ROD_LINE", true )
end

function OnShipVolley(self)
	ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl10" )
    ObjectRemoveUpgrade( self, "Upgrade_DwarvenSiegeHammer" )
end

function OnShipNoVolley(self)
	ObjectGrantUpgrade( self, "Upgrade_DwarvenSiegeHammer" )
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl10" )
end


function OnSerpentGuardCreated(self)
    ObjectGrantUpgrade( self, "Upgrade_GondorFighterFearless" )
	ObjectHideSubObjectPermanently( self, "HORSE01", true )
	ObjectHideSubObjectPermanently( self, "HORSE02", true )
	ObjectHideSubObjectPermanently( self, "HORSE03", true )
	ObjectHideSubObjectPermanently( self, "HORSE04", true )

	local horse     =   GetRandomNumber()

    if horse <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HORSE01", false )
    elseif horse <= 0.6 then
        ObjectHideSubObjectPermanently( self, "HORSE02", false )
    elseif horse <= 0.8 then
        ObjectHideSubObjectPermanently( self, "HORSE03", false )
     else
        ObjectHideSubObjectPermanently( self, "HORSE04", false )
    end
end

function OnSerpentGuardMounted(self)
    ObjectRemoveUpgrade( self, "Upgrade_GondorFighterFearless" )
    ObjectGrantUpgrade( self, "Upgrade_Drafted" )
end

function OnSerpentGuardDismounted(self)
    ObjectRemoveUpgrade( self, "Upgrade_Drafted" )
    ObjectGrantUpgrade( self, "Upgrade_GondorFighterFearless" )
end

function OnCaranLambarCreated(self)
	ObjectHideSubObjectPermanently( self, "HELMET", true )
	ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl3" )
end

function OnNafaratiMarauderCreated(self)
	ObjectHideSubObjectPermanently( self, "HEADDRESS", true )
end

function OnNafaratiMarauderBannerCreated(self)
	ObjectHideSubObjectPermanently( self, "HEADDRESS", false )
end

function OnHaradArchitectCreated(self)
	if ObjectTestModelCondition(self, "ACTIVELY_CONSTRUCTING") then
		ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl7" )
		ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl10" )
	else
		ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl10" )
		ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl7" )
	end
end

function OnArchitectBuilding(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl7" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl10" )
end

function OnArchitectNotBuilding(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl10" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl7" )
end

function OnHaradBlackNumenoreanBannerCreated (self)
    ObjectHideSubObjectPermanently( self, "BANNER01", true )
    ObjectHideSubObjectPermanently( self, "BANNER02", true )
	local banner          =    GetRandomNumber()

    if banner <= 0.5 then
        ObjectHideSubObjectPermanently( self, "BANNER01", false )
	else
        ObjectHideSubObjectPermanently( self, "BANNER02", false )
    end
end

function OnMessengerofUlmo(self)
    ObjectRemoveUpgrade( self, "Upgrade_MiniHordeLvl2" )
    ObjectGrantUpgrade( self, "Upgrade_MiniHordeLvl3" )
end

function OnMusterStart(self)
    ObjectGrantUpgrade( self, "Upgrade_ThrallMasterRhudaurSpearmen" )
	ObjectRemoveUpgrade( self, "Upgrade_ThrallMasterRhudaurSlingers" )
end

function OnMusterEnd(self)
    ObjectRemoveUpgrade( self, "Upgrade_ThrallMasterRhudaurSpearmen" )
	ObjectGrantUpgrade( self, "Upgrade_ThrallMasterRhudaurSlingers" )
end

function OnRohanInfantryCreated(self)
	ObjectGrantUpgrade( self, "Upgrade_ThrallMasterRhudaurSlingers" )
end

function OnMallornCreated(self)
	ObjectGrantUpgrade( self, "Upgrade_ArnorWallRegularGate" )
end

function OnMallornInRange(self)
    ObjectRemoveUpgrade( self, "Upgrade_ArnorWallRegularGate" )
    ObjectGrantUpgrade( self, "Upgrade_ArnorWallPosternGate" )
end

function OnMallornOutRange(self)
    ObjectRemoveUpgrade( self, "Upgrade_ArnorWallPosternGate" )
    ObjectGrantUpgrade( self, "Upgrade_ArnorWallRegularGate" )
end

function OnTrollEating(self)
    ObjectRemoveUpgrade( self, "Upgrade_ArnorWallPosternGate" )
    ObjectGrantUpgrade( self, "Upgrade_ArnorWallRegularGate" )
end

function OnTrollNotEating(self)
    ObjectRemoveUpgrade( self, "Upgrade_ArnorWallRegularGate" )
    ObjectGrantUpgrade( self, "Upgrade_ArnorWallPosternGate" )
end

function OnIsengardWargRidersCreated(self)
	ObjectHideSubObjectPermanently( self, "WEAPON01FB", true )
	ObjectHideSubObjectPermanently( self, "WEAPON02FB", true )
	ObjectHideSubObjectPermanently( self, "WEAPON03FB", true )
	ObjectHideSubObjectPermanently( self, "WEAPON04FB", true )
	ObjectHideSubObjectPermanently( self, "WEAPON05FB", true )
	ObjectHideSubObjectPermanently( self, "WEAPON01", true )
	ObjectHideSubObjectPermanently( self, "WEAPON02", true )
	ObjectHideSubObjectPermanently( self, "WEAPON03", true )
	ObjectHideSubObjectPermanently( self, "WEAPON04", true )
	ObjectHideSubObjectPermanently( self, "WEAPON05", true )

	ObjectHideSubObjectPermanently( self, "WARGA", true )
	ObjectHideSubObjectPermanently( self, "WARGB", true )
	ObjectHideSubObjectPermanently( self, "WARGFURA", true )
	ObjectHideSubObjectPermanently( self, "WARGFURB", true )
	ObjectHideSubObjectPermanently( self, "WARGHELMHA", true )
	ObjectHideSubObjectPermanently( self, "SKULLSHA", true )
	ObjectHideSubObjectPermanently( self, "SPIKESHA", true )

	ObjectHideSubObjectPermanently( self, "VAMBRACES01", true )
	ObjectHideSubObjectPermanently( self, "VAMBRACES01SPKE", true )
	ObjectHideSubObjectPermanently( self, "VAMBRACES02", true )
	ObjectHideSubObjectPermanently( self, "VAMBRACES03", true )

	ObjectHideSubObjectPermanently( self, "SHLDRPLATE01", true )
	ObjectHideSubObjectPermanently( self, "SHLDRPLATE02", true )

	ObjectHideSubObjectPermanently( self, "NECKPIECE", true )
	ObjectHideSubObjectPermanently( self, "BACKBONES", true )
	ObjectHideSubObjectPermanently( self, "BACKSNAKES", true )
	ObjectHideSubObjectPermanently( self, "SHOULDERSNAKES", true )

	ObjectHideSubObjectPermanently( self, "ARMS01", true )
	ObjectHideSubObjectPermanently( self, "ARMS02", true )
	ObjectHideSubObjectPermanently( self, "ARMS03", true )

	ObjectHideSubObjectPermanently( self, "BODY01", true )
	ObjectHideSubObjectPermanently( self, "BODY02", true )

	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )

	ObjectHideSubObjectPermanently( self, "HELMET01", true )
	ObjectHideSubObjectPermanently( self, "HELMET02", true )

	ObjectHideSubObjectPermanently( self, "HIPS01", true )
	ObjectHideSubObjectPermanently( self, "HIPS02", true )
	ObjectHideSubObjectPermanently( self, "HIPS03", true )

	ObjectHideSubObjectPermanently( self, "LEGARMOR01", true )
	ObjectHideSubObjectPermanently( self, "LEGARMOR02", true )
	ObjectHideSubObjectPermanently( self, "LEGARMOR03", true )

    local weapon         =    GetRandomNumber()
    local warg         =    GetRandomNumber()
    local vambraces         =    GetRandomNumber()
    local pauldrons         =    GetRandomNumber()
    local neckpiece         =    GetRandomNumber()
    local snakes         =    GetRandomNumber()
    local backbones         =    GetRandomNumber()
    local heads         =    GetRandomNumber()
    local helmet         =    GetRandomNumber()
    local hips         =    GetRandomNumber()
    local greaves         =    GetRandomNumber()
    local body         =    GetRandomNumber()
    local arms         =    GetRandomNumber()

    if weapon <= 0.2 then
        ObjectHideSubObjectPermanently( self, "WEAPON01", false )
		ObjectGrantUpgrade( self, "Upgrade_AragornCostume_01" )
    elseif weapon <= 0.4 then
        ObjectHideSubObjectPermanently( self, "WEAPON02", false )
		ObjectGrantUpgrade( self, "Upgrade_AragornCostume_02" )
    elseif weapon <= 0.6 then
        ObjectHideSubObjectPermanently( self, "WEAPON03", false )
		ObjectGrantUpgrade( self, "Upgrade_AragornCostume_03" )
    elseif weapon <= 0.8 then
        ObjectHideSubObjectPermanently( self, "WEAPON04", false )
		ObjectGrantUpgrade( self, "Upgrade_AragornCostume_04" )
     else
        ObjectHideSubObjectPermanently( self, "WEAPON05", false )
		ObjectGrantUpgrade( self, "Upgrade_AragornCostume_05" )
    end

    if warg <= 0.5 then
        ObjectHideSubObjectPermanently( self, "WARGA", false )
        ObjectHideSubObjectPermanently( self, "WARGFURA", false )
     else
        ObjectHideSubObjectPermanently( self, "WARGB", false )
        ObjectHideSubObjectPermanently( self, "WARGFURB", false )
    end

    if vambraces <= 0.333 then
        ObjectHideSubObjectPermanently( self, "VAMBRACES01", false )
        ObjectHideSubObjectPermanently( self, "VAMBRACES01SPKE", false )
    elseif vambraces <= 0.666 then
        ObjectHideSubObjectPermanently( self, "VAMBRACES02", false )
     else
        ObjectHideSubObjectPermanently( self, "VAMBRACES03", false )
    end

    if pauldrons <= 0.333 then
        ObjectHideSubObjectPermanently( self, "SHLDRPLATE01", false )
    elseif pauldrons <= 0.666 then
        ObjectHideSubObjectPermanently( self, "SHLDRPLATE02", false )
     else
        ObjectHideSubObjectPermanently( self, "NONE", false )
    end

    if neckpiece <= 0.5 then
        ObjectHideSubObjectPermanently( self, "NECKPIECE", false )
     else
        ObjectHideSubObjectPermanently( self, "NONE", false )
    end

    if snakes <= 0.5 then
        ObjectHideSubObjectPermanently( self, "BACKSNAKES", false )
        ObjectHideSubObjectPermanently( self, "SHOULDERSNAKES", false )
     else
        ObjectHideSubObjectPermanently( self, "NONE", false )
    end

    if backbones <= 0.5 then
        ObjectHideSubObjectPermanently( self, "BACKBONES", false )
     else
        ObjectHideSubObjectPermanently( self, "NONE", false )
    end

    if heads <= 0.333 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif heads <= 0.666 then
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    end

    if helmet <= 0.4 then
        ObjectHideSubObjectPermanently( self, "HELMET01", false )
    elseif helmet <= 0.8 then
        ObjectHideSubObjectPermanently( self, "HELMET02", false )
     else
        ObjectHideSubObjectPermanently( self, "NONE", false )
    end

    if hips <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HIPS01", false )
    elseif hips <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HIPS02", false )
    elseif hips <= 0.75 then
        ObjectHideSubObjectPermanently( self, "HIPS03", false )
     else
        ObjectHideSubObjectPermanently( self, "NONE", false )
    end

    if greaves <= 0.25 then
        ObjectHideSubObjectPermanently( self, "LEGARMOR01", false )
    elseif greaves <= 0.50 then
        ObjectHideSubObjectPermanently( self, "LEGARMOR02", false )
    elseif greaves <= 0.75 then
        ObjectHideSubObjectPermanently( self, "LEGARMOR03", false )
     else
        ObjectHideSubObjectPermanently( self, "NONE", false )
    end

    if body <= 0.5 then
        ObjectHideSubObjectPermanently( self, "BODY01", false )
     else
        ObjectHideSubObjectPermanently( self, "BODY02", false )
    end

    if arms <= 0.333 then
        ObjectHideSubObjectPermanently( self, "ARMS01", false )
    elseif arms <= 0.666 then
        ObjectHideSubObjectPermanently( self, "ARMS02", false )
     else
        ObjectHideSubObjectPermanently( self, "ARMS03", false )
    end

end

function OnRhunWardogCreated(self)
	ObjectHideSubObjectPermanently( self, "BANNER", true )

end

function OnLugRanged(self)
	ObjectHideSubObjectPermanently( self, "B_SWORD", true )
end
function OnLugRangedThrowing(self)
	ObjectHideSubObjectPermanently( self, "B_SWORD", false )
end

function OnWargPackCreated(self)
    ObjectGrantUpgrade( self, "Upgrade_GondorFighterFearless" )
	ObjectHideSubObjectPermanently( self, "WARGA", true )
	ObjectHideSubObjectPermanently( self, "WARGB", true )
	ObjectHideSubObjectPermanently( self, "WARGFURA", true )
	ObjectHideSubObjectPermanently( self, "WARGFURB", true )

	local warg     =   GetRandomNumber()

    if warg <= 0.3 then
        ObjectHideSubObjectPermanently( self, "WARGA", false )
        ObjectHideSubObjectPermanently( self, "WARGFURA", false )
     else
        ObjectHideSubObjectPermanently( self, "WARGB", false )
        ObjectHideSubObjectPermanently( self, "WARGFURB", false )
    end
end
