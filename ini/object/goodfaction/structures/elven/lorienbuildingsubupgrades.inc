;//Crystal Moat
Behavior = ObjectCreationUpgrade CreateTheMoat
  TriggeredBy		= Upgrade_NimrodelWaters
  Delay			= 0.0
  ThingToSpawn	= ElvenMallornTreeNimrodelWaters
  FadeInTime		= 600
End

Behavior = PassiveAreaEffectBehavior ModuleTag_NimrodelWatersHealing
  UpgradeRequired			= Upgrade_NimrodelWaters
  EffectRadius			= 200 // please update the decal size in experience lvl INI if you change this... the value there is about 2.2x the value here
  PingDelay				= 3000;msec
  HealPercentPerSecond	= 2%
  AllowFilter				= ANY +INFANTRY +CAVALRY +RohanGenericEnt +RohanTreeBerd -MACHINE -IMMOBILE +DOZER
  NonStackable			= Yes
  HealFX					= FX_SpellHealUnitHealBuff
End

;Behavior = PassiveAreaEffectBehavior ModuleTag_FeelGoodHero
;  EffectRadius				= 300 ;ELVEN_STATUE_AOE_RADIUS
 ; PingDelay					= 2000 ; ms
 ; ModifierName				= MallornTreeLeadership
;  ;ModifierName			= ElvenStatuePassiveLeadershipResistFear ;;,;;
;;,;;		AntiCategories				= BUFF
 ; AllowFilter					= ANY +ElvenLorienArcher +ElvenLorienArcherHorde +GaladhrimWarrior +GaladhrimWarriorHorde +LorienSilverTreeSentinel +LorienSilverTreeSentinelHorde +HERO
;End

; Behavior = CostModifierUpgrade ModuleTag_CostModifier
;   LabelForPalantirString = GUI:MALLORNTEXT
;   StartsActive = Yes ; Run on build complete, not upgrade
;   ; ObjectFilter		= ANY +HERO ;+INFANTRY -HERO
;   ; Percentage		=  0%		;; 1 DwarvenHearth
;   End

Behavior = BannerCarrierUpdate BannerCarrierUpdateModuleTag
  UpgradeRequired			= Upgrade_NimrodelWaters
  IdleSpawnRate			= 12000 ;;,;; 5000							// spawn a new member every n seconds when idle (in miliseconds)
  UnitSpawnFX				= FX_BannerCarrierSpawnUnit		// name of particle FX to use when the BannerCarrier spawns a new unit

  // This well object acts like a banner carrier except it spawns unit on nearby hordes instead of itself.
  ReplenishNearbyHorde	= Yes
  ReplenishAllNearbyHordes	= Yes ;;.;; Added so that all hordes can respawn members rather than only one horde at a time.
  ScanHordeDistance		= 200
End


;-------------------------------------------------------------------------
; Niphredil Bloom Eco bonus
;-------------------------------------------------------------------------

;Behavior = AttributeModifierUpgrade ModuleTag_NiphredilBonus
  ;TriggeredBy = Upgrade_MallornTreeNiphredil
  ;AttributeModifier = NiphredilEconomyBonus
;End

;-------------------------------------------------------------------------
; Mallorn Roots
;-------------------------------------------------------------------------
Behavior = AttributeModifierAuraUpdate ModuleTag_MallornRoots
  StartsActive	= No ;If no, requires upgrade to turn on.
  BonusName		= MallornRootsDebuff
  TriggeredBy		= Upgrade_MallornTreeRoots
  RefreshDelay	= 2000
  Range			= 200
  TargetEnemy		= Yes
  ObjectFilter	= AOTR_GENERIC_BUFF_RECIPIENT_WITH_HORDES_OBJECT_FILTER
End
Behavior = FireWeaponUpdate ModuleTag_DamageHandler
	FireWeaponNugget
		WeaponName	= MallornRootsWeapon
		Offset 		= X:0 Y:0 Z:0
		FireDelay	= 0
		OneShot		= No
	End
End
Behavior = AttributeModifierUpgrade ModuleTag_RootsBonusSelf
	TriggeredBy			= Upgrade_MallornTreeRoots
	AttributeModifier	= MallornRootsBonusSelf
End
;-------------------------------------------------------------------------
; Bonus to Silver Tree Sentinels
;-------------------------------------------------------------------------
; Behavior = GrantUpgradeCreate ModuleTag_GrantArmorBonus
;   UpgradeToGrant	= Upgrade_GondorBarracksLevel2
; End
; Behavior = AttributeModifierAuraUpdate ModuleTag_SilverTreeSentinels
;   StartsActive	= No
;   TriggeredBy		= Upgrade_GondorBarracksLevel2
;   BonusName		= BuildingsSilverTreeLeadership
;   RefreshDelay	= 2000
;   Range			= 200
;   ObjectFilter	= NONE +LorienSilverTreeSentinel +LorienSilverTreeSentinelHorde
; End
;-------------------------------------------------------------------------
; Star-lit Lanterns
;-------------------------------------------------------------------------
Behavior = SubObjectsUpgrade Star-lit_Lanterns
  TriggeredBy		= Upgrade_MallornTreeStarLitLanterns
  ;does nothing - just to call the upgrade
End
	Behavior = UnpauseSpecialPowerUpgrade ModuleTag_EnableElendil
		SpecialPowerTemplate		= SpecialAbilityStarlitLanterns
		TriggeredBy					= Upgrade_MallornTreeStarLitLanterns
	End
	Behavior = SpecialPowerModule ModuleTag_WordStarter       
		SpecialPowerTemplate      = SpecialAbilityStarlitLanterns
		AttributeModifier		  = StarlitLanternsVisual
		AttributeModifierAffectsSelf	= Yes
		UpdateModuleStartsAttack  = Yes
		StartsPaused		  	  = Yes
	End
	Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_WordWeaponFireUpdate   
		SpecialPowerTemplate    = SpecialAbilityStarlitLanterns
		WhichSpecialWeapon		= 1
		UnpackTime              = 0
		AwardXPForTriggering    = 0		
		Instant					= Yes
		SpecialWeapon			= StarLitLanternWeapon
	End
;-------
	Behavior = ModelConditionUpgrade ModuleTag_ShowTheLanterns
		TriggeredBy			= Upgrade_MallornTreeStarLitLanterns		
		AddConditionFlags	= USER_3
		Permanent			= Yes
	End
;-------------------------------------------------------------------------
;-----------------------------------------------------------------------------
;	Silvan Levy summon
;-----------------------------------------------------------------------------
Behavior = UnpauseSpecialPowerUpgrade ModuleTag_UnpauseSilvanLevy
  SpecialPowerTemplate	= SpecialAbilityCellarDoorSummon         ;SpecialAbilityDraftTowerFirienholt
  TriggeredBy				= Upgrade_MallornTreeSilvanLevy               ;Upgrade_DraftTowerFirienholt
End

Behavior = OCLSpecialPower ModuleTag_SummonSilvanLevy
  SpecialPowerTemplate = SpecialAbilityCellarDoorSummon
  OCL                  = OCL_SilvanLevyEgg
  ;TriggerFX			 = FX_GenericGoodSummon
  CreateLocation       = USE_OWNER_OBJECT
  StartsPaused		 = Yes
End
; Behavior = SubObjectsUpgrade ModuleTag_ShowFirienholtSubObject
  ; TriggeredBy		= Upgrade_MallornTreeSilvanLevy                       ;Upgrade_DraftTowerFirienholt
  ; ShowSubObjects	= PRISON
; End
;-------
	Behavior = ModelConditionUpgrade ModuleTag_ShowTheLanternsLevy
		TriggeredBy			= Upgrade_MallornTreeSilvanLevy		
		AddConditionFlags	= USER_6
		Permanent			= Yes
	End