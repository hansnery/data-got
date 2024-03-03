//-------------------------------------------------------
// GAME OF THRONES UPGRADES
//-------------------------------------------------------
Upgrade Upgrade_Lightbringer
	Type = PLAYER
	LocalPlayerGainsUpgradeEvaEvent = UpgradeLightbringer
End
Upgrade Upgrade_Shadowbinder
	Type = PLAYER
End
Upgrade Upgrade_BaratheonKingsBloodPowerAvailableIsTrue
	Type = PLAYER
End
Upgrade Upgrade_BaratheonLawfulSonAvailableIsTrue
	Type = PLAYER
End
Upgrade Upgrade_BaratheonKingsBloodPowerTrigger // You actually buy this one, which gives the one below to the whole castle
	Type								= PLAYER
	BuildCost						= 0
	BuildTime						= 0
	DisplayName					= Upgrade:KingsBloodPower
	UpgradeFX        		= FX_DwarvenFortressUpgrade
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
	ResearchSound 			= UpgradeKingsBloodPower
End
Upgrade Upgrade_BaratheonLawfulSonTrigger // You actually buy this one, which gives the one below to the whole castle
	Type								= PLAYER
	BuildCost						= 1500
	BuildTime						= 0
	DisplayName					= Upgrade:LawfulSon
	UpgradeFX        		= FX_DwarvenFortressUpgrade
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
	ResearchSound 			= UpgradeLawfulSon
End
