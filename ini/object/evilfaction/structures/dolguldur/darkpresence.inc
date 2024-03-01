//--------------------------------------------------------------------------	
//	DARK PRESENCE MECHANIC
//--------------------------------------------------------------------------
	Behavior = GrantUpgradeCreate ModuleTag_GrantUpgrade
		UpgradeToGrant	= Upgrade_GondorStableLevel2
	End	
	Behavior = AttributeModifierAuraUpdate ModuleTag_DarkPresence
		StartsActive	= No ;If no, requires upgrade to turn on.
		TriggeredBy		= Upgrade_GondorStableLevel2
		BonusName		= GuldurDarkPresence
		RefreshDelay	= 100
		Range			= 350
		ObjectFilter	= ANY +OathswornWarrior +OathswornBanner +OathswornWarriorHorde +AngmarSnaga +AngmarSnagaHorde +GuldurOrcRavagerBanner +GuldurTombGuardHorde +GuldurTombGuard +GuldurOrcRavager +GuldurOrcRavagerHorde +GuldurBrokenRabble +GuldurBrokenRabbleA +GuldurBrokenRabbleB +GuldurBrokenRabbleC +GuldurOrcArcher +GuldurOrcPikeman +GuldurOrcPikemanForBrokenRabble +GuldurBannerOrc
	End
	Behavior = AttributeModifierAuraUpdate ModuleTag_DarkPresenceBuff
		StartsActive	= No ;If no, requires upgrade to turn on.
		TriggeredBy		= Upgrade_GondorStableLevel2
		BonusName		= GuldurDarkPresenceBuff
		RefreshDelay	= 100
		Range			= 350
		ObjectFilter	= ANY +OathswornWarrior +OathswornBanner +OathswornWarriorHorde +AngmarSnaga +AngmarSnagaHorde +GuldurOrcRavagerBanner +GuldurTombGuardHorde +GuldurTombGuard +GuldurOrcRavager +GuldurOrcRavagerHorde +GuldurBrokenRabble +GuldurBrokenRabbleA +GuldurBrokenRabbleB +GuldurBrokenRabbleC +GuldurOrcArcher +GuldurOrcPikeman +GuldurOrcPikemanForBrokenRabble +GuldurBannerOrc
	End
	Behavior = PassiveAreaEffectBehavior ModuleTag_DarkPresenceHeal
		UpgradeRequired			= Upgrade_GondorStableLevel2
		EffectRadius			= 350
		PingDelay				= 4000
		HealPercentPerSecond	= 0.5%
		AllowFilter				= ANY +OathswornWarrior +OathswornBanner +AngmarSnaga +GuldurOrcRavagerBanner +GuldurTombGuard +GuldurOrcRavager +GuldurBrokenRabble +GuldurOrcArcher +GuldurOrcPikeman +GuldurOrcPikemanForBrokenRabble +GuldurBannerOrc
		NonStackable			= Yes
		;HealFX					= FX_SpellHealUnitHealBuff
	End	
//--------------------------------------------------------------------------