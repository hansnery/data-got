//;;,;; Fortress granteconomybonus behaviors moved to this file for 2.1, now that we're adding Scavenger too.
//;;,;; It'll be much easier to maintain and allow us to change all our Fortresses at once :)

	Behavior = AttributeModifierAuraUpdate ModuleTag_Arkenstonehandout
		StartsActive		= No ;Yes ;If no, requires upgrade to turn on.
		BonusName		= ArkenstonePassiveHandout
		TriggeredBy		= Upgrade_FortressMapUpgrade ;Upgrade_DwarvenFortressMightyCatapult
		;RefreshDelay		= 2000
		Range			= 99999
		ObjectFilter	= NONE +HERO ;+STRUCTURE
	End	
	
	Behavior = AttributeModifierAuraUpdate ModuleTag_SummonedGundabadUnitsArkenstone
		StartsActive			= No ;Yes ;If no, requires upgrade to turn on.
		BonusName			= HasIsenSiegeWorks
		TriggeredBy			= Upgrade_FortressMapUpgrade ;Upgrade_DwarvenFortressMightyCatapult
		RefreshDelay			= 2000
		Range				= 99999
		ObjectFilter			= ANY +STRUCTURE +PORTER ;;+FireWyrmLair
	End