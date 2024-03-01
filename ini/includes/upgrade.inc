Upgrade Upgrade_WOTRMode
	Type			= PLAYER
End
Upgrade Upgrade_AIEarlygameTrigger
	Type			= PLAYER
End
Upgrade Upgrade_AILategameTrigger
	Type			= PLAYER
End
Upgrade Upgrade_GuldurFaction
	DisplayName		= UPGRADE:GuldurFaction
	Type			= PLAYER
End
Upgrade Upgrade_MirkwoodFaction
	DisplayName		= UPGRADE:MirkwoodFaction
	Type			= PLAYER
End
Upgrade Upgrade_TechnologyHardenedSkin
	DisplayName       = UPGRADE:HardenedSkin
	Type              = PLAYER
	BuildCost		= 500
	BuildTime		= 30
	ResearchCompleteEvaEvent	= UpgradeGenericGoblinReady
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End
Upgrade Upgrade_HardenedSkin
	Type			= OBJECT
	BuildCost		= 300
	BuildTime		= 10
	DisplayName		= UPGRADE:HardenedSkin
	Tooltip		= UPGRADE:HardenedSkin
	ResearchSound	= UpgradeHeavyArmor
	UpgradeFX		= FX_PorterDeliverHeavyArmor
	ButtonImage     = BuildingNoArt
	Cursor			= WeaponUpgrade
	StrategicIcon	= AptStrategicUnitUpgradeArmor
	;RequiredObjectFilter = NONE +FireWyrmLair
End
Upgrade Upgrade_SentryTowerGarrisonGondor
	Type			= OBJECT
	BuildCost		= 150
	BuildTime		= WILD_SENTRY_TOWER_ARROW_UPGRADE_BUILDTIME
	DisplayName		= UPGRADE:GondorBattleTowerGarrison
	ResearchSound	= UpgradeFlamingArrows
End
Upgrade Upgrade_AmrothKnights
  DisplayName       = CONTROLBAR:AmrothKnights
  Type              = PLAYER
  PersistsInCampaign = Yes
End
Upgrade Upgrade_TechnologyHaradFireArrowsPurchased
	Type			= PLAYER
	ResearchCompleteEvaEvent = UpgradeFlameArrowsReady
End
Upgrade Upgrade_TechnologyHaradForgedBladesPurchased
	Type			= PLAYER
	ResearchCompleteEvaEvent = UpgradeForgedBladesReady
End
Upgrade Upgrade_TechnologyHaradHeavyArmorPurchased
	Type			= PLAYER
	ResearchCompleteEvaEvent = UpgradeHeavyArmorReady
End
Upgrade Upgrade_TechnologyHaradBannerCarrierPurchased
	Type			= PLAYER
	ResearchCompleteEvaEvent = UpgradeBannerCarrierTechnologyReady
End
Upgrade Upgrade_HasIsenSiegeWorks
    Type = OBJECT
	RequiredObjectFilter = NONE +IsengardSiegeWorks +IsengardSiegeWorksFoundation
End
Upgrade Upgrade_TREESTART
	Type			= OBJECT
End
Upgrade Upgrade_TURNBROWN
	Type			= OBJECT
End
Upgrade Upgrade_TURNDEAD
	Type			= OBJECT
End
Upgrade Upgrade_SwitchToTree
	Type			= OBJECT
End
Upgrade Upgrade_DwarvenHornsoftheGate
	Type			= OBJECT
	BuildCost		= 1000
	BuildTime		= DWARVEN_OIL_CASK_BUILDTIME
	UpgradeFX		= FX_DwarvenFortressUpgrade
	DisplayName		= Upgrade:FortressOilCasks
	ResearchSound	= UpgradeDwarfFortressOilCasks
	ResearchCompleteEvaEvent   = UpgradeFortress
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End
Upgrade Upgrade_Arkenstone
  DisplayName       = CONTROLBAR:ElvenGifts
  Type              = PLAYER
  PersistsInCampaign = Yes
End
Upgrade Upgrade_Evilboyos
  DisplayName       = UPGRADE:ElvenAllies
  Type              = PLAYER
  ButtonImage       = SCGrabPassenger
End

; ---- Roac specific upgrades

Upgrade Upgrade_RoacLevel3
	DisplayName       = UPGRADE:RoacLevel3
	Type              = OBJECT
	Tooltip		= TOOLTIP:RoacLevel3
	BuildCost		= 500 ;TDH_ROAC_LEVEL2_BUILDCOST
	BuildTime		= 10 ;TDH_ROAC_LEVEL_BUILDTIME
		NoUpgradeDiscount = Yes
End
Upgrade Upgrade_RoacLevel5
	DisplayName       = UPGRADE:RoacLevel5
	Type              = OBJECT
	Tooltip		= TOOLTIP:RoacLevel5
	BuildCost		= 400   ;800 ;TDH_ROAC_LEVEL3_BUILDCOST
	BuildTime		= 10 ;TDH_ROAC_LEVEL_BUILDTIME
		NoUpgradeDiscount = Yes
End

; ---- Denethor specific upgrades -also used by Arwen for levels 3 & 6

Upgrade Upgrade_DenethorLevel3
	DisplayName       = UPGRADE:DenethorLevel3
	Type              = OBJECT
	;Tooltip		= TOOLTIP:DenethorLevel3
	BuildCost		= 300
	BuildTime		= 20
	NoUpgradeDiscount = Yes
End
Upgrade Upgrade_DenethorLevel6
	DisplayName       = UPGRADE:DenethorLevel6
	Type              = OBJECT
	;Tooltip		= TOOLTIP:DenethorLevel6
	BuildCost		= 300
	BuildTime		= 20
	NoUpgradeDiscount = Yes
End
Upgrade Upgrade_ArwenLevel10
	DisplayName       = UPGRADE:ArwenLevel10
	Type              = OBJECT
	;Tooltip		= TOOLTIP:ArwenLevel10
	BuildCost		= 500
	BuildTime		= 20
	NoUpgradeDiscount = Yes
	ResearchCompleteEvaEvent	= StatueAmrothUpgrade
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End
Upgrade Upgrade_BTDurinBanner
	Type			= OBJECT
	BuildCost		= 150
	BuildTime		= WILD_SENTRY_TOWER_ARROW_UPGRADE_BUILDTIME
	DisplayName		= UPGRADE:BTDurinBanner
	ResearchCompleteEvaEvent	= UpgradeBannerTower
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End
Upgrade Upgrade_BTKhazadBanner
	Type			= OBJECT
	BuildCost		= 150
	BuildTime		= WILD_SENTRY_TOWER_ARROW_UPGRADE_BUILDTIME
	DisplayName		= UPGRADE:BTKhazadBanner
	ResearchCompleteEvaEvent	= UpgradeBannerTower
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End
Upgrade Upgrade_BTEredMithrimBanner
	Type			= OBJECT
	BuildCost		= 150
	BuildTime		= WILD_SENTRY_TOWER_ARROW_UPGRADE_BUILDTIME
	DisplayName		= UPGRADE:BTEredMithrimBanner
	ResearchCompleteEvaEvent	= UpgradeBannerTower
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End
Upgrade Upgrade_BTIronHillsBanner
	Type			= OBJECT
	BuildCost		= 300 ;150
	BuildTime		= WILD_SENTRY_TOWER_ARROW_UPGRADE_BUILDTIME
	DisplayName		= UPGRADE:BTIronHillsBanner
	ResearchCompleteEvaEvent	= UpgradeBannerTower
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End
Upgrade Upgrade_BTEredLuinBanner
	Type			= OBJECT
	BuildCost		= 500 ;150
	BuildTime		= WILD_SENTRY_TOWER_ARROW_UPGRADE_BUILDTIME
	DisplayName		= UPGRADE:BTEredLuinBanner
	ResearchCompleteEvaEvent	= UpgradeBannerTower
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End

Upgrade Upgrade_DwarvenWorkshopLevel2
	Type			= OBJECT
	BuildCost		= 600 ;DWARVEN_FORGEWORKS_LEVEL2_UPGRADE_COST
	BuildTime		= 60	;DWARVEN_FORGEWORKS_LEVEL2_UPGRADE_BUILDTIME
	DisplayName	    = UPGRADE:DwarvenWorkshopLevel2
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK
End
Upgrade Upgrade_DwarvenWorkshopLevel3
	Type			= OBJECT
	BuildCost		= 200 ;DWARVEN_FORGEWORKS_LEVEL3_UPGRADE_COST
	BuildCost		= 200 ;DWARVEN_FORGEWORKS_LEVEL3_UPGRADE_COST
	BuildTime		= DWARVEN_FORGEWORKS_LEVEL3_UPGRADE_BUILDTIME
	DisplayName	    = UPGRADE:DwarvenWorkshopLevel3
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End

Upgrade Upgrade_IsMounted
    Type = OBJECT
End

Upgrade Upgrade_FortressMapUpgrade
	DisplayName     = UPGRADE:MarketplaceUpgradeIronOre
	Type            = PLAYER
	BuildCost		= 1000 ;GONDOR_IRONORE_BUILDCOST
	BuildTime		= 5 ;GONDOR_IRONORE_BUILDTIME
	;ResearchCompleteEvaEvent	= UpgradeIronOre
End

//------  New Rohan Upgrades	--------------------------------------------------------
Upgrade Upgrade_TechnologyRohanBasicTraining
	DisplayName       = UPGRADE:RohanBasicTraining
	Type              = PLAYER
	BuildCost		= GONDOR_TECH_BASIC_TRAINING_BUILDCOST
	BuildTime		= GONDOR_TECH_BASIC_TRAINING_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeBannerCarrierTechnologyReady
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End
Upgrade Upgrade_RohanBasicTraining
	DisplayName       = UPGRADE:RohanBasicTraining
	Type              = OBJECT
	Tooltip		= UPGRADE:RohanBasicTraining
	BuildCost		= 100;GONDOR_PERSONAL_BASIC_TRAINING_BUILDCOST
	BuildTime		= GONDOR_PERSONAL_BASIC_TRAINING_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeBannerCarrierReady
	RequiredObjectFilter = ANY +RohanBarracks +RohanBarracksFoundation +TradeCaravan +HelmsDeepTradeCaravan +TradeCaravantheSecond +RohanBarracksForAI
	StrategicIcon	= AptStrategicUnitUpgradeBannerCarrier
End
Upgrade Upgrade_TechnologyRohanFireArrows
	DisplayName       = UPGRADE:GondorFireArrowUpgrade
	Type              = PLAYER
	BuildCost		= GONDOR_TECH_FIRE_ARROWS_BUILDCOST
	BuildTime		= GONDOR_TECH_FIRE_ARROWS_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeFlameArrowsReady
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End
Upgrade Upgrade_RohanFireArrows
	DisplayName       = UPGRADE:GondorFireArrowUpgrade
  	Tooltip		= TOOLTIP:GondorFlamingArrows
	Type              = OBJECT
	BuildCost		= GONDOR_PERSONAL_FIRE_ARROWS_BUILDCOST
	BuildTime		= GONDOR_PERSONAL_FIRE_ARROWS_BUILDTIME
	ResearchSound	= UpgradeFlamingArrows
	UpgradeFX		= FX_PorterDeliverFlamingArrows
	RequiredObjectFilter = ANY +RohanArcherRange +RohanArcherRangeFoundation +TradeCaravan +HelmsDeepTradeCaravan +TradeCaravantheSecond +RohanArcherRangeForAI
	StrategicIcon	= AptStrategicUnitUpgradeArrow
End
Upgrade Upgrade_TechnologyRohanForgedBlades
	DisplayName       = UPGRADE:RohanForgedBlades
	Type              = PLAYER
	BuildCost		= GONDOR_TECH_FORGED_BLADES_BUILDCOST
	BuildTime		= GONDOR_TECH_FORGED_BLADES_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeForgedBladesReady
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End
Upgrade Upgrade_RohanForgedBlades
	DisplayName       = UPGRADE:RohanForgedBlades
  	Tooltip		= TOOLTIP:RohanForgedBlades
	Type              = OBJECT
	BuildCost		= GONDOR_PERSONAL_FORGED_BLADES_BUILDCOST
	BuildTime		= GONDOR_PERSONAL_FORGED_BLADES_BUILDTIME
	ResearchSound	= UpgradeForgedBlades
	UpgradeFX		= FX_PorterDeliverForgedBlades
	RequiredObjectFilter = ANY +RohanBarracks +RohanBarracksFoundation +TradeCaravan +HelmsDeepTradeCaravan +TradeCaravantheSecond +RohanBarracksForAI
	StrategicIcon	= AptStrategicUnitUpgradeBlade
End
Upgrade Upgrade_TechnologyRohanHeavyArmor
	DisplayName       = UPGRADE:RohanHeavyArmor
	Type              = PLAYER
	BuildCost		= GONDOR_TECH_HEAVY_ARMOR_BUILDCOST
	BuildTime		= GONDOR_TECH_HEAVY_ARMOR_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeHeavyArmorReady
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End
Upgrade Upgrade_RohanHeavyArmor
	DisplayName       = UPGRADE:RohanHeavyArmor
	Tooltip		= TOOLTIP:RohanHeavyArmor
	Type              = OBJECT
	BuildCost		= GONDOR_PERSONAL_HEAVY_ARMOR_BUILDCOST
	BuildTime		= GONDOR_PERSONAL_HEAVY_ARMOR_BUILDTIME
	ResearchSound	= UpgradeHeavyArmor
	UpgradeFX		= FX_PorterDeliverHeavyArmor
	RequiredObjectFilter = ANY +RohanBarracks +RohanBarracksFoundation +TradeCaravan +HelmsDeepTradeCaravan +TradeCaravantheSecond +RohanBarracksForAI
	StrategicIcon	= AptStrategicUnitUpgradeArmor
End
Upgrade Upgrade_TechnologyRohanHorseShield
	DisplayName       = UPGRADE:GondorKnightShield
	Type              = PLAYER
	BuildCost		= GONDOR_TECH_KNIGHT_SHIELD_BUILDCOST
	BuildTime		= GONDOR_TECH_KNIGHT_SHIELD_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeKnightShieldsReady
End
Upgrade Upgrade_RohanHorseShield
	DisplayName       = UPGRADE:GondorKnightShield
  	Tooltip		= TOOLTIP:GondorKnightShields
	Type              = OBJECT
	BuildCost		= GONDOR_PERSONAL_KNIGHT_SHIELD_BUILDCOST
	BuildTime		= GONDOR_PERSONAL_KNIGHT_SHIELD_BUILDTIME
	ResearchSound	= UpgradeHeavyArmor
	UpgradeFX		= FX_PorterDeliverHorseShields
	RequiredObjectFilter = ANY +RohanStable +RohanStableFoundation +RohanStableForAI
	StrategicIcon	= AptStrategicUnitUpgradeHorseShield
End
Upgrade Upgrade_TechnologyRohanFireStones
	DisplayName       = UPGRADE:GondorFireStones
	Type              = PLAYER
	BuildCost		= GONDOR_TECH_FIRE_STONES_BUILDCOST
	BuildTime		= GONDOR_TECH_FIRE_STONES_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeFlamingShotsReady
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End
Upgrade Upgrade_RohanFireStones
	DisplayName       = UPGRADE:GondorFireStones
	Type              = OBJECT
	Tooltip		= TOOLTIP:GondorFireStones
	BuildCost		= GONDOR_PERSONAL_FIRE_STONES_BUILDCOST
	BuildTime		= GONDOR_PERSONAL_FIRE_STONES_BUILDTIME
	ResearchSound	= UpgradeFireStones
	UpgradeFX		= FX_PorterDeliverFireStones
	RequiredObjectFilter = NONE +RohanArmory +RohanWorkshopForAI
	StrategicIcon	= AptStrategicUnitUpgradeArrow
End

Upgrade Upgrade_RohanFortressHornsOfHammerhand
	Type			= PLAYER
	BuildCost		= 1200 ;MEN_FORTRESS_HOUSES_OF_HEALING_BUILDCOST
	BuildTime		= MEN_FORTRESS_HOUSES_OF_HEALING_BUILDTIME
	DisplayName		= Upgrade:FortressHouseofHealing
	UpgradeFX        = FX_DwarvenFortressUpgrade
	ResearchCompleteEvaEvent   = UpgradeFortress
	ResearchSound = UpgradeDwarfFortressStonework
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
;	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK
End

Upgrade Upgrade_RohanFortressFlamingMunitionsTrigger
	Type			= OBJECT
	BuildCost		= 1000
	BuildTime		= 30
	ResearchSound = UpgradeFireStones
	DisplayName		= Upgrade:FortressFlamingMunitions
	UpgradeFX        = FX_DwarvenFortressUpgrade
	ResearchCompleteEvaEvent   = UpgradeFortress
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End

Upgrade Upgrade_RohanFortressHastyFortificationsTrigger // You actually buy this one, which gives the one below to the whole castle
	Type			= OBJECT
	BuildCost		= 1800 ;MEN_FORTRESS_NUMENORIAN_STONEWORK_BUILDCOST
	BuildTime		= MEN_FORTRESS_NUMENORIAN_STONEWORK_BUILDTIME
	DisplayName		= Upgrade:FortressNumenorStonework
	UpgradeFX        = FX_DwarvenFortressUpgrade
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
	ResearchCompleteEvaEvent	= UpgradeFortress
	ResearchSound = UpgradeDwarfFortressStonework
End

Upgrade Upgrade_RohanFortressHastyFortifications
	Type			= OBJECT
	BuildCost		= 800 ;GONDOR_NEMENORSTONEWORK_BUILDCOST
	BuildTime		= GONDOR_NEMENORSTONEWORK_BUILDTIME
	DisplayName		= Upgrade:FortressNumenorStonework
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
	ResearchCompleteEvaEvent	= UpgradeFortress
	ResearchSound = UpgradeDwarfFortressStonework
End
Upgrade Upgrade_RohanFortressDesperateGarrison
	Type			= OBJECT
	BuildCost		= 650 ;GONDOR_NEMENORSTONEWORK_BUILDCOST
	BuildTime		= GONDOR_NEMENORSTONEWORK_BUILDTIME
	DisplayName		= Upgrade:FortressNumenorStonework
	UpgradeFX        = FX_DwarvenFortressUpgrade
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
	ResearchCompleteEvaEvent	= UpgradeFortress
	ResearchSound = UpgradeDwarfFortressSiegeKegs
End
Upgrade Upgrade_RohanFortressMeadHall
	Type			= OBJECT
	BuildCost		= 1000 ;GONDOR_NEMENORSTONEWORK_BUILDCOST
	BuildTime		= GONDOR_NEMENORSTONEWORK_BUILDTIME
	DisplayName		= Upgrade:FortressNumenorStonework
	UpgradeFX        = FX_DwarvenFortressUpgrade
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
	ResearchCompleteEvaEvent	= UpgradeFortressMeadHall
	ResearchSound = UpgradeRohanFortressMeadMS
End
Upgrade Upgrade_RohanFortressRideoftheRohirrim
	Type			= OBJECT
	BuildCost		= 1200 ;MEN_FORTRESS_IVORY_TOWER_BUILDCOST
	BuildTime		= MEN_FORTRESS_IVORY_TOWER_BUILDTIME
	DisplayName		= Upgrade:FortressIvoryTower
	UpgradeFX        = FX_DwarvenFortressUpgrade
	ResearchCompleteEvaEvent	= UpgradeFortressRideRohirrim
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
	ResearchSound = UpgradeRohanFortressRohirrimMS
End

Upgrade Upgrade_DunedainSpears
  Type               = OBJECT
  Tooltip            = TOOLTIP:DunedainSpear
  DisplayName        = UPGRADE:DunedainSpear
  ButtonImage        = BuildingNoArt
  Cursor             = WeaponUpgrade
  BuildTime          = 3.0
  BuildCost          = 100
  ResearchSound = DunedainRangerVoiceEquipSpears
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_ANTICAVALRY
End

Upgrade Upgrade_DunedainSwords
  Type               = OBJECT
  Tooltip            = TOOLTIP:DunedainSword
  DisplayName        = UPGRADE:DunedainSword
  ButtonImage        = BuildingNoArt
  Cursor             = WeaponUpgrade
  BuildTime          = 3.0
  BuildCost          = 100
  ResearchSound = DunedainRangerVoiceEquipSwords
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_ANTISPECIAL
End

Upgrade Upgrade_DoorwardenSwords
  Type               = OBJECT
  Tooltip            = TOOLTIP:DunedainSword
  DisplayName        = UPGRADE:DunedainSword
  ButtonImage        = BuildingNoArt
  Cursor             = WeaponUpgrade
  BuildTime          = 3.0
  BuildCost          = 100
  ;ResearchSound = DunedainRangerVoiceEquipSwords
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_ANTISPECIAL
End

Upgrade Upgrade_NaithBows
  Type               = OBJECT
  Tooltip            = TOOLTIP:NaithBows
  DisplayName        = UPGRADE:NaithBows
  ButtonImage        = BuildingNoArt
  Cursor             = WeaponUpgrade
  BuildTime          = 3.0
  BuildCost          = 100
  ResearchSound = NaithVoiceEquipBows
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_ANTISPECIAL
End

Upgrade Upgrade_StoneTrollDreadHelmet
  Type               = OBJECT
  Tooltip            = TOOLTIP:DreadHelmet
  DisplayName        = UPGRADE:DreadHelmet
  ButtonImage        = BuildingNoArt
  Cursor             = WeaponUpgrade
  BuildTime          = GONDOR_PERSONAL_KNIGHT_SHIELD_BUILDTIME
  BuildCost          = 500
  StrategicIcon		 = AptStrategicUnitUpgradeBannerCarrier
End

Upgrade Upgrade_StoneTrollSerratedArmor
  Type               = OBJECT
  Tooltip            = TOOLTIP:SerratedArmor
  DisplayName        = UPGRADE:SerratedArmor
  ButtonImage        = BuildingNoArt
  Cursor             = WeaponUpgrade
  BuildTime          = GONDOR_PERSONAL_KNIGHT_SHIELD_BUILDTIME
  BuildCost          = 500
  StrategicIcon		 = AptStrategicUnitUpgradeArmor
End

Upgrade Upgrade_StoneTrollScytheGauntlets
  Type               = OBJECT
  Tooltip            = TOOLTIP:ScytheGauntlets
  DisplayName        = UPGRADE:ScytheGauntlets
  ButtonImage        = BuildingNoArt
  Cursor             = WeaponUpgrade
  BuildTime          = GONDOR_PERSONAL_KNIGHT_SHIELD_BUILDTIME
  BuildCost          = 500
  StrategicIcon		 = AptStrategicUnitUpgradeBlade
End

Upgrade Upgrade_FountofCorruptionLevel2
   Type            = OBJECT
    BuildCost      = 400	;250
    BuildTime      = ELVEN_BARRACKS_LEVEL2_UPGRADE_BUILDTIME
    DisplayName	= UPGRADE:MallornTreeLevel2
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK
	ResearchCompleteEvaEvent	= SiegeWorksUpgraded
End

Upgrade Upgrade_FountofCorruptionLevel3
    	Type           = OBJECT
    	BuildCost      = 600
    	BuildTime      = ELVEN_BARRACKS_LEVEL3_UPGRADE_BUILDTIME
    	DisplayName	= UPGRADE:MallornTreeLevel3
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK
	ResearchCompleteEvaEvent	= SiegeWorksUpgraded
End
//------------------- WotR upgrades used for hero revival during RTS plays ----------------------------------------

Upgrade Upgrade_WOTRCaHHero
	Type			= PLAYER
End

Upgrade Upgrade_WOTRHeroUnit1
	Type			= PLAYER
End

Upgrade Upgrade_WOTRHeroUnit2
	Type			= PLAYER
End

Upgrade Upgrade_WOTRHero1
	Type			= PLAYER
End

Upgrade Upgrade_WOTRHero2
	Type			= PLAYER
End

Upgrade Upgrade_WOTRHero3
	Type			= PLAYER
End

Upgrade Upgrade_WOTRHero4
	Type			= PLAYER
End

Upgrade Upgrade_WOTRHero5
	Type			= PLAYER
End

Upgrade Upgrade_WOTRHero6
	Type			= PLAYER
End

Upgrade Upgrade_WOTRHero7
	Type			= PLAYER
End

Upgrade Upgrade_WOTRHero8
	Type			= PLAYER
End

Upgrade Upgrade_WOTRHero9
	Type			= PLAYER
End

Upgrade Upgrade_WOTRHero10
	Type			= PLAYER
End

Upgrade Upgrade_WOTRHero11
	Type			= PLAYER
End

Upgrade Upgrade_WOTRHero12
	Type			= PLAYER
End

Upgrade Upgrade_DraftTowerWestfold
   Type            = OBJECT
    BuildCost      = 550
    BuildTime      = 30
	DisplayName		= UPGRADE:DraftTowerWestfold
End

Upgrade Upgrade_DraftTowerFirienholt
   Type            = OBJECT
    BuildCost      = 600
    BuildTime      = 35
	DisplayName		= UPGRADE:DraftTowerFirienholt
End

Upgrade Upgrade_DraftTowerEored
   Type            = OBJECT
    BuildCost      = 650
    BuildTime      = 40
	DisplayName		= UPGRADE:DraftTowerEored
End

Upgrade Upgrade_WildFortressGoblinTownTrigger
	Type			= OBJECT
	BuildCost		= 800
	BuildTime		= 30
	ResearchSound	= UpgradeGoblinFortressWebCocoon
	DisplayName		= Upgrade:FortressWebCocoon
	UpgradeFX        = FX_DwarvenFortressUpgrade
	ResearchCompleteEvaEvent   = UpgradeFortress
	;SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
	SkirmishAIHeuristic  = AI_UPGRADEHEURISTIC_IMPORTANT
End

Upgrade Upgrade_WildFortressGoblinTown
	Type			= OBJECT
	DisplayName	    	= Upgrade:FortressWebCocoon
End

Upgrade Upgrade_WildFortressNorthernWastes
	Type			= OBJECT
	BuildCost		= 1500
	BuildTime		= WILD_FORTRESS_WEBCOCOON_BUILDTIME
	ResearchSound	= UpgradeGoblinFortressWebCocoon
	DisplayName		= Upgrade:FortressWebCocoon
	UpgradeFX        = FX_DwarvenFortressUpgrade
	ResearchCompleteEvaEvent   = UpgradeFortress
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
	;SkirmishAIHeuristic  = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK
End

Upgrade Upgrade_WildFortressNorthernWastesTrigger
	Type			= PLAYER
	BuildCost		= 1500
	BuildTime		= WILD_FORTRESS_WEBCOCOON_BUILDTIME
	ResearchSound	= UpgradeGoblinFortressWebCocoon
	DisplayName		= Upgrade:FortressWebCocoon
	UpgradeFX        = FX_DwarvenFortressUpgrade
	ResearchCompleteEvaEvent   = UpgradeFortress
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
	;SkirmishAIHeuristic  = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK
End

Upgrade Upgrade_MineshaftTunnelCollapse
	Type			= OBJECT
	BuildCost		= 150
	BuildTime		= 30
	DisplayName		= UPGRADE:MineshaftTunnelCollapse
	Tooltip		= UPGRADE:ToolTipTunnelCollapse
End

Upgrade Upgrade_TowerDarkPresence
	Type			= OBJECT
	BuildCost		= 100
	BuildTime		= 10
	ResearchSound	= UpgradeGuldurFortressPaleTorches
End

Upgrade Upgrade_RohanStableLevel3
	Type			= OBJECT
	BuildCost		= 1000
	BuildTime		= 60	;GONDOR_STABLE_LEVEL3_UPGRADE_BUILDTIME
	DisplayName		= Upgrade:GondorStablesLevel3
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK
End

//----Lodge----
Upgrade Upgrade_WildLodgeLevel2
	Type			= OBJECT
	BuildCost		= 400
	BuildTime		= GOBLIN_CAVE_LEVEL2_UPGRADE_BUILDTIME
	DisplayName		= Upgrade:WildFissureLevel2
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK
End
Upgrade Upgrade_WildLodgeLevel3
	Type			= OBJECT
	BuildCost		= 600
	BuildTime		= 60
	DisplayName		= Upgrade:WildFissureLevel3
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK
End

//---- New Berserker Upgrades -----
Upgrade Upgrade_IsengardBerserkerMansblood
  Type               = OBJECT
  Tooltip            = TOOLTIP:Mansblood
  DisplayName        = UPGRADE:Mansblood
  ButtonImage        = BuildingNoArt
  Cursor             = WeaponUpgrade
  BuildTime          = GONDOR_PERSONAL_KNIGHT_SHIELD_BUILDTIME
  BuildCost          = 150
  StrategicIcon		 = AptStrategicUnitUpgradeArmor
End
Upgrade Upgrade_IsengardBerserkerThickSkin
  Type               = OBJECT
  Tooltip            = TOOLTIP:ThickSkin
  DisplayName        = UPGRADE:ThickSkin
  ButtonImage        = BuildingNoArt
  Cursor             = WeaponUpgrade
  BuildTime          = GONDOR_PERSONAL_KNIGHT_SHIELD_BUILDTIME
  BuildCost          = 300
  StrategicIcon		 = AptStrategicUnitUpgradeBlade
End
Upgrade Upgrade_IsengardBerserkerIronFist
  Type               = OBJECT
  Tooltip            = TOOLTIP:IronFist
  DisplayName        = UPGRADE:IronFist
  ButtonImage        = BuildingNoArt
  Cursor             = WeaponUpgrade
  BuildTime          = GONDOR_PERSONAL_KNIGHT_SHIELD_BUILDTIME
  BuildCost          = 450
  StrategicIcon		 = AptStrategicUnitUpgradeBannerCarrier
End
Upgrade Upgrade_GondorBodkinArrows
	DisplayName       = UPGRADE:GondorBodkinArrowUpgrade
  	Tooltip		= TOOLTIP:GondorBodkingArrows
	Type              = OBJECT
	BuildCost		= GONDOR_PERSONAL_FIRE_ARROWS_BUILDCOST
	BuildTime		= GONDOR_PERSONAL_FIRE_ARROWS_BUILDTIME
	ResearchSound	= UpgradeSilverThornArrows
	UpgradeFX		= FX_PorterDeliverFlamingArrows
	RequiredObjectFilter = ANY +GondorArcherRange +GondorForbiddenPool +GondorArcherRangeFoundation +IthilienStorehouse +IthilienStorehouseFoundation
	StrategicIcon	= AptStrategicUnitUpgradeArrow
End
Upgrade Upgrade_TechnologyGuldurBasicTraining
	DisplayName       	= UPGRADE:GuldurBasicTraining
	Type              	= PLAYER
	BuildCost		= MORDOR_TECH_BASIC_TRAINING_BUILDCOST
	BuildTime		= MORDOR_TECH_BASIC_TRAINING_BUILDTIME
	ResearchCompleteEvaEvent  = UpgradeBannerCarrierReady
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End
Upgrade Upgrade_GuldurBasicTraining
	DisplayName       	= UPGRADE:GuldurBasicTraining
	Type             	= OBJECT
	Tooltip			= UPGRADE:GuldurBasicTraining
	BuildCost		= 100
	BuildTime		= MORDOR_PERSONAL_BASIC_TRAINING_BUILDTIME
	;ResearchCompleteEvaEvent  = UpgradeBannerCarrierReady
	RequiredObjectFilter 	= NONE +GuldurGaol +GuldurGaolFoundation +GuldurGaol_DE +AngmarBastion +AngmarBastion_DE +AngmarBastionFoundation +AngmarBastionFoundation_DE
	StrategicIcon		= AptStrategicUnitUpgradeBannerCarrier
End
Upgrade Upgrade_TechnologyGuldurFireArrows
    DisplayName           = UPGRADE:GuldurFireArrowUpgrade
    Type                  = PLAYER
    BuildCost            = 1000  ;1500
    BuildTime            = MORDOR_TECH_FIRE_ARROWS_BUILDTIME
    ResearchCompleteEvaEvent    = UpgradeFlameArrowsReady
    ;SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
    SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
    ;conflictswith = upgradeobjectunderAIcontrol
End
;Upgrade Upgrade_TechnologyGuldurFireArrows_ForAI
;    DisplayName           = UPGRADE:GuldurFireArrowUpgrade
;    Type                  = PLAYER
;    BuildCost            = 1000  ;1500
;    BuildTime            = MORDOR_TECH_FIRE_ARROWS_BUILDTIME
;    ResearchCompleteEvaEvent    = UpgradeFlameArrowsReady
;    ;SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
;    SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
;End
Upgrade Upgrade_GuldurFireArrows
	DisplayName       		= UPGRADE:GuldurFireArrowUpgrade
	Type              		= OBJECT
	Tooltip					= TOOLTIP:GuldurFireArrow
	BuildCost				= 300   ;600
	BuildTime				= MORDOR_PERSONAL_FIRE_ARROWS_BUILDTIME
	ResearchSound			= UpgradeFlamingArrows
	UpgradeFX				= FX_PorterDeliverFlamingArrows
	RequiredObjectFilter 	= NONE +GuldurGaol +GuldurGaolFoundation +GuldurGaol_DE +AngmarBastion +AngmarBastion_DE +AngmarBastionFoundation +AngmarBastionFoundation_DE
	StrategicIcon			= AptStrategicUnitUpgradeArrow
End
Upgrade Upgrade_GuldurFortressBatCloud
	Type			= OBJECT
	BuildCost		= 500 ;300
	BuildTime		= 15
	ResearchSound	= UpgradeGuldurFortressSwarmofBats   ;UpgradeGoblinFortressBatCloud
	DisplayName		= Upgrade:GuldurFortressBatCloud
	UpgradeFX        = FX_GuldurFortressUpgrade
	ResearchCompleteEvaEvent   = UpgradeFortress
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End
Upgrade Upgrade_GuldurFortressFireArrowsTrigger
	Type			= OBJECT
	BuildCost		= 1000
	BuildTime		= 30
	ResearchSound	= UpgradeGuldurFortressPaleTorches   ;UpgradeGoblinFortressFireArrows
	DisplayName		= Upgrade:GuldurFortressFireArrows
	UpgradeFX        = FX_GuldurFortressUpgrade
	ResearchCompleteEvaEvent   = UpgradeFortress
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End
Upgrade Upgrade_GuldurFortressPalantir
	Type				= OBJECT
	BuildCost			= 600
	BuildTime			= 15
	DisplayName			= UPGRADE:FortressGuldurPalantir
	UpgradeFX        	= FX_GuldurFortressUpgrade
	ResearchSound		= GuldurFortressUpgradeEffect  ;UpgradeElfFortressBlessedMist
	ResearchCompleteEvaEvent   = UpgradeFortress
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End
Upgrade Upgrade_GuldurFortressEncroachment
	Type				= OBJECT
	BuildCost			= 800 ;600   ;800
	BuildTime			= 15
	DisplayName			= UPGRADE:FortressGuldurEncroachment
	UpgradeFX        	= FX_GuldurFortressUpgrade
	ResearchSound		= GuldurFortressUpgradeEffect  ;UpgradeElfFortressBlessedMist
	ResearchCompleteEvaEvent   = UpgradeFortress
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End
Upgrade Upgrade_GuldurFortressBlight
	Type				= OBJECT
	BuildCost			= 1500	;1000  ;800
	BuildTime			= 30  ;15
	DisplayName			= UPGRADE:FortressGuldurBlight
	UpgradeFX        	= FX_GuldurFortressUpgrade
	ResearchSound		= UpgradeGuldurFortressBlight  ;UpgradeElfFortressBlessedMist
	ResearchCompleteEvaEvent   = UpgradeFortress
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End
Upgrade Upgrade_GuldurFortressSorcery
	Type				= OBJECT
	BuildCost			= 2000	;1500
	BuildTime			= 60  ;15
	DisplayName			= UPGRADE:FortressGuldurSorcery
	UpgradeFX        	= FX_GuldurFortressUpgrade
	ResearchSound		= GuldurFortressUpgradeEffect  ;UpgradeElfFortressBlessedMist
	ResearchCompleteEvaEvent   = UpgradeFortress
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End
Upgrade Upgrade_TechnologyGuldurNecromancy
	DisplayName       	= UPGRADE:GuldurNecromancy
	Type              	= PLAYER
	BuildCost			= 1500
	BuildTime			= GONDOR_TECH_FIRE_STONES_BUILDTIME
	ResearchSound		= UpgradeGuldurNecromancyResearch   ;CampRivendellElfLibraryUpgrade
	;ResearchCompleteEvaEvent	= UpgradeRivendellLibrary
End
Upgrade Upgrade_GuldurGreaterBlight
	DisplayName       	= UPGRADE:GuldurGreaterBlight
	Type              	= OBJECT
	BuildCost			= 1200
	BuildTime			= GONDOR_TECH_FIRE_STONES_BUILDTIME
	ResearchSound		= UpgradeGuldurFortressBlight  ;CampRivendellElfLibraryUpgrade
	ResearchCompleteEvaEvent	= UpgradeGreaterBlight
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End
Upgrade Upgrade_HobbitErebor
	Type			= PLAYER
	ResearchSound		= SpellEreborEraSwitch
	;ResearchCompleteEvaEvent	= UpgradeEreborEraSwitch
End
Upgrade Upgrade_HobbitEreborAI
	Type			= PLAYER
End
Upgrade Upgrade_LotRErebor
	Type			= PLAYER
	ResearchSound		= SpellEreborEraSwitch
	;ResearchCompleteEvaEvent	= UpgradeEreborEraSwitch
End
Upgrade Upgrade_LotREreborAI
	Type			= PLAYER
End
Upgrade Upgrade_GuldurCorruptedTree
	Type              	= OBJECT
End
Upgrade Upgrade_GuldurImprisoned
	Type              	= OBJECT
End
Upgrade Upgrade_GuldurRestlessBones
	Type			= OBJECT
	BuildCost		= 150
	BuildTime		= 5
	DisplayName		= UPGRADE:GuldurRestlessBones
	Tooltip			= UPGRADE:ToolTipGuldurRestlessBones
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End
Upgrade Upgrade_GuldurTowerHiddenSentry
	Type			= OBJECT
	BuildCost		= 200 ;WILD_SENTRY_TOWER_ARROW_UPGRADE_BUILDCOST
	BuildTime		= WILD_SENTRY_TOWER_ARROW_UPGRADE_BUILDTIME
	DisplayName		= Upgrade:HiddenSentry
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
	ResearchSound	= GuldurFortressUpgradeEffect
End
Upgrade UpgradeGuldurGaolLevel2
	Type			= OBJECT
	BuildCost		= 600	;500  ;ANGMAR_BARRACKS_LVL2_UPGRADE_COST
	BuildTime		= 45	;ANGMAR_BARRACKS_LVL2_UPGRADE_TIME
	DisplayName		= UPGRADE:AngmarBarracksLevel2
	ResearchCompleteEvaEvent	= UpgradeGaol ;BarracksUpgraded
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK
End
;-----------------------------------------------------------------------------
; Mirkwood Upgrades
;-----------------------------------------------------------------------------
Upgrade Upgrade_TechnologyMirkwoodBasicTraining
	DisplayName       = UPGRADE:RohanBasicTraining
	Type              = PLAYER
	BuildCost		= GONDOR_TECH_BASIC_TRAINING_BUILDCOST
	BuildTime		= GONDOR_TECH_BASIC_TRAINING_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeBannerCarrierTechnologyReady
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End
Upgrade Upgrade_MirkwoodBasicTraining
	DisplayName       = UPGRADE:MirkwoodBasicTraining
	Type              = OBJECT
	Tooltip		= TOOLTIP:MirkwoodBasicTraining
	BuildCost		= 100;GONDOR_PERSONAL_BASIC_TRAINING_BUILDCOST
	BuildTime		= GONDOR_PERSONAL_BASIC_TRAINING_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeBannerCarrierReady
	RequiredObjectFilter = ANY +MirkwoodTreasury +MirkwoodTreasuryFoundation +DorwinionMarket +DorwinionMarketFoundation
	StrategicIcon	= AptStrategicUnitUpgradeBannerCarrier
End
Upgrade Upgrade_TechnologyMirkwoodSilverthornArrows
	DisplayName       = UPGRADE:MirkwoodFlamingArrows
	Type              = PLAYER
	BuildCost		= 1000	;GONDOR_TECH_FIRE_ARROWS_BUILDCOST
	BuildTime		= GONDOR_TECH_FIRE_ARROWS_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeFlameArrowsReady
	;SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End
Upgrade Upgrade_MirkwoodSilverthornArrows
	DisplayName       = UPGRADE:MirkwoodFlamingArrows
  	Tooltip		= TOOLTIP:MirkwoodFlamingArrows
	Type              = OBJECT
	BuildCost		= GONDOR_PERSONAL_FIRE_ARROWS_BUILDCOST
	BuildTime		= GONDOR_PERSONAL_FIRE_ARROWS_BUILDTIME
	ResearchSound	= UpgradeSilverThornArrows
	UpgradeFX		= FX_PorterDeliverFlamingArrows
	RequiredObjectFilter = ANY +MirkwoodTreasury +MirkwoodTreasuryFoundation +DorwinionMarket +DorwinionMarketFoundation
	StrategicIcon	= AptStrategicUnitUpgradeArrow
End
Upgrade Upgrade_TechnologyMirkwoodForgedBlades
	DisplayName       = UPGRADE:MirkwoodForgedBlades
	Type              = PLAYER
	BuildCost		= 1000	;GONDOR_TECH_FORGED_BLADES_BUILDCOST
	BuildTime		= GONDOR_TECH_FORGED_BLADES_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeForgedBladesReady
	;SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End
Upgrade Upgrade_MirkwoodForgedBlades
	DisplayName       = UPGRADE:MirkwoodForgedBlades
  	Tooltip		= TOOLTIP:MirkwoodForgedBlades
	Type              = OBJECT
	BuildCost		= GONDOR_PERSONAL_FORGED_BLADES_BUILDCOST
	BuildTime		= GONDOR_PERSONAL_FORGED_BLADES_BUILDTIME
	ResearchSound	= UpgradeForgedBlades
	UpgradeFX		= FX_PorterDeliverForgedBlades
	RequiredObjectFilter = ANY +MirkwoodTreasury +MirkwoodTreasuryFoundation +DorwinionMarket +DorwinionMarketFoundation
	StrategicIcon	= AptStrategicUnitUpgradeBlade
End
Upgrade Upgrade_TechnologySindarinHeavyArmor
	DisplayName     = UPGRADE:ElvenHeavyArmor
	Tooltip			= TOOLTIP:SindarinHeavyArmor
	Type              = PLAYER
	BuildCost		= 1500	;GONDOR_TECH_FORGED_BLADES_BUILDCOST
	BuildTime		= GONDOR_TECH_FORGED_BLADES_BUILDTIME
	;SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End
Upgrade Upgrade_SindarinHeavyArmor
	DisplayName     = UPGRADE:ElvenHeavyArmor
	Tooltip			= TOOLTIP:SindarinHeavyArmor
	Type            = OBJECT
	ResearchSound	= UpgradeHeavyArmor
	UpgradeFX		= FX_PorterDeliverHeavyArmor
	StrategicIcon	= AptStrategicUnitUpgradeArmor
End
Upgrade Upgrade_GuldurInfestationEnabled
	Type              	= OBJECT
End
Upgrade Upgrade_CursedTreasureActivated
	Type			= OBJECT
End
Upgrade Upgrade_CursedTreasureDesactivated
	Type			= OBJECT
End
Upgrade Upgrade_LoyalCompanions
  Type               = OBJECT
  ResearchSound		 = WoodmenVoiceLoyalCompanions ;UpgradeFlamingArrows
  Tooltip            = TOOLTIP:LoyalCompanions
  DisplayName        = UPGRADE:LoyalCompanions
  ButtonImage        = BuildingNoArt
  Cursor             = WeaponUpgrade
  BuildTime          = GONDOR_PERSONAL_KNIGHT_SHIELD_BUILDTIME
  BuildCost          = 150
End
Upgrade Upgrade_LossothLoyalCompanions
  Type               = OBJECT
  ResearchSound		 = LossothVoiceSummonHounds ;UpgradeFlamingArrows
  Tooltip            = TOOLTIP:LoyalCompanions
  DisplayName        = UPGRADE:LoyalCompanions
  ButtonImage        = BuildingNoArt
  Cursor             = WeaponUpgrade
  BuildTime          = GONDOR_PERSONAL_KNIGHT_SHIELD_BUILDTIME
  BuildCost          = 150
End
Upgrade Upgrade_BlessingofAldaron
  Type               = OBJECT
  Tooltip            = TOOLTIP:BlessingofAldaron
  DisplayName        = UPGRADE:BlessingofAldaron
  ButtonImage        = BuildingNoArt
  Cursor             = WeaponUpgrade
  BuildTime          = GONDOR_PERSONAL_KNIGHT_SHIELD_BUILDTIME
  BuildCost          = 200
  SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
  StrategicIcon		 = AptStrategicUnitUpgradeBannerCarrier
End
Upgrade Upgrade_WardingStones
  Type               = OBJECT
  Tooltip            = TOOLTIP:WardingStones
  DisplayName        = UPGRADE:WardingStones
  ButtonImage        = BuildingNoArt
  Cursor             = WeaponUpgrade
  BuildTime          = GONDOR_PERSONAL_KNIGHT_SHIELD_BUILDTIME
  BuildCost          = 200
  StrategicIcon		 = AptStrategicUnitUpgradeBlade
End
Upgrade Upgrade_RitualofOak
  Type               = OBJECT
  Tooltip            = TOOLTIP:RitualofOak
  DisplayName        = UPGRADE:RitualofOak
  ButtonImage        = BuildingNoArt
  Cursor             = WeaponUpgrade
  BuildTime          = GONDOR_PERSONAL_KNIGHT_SHIELD_BUILDTIME
  BuildCost          = 500 ;300
End
Upgrade Upgrade_PotionofPotency
  Type               = OBJECT
  Tooltip            = TOOLTIP:PotionofPotency
  DisplayName        = UPGRADE:PotionofPotency
  ButtonImage        = BuildingNoArt
  Cursor             = WeaponUpgrade
  BuildTime          = GONDOR_PERSONAL_KNIGHT_SHIELD_BUILDTIME
  BuildCost          = 800
  StrategicIcon		 = AptStrategicUnitUpgradeArmor
End
Upgrade Upgrade_MirkwoodFortressFeastofStarlight
	Type			= OBJECT
	BuildCost		= 800 ;MEN_FORTRESS_HOUSES_OF_HEALING_BUILDCOST
	BuildTime		= MEN_FORTRESS_HOUSES_OF_HEALING_BUILDTIME
	DisplayName		= Upgrade:FortressHouseofHealing
	UpgradeFX        = FX_DwarvenFortressUpgrade
	ResearchSound	= UpgradeMirkwoodFortressFeastofStarlight
	ResearchCompleteEvaEvent   = UpgradeFeastofStarlight  ;UpgradeFortress
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End
Upgrade Upgrade_MirkwoodFortressEmperorProtection
	Type			= OBJECT
	BuildCost		= 1000
	BuildTime		= ELVEN_BLESSEDMIST_BUILDTIME
	DisplayName		= UPGRADE:FortressBlessedMist
	UpgradeFX       = FX_MirkwoodFortressUpgradeProtection
	ResearchSound	= UpgradeMirkwoodFortressEmperorsProtection
	ResearchCompleteEvaEvent   = UpgradeFortress
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End
Upgrade Upgrade_MirkwoodFortressGarrison
	Type			= OBJECT
	BuildCost		= 1500
	BuildTime		= ELVEN_SILVERTHORNARROWS_BUILTIME
	DisplayName		= UPGRADE:FortressBlessedMist
	UpgradeFX       = FX_DwarvenFortressUpgrade
	ResearchSound	= UpgradeMirkwoodFortressSilvanGarrison
	ResearchCompleteEvaEvent   = UpgradeFortress
	;SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End
Upgrade Upgrade_MirkwoodFortressOromeTribute
	Type			= OBJECT
	BuildCost		= 1500
	BuildTime		= ELVEN_EAGLENEST_BUILDTIME
	DisplayName		= UPGRADE:FortressBlessedMist
	UpgradeFX       = FX_DwarvenFortressUpgrade
	ResearchSound	= UpgradeMirkwoodFortressOrome
	ResearchCompleteEvaEvent   = UpgradeTributetoOrome ;UpgradeFortress
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK
	;SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End
Upgrade Upgrade_BeorningBeekeeping
  Type               = OBJECT
  Tooltip            = TOOLTIP:Beekeeping
  BuildTime          = 45
  BuildCost          = 500
  ResearchCompleteEvaEvent   = BeekeepingUpgraded
  ResearchSound	= UpgradeBeorningCabinBeekeeping
End
Upgrade Upgrade_BeorningLodgeLevel2
	Type			= OBJECT
	BuildCost		= 500
	BuildTime		= 900
	ResearchCompleteEvaEvent	= ArnorArcheryRangeUpgraded
	DisplayName		= Upgrade:ArnorArcheryRangeLevel2
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK
End
Upgrade Upgrade_BeorningLodgeLevel3
	Type			= OBJECT
	BuildCost		= GONDOR_ARCHERYRANGE_LEVEL3_UPGRADE_COST
	BuildTime		= 1500
	ResearchCompleteEvaEvent	= ArnorArcheryRangeUpgraded
	DisplayName		= Upgrade:ArnorArcheryRangeLevel3
End
Upgrade Upgrade_MirkwoodFortressCrystalMoat
	Type			= OBJECT
	BuildCost		= 1500 ;ELVEN_CRYSTALMOAT_BUILDCOST
	BuildTime		= MEN_FORTRESS_NUMENORIAN_STONEWORK_BUILDTIME
	DisplayName	= UPGRADE:FortressCrystalMoat
	UpgradeFX        = FX_DwarvenFortressUpgrade
	ResearchSound	= UpgradeMirkwoodFortressCrystalMoat ;UpgradeElfFortressCrystalMoat
	ResearchCompleteEvaEvent   = UpgradeFortress
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End
Upgrade Upgrade_MirkwoodFortressBanners
	Type			= OBJECT
	BuildCost		= ELVEN_ENCHANTEDANVIL_BUILDCOST
	BuildTime		= ELVEN_ENCHANTEDANVIL_BUILDTIME
	DisplayName	= UPGRADE:FortressEnchantedAnvil
	UpgradeFX        = FX_DwarvenFortressUpgrade
	ResearchSound	= UpgradeMirkwoodFortressBanners
	ResearchCompleteEvaEvent   = UpgradeFortress
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End
Upgrade Upgrade_AIRetreatON
	Type			= OBJECT
End
Upgrade Upgrade_AIRetreatOFF
	Type			= OBJECT
End
Upgrade Upgrade_NecromancerRingHero
	Type	= PLAYER
End
Upgrade Upgrade_GreyCompanyFireArrows
	DisplayName       = UPGRADE:GondorFireArrowUpgrade
  	Tooltip			= TOOLTIP:GondorFlamingArrows
	Type              = OBJECT
	BuildCost		= GONDOR_PERSONAL_FIRE_ARROWS_BUILDCOST
	BuildTime		= GONDOR_PERSONAL_FIRE_ARROWS_BUILDTIME
	ResearchSound	= UpgradeFlamingArrows
	UpgradeFX		= FX_PorterDeliverFlamingArrows
	RequiredObjectFilter = ANY +GondorForge +GondorForgeFoundation
	StrategicIcon	= AptStrategicUnitUpgradeArrow
End
Upgrade Upgrade_TechnologyGreyCompanyFireArrows
	DisplayName       = UPGRADE:GondorFireArrowUpgrade
	Type              = PLAYER
	BuildCost		= GONDOR_TECH_FIRE_ARROWS_BUILDCOST
	BuildTime		= GONDOR_TECH_FIRE_ARROWS_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeFlameArrowsReady
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End
Upgrade Upgrade_RohanPurchaseDraft
	DisplayName     = UPGRADE:GondorHeavyArmor
	;Tooltip		= TOOLTIP:GondorHeavyArmor
	Type              = OBJECT
	BuildCost		= 100
	BuildTime		= GONDOR_PERSONAL_HEAVY_ARMOR_BUILDTIME
	ResearchSound	= PeasantVoiceDraftUpgrade
	UpgradeFX		= FX_PorterDeliverHeavyArmor
End
Upgrade Upgrade_HaradLiesAndThreats
    DisplayName           = UPGRADE:MordorFireArrowUpgrade
    Type                  = PLAYER
    BuildCost            = 650
    BuildTime            = MORDOR_TECH_FIRE_ARROWS_BUILDTIME
;    ResearchCompleteEvaEvent    = UpgradeFlameArrowsReady
    ;SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
    SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
    ;conflictswith = upgradeobjectunderAIcontrol
	ResearchSound	= UpgradeHaradLiesandThreats
End
Upgrade Upgrade_PurchaseFellBeast
	Type            = OBJECT
	BuildCost		= 1500
	BuildTime		= 10
End
Upgrade Upgrade_PurchaseNumenTreb
	Type			= OBJECT
	BuildCost		= 1200
	BuildTime		= 30
	DisplayName		= Upgrade:ReplacementWeapon
End

Upgrade Upgrade_GiftsofLorien
	Type            = OBJECT
	DisplayName		= UPGRADE:GiftsofLorien
	Tooltip		= TOOLTIP:GiftsofLorien
End

;---------Tower Defence Upgrades
;Upgrade Upgrade_TDGoodMeleeBanners
;	Type              = OBJECT
;	BuildCost		= 150
;	BuildTime		= 0
;End
;Upgrade Upgrade_TDGoodMeleeBlades
;	Type              = OBJECT
;	BuildCost		= 200
;	BuildTime		= 0
;	ResearchSound	= UpgradeForgedBlades
;	UpgradeFX		= FX_PorterDeliverForgedBlades
;End
;Upgrade Upgrade_TDGoodMeleeArmor
;	Type              = OBJECT
;	BuildCost		= 200
;	BuildTime		= 0
;	ResearchSound	= UpgradeHeavyArmor
;	UpgradeFX		= FX_PorterDeliverHeavyArmor
;End
;
;Upgrade Upgrade_TDStructureRank2
;	Type              = OBJECT
;	BuildCost		= 300
;	BuildTime		= 0
;End
;
;Upgrade Upgrade_TDStructureRank3
;	Type              = OBJECT
;	BuildCost		= 400
;	BuildTime		= 0
;End
;
;Upgrade Upgrade_TDStructureRank4A
;	Type              = OBJECT
;	BuildCost		= 500
;	BuildTime		= 0
;End
;
;Upgrade Upgrade_TDStructureRank4B
;	Type              = OBJECT
;	BuildCost		= 500
;	BuildTime		= 0
;End
Upgrade Upgrade_MarketplaceUpgradeGrandHarvestLorien
	BuildCost		= 800
	BuildTime		= 60
	DisplayName     = UPGRADE:MarketplaceUpgradeGrandHarvestLorien
	Type            = PLAYER
	ResearchCompleteEvaEvent	= UpgradeMirrorofGaladrielThingsThatWillBe
End
Upgrade Upgrade_ThingsThatWere
	Type			= PLAYER
	BuildCost		= 600 ;MEN_FORTRESS_BANNERS_BUILDCOST
	BuildTime		= 30 ;MEN_FORTRESS_BANNERS_BUILDTIME
	DisplayName		= UPGRADE:ThingsthatWere
	ResearchCompleteEvaEvent	= UpgradeMirrorofGaladriel
	;UpgradeFX        = FX_DwarvenFortressUpgrade
	;ResearchSound	= UpgradeMenFortressBanner
	;ResearchCompleteEvaEvent   = UpgradeFortress
	;SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End
Upgrade Upgrade_ThingsThatAre
	Type			= OBJECT
	BuildCost		= 600 ;MEN_FORTRESS_BANNERS_BUILDCOST
	BuildTime		= 30 ;MEN_FORTRESS_BANNERS_BUILDTIME
	DisplayName		= UPGRADE:ThingsthatAre
	ResearchCompleteEvaEvent	= UpgradeMirrorofGaladriel
End
Upgrade Upgrade_MallornTreeLevel2
   Type            = OBJECT
    BuildCost      = 250
    BuildTime      = ELVEN_BARRACKS_LEVEL2_UPGRADE_BUILDTIME
    DisplayName	= UPGRADE:MallornTreeLevel2
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK
	ResearchCompleteEvaEvent	= PrisonGuardUpgraded
End

Upgrade Upgrade_MallornTreeLevel3
    	Type           = OBJECT
    	BuildCost      = 500
    	BuildTime      = ELVEN_BARRACKS_LEVEL3_UPGRADE_BUILDTIME
    	DisplayName	= UPGRADE:MallornTreeLevel3
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK
		ResearchCompleteEvaEvent	= GenericLothlorienRank
End
Upgrade Upgrade_MallornTreeBarracks
  Type               = OBJECT
  Tooltip            = TOOLTIP:Beekeeping
  BuildTime          = 20
  BuildCost          = 200
  ResearchCompleteEvaEvent   = MallornGaladhrimGarrison
  UpgradeFX        = FX_DwarvenFortressUpgrade
  ResearchSound	= UpgradeMallornTreeBarracks
End
Upgrade Upgrade_MallornTreePasture
  Type               = OBJECT
  Tooltip            = TOOLTIP:Beekeeping
  BuildTime          = 25
  BuildCost          = 400
  ResearchCompleteEvaEvent   = MallornPasture
  UpgradeFX        = FX_DwarvenFortressUpgrade
  ResearchSound	= UpgradeMallornTreeGreenPasture
End
Upgrade Upgrade_MallornTreeStorage
  Type               = OBJECT
  Tooltip            = TOOLTIP:Beekeeping
  BuildTime          = 25
  BuildCost          = 300
  ResearchCompleteEvaEvent   = MallornStorehouse
  UpgradeFX        = FX_DwarvenFortressUpgrade
  ResearchSound	= UpgradeMallornTreeStorehouse
End
Upgrade Upgrade_MallornTreeNiphredil
  Type               = OBJECT
  Tooltip            = TOOLTIP:NephredilBloom
  BuildTime          = 10
  BuildCost          = 125 ;500
  ResearchCompleteEvaEvent   = MallornNiphredilBloom
  UpgradeFX        = FX_DwarvenFortressUpgrade
  ResearchSound	= UpgradeMallornTreeNiphredil
End

Upgrade Upgrade_MallornTreeNiphredilAI
  Type               = OBJECT
  Tooltip            = TOOLTIP:NephredilBloom
  BuildTime          = 10
  BuildCost          = 0 ; 500
  ResearchCompleteEvaEvent   = MallornNiphredilBloom
  UpgradeFX        = FX_DwarvenFortressUpgrade
  ResearchSound	= UpgradeMallornTreeNiphredil
End
Upgrade Upgrade_MallornTreeStarLitLanterns
	DisplayName       = UPGRADE:DenethorLevel10
	Type              = OBJECT
	Tooltip		= TOOLTIP:StarLitLanterns
	BuildCost		= 150 ;100 ;600
	BuildTime		= 8  ;40
	;NoUpgradeDiscount = Yes
  ResearchCompleteEvaEvent   = MallornTreeLanterns
  UpgradeFX        = FX_DwarvenFortressUpgrade
  ResearchSound	= UpgradeLorienStarLitLanterns
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End
Upgrade Upgrade_NimrodelWaters
	Type			= OBJECT
	BuildCost		= 300 ;375 ;500
	BuildTime		= 45
	DisplayName		= UPGRADE:NimrodelWaters
	Tooltip		= UPGRADE:ToolTipNimrodelWaters
	ResearchCompleteEvaEvent	= MallornTreeWaters ;UpgradeWatersofNimrodel
	UpgradeFX        = FX_DwarvenFortressUpgrade
	ResearchSound	= UpgradeLorienBlessedWaters
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End
Upgrade Upgrade_MallornTreeRoots
	Type			= OBJECT
	BuildCost		= 300 ;GOBLIN_FISSURE_LEVEL3_UPGRADE_COST
	BuildTime		= 8 ;GOBLIN_FISSURE_LEVEL3_UPGRADE_BUILDTIME
	DisplayName		= Upgrade:FireWyrmLairLevel3
	Tooltip		= TOOLTIP:MallornRoots
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
	ResearchCompleteEvaEvent	= MallornTreeRoots
	UpgradeFX        = FX_DwarvenFortressUpgrade
	ResearchSound	= UpgradeLorienMallornRoots
End
Upgrade Upgrade_MallornTreeSilvanLevy
	Type			= OBJECT
	BuildCost		= 500 ;GOBLIN_FISSURE_LEVEL3_UPGRADE_COST
	BuildTime		= 8 ;GOBLIN_FISSURE_LEVEL3_UPGRADE_BUILDTIME
	DisplayName		= Upgrade:FireWyrmLairLevel3
	Tooltip		= TOOLTIP:SilvanLevy
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
	ResearchCompleteEvaEvent	= MallornTreeSilvanLevy
	UpgradeFX        = FX_DwarvenFortressUpgrade
	ResearchSound	= UpgradeLorienSilvanLevy
End
Upgrade Upgrade_TalanHiddenVolley
	DisplayName       = UPGRADE:DenethorLevel10
	Type              = OBJECT
	Tooltip		= TOOLTIP:HiddenVolley
	BuildCost		= 300 ;600
	BuildTime		= 10  ;40
	;NoUpgradeDiscount = Yes
  ResearchCompleteEvaEvent   = TalanHiddenVoley
  UpgradeFX        = FX_DwarvenFortressUpgrade
  ResearchSound	= UpgradeLorienHiddenVolley
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End
Upgrade Upgrade_TalanTenebrousBoughs
	DisplayName       = UPGRADE:DenethorLevel10
	Type              = OBJECT
	Tooltip		= TOOLTIP:TenebrousBoughs
	BuildCost		= 400 ;600
	BuildTime		= 10  ;40
	;NoUpgradeDiscount = Yes
  ResearchCompleteEvaEvent   = TalanTenebrousBoughs
  UpgradeFX        = FX_DwarvenFortressUpgrade
  ResearchSound	= UpgradeFletTenebrousBoughs
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End
Upgrade Upgrade_TalanMarchwardenGarrison
	DisplayName       = UPGRADE:DenethorLevel10
	Type              = OBJECT
	Tooltip		= TOOLTIP:MarchwardenGarrison
	BuildCost		= 500 ;600
	BuildTime		= 10  ;40
	;NoUpgradeDiscount = Yes
  ResearchCompleteEvaEvent   = TalanMarchwardenGarrison
  UpgradeFX        = FX_DwarvenFortressUpgrade
  ResearchSound	= UpgradeFletMarchwardenGarrison
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End
Upgrade Upgrade_TalanNiphredilBloom
	DisplayName       = UPGRADE:DenethorLevel10
	Type              = OBJECT
	Tooltip		= TOOLTIP:NephredilBloom
	BuildCost		= 400 ;150
	BuildTime		= 20  ;40
	;NoUpgradeDiscount = Yes
  ResearchCompleteEvaEvent   = TalanNiphredilBloom
  UpgradeFX        = FX_DwarvenFortressUpgrade
  ResearchSound	= UpgradeFletNiphredil
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End
Upgrade Upgrade_TalanStatue
	DisplayName       = UPGRADE:DenethorLevel10
	Type              = OBJECT
	;Tooltip		= TOOLTIP:DenethorLevel10
	BuildCost		= 300 ;150
	BuildTime		= 30  ;40
	;NoUpgradeDiscount = Yes
  ResearchCompleteEvaEvent   = TalanBorderFences
  UpgradeFX        = FX_DwarvenFortressUpgrade
  ResearchSound	= UpgradeFletStatue
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End
Upgrade Upgrade_UnburiedWightlvl4
	DisplayName       = UPGRADE:DenethorLevel6
	Type              = OBJECT
	;Tooltip		= TOOLTIP:DenethorLevel6
	BuildCost		= 350
	BuildTime		= 20
	NoUpgradeDiscount = Yes
End
Upgrade Upgrade_UnburiedWightlvl5
	DisplayName       = UPGRADE:DenethorLevel6
	Type              = OBJECT
	;Tooltip		= TOOLTIP:DenethorLevel6
	BuildCost		= 400
	BuildTime		= 20
	NoUpgradeDiscount = Yes
End
Upgrade Upgrade_BuildArmySwords
	Type              = OBJECT
	BuildCost		= 0
	BuildTime		= 1
	NoUpgradeDiscount = Yes
End
Upgrade Upgrade_BuildArmyPikes
	Type              = OBJECT
	BuildCost		= 0
	BuildTime		= 1
	NoUpgradeDiscount = Yes
End
Upgrade Upgrade_BuildArmyBows
	Type              = OBJECT
	BuildCost		= 0
	BuildTime		= 1
	NoUpgradeDiscount = Yes
End
Upgrade Upgrade_SwornAllegianceAntiObject
	Type              = OBJECT
	BuildCost		= 0
	BuildTime		= 1
	NoUpgradeDiscount = Yes
End
Upgrade Upgrade_SwornAllegianceObject
	Type              = OBJECT
	BuildCost		= 0
	BuildTime		= 1
	NoUpgradeDiscount = Yes
End

Upgrade Upgrade_DGSpiderLairLevel2
	Type			= OBJECT
	BuildCost		= 400
	BuildTime		= 30
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK
End

Upgrade Upgrade_GrantRekindledHearths
	Type			= PLAYER
End

Upgrade Upgrade_RhunFortressWaysOfWar
	Type			= OBJECT
	BuildCost		= 1500	;MORDOR_GORGOROTHSPIRE_BUILDCOST
	BuildTime		= MORDOR_GORGOROTHSPIRE_BUILDTIME
	DisplayName	    = UPGRADE:FortressGorgonothSpire
	UpgradeFX        = FX_DwarvenFortressUpgrade
	ResearchSound	= WaysOfWarResearch
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK
End

Upgrade Upgrade_TechnologyGondorBodkinArrows
	DisplayName       = UPGRADE:GondorFireArrowUpgrade
	Type              = PLAYER
	BuildCost		= GONDOR_TECH_FIRE_ARROWS_BUILDCOST
	BuildTime		= GONDOR_TECH_FIRE_ARROWS_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeBodkinArrowsReady
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End