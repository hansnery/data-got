//-------------------------------------------------------
// GAME OF THRONES UPGRADES
//-------------------------------------------------------
Upgrade Upgrade_Lightbringer
	Type 				= PLAYER
	Tooltip     = TOOLTIP:BaratheonLightbringer
	DisplayName = UPGRADE:BaratheonLightbringer
	Type        = PLAYER
	BuildCost		= 800 ;GONDOR_TECH_FIRE_STONES_BUILDCOST
	BuildTime		= GONDOR_TECH_FIRE_STONES_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeLightbringer
	; LocalPlayerGainsUpgradeEvaEvent = UpgradeLightbringer
	SkirmishAIHeuristic 			= AI_UPGRADEHEURISTIC_IMPORTANT
	StrategicIcon		 					= AptStrategicUnitUpgradeBlade
	
End
Upgrade Upgrade_DefenderOfTheFaith
	Type = PLAYER
End
Upgrade Upgrade_BaratheonDefenderOfTheFaithAvailableIsTrue
	Type = PLAYER
End
Upgrade Upgrade_BaratheonControlTheNarrowSeaAvailableIsTrue
	Type = PLAYER
End
Upgrade Upgrade_BaratheonKingsBloodPowerAvailableIsTrue
	Type = PLAYER
End
Upgrade Upgrade_BaratheonLawfulSonAvailableIsTrue
	Type = PLAYER
End
Upgrade Upgrade_BaratheonSacrificeShireenAvailableIsTrue
	Type = PLAYER
End
Upgrade Upgrade_BaratheonPrayHarderAvailableIsTrue
	Type = PLAYER
End
Upgrade Upgrade_BaratheonDefenderOfTheFaithTrigger
	Type								= PLAYER
	BuildCost						= 500
	BuildTime						= 0
	DisplayName					= Upgrade:DefenderOfTheFaith
	UpgradeFX        		= FX_DwarvenFortressUpgrade
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
	ResearchSound 			= UpgradeBurnIdols
End
Upgrade Upgrade_BaratheonControlTheNarrowSeaTrigger
	Type								= PLAYER
	BuildCost						= 1000
	BuildTime						= 0
	DisplayName					= Upgrade:ControlTheNarrowSea
	UpgradeFX        		= FX_DwarvenFortressUpgrade
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
	ResearchSound 			= UpgradeMasterOfShips
End
Upgrade Upgrade_BaratheonKingsBloodPowerTrigger
	Type								= PLAYER
	BuildCost						= 750
	BuildTime						= 0
	DisplayName					= Upgrade:KingsBloodPower
	UpgradeFX        		= FX_DwarvenFortressUpgrade
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
	ResearchSound 			= UpgradeKingsBloodPower
End
Upgrade Upgrade_BaratheonLawfulSonTrigger
	Type								= PLAYER
	BuildCost						= 1500
	BuildTime						= 0
	DisplayName					= Upgrade:LawfulSon
	UpgradeFX        		= FX_DwarvenFortressUpgrade
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
	ResearchSound 			= UpgradeLawfulSon
End
Upgrade Upgrade_BaratheonSacrificeShireenTrigger
	Type								= PLAYER
	BuildCost						= 1000
	BuildTime						= 0
	DisplayName					= Upgrade:SacrificeShireen
	UpgradeFX        		= FX_DwarvenFortressUpgrade
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
	ResearchSound 			= UpgradeSacrificeShireen
End
Upgrade Upgrade_BaratheonPrayHarderTrigger
	Type								= PLAYER
	BuildCost						= 2000
	BuildTime						= 0
	DisplayName					= Upgrade:PrayHarder
	UpgradeFX        		= FX_DwarvenFortressUpgrade
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
	ResearchSound 			= UpgradePrayHarder
End
Upgrade Upgrade_ShireensAshTrigger
	Type = PLAYER
End
Upgrade Upgrade_GOTFireArrows
	DisplayName       	 = UPGRADE:GondorFireArrowUpgrade
	Tooltip							 = TOOLTIP:GondorFlamingArrows
	Type              	 = OBJECT
	BuildCost						 = GONDOR_PERSONAL_FIRE_ARROWS_BUILDCOST
	BuildTime						 = GONDOR_PERSONAL_FIRE_ARROWS_BUILDTIME
	ResearchSound				 = UpgradeFlamingArrows
	UpgradeFX						 = FX_PorterDeliverFlamingArrows
	RequiredObjectFilter = ANY +LannisterArcheryRange +LannisterArcheryRangeFoundation +GondorArcherRange +GondorArcherRangeFoundation +MordorArmory +MordorArmory_ForAI
	StrategicIcon				 = AptStrategicUnitUpgradeArrow
End