//---------------------------------------------------------------------------------
// This file contains the weapon upgrades for the Create a Hero there are also two 
// other support files for Create a Hero Weapons, CreateAHeroDrawModules.inc and 
// CreateAHeroRemoveUpgradeUpgrades.inc.
//---------------------------------------------------------------------------------
WeaponSet
	Conditions			   = None
End

//-------------------------------------------------------------
// Wraith Weapon - Leechblade lvl 3
//-------------------------------------------------------------	
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_48 WEAPONSET_HERO_MODE		
	Weapon				   = PRIMARY CreateAHeroLeechbladeWeapon3
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End	
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_48		
	Weapon				   = PRIMARY CreateAHeroBasicMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon48
	TriggeredBy			   = Upgrade_CreateAHeroBallLightning_Level3 Upgrade_CreateAHero_ClassWraith
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_48	
	RequiresAllTriggers = Yes	
	;ConflictsWith = Upgrade_CreateAHeroBallLightning_Level1 Upgrade_CreateAHeroBallLightning_Level2 
End

//-------------------------------------------------------------
// Wraith Weapon - Leechblade lvl 2
//-------------------------------------------------------------	
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_47 WEAPONSET_HERO_MODE		
	Weapon				   = PRIMARY CreateAHeroLeechbladeWeapon2
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End	
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_47		
	Weapon				   = PRIMARY CreateAHeroBasicMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon47
	TriggeredBy			   = Upgrade_CreateAHeroBallLightning_Level2 Upgrade_CreateAHero_ClassWraith
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_47	
	RequiresAllTriggers = Yes	
	ConflictsWith = Upgrade_CreateAHeroBallLightning_Level3 
End

//-------------------------------------------------------------
// Wraith Weapon - Leechblade lvl 1
//-------------------------------------------------------------	
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_46 WEAPONSET_HERO_MODE		
	Weapon				   = PRIMARY CreateAHeroLeechbladeWeapon1
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End	
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_46		
	Weapon				   = PRIMARY CreateAHeroBasicMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon46
	TriggeredBy			   = Upgrade_CreateAHeroBallLightning_Level1 Upgrade_CreateAHero_ClassWraith
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_46	
	RequiresAllTriggers = Yes	
	ConflictsWith = Upgrade_CreateAHeroBallLightning_Level2 Upgrade_CreateAHeroBallLightning_Level3 
End

//-------------------------------------------------------------
// Dwarven Axe	Weapon upgrade.
//-------------------------------------------------------------
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_01		
	Weapon				   = PRIMARY CreateAHeroBasicMeleeWeapon
	Weapon				   = TERTIARY CreateAHeroAxeThrow
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
	AutoChooseSources	   = TERTIARY NONE
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon1
	TriggeredBy			   = Upgrade_CHW01
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_01
End
Behavior = SubObjectsUpgrade Dwarf_Upgrade
	TriggeredBy			   = Upgrade_CHW01
	ShowSubObjects		   = AXE_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//-------------------------------------------------------------
// Belthronding	Weapon upgrade.
//-------------------------------------------------------------
WeaponSet
	Conditions				= WEAPONSET_CREATE_A_HERO_WS_02 WEAPONSET_TOGGLE_1
	Weapon					= PRIMARY	   CreateAHeroBasicRangedWeapon
	AutoChooseSources		= PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
WeaponSet
	Conditions				= WEAPONSET_CREATE_A_HERO_WS_02		
	Weapon					=	PRIMARY CreateAHeroBasicMeleeWeapon
	AutoChooseSources		= PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon2
	TriggeredBy			   = Upgrade_CHW02
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_02
End
Behavior = SubObjectsUpgrade Belthronding_Upgrade
	TriggeredBy			   = Upgrade_CHW02
	ShowSubObjects		   = Belthronding AXE_05
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Belthronding_ArcherSword_Upgrade
	TriggeredBy			   = Upgrade_CHW02
	ShowSubObjects		   = WestronSword
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//-------------------------------------------------------------
// Gurthang	(Sword)	Weapon upgrade.
//-------------------------------------------------------------
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_03		// CLOSE_RANGE	 CONTESTING_BUILDING
	Weapon				   = PRIMARY	CreateAHeroBasicMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon3
	TriggeredBy			   = Upgrade_CHW03
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_03
End
Behavior = SubObjectsUpgrade Gurthang_Upgrade
	TriggeredBy			   = Upgrade_CHW03
	ShowSubObjects		   = Gurthang WEAP_01 AXE_06
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//Behavior				   = SubObjectsUpgrade Belthronding_Upgrade_3
//	TriggeredBy			   = Upgrade_CHW03
//	ShowSubObjects		   = Belthronding 
//	HideSubObjectsOnRemove = Yes
//	FadeTimeInSeconds      = 0.0
//End

//-------------------------------------------------------------
// Westron (Sword) Weapon upgrade.
//-------------------------------------------------------------
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_04		// CLOSE_RANGE	 CONTESTING_BUILDING
	Weapon				   = PRIMARY CreateAHeroBasicMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon4
	TriggeredBy			   = Upgrade_CHW04
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_04
End
Behavior = SubObjectsUpgrade WestronSword_Upgrade
	TriggeredBy			   = Upgrade_CHW04
	ShowSubObjects		   = WestronSword WEAP_02 AXE_07
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//Behavior				   = SubObjectsUpgrade Belthronding_Upgrade_4
//	TriggeredBy			   = Upgrade_CHW04
//	ShowSubObjects		   = Belthronding 
//	HideSubObjectsOnRemove = Yes
//	FadeTimeInSeconds      = 0.0
//End
//-------------------------------------------------------------
// TrollBane (Sword) Weapon	upgrade.
//-------------------------------------------------------------
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_05		// CLOSE_RANGE	 CONTESTING_BUILDING
	Weapon				   = PRIMARY CreateAHeroBasicMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon5
	TriggeredBy			   = Upgrade_CHW05
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_05
End
Behavior = SubObjectsUpgrade TrollBane_Upgrade
	TriggeredBy			   = Upgrade_CHW05
	ShowSubObjects		   = TrollBane WEAP_03 AXE_08
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//Behavior				   = SubObjectsUpgrade Belthronding_Upgrade_5
//	TriggeredBy			   = Upgrade_CHW05
//	ShowSubObjects		   = Belthronding 
//	HideSubObjectsOnRemove = Yes
//	FadeTimeInSeconds      = 0.0
//End
//-------------------------------------------------------------
// FireBrand (Sword) Weapon	upgrade.
//-------------------------------------------------------------
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_06		// CLOSE_RANGE	 CONTESTING_BUILDING
	Weapon				   = PRIMARY CreateAHeroBasicMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon6
	TriggeredBy			   = Upgrade_CHW06
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_06
End
Behavior = SubObjectsUpgrade FireBrand_Upgrade
	TriggeredBy			   = Upgrade_CHW06
	ShowSubObjects		   = FireBrand WEAP_04 AXE_09
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade FireBrandFX_Upgrade
	TriggeredBy			   = Upgrade_CHW06
	ShowSubObjects		   = FireBrand_FX01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//Behavior				   = SubObjectsUpgrade Belthronding_Upgrade_6
//	TriggeredBy			   = Upgrade_CHW06
//	ShowSubObjects		   = Belthronding 
//	HideSubObjectsOnRemove = Yes
//	FadeTimeInSeconds      = 0.0
//End
//-------------------------------------------------------------
// Wizard Staff	1 Weapon upgrade.
//-------------------------------------------------------------
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_07		//CLOSE_RANGE	 CONTESTING_BUILDING
	Weapon				   = PRIMARY CreateAHeroBasicMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon7
	TriggeredBy			   = Upgrade_CHW07
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_07
End
Behavior = SubObjectsUpgrade WizardSword_Upgrade7
	TriggeredBy			   = Upgrade_CHW07
	ShowSubObjects		   = WizardStaff01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WizardSwordFX01_Upgrade7
	TriggeredBy			   = Upgrade_CHW07
	ShowSubObjects		   = WizStaff01_FX01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WizardSwordFX02_Upgrade7
	TriggeredBy			   = Upgrade_CHW07
	ShowSubObjects		   = WizStaff01_FX2
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WizardSwordFX03_Upgrade7
	TriggeredBy			   = Upgrade_CHW07
	ShowSubObjects		   = WizStaff01_FX3
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WizardSwordFX04_Upgrade7
	TriggeredBy			   = Upgrade_CHW07
	ShowSubObjects		   = WizStaff01_FX4
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//	Behavior			   = SubObjectsUpgrade WizardStaff01_Upgrade
//		TriggeredBy		   = Upgrade_CHW07
//		ShowSubObjects	   = Gurthang 
//	End
//-------------------------------------------------------------
// MithlondBow Bow Weapon upgrade.
//-------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_08 WEAPONSET_TOGGLE_1	   // CLOSE_RANGE	CONTESTING_BUILDING
	Weapon			  =	PRIMARY CreateAHeroBasicRangedWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_08		// CLOSE_RANGE	 CONTESTING_BUILDING
	Weapon			  =	PRIMARY CreateAHeroBasicMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon8
	TriggeredBy			   = Upgrade_CHW08
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_08
End
Behavior = SubObjectsUpgrade Bow_Upgrade
	TriggeredBy			   = Upgrade_CHW08
	ShowSubObjects		   = MithlondBow
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade MithlondBow_ArcherSword_Upgrade
	TriggeredBy			   = Upgrade_CHW08
	ShowSubObjects		   = WestronSword
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//-------------------------------------------------------------
// another Bow Weapon upgrade.
//-------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_37 WEAPONSET_TOGGLE_1	   // CLOSE_RANGE	CONTESTING_BUILDING
	Weapon			  =	PRIMARY CreateAHeroBasicRangedWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_37		// CLOSE_RANGE	 CONTESTING_BUILDING
	Weapon			  =	PRIMARY CreateAHeroBasicMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon37
	TriggeredBy			   = Upgrade_CHW37
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_37
End
Behavior = SubObjectsUpgrade Bow_Upgrade37
	TriggeredBy			   = Upgrade_CHW37
	ShowSubObjects		   = BOW_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade MithlondBow_ArcherSword_Upgrade37
	TriggeredBy			   = Upgrade_CHW37
	ShowSubObjects		   = WestronSword
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//-------------------------------------------------------------
// yet another Bow Weapon upgrade.
//-------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_38 WEAPONSET_TOGGLE_1	   // CLOSE_RANGE	CONTESTING_BUILDING
	Weapon			  =	PRIMARY CreateAHeroBasicRangedWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_38		// CLOSE_RANGE	 CONTESTING_BUILDING
	Weapon			  =	PRIMARY CreateAHeroBasicMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon38
	TriggeredBy			   = Upgrade_CHW38
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_38
End
Behavior = SubObjectsUpgrade Bow_Upgrade38
	TriggeredBy			   = Upgrade_CHW38
	ShowSubObjects		   = BOW_04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade MithlondBow_ArcherSword_Upgrade38
	TriggeredBy			   = Upgrade_CHW38
	ShowSubObjects		   = WestronSword SWORD03 ;SWORD03S
	HideSubObjects		   = SWORD01 SWORD01S SWORD02 SWORD02S SWORD04 SWORD04S SWORD05 SWORD05S SWORD06 SWORD06S  SWORD07 SWORD07S   TORCH TORCHFX 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade SheathedSword3
	TriggeredBy			   = Upgrade_CHW38
	ConflictsWith				= Upgrade_CreateAHeroMapMode 
	ShowSubObjects		   = SWORD03S
	;HideSubObjects		   = SWORD01 SWORD01S SWORD02 SWORD02S SWORD04 SWORD04S SWORD05 SWORD05S SWORD06 SWORD06S  SWORD07 SWORD07S   TORCH TORCHFX 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade SheathedSwordsOnHeroMap
	TriggeredBy			   = Upgrade_CreateAHeroMapMode
	;ConflictsWith				= Upgrade_CreateAHeroMapMode 
	;ShowSubObjects		   = SWORD03S
	HideSubObjects		   = SWORD01S SWORD02S SWORD03S SWORD04S SWORD05S SWORD06S SWORD07S
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//-------------------------------------------------------------
// yet another yet another Bow Weapon upgrade.
//-------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_39 WEAPONSET_TOGGLE_1	   // CLOSE_RANGE	CONTESTING_BUILDING
	Weapon			  =	PRIMARY CreateAHeroBasicRangedWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_39		// CLOSE_RANGE	 CONTESTING_BUILDING
	Weapon			  =	PRIMARY CreateAHeroBasicMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon39
	TriggeredBy			   = Upgrade_CHW39
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_39
End
Behavior = SubObjectsUpgrade Bow_Upgrade39
	TriggeredBy			   = Upgrade_CHW39
	ShowSubObjects		   = BOW_05
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade MithlondBow_ArcherSword_Upgrade39
	TriggeredBy			   = Upgrade_CHW39
	ShowSubObjects		   = WestronSword SWORD01 ;SWORD01S
	HideSubObjects		   = SWORD02 SWORD02S SWORD03 SWORD03S SWORD04 SWORD04S SWORD05 SWORD05S SWORD06 SWORD06S  SWORD07 SWORD07S   TORCH TORCHFX 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade SheathedSword1
	TriggeredBy			   = Upgrade_CHW39
	ConflictsWith				= Upgrade_CreateAHeroMapMode 
	ShowSubObjects		   = SWORD01S
	;HideSubObjects		   = SWORD01 SWORD01S SWORD02 SWORD02S SWORD04 SWORD04S SWORD05 SWORD05S SWORD06 SWORD06S  SWORD07 SWORD07S   TORCH TORCHFX 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//-------------------------------------------------------------
// Wizard Staff	2 Weapon upgrade.
//-------------------------------------------------------------
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_09		// CLOSE_RANGE	 CONTESTING_BUILDING
	Weapon				   = PRIMARY CreateAHeroBasicMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon9
	TriggeredBy			   = Upgrade_CHW09
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_09
End
Behavior = SubObjectsUpgrade WizardSword_Upgrade09
	TriggeredBy			   = Upgrade_CHW09
	ShowSubObjects		   = WizardStaff02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WizardSwordFX01_Upgrade09
	TriggeredBy			   = Upgrade_CHW09
	ShowSubObjects		   = WizStaff02_FX1
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//	Behavior			   = SubObjectsUpgrade WizardStaff02_Upgrade
//		TriggeredBy		   = Upgrade_CHW09
//		ShowSubObjects	   = Gurthang 
//	End
//-------------------------------------------------------------
// Wizard Staff	3 Weapon upgrade.
//-------------------------------------------------------------
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_10		// CLOSE_RANGE	 CONTESTING_BUILDING
	Weapon				   = PRIMARY CreateAHeroBasicMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon10
	TriggeredBy			   = Upgrade_CHW10
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_10
End
Behavior = SubObjectsUpgrade WizardSword_Upgrade10
	TriggeredBy			   = Upgrade_CHW10
	ShowSubObjects		   = WizardStaff03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WizardSwordFX01_Upgrade10
	TriggeredBy			   = Upgrade_CHW10
	ShowSubObjects		   = WizStaff03_FX01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WizardSwordFX02_Upgrade10
	TriggeredBy			   = Upgrade_CHW10
	ShowSubObjects		   = WizStaff03_FX02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//	Behavior			   = SubObjectsUpgrade WizardStaff03_Upgrade
//		TriggeredBy		   = Upgrade_CHW10
//		ShowSubObjects	   = Gurthang 
//	End
//-------------------------------------------------------------
// Wizard Staff	4 Weapon upgrade.
//-------------------------------------------------------------
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_11		// CLOSE_RANGE	 CONTESTING_BUILDING
	Weapon				   = PRIMARY CreateAHeroBasicMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon11
	TriggeredBy			   = Upgrade_CHW11
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_11
End
Behavior = SubObjectsUpgrade WizardSword_Upgrade11
	TriggeredBy			   = Upgrade_CHW11
	ShowSubObjects		   = WizardStaff04 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WizardSwordFX01_Upgrade11
	TriggeredBy			   = Upgrade_CHW11
	ShowSubObjects		   = WizStaff04_FX01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WizardSwordFX02_Upgrade11
	TriggeredBy			   = Upgrade_CHW11
	ShowSubObjects		   = WizStaff04_FX02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WizardSwordFX03_Upgrade11
	TriggeredBy			   = Upgrade_CHW11
	ShowSubObjects		   = WizStaff04_FX03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WizardSwordFX04_Upgrade11
	TriggeredBy			   = Upgrade_CHW11
	ShowSubObjects		   = WizStaff04_FX04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WizardSwordFX05_Upgrade11
	TriggeredBy			   = Upgrade_CHW11
	ShowSubObjects		   = WizStaff04_FX05
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WizardSwordFX06_Upgrade11
	TriggeredBy			   = Upgrade_CHW11
	ShowSubObjects		   = WizStaff04_FX06
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WizardSwordFX07_Upgrade11
	TriggeredBy			   = Upgrade_CHW11
	ShowSubObjects		   = WizStaff04_FX07
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//	Behavior			   = SubObjectsUpgrade WizardStaff04_Upgrade
//		TriggeredBy		   = Upgrade_CHW11
//		ShowSubObjects	   = Gurthang 
//	End

//-------------------------------------------------------------
// Wizard Staff	5 Weapon upgrade.
//-------------------------------------------------------------
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_40		// CLOSE_RANGE	 CONTESTING_BUILDING
	Weapon				   = PRIMARY CreateAHeroBasicMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon40
	TriggeredBy			   = Upgrade_CHW40
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_40
End
Behavior = SubObjectsUpgrade WizardSword_Upgrade40
	TriggeredBy			   = Upgrade_CHW40
	ShowSubObjects		   = STFF_05 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//-------------------------------------------------------------
// Wizard Staff	6 Weapon upgrade.
//-------------------------------------------------------------
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_41		// CLOSE_RANGE	 CONTESTING_BUILDING
	Weapon				   = PRIMARY CreateAHeroBasicMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon41
	TriggeredBy			   = Upgrade_CHW41
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_41
End
Behavior = SubObjectsUpgrade WizardSword_Upgrade41
	TriggeredBy			   = Upgrade_CHW41
	ShowSubObjects		   = STFF_06 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//-------------------------------------------------------------
// Troll Mace Weapon upgrade.
//-------------------------------------------------------------
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_12		// CLOSE_RANGE	 CONTESTING_BUILDING
	Weapon				   = PRIMARY CreateAHeroOlogHaiMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon12
	TriggeredBy			   = Upgrade_CHW12
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_12
End
Behavior = SubObjectsUpgrade TrollWeapon_Upgrade12
	TriggeredBy			   = Upgrade_CHW12
	ShowSubObjects		   = TrollMace 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//-------------------------------------------------------------
// Troll Sword Weapon upgrade.
//-------------------------------------------------------------
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_13		// CLOSE_RANGE	 CONTESTING_BUILDING
	Weapon				   = PRIMARY CreateAHeroOlogHaiMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon13
	TriggeredBy			   = Upgrade_CHW13
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_13
End
Behavior = SubObjectsUpgrade TrollWeapon_Upgrade13
	TriggeredBy			   = Upgrade_CHW13
	ShowSubObjects		   = TrollSword	
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Troll Hammer Weapon upgrade.
//---------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_14
	Weapon			  =	PRIMARY	CreateAHeroOlogHaiMeleeWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon14
	TriggeredBy		= Upgrade_CHW14
	WeaponCondition	= WEAPONSET_CREATE_A_HERO_WS_14
End
Behavior = SubObjectsUpgrade TrollWeapon_Upgrade14
	TriggeredBy			   = Upgrade_CHW14
	ShowSubObjects		   = TrollHammer 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Troll Tree Weapon upgrade.
//---------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_15
	Weapon			  =	PRIMARY	CreateAHeroOlogHaiMeleeWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon15
	TriggeredBy		= Upgrade_CHW15
	WeaponCondition	= WEAPONSET_CREATE_A_HERO_WS_15
End
Behavior = SubObjectsUpgrade TrollWeapon_Upgrade15
	TriggeredBy			   = Upgrade_CHW15
	ShowSubObjects		   = TrollTree
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Spiked Club Weapon upgrade.
//---------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_29
	Weapon			  =	PRIMARY	CreateAHeroOlogHaiMeleeWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon29
	TriggeredBy		= Upgrade_CHW29
	WeaponCondition	= WEAPONSET_CREATE_A_HERO_WS_29
End
Behavior = SubObjectsUpgrade TrollWeapon_Upgrade29
	TriggeredBy			   = Upgrade_CHW29
	ShowSubObjects		   = CLUB_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Metal Hammer Weapon upgrade.
//---------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_30
	Weapon			  =	PRIMARY	CreateAHeroOlogHaiMeleeWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon30
	TriggeredBy		= Upgrade_CHW30
	WeaponCondition	= WEAPONSET_CREATE_A_HERO_WS_30
End
Behavior = SubObjectsUpgrade TrollWeapon_Upgrade30
	TriggeredBy			   = Upgrade_CHW30
	ShowSubObjects		   = HMR_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Other Metal Hammer Weapon upgrade.
//---------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_33
	Weapon			  =	PRIMARY	CreateAHeroOlogHaiMeleeWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon33
	TriggeredBy		= Upgrade_CHW33
	WeaponCondition	= WEAPONSET_CREATE_A_HERO_WS_33
End
Behavior = SubObjectsUpgrade TrollWeapon_Upgrade33
	TriggeredBy			   = Upgrade_CHW33
	ShowSubObjects		   = HMR_04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Pickaxe Weapon upgrade.
//---------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_34
	Weapon			  =	PRIMARY	CreateAHeroOlogHaiMeleeWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon34
	TriggeredBy		= Upgrade_CHW34
	WeaponCondition	= WEAPONSET_CREATE_A_HERO_WS_34
End
Behavior = SubObjectsUpgrade TrollWeapon_Upgrade34
	TriggeredBy			   = Upgrade_CHW34
	ShowSubObjects		   = PAXE_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End


//---------------------------------------------------------------
// OlogHai Sword Weapon upgrade.
//---------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_42
	Weapon			  =	PRIMARY	CreateAHeroOlogHaiMeleeWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon42
	TriggeredBy		= Upgrade_CHW42
	WeaponCondition	= WEAPONSET_CREATE_A_HERO_WS_42
End
Behavior = SubObjectsUpgrade TrollWeapon_Upgrade42
	TriggeredBy			   = Upgrade_CHW42
	ShowSubObjects		   = SWRD_03 SWD_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Corrupted Man Spear Weapon upgrade.
//---------------------------------------------------------------
//WeaponSet
//	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_15
//		Weapon			  =	PRIMARY CreateAHeroBasicMeleeWeapon
//	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
//End
//Behavior				   = WeaponSetUpgrade Create_A_Hero_Weapon15
//	TriggeredBy			   = Upgrade_CHW15
//	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_15
//End
//Behavior				   = SubObjectsUpgrade CorruptedManWeapon_Upgrade15
//	TriggeredBy			   = Upgrade_CHW15
//	ShowSubObjects		   = CorruptedManSpear 
//	HideSubObjectsOnRemove = Yes
//	FadeTimeInSeconds      = 0.0
//End
//--------------------------------------------------------------
// Uruk	Weapons
//--------------------------------------------------------------
// Uruk	Sword 01
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_18
	Weapon				   = PRIMARY CreateAHeroBasicMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon_18
	TriggeredBy			   = Upgrade_CHW18
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_18
End
Behavior = SubObjectsUpgrade UrukWeapon_Upgrade18
	TriggeredBy			   = Upgrade_CHW18
	ShowSubObjects		   = Uruk_Sword_01 SWRD_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Belthronding_Upgrade18
	TriggeredBy			   = Upgrade_CHW18
	ShowSubObjects		   = Belthronding
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
// Uruk	Sword 01
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_19
	Weapon				   = PRIMARY CreateAHeroBasicMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon_19
	TriggeredBy			   = Upgrade_CHW19
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_19
End
Behavior = SubObjectsUpgrade UrukWeapon_Upgrade19
	TriggeredBy			   = Upgrade_CHW19
	ShowSubObjects		   = Uruk_Sword_02 SWRD_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Belthronding_Upgrade19
	TriggeredBy			   = Upgrade_CHW19
	ShowSubObjects		   = Belthronding
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
// Uruk	Sword 01
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_20
	Weapon				   = PRIMARY CreateAHeroBasicMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon_20
	TriggeredBy			   = Upgrade_CHW20
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_20
End
Behavior = SubObjectsUpgrade UrukWeapon_Upgrade20
	TriggeredBy			   = Upgrade_CHW20
	ShowSubObjects		   = Uruk_Sword_03 SWRD_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Belthronding_Upgrade20
	TriggeredBy			   = Upgrade_CHW20
	ShowSubObjects		   = Belthronding
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
// Uruk	Sword 01
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_43
	Weapon				   = PRIMARY CreateAHeroBasicMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon_43
	TriggeredBy			   = Upgrade_CHW43
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_43
End
Behavior = SubObjectsUpgrade UrukWeapon_Upgrade43
	TriggeredBy			   = Upgrade_CHW43
	ShowSubObjects		   = HMR_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
// Uruk	Sword 01
WeaponSet
	Conditions			   = WEAPONSET_CREATE_A_HERO_WS_45
	Weapon				   = PRIMARY CreateAHeroBasicMeleeWeapon
	AutoChooseSources	   = PRIMARY FROM_PLAYER FROM_SCRIPT FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon_45
	TriggeredBy			   = Upgrade_CHW45
	WeaponCondition		   = WEAPONSET_CREATE_A_HERO_WS_45
End
Behavior = SubObjectsUpgrade UrukWeapon_Upgrade45
	TriggeredBy			   = Upgrade_CHW45
	ShowSubObjects		   = CLUB_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
//---------------------------------------------------------------
// Club for CM Weapon upgrade.
//---------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_21 WEAPONSET_TOGGLE_1	   // CLOSE_RANGE	CONTESTING_BUILDING
	Weapon			  =	PRIMARY	   CreateAHeroBasicRangedWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_21
	Weapon			  =	PRIMARY	CreateAHeroBasicMeleeWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon21
	TriggeredBy		= Upgrade_CHW21
	WeaponCondition	= WEAPONSET_CREATE_A_HERO_WS_21
End
Behavior = SubObjectsUpgrade TrollWeapon_Upgrade21
	TriggeredBy			   = Upgrade_CHW21
	ShowSubObjects		   = CLUB_03  SWORD04 ;SWORD04S
	HideSubObjects		   = SWORD01 SWORD01S SWORD02 SWORD02S SWORD03 SWORD03S SWORD05 SWORD05S SWORD06 SWORD06S  SWORD07 SWORD07S   TORCH TORCHFX 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade SheathedSword4
	TriggeredBy			   = Upgrade_CHW21
	ConflictsWith				= Upgrade_CreateAHeroMapMode 
	ShowSubObjects		   = SWORD04S
	;HideSubObjects		   = SWORD01 SWORD01S SWORD02 SWORD02S SWORD04 SWORD04S SWORD05 SWORD05S SWORD06 SWORD06S  SWORD07 SWORD07S   TORCH TORCHFX 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Hammer for CM Weapon upgrade.
//---------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_22 WEAPONSET_TOGGLE_1	   // CLOSE_RANGE	CONTESTING_BUILDING
	Weapon			  =	PRIMARY	   CreateAHeroBasicRangedWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_22
	Weapon			  =	PRIMARY	CreateAHeroBasicMeleeWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon22
	TriggeredBy		= Upgrade_CHW22
	WeaponCondition	= WEAPONSET_CREATE_A_HERO_WS_22
End
Behavior = SubObjectsUpgrade TrollWeapon_Upgrade22
	TriggeredBy			   = Upgrade_CHW22
	ShowSubObjects		   = HMR_03 CLUB_01 SWORD05 ;SWORD05S
	HideSubObjects		   = SWORD01 SWORD01S SWORD02 SWORD02S SWORD03 SWORD03S SWORD04 SWORD04S SWORD06 SWORD06S  SWORD07 SWORD07S   TORCH TORCHFX 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade SheathedSword5
	TriggeredBy			   = Upgrade_CHW22
	ConflictsWith				= Upgrade_CreateAHeroMapMode 
	ShowSubObjects		   = SWORD05S
	;HideSubObjects		   = SWORD01 SWORD01S SWORD02 SWORD02S SWORD04 SWORD04S SWORD05 SWORD05S SWORD06 SWORD06S  SWORD07 SWORD07S   TORCH TORCHFX 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Sword 03 for CM Weapon upgrade.
//---------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_23 WEAPONSET_TOGGLE_1	   // CLOSE_RANGE	CONTESTING_BUILDING
	Weapon			  =	PRIMARY	   CreateAHeroBasicRangedWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_23
	Weapon			  =	PRIMARY	CreateAHeroBasicMeleeWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon23
	TriggeredBy		= Upgrade_CHW23
	WeaponCondition	= WEAPONSET_CREATE_A_HERO_WS_23
End
Behavior = SubObjectsUpgrade TrollWeapon_Upgrade23
	TriggeredBy			   = Upgrade_CHW23
	ShowSubObjects		   = SWRD_03 SWD_03 SWORD06 ;SWORD06S
	HideSubObjects		   = SWORD01 SWORD01S SWORD02 SWORD02S SWORD03 SWORD03S SWORD04 SWORD04S SWORD05 SWORD05S SWORD07 SWORD07S   TORCH TORCHFX 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade SheathedSword6
	TriggeredBy			   = Upgrade_CHW23
	ConflictsWith				= Upgrade_CreateAHeroMapMode 
	ShowSubObjects		   = SWORD06S
	;HideSubObjects		   = SWORD01 SWORD01S SWORD02 SWORD02S SWORD04 SWORD04S SWORD05 SWORD05S SWORD06 SWORD06S  SWORD07 SWORD07S   TORCH TORCHFX 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Sword 04 for CM Weapon upgrade.
//---------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_24 WEAPONSET_TOGGLE_1	   // CLOSE_RANGE	CONTESTING_BUILDING
	Weapon			  =	PRIMARY	   CreateAHeroBasicRangedWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_24
	Weapon			  =	PRIMARY	CreateAHeroBasicMeleeWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon24
	TriggeredBy		= Upgrade_CHW24
	WeaponCondition	= WEAPONSET_CREATE_A_HERO_WS_24
End
Behavior = SubObjectsUpgrade TrollWeapon_Upgrade24
	TriggeredBy			   = Upgrade_CHW24
	ShowSubObjects		   = SWRD_04 SWD_04 HMR_02 SWORD07 ;SWORD07S
	HideSubObjects		   = SWORD01 SWORD01S SWORD02 SWORD02S SWORD03 SWORD03S SWORD04 SWORD04S SWORD05 SWORD05S SWORD06 SWORD06S    TORCH TORCHFX 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade SheathedSword7
	TriggeredBy			   = Upgrade_CHW24
	ConflictsWith				= Upgrade_CreateAHeroMapMode 
	ShowSubObjects		   = SWORD07S
	;HideSubObjects		   = SWORD01 SWORD01S SWORD02 SWORD02S SWORD04 SWORD04S SWORD05 SWORD05S SWORD06 SWORD06S  SWORD07 SWORD07S   TORCH TORCHFX 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Sword 05 for CM Weapon upgrade.
//---------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_35 WEAPONSET_TOGGLE_1	   // CLOSE_RANGE	CONTESTING_BUILDING
	Weapon			  =	PRIMARY	   CreateAHeroBasicRangedWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_35
	Weapon			  =	PRIMARY	CreateAHeroBasicMeleeWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon35
	TriggeredBy		= Upgrade_CHW35
	WeaponCondition	= WEAPONSET_CREATE_A_HERO_WS_35
End
Behavior = SubObjectsUpgrade TrollWeapon_Upgrade35
	TriggeredBy			   = Upgrade_CHW35
	ShowSubObjects		   = SWRD_05 TORCH TORCHFX
	;CustomAnimAndDuration = AnimState:CREATE_A_HERO_EXAMINE_WEAPON_LEFT AnimTime:0 TriggerTime:0
	HideSubObjects		   = SWORD01 SWORD01S SWORD02 SWORD02S SWORD03 SWORD03S SWORD04 SWORD04S SWORD05 SWORD05S SWORD06 SWORD06S  SWORD07 SWORD07S   
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Corrupted Man Weapon 1 upgrade.
//---------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_25 WEAPONSET_TOGGLE_1	   // CLOSE_RANGE	CONTESTING_BUILDING
	Weapon			  =	PRIMARY	   CreateAHeroBasicRangedWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_25
	Weapon			  =	PRIMARY	CreateAHeroBasicMeleeWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon25
	TriggeredBy		= Upgrade_CHW25
	WeaponCondition	= WEAPONSET_CREATE_A_HERO_WS_25
End
Behavior = SubObjectsUpgrade CorruptedWeapon_Upgrade25
	TriggeredBy			   = Upgrade_CHW25
	ShowSubObjects		   = CMSword01  SWORD02 ;SWORD02S
	HideSubObjects		   = SWORD01 SWORD01S SWORD03 SWORD03S SWORD04 SWORD04S SWORD05 SWORD05S SWORD06 SWORD06S  SWORD07 SWORD07S   TORCH TORCHFX 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade SheathedSword2
	TriggeredBy			   = Upgrade_CHW25
	ConflictsWith				= Upgrade_CreateAHeroMapMode 
	ShowSubObjects		   = SWORD02S
	;HideSubObjects		   = SWORD01 SWORD01S SWORD02 SWORD02S SWORD04 SWORD04S SWORD05 SWORD05S SWORD06 SWORD06S  SWORD07 SWORD07S   TORCH TORCHFX 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End


//---------------------------------------------------------------
// Corrupted Man Weapon 2 upgrade.
//---------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_26 WEAPONSET_TOGGLE_1	   // CLOSE_RANGE	CONTESTING_BUILDING
	Weapon			  =	PRIMARY	   CreateAHeroBasicRangedWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_26
	Weapon			  =	PRIMARY	CreateAHeroBasicMeleeWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon26
	TriggeredBy		= Upgrade_CHW26
	WeaponCondition	= WEAPONSET_CREATE_A_HERO_WS_26
End
Behavior = SubObjectsUpgrade CorruptedWeapon_Upgrade26
	TriggeredBy			   = Upgrade_CHW26
	ShowSubObjects		   = CMSword02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Dwarf Hammer upgrade.
//---------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_31
	Weapon			  =	PRIMARY	CreateAHeroBasicMeleeWeapon
	Weapon			  = TERTIARY CreateAHeroAxeThrow
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
	AutoChooseSources = TERTIARY NONE
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon31
	TriggeredBy		= Upgrade_CHW31
	WeaponCondition	= WEAPONSET_CREATE_A_HERO_WS_31
End
Behavior = SubObjectsUpgrade CorruptedWeapon_Upgrade31
	TriggeredBy			   = Upgrade_CHW31
	ShowSubObjects		   = HMR_01 AXE_04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Dwarf Axe 02 upgrade.
//---------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_32
	Weapon			  =	PRIMARY	CreateAHeroBasicMeleeWeapon
	Weapon			  = TERTIARY CreateAHeroAxeThrow
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
	AutoChooseSources = TERTIARY NONE
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon32
	TriggeredBy		= Upgrade_CHW32
	WeaponCondition	= WEAPONSET_CREATE_A_HERO_WS_32
End
Behavior = SubObjectsUpgrade CorruptedWeapon_Upgrade32
	TriggeredBy			   = Upgrade_CHW32
	ShowSubObjects		   = AXE_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Dwarf Axe 03 upgrade.
//---------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_36
	Weapon			  =	PRIMARY	CreateAHeroBasicMeleeWeapon
	Weapon			  = TERTIARY CreateAHeroAxeThrow
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
	AutoChooseSources = TERTIARY NONE
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon36
	TriggeredBy		= Upgrade_CHW36
	WeaponCondition	= WEAPONSET_CREATE_A_HERO_WS_36
End
Behavior = SubObjectsUpgrade CorruptedWeapon_Upgrade36
	TriggeredBy			   = Upgrade_CHW36
	ShowSubObjects		   = AXE_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

//---------------------------------------------------------------
// Hero of the West Axe upgrade.
//---------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_27
	Weapon			  =	PRIMARY	CreateAHeroBasicMeleeWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon27
	TriggeredBy		= Upgrade_CHW27
	WeaponCondition	= WEAPONSET_CREATE_A_HERO_WS_27
End
Behavior = SubObjectsUpgrade CorruptedWeapon_Upgrade27
	TriggeredBy			   = Upgrade_CHW27
	ShowSubObjects		   = AXE_01 WEAP_05
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End


//---------------------------------------------------------------
// Hero of the West Sword upgrade.
//---------------------------------------------------------------
WeaponSet
	Conditions		  =	WEAPONSET_CREATE_A_HERO_WS_28
	Weapon			  =	PRIMARY	CreateAHeroBasicMeleeWeapon
	AutoChooseSources =	PRIMARY	FROM_PLAYER	FROM_SCRIPT	FROM_AI
End
Behavior = WeaponSetUpgrade Create_A_Hero_Weapon28
	TriggeredBy		= Upgrade_CHW28
	WeaponCondition	= WEAPONSET_CREATE_A_HERO_WS_28
End
Behavior = SubObjectsUpgrade CorruptedWeapon_Upgrade28
	TriggeredBy			   = Upgrade_CHW28
	ShowSubObjects		   = SWRD_05 WEAP_06
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

Behavior = SubObjectsUpgrade RangerBow
	TriggeredBy			   = Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	ConflictsWith				= Upgrade_CreateAHeroMapMode 
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOW
	;HideSubObjects		   = OUTRIDER HOODHELM GREYHELM HEADHELM HOOD HEAD HEADHOOD HEADBAND CIRCLET PIPE MASK HELMHOOD
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerHead01
	TriggeredBy			   = Upgrade_NoHelmet Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HEAD NOHOOD
	HideSubObjects		   = OUTRIDER HOODHELM GREYHELM HEADHELM HOOD HEAD HEADHOOD HEADBAND CIRCLET PIPE MASK HELMHOOD
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerHead02
	TriggeredBy			   = Upgrade_CHH01 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HOOD HEADHOOD
	HideSubObjects		   = HEAD NOHOOD OUTRIDER HOODHELM GREYHELM HEADHELM HEAD HEADBAND CIRCLET PIPE MASK HELMHOOD
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerHead03
	TriggeredBy			   = Upgrade_CHH02 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HOOD PIPE HEADHOOD
	HideSubObjects		   = HEAD NOHOOD OUTRIDER HOODHELM GREYHELM HEADHELM HEAD HEADBAND CIRCLET MASK HELMHOOD
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerHead04
	TriggeredBy			   = Upgrade_CHH03 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HOOD HEADHOOD MASK
	HideSubObjects		   = HEAD NOHOOD OUTRIDER HOODHELM GREYHELM HEADHELM HEAD HEADBAND CIRCLET PIPE HELMHOOD
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerHead05
	TriggeredBy			   = Upgrade_CHH04 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HOODHELM HELMHOOD HEADHOOD ; HOOD HEADHELM 
	HideSubObjects		   = HEAD NOHOOD OUTRIDER GREYHELM HEAD HEADHOOD HEADBAND CIRCLET PIPE MASK HOOD HELMHOOD
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerHead06
	TriggeredBy			   = Upgrade_CHH05 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = OUTRIDER NOHOOD HEADHOOD ;HEADHELM 
	HideSubObjects		   = HEAD HOODHELM GREYHELM HOOD HEAD HEADHOOD HEADBAND CIRCLET PIPE MASK HELMHOOD
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerHead07
	TriggeredBy			   = Upgrade_CHH06 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GREYHELM HEADHELM NOHOOD
	HideSubObjects		   = HEAD OUTRIDER HOODHELM HOOD HEAD HEADHOOD HEADBAND CIRCLET PIPE MASK HELMHOOD
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerHead08
	TriggeredBy			   = Upgrade_CHH07 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = CIRCLET HEAD NOHOOD
	HideSubObjects		   = HEAD OUTRIDER HOODHELM GREYHELM HEADHELM HOOD HEADHOOD HEADBAND PIPE MASK HELMHOOD
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerHead09
	TriggeredBy			   = Upgrade_CHH08 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HEADBAND HEAD NOHOOD
	HideSubObjects		   = OUTRIDER HOODHELM GREYHELM HEADHELM HOOD HEAD HEADHOOD CIRCLET PIPE MASK HELMHOOD
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerHead10
	TriggeredBy			   = Upgrade_CHH09 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HEADBAND PIPE HEAD NOHOOD
	HideSubObjects		   = OUTRIDER HOODHELM GREYHELM HEADHELM HOOD HEAD HEADHOOD CIRCLET MASK HELMHOOD
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerBoots01	
	TriggeredBy			   = Upgrade_NoBoots Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BROOCH01
	HideSubObjects		   = BROOCH02 BROOCH03 BROOCH04 BROOCH05 BROOCH06 BROOCH07 BROOCH08 BROOCH09
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerBoots02	
	TriggeredBy			   = Upgrade_CHB01 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BROOCH02
	HideSubObjects		   = BROOCH01 BROOCH03 BROOCH04 BROOCH05 BROOCH06 BROOCH07 BROOCH08 BROOCH09
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerBoots03	
	TriggeredBy			   = Upgrade_CHB02 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BROOCH03
	HideSubObjects		   = BROOCH01 BROOCH02 BROOCH04 BROOCH05 BROOCH06 BROOCH07 BROOCH08 BROOCH09
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerBoots04	
	TriggeredBy			   = Upgrade_CHB03 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BROOCH04
	HideSubObjects		   = BROOCH01 BROOCH02 BROOCH03 BROOCH05 BROOCH06 BROOCH07 BROOCH08 BROOCH09
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerBoots05	
	TriggeredBy			   = Upgrade_CHB04 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BROOCH05
	HideSubObjects		   = BROOCH01 BROOCH02 BROOCH03 BROOCH04 BROOCH06 BROOCH07 BROOCH08 BROOCH09
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerBoots06	
	TriggeredBy			   = Upgrade_CHB05 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BROOCH06
	HideSubObjects		   = BROOCH01 BROOCH02 BROOCH03 BROOCH04 BROOCH05 BROOCH07 BROOCH08 BROOCH09
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerBoots07	
	TriggeredBy			   = Upgrade_CHB06 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BROOCH07
	HideSubObjects		   = BROOCH01 BROOCH02 BROOCH03 BROOCH04 BROOCH05 BROOCH06 BROOCH08 BROOCH09
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerBoots08	
	TriggeredBy			   = Upgrade_CHB07 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BROOCH08
	HideSubObjects		   = BROOCH01 BROOCH02 BROOCH03 BROOCH04 BROOCH05 BROOCH06 BROOCH07 BROOCH09
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerBoots09	
	TriggeredBy			   = Upgrade_CHB08 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BROOCH09
	HideSubObjects		   = BROOCH01 BROOCH02 BROOCH03 BROOCH04 BROOCH05 BROOCH06 BROOCH07 BROOCH08 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerBody01	
	TriggeredBy			   = Upgrade_CHBOD01 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	UpgradeTexture		   = chdundanbody02.tga		0 chdundanbody01.tga
	UpgradeTexture		   = chdundanbody03.tga		0 chdundanbody01.tga
	UpgradeTexture		   = chdundanbody04.tga		0 chdundanbody01.tga
	UpgradeTexture		   = chdundanbody05.tga		0 chdundanbody01.tga
	UpgradeTexture		   = chdundanbody06.tga		0 chdundanbody01.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerBody02	
	TriggeredBy			   = Upgrade_CHBOD02 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	UpgradeTexture		   = chdundanbody01.tga		0 chdundanbody02.tga
	UpgradeTexture		   = chdundanbody03.tga		0 chdundanbody02.tga
	UpgradeTexture		   = chdundanbody04.tga		0 chdundanbody02.tga
	UpgradeTexture		   = chdundanbody05.tga		0 chdundanbody02.tga
	UpgradeTexture		   = chdundanbody06.tga		0 chdundanbody02.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerBody03	
	TriggeredBy			   = Upgrade_CHBOD03 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	UpgradeTexture		   = chdundanbody02.tga		0 chdundanbody03.tga
	UpgradeTexture		   = chdundanbody01.tga		0 chdundanbody03.tga
	UpgradeTexture		   = chdundanbody04.tga		0 chdundanbody03.tga
	UpgradeTexture		   = chdundanbody05.tga		0 chdundanbody03.tga
	UpgradeTexture		   = chdundanbody06.tga		0 chdundanbody03.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerBody04	
	TriggeredBy			   = Upgrade_CHBOD04 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	UpgradeTexture		   = chdundanbody02.tga		0 chdundanbody04.tga
	UpgradeTexture		   = chdundanbody03.tga		0 chdundanbody04.tga
	UpgradeTexture		   = chdundanbody01.tga		0 chdundanbody04.tga
	UpgradeTexture		   = chdundanbody05.tga		0 chdundanbody04.tga
	UpgradeTexture		   = chdundanbody06.tga		0 chdundanbody04.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerBody05	
	TriggeredBy			   = Upgrade_CHBOD05 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	UpgradeTexture		   = chdundanbody02.tga		0 chdundanbody05.tga
	UpgradeTexture		   = chdundanbody03.tga		0 chdundanbody05.tga
	UpgradeTexture		   = chdundanbody04.tga		0 chdundanbody05.tga
	UpgradeTexture		   = chdundanbody01.tga		0 chdundanbody05.tga
	UpgradeTexture		   = chdundanbody06.tga		0 chdundanbody05.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerBody06	
	TriggeredBy			   = Upgrade_CHBOD06 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	UpgradeTexture		   = chdundanbody02.tga		0 chdundanbody06.tga
	UpgradeTexture		   = chdundanbody03.tga		0 chdundanbody06.tga
	UpgradeTexture		   = chdundanbody04.tga		0 chdundanbody06.tga
	UpgradeTexture		   = chdundanbody05.tga		0 chdundanbody06.tga
	UpgradeTexture		   = chdundanbody01.tga		0 chdundanbody06.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerShield01	
	TriggeredBy			   = Upgrade_CHS01 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BEDROLL
	HideSubObjects		   = BACKBAG POUCH DAGGER AXEBELT
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerShield02	
	TriggeredBy			   = Upgrade_CHS02 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BACKBAG 
	HideSubObjects		   = BEDROLL POUCH DAGGER AXEBELT
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerShield03	
	TriggeredBy			   = Upgrade_CHS03 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = POUCH 
	HideSubObjects		   = BEDROLL BACKBAG DAGGER AXEBELT
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerShield04	
	TriggeredBy			   = Upgrade_CHS04 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = DAGGER 
	HideSubObjects		   = BEDROLL BACKBAG POUCH AXEBELT
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerShield05	
	TriggeredBy			   = Upgrade_CHS05 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = AXEBELT
	HideSubObjects		   = BEDROLL BACKBAG POUCH DAGGER 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerArms00	
	TriggeredBy			   = Upgrade_NoGauntlets Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	HideSubObjects		   = VAMBRACE01 VAMBRACE02 VAMBRACE03 VAMBRACE04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerArms01	
	TriggeredBy			   = Upgrade_CHG01 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = VAMBRACE01
	HideSubObjects		   = VAMBRACE02 VAMBRACE03 VAMBRACE04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerArms02	
	TriggeredBy			   = Upgrade_CHG02 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = VAMBRACE02 
	HideSubObjects		   = VAMBRACE01 VAMBRACE03 VAMBRACE04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerArms03	
	TriggeredBy			   = Upgrade_CHG03 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = VAMBRACE03 
	HideSubObjects		   = VAMBRACE01 VAMBRACE02 VAMBRACE04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerArms04	
	TriggeredBy			   = Upgrade_CHG04 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = VAMBRACE04
	HideSubObjects		   = VAMBRACE01 VAMBRACE02 VAMBRACE03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerShoulders00
	TriggeredBy			   = Upgrade_NoShoulderPlates Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	HideSubObjects		   = SATCHEL WATERSKIN ATHELASBAG
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerShoulders01
	TriggeredBy			   = Upgrade_CHSP01 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SATCHEL
	HideSubObjects		   = WATERSKIN ATHELASBAG
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerShoulders02
	TriggeredBy			   = Upgrade_CHSP02 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = WATERSKIN 
	HideSubObjects		   = SATCHEL ATHELASBAG
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade RangerShoulders03
	TriggeredBy			   = Upgrade_CHSP03 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = ATHELASBAG
	HideSubObjects		   = SATCHEL WATERSKIN 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End



Behavior = SubObjectsUpgrade WraithWeaponSubObject01
	TriggeredBy			   = Upgrade_CHW07 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = VENDELSWORD
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WraithWeaponSubObject02
	TriggeredBy			   = Upgrade_CHW09 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SOUTHSWORD
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WraithWeaponSubObject03
	TriggeredBy			   = Upgrade_CHW10 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = MACE
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WraithWeaponSubObject04
	TriggeredBy			   = Upgrade_CHW11 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = FRUMSWORD
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WraithWeaponSubObject05
	TriggeredBy			   = Upgrade_CHW40 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GKSWORD
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;NEW SYSTEM;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;----------------------------------------------Mound Dweller-------------------------------------------------

Behavior = SubObjectsUpgrade Upgrade_CHH01-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHH01 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = VENDELHELMET 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHH02-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHH02 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = FRUMHELMET 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHH03-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHH03 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = CULTHELMET 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHH04-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHH04 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = DKHELMET 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHH05-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHH05 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = ARNORCROWN 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHH06-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHH06 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GONDORCROWN 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHH07-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHH07 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = CARCROWN 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHH08-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHH08 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = NORTHCROWN 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHH09-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHH09 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = RESTHELMET 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHH10-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHH10 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = KOTDHELMET 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHH11-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHH11 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GKHELM 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHH12-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHH12 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SOUTHHELM 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHH13-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHH13 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = DUNDANHELMET
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP01-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHSP01 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = CASTPAULDRONS 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP02-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHSP02 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BONEPAULDRONS 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP03-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHSP03 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = CULTPAULDRONS 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP04-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHSP04 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = DKPAULDRONS 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP05-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHSP05 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = RESTPAULDRONS 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP06-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHSP06 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SOUTHPAULDRONS
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG02-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHG02 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = VENDELBRACERS 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG03-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHG03 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BONEBRACERS 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG04-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHG04 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BRACELETS 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHS02-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHS02 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = VENDELSHIELD 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHS03-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHS03 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = FRUMSHIELD 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHS04-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHS04 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = ARNORSHIELD 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHS05-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHS05 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = KINGSHIELD 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHS06-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHS06 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SOUTHSHIELD 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB01-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHB01 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HEAD01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB02-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHB02 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HEAD02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB03-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHB03 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HEAD03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB04-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHB04 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HEAD01
	CustomAnimAndDuration = AnimState:USER_27 AnimTime:0 TriggerTime:0
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB05-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHB05 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HEAD02
	CustomAnimAndDuration = AnimState:USER_29 AnimTime:0 TriggerTime:0
	;CustomAnimAndDuration = AnimState:USER_28 AnimTime:3000 TriggerTime:20000
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB06-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHB06 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HEAD03
	CustomAnimAndDuration = AnimState:USER_32 AnimTime:0 TriggerTime:0
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB07-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHB07 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HEAD03
	CustomAnimAndDuration = AnimState:USER_33 AnimTime:0 TriggerTime:0
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
;------------Belts for Body1
Behavior = SubObjectsUpgrade Upgrade_CHW07-Upgrade_CHBOD01-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHW07 Upgrade_CHBOD01 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = NORTHBELT
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHW09-Upgrade_CHBOD01-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHW09 Upgrade_CHBOD01 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SOUTHBELT 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHW011-Upgrade_CHBOD01-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHW11 Upgrade_CHBOD01 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = NORTHBELT 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHW40-Upgrade_CHBOD01-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHW40 Upgrade_CHBOD01 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = NORTHBELT 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
;------------Belts for Body2
Behavior = SubObjectsUpgrade Upgrade_CHW07-Upgrade_CHBOD02-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHW07 Upgrade_CHBOD02 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = NORTHBELT
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHW09-Upgrade_CHBOD02-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHW09 Upgrade_CHBOD02 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SOUTHBELT 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHW011-Upgrade_CHBOD02-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHW11 Upgrade_CHBOD02 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = NORTHBELT 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHW40-Upgrade_CHBOD02-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHW40 Upgrade_CHBOD02 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = NORTHBELT 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
;------------Belts for Body3
Behavior = SubObjectsUpgrade Upgrade_CHW07-Upgrade_CHBOD03-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHW07 Upgrade_CHBOD03 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = NORTHBELT
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHW09-Upgrade_CHBOD03-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHW09 Upgrade_CHBOD03 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SOUTHBELT 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHW011-Upgrade_CHBOD03-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHW11 Upgrade_CHBOD03 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = NORTHBELT 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHW40-Upgrade_CHBOD03-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHW40 Upgrade_CHBOD03 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = NORTHBELT 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
;------------Belts for Body4
Behavior = SubObjectsUpgrade Upgrade_CHW07-Upgrade_CHBOD04-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHW07 Upgrade_CHBOD04 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = NORTHBELT
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHW09-Upgrade_CHBOD04-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHW09 Upgrade_CHBOD04 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SOUTHBELT 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHW011-Upgrade_CHBOD04-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHW11 Upgrade_CHBOD04 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = NORTHBELT 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHW40-Upgrade_CHBOD04-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHW40 Upgrade_CHBOD04 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = NORTHBELT 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
;------------Belts for Body5
Behavior = SubObjectsUpgrade Upgrade_CHW07-Upgrade_CHBOD05-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHW07 Upgrade_CHBOD05 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = NORTHBELT
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHW09-Upgrade_CHBOD05-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHW09 Upgrade_CHBOD05 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SOUTHBELT 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHW011-Upgrade_CHBOD05-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHW11 Upgrade_CHBOD05 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = NORTHBELT 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHW40-Upgrade_CHBOD05-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHW40 Upgrade_CHBOD05 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = NORTHBELT 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD01-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD01 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
        UpgradeTexture		   = chdwellbody02.tga       0 chdwellbody01.tga
        UpgradeTexture		   = chdwellbody03.tga       0 chdwellbody01.tga
        UpgradeTexture		   = chdwellbody04.tga       0 chdwellbody01.tga
        UpgradeTexture		   = chdwellbody05.tga       0 chdwellbody01.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD02-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD02 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
        UpgradeTexture		   = chdwellbody01.tga       0 chdwellbody02.tga
        UpgradeTexture		   = chdwellbody03.tga       0 chdwellbody02.tga
        UpgradeTexture		   = chdwellbody04.tga       0 chdwellbody02.tga
        UpgradeTexture		   = chdwellbody05.tga       0 chdwellbody02.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD03-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD03 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
        UpgradeTexture		   = chdwellbody01.tga       0 chdwellbody03.tga
        UpgradeTexture		   = chdwellbody02.tga       0 chdwellbody03.tga
        UpgradeTexture		   = chdwellbody04.tga       0 chdwellbody03.tga
        UpgradeTexture		   = chdwellbody05.tga       0 chdwellbody03.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD04-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD04 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
        UpgradeTexture		   = chdwellbody01.tga       0 chdwellbody04.tga
        UpgradeTexture		   = chdwellbody02.tga       0 chdwellbody04.tga
        UpgradeTexture		   = chdwellbody03.tga       0 chdwellbody04.tga
        UpgradeTexture		   = chdwellbody05.tga       0 chdwellbody04.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD05-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD05 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
        UpgradeTexture		   = chdwellbody01.tga       0 chdwellbody05.tga
        UpgradeTexture		   = chdwellbody02.tga       0 chdwellbody05.tga
        UpgradeTexture		   = chdwellbody03.tga       0 chdwellbody05.tga
        UpgradeTexture		   = chdwellbody04.tga       0 chdwellbody05.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

Behavior = SubObjectsUpgrade Upgrade_CHBOD06-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD06 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
        UpgradeTexture		   = chdwellbody02.tga       0 chdwellbody01.tga
        UpgradeTexture		   = chdwellbody03.tga       0 chdwellbody01.tga
        UpgradeTexture		   = chdwellbody04.tga       0 chdwellbody01.tga
        UpgradeTexture		   = chdwellbody05.tga       0 chdwellbody01.tga
	RecolorHouse		   = Yes
	ShowSubObjects		   = BONEGEAR 
	HideSubObjects		   = NORTHBELT SOUTHBELT 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD07-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD07 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
        UpgradeTexture		   = chdwellbody01.tga       0 chdwellbody02.tga
        UpgradeTexture		   = chdwellbody03.tga       0 chdwellbody02.tga
        UpgradeTexture		   = chdwellbody04.tga       0 chdwellbody02.tga
        UpgradeTexture		   = chdwellbody05.tga       0 chdwellbody02.tga
	RecolorHouse		   = Yes
	ShowSubObjects		   = BONEGEAR 
	HideSubObjects		   = NORTHBELT SOUTHBELT 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD08-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD08 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
        UpgradeTexture		   = chdwellbody01.tga       0 chdwellbody03.tga
        UpgradeTexture		   = chdwellbody02.tga       0 chdwellbody03.tga
        UpgradeTexture		   = chdwellbody04.tga       0 chdwellbody03.tga
        UpgradeTexture		   = chdwellbody05.tga       0 chdwellbody03.tga
	RecolorHouse		   = Yes
	ShowSubObjects		   = BONEGEAR 
	HideSubObjects		   = NORTHBELT SOUTHBELT 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD09-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD09 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
        UpgradeTexture		   = chdwellbody01.tga       0 chdwellbody04.tga
        UpgradeTexture		   = chdwellbody02.tga       0 chdwellbody04.tga
        UpgradeTexture		   = chdwellbody03.tga       0 chdwellbody04.tga
        UpgradeTexture		   = chdwellbody05.tga       0 chdwellbody04.tga
	RecolorHouse		   = Yes
	ShowSubObjects		   = BONEGEAR 
	HideSubObjects		   = NORTHBELT SOUTHBELT 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD10-Upgrade_CreateAHero_ClassWraith-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD10 Upgrade_CreateAHero_ClassWraith Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
        UpgradeTexture		   = chdwellbody01.tga       0 chdwellbody05.tga
        UpgradeTexture		   = chdwellbody02.tga       0 chdwellbody05.tga
        UpgradeTexture		   = chdwellbody03.tga       0 chdwellbody05.tga
        UpgradeTexture		   = chdwellbody04.tga       0 chdwellbody05.tga
	RecolorHouse		   = Yes
	ShowSubObjects		   = BONEGEAR 
	HideSubObjects		   = NORTHBELT SOUTHBELT 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

// Helmets
Behavior = SubObjectsUpgrade ORCHelmet_Upgrade01
	TriggeredBy			   = Upgrade_CHH04 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_05
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade ORCHelmet_Upgrade02
	TriggeredBy			   = Upgrade_CHH05 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_07
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

// Helmets
Behavior = SubObjectsUpgrade TRLLHelmet_Upgrade01
	TriggeredBy			   = Upgrade_CHH01 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade TRLLHelmet_Upgrade02
	TriggeredBy			   = Upgrade_CHH02 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade TRLLHelmet_Upgrade03
	TriggeredBy			   = Upgrade_CHH03 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade TRLLHelmet_Upgrade01-2
	TriggeredBy			   = Upgrade_CHH01 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade TRLLHelmet_Upgrade02-2
	TriggeredBy			   = Upgrade_CHH02 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade TRLLHelmet_Upgrade03-2
	TriggeredBy			   = Upgrade_CHH03 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade TRLLHelmet_Upgrade04
	TriggeredBy			   = Upgrade_CHH01 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade TRLLHelmet_Upgrade05
	TriggeredBy			   = Upgrade_CHH02 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_05
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade TRLLHelmet_Upgrade06
	TriggeredBy			   = Upgrade_CHH03 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_06
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade TRLLHelmet_Upgrade07
	TriggeredBy			   = Upgrade_CHH04 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_07
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade TRLLHelmet_Upgrade04-2
	TriggeredBy			   = Upgrade_CHH01 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade TRLLHelmet_Upgrade05-2
	TriggeredBy			   = Upgrade_CHH02 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_05
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade TRLLHelmet_Upgrade06-2
	TriggeredBy			   = Upgrade_CHH03 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_06
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade TRLLHelmet_Upgrade07-2
	TriggeredBy			   = Upgrade_CHH04 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_07
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade TRLLHelmet_Upgrade04-3
	TriggeredBy			   = Upgrade_CHH04 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade TRLLHelmet_Upgrade05-3
	TriggeredBy			   = Upgrade_CHH05 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_05
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade TRLLHelmet_Upgrade06-3
	TriggeredBy			   = Upgrade_CHH06 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_06
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade TRLLHelmet_Upgrade07-3
	TriggeredBy			   = Upgrade_CHH07 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_07
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade TRLLHelmet_Upgrade08
	TriggeredBy			   = Upgrade_CHH06 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_08
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade TRLLHelmet_Upgrade08-2
	TriggeredBy			   = Upgrade_CHH04 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_08
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade TRLLHelmet_Upgrade08-3
	TriggeredBy			   = Upgrade_CHH05 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_08
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade TRLLHelmet_Upgrade08-4
	TriggeredBy			   = Upgrade_CHH05 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_08
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

// Helmets
Behavior = SubObjectsUpgrade FEARCHHelmet_Upgrade03
	TriggeredBy			   = Upgrade_CHH01 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade FEARCHHelmet_Upgrade04
	TriggeredBy			   = Upgrade_CHH02 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade FEARCHHelmet_Upgrade06
	TriggeredBy			   = Upgrade_CHH03 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_05
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

// Helmets
Behavior = SubObjectsUpgrade WIZHelmet_Upgrade01
	TriggeredBy			   = Upgrade_CHH01 Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WIZHelmet_Upgrade02
	TriggeredBy			   = Upgrade_CHH02 Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WIZHelmet_Upgrade03
	TriggeredBy			   = Upgrade_CHH03 Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WIZHelmet_Upgrade04
	TriggeredBy			   = Upgrade_CHH04 Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WIZHelmet_Upgrade05
	TriggeredBy			   = Upgrade_CHH05 Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_05
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WIZHelmet_Upgrade06
	TriggeredBy			   = Upgrade_CHH06 Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_06
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WIZHelmet_Upgrade07
	TriggeredBy			   = Upgrade_CHH07 Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_07
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WIZHelmet_Upgrade01-2
	TriggeredBy			   = Upgrade_CHH01 Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WIZHelmet_Upgrade02-2
	TriggeredBy			   = Upgrade_CHH02 Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WIZHelmet_Upgrade03-2
	TriggeredBy			   = Upgrade_CHH03 Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WIZHelmet_Upgrade04-2
	TriggeredBy			   = Upgrade_CHH04 Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WIZHelmet_Upgrade05-2
	TriggeredBy			   = Upgrade_CHH05 Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_05
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WIZHelmet_Upgrade06-2
	TriggeredBy			   = Upgrade_CHH06 Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_06
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WIZHelmet_Upgrade07-2
	TriggeredBy			   = Upgrade_CHH07 Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_07
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WIZHelmet_Upgrade01-3
	TriggeredBy			   = Upgrade_CHH01 Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WIZHelmet_Upgrade02-3
	TriggeredBy			   = Upgrade_CHH02 Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WIZHelmet_Upgrade03-3
	TriggeredBy			   = Upgrade_CHH03 Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WIZHelmet_Upgrade04-3
	TriggeredBy			   = Upgrade_CHH04 Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WIZHelmet_Upgrade05-3
	TriggeredBy			   = Upgrade_CHH05 Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_05
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WIZHelmet_Upgrade06-3
	TriggeredBy			   = Upgrade_CHH06 Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_06
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade WIZHelmet_Upgrade07-3
	TriggeredBy			   = Upgrade_CHH07 Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_07
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

// Helmets
Behavior = SubObjectsUpgrade SHIMHelmet_Upgrade01
	TriggeredBy			   = Upgrade_CHH01 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade SHIMHelmet_Upgrade02
	TriggeredBy			   = Upgrade_CHH02 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade SHIMHelmet_Upgrade03
	TriggeredBy			   = Upgrade_CHH03 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_00
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade SHIMHelmet_Upgrade04
	TriggeredBy			   = Upgrade_CHH04 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_05
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

// Helmets
Behavior = SubObjectsUpgrade ELFAHelmet_Upgrade01
	TriggeredBy			   = Upgrade_CHH01 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade ELFAHelmet_Upgrade02
	TriggeredBy			   = Upgrade_CHH02 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade ELFAHelmet_Upgrade03
	TriggeredBy			   = Upgrade_CHH03 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

// Helmets
Behavior = SubObjectsUpgrade CaptainOfGondorHelmet_Upgrade01
	TriggeredBy			   = Upgrade_CHH01 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects = HAIR_00
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CaptainOfGondorHelmet_Upgrade02
	TriggeredBy			   = Upgrade_CHH02 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_00
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CaptainOfGondorHelmet_Upgrade03
	TriggeredBy			   = Upgrade_CHH03 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CaptainOfGondorHelmet_Upgrade04
	TriggeredBy			   = Upgrade_CHH04 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CaptainOfGondorHelmet_Upgrade05
	TriggeredBy			   = Upgrade_CHH05 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CaptainOfGondorHelmet_Upgrade06
	TriggeredBy			   = Upgrade_CHH06 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CaptainOfGondorHelmet_Upgrade07
	TriggeredBy			   = Upgrade_CHH07 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_05
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CaptainOfGondorHelmet_Upgrade08
	TriggeredBy			   = Upgrade_CHH08 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_06
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CaptainOfGondorHelmet_Upgrade09
	TriggeredBy			   = Upgrade_CHH09 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_07
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

// Helmets
Behavior = SubObjectsUpgrade CorruptedManHelmet_Upgrade01
	TriggeredBy			   = Upgrade_CHH01  Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CorruptedManHelmet_Upgrade02
	TriggeredBy			   = Upgrade_CHH02  Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CorruptedManHelmet_Upgrade03
	TriggeredBy			   = Upgrade_CHH03  Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CorruptedManHelmet_Upgrade04
	TriggeredBy			   = Upgrade_CHH04  Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CorruptedManHelmet_Upgrade05
	TriggeredBy			   = Upgrade_CHH05  Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_05
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CorruptedManHelmet_Upgrade08
	TriggeredBy			   = Upgrade_CHH06  Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_08 HLMT_09 ; hack to work around error in the art
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CorruptedManHelmet_Upgrade08-5
	TriggeredBy			   = Upgrade_CHH08  Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_08 HLMT_09 ; hack to work around error in the art
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CorruptedManHelmet_Upgrade08-3
	TriggeredBy			   = Upgrade_CHH08  Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_08 HLMT_09 ; hack to work around error in the art
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CorruptedManHelmet_Upgrade08-4
	TriggeredBy			   = Upgrade_CHH08  Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_08 HLMT_09 ; hack to work around error in the art
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CorruptedManHelmet_Upgrade01-2
	TriggeredBy			   = Upgrade_CHH01  Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CorruptedManHelmet_Upgrade02-2
	TriggeredBy			   = Upgrade_CHH02  Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CorruptedManHelmet_Upgrade03-2
	TriggeredBy			   = Upgrade_CHH03  Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CorruptedManHelmet_Upgrade04-2
	TriggeredBy			   = Upgrade_CHH04  Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CorruptedManHelmet_Upgrade05-2
	TriggeredBy			   = Upgrade_CHH05  Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_05
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade CorruptedManHelmet_Upgrade08-2
	TriggeredBy			   = Upgrade_CHH06  Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_08 HLMT_09 ; hack to work around error in the art
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

// Helmets 1
Behavior = SubObjectsUpgrade DWARFHelmet_Upgrade01
	TriggeredBy			   = Upgrade_CHH01 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade DWARFHelmet_Upgrade02
	TriggeredBy			   = Upgrade_CHH02 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade DWARFHelmet_Upgrade03
	TriggeredBy			   = Upgrade_CHH03 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_03A HLMT_03B 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade DWARFHelmet_Upgrade04
	TriggeredBy			   = Upgrade_CHH04 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade DWARFHelmet_Upgrade05
	TriggeredBy			   = Upgrade_CHH05 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_05A HLMT_05B 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade DWARFHelmet_Upgrade06
	TriggeredBy			   = Upgrade_CHH06 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_06
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade DWARFHelmet_Upgrade07
	TriggeredBy			   = Upgrade_CHH07 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_07
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade DWARFHelmet_Upgrade08
	TriggeredBy			   = Upgrade_CHH08 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_08 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade DWARFHelmet_Upgrade09
	TriggeredBy			   = Upgrade_CHH09 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_09 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
// Helmets 2
Behavior = SubObjectsUpgrade DWARFHelmet_Upgrade01-2
	TriggeredBy			   = Upgrade_CHH01 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade DWARFHelmet_Upgrade02-2
	TriggeredBy			   = Upgrade_CHH02 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade DWARFHelmet_Upgrade03-2
	TriggeredBy			   = Upgrade_CHH03 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_03A HLMT_03B 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade DWARFHelmet_Upgrade04-2
	TriggeredBy			   = Upgrade_CHH04 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade DWARFHelmet_Upgrade05-2
	TriggeredBy			   = Upgrade_CHH05 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_05A HLMT_05B 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade DWARFHelmet_Upgrade06-2
	TriggeredBy			   = Upgrade_CHH06 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_06
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade DWARFHelmet_Upgrade07-2
	TriggeredBy			   = Upgrade_CHH07 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_07
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade DWARFHelmet_Upgrade08-2
	TriggeredBy			   = Upgrade_CHH08 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_08 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade DWARFHelmet_Upgrade09-2
	TriggeredBy			   = Upgrade_CHH09 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_09 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

Behavior = SubObjectsUpgrade UrukHelmet_Upgrade01
	TriggeredBy			   = Upgrade_CHH02 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade UrukHelmet_Upgrade02
	TriggeredBy			   = Upgrade_CHH01 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade UrukHelmet_Upgrade03
	TriggeredBy			   = Upgrade_CHH02 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade UrukHelmet_Upgrade04
	TriggeredBy			   = Upgrade_CHH03 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

Behavior = SubObjectsUpgrade UrukHelmet_Upgrade02-2
	TriggeredBy			   = Upgrade_CHH03 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade UrukHelmet_Upgrade03-2
	TriggeredBy			   = Upgrade_CHH04 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_03
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade UrukHelmet_Upgrade04-2
	TriggeredBy			   = Upgrade_CHH05 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HLMT_04
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade UrukHair_Upgrade
	TriggeredBy			   = Upgrade_CHH01 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = HAIR_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End



Behavior = SubObjectsUpgrade Upgrade_CHSP02_Upgrade_CreateAHero_ClassHeroOfTheWest_Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHSP02 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_00 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP03_Upgrade_CreateAHero_ClassHeroOfTheWest_Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHSP03 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP04_Upgrade_CreateAHero_ClassHeroOfTheWest_Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHSP04 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP05_Upgrade_CreateAHero_ClassHeroOfTheWest_Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHSP05 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP06_Upgrade_CreateAHero_ClassHeroOfTheWest_Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHSP06 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_04 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP07_Upgrade_CreateAHero_ClassHeroOfTheWest_Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHSP07 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_05 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP08_Upgrade_CreateAHero_ClassHeroOfTheWest_Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHSP08 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_06 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG01_Upgrade_CreateAHero_ClassHeroOfTheWest_Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHG01 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_00 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG02_Upgrade_CreateAHero_ClassHeroOfTheWest_Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHG02 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG03_Upgrade_CreateAHero_ClassHeroOfTheWest_Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHG03 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG04_Upgrade_CreateAHero_ClassHeroOfTheWest_Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHG04 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHS02_Upgrade_CreateAHero_ClassHeroOfTheWest_Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHS02 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = Shld_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHS03_Upgrade_CreateAHero_ClassHeroOfTheWest_Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHS03 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = Shld_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHS04_Upgrade_CreateAHero_ClassHeroOfTheWest_Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHS04 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = Shld_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHS05_Upgrade_CreateAHero_ClassHeroOfTheWest_Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHS05 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = Shld_04 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHS06_Upgrade_CreateAHero_ClassHeroOfTheWest_Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHS06 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = Shld_05 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHS07_Upgrade_CreateAHero_ClassHeroOfTheWest_Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHS07 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = Shld_06 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHS08_Upgrade_CreateAHero_ClassHeroOfTheWest_Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHS08 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = Shld_07 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHS09_Upgrade_CreateAHero_ClassHeroOfTheWest_Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHS09 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = Shld_08 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHS10_Upgrade_CreateAHero_ClassHeroOfTheWest_Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHS10 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = Shld_09 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB02_Upgrade_CreateAHero_ClassHeroOfTheWest_Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHB02 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB03_Upgrade_CreateAHero_ClassHeroOfTheWest_Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHB03 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_01 BOOT_04 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB04_Upgrade_CreateAHero_ClassHeroOfTheWest_Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHB04 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB05_Upgrade_CreateAHero_ClassHeroOfTheWest_Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHB05 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_02 BOOT_04 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB06_Upgrade_CreateAHero_ClassHeroOfTheWest_Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHB06 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB07_Upgrade_CreateAHero_ClassHeroOfTheWest_Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHB07 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_03 BOOT_04 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD01-Upgrade_CreateAHero_ClassHeroOfTheWest-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD01 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = CHEST_00 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD02-Upgrade_CreateAHero_ClassHeroOfTheWest-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD02 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = CHEST_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD03-Upgrade_CreateAHero_ClassHeroOfTheWest-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD03 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = CHEST_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD04-Upgrade_CreateAHero_ClassHeroOfTheWest-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD04 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = CHEST_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD05-Upgrade_CreateAHero_ClassHeroOfTheWest-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD05 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = CHEST_04 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD06-Upgrade_CreateAHero_ClassHeroOfTheWest-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD06 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = CHEST_05 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD07-Upgrade_CreateAHero_ClassHeroOfTheWest-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD07 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = CHEST_06 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End


Behavior = SubObjectsUpgrade Upgrade_CHSP02-Upgrade_CreateAHero_ClassHeroOfTheWest-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHSP02 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP03-Upgrade_CreateAHero_ClassHeroOfTheWest-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHSP03 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP04-Upgrade_CreateAHero_ClassHeroOfTheWest-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHSP04 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_00 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP05-Upgrade_CreateAHero_ClassHeroOfTheWest-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHSP05 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP06-Upgrade_CreateAHero_ClassHeroOfTheWest-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHSP06 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_04 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG02-Upgrade_CreateAHero_ClassHeroOfTheWest-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHG02 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG03-Upgrade_CreateAHero_ClassHeroOfTheWest-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHG03 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG04-Upgrade_CreateAHero_ClassHeroOfTheWest-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHG04 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_00 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG05-Upgrade_CreateAHero_ClassHeroOfTheWest-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHG05 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG06-Upgrade_CreateAHero_ClassHeroOfTheWest-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHG06 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_04 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHS02-Upgrade_CreateAHero_ClassHeroOfTheWest-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHS02 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = Shld_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHS03-Upgrade_CreateAHero_ClassHeroOfTheWest-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHS03 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = Shld_02 SHIELD_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHS04-Upgrade_CreateAHero_ClassHeroOfTheWest-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHS04 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = Shld_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHS05-Upgrade_CreateAHero_ClassHeroOfTheWest-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHS05 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = Shld_04 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB02-Upgrade_CreateAHero_ClassHeroOfTheWest-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHB02 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB03-Upgrade_CreateAHero_ClassHeroOfTheWest-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHB03 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB04-Upgrade_CreateAHero_ClassHeroOfTheWest-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHB04 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_00 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB05-Upgrade_CreateAHero_ClassHeroOfTheWest-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHB05 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_02 BOOT_04 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB06-Upgrade_CreateAHero_ClassHeroOfTheWest-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHB06 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD01-Upgrade_CreateAHero_ClassHeroOfTheWest-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHBOD01 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHHW_SM_01.tga       0 CHHW_SM.tga
        UpgradeTexture		   = CHHW_SM_02.tga       0 CHHW_SM.tga
        UpgradeTexture		   = CHHW_SM_03.tga       0 CHHW_SM.tga
        UpgradeTexture		   = CHHW_SM_04.tga       0 CHHW_SM.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD02-Upgrade_CreateAHero_ClassHeroOfTheWest-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHBOD02 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHHW_SM.tga       0 CHHW_SM_01.tga
        UpgradeTexture		   = CHHW_SM_02.tga       0 CHHW_SM_01.tga
        UpgradeTexture		   = CHHW_SM_03.tga       0 CHHW_SM_01.tga
        UpgradeTexture		   = CHHW_SM_04.tga       0 CHHW_SM_01.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD03-Upgrade_CreateAHero_ClassHeroOfTheWest-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHBOD03 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHHW_SM.tga       0 CHHW_SM_02.tga
        UpgradeTexture		   = CHHW_SM_01.tga       0 CHHW_SM_02.tga
        UpgradeTexture		   = CHHW_SM_03.tga       0 CHHW_SM_02.tga
        UpgradeTexture		   = CHHW_SM_04.tga       0 CHHW_SM_02.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD04-Upgrade_CreateAHero_ClassHeroOfTheWest-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHBOD04 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHHW_SM.tga       0 CHHW_SM_03.tga
        UpgradeTexture		   = CHHW_SM_01.tga       0 CHHW_SM_03.tga
        UpgradeTexture		   = CHHW_SM_02.tga       0 CHHW_SM_03.tga
        UpgradeTexture		   = CHHW_SM_04.tga       0 CHHW_SM_03.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD05-Upgrade_CreateAHero_ClassHeroOfTheWest-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHBOD05 Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHHW_SM.tga       0 CHHW_SM_04.tga
        UpgradeTexture		   = CHHW_SM_01.tga       0 CHHW_SM_04.tga
        UpgradeTexture		   = CHHW_SM_02.tga       0 CHHW_SM_04.tga
        UpgradeTexture		   = CHHW_SM_03.tga       0 CHHW_SM_04.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

Behavior = SubObjectsUpgrade Upgrade_CHSP02-Upgrade_CreateAHero_ClassIstariWizard-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHSP02 Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP03-Upgrade_CreateAHero_ClassIstariWizard-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHSP03 Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD01-Upgrade_CreateAHero_ClassIstariWizard-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD01 Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHWZ_WD_01.tga       0 CHWZ_WD.tga
        UpgradeTexture		   = CHWZ_WD_02.tga       0 CHWZ_WD.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD02-Upgrade_CreateAHero_ClassIstariWizard-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD02 Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHWZ_WD.tga       0 CHWZ_WD_01.tga
        UpgradeTexture		   = CHWZ_WD_02.tga       0 CHWZ_WD_01.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD03-Upgrade_CreateAHero_ClassIstariWizard-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD03 Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHWZ_WD.tga       0 CHWZ_WD_02.tga
        UpgradeTexture		   = CHWZ_WD_01.tga       0 CHWZ_WD_02.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP02-Upgrade_CreateAHero_ClassIstariWizard-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHSP02 Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP03-Upgrade_CreateAHero_ClassIstariWizard-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHSP03 Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD01-Upgrade_CreateAHero_ClassIstariWizard-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHBOD01 Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHWZ_WD_01.tga       0 CHWZ_WD.tga
        UpgradeTexture		   = CHWZ_WD_02.tga       0 CHWZ_WD.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD02-Upgrade_CreateAHero_ClassIstariWizard-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHBOD02 Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHWZ_WD.tga       0 CHWZ_WD_01.tga
        UpgradeTexture		   = CHWZ_WD_02.tga       0 CHWZ_WD_01.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD03-Upgrade_CreateAHero_ClassIstariWizard-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHBOD03 Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHWZ_WD.tga       0 CHWZ_WD_02.tga
        UpgradeTexture		   = CHWZ_WD_01.tga       0 CHWZ_WD_02.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

Behavior = SubObjectsUpgrade Upgrade_CHSP02-Upgrade_CreateAHero_ClassIstariWizard-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHSP02 Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP03-Upgrade_CreateAHero_ClassIstariWizard-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHSP03 Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD01-Upgrade_CreateAHero_ClassIstariWizard-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHBOD01 Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHWZ_WD_01.tga       0 CHWZ_WD.tga
        UpgradeTexture		   = CHWZ_WD_02.tga       0 CHWZ_WD.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD02-Upgrade_CreateAHero_ClassIstariWizard-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHBOD02 Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHWZ_WD.tga       0 CHWZ_WD_01.tga
        UpgradeTexture		   = CHWZ_WD_02.tga       0 CHWZ_WD_01.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD03-Upgrade_CreateAHero_ClassIstariWizard-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHBOD03 Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHWZ_WD.tga       0 CHWZ_WD_02.tga
        UpgradeTexture		   = CHWZ_WD_01.tga       0 CHWZ_WD_02.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

Behavior = SubObjectsUpgrade Upgrade_CHSP02-Upgrade_CreateAHero_ClassArcher-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHSP02 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP03-Upgrade_CreateAHero_ClassArcher-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHSP03 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP04-Upgrade_CreateAHero_ClassArcher-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHSP04 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP05-Upgrade_CreateAHero_ClassArcher-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHSP05 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_04 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG02-Upgrade_CreateAHero_ClassArcher-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHG02 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG03-Upgrade_CreateAHero_ClassArcher-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHG03 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG04-Upgrade_CreateAHero_ClassArcher-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHG04 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG05-Upgrade_CreateAHero_ClassArcher-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHG05 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_04 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB02-Upgrade_CreateAHero_ClassArcher-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHB02 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB03-Upgrade_CreateAHero_ClassArcher-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHB03 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB04-Upgrade_CreateAHero_ClassArcher-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHB04 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD01-Upgrade_CreateAHero_ClassArcher-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD01 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHAR_EL_01.tga       0 CHAR_EL_00.tga
        UpgradeTexture		   = CHAR_EL_02.tga       0 CHAR_EL_00.tga
        UpgradeTexture		   = CHAR_EL_03.tga       0 CHAR_EL_00.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD02-Upgrade_CreateAHero_ClassArcher-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD02 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHAR_EL_00.tga       0 CHAR_EL_01.tga
        UpgradeTexture		   = CHAR_EL_02.tga       0 CHAR_EL_01.tga
        UpgradeTexture		   = CHAR_EL_03.tga       0 CHAR_EL_01.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD03-Upgrade_CreateAHero_ClassArcher-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD03 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHAR_EL_00.tga       0 CHAR_EL_02.tga
        UpgradeTexture		   = CHAR_EL_01.tga       0 CHAR_EL_02.tga
        UpgradeTexture		   = CHAR_EL_03.tga       0 CHAR_EL_02.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD04-Upgrade_CreateAHero_ClassArcher-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD04 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHAR_EL_00.tga       0 CHAR_EL_03.tga
        UpgradeTexture		   = CHAR_EL_01.tga       0 CHAR_EL_03.tga
        UpgradeTexture		   = CHAR_EL_02.tga       0 CHAR_EL_03.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

Behavior = SubObjectsUpgrade Upgrade_CHSP02-Upgrade_CreateAHero_ClassArcher-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHSP02 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP03-Upgrade_CreateAHero_ClassArcher-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHSP03 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP04-Upgrade_CreateAHero_ClassArcher-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHSP04 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP05-Upgrade_CreateAHero_ClassArcher-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHSP05 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_04 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP06-Upgrade_CreateAHero_ClassArcher-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHSP06 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_05 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP07-Upgrade_CreateAHero_ClassArcher-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHSP07 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_06 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG02-Upgrade_CreateAHero_ClassArcher-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHG02 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG03-Upgrade_CreateAHero_ClassArcher-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHG03 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG04-Upgrade_CreateAHero_ClassArcher-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHG04 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG05-Upgrade_CreateAHero_ClassArcher-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHG05 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_04 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG06-Upgrade_CreateAHero_ClassArcher-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHG06 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_05 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG07-Upgrade_CreateAHero_ClassArcher-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHG07 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_07 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB02-Upgrade_CreateAHero_ClassArcher-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHB02 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB03-Upgrade_CreateAHero_ClassArcher-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHB03 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB04-Upgrade_CreateAHero_ClassArcher-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHB04 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB05-Upgrade_CreateAHero_ClassArcher-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHB05 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_04 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB06-Upgrade_CreateAHero_ClassArcher-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHB06 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_05 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB07-Upgrade_CreateAHero_ClassArcher-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHB07 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_06 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD01-Upgrade_CreateAHero_ClassArcher-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHBOD01 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHAR_FE_01.tga       0 CHAR_FE.tga
        UpgradeTexture		   = CHAR_FE_03.tga       0 CHAR_FE.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD02-Upgrade_CreateAHero_ClassArcher-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHBOD02 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHAR_FE.tga       0 CHAR_FE_01.tga
        UpgradeTexture		   = CHAR_FE_03.tga       0 CHAR_FE_01.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD03-Upgrade_CreateAHero_ClassArcher-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHBOD03 Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHAR_FE.tga       0 CHAR_FE_03.tga
        UpgradeTexture		   = CHAR_FE_01.tga       0 CHAR_FE_03.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

Behavior = SubObjectsUpgrade Upgrade_CHSP02-Upgrade_CreateAHero_ClassCorruptedMan-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHSP02 Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP03-Upgrade_CreateAHero_ClassCorruptedMan-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHSP03 Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP04-Upgrade_CreateAHero_ClassCorruptedMan-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHSP04 Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG02-Upgrade_CreateAHero_ClassCorruptedMan-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHG02 Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG03-Upgrade_CreateAHero_ClassCorruptedMan-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHG03 Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG04-Upgrade_CreateAHero_ClassCorruptedMan-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHG04 Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB02-Upgrade_CreateAHero_ClassCorruptedMan-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHB02 Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB03-Upgrade_CreateAHero_ClassCorruptedMan-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHB03 Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB04-Upgrade_CreateAHero_ClassCorruptedMan-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHB04 Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD01-Upgrade_CreateAHero_ClassCorruptedMan-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD01 Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHCM_CM_01.tga       0 CHCM_CM.tga
        UpgradeTexture		   = CHCM_CM_02.tga       0 CHCM_CM.tga
        UpgradeTexture		   = CHCM_CM_03.tga       0 CHCM_CM.tga
        UpgradeTexture		   = CHCM_CM_04.tga       0 CHCM_CM.tga
        UpgradeTexture		   = CHCM_CM_07.tga       0 CHCM_CM.tga
        UpgradeTexture		   = CHCM_CM_08.tga       0 CHCM_CM.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD02-Upgrade_CreateAHero_ClassCorruptedMan-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD02 Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHCM_CM.tga       0 CHCM_CM_01.tga
        UpgradeTexture		   = CHCM_CM_02.tga       0 CHCM_CM_01.tga
        UpgradeTexture		   = CHCM_CM_03.tga       0 CHCM_CM_01.tga
        UpgradeTexture		   = CHCM_CM_04.tga       0 CHCM_CM_01.tga
        UpgradeTexture		   = CHCM_CM_07.tga       0 CHCM_CM_01.tga
        UpgradeTexture		   = CHCM_CM_08.tga       0 CHCM_CM_01.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD03-Upgrade_CreateAHero_ClassCorruptedMan-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD03 Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHCM_CM.tga       0 CHCM_CM_02.tga
        UpgradeTexture		   = CHCM_CM_01.tga       0 CHCM_CM_02.tga
        UpgradeTexture		   = CHCM_CM_03.tga       0 CHCM_CM_02.tga
        UpgradeTexture		   = CHCM_CM_04.tga       0 CHCM_CM_02.tga
        UpgradeTexture		   = CHCM_CM_07.tga       0 CHCM_CM_02.tga
        UpgradeTexture		   = CHCM_CM_08.tga       0 CHCM_CM_02.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD04-Upgrade_CreateAHero_ClassCorruptedMan-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD04 Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHCM_CM.tga       0 CHCM_CM_03.tga
        UpgradeTexture		   = CHCM_CM_01.tga       0 CHCM_CM_03.tga
        UpgradeTexture		   = CHCM_CM_02.tga       0 CHCM_CM_03.tga
        UpgradeTexture		   = CHCM_CM_04.tga       0 CHCM_CM_03.tga
        UpgradeTexture		   = CHCM_CM_07.tga       0 CHCM_CM_03.tga
        UpgradeTexture		   = CHCM_CM_08.tga       0 CHCM_CM_03.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD05-Upgrade_CreateAHero_ClassCorruptedMan-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD05 Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHCM_CM.tga       0 CHCM_CM_04.tga
        UpgradeTexture		   = CHCM_CM_01.tga       0 CHCM_CM_04.tga
        UpgradeTexture		   = CHCM_CM_02.tga       0 CHCM_CM_04.tga
        UpgradeTexture		   = CHCM_CM_03.tga       0 CHCM_CM_04.tga
        UpgradeTexture		   = CHCM_CM_07.tga       0 CHCM_CM_04.tga
        UpgradeTexture		   = CHCM_CM_08.tga       0 CHCM_CM_04.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD06-Upgrade_CreateAHero_ClassCorruptedMan-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD06 Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHCM_CM.tga       0 CHCM_CM_07.tga
        UpgradeTexture		   = CHCM_CM_01.tga       0 CHCM_CM_07.tga
        UpgradeTexture		   = CHCM_CM_02.tga       0 CHCM_CM_07.tga
        UpgradeTexture		   = CHCM_CM_03.tga       0 CHCM_CM_07.tga
        UpgradeTexture		   = CHCM_CM_04.tga       0 CHCM_CM_07.tga
        UpgradeTexture		   = CHCM_CM_08.tga       0 CHCM_CM_07.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD07-Upgrade_CreateAHero_ClassCorruptedMan-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD07 Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHCM_CM.tga       0 CHCM_CM_08.tga
        UpgradeTexture		   = CHCM_CM_01.tga       0 CHCM_CM_08.tga
        UpgradeTexture		   = CHCM_CM_02.tga       0 CHCM_CM_08.tga
        UpgradeTexture		   = CHCM_CM_03.tga       0 CHCM_CM_08.tga
        UpgradeTexture		   = CHCM_CM_04.tga       0 CHCM_CM_08.tga
        UpgradeTexture		   = CHCM_CM_07.tga       0 CHCM_CM_08.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD04-Upgrade_CreateAHero_ClassCorruptedMan-Upgrade_CreateAHero_SubClass_12	
	TriggeredBy	= Upgrade_CHBOD04 Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = CHEST_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD05-Upgrade_CreateAHero_ClassCorruptedMan-Upgrade_CreateAHero_SubClass_12	
	TriggeredBy	= Upgrade_CHBOD05 Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = CHEST_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP02-Upgrade_CreateAHero_ClassCorruptedMan-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHSP02 Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP03-Upgrade_CreateAHero_ClassCorruptedMan-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHSP03 Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP04-Upgrade_CreateAHero_ClassCorruptedMan-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHSP04 Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG02-Upgrade_CreateAHero_ClassCorruptedMan-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHG02 Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG03-Upgrade_CreateAHero_ClassCorruptedMan-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHG03 Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG04-Upgrade_CreateAHero_ClassCorruptedMan-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHG04 Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB02-Upgrade_CreateAHero_ClassCorruptedMan-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHB02 Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB03-Upgrade_CreateAHero_ClassCorruptedMan-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHB03 Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB04-Upgrade_CreateAHero_ClassCorruptedMan-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHB04 Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD01-Upgrade_CreateAHero_ClassCorruptedMan-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHBOD01 Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHCM_FN_01.tga       0 CHCM_FN.tga
        UpgradeTexture		   = CHCM_FN_02.tga       0 CHCM_FN.tga
        UpgradeTexture		   = CHCM_FN_03.tga       0 CHCM_FN.tga
        UpgradeTexture		   = CHCM_FN_04.tga       0 CHCM_FN.tga
        UpgradeTexture		   = CHCM_FN_07.tga       0 CHCM_FN.tga
        UpgradeTexture		   = CHCM_FN_08.tga       0 CHCM_FN.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD02-Upgrade_CreateAHero_ClassCorruptedMan-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHBOD02 Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHCM_FN.tga       0 CHCM_FN_01.tga
        UpgradeTexture		   = CHCM_FN_02.tga       0 CHCM_FN_01.tga
        UpgradeTexture		   = CHCM_FN_03.tga       0 CHCM_FN_01.tga
        UpgradeTexture		   = CHCM_FN_04.tga       0 CHCM_FN_01.tga
        UpgradeTexture		   = CHCM_FN_07.tga       0 CHCM_FN_01.tga
        UpgradeTexture		   = CHCM_FN_08.tga       0 CHCM_FN_01.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD03-Upgrade_CreateAHero_ClassCorruptedMan-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHBOD03 Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHCM_FN.tga       0 CHCM_FN_02.tga
        UpgradeTexture		   = CHCM_FN_01.tga       0 CHCM_FN_02.tga
        UpgradeTexture		   = CHCM_FN_03.tga       0 CHCM_FN_02.tga
        UpgradeTexture		   = CHCM_FN_04.tga       0 CHCM_FN_02.tga
        UpgradeTexture		   = CHCM_FN_07.tga       0 CHCM_FN_02.tga
        UpgradeTexture		   = CHCM_FN_08.tga       0 CHCM_FN_02.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD04-Upgrade_CreateAHero_ClassCorruptedMan-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHBOD04 Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHCM_FN.tga       0 CHCM_FN_03.tga
        UpgradeTexture		   = CHCM_FN_01.tga       0 CHCM_FN_03.tga
        UpgradeTexture		   = CHCM_FN_02.tga       0 CHCM_FN_03.tga
        UpgradeTexture		   = CHCM_FN_04.tga       0 CHCM_FN_03.tga
        UpgradeTexture		   = CHCM_FN_07.tga       0 CHCM_FN_03.tga
        UpgradeTexture		   = CHCM_FN_08.tga       0 CHCM_FN_03.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD05-Upgrade_CreateAHero_ClassCorruptedMan-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHBOD05 Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHCM_FN.tga       0 CHCM_FN_04.tga
        UpgradeTexture		   = CHCM_FN_01.tga       0 CHCM_FN_04.tga
        UpgradeTexture		   = CHCM_FN_02.tga       0 CHCM_FN_04.tga
        UpgradeTexture		   = CHCM_FN_03.tga       0 CHCM_FN_04.tga
        UpgradeTexture		   = CHCM_FN_07.tga       0 CHCM_FN_04.tga
        UpgradeTexture		   = CHCM_FN_08.tga       0 CHCM_FN_04.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD06-Upgrade_CreateAHero_ClassCorruptedMan-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHBOD06 Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHCM_FN.tga       0 CHCM_FN_07.tga
        UpgradeTexture		   = CHCM_FN_01.tga       0 CHCM_FN_07.tga
        UpgradeTexture		   = CHCM_FN_02.tga       0 CHCM_FN_07.tga
        UpgradeTexture		   = CHCM_FN_03.tga       0 CHCM_FN_07.tga
        UpgradeTexture		   = CHCM_FN_04.tga       0 CHCM_FN_07.tga
        UpgradeTexture		   = CHCM_FN_08.tga       0 CHCM_FN_07.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD07-Upgrade_CreateAHero_ClassCorruptedMan-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHBOD07 Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHCM_FN.tga       0 CHCM_FN_08.tga
        UpgradeTexture		   = CHCM_FN_01.tga       0 CHCM_FN_08.tga
        UpgradeTexture		   = CHCM_FN_02.tga       0 CHCM_FN_08.tga
        UpgradeTexture		   = CHCM_FN_03.tga       0 CHCM_FN_08.tga
        UpgradeTexture		   = CHCM_FN_04.tga       0 CHCM_FN_08.tga
        UpgradeTexture		   = CHCM_FN_07.tga       0 CHCM_FN_08.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD04-Upgrade_CreateAHero_ClassCorruptedMan-Upgrade_CreateAHero_SubClass_02	
	TriggeredBy	= Upgrade_CHBOD04 Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = CHEST_02
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD05-Upgrade_CreateAHero_ClassCorruptedMan-Upgrade_CreateAHero_SubClass_02	
	TriggeredBy	= Upgrade_CHBOD05 Upgrade_CreateAHero_ClassCorruptedMan Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = CHEST_01
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

Behavior = SubObjectsUpgrade Upgrade_CHSP02-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHSP02 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP03-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHSP03 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP04-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHSP04 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP05-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHSP05 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_05 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP06-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHSP06 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_06 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP07-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHSP07 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_07 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP08-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHSP08 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_08 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG01-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHG01 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BEARD_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG02-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHG02 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BEARD_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG03-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHG03 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BEARD_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG04-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHG04 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BEARD_04 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHS02-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHS02 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = Shld_01 AXE_10 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHS03-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHS03 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = Shld_02 AXE_11 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHS04-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHS04 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = Shld_03 AXE_12 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHS05-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHS05 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = Shld_04 AXE_13 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHS06-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHS06 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = Shld_05 AXE_14 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB02-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHB02 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = AUX_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB03-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHB03 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = AUX_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB04-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHB04 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = AUX_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB05-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHB05 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = AUX_04 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB06-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHB06 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = AUX_05 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB07-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHB07 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = AUX_06 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB08-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHB08 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = AUX_07 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB09-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHB09 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = AUX_08 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD01-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD01 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BODY_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD02-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD02 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BODY_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD03-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD03 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BODY_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD04-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD04 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BODY_04 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD05-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD05 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BODY_05 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD06-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD06 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BODY_06 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD07-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD07 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BODY_07 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD08-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD08 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BODY_08 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

Behavior = SubObjectsUpgrade Upgrade_CHSP02-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHSP02 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP03-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHSP03 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP04-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHSP04 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP05-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHSP05 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_05 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP06-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHSP06 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_06 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP07-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHSP07 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_07 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP08-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHSP08 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_09 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG01-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHG01 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BEARD_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG02-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHG02 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BEARD_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG03-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHG03 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BEARD_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG04-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHG04 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BEARD_04 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHS01-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHS01 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = Shld_01 AXE_10 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHS02-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHS02 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = Shld_02 AXE_11 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHS03-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHS03 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = Shld_03 AXE_12 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHS04-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHS04 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = Shld_04 AXE_13 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHS05-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHS05 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = Shld_05 AXE_14 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHS06-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHS06 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = Shld_06 AXE_15 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHS07-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHS07 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = Shld_07 AXE_16 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHS08-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHS08 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = Shld_08 AXE_17 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHS09-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHS09 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = Shld_09 AXE_18 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB01-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHB01 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = AUX_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB02-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHB02 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = AUX_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB03-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHB03 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = AUX_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB04-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHB04 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = AUX_04 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB05-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHB05 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = AUX_05 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB06-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHB06 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = AUX_06 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB07-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHB07 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = AUX_07 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB08-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHB08 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = AUX_08 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD01-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHBOD01 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BODY_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD02-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHBOD02 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BODY_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD03-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHBOD03 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BODY_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD04-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHBOD04 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BODY_04 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD05-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHBOD05 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BODY_05 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD06-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHBOD06 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BODY_06 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD07-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHBOD07 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BODY_07 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD08-Upgrade_CreateAHero_ClassDwarf-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHBOD08 Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BODY_08 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

Behavior = SubObjectsUpgrade Upgrade_CHSP02-Upgrade_CreateAHero_ClassServantsOfSauron-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHSP02 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP03-Upgrade_CreateAHero_ClassServantsOfSauron-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHSP03 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP04-Upgrade_CreateAHero_ClassServantsOfSauron-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHSP04 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP05-Upgrade_CreateAHero_ClassServantsOfSauron-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHSP05 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_04 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP06-Upgrade_CreateAHero_ClassServantsOfSauron-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHSP06 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_05 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG02-Upgrade_CreateAHero_ClassServantsOfSauron-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHG02 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG03-Upgrade_CreateAHero_ClassServantsOfSauron-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHG03 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG04-Upgrade_CreateAHero_ClassServantsOfSauron-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHG04 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG05-Upgrade_CreateAHero_ClassServantsOfSauron-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHG05 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_04 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG06-Upgrade_CreateAHero_ClassServantsOfSauron-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHG06 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_05 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB02-Upgrade_CreateAHero_ClassServantsOfSauron-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHB02 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB03-Upgrade_CreateAHero_ClassServantsOfSauron-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHB03 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB04-Upgrade_CreateAHero_ClassServantsOfSauron-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHB04 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB05-Upgrade_CreateAHero_ClassServantsOfSauron-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHB05 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_04 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB06-Upgrade_CreateAHero_ClassServantsOfSauron-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHB06 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_05 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB07-Upgrade_CreateAHero_ClassServantsOfSauron-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHB07 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_06 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD01-Upgrade_CreateAHero_ClassServantsOfSauron-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHBOD01 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHSS_OR_01.tga       0 CHSS_OR.tga
        UpgradeTexture		   = CHSS_OR_05.tga       0 CHSS_OR.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD02-Upgrade_CreateAHero_ClassServantsOfSauron-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHBOD02 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHSS_OR.tga       0 CHSS_OR_01.tga
        UpgradeTexture		   = CHSS_OR_05.tga       0 CHSS_OR_01.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD03-Upgrade_CreateAHero_ClassServantsOfSauron-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHBOD03 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHSS_OR.tga       0 CHSS_OR_05.tga
        UpgradeTexture		   = CHSS_OR_01.tga       0 CHSS_OR_05.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

Behavior = SubObjectsUpgrade Upgrade_CHSP01-Upgrade_CreateAHero_ClassServantsOfSauron-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHSP01 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP02-Upgrade_CreateAHero_ClassServantsOfSauron-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHSP02 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP03-Upgrade_CreateAHero_ClassServantsOfSauron-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHSP03 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP04-Upgrade_CreateAHero_ClassServantsOfSauron-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHSP04 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_04 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG02-Upgrade_CreateAHero_ClassServantsOfSauron-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHG02 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG03-Upgrade_CreateAHero_ClassServantsOfSauron-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHG03 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG04-Upgrade_CreateAHero_ClassServantsOfSauron-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHG04 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG05-Upgrade_CreateAHero_ClassServantsOfSauron-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHG05 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_04 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHS02-Upgrade_CreateAHero_ClassServantsOfSauron-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHS02 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SHLD_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHS03-Upgrade_CreateAHero_ClassServantsOfSauron-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHS03 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SHLD_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB02-Upgrade_CreateAHero_ClassServantsOfSauron-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHB02 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB03-Upgrade_CreateAHero_ClassServantsOfSauron-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHB03 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB04-Upgrade_CreateAHero_ClassServantsOfSauron-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHB04 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD01-Upgrade_CreateAHero_ClassServantsOfSauron-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHBOD01 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHSS_UKLeather.tga       0 CHSS_UK.tga
        UpgradeTexture		   = CHSS_UK_FA.tga       0 CHSS_UK.tga
        UpgradeTexture		   = CHSS_UK_04.tga       0 CHSS_UK.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD02-Upgrade_CreateAHero_ClassServantsOfSauron-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHBOD02 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHSS_UK.tga       0 CHSS_UKLeather.tga
        UpgradeTexture		   = CHSS_UK_FA.tga       0 CHSS_UKLeather.tga
        UpgradeTexture		   = CHSS_UK_04.tga       0 CHSS_UKLeather.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD03-Upgrade_CreateAHero_ClassServantsOfSauron-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHBOD03 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHSS_UK.tga       0 CHSS_UK_FA.tga
        UpgradeTexture		   = CHSS_UKLeather.tga       0 CHSS_UK_FA.tga
        UpgradeTexture		   = CHSS_UK_04.tga       0 CHSS_UK_FA.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD04-Upgrade_CreateAHero_ClassServantsOfSauron-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHBOD04 Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHSS_UK.tga       0 CHSS_UK_04.tga
        UpgradeTexture		   = CHSS_UKLeather.tga       0 CHSS_UK_04.tga
        UpgradeTexture		   = CHSS_UK_FA.tga       0 CHSS_UK_04.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

Behavior = SubObjectsUpgrade Upgrade_CHSP02-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHSP02 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP03-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHSP03 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP04-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHSP04 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP05-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHSP05 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_04 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP06-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHSP06 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_05 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP07-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHSP07 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_06 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG02-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHG02 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG03-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHG03 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG04-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHG04 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG05-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHG05 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_04 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG06-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHG06 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_05 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG07-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHG07 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_10 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB02-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHB02 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD01-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD01 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHSS_UKLeather.tga       0 CHSS_UK.tga
        UpgradeTexture		   = CHSS_UK_FA.tga       0 CHSS_UK.tga
        UpgradeTexture		   = CHSS_UK_04.tga       0 CHSS_UK.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD02-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD02 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = CHEST_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD03-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_0	
	TriggeredBy	= Upgrade_CHBOD03 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_0
	RequiresAllTriggers = Yes
	ShowSubObjects		   = CHEST_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

Behavior = SubObjectsUpgrade Upgrade_CHSP02-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHSP02 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG02-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHG02 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_06 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG03-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHG03 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_07 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG04-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHG04 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_08 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG05-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHG05 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_09 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG06-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHG06 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_10 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB02-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHB02 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD01-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHBOD01 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHTL_ST_04.tga       0 CHTL_ST_03.tga
        UpgradeTexture		   = CHTL_ST_06.tga       0 CHTL_ST_03.tga
        UpgradeTexture		   = CHTL_ST_07.tga       0 CHTL_ST_03.tga
        UpgradeTexture		   = CHTL_ST_00.tga       0 CHTL_ST_03.tga
        UpgradeTexture		   = CHTL_ST_05.tga       0 CHTL_ST_03.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD02-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHBOD02 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHTL_ST_03.tga       0 CHTL_ST_04.tga
        UpgradeTexture		   = CHTL_ST_06.tga       0 CHTL_ST_04.tga
        UpgradeTexture		   = CHTL_ST_07.tga       0 CHTL_ST_04.tga
        UpgradeTexture		   = CHTL_ST_00.tga       0 CHTL_ST_04.tga
        UpgradeTexture		   = CHTL_ST_05.tga       0 CHTL_ST_04.tga
	ShowSubObjects		   = CHEST_03
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD03-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHBOD03 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHTL_ST_03.tga       0 CHTL_ST_06.tga
        UpgradeTexture		   = CHTL_ST_04.tga       0 CHTL_ST_06.tga
        UpgradeTexture		   = CHTL_ST_07.tga       0 CHTL_ST_06.tga
        UpgradeTexture		   = CHTL_ST_00.tga       0 CHTL_ST_06.tga
        UpgradeTexture		   = CHTL_ST_05.tga       0 CHTL_ST_06.tga
	ShowSubObjects		   = CHEST_01
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD04-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHBOD04 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHTL_ST_03.tga       0 CHTL_ST_07.tga
        UpgradeTexture		   = CHTL_ST_04.tga       0 CHTL_ST_07.tga
        UpgradeTexture		   = CHTL_ST_06.tga       0 CHTL_ST_07.tga
        UpgradeTexture		   = CHTL_ST_00.tga       0 CHTL_ST_07.tga
        UpgradeTexture		   = CHTL_ST_05.tga       0 CHTL_ST_07.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD05-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHBOD05 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHTL_ST_03.tga       0 CHTL_ST_00.tga
        UpgradeTexture		   = CHTL_ST_04.tga       0 CHTL_ST_00.tga
        UpgradeTexture		   = CHTL_ST_06.tga       0 CHTL_ST_00.tga
        UpgradeTexture		   = CHTL_ST_07.tga       0 CHTL_ST_00.tga
        UpgradeTexture		   = CHTL_ST_05.tga       0 CHTL_ST_00.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD06-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHBOD06 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHTL_ST_03.tga       0 CHTL_ST_05.tga
        UpgradeTexture		   = CHTL_ST_04.tga       0 CHTL_ST_05.tga
        UpgradeTexture		   = CHTL_ST_06.tga       0 CHTL_ST_05.tga
        UpgradeTexture		   = CHTL_ST_07.tga       0 CHTL_ST_05.tga
        UpgradeTexture		   = CHTL_ST_00.tga       0 CHTL_ST_05.tga
	ShowSubObjects		   = CHEST_03
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD07-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHBOD07 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHTL_ST_03.tga       0 CHTL_ST_06.tga
        UpgradeTexture		   = CHTL_ST_04.tga       0 CHTL_ST_06.tga
        UpgradeTexture		   = CHTL_ST_07.tga       0 CHTL_ST_06.tga
        UpgradeTexture		   = CHTL_ST_00.tga       0 CHTL_ST_06.tga
        UpgradeTexture		   = CHTL_ST_05.tga       0 CHTL_ST_06.tga
	ShowSubObjects		   = CHEST_02
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD08-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_1	
	TriggeredBy	= Upgrade_CHBOD08 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_1
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHTL_ST_03.tga       0 CHTL_ST_06.tga
        UpgradeTexture		   = CHTL_ST_04.tga       0 CHTL_ST_06.tga
        UpgradeTexture		   = CHTL_ST_07.tga       0 CHTL_ST_06.tga
        UpgradeTexture		   = CHTL_ST_00.tga       0 CHTL_ST_06.tga
        UpgradeTexture		   = CHTL_ST_05.tga       0 CHTL_ST_06.tga
	ShowSubObjects		   = CHEST_03
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

Behavior = SubObjectsUpgrade Upgrade_CHSP02-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHSP02 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG02-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHG02 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_06 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG03-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHG03 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_07 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG04-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHG04 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_08 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG05-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHG05 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_09 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG06-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHG06 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_10 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB02-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHB02 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD01-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHBOD01 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHTL_HT_04.tga       0 CHTL_HT_03.tga
        UpgradeTexture		   = CHTL_HT_05.tga       0 CHTL_HT_03.tga
        UpgradeTexture		   = CHTL_HT_06.tga       0 CHTL_HT_03.tga
        UpgradeTexture		   = CHTL_HT_07.tga       0 CHTL_HT_03.tga
        UpgradeTexture		   = CHTL_HT_00.tga       0 CHTL_HT_03.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD02-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHBOD02 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHTL_HT_03.tga       0 CHTL_HT_04.tga
        UpgradeTexture		   = CHTL_HT_05.tga       0 CHTL_HT_04.tga
        UpgradeTexture		   = CHTL_HT_06.tga       0 CHTL_HT_04.tga
        UpgradeTexture		   = CHTL_HT_07.tga       0 CHTL_HT_04.tga
        UpgradeTexture		   = CHTL_HT_00.tga       0 CHTL_HT_04.tga
	ShowSubObjects		   = CHEST_03
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD03-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHBOD03 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHTL_HT_03.tga       0 CHTL_HT_05.tga
        UpgradeTexture		   = CHTL_HT_04.tga       0 CHTL_HT_05.tga
        UpgradeTexture		   = CHTL_HT_06.tga       0 CHTL_HT_05.tga
        UpgradeTexture		   = CHTL_HT_07.tga       0 CHTL_HT_05.tga
        UpgradeTexture		   = CHTL_HT_00.tga       0 CHTL_HT_05.tga
	ShowSubObjects		   = CHEST_03
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD04-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHBOD04 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHTL_HT_03.tga       0 CHTL_HT_06.tga
        UpgradeTexture		   = CHTL_HT_04.tga       0 CHTL_HT_06.tga
        UpgradeTexture		   = CHTL_HT_05.tga       0 CHTL_HT_06.tga
        UpgradeTexture		   = CHTL_HT_07.tga       0 CHTL_HT_06.tga
        UpgradeTexture		   = CHTL_HT_00.tga       0 CHTL_HT_06.tga
	ShowSubObjects		   = CHEST_03
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD05-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHBOD05 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHTL_HT_03.tga       0 CHTL_HT_07.tga
        UpgradeTexture		   = CHTL_HT_04.tga       0 CHTL_HT_07.tga
        UpgradeTexture		   = CHTL_HT_05.tga       0 CHTL_HT_07.tga
        UpgradeTexture		   = CHTL_HT_06.tga       0 CHTL_HT_07.tga
        UpgradeTexture		   = CHTL_HT_00.tga       0 CHTL_HT_07.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD06-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHBOD06 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHTL_HT_03.tga       0 CHTL_HT_00.tga
        UpgradeTexture		   = CHTL_HT_04.tga       0 CHTL_HT_00.tga
        UpgradeTexture		   = CHTL_HT_05.tga       0 CHTL_HT_00.tga
        UpgradeTexture		   = CHTL_HT_06.tga       0 CHTL_HT_00.tga
        UpgradeTexture		   = CHTL_HT_07.tga       0 CHTL_HT_00.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD07-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHBOD07 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHTL_HT_03.tga       0 CHTL_HT_05.tga
        UpgradeTexture		   = CHTL_HT_04.tga       0 CHTL_HT_05.tga
        UpgradeTexture		   = CHTL_HT_06.tga       0 CHTL_HT_05.tga
        UpgradeTexture		   = CHTL_HT_07.tga       0 CHTL_HT_05.tga
        UpgradeTexture		   = CHTL_HT_00.tga       0 CHTL_HT_05.tga
	ShowSubObjects		   = CHEST_02
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD08-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_2	
	TriggeredBy	= Upgrade_CHBOD08 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_2
	RequiresAllTriggers = Yes
        UpgradeTexture		   = CHTL_HT_03.tga       0 CHTL_HT_05.tga
        UpgradeTexture		   = CHTL_HT_04.tga       0 CHTL_HT_05.tga
        UpgradeTexture		   = CHTL_HT_06.tga       0 CHTL_HT_05.tga
        UpgradeTexture		   = CHTL_HT_07.tga       0 CHTL_HT_05.tga
        UpgradeTexture		   = CHTL_HT_00.tga       0 CHTL_HT_05.tga
	ShowSubObjects		   = CHEST_01
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End



Behavior = SubObjectsUpgrade Upgrade_CHSP02-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHSP02 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP03-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHSP03 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP04-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHSP04 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_03 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP05-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHSP05 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_04 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP06-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHSP06 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_05 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHSP07-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHSP07 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SLDR_06 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG02-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHG02 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHG03-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHG03 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = GNLT_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHS02-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHS02 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SHLD_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHS03-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHS03 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = SHLD_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB02-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHB02 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_01 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHB03-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHB03 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
	ShowSubObjects		   = BOOT_02 
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD01-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHBOD01 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
        UpgradeTexture		   = chsspo3.tga       0 chsspo1.tga
        UpgradeTexture		   = chsspo4.tga       0 chsspo1.tga
        UpgradeTexture		   = chsspo2.tga       0 chsspo1.tga
        UpgradeTexture		   = chsspo5.tga       0 chsspo1.tga
	ShowSubObjects		   = CHEST_01
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD02-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHBOD02 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
        UpgradeTexture		   = chsspo3.tga       0 chsspo1.tga
        UpgradeTexture		   = chsspo4.tga       0 chsspo1.tga
        UpgradeTexture		   = chsspo2.tga       0 chsspo1.tga
        UpgradeTexture		   = chsspo5.tga       0 chsspo1.tga
	ShowSubObjects		   = CHEST_02
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD03-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHBOD03 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
        UpgradeTexture		   = chsspo1.tga       0 chsspo3.tga
        UpgradeTexture		   = chsspo4.tga       0 chsspo3.tga
        UpgradeTexture		   = chsspo2.tga       0 chsspo3.tga
        UpgradeTexture		   = chsspo5.tga       0 chsspo3.tga
	ShowSubObjects		   = CHEST_03
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD04-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHBOD04 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
        UpgradeTexture		   = chsspo1.tga       0 chsspo4.tga
        UpgradeTexture		   = chsspo3.tga       0 chsspo4.tga
        UpgradeTexture		   = chsspo2.tga       0 chsspo4.tga
        UpgradeTexture		   = chsspo5.tga       0 chsspo4.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD05-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHBOD05 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
        UpgradeTexture		   = chsspo1.tga       0 chsspo2.tga
        UpgradeTexture		   = chsspo4.tga       0 chsspo2.tga
        UpgradeTexture		   = chsspo3.tga       0 chsspo2.tga
        UpgradeTexture		   = chsspo5.tga       0 chsspo2.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD06-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHBOD06 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
        UpgradeTexture		   = chsspo1.tga       0 chsspo3.tga
        UpgradeTexture		   = chsspo4.tga       0 chsspo3.tga
        UpgradeTexture		   = chsspo2.tga       0 chsspo3.tga
        UpgradeTexture		   = chsspo5.tga       0 chsspo3.tga
	ShowSubObjects		   = CHEST_03
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD07-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHBOD07 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
        UpgradeTexture		   = chsspo1.tga       0 chsspo2.tga
        UpgradeTexture		   = chsspo3.tga       0 chsspo2.tga
        UpgradeTexture		   = chsspo4.tga       0 chsspo2.tga
        UpgradeTexture		   = chsspo5.tga       0 chsspo2.tga
	ShowSubObjects		   = CHEST_03
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD08-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHBOD08 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
        UpgradeTexture		   = chsspo1.tga       0 chsspo4.tga
        UpgradeTexture		   = chsspo3.tga       0 chsspo4.tga
        UpgradeTexture		   = chsspo2.tga       0 chsspo4.tga
        UpgradeTexture		   = chsspo5.tga       0 chsspo4.tga
	ShowSubObjects		   = CHEST_03
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD09-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHBOD09 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
        UpgradeTexture		   = chsspo1.tga       0 chsspo3.tga
        UpgradeTexture		   = chsspo4.tga       0 chsspo3.tga
        UpgradeTexture		   = chsspo2.tga       0 chsspo3.tga
        UpgradeTexture		   = chsspo5.tga       0 chsspo3.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End
Behavior = SubObjectsUpgrade Upgrade_CHBOD10-Upgrade_CreateAHero_ClassOlogHai-Upgrade_CreateAHero_SubClass_3	
	TriggeredBy	= Upgrade_CHBOD10 Upgrade_CreateAHero_ClassOlogHai Upgrade_CreateAHero_SubClass_3
	RequiresAllTriggers = Yes
        UpgradeTexture		   = chsspo1.tga       0 chsspo5.tga
        UpgradeTexture		   = chsspo4.tga       0 chsspo5.tga
        UpgradeTexture		   = chsspo3.tga       0 chsspo5.tga
        UpgradeTexture		   = chsspo2.tga       0 chsspo5.tga
	RecolorHouse		   = Yes
	HideSubObjectsOnRemove = Yes
	FadeTimeInSeconds      = 0.0
End

