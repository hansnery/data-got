	;-----------------------------------------------------------------------------
	; Retreat Power
	;-----------------------------------------------------------------------------
	Behavior = SpecialPowerModule ModuleTag_RetreatPower0 
		SpecialPowerTemplate      = SpecialAbilityHeroRetreatActivation
		UpdateModuleStartsAttack  = No
		StartsPaused 			  = No
		AttributeModifier 		  = HeroRetreatOn
		AttributeModifierRange    = 100
		AttributeModifierAffectsSelf = Yes
		;AttributeModifierFX = 		
	End
	Behavior = UnpauseSpecialPowerUpgrade ModuleTag_RetreatEnabler
		SpecialPowerTemplate	= SpecialAbilityHeroRetreat
		;ConflictsWith			= Upgrade_AIRetreatOFF
		RequiresAllTriggers		= Yes
		TriggeredBy				= Upgrade_AIRetreatON Upgrade_ObjectUnderAIControl
		Permanent				= No		
	End	
    Behavior = SpecialPowerModule ModuleTag_RetreatStarter
        SpecialPowerTemplate       = SpecialAbilityHeroRetreat
        StartsPaused               = Yes
        UpdateModuleStartsAttack   = Yes
		;InitiateSound				= 
    End
    Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_RetreatAnimation
        SpecialPowerTemplate       = SpecialAbilityHeroRetreat
        MustFinishAbility		   = Yes
        SkipContinue               = No
        FreezeAfterTriggerDuration = 100 ; Hold AI for this long after we fire.
        UnpackTime                 = 15000
        PreparationTime            = 1
        ;PersistentPrepTime        = 1000
        PackTime                   = 15000
        AwardXPForTriggering       = 0        
        StartAbilityRange          = 100	
        SpecialWeapon              = HeroRetreatDummyWeapon
    End
	Behavior = AutoAbilityBehavior ModuleTag_HeroRetreatAutoAbility
		SpecialAbility				= SpecialAbilityHeroRetreat
		StartsActive				= Yes
		ForbiddenStatus 			= USER_DEFINED_1
		MaxScanRange				= 99999
		Query						= 1 ANY +COMMANDCENTER -GuldurNecromancer -IsengardSaruman -AngmarWitchking -MoriaDurinsBane -HeroBilboBotfa -RohanDraftTower ALLIES
	End
    Behavior = ObjectCreationUpgrade ModuleTag_RemoveUpgrades1
		TriggeredBy = Upgrade_AIRetreatON
		RemoveUpgrade = Upgrade_AIRetreatOFF
    End
    Behavior = ObjectCreationUpgrade ModuleTag_RemoveUpgrades2
		TriggeredBy = Upgrade_AIRetreatOFF
		RemoveUpgrade = Upgrade_AIRetreatON
    End
	Behavior = StatusBitsUpgrade ModuleTag_NotRetreating
		TriggeredBy = Upgrade_AIRetreatOFF
		StatusToSet = USER_DEFINED_1
	End		
	Behavior = StatusBitsUpgrade ModuleTag_Retreating
		TriggeredBy = Upgrade_AIRetreatON
		StatusToClear = USER_DEFINED_1
	End
	;Behavior = DoCommandUpgrade ModuleTag_RetreatCommand1
	;	TriggeredBy = Upgrade_AIRetreatON
	;	GetUpgradeCommandButtonName = Command_SetStanceHoldGround
	;End
	;Behavior = DoCommandUpgrade ModuleTag_RetreatCommand2
	;	TriggeredBy = Upgrade_AIRetreatOFF
	;	GetUpgradeCommandButtonName = Command_SetStanceBattle
	;End
	Behavior = AutoHealBehavior ModuleTag_RetreatHealing
		StartsActive = No
		TriggeredBy = Upgrade_AIRetreatON Upgrade_ObjectUnderAIControl
		RequiresAllTriggers = Yes
		Permanent = No
		HealingAmount = HERO_HEAL_AMOUNT
		HealingDelay = 1000
		StartHealingDelay = 5000
		HealOnlyIfNotInCombat = No
		HealOnlyIfNotUnderAttack = Yes
	End	
	;-----------------------------------------------------------------------------