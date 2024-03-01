;/////////////////////////////////////////////////////////
;/// AI FORTRESS - HERO AND UNIT DISCOUNTS AND MODIFIERS
;//////////
;/////

;////AI Super Provoker
Behavior = FireWeaponUpdate ModuleTag_AIPoker
			FireWeaponNugget
				WeaponName = AIDefenseTriggerWeapon
				FireDelay = 0
				OneShot = No
			End
	End

;////HERO RETREAT RESET
Behavior = AttributeModifierAuraUpdate ModuleTag_HeroRetreatResetAura
		Range			= 100 ;300 ;GONDOR_STATUE_AOE_RADIUS
    TriggeredBy = Upgrade_ObjectUnderAIControl
		RefreshDelay				= 2000
		BonusName			= FortressRetreatDeactivator
		ObjectFilter				= NONE +HERO SAME_PLAYER
	End

;// GONDOR
;///////

Behavior = CostModifierUpgrade ModuleTag_AIGondorHeroBuildHelperNormal ; Helps the AI get heroes out at lower difficulties
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_MediumAIMultiPlayer Upgrade_MenFaction;
	RequiresAllTriggers = Yes
  ObjectFilter	= NONE +GondorPippin +GondorBeregond +GondorFaramir +GondorForlongNew +GondorBoromir +GondorImrahil +GondorDenethor +GondorGandalf
  Percentage		=  -30%
End

Behavior = CostModifierUpgrade ModuleTag_AIGondorHeroBuildHelperHard ; Helps the AI get heroes out at lower difficulties
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_HardAIMultiPlayer Upgrade_MenFaction ;
	RequiresAllTriggers = Yes
  ObjectFilter	= NONE +GondorPippin +GondorBeregond +GondorFaramir +GondorForlongNew +GondorBoromir +GondorImrahil +GondorDenethor +GondorGandalf
  Percentage		=  -60%
End

Behavior = CostModifierUpgrade ModuleTag_AIGondorHeroBuildHelperBrutal ; Smaller discount for Brutal
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_BrutalAIMultiPlayer Upgrade_MenFaction
	RequiresAllTriggers = Yes
  ObjectFilter	= NONE +GondorPippin +GondorBeregond +GondorFaramir +GondorForlongNew +GondorBoromir +GondorImrahil +GondorDenethor +GondorGandalf
  Percentage		=  -20%
End

;// ROHAN
;///////

Behavior = CostModifierUpgrade ModuleTag_AIRohanHeroBuildHelperNormal ; Helps the AI get heroes out at lower difficulties
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_MediumAIMultiPlayer Upgrade_RohanFaction ;
	RequiresAllTriggers = Yes
  ObjectFilter	= NONE +RohanMerry +RohanEowyn +RohanElfhelm +RohanErkenbrand +RohanTheodred +RohanEomer +RohanTheoden
  Percentage		=  -30%
End

Behavior = CostModifierUpgrade ModuleTag_AIRohanHeroBuildHelperHard ; Helps the AI get heroes out at lower difficulties
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_HardAIMultiPlayer Upgrade_RohanFaction ;
	RequiresAllTriggers = Yes
  ObjectFilter	= NONE +RohanMerry +RohanEowyn +RohanElfhelm +RohanErkenbrand +RohanTheodred +RohanEomer +RohanTheoden
  Percentage		=  -60%
End

Behavior = CostModifierUpgrade ModuleTag_AIRohanHeroBuildHelperBrutal ; Smaller discount for Brutal
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_BrutalAIMultiPlayer Upgrade_RohanFaction
	RequiresAllTriggers = Yes
  ObjectFilter	= NONE +RohanMerry +RohanEowyn +RohanElfhelm +RohanErkenbrand +RohanTheodred +RohanEomer +RohanTheoden
  Percentage		=  -20%
End

;// MISTY MOUNTAINS
;///////

Behavior = CostModifierUpgrade ModuleTag_AIMistyMountainHeroBuildHelperNormal ; Helps the AI get heroes out at lower difficulties
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_MediumAIMultiPlayer Upgrade_WildFaction ;
	RequiresAllTriggers = Yes
  ObjectFilter	= NONE +WildUrshak +WildGolfimbul +WildGreatGoblin +WildMuzgash +WildLugtheMauled +WildBolgNew
  Percentage		=  -30%
End

Behavior = CostModifierUpgrade ModuleTag_AIMistyMountainHeroBuildHelperHard ; Helps the AI get heroes out at lower difficulties
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_HardAIMultiPlayer Upgrade_WildFaction ;
	RequiresAllTriggers = Yes
  ObjectFilter	= NONE +WildUrshak +WildGolfimbul +WildGreatGoblin +WildMuzgash +WildLugtheMauled +WildBolgNew
  Percentage		=  -60%
End

Behavior = CostModifierUpgrade ModuleTag_AIMistyMountainHeroBuildHelperBrutal ; Smaller discount for Brutal
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_BrutalAIMultiPlayer Upgrade_WildFaction
	RequiresAllTriggers = Yes
  ObjectFilter	= NONE +WildUrshak +WildGolfimbul +WildGreatGoblin +WildMuzgash +WildLugtheMauled +WildBolgNew
  Percentage		=  -20%
End

;// DOL GULDUR
;///////

Behavior = CostModifierUpgrade ModuleTag_AIDolGuldurBuildHelperNormal ; Helps the AI get heroes out at lower difficulties
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_MediumAIMultiPlayer Upgrade_GuldurFaction ;
	RequiresAllTriggers = Yes
  ObjectFilter	= NONE +GuldurNecromancer +GuldurThrain +GuldurKrimpul +GuldurCargast +GuldurSaenathra +GuldurKhamul
  Percentage		=  -40%
End

Behavior = CostModifierUpgrade ModuleTag_AIDolGuldurHeroBuildHelperHard ; Helps the AI get heroes out at lower difficulties
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_HardAIMultiPlayer Upgrade_GuldurFaction ;
	RequiresAllTriggers = Yes
  ObjectFilter	= NONE +GuldurNecromancer +GuldurThrain +GuldurKrimpul +GuldurCargast +GuldurSaenathra +GuldurKhamul
  Percentage		=  -60%
End

Behavior = CostModifierUpgrade ModuleTag_AIDolGuldurHeroBuildHelperBrutal ; Smaller discount for Brutal
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_BrutalAIMultiPlayer Upgrade_GuldurFaction
	RequiresAllTriggers = Yes
  ObjectFilter	= NONE +GuldurNecromancer +GuldurThrain +GuldurKrimpul +GuldurCargast +GuldurSaenathra +GuldurKhamul
  Percentage		=  -30%
End

;// EREBOR
;///////

Behavior = CostModifierUpgrade ModuleTag_AIEreborBuildHelperNormal_Oakenshield ; Helps the AI get heroes out at lower difficulties
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_MediumAIMultiPlayer Upgrade_HobbitEreborAI ;
	RequiresAllTriggers = Yes
  ObjectFilter	= NONE +DwarvenLaketownMaster +DwarvenThorin +DwarvenBalin +DwarvenCaptainofDale +DwarvenKili +DwarvenFili +DwarvenDwalin +DwarvenDain +DwarvenRoac
  Percentage		=  -30%
End

Behavior = CostModifierUpgrade ModuleTag_AIEreborBuildHelperNormal_Ironfoot ; Helps the AI get heroes out at lower difficulties
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_MediumAIMultiPlayer Upgrade_LotREreborAI ;
	RequiresAllTriggers = Yes
  ObjectFilter	= NONE +DwarvenGloin +DwarvenGimli +DwarvenThorinStonehelm +DwarvenKingDain +DwarvenHadhod +DwarvenArcah +DwarvenBrand
  Percentage		=  -30%
End

;/////////////////

Behavior = CostModifierUpgrade ModuleTag_AIEreborHeroBuildHelperHard_Oakenshield ; Helps the AI get heroes out at lower difficulties
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_HardAIMultiPlayer Upgrade_HobbitEreborAI ;
	RequiresAllTriggers = Yes
  ObjectFilter	= NONE +DwarvenLaketownMaster +DwarvenThorin +DwarvenBalin +DwarvenCaptainofDale +DwarvenKili +DwarvenFili +DwarvenDwalin +DwarvenDain +DwarvenRoac
  Percentage		=  -60%
End

Behavior = CostModifierUpgrade ModuleTag_AIEreborHeroBuildHelperHard_Ironfoot ; Helps the AI get heroes out at lower difficulties
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_HardAIMultiPlayer Upgrade_LotREreborAI ;
	RequiresAllTriggers = Yes
  ObjectFilter	= NONE +DwarvenGloin +DwarvenGimli +DwarvenThorinStonehelm +DwarvenKingDain +DwarvenHadhod +DwarvenArcah +DwarvenBrand
  Percentage		=  -60%
End

;/////////////////

Behavior = CostModifierUpgrade ModuleTag_AIEreborHeroBuildHelperBrutal_Oakenshield ; Smaller discount for Brutal
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_BrutalAIMultiPlayer Upgrade_HobbitEreborAI
	RequiresAllTriggers = Yes
  ObjectFilter	= NONE +DwarvenLaketownMaster +DwarvenThorin +DwarvenBalin +DwarvenCaptainofDale +DwarvenKili +DwarvenFili +DwarvenDwalin +DwarvenDain +DwarvenRoac
  Percentage		=  -20%
End

Behavior = CostModifierUpgrade ModuleTag_AIEreborHeroBuildHelperBrutal_Ironfoot ; Smaller discount for Brutal
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_BrutalAIMultiPlayer Upgrade_LotREreborAI
	RequiresAllTriggers = Yes
  ObjectFilter	= NONE +DwarvenGloin +DwarvenGimli +DwarvenThorinStonehelm +DwarvenKingDain +DwarvenHadhod +DwarvenArcah +DwarvenBrand
  Percentage		=  -20%
End

;// LOTHLORIEN
;///////

Behavior = CostModifierUpgrade ModuleTag_AILothlorienBuildHelperNormal ; Helps the AI get heroes out at lower difficulties
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_MediumAIMultiPlayer Upgrade_ElfFaction ;
	RequiresAllTriggers = Yes
  ObjectFilter	= NONE +ElvenGaladrielLorien +ElvenCeleborn +ElvenIdrial +ElvenHaldir +ElvenRumil +ElvenOrophin
  Percentage		=  -30%
End

Behavior = CostModifierUpgrade ModuleTag_AILothlorienHeroBuildHelperHard ; Helps the AI get heroes out at lower difficulties
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_HardAIMultiPlayer Upgrade_ElfFaction ;
	RequiresAllTriggers = Yes
  ObjectFilter	= NONE +ElvenGaladrielLorien +ElvenCeleborn +ElvenIdrial +ElvenHaldir +ElvenRumil +ElvenOrophin
  Percentage		=  -60%
End

Behavior = CostModifierUpgrade ModuleTag_AILothlorienHeroBuildHelperBrutal ; Smaller discount for Brutal
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_BrutalAIMultiPlayer Upgrade_ElfFaction
	RequiresAllTriggers = Yes
  ObjectFilter	= NONE +ElvenGaladrielLorien +ElvenCeleborn +ElvenIdrial +ElvenHaldir +ElvenRumil +ElvenOrophin
  Percentage		=  -20%
End

;// WOODLAND REALM
;///////

Behavior = CostModifierUpgrade ModuleTag_AIMirkwoodBuildHelperNormal ; Helps the AI get heroes out at lower difficulties
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_MediumAIMultiPlayer Upgrade_MirkwoodFaction ;
	RequiresAllTriggers = Yes
  ObjectFilter	= NONE +MirkwoodFeren +MirkwoodTauriel +MirkwoodLegolas +MirkwoodThranduil +MirkwoodGalion +MirkwoodRadagast +MirkwoodGrimbeorn
  Percentage		=  -30%
End

Behavior = CostModifierUpgrade ModuleTag_AIMirkwoodHeroBuildHelperHard ; Helps the AI get heroes out at lower difficulties
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_HardAIMultiPlayer Upgrade_MirkwoodFaction ;
	RequiresAllTriggers = Yes
  ObjectFilter	= NONE +MirkwoodFeren +MirkwoodTauriel +MirkwoodLegolas +MirkwoodThranduil +MirkwoodGalion +MirkwoodRadagast +MirkwoodGrimbeorn
  Percentage		=  -60%
End

Behavior = CostModifierUpgrade ModuleTag_AIMirkwoodHeroBuildHelperBrutal ; Smaller discount for Brutal
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_BrutalAIMultiPlayer Upgrade_MirkwoodFaction
	RequiresAllTriggers = Yes
  ObjectFilter	= NONE +MirkwoodFeren +MirkwoodTauriel +MirkwoodLegolas +MirkwoodThranduil +MirkwoodGalion +MirkwoodRadagast +MirkwoodGrimbeorn
  Percentage		=  -20%
End

;// MORDOR
;///////

Behavior = CostModifierUpgrade ModuleTag_AIMordorBuildHelperNormal ; Helps the AI get heroes out at lower difficulties
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_MediumAIMultiPlayer Upgrade_MordorFaction ;
	RequiresAllTriggers = Yes
  ObjectFilter	= NONE +MordorGorbag +MordorShagrat +MordorWitchKing +MordorMollok +MordorAkhorahil +MordorUvatha +MordorMouthOfSauron +MordorGothmog
  Percentage		=  -30%
End

Behavior = CostModifierUpgrade ModuleTag_AIMordorHeroBuildHelperHard ; Helps the AI get heroes out at lower difficulties
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_HardAIMultiPlayer Upgrade_MordorFaction ;
	RequiresAllTriggers = Yes
  ObjectFilter	= NONE +MordorGorbag +MordorShagrat +MordorWitchKing +MordorMollok +MordorAkhorahil +MordorUvatha +MordorMouthOfSauron +MordorGothmog
  Percentage		=  -60%
End

Behavior = CostModifierUpgrade ModuleTag_AIMordorHeroBuildHelperBrutal ; Smaller discount for Brutal
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_BrutalAIMultiPlayer Upgrade_MordorFaction
	RequiresAllTriggers = Yes
  ObjectFilter	= NONE +MordorGorbag +MordorShagrat +MordorWitchKing +MordorMollok +MordorAkhorahil +MordorUvatha +MordorMouthOfSauron +MordorGothmog
  Percentage		=  -20%
End

;// ISENGARD
;///////

Behavior = CostModifierUpgrade ModuleTag_AIIsengardBuildHelperNormal ; Helps the AI get heroes out at lower difficulties
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_MediumAIMultiPlayer Upgrade_IsengardFaction ;
	RequiresAllTriggers = Yes
  ObjectFilter	= NONE +IsengardSaruman +IsengardWulfgar +IsengardLurtz +IsengardSharku +IsengardUgluk +IsengardWormTongue
  Percentage		=  -30%
End

Behavior = CostModifierUpgrade ModuleTag_AIIsengardHeroBuildHelperHard ; Helps the AI get heroes out at lower difficulties
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_HardAIMultiPlayer Upgrade_IsengardFaction ;
	RequiresAllTriggers = Yes
  ObjectFilter	= NONE +IsengardSaruman +IsengardWulfgar +IsengardLurtz +IsengardSharku +IsengardUgluk +IsengardWormTongue
  Percentage		=  -60%
End

Behavior = CostModifierUpgrade ModuleTag_AIIsengardHeroBuildHelperBrutal ; Smaller discount for Brutal
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_BrutalAIMultiPlayer Upgrade_IsengardFaction
	RequiresAllTriggers = Yes
  ObjectFilter	= NONE +IsengardSaruman +IsengardWulfgar +IsengardLurtz +IsengardSharku +IsengardUgluk +IsengardWormTongue
  Percentage		=  -20%
End

;// RIVENDELL
;///////

Behavior = CostModifierUpgrade ModuleTag_AIRivendellBuildHelperNormal ; Helps the AI get heroes out at lower difficulties
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_MediumAIMultiPlayer Upgrade_ArnorFaction ;
	RequiresAllTriggers = Yes
  ObjectFilter	= NONE +ElvenArwen +ElvenGildor +ElvenElladan +ElvenElrohir +ArnorHalbarad +ElvenAragorn +ElvenGlorfindel +ElvenElrond
  Percentage		=  -30%
End

Behavior = CostModifierUpgrade ModuleTag_AIRivendellHeroBuildHelperHard ; Helps the AI get heroes out at lower difficulties
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_HardAIMultiPlayer Upgrade_ArnorFaction ;
	RequiresAllTriggers = Yes
  ObjectFilter	= NONE +ElvenArwen +ElvenGildor +ElvenElladan +ElvenElrohir +ArnorHalbarad +ElvenAragorn +ElvenGlorfindel +ElvenElrond
  Percentage		=  -60%
End

Behavior = CostModifierUpgrade ModuleTag_AIRivendellHeroBuildHelperBrutal ; Smaller discount for Brutal
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_BrutalAIMultiPlayer Upgrade_ArnorFaction
	RequiresAllTriggers = Yes
  ObjectFilter	= NONE +ElvenArwen +ElvenGildor +ElvenElladan +ElvenElrohir +ArnorHalbarad +ElvenAragorn +ElvenGlorfindel +ElvenElrond
  Percentage		=  -20%
End

;// HARADWAITH
;///////

Behavior = CostModifierUpgrade ModuleTag_AIHaradBuildHelperNormal ; Helps the AI get heroes out at lower difficulties
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_MediumAIMultiPlayer Upgrade_AngmarFaction ;
	RequiresAllTriggers = Yes
  ObjectFilter	= NONE +HaradSyarRhul +HaradBeruthiel +HaradSuladan +HaradGoldenKing +HaradBurodapan +HaradCassimir +HaradCaranLambar
  Percentage		=  -30%
End

Behavior = CostModifierUpgrade ModuleTag_AIHaradHeroBuildHelperHard ; Helps the AI get heroes out at lower difficulties
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_HardAIMultiPlayer Upgrade_AngmarFaction ;
	RequiresAllTriggers = Yes
  ObjectFilter	= NONE +HaradSyarRhul +HaradBeruthiel +HaradSuladan +HaradGoldenKing +HaradBurodapan +HaradCassimir +HaradCaranLambar
  Percentage		=  -60%
End

Behavior = CostModifierUpgrade ModuleTag_AIHaradHeroBuildHelperBrutal ; Smaller discount for Brutal
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_BrutalAIMultiPlayer Upgrade_AngmarFaction
	RequiresAllTriggers = Yes
  ObjectFilter	= NONE +HaradSyarRhul +HaradBeruthiel +HaradSuladan +HaradGoldenKing +HaradBurodapan +HaradCassimir +HaradCaranLambar
  Percentage		=  -20%
End



;// GENERAL
;///////

Behavior = CostModifierUpgrade ModuleTag_AIPorterBuildHelper ; Helps the AI get heroes out at lower difficulties
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_EasyAIMultiPlayer Upgrade_MediumAIMultiPlayer Upgrade_HardAIMultiPlayer ;
;	RequiresAllTriggers = No
  ObjectFilter	= NONE +WildPorter +IsengardPorter +HaradPorter +MordorPorter +MenPorter +ElvenPorter +MirkwoodPorter +RivendellPorter +DwarvenPorter +RohanPorter
  Percentage		=  -80%
End
;//Excludes Dol Guldur since their Porters are dirt cheap

;/////// SCRIPTED UPGRADE TRIGGERS
;////////////

;// GONDOR
;///////

Behavior = DoCommandUpgrade ModuleTag_LateGameUpgradeTriggerGondor
		TriggeredBy 				= Upgrade_ObjectUnderAIControl Upgrade_AILategameTrigger Upgrade_MenFaction
		RequiresAllTriggers = Yes
		ConflictsWith = Upgrade_MenFortressNumenorStoneworkTrigger
		GetUpgradeCommandButtonName = Command_PurchaseUpgradeMenFortressNumenorStonework
	End

;// ROHAN
;///////

Behavior = DoCommandUpgrade ModuleTag_LateGameUpgradeTriggerRohan
		TriggeredBy 				= Upgrade_ObjectUnderAIControl Upgrade_AILategameTrigger Upgrade_RohanFaction
		RequiresAllTriggers = Yes
		ConflictsWith = Upgrade_RohanFortressMeadHall
		GetUpgradeCommandButtonName = Command_PurchaseUpgradeRohanFortressMeadHall
	End

;// MISTY MOUNTAINS
;///////

Behavior = DoCommandUpgrade ModuleTag_LateGameUpgradeTriggerMisty
		TriggeredBy 				= Upgrade_ObjectUnderAIControl Upgrade_AILategameTrigger Upgrade_WildFaction
		RequiresAllTriggers = Yes
		ConflictsWith = Upgrade_WildFortressWebCocoonTrigger
		GetUpgradeCommandButtonName = Command_PurchaseUpgradeWildFortressWebCocoon
	End

;// DOL GULDUR
;///////

Behavior = DoCommandUpgrade ModuleTag_LateGameUpgradeTriggerGuldur
		TriggeredBy 				= Upgrade_ObjectUnderAIControl Upgrade_AILategameTrigger Upgrade_GuldurFaction
		RequiresAllTriggers = Yes
		ConflictsWith = Upgrade_GuldurFortressBlight
		GetUpgradeCommandButtonName = Command_PurchaseUpgradeGuldurFortressBlight
	End

;// EREBOR
;///////

Behavior = DoCommandUpgrade ModuleTag_LateGameUpgradeTriggerErebor
		TriggeredBy 				= Upgrade_ObjectUnderAIControl Upgrade_AILategameTrigger Upgrade_DwarfFaction
		RequiresAllTriggers = Yes
		ConflictsWith = Upgrade_DwarvenFortressDwarvenStoneworkTrigger
		GetUpgradeCommandButtonName = Command_PurchaseUpgradeDwarvenFortressDwarvenStonework
	End

;// LOTHLORIEN
;///////

Behavior = DoCommandUpgrade ModuleTag_LateGameUpgradeTriggerLothlorien
		TriggeredBy 				= Upgrade_ObjectUnderAIControl Upgrade_AILategameTrigger Upgrade_ElfFaction
		RequiresAllTriggers = Yes
		ConflictsWith = Upgrade_ElvenFortressEncasingVinesTrigger
		GetUpgradeCommandButtonName = Command_PurchaseUpgradeElvenFortressEncasingVinesLorien
	End

;// WOODLAND REALM
;///////

Behavior = DoCommandUpgrade ModuleTag_LateGameUpgradeTriggerWoodlandRealm 
		TriggeredBy 				= Upgrade_ObjectUnderAIControl Upgrade_AILategameTrigger Upgrade_MirkwoodFaction
		RequiresAllTriggers = Yes
		ConflictsWith = Upgrade_MirkwoodFortressGarrison
		GetUpgradeCommandButtonName = Command_PurchaseUpgradeMirkwoodFortressGarrison
	End

;// MORDOR
;///////

Behavior = DoCommandUpgrade ModuleTag_LateGameUpgradeTriggerMordor
		TriggeredBy 				= Upgrade_ObjectUnderAIControl Upgrade_AILategameTrigger Upgrade_MordorFaction
		RequiresAllTriggers = Yes
		ConflictsWith = Upgrade_MordorFortressMorgulSorceryTrigger
		GetUpgradeCommandButtonName = Command_PurchaseUpgradeMordorFortressMorgulSorcery
	End

;// ISENGARD
;///////

Behavior = DoCommandUpgrade ModuleTag_LateGameUpgradeTriggerIsengard
		TriggeredBy 				= Upgrade_ObjectUnderAIControl Upgrade_AILategameTrigger Upgrade_IsengardFaction
		RequiresAllTriggers = Yes
		ConflictsWith = Upgrade_IsengardFortressIronPlatingTrigger
		GetUpgradeCommandButtonName = Command_PurchaseUpgradeIsengardFortressIronPlating
	End

;// RIVENDELL
;///////

Behavior = DoCommandUpgrade ModuleTag_LateGameUpgradeTriggerRivendell
		TriggeredBy 				= Upgrade_ObjectUnderAIControl Upgrade_AILategameTrigger Upgrade_ArnorFaction
		RequiresAllTriggers = Yes
		ConflictsWith = Upgrade_ArnorFortressHouseOfHealing
		GetUpgradeCommandButtonName = Command_PurchaseUpgradeRivendellFortressMoat
	End

;// HARADWAITH
;///////

Behavior = DoCommandUpgrade ModuleTag_LateGameUpgradeTriggerHarad
		TriggeredBy 				= Upgrade_ObjectUnderAIControl Upgrade_AILategameTrigger Upgrade_AngmarFaction
		RequiresAllTriggers = Yes
		ConflictsWith = Upgrade_AngmarFortressIceMunitionsTrigger
		GetUpgradeCommandButtonName = Command_PurchaseUpgradeHaradFortressMahud
	End