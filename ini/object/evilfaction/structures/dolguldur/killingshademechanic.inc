//--------------------------------------------------------------------------	
//	WE KILL THE BUILDER
//--------------------------------------------------------------------------	
;    Behavior = ObjectCreationUpgrade ModuleTag_RemoveUpgrades3
;		TriggeredBy = Upgrade_MiniHordeLvl2
;		RemoveUpgrade = Upgrade_MiniHordeLvl3
;    End
;    Behavior = ObjectCreationUpgrade ModuleTag_RemoveUpgrades4
;		TriggeredBy = Upgrade_MiniHordeLvl3
;		RemoveUpgrade = Upgrade_MiniHordeLvl2
;    End	
;	Behavior = OCLSpecialPower ModuleTag_BuilderKillerPing
;		SpecialPowerTemplate = SpecialAbilityGuldurBuilderKiller
;		OCL                  = OCL_GuldurBuilderKillerPing
;		;TriggerFX			 = FX_GenericGoodSummon
;		CreateLocation       = USE_OWNER_OBJECT
;		StartsPaused		 = No
;	End
;	Behavior = AttributeModifierAuraUpdate ModuleTag_KillingShade
;		StartsActive	= No
;		TriggeredBy		= Upgrade_MiniHordeLvl2
;		BonusName		= GuldurKillingShade
;		RefreshDelay	= 1000
;		Range			= 300
;		ObjectFilter	= NONE +GuldurPorter ALLIES
;	End
//--------------------------------------------------------------------------