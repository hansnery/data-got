
	;///////////////////////////////////////////////////////////////////////////
	;///////////////////////////////////////////////////////////////////////////
	;//// NEW RETREAT - Will be copied into INC when finished
	;///////////////////////////////////////////////////////////////////////////

		Behavior = ObjectCreationUpgrade ModuleTag_DeactivateRetreat ;,;
				 TriggeredBy = Upgrade_AIRetreatOFF
				 RemoveUpgrade = Upgrade_AIRetreatON
		End

		Behavior = ObjectCreationUpgrade ModuleTag_ReactivateRetreat ;,;
				TriggeredBy = Upgrade_AIRetreatON
				RemoveUpgrade = Upgrade_AIRetreatOFF
	End

	Behavior = SpecialPowerModule ModuleTag_FortTouch
		SpecialPowerTemplate = SpecialAbilityAutoHeroRetreat
		StartsPaused = No
		UpdateModuleStartsAttack = Yes
	End

	Behavior = SpecialAbilityUpdate ModuleTag_RetreatGrabber
	  SpecialPowerTemplate    = SpecialAbilityAutoHeroRetreat
	  StartAbilityRange       = 10.0
		AwardXPForTriggering    = 0
	  TriggerAttributeModifier = RetreatDeactivator
	  AttributeModifierDuration = 30000
	End

	Behavior = AutoAbilityBehavior ModuleTag_RetreatToFortAutoAbility ;;,;;
		SpecialAbility				= SpecialAbilityAutoHeroRetreat
		ForbiddenStatus = INSIDE_GARRISON ;;,;; This seems to prevent the ability from being used inside a tower
		MaxScanRange				= 999999999
		Query						= 1 NONE +AutoRetreatBeacon_Hero2 SAME_PLAYER ;;,;;
		StartsActive = Yes
;;,;;		Query						= 1 ALL ENEMIES -STRUCTURE
	End

	;/////// LURE SPAWNER - Spawns the thingy that will pull us back to base

	Behavior = OCLSpecialPower ModuleTag_RetreatLureSpawner
		SpecialPowerTemplate 		= SpecialAbilitySpawnRetreatLure
		OCL                  		= OCL_AutoRetreatBeacon_Hero2
	;	TriggerFX			 		= FX_KrimpulGaolSummon
		CreateLocation       		= CREATE_AT_LOCATION
		UpdateModuleStartsAttack	= No
		StartsPaused		 		= No
	;	InitiateSound				= KrimpulVoiceDungeonMaster
	End

	Behavior = DoCommandUpgrade ModuleTag_SpawnRetreatLure ;,;
    TriggeredBy = Upgrade_AIRetreatON Upgrade_ObjectUnderAIControl
    RequiresAllTriggers = Yes
    GetUpgradeCommandButtonName = Command_SpecialAbilitySpawnRetreatLure
    Permanent = No
  End

	;// END Auto Retreat
	;/////////////////////////////////////////////
	;/////////////////////////////////////////////
