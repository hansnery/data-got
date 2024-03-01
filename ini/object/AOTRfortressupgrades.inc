//;;,;; Fortress granteconomybonus behaviors moved to this file for 2.1, now that we're adding Scavenger too.
//;;,;; It'll be much easier to maintain and allow us to change all our Fortresses at once :)

	Behavior = AttributeModifierAuraUpdate ModuleTag_Arkenstonehandout
		StartsActive		= No ;Yes ;If no, requires upgrade to turn on.
		BonusName		= ArkenstonePassiveHandout
		TriggeredBy		= Upgrade_FortressMapUpgrade ;Upgrade_DwarvenFortressMightyCatapult
		;RefreshDelay		= 2000
		Range			= 99999
		ObjectFilter	= ANY +HERO +STRUCTURE +PORTER;+STRUCTURE
	End	
	
	Behavior = AttributeModifierAuraUpdate ModuleTag_GIVETHEDAMNBUILDERSTHEIRBUTTON
		StartsActive			= No ;If no, requires upgrade to turn on.
		BonusName			= HasIsenSiegeWorks
		TriggeredBy			= Upgrade_FortressMapUpgrade ;Upgrade_DwarvenFortressMightyCatapult
		RefreshDelay			= 2000
		Range				= 99999
		ObjectFilter			= ANY +STRUCTURE +PORTER ;;+FireWyrmLair
	End
	
	Behavior = AttributeModifierAuraUpdate ModuleTag_SummonedGundabadUnitsArkenstone
		StartsActive			= No ;Yes ;If no, requires upgrade to turn on.
		BonusName			= DragonnestUpgradePassout
		TriggeredBy			= Upgrade_FortressMapUpgrade ;Upgrade_DwarvenFortressMightyCatapult
		RefreshDelay			= 2000
		Range				= 99999
		ObjectFilter			= ANY +STRUCTURE +PORTER ;;+FireWyrmLair
	End
	
	;-----------------------------------------------------------------
	;   BREEDING GROUND
	;-----------------------------------------------------------------
 	Behavior = ObjectCreationUpgrade MakeTheIdleVultures
		TriggeredBy		= Upgrade_MordorFaction  Upgrade_MordorFortressFireArrowsTrigger
		RequiresAllTriggers = Yes	
		Delay			= 32.0
		DestroyWhenSold = Yes
		ThingToSpawn	= MordorIdleFellbeast
		Offset			= X:0 Y:0 Z:200
		FadeInTime		= 8000   ;35000
		Angle			= 240
	End
	Behavior = UnpauseSpecialPowerUpgrade ModuleTag_HeadhunterEnabler
        SpecialPowerTemplate       = SpecialAbilityMountFellbeast
        TriggeredBy                = Upgrade_MordorFaction  Upgrade_MordorFortressFireArrowsTrigger
		RequiresAllTriggers = Yes
    End
    Behavior = SpecialPowerModule ModuleTag_HeadhunterStarter
        SpecialPowerTemplate       = SpecialAbilityMountFellbeast
        StartsPaused               = Yes
        UpdateModuleStartsAttack   = Yes
				RequirementsFilterMPSkirmish = ANY +MordorWitchKing
    End
	 Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_Headhunter
        SpecialPowerTemplate       = SpecialAbilityMountFellbeast
        WhichSpecialWeapon         = 1
        SkipContinue               = Yes
        FreezeAfterTriggerDuration = 100 ; Hold AI for this long after we fire.
        UnpackTime                 = 700
        PreparationTime            = 1
        ;PersistentPrepTime        = 1000
        PackTime                   = 100
			;	NeedCollisionBeforeTrigger = No
		;		ApproachUntilMembersInRange = No
			;	ApproachRequiresLOS = No
			;	IgnoreFacingCheck = Yes
				Instant = Yes
        AwardXPForTriggering       = 0
        StartAbilityRange          = 99999999 ;400
        SpecialWeapon              = MountFellbeastWeapon
    End

	;Behavior = AttributeModifierAuraUpdate ModuleTag_MorgulSpireNa
	;	StartsActive		= No
	;	BonusName			= NazgulFellbeastEnabler
	;	TriggeredBy			= Upgrade_MordorFaction  Upgrade_MordorFortressFireArrowsTrigger
	;	RequiresAllTriggers = Yes
	;	RefreshDelay		= 2000
	;	Range				= 9999999
	;	ObjectFilter		= NONE +MordorUvatha +MordorUvatha_WOTR +MordorAkhorahil +MordorAkhorahil_WOTR +MordorAkhorahilMounted +MordorUvathaMounted +AkhorahilFellBeast +UvathaFellBeast ALLIES SAME_PLAYER
	;End
		;-----------------------------------------------------------------

	;-----------------------------------------------------------------------------
	; Wild Allegiance
	;-----------------------------------------------------------------------------
 	Behavior = UnpauseSpecialPowerUpgrade ModuleTag_WildAllegianceEnabler
		SpecialPowerTemplate		= SpecialAbilityWildAllegiance
		TriggeredBy					= Upgrade_WildFaction Upgrade_WildFortressGoblinTownTrigger
		RequiresAllTriggers = Yes
	End
	Behavior = SpecialPowerModule ModuleTag_DominateEnemySpecialPowerModule
		SpecialPowerTemplate		= SpecialAbilityWildAllegiance
		StartsPaused				= Yes
		UpdateModuleStartsAttack	= Yes
	;	InitiateSound				= SarumanVoiceDominate
	End
 	Behavior = DominateEnemySpecialPower ModuleTag_DominateEnemySpecialPower
    SpecialPowerTemplate		= SpecialAbilityWildAllegiance
	;	UnpackingVariation			= 1
		StartAbilityRange			= 999999999 ;  275.0 ;;,;; 200.0

    ; AttributeModifierAffects	= ANY +LossothLair +AOTRLossoth_Slaved +WildSnowTroll_Slaved +WildHillTroll_Slaved +WildHillTroll_Slaved +WildStoneTroll_Slaved  +AOTRJungleTroll_Slaved +WildMammoth +WildOliphaunt +WildHillTrollLair +WildHillTrollLairSnow +WildStoneTrollLair +WildStoneTrollLairSnow +AOTRJungleTrollLair +WildSnowTrollLair +WildSnowTrollLairSnow +SnowTrollLair +HillTrollLair +SnowTrollLairSnow +HillTrollLairSnow +CaveTrollLair +MoriarGoblinLair +WargLair +SpiderLair +BarrowWightLair +FireDrakeLair +MoriarGoblinLairSnow +CaveTrollLairSnow +NeutralWarg +BarrowWight_Slaved +FireDrake_Slaved +MordorGoblinSwordsman_Slaved +MordorGoblinArcher_Slaved +MinorSpider_Slaved +CaveTroll_Slaved ENEMIES NEUTRAL

		AttributeModifierAffects	= ANY +CorsairLair +LossothLair +WildHillTrollLair +WildHillTrollLairSnow +WildStoneTrollLair +WildStoneTrollLairSnow +AOTRJungleTrollLair +WildSnowTrollLair +WildSnowTrollLairSnow +SnowTrollLair +HillTrollLair +SnowTrollLairSnow +HillTrollLairSnow +CaveTrollLair +MoriarGoblinLair +WargLair +GundabadWargLair +SpiderLair +BarrowWightLair +FireDrakeLair +MoriarGoblinLairSnow +CaveTrollLairSnow +WhiteWolfLair +AOTRKaraddLair +ScorpionDen +GiantScorpionLair +WargJungleLair ENEMIES NEUTRAL

		DominateRadius				= 60 ;;,;; 60 ;100 ;150
		DominatedFX					= FX_SarumanDominateTargets
		TriggerFX					= FX_SarumanDominateTrigger

		NeedCollisionBeforeTrigger = No
		ApproachUntilMembersInRange = No
		ApproachRequiresLOS = No
		UnpackTime					= 100 ; 1200 ;;,;; 2000
		PreparationTime				= 1
	;	FreezeAfterTriggerDuration	= 2500 ; Hold AI for this long after we fire.
		PermanentlyConvert	= Yes ; No ;;,;; Added for 2.3
    End

		; Note - AutoAbility doesn't work yet, left in for placeholder just in case we decide to set it up
	Behavior = AutoAbilityBehavior ModuleTag_DominateEnemyAutoAbility ;;,;;
		SpecialAbility				= SpecialAbilityWildAllegiance
		ForbiddenStatus = INSIDE_GARRISON ;;,;; This seems to prevent the ability from being used inside a tower
		MaxScanRange				= 200
		Query						= 10 ALL ENEMIES -STRUCTURE -WALL_UPGRADE -WALL_HUB -WALL_SEGMENT -DEFENSIVE_WALL -FS_BASE_DEFENSE ;;,;;
;;,;;		Query						= 1 ALL ENEMIES -STRUCTURE
	End
	;-----------------------------------------------------------------------------
	Behavior = ModelConditionUpgrade ModuleTag_GundabadHordeUnlocker
		TriggeredBy			= Upgrade_WildFortressWebCocoonTrigger
		AddConditionFlags	= RIDER3
		Permanent			= Yes
	End
	Behavior = ModelConditionUpgrade ModuleTag_ArkenstoneHordeUnlocker
		TriggeredBy			= Upgrade_DwarvenFortressMightyCatapult
		AddConditionFlags	= RIDER6
		Permanent			= Yes
	End		
	 Behavior = ModelConditionUpgrade ModuleTag_NorthernWastesModel
		 TriggeredBy			= Upgrade_WildFortressNorthernWastes
		 AddConditionFlags	= USER_8
		 Permanent			= Yes
	 End
	 
	Behavior = AttributeModifierAuraUpdate ModuleTag_DrumsInTheDeep
		StartsActive			= No ;Yes ;If no, requires upgrade to turn on.
		BonusName			= DragonnestUpgradePassout
		TriggeredBy			= Upgrade_WildFortressDrums ;Upgrade_DwarvenFortressMightyCatapult
		RefreshDelay			= 2000
		Range				= 99999
		ObjectFilter			= ANY +GoblinCave +GoblinCaveFoundation +WildMineShaft +WildMineShaftFoundation +GoblinFissure +GoblinFissureFoundation +MoriaAltarofFire +MoriaAltarofFireFoundation +WildTreasureTrove +WildTreasureTroveFoundation SAME_PLAYER ;;+FireWyrmLair
	End	
	;-----------------------------------------------------------------------------
	Behavior = UnpauseSpecialPowerUpgrade ModuleTag_FortressGuardSummon
		SpecialPowerTemplate 	= SpecialAbilityThrorsArmories
		TriggeredBy 			= Upgrade_RohanFortressHornsOfHammerhand
	End
	Behavior = OCLSpecialPower ModuleTag_OCLSpecialPowerSummon1
		SpecialPowerTemplate		= SpecialAbilityThrorsArmories
		OCL							= OCL_SpawnBotfaUpgradeRacks
		TriggerFX			 = FX_BOTFAArmorSummon
		CreateLocation				= CREATE_AT_LOCATION
		StartsPaused				= Yes
	End	