//;;,;; Fortress granteconomybonus behaviors moved to this file for 2.1, now that we're adding Scavenger too.
//;;,;; It'll be much easier to maintain and allow us to change all our Fortresses at once :)

	Behavior = AttributeModifierAuraUpdate ModuleTag_AllowDwarvenRiches ;;,;; First added in 2.02e
		StartsActive	= No ;If no, requires upgrade to turn on.
		BonusName		= SpellBookDwarvenRiches
		TriggeredBy		= Upgrade_GrantDwarvenRiches
		RefreshDelay	= 2000
		Range			= 999999
		TargetEnemy		= No ;
		ObjectFilter	= ANY +DwarvenMineShaft +DwarvenMineShaft_ForAI +DwarvenMineShaftFoundation +DwarvenMineShaftForUndermine +DorwinionMarket +DorwinionMarketFoundation SAME_PLAYER
	End
	
	Behavior = AttributeModifierAuraUpdate ModuleTag_AllowRekindledHearths ;;,;; First added in 2.02e
		StartsActive	= No ;If no, requires upgrade to turn on.
		BonusName		= SpellBookDwarvenRiches
		TriggeredBy		= Upgrade_GrantRekindledHearths
		RefreshDelay	= 2000
		Range			= 999999
		TargetEnemy		= No ;
		ObjectFilter	= ANY +EreborForge +EreborForgeFoundation SAME_PLAYER
	End	

	Behavior = AttributeModifierAuraUpdate ModuleTag_AllowBountifulHarvest ;;,;; First added in 2.02e
		StartsActive	= No ;If no, requires upgrade to turn on.
		BonusName		= SpellBookRohanHarvest
		TriggeredBy		= Upgrade_GrantDwarvenRiches
		RefreshDelay	= 2000
		Range			= 999999
		TargetEnemy		= No ;
		ObjectFilter	= ANY +RohanFarm +RohanFarmForAI +RohanFarmFoundation +RohanFarmMultiplayer +RohanWindmill +RohanWindmillFoundation +RohanWindmillMultiplayer SAME_PLAYER
	End		

	Behavior = AttributeModifierAuraUpdate ModuleTag_AllowBountifulHarvestBonus ;;,;; First added in 2.02e
		StartsActive	= No ;If no, requires upgrade to turn on.
		BonusName		= RohanProductionBonus
		TriggeredBy		= Upgrade_GrantDwarvenRiches
		RefreshDelay	= 2000
		Range			= 999999
		TargetEnemy		= No ;
		ObjectFilter	= ANY +RohanFarm +RohanFarmForAI +RohanFarmFoundation +RohanFarmMultiplayer +RohanWindmill +RohanWindmillFoundation +RohanWindmillMultiplayer SAME_PLAYER
	End	

	Behavior = AttributeModifierAuraUpdate ModuleTag_AllowFuelTheFires ;;,;; First added in 2.02e
		StartsActive	= No ;If no, requires upgrade to turn on.
		BonusName		= SpellBookFueltheFires
		TriggeredBy		= Upgrade_GrantFueltheFires ; Upgrade_FortressGrantFueltheFires
		RefreshDelay	= 2000
		Range			= 999999
		TargetEnemy		= No ;
		ObjectFilter	= ANY +IsengardLumberMill +IsengardLumberMill_ForAI SAME_PLAYER ;,; +SUPPLY_GATHERING_CENTER
	End	
	
	Behavior = AttributeModifierAuraUpdate ModuleTag_AllowScavenger ;;,;; First added in 2.1
		StartsActive	= No ;If no, requires upgrade to turn on.
		BonusName		= SpellBookScavenger
		TriggeredBy		= Upgrade_GrantScavenger
		RefreshDelay	= 2000
		Range			= 999999
		TargetEnemy		= No ;
		ObjectFilter	= ANY WILD_EVIL_UNIT_FILTER +WildAzog +WildGoblinKing +WildShelob +Drogoth +Wyrm +SummonedDragon +SummonedDragonJH1 +WatcherHead +WatcherHittingArm +WatcherEgg +SpellBookDragonStrikeDragon +WildMountainGiant +WildMountainGiant_Summoned ; Intended to affect EvilBeasts units even in another faction's hands.
	End	