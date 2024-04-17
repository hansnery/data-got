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
Upgrade Upgrade_BaratheonShadowbinderAvailableIsTrue
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
Upgrade Upgrade_BaratheonShadowbinderTrigger
	Type								= PLAYER
	BuildCost						= 0
	BuildTime						= 0
	DisplayName					= Upgrade:Shadowbinder
	UpgradeFX        		= FX_DwarvenFortressUpgrade
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
	; ResearchSound 			= UpgradeLawfulSon
End
Upgrade Upgrade_BaratheonControlTheNarrowSeaTrigger
	Type								= PLAYER
	BuildCost						= 500
	BuildTime						= 0
	DisplayName					= Upgrade:ControlTheNarrowSea
	UpgradeFX        		= FX_DwarvenFortressUpgrade
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
	; ResearchSound 			= UpgradeLawfulSon
End
Upgrade Upgrade_BaratheonKingsBloodPowerTrigger
	Type								= PLAYER
	BuildCost						= 500
	BuildTime						= 0
	DisplayName					= Upgrade:KingsBloodPower
	UpgradeFX        		= FX_DwarvenFortressUpgrade
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
	ResearchSound 			= UpgradeKingsBloodPower
End
Upgrade Upgrade_BaratheonLawfulSonTrigger
	Type								= PLAYER
	BuildCost						= 1000
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
	; ResearchSound 			= UpgradeLawfulSon
End
Upgrade Upgrade_BaratheonPrayHarderTrigger
	Type								= PLAYER
	BuildCost						= 1500
	BuildTime						= 0
	DisplayName					= Upgrade:PrayHarder
	UpgradeFX        		= FX_DwarvenFortressUpgrade
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
	; ResearchSound 			= UpgradeLawfulSon
End
