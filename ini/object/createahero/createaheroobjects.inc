//-----------------------------------------------------------------------------
//
// CreateAHeroObjects.inc
//
//-----------------------------------------------------------------------------


//==========================================================================================
//                     CREATE A HERO MAP CAROSEL
//==========================================================================================


Object CreateAHeroCarosel01

	SelectPortrait = BPRHelmsDeep
 
  // *** ART Parameters ***
//  SelectPortrait         = SNReactor_L
//  ButtonImage            = SNReactor
  //day

  Draw = W3DScriptedModelDraw ModuleTag_Draw
    OkToChangeModelColor  = Yes
    UseStandardModelNames = Yes

    DefaultModelConditionState
      Model = HeroCarosel01		
    End
    
  End

  // ***DESIGN parameters ***
  DisplayName         = OBJECT:HeroCarosel01
  Side                = Neutral
  EditorSorting       = STRUCTURE
  Browser = REGION Shire STRUCTURE
  ThreatLevel = 1.0
 
  BuildCost           = 500
  BuildTime           = 15.0           // in seconds
  VisionRange         = 160.0          // Shroud clearing distance
  ShroudClearingRange = 160


 
  // *** AUDIO Parameters ***

	SoundOnDamaged		= BuildingLightDamageStone
	SoundOnReallyDamaged	= BuildingHeavyDamageStone

	//  VoiceSelect         = GondorBarracksSelect
	 
	//  UnitSpecificSounds
	//  UnderConstruction     = UnderConstructionLoop
	//  End
 

	// *** ENGINEERING Parameters ***

  RadarPriority       = NOT_ON_RADAR
	KindOf        = PRELOAD STRUCTURE IMMOBILE CHUNK_VENDOR  NOT_AUTOACQUIRABLE SELECTABLE CAN_CAST_REFLECTIONS  //WALK_ON_TOP_OF_WALL

	Body						= ActiveBody ModuleTag_05
		MaxHealth				= 1500.0
		MaxHealthDamaged		= 700.0
		MaxHealthReallyDamaged  = 300.0
	End

	ArmorSet
		Conditions        = None
		Armor             = HelmsDeepGates
		DamageFX          = GateDamageFX
	End

	Behavior = ProductionUpdate ModuleTag_06
		// nothing
	End
  
	Behavior                  = StructureCollapseUpdate ModuleTag_08
		MinCollapseDelay        = 000
		MaxCollapseDelay        = 000
		CollapseDamping         = .5
		MaxShudder              = 0.6
		MinBurstDelay           = 250
		MaxBurstDelay           = 800
		BigBurstFrequency       = 4
		FXList                  = INITIAL   FX_StructureMediumCollapse
		FXList                  = ALMOST_FINAL  FX_StructureAlmostCollapse
		DestroyObjectWhenDone	= Yes
		CollapseHeight			= 155
	End
  

	AttackContactPoint = X:-24 Y:-24 Z:92

	Geometry              = BOX
	GeometryMajorRadius   = 2
	GeometryMinorRadius   = 2
	GeometryHeight        = 2
	GeometryOffset		= X:20 Y:20 Z:0

	GeometryIsSmall       = NO
	  
End



//==========================================================================================
//                     CREATE A HERO MAP ENVIRONMENTS
//==========================================================================================


Object CreateaHero_Ise01

	SelectPortrait = BPRHelmsDeep
 
  // *** ART Parameters ***
//  SelectPortrait         = SNReactor_L
//  ButtonImage            = SNReactor
  //day

  Draw = W3DScriptedModelDraw ModuleTag_Draw
    OkToChangeModelColor  = Yes
    UseStandardModelNames = Yes

    DefaultModelConditionState
      Model = CaHero_Ise01		
    End
    
  End

  // ***DESIGN parameters ***
  DisplayName         = OBJECT:Hero_Ise01
  Side                = Neutral
  EditorSorting       = STRUCTURE
  Browser = REGION Shire STRUCTURE
  ThreatLevel = 1.0
 
  BuildCost           = 500
  BuildTime           = 15.0           // in seconds
  VisionRange         = 160.0          // Shroud clearing distance
  ShroudClearingRange = 160


 
  // *** AUDIO Parameters ***

	SoundOnDamaged		= BuildingLightDamageStone
	SoundOnReallyDamaged	= BuildingHeavyDamageStone

	//  VoiceSelect         = GondorBarracksSelect
	 
	//  UnitSpecificSounds
	//  UnderConstruction     = UnderConstructionLoop
	//  End
 

	// *** ENGINEERING Parameters ***

  RadarPriority       = NOT_ON_RADAR
	KindOf        = PRELOAD STRUCTURE IMMOBILE CHUNK_VENDOR  NOT_AUTOACQUIRABLE CAN_CAST_REFLECTIONS 

	Body						= ActiveBody ModuleTag_05
		MaxHealth				= 1000.0
		MaxHealthDamaged		= 700.0
		MaxHealthReallyDamaged  = 300.0
	End

	ArmorSet
		Conditions        = None
		Armor             = HelmsDeepGates
		DamageFX          = GateDamageFX
	End

	Behavior = ProductionUpdate ModuleTag_06
		// nothing
	End
  
	Behavior                  = StructureCollapseUpdate ModuleTag_08
		MinCollapseDelay        = 000
		MaxCollapseDelay        = 000
		CollapseDamping         = .5
		MaxShudder              = 0.6
		MinBurstDelay           = 250
		MaxBurstDelay           = 800
		BigBurstFrequency       = 4
		FXList                  = INITIAL   FX_StructureMediumCollapse
		FXList                  = ALMOST_FINAL  FX_StructureAlmostCollapse
		DestroyObjectWhenDone	= Yes
		CollapseHeight			= 155
	End
  
	AttackContactPoint = X:-24 Y:-24 Z:92

	Geometry              = BOX
	GeometryMajorRadius   = 2
	GeometryMinorRadius   = 2
	GeometryHeight        = 2
	GeometryOffset		= X:20 Y:20 Z:0

	GeometryIsSmall       = NO
	  
End


//------------------------------------------------------------------------------------------


Object CreateaHero_Gondor01

	SelectPortrait = BPRHelmsDeep
 
  // *** ART Parameters ***
//  SelectPortrait         = SNReactor_L
//  ButtonImage            = SNReactor
  //day

  Draw = W3DScriptedModelDraw ModuleTag_Draw
    OkToChangeModelColor  = Yes
    UseStandardModelNames = Yes

    DefaultModelConditionState
      Model = CaHero_Gondor01		
    End
    
  End

  // ***DESIGN parameters ***
  DisplayName         = OBJECT:Hero_Gondor01
  Side                = Neutral
  EditorSorting       = STRUCTURE
  Browser = REGION Shire STRUCTURE
  ThreatLevel = 1.0
 
  BuildCost           = 500
  BuildTime           = 15.0           // in seconds
  VisionRange         = 160.0          // Shroud clearing distance
  ShroudClearingRange = 160


 
  // *** AUDIO Parameters ***

	SoundOnDamaged		= BuildingLightDamageStone
	SoundOnReallyDamaged	= BuildingHeavyDamageStone

	//  VoiceSelect         = GondorBarracksSelect
	 
	//  UnitSpecificSounds
	//  UnderConstruction     = UnderConstructionLoop
	//  End
 

	// *** ENGINEERING Parameters ***

  RadarPriority       = NOT_ON_RADAR
	KindOf        = PRELOAD STRUCTURE IMMOBILE CHUNK_VENDOR  NOT_AUTOACQUIRABLE CAN_CAST_REFLECTIONS 

	Body						= ActiveBody ModuleTag_05
		MaxHealth				= 1000.0
		MaxHealthDamaged		= 700.0
		MaxHealthReallyDamaged  = 300.0
	End

	ArmorSet
		Conditions        = None
		Armor             = HelmsDeepGates
		DamageFX          = GateDamageFX
	End

	Behavior = ProductionUpdate ModuleTag_06
		// nothing
	End
  
	Behavior                  = StructureCollapseUpdate ModuleTag_08
		MinCollapseDelay        = 000
		MaxCollapseDelay        = 000
		CollapseDamping         = .5
		MaxShudder              = 0.6
		MinBurstDelay           = 250
		MaxBurstDelay           = 800
		BigBurstFrequency       = 4
		FXList                  = INITIAL   FX_StructureMediumCollapse
		FXList                  = ALMOST_FINAL  FX_StructureAlmostCollapse
		DestroyObjectWhenDone	= Yes
		CollapseHeight			= 155
	End
  
	AttackContactPoint = X:-24 Y:-24 Z:92

	Geometry              = BOX
	GeometryMajorRadius   = 2
	GeometryMinorRadius   = 2
	GeometryHeight        = 2
	GeometryOffset		= X:20 Y:20 Z:0

	GeometryIsSmall       = NO
	  
End


//------------------------------------------------------------------------------------------


Object CreateaHero_Gondor02

	SelectPortrait = BPRHelmsDeep
 
  // *** ART Parameters ***
//  SelectPortrait         = SNReactor_L
//  ButtonImage            = SNReactor
  //day

  Draw = W3DScriptedModelDraw ModuleTag_Draw
    OkToChangeModelColor  = Yes
    UseStandardModelNames = Yes

    DefaultModelConditionState
      Model = CaHero_Gondor02		
    End
    
  End

  // ***DESIGN parameters ***
  DisplayName         = OBJECT:Hero_Gondor02
  Side                = Neutral
  EditorSorting       = STRUCTURE
  Browser = REGION Shire STRUCTURE
  ThreatLevel = 1.0
 
  BuildCost           = 500
  BuildTime           = 15.0           // in seconds
  VisionRange         = 160.0          // Shroud clearing distance
  ShroudClearingRange = 160


 
  // *** AUDIO Parameters ***

	SoundOnDamaged		= BuildingLightDamageStone
	SoundOnReallyDamaged	= BuildingHeavyDamageStone

	//  VoiceSelect         = GondorBarracksSelect
	 
	//  UnitSpecificSounds
	//  UnderConstruction     = UnderConstructionLoop
	//  End
 

	// *** ENGINEERING Parameters ***

  RadarPriority       = NOT_ON_RADAR
	KindOf        = PRELOAD STRUCTURE IMMOBILE CHUNK_VENDOR  NOT_AUTOACQUIRABLE CAN_CAST_REFLECTIONS 

	Body						= ActiveBody ModuleTag_05
		MaxHealth				= 1000.0
		MaxHealthDamaged		= 700.0
		MaxHealthReallyDamaged  = 300.0
	End

	ArmorSet
		Conditions        = None
		Armor             = HelmsDeepGates
		DamageFX          = GateDamageFX
	End

	Behavior = ProductionUpdate ModuleTag_06
		// nothing
	End
  
	Behavior                  = StructureCollapseUpdate ModuleTag_08
		MinCollapseDelay        = 000
		MaxCollapseDelay        = 000
		CollapseDamping         = .5
		MaxShudder              = 0.6
		MinBurstDelay           = 250
		MaxBurstDelay           = 800
		BigBurstFrequency       = 4
		FXList                  = INITIAL   FX_StructureMediumCollapse
		FXList                  = ALMOST_FINAL  FX_StructureAlmostCollapse
		DestroyObjectWhenDone	= Yes
		CollapseHeight			= 155
	End
  
	AttackContactPoint = X:-24 Y:-24 Z:92

	Geometry              = BOX
	GeometryMajorRadius   = 2
	GeometryMinorRadius   = 2
	GeometryHeight        = 2
	GeometryOffset		= X:20 Y:20 Z:0

	GeometryIsSmall       = NO
	  
End

//------------------------------------------------------------------------------------------


Object CreateaHero_Gondor03

	SelectPortrait = BPRHelmsDeep
 
  // *** ART Parameters ***
//  SelectPortrait         = SNReactor_L
//  ButtonImage            = SNReactor
  //day

  Draw = W3DScriptedModelDraw ModuleTag_Draw
    OkToChangeModelColor  = Yes
    UseStandardModelNames = Yes

    DefaultModelConditionState
      Model = CaHero_Gondor03		
    End
    
  End

  // ***DESIGN parameters ***
  DisplayName         = OBJECT:Hero_Gondor03
  Side                = Neutral
  EditorSorting       = STRUCTURE
  Browser = REGION Shire STRUCTURE
  ThreatLevel = 1.0
 
  BuildCost           = 500
  BuildTime           = 15.0           // in seconds
  VisionRange         = 160.0          // Shroud clearing distance
  ShroudClearingRange = 160


 
  // *** AUDIO Parameters ***

	SoundOnDamaged		= BuildingLightDamageStone
	SoundOnReallyDamaged	= BuildingHeavyDamageStone

	//  VoiceSelect         = GondorBarracksSelect
	 
	//  UnitSpecificSounds
	//  UnderConstruction     = UnderConstructionLoop
	//  End
 

	// *** ENGINEERING Parameters ***

  RadarPriority       = NOT_ON_RADAR
	KindOf        = PRELOAD STRUCTURE IMMOBILE CHUNK_VENDOR  NOT_AUTOACQUIRABLE CAN_CAST_REFLECTIONS 

	Body						= ActiveBody ModuleTag_05
		MaxHealth				= 1000.0
		MaxHealthDamaged		= 700.0
		MaxHealthReallyDamaged  = 300.0
	End

	ArmorSet
		Conditions        = None
		Armor             = HelmsDeepGates
		DamageFX          = GateDamageFX
	End

	Behavior = ProductionUpdate ModuleTag_06
		// nothing
	End
  
	Behavior                  = StructureCollapseUpdate ModuleTag_08
		MinCollapseDelay        = 000
		MaxCollapseDelay        = 000
		CollapseDamping         = .5
		MaxShudder              = 0.6
		MinBurstDelay           = 250
		MaxBurstDelay           = 800
		BigBurstFrequency       = 4
		FXList                  = INITIAL   FX_StructureMediumCollapse
		FXList                  = ALMOST_FINAL  FX_StructureAlmostCollapse
		DestroyObjectWhenDone	= Yes
		CollapseHeight			= 155
	End
  
	AttackContactPoint = X:-24 Y:-24 Z:92

	Geometry              = BOX
	GeometryMajorRadius   = 2
	GeometryMinorRadius   = 2
	GeometryHeight        = 2
	GeometryOffset		= X:20 Y:20 Z:0

	GeometryIsSmall       = NO
	  
End

//------------------------------------------------------------------------------------------


Object CreateaHero_Gondor04

	SelectPortrait = BPRHelmsDeep
 
  // *** ART Parameters ***
//  SelectPortrait         = SNReactor_L
//  ButtonImage            = SNReactor
  //day

  Draw = W3DScriptedModelDraw ModuleTag_Draw
    OkToChangeModelColor  = Yes
    UseStandardModelNames = Yes

    DefaultModelConditionState
      Model = CaHero_Gondor04		
    End
    
  End

  // ***DESIGN parameters ***
  DisplayName         = OBJECT:Hero_Gondor04
  Side                = Neutral
  EditorSorting       = STRUCTURE
  Browser = REGION Shire STRUCTURE
  ThreatLevel = 1.0
 
  BuildCost           = 500
  BuildTime           = 15.0           // in seconds
  VisionRange         = 160.0          // Shroud clearing distance
  ShroudClearingRange = 160


 
  // *** AUDIO Parameters ***

	SoundOnDamaged		= BuildingLightDamageStone
	SoundOnReallyDamaged	= BuildingHeavyDamageStone

	//  VoiceSelect         = GondorBarracksSelect
	 
	//  UnitSpecificSounds
	//  UnderConstruction     = UnderConstructionLoop
	//  End
 

	// *** ENGINEERING Parameters ***

  RadarPriority       = NOT_ON_RADAR
	KindOf        = PRELOAD STRUCTURE IMMOBILE CHUNK_VENDOR  NOT_AUTOACQUIRABLE CAN_CAST_REFLECTIONS 

	Body						= ActiveBody ModuleTag_05
		MaxHealth				= 1000.0
		MaxHealthDamaged		= 700.0
		MaxHealthReallyDamaged  = 300.0
	End

	ArmorSet
		Conditions        = None
		Armor             = HelmsDeepGates
		DamageFX          = GateDamageFX
	End

	Behavior = ProductionUpdate ModuleTag_06
		// nothing
	End
  
	Behavior                  = StructureCollapseUpdate ModuleTag_08
		MinCollapseDelay        = 000
		MaxCollapseDelay        = 000
		CollapseDamping         = .5
		MaxShudder              = 0.6
		MinBurstDelay           = 250
		MaxBurstDelay           = 800
		BigBurstFrequency       = 4
		FXList                  = INITIAL   FX_StructureMediumCollapse
		FXList                  = ALMOST_FINAL  FX_StructureAlmostCollapse
		DestroyObjectWhenDone	= Yes
		CollapseHeight			= 155
	End
  
	AttackContactPoint = X:-24 Y:-24 Z:92

	Geometry              = BOX
	GeometryMajorRadius   = 2
	GeometryMinorRadius   = 2
	GeometryHeight        = 2
	GeometryOffset		= X:20 Y:20 Z:0

	GeometryIsSmall       = NO
	  
End


//------------------------------------------------------------------------------------------


Object CreateaHero_Gondor05

	SelectPortrait = BPRHelmsDeep
 
  // *** ART Parameters ***
//  SelectPortrait         = SNReactor_L
//  ButtonImage            = SNReactor
  //day

  Draw = W3DScriptedModelDraw ModuleTag_Draw
    OkToChangeModelColor  = Yes
    UseStandardModelNames = Yes

    DefaultModelConditionState
      Model = CaHero_Gondor05		
    End
    
  End

  // ***DESIGN parameters ***
  DisplayName         = OBJECT:Hero_Gondor05
  Side                = Neutral
  EditorSorting       = STRUCTURE
  Browser = REGION Shire STRUCTURE
  ThreatLevel = 1.0
 
  BuildCost           = 500
  BuildTime           = 15.0           // in seconds
  VisionRange         = 160.0          // Shroud clearing distance
  ShroudClearingRange = 160


 
  // *** AUDIO Parameters ***

	SoundOnDamaged		= BuildingLightDamageStone
	SoundOnReallyDamaged	= BuildingHeavyDamageStone

	//  VoiceSelect         = GondorBarracksSelect
	 
	//  UnitSpecificSounds
	//  UnderConstruction     = UnderConstructionLoop
	//  End
 

	// *** ENGINEERING Parameters ***

  RadarPriority       = NOT_ON_RADAR
	KindOf        = PRELOAD STRUCTURE IMMOBILE CHUNK_VENDOR  NOT_AUTOACQUIRABLE CAN_CAST_REFLECTIONS 

	Body						= ActiveBody ModuleTag_05
		MaxHealth				= 1000.0
		MaxHealthDamaged		= 700.0
		MaxHealthReallyDamaged  = 300.0
	End

	ArmorSet
		Conditions        = None
		Armor             = HelmsDeepGates
		DamageFX          = GateDamageFX
	End

	Behavior = ProductionUpdate ModuleTag_06
		// nothing
	End
  
	Behavior                  = StructureCollapseUpdate ModuleTag_08
		MinCollapseDelay        = 000
		MaxCollapseDelay        = 000
		CollapseDamping         = .5
		MaxShudder              = 0.6
		MinBurstDelay           = 250
		MaxBurstDelay           = 800
		BigBurstFrequency       = 4
		FXList                  = INITIAL   FX_StructureMediumCollapse
		FXList                  = ALMOST_FINAL  FX_StructureAlmostCollapse
		DestroyObjectWhenDone	= Yes
		CollapseHeight			= 155
	End
  
	AttackContactPoint = X:-24 Y:-24 Z:92

	Geometry              = BOX
	GeometryMajorRadius   = 2
	GeometryMinorRadius   = 2
	GeometryHeight        = 2
	GeometryOffset		= X:20 Y:20 Z:0

	GeometryIsSmall       = NO
	  
End


//------------------------------------------------------------------------------------------


Object CreateaHero_Gondor06

	SelectPortrait = BPRHelmsDeep
 
  // *** ART Parameters ***
//  SelectPortrait         = SNReactor_L
//  ButtonImage            = SNReactor
  //day

  Draw = W3DScriptedModelDraw ModuleTag_Draw
    OkToChangeModelColor  = Yes
    UseStandardModelNames = Yes

    DefaultModelConditionState
      Model = CaHero_Gondor06		
    End
    
  End

  // ***DESIGN parameters ***
  DisplayName         = OBJECT:Hero_Gondor06
  Side                = Neutral
  EditorSorting       = STRUCTURE
  Browser = REGION Shire STRUCTURE
  ThreatLevel = 1.0
 
  BuildCost           = 500
  BuildTime           = 15.0           // in seconds
  VisionRange         = 160.0          // Shroud clearing distance
  ShroudClearingRange = 160


 
  // *** AUDIO Parameters ***

	SoundOnDamaged		= BuildingLightDamageStone
	SoundOnReallyDamaged	= BuildingHeavyDamageStone

	//  VoiceSelect         = GondorBarracksSelect
	 
	//  UnitSpecificSounds
	//  UnderConstruction     = UnderConstructionLoop
	//  End
 

	// *** ENGINEERING Parameters ***

  RadarPriority       = NOT_ON_RADAR
	KindOf        = PRELOAD STRUCTURE IMMOBILE CHUNK_VENDOR  NOT_AUTOACQUIRABLE CAN_CAST_REFLECTIONS 

	Body						= ActiveBody ModuleTag_05
		MaxHealth				= 1000.0
		MaxHealthDamaged		= 700.0
		MaxHealthReallyDamaged  = 300.0
	End

	ArmorSet
		Conditions        = None
		Armor             = HelmsDeepGates
		DamageFX          = GateDamageFX
	End

	Behavior = ProductionUpdate ModuleTag_06
		// nothing
	End
  
	Behavior                  = StructureCollapseUpdate ModuleTag_08
		MinCollapseDelay        = 000
		MaxCollapseDelay        = 000
		CollapseDamping         = .5
		MaxShudder              = 0.6
		MinBurstDelay           = 250
		MaxBurstDelay           = 800
		BigBurstFrequency       = 4
		FXList                  = INITIAL   FX_StructureMediumCollapse
		FXList                  = ALMOST_FINAL  FX_StructureAlmostCollapse
		DestroyObjectWhenDone	= Yes
		CollapseHeight			= 155
	End
  
	AttackContactPoint = X:-24 Y:-24 Z:92

	Geometry              = BOX
	GeometryMajorRadius   = 2
	GeometryMinorRadius   = 2
	GeometryHeight        = 2
	GeometryOffset		= X:20 Y:20 Z:0

	GeometryIsSmall       = NO
	  
End

//------------------------------------------------------------------------------------------


Object CreateaHero_Gondor07

	SelectPortrait = BPRHelmsDeep
 
  // *** ART Parameters ***
//  SelectPortrait         = SNReactor_L
//  ButtonImage            = SNReactor
  //day

  Draw = W3DScriptedModelDraw ModuleTag_Draw
    OkToChangeModelColor  = Yes
    UseStandardModelNames = Yes

    DefaultModelConditionState
      Model = CaHero_Gondor07		
    End
    
  End

  // ***DESIGN parameters ***
  DisplayName         = OBJECT:Hero_Gondor07
  Side                = Neutral
  EditorSorting       = STRUCTURE
  Browser = REGION Shire STRUCTURE
  ThreatLevel = 1.0
 
  BuildCost           = 500
  BuildTime           = 15.0           // in seconds
  VisionRange         = 160.0          // Shroud clearing distance
  ShroudClearingRange = 160


 
  // *** AUDIO Parameters ***

	SoundOnDamaged		= BuildingLightDamageStone
	SoundOnReallyDamaged	= BuildingHeavyDamageStone

	//  VoiceSelect         = GondorBarracksSelect
	 
	//  UnitSpecificSounds
	//  UnderConstruction     = UnderConstructionLoop
	//  End
 

	// *** ENGINEERING Parameters ***

  RadarPriority       = NOT_ON_RADAR
	KindOf        = PRELOAD STRUCTURE IMMOBILE CHUNK_VENDOR  NOT_AUTOACQUIRABLE CAN_CAST_REFLECTIONS 

	Body						= ActiveBody ModuleTag_05
		MaxHealth				= 1000.0
		MaxHealthDamaged		= 700.0
		MaxHealthReallyDamaged  = 300.0
	End

	ArmorSet
		Conditions        = None
		Armor             = HelmsDeepGates
		DamageFX          = GateDamageFX
	End

	Behavior = ProductionUpdate ModuleTag_06
		// nothing
	End
  
	Behavior                  = StructureCollapseUpdate ModuleTag_08
		MinCollapseDelay        = 000
		MaxCollapseDelay        = 000
		CollapseDamping         = .5
		MaxShudder              = 0.6
		MinBurstDelay           = 250
		MaxBurstDelay           = 800
		BigBurstFrequency       = 4
		FXList                  = INITIAL   FX_StructureMediumCollapse
		FXList                  = ALMOST_FINAL  FX_StructureAlmostCollapse
		DestroyObjectWhenDone	= Yes
		CollapseHeight			= 155
	End
  
	AttackContactPoint = X:-24 Y:-24 Z:92

	Geometry              = BOX
	GeometryMajorRadius   = 2
	GeometryMinorRadius   = 2
	GeometryHeight        = 2
	GeometryOffset		= X:20 Y:20 Z:0

	GeometryIsSmall       = NO
	  
End






//------------------------------------------------------------------------------------------


//------------------------------------------------------------------------------

Object CAH_DomeSkyboxNight_Doom

  Draw = W3DScriptedModelDraw ModuleTag_01
    DefaultModelConditionState
      Model = SkyBoxNightC
//      ParticleSysBone = LightningNode SkyBoxNightLightning
//      ParticleSysBone = None RainOfFireFlareNoTrails
    End
  End

  // ***DESIGN parameters ***
  EditorSorting       = SYSTEM
  Browser = NEUTRAL SYSTEM

  // *** AUDIO Parameters ***

  // *** ENGINEERING Parameters ***  
  
  Behavior                 = DestroyDie ModuleTag_02
    //<NO DATA>
  End

End




//------------------------------------------------------------------------------

Object CAH_Skybox

  Draw = W3DScriptedModelDraw ModuleTag_01
    DefaultModelConditionState
      Model = SkyBox_CAH
//      ParticleSysBone = LightningNode SkyBoxNightLightning
//      ParticleSysBone = None RainOfFireFlareNoTrails
    End
  End

  // ***DESIGN parameters ***
  EditorSorting       = SYSTEM
  Browser = NEUTRAL SYSTEM

  // *** AUDIO Parameters ***

  // *** ENGINEERING Parameters ***  
  
  Behavior                 = DestroyDie ModuleTag_02
    //<NO DATA>
  End

End

//------------------------------------------------------------------------------------------


//------------------------------------------------------------------------------
Object CreateAHeroOilDrum_Level1
	Side				= Neutral
	IsTrainable			= No
	EditorSorting		= UNIT
	ThreatLevel			= 0.0
	
	KindOf				= UNATTACKABLE INERT_SHROUD_REVEALER NOT_AUTOACQUIRABLE INERT IGNORED_IN_GUI

	VisionRange         = 0
	ShroudClearingRange = 0

	Body = HighlanderBody ModuleTag_Body		// Can take damage, but won't die.  Can only die from ::kill() or other unresistable damage
		MaxHealth = 1.0
	End
	
	Behavior = LifetimeUpdate ModuleTag_LifetimeUpdate
		MinLifetime		= CREATE_A_HERO_OIL_DRUM_LIFETIME_L1
		MaxLifetime		= CREATE_A_HERO_OIL_DRUM_LIFETIME_L1
	End
	
	Behavior = AttachUpdate ModuleTag_Attach
		ObjectFilter = ANY +CREATE_A_HERO
		ScanRange = 15
	End

	Behavior = OilSpillUpdate ModuleTag_SpillOil
		FireWeaponNugget
			WeaponName		= CreateAHeroSpillOil_Level1
			FireDelay		= CREATE_A_HERO_OIL_FIRE_DELAY_L1
			OneShot			= No
		End
		BreadcrumbName		= CreateAHeroBreadCrumb_Level1
		IgnitionWeaponSpacing = CREATE_A_HERO_OIL_BREADCRUMB_SPACING_L1
		AliveOnly			= Yes
		OilSpillFX				= FX_OilSpill
	End

	Behavior = SlowDeathBehavior ModuleTag_05
		DeathTypes = ALL
	End
End

Object CreateAHeroOilDrum_Level2
	Side				= Neutral
	IsTrainable			= No
	EditorSorting		= UNIT
	ThreatLevel			= 0.0
	
	KindOf				= UNATTACKABLE INERT_SHROUD_REVEALER NOT_AUTOACQUIRABLE INERT IGNORED_IN_GUI

	VisionRange         = 0
	ShroudClearingRange = 0

	Body = HighlanderBody ModuleTag_Body		// Can take damage, but won't die.  Can only die from ::kill() or other unresistable damage
		MaxHealth = 1.0
	End
	
	Behavior = LifetimeUpdate ModuleTag_LifetimeUpdate
		MinLifetime		= CREATE_A_HERO_OIL_DRUM_LIFETIME_L2
		MaxLifetime		= CREATE_A_HERO_OIL_DRUM_LIFETIME_L2
	End
	
	Behavior = AttachUpdate ModuleTag_Attach
		ObjectFilter = ANY +CREATE_A_HERO
		ScanRange = 15
	End

	Behavior = OilSpillUpdate ModuleTag_SpillOil
		FireWeaponNugget
			WeaponName		= CreateAHeroSpillOil_Level2
			FireDelay		= CREATE_A_HERO_OIL_FIRE_DELAY_L2
			OneShot			= No
		End
		BreadcrumbName		= CreateAHeroBreadCrumb_Level2
		IgnitionWeaponSpacing = CREATE_A_HERO_OIL_BREADCRUMB_SPACING_L2
		AliveOnly			= Yes
		OilSpillFX				= FX_OilSpill
	End

	Behavior = SlowDeathBehavior ModuleTag_05
		DeathTypes = ALL
	End
End

Object CreateAHeroOilDrum_Level3
	Side				= Neutral
	IsTrainable			= No
	EditorSorting		= UNIT
	ThreatLevel			= 0.0
	
	KindOf				= UNATTACKABLE INERT_SHROUD_REVEALER NOT_AUTOACQUIRABLE INERT IGNORED_IN_GUI

	VisionRange         = 0
	ShroudClearingRange = 0

	Body = HighlanderBody ModuleTag_Body		// Can take damage, but won't die.  Can only die from ::kill() or other unresistable damage
		MaxHealth = 1.0
	End
	
	Behavior = LifetimeUpdate ModuleTag_LifetimeUpdate
		MinLifetime		= CREATE_A_HERO_OIL_DRUM_LIFETIME_L3
		MaxLifetime		= CREATE_A_HERO_OIL_DRUM_LIFETIME_L3
	End
	
	Behavior = AttachUpdate ModuleTag_Attach
		ObjectFilter = ANY +CREATE_A_HERO
		ScanRange = 15
	End

	Behavior = OilSpillUpdate ModuleTag_SpillOil
		FireWeaponNugget
			WeaponName		= CreateAHeroSpillOil_Level3
			FireDelay		= CREATE_A_HERO_OIL_FIRE_DELAY_L3
			OneShot			= No
		End
		BreadcrumbName		= CreateAHeroBreadCrumb_Level3
		IgnitionWeaponSpacing = CREATE_A_HERO_OIL_BREADCRUMB_SPACING_L3
		AliveOnly			= Yes
		OilSpillFX				= FX_OilSpill
	End

	Behavior = SlowDeathBehavior ModuleTag_05
		DeathTypes = ALL
	End
End

Object CreateAHeroBreadCrumb_Level1
	Side				= Neutral
	IsTrainable			= No
	EditorSorting		= UNIT
	ThreatLevel			= 0.0
	
	KindOf				= NOT_AUTOACQUIRABLE IGNORED_IN_GUI NO_COLLIDE DO_NOT_CLASSIFY

	VisionRange         = 0
	ShroudClearingRange = 0

	Body = ActiveBody ModuleTag_Body
		MaxHealth = 1.0
	End
	
	Behavior = FireWeaponWhenDeadBehavior ModuleTag_Boom
		StartsActive	= Yes
		DelayTime		= 0
		DeathWeapon		= CreateAHeroIgniteOil_Level1
	End
End

Object CreateAHeroBreadCrumb_Level2
	Side				= Neutral
	IsTrainable			= No
	EditorSorting		= UNIT
	ThreatLevel			= 0.0
	
	KindOf				= NOT_AUTOACQUIRABLE IGNORED_IN_GUI NO_COLLIDE DO_NOT_CLASSIFY

	VisionRange         = 0
	ShroudClearingRange = 0

	Body = ActiveBody ModuleTag_Body
		MaxHealth = 1.0
	End
	
	Behavior = FireWeaponWhenDeadBehavior ModuleTag_Boom
		StartsActive	= Yes
		DelayTime		= 0
		DeathWeapon		= CreateAHeroIgniteOil_Level2
	End
End

Object CreateAHeroBreadCrumb_Level3
	Side				= Neutral
	IsTrainable			= No
	EditorSorting		= UNIT
	ThreatLevel			= 0.0
	
	KindOf				= NOT_AUTOACQUIRABLE IGNORED_IN_GUI NO_COLLIDE DO_NOT_CLASSIFY

	VisionRange         = 0
	ShroudClearingRange = 0

	Body = ActiveBody ModuleTag_Body
		MaxHealth = 1.0
	End

	Behavior = FireWeaponWhenDeadBehavior ModuleTag_Boom
		StartsActive	= Yes
		DelayTime		= 0
		DeathWeapon		= CreateAHeroIgniteOil_Level3
	End
End

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
Object CreateAHeroFamiliar_Base
	// *** ART Parameters ***

    // ButtonImage for Heros is button image on Hero Select UI to select hero. HI = HeroIcon or HeroImage.
    ButtonImage = HICrebain ;;,;; SBEvil_EyeOfSauron
    SelectPortrait         =  UPCrebain ;;,;; HPSauron_eye

	Draw = W3DHordeModelDraw ModuleTag_01
		// OkToChangeModelColor = Yes // temporarily commented out to remove the house color

		WadingParticleSys = EntRipples

		StaticModelLODMode = Yes // Will append M or L to the skin name depending on GameLOD

		DefaultModelConditionState
			Model					= Crebain_SKN
		End
		
		IdleAnimationState
			StateName				= Idle
			Animation				= IdleA
				AnimationName       = Crebain_SKL.Crebain_IDL
				AnimationMode       = LOOP
				AnimationBlendTime  = 30
			End
			Flags						= RANDOMSTART RESTART_ANIM_WHEN_COMPLETE
		End
		
		AnimationState				= MOVING
			Animation				= RunA
				AnimationName       = Crebain_SKL.Crebain_MOV
				AnimationMode       = LOOP
				AnimationBlendTime  = 30
//				Distance			= 35
			End
		End

		AnimationState				=	SELECTED
			StateName				=	State_Selected
			Animation				=	AtAttention
				AnimationName		=	Crebain_SKL.Crebain_IDL
				AnimationMode		=	LOOP
				AnimationBlendTime  = 30
			End
		End
		
	End
		
	Draw = W3DScriptedModelDraw DustEffects
	    DefaultModelConditionState
	      Model = None
	    End
	    IdleAnimationState
	    End
	    AnimationState = MOVING WADING
			ParticleSysBone = None FootstepSlash
	    End
	    AnimationState = MOVING ACCELERATE
			ParticleSysBone = None GenericSiegeTrailDust
	    End
	    AnimationState = MOVING DECELERATE
			ParticleSysBone = None GenericSiegeTrailDust
	    End
	    AnimationState = MOVING
	    End
	End
	
	// ***DESIGN parameters ***
	Side			= Neutral
	EditorSorting	= UNIT
	ThreatLevel		= 0.0
	CommandPoints	= 0
	ShockwaveResistance = SHOCKWAVE_RESISTANCE_IMMUNE

	//VisionRange		= CREATE_A_HERO_SUMMON_FAMILIAR_RADIUS_L1
	DisplayName		= OBJECT:CreateAHeroFamiliar
	
	CommandSet		= EmptyCommandSet


	// *** AUDIO Parameters ***

	EvaEnemyObjectSightedEvent = None  // Don't bother player about this object showing up over their base -- happens too much to bother

	;SoundAmbient = CrebainAmbientLoop
	;SoundMoveStart = CrebainSelect

	;VoiceSelect = CrebainSelect


	// *** ENGINEERING Parameters ***

	RadarPriority = UNIT
	KindOf = SELECTABLE NO_COLLIDE MONSTER MOVE_ONLY IGNORE_FOR_VICTORY IGNORE_FOR_EVA_SPEECH_POSITION IGNORES_SELECT_ALL DO_NOT_CLASSIFY AIRCRAFT SUMMONED ;;,;; Added AIRCRAFT, SUMMONED, removed CLICK_THROUGH
	
	Body = ActiveBody ModuleTag_02
		MaxHealth         = CREATE_A_HERO_FAMILIAR_MAX_HEALTH
		MaxHealthDamaged  = CREATE_A_HERO_FAMILIAR_MAX_HEALTH_DAMAGED
		//RecoveryTime      = 5000
	End
	
	ArmorSet ;;,;; Added for 2.1, prevents death from logical fires
		Conditions      = None
		Armor           = CrebainArmor
	End

	Behavior = AIUpdateInterface	ModuleTag_AIUpdateInterface
	End

	Behavior = PhysicsBehavior		ModuleTag_PhysicsBehavior
	End
	
	LocomotorSet
		Locomotor = CrebainLocomotor
		Condition = SET_NORMAL 
		Speed     = 0	//	Can't move
	End
	
	Behavior = LifetimeUpdate ModuleTag_LifetimeUpdate
		MinLifetime		= CREATE_A_HERO_SUMMON_FAMILIAR_LIFETIME_L1
		MaxLifetime		= CREATE_A_HERO_SUMMON_FAMILIAR_LIFETIME_L1
	End	
	
	// Detects other stealth units
	Behavior = StealthDetectorUpdate StealthDetectorUpdateModuleTag
		DetectionRate		= 500   // how often to rescan for stealthed things in my sight (msec)
	End

	Behavior = SlowDeathBehavior ModuleTag_05
		DeathTypes = ALL
	End

	Geometry = CYLINDER
	GeometryMajorRadius = 50.0
	GeometryMinorRadius = 50.0
	GeometryHeight		= 61.0
	GeometryIsSmall		= No
	//AttackContactPoint  = X:0 Y:0 Z:60
	AttackContactPoint  = X:40 Y:40 Z:60
	AttackContactPoint  = X:-40 Y:40 Z:60
	AttackContactPoint  = X:-40 Y:-40 Z:60
	AttackContactPoint  = X:40 Y:-40 Z:60

    Shadow			= SHADOW_ADDITIVE_DECAL_DYNAMIC
    ShadowSizeX		= 400//
    ShadowSizeY		= 400//
    ShadowTexture	= MUSauronEye//

	ShadowOpacityStart = 0
	ShadowOpacityFadeInTime = 1000
	ShadowOpacityPeak = 255
	ShadowOpacityFadeOutTime = 1000
	ShadowOpacityEnd = 0

	ShadowOverrideLODVisibility = yes
End

ChildObject CreateAHeroFamiliar_Level1 CreateAHeroFamiliar_Base

	// ***DESIGN parameters ***

	VisionRange		= CREATE_A_HERO_SUMMON_FAMILIAR_RADIUS_L1

	// *** ENGINEERING Parameters ***
	
	KindOf = +CLICK_THROUGH ;;,;; Added for 2.3

	Behavior = LifetimeUpdate ModuleTag_LifetimeUpdate
		MinLifetime		= CREATE_A_HERO_SUMMON_FAMILIAR_LIFETIME_L1
		MaxLifetime		= CREATE_A_HERO_SUMMON_FAMILIAR_LIFETIME_L1
	End	
End

ChildObject CreateAHeroFamiliar_Level2 CreateAHeroFamiliar_Base

	// ***DESIGN parameters ***

	VisionRange		= CREATE_A_HERO_SUMMON_FAMILIAR_RADIUS_L2
	
	KindOf = +HERO ;;,;; Added for 2.3
	
	LocomotorSet	;;,;; Added for 2.3
		Locomotor = CrebainLocomotor
		Condition = SET_NORMAL 
		Speed     = 200
	End
	
	Behavior = AttributeModifierAuraUpdate ModuleTag_FearMe	;;,;; Added for 2.3
		StartsActive	= Yes ;If no, requires upgrade to turn on.
		BonusName		= EyeOfSauronFear
		RefreshDelay	= 1000
		Range			= 150.0
		ObjectFilter	= ANY +INFANTRY +CAVALRY
		TargetEnemy		= Yes
		MaxActiveRank	= 1		;Only affects level 1 rank units
	End
	
End

ChildObject CreateAHeroFamiliar_Level3 CreateAHeroFamiliar_Base

	// ***DESIGN parameters ***

	VisionRange		= CREATE_A_HERO_SUMMON_FAMILIAR_RADIUS_L3
	
	KindOf = +HERO ;;,;; Added for 2.3

	LocomotorSet	;;,;; Added for 2.3
		Locomotor = CrebainLocomotor
		Condition = SET_NORMAL 
		Speed     = 200
	End
	
	Behavior = AttributeModifierAuraUpdate ModuleTag_FearMe	;;,;; Added for 2.3
		StartsActive	= Yes ;If no, requires upgrade to turn on.
		BonusName		= EyeOfSauronFear
		RefreshDelay	= 1000
		Range			= 150.0
		ObjectFilter	= ANY +INFANTRY +CAVALRY
		TargetEnemy		= Yes
		MaxActiveRank	= 1		;Only affects level 1 rank units
	End
	
	Behavior = AttributeModifierAuraUpdate ModuleTag_Debuff	;;,;; Added for 2.3
		StartsActive	= Yes
		BonusName		= GenericDebuff
		AntiCategory	= LEADERSHIP
		Range			= 200
		RefreshDelay	= 2000
		ObjectFilter	= AOTR_GENERIC_BUFF_RECIPIENT_OBJECT_FILTER
		TargetEnemy		= Yes
	End

End

/////-------------------------------------------New Projectile Objects


//------------------------------------------------------------------------------
Object WizardFireballProjectileL1

  // *** ART Parameters ***
  Draw = W3DScriptedModelDraw ModuleTag_Draw
    DefaultModelConditionState
      Model = FIRELOCATOR
      ParticleSysBone ROOTTRANSFORM WizardFireballFire_01 FollowBone:yes
      ParticleSysBone ROOTTRANSFORM WizardFireballFire_01a FollowBone:yes
      ParticleSysBone ROOTTRANSFORM WizardFireballSmoke_01 FollowBone:yes
    End
  End

  // *** AUDIO Parameters ***

  // ***DESIGN parameters ***
  EditorSorting     = SYSTEM
  ArmorSet
    Armor = NoArmor
  End
  VisionRange = 0.0

  // *** ENGINEERING Parameters ***
  KindOf = PROJECTILE
  Body = ActiveBody ModuleTag_02
    MaxHealth       = 10.0
  End

  Behavior = DestroyDie ModuleTag_03
    //nothing
  End
    
  Behavior = BezierProjectileBehavior ModuleTag_04
    
    FirstHeight = 9  // Height of Bezier control points above highest intervening terrain
    SecondHeight = 9
    FirstPercentIndent = 20% // Percentage of shot distance control points are placed
    SecondPercentIndent = 100%
    FlightPathAdjustDistPerSecond = 50 // Can allow a max speed this can attempt to follow a target. Units are their velocity we can tag. (45 is default human speed)
    DetonateCallsKill = Yes
    CurveFlattenMinDist = 50.0
  End

  Behavior = PhysicsBehavior ModuleTag_05
    KillWhenRestingOnGround = Yes
    GravityMult = 0.0
  End
  
  Behavior = FXListDie ModuleTag_07
    DeathTypes = ALL
    DeathFX = FX_WizardFireballL1
  End

  Geometry = Sphere
  GeometryIsSmall = Yes
  GeometryMajorRadius = 0.2
End

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
Object WizardFireballProjectileL2

  // *** ART Parameters ***
  Draw = W3DScriptedModelDraw ModuleTag_Draw
    DefaultModelConditionState
      Model = FIRELOCATOR
      ParticleSysBone ROOTTRANSFORM WizardFireballFire_02 FollowBone:yes
      ParticleSysBone ROOTTRANSFORM WizardFireballFire_02a FollowBone:yes
      ParticleSysBone ROOTTRANSFORM WizardFireballSmoke_02 FollowBone:yes
    End
  End

  // *** AUDIO Parameters ***

  // ***DESIGN parameters ***
  EditorSorting     = SYSTEM
  ArmorSet
    Armor = NoArmor
  End
  VisionRange = 0.0

  // *** ENGINEERING Parameters ***
  KindOf = PROJECTILE
  Body = ActiveBody ModuleTag_02
    MaxHealth       = 10.0
  End

  Behavior = DestroyDie ModuleTag_03
    //nothing
  End
    
  Behavior = BezierProjectileBehavior ModuleTag_04
    
    FirstHeight = 9  // Height of Bezier control points above highest intervening terrain
    SecondHeight = 9
    FirstPercentIndent = 20% // Percentage of shot distance control points are placed
    SecondPercentIndent = 100%
    FlightPathAdjustDistPerSecond = 50 // Can allow a max speed this can attempt to follow a target. Units are their velocity we can tag. (45 is default human speed)
    DetonateCallsKill = Yes
    CurveFlattenMinDist = 50.0
  End

  Behavior = PhysicsBehavior ModuleTag_05
    KillWhenRestingOnGround = Yes
    GravityMult = 0.0
  End
  
  Behavior = FXListDie ModuleTag_07
    DeathTypes = ALL
    DeathFX = FX_WizardFireballL2
  End

  Geometry = Sphere
  GeometryIsSmall = Yes
  GeometryMajorRadius = 0.4
End

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
Object WizardFireballProjectileL3

  // *** ART Parameters ***
  Draw = W3DScriptedModelDraw ModuleTag_Draw
    DefaultModelConditionState
      Model = FIRELOCATOR
      ParticleSysBone ROOTTRANSFORM WizardFireballFire_03 FollowBone:yes
      ParticleSysBone ROOTTRANSFORM WizardFireballFire_03a FollowBone:yes
      ParticleSysBone ROOTTRANSFORM WizardFireballSmoke_03 FollowBone:yes
    End
  End

  // *** AUDIO Parameters ***

  // ***DESIGN parameters ***
  EditorSorting     = SYSTEM
  ArmorSet
    Armor = NoArmor
  End
  VisionRange = 0.0

  // *** ENGINEERING Parameters ***
  KindOf = PROJECTILE
  Body = ActiveBody ModuleTag_02
    MaxHealth       = 10.0
  End

  Behavior = DestroyDie ModuleTag_03
    //nothing
  End
    
  Behavior = BezierProjectileBehavior ModuleTag_04
    
    FirstHeight = 9  // Height of Bezier control points above highest intervening terrain
    SecondHeight = 9
    FirstPercentIndent = 20% // Percentage of shot distance control points are placed
    SecondPercentIndent = 100%
    FlightPathAdjustDistPerSecond = 50 // Can allow a max speed this can attempt to follow a target. Units are their velocity we can tag. (45 is default human speed)
    DetonateCallsKill = Yes
    CurveFlattenMinDist = 50.0
  End

  Behavior = PhysicsBehavior ModuleTag_05
    KillWhenRestingOnGround = Yes
    GravityMult = 0.0
  End
  
  Behavior = FXListDie ModuleTag_07
    DeathTypes = ALL
    DeathFX = FX_WizardFireballL3
  End

  Geometry = Sphere
  GeometryIsSmall = Yes
  GeometryMajorRadius = 0.8
End

//------------------------------------------------------------------------------

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
Object CreateAHeroTornado_Level1

	// *** ART Parameters ***

    ; ButtonImage for Heros is button image on Hero Select UI to select hero. HI = HeroIcon or HeroImage.
    ButtonImage = HSGaladriel_NaturesWrath
    SelectPortrait         = UPTornado
	Draw = W3DScriptedModelDraw ModuleTag_01
		OkToChangeModelColor = Yes
		DefaultModelConditionState
			Model           = EXWhirlwind
			ParticleSysBone = NONE WhirlwindDust01 
			ParticleSysBone = NONE WhirlwindDust02
		End  
	End
	
 	Draw = W3DTornadoDraw ModuleTag_TornadoDraw
	
		DecalTemplate
  			Texture        = EXWhirlwindGround
			Style          = SHADOW_ALPHA_DECAL
			OpacityMin     = 5% 
			OpacityMax     = 40%	 
			MaxRadius	   = 100.0
			Color          = R:255 G:255 B:255 A:255 ;R:200 G:200 B:200 A:255 
			OnlyVisibleToOwningPlayer = Yes
			RotationsPerMinute = 0.4
			SpiralAcceleration = 1.0
		End
		DecalCount		= 7
		DecalMaxRadius	= 300.0
		
		
	End
	
	// ***DESIGN parameters ***
	Side			= Mordor
	EditorSorting	= UNIT
	ThreatLevel		= 0.0
	CommandPoints	= 0
	ShockwaveResistance = SHOCKWAVE_RESISTANCE_IMMUNE

	VisionRange		= 200.0
	DisplayName		= OBJECT:Whirlwind
	
	CommandSet		= EmptyCommandSet


	// *** AUDIO Parameters ***

	EvaEnemyObjectSightedEvent = None  // Don't bother player about this object showing up over their base -- happens too much to bother

	SoundAmbient	= TornadoLoopMS
	SoundMoveStart	= TornadoMoveStart

	VoiceAttack		= TornadoSelect
	VoiceMove		= TornadoSelect
	VoiceSelect		= TornadoSelect

	// *** ENGINEERING Parameters ***
	RadarPriority = UNIT
	KindOf = SELECTABLE NO_COLLIDE AIRCRAFT UNATTACKABLE MOVE_ONLY CLICK_THROUGH HERO IGNORE_FOR_VICTORY IGNORE_FOR_EVA_SPEECH_POSITION NOT_AUTOACQUIRABLE IGNORES_SELECT_ALL PASS_EXPERIENCE_TO_PRODUCER
	
	Body = ActiveBody ModuleTag_02
		MaxHealth         = 200000
	End

	Behavior = AIUpdateInterface	ModuleTag_AIUpdateInterface
	End

	Behavior = PhysicsBehavior		ModuleTag_PhysicsBehavior
	End
	
	LocomotorSet
		Locomotor = TornadoLocomotor
		Condition = SET_NORMAL 
		Speed     = 20
	End
	
	Behavior = LifetimeUpdate ModuleTag_LifetimeUpdate
		MinLifetime		= CREATE_A_HERO_TORNADO_LIFETIME_L1
		MaxLifetime		= CREATE_A_HERO_TORNADO_LIFETIME_L1
	End	

	Behavior = FireWeaponUpdate ModuleTag_WINDY
		FireWeaponNugget
			WeaponName = WhirlwindWindWeapon ;;,;; TornadoWindWeapon
			FireDelay = 0
			OneShot = No
		End
	End	
	

	// TORNADOES ARE SCARY	
	Behavior = AttributeModifierAuraUpdate ModuleTag_FearMe
		StartsActive	= Yes //If no, requires upgrade to turn on.
		BonusName		= EyeOfSauronFear
		RefreshDelay	= 1000
		Range			= 150.0
		ObjectFilter	= ANY +INFANTRY +CAVALRY
		TargetEnemy		= Yes
		MaxActiveRank	= 1		//Only affects level 1 rank units
	End	


	
	Behavior = SlowDeathBehavior ModuleTag_05
		DeathTypes = ALL
	End

	Geometry = CYLINDER
	GeometryMajorRadius = 1.0
	GeometryMinorRadius = 1.0
	GeometryHeight		= 1.0
	GeometryIsSmall		= Yes

// NO SHADOW -M Lo
//    Shadow			= SHADOW_DECAL//SHADOW_ALPHA_DECAL// SHADOW_ALPHA_DECAL_DYNAMIC
//    ShadowSizeX		= 200//
//    ShadowSizeY		= 200//
//    ShadowTexture	= EUTornadoShadow//
//
//	ShadowOpacityStart = 0
//	ShadowOpacityFadeInTime = 1000
//	ShadowOpacityPeak = 255
//	ShadowOpacityFadeOutTime = 1000
//	ShadowOpacityEnd = 0
//
//	ShadowOverrideLODVisibility = yes

End

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
Object CreateAHeroTornado_Level2

	// *** ART Parameters ***

    ; ButtonImage for Heros is button image on Hero Select UI to select hero. HI = HeroIcon or HeroImage.
    ButtonImage = HSGaladriel_NaturesWrath
    SelectPortrait         = UPTornado
	Draw = W3DScriptedModelDraw ModuleTag_01
		OkToChangeModelColor = Yes
		DefaultModelConditionState
			Model           = EXWhirlwind
			ParticleSysBone = NONE WhirlwindDust01 
			ParticleSysBone = NONE WhirlwindDust02
			ParticleSysBone = NONE WhirlwindLeaves
		End  
	End
	
 	Draw = W3DTornadoDraw ModuleTag_TornadoDraw
	
		DecalTemplate
  			Texture        = EXWhirlwindGround
			Style          = SHADOW_ALPHA_DECAL
			OpacityMin     = 5% 
			OpacityMax     = 40%	 
			MaxRadius	   = 100.0
			Color          = R:255 G:255 B:255 A:255 ;R:200 G:200 B:200 A:255 
			OnlyVisibleToOwningPlayer = Yes
			RotationsPerMinute = 0.4
			SpiralAcceleration = 1.0
		End
		DecalCount		= 7
		DecalMaxRadius	= 300.0
		
		
	End
	
	// ***DESIGN parameters ***
	Side			= Mordor
	EditorSorting	= UNIT
	ThreatLevel		= 0.0
	CommandPoints	= 0
	ShockwaveResistance = SHOCKWAVE_RESISTANCE_IMMUNE

	VisionRange		= 200.0
	DisplayName		= OBJECT:Whirlwind
	
	CommandSet		= EmptyCommandSet


	// *** AUDIO Parameters ***

	EvaEnemyObjectSightedEvent = None  // Don't bother player about this object showing up over their base -- happens too much to bother

	SoundAmbient	= TornadoLoopMS
	SoundMoveStart	= TornadoMoveStart

	VoiceAttack		= TornadoSelect
	VoiceMove		= TornadoSelect
	VoiceSelect		= TornadoSelect


	// *** ENGINEERING Parameters ***
	RadarPriority = UNIT
	KindOf = SELECTABLE NO_COLLIDE AIRCRAFT UNATTACKABLE MOVE_ONLY CLICK_THROUGH HERO IGNORE_FOR_VICTORY IGNORE_FOR_EVA_SPEECH_POSITION NOT_AUTOACQUIRABLE IGNORES_SELECT_ALL PASS_EXPERIENCE_TO_PRODUCER
	
	Body = ActiveBody ModuleTag_02
		MaxHealth         = 200000
	End

	Behavior = AIUpdateInterface	ModuleTag_AIUpdateInterface
	End

	Behavior = PhysicsBehavior		ModuleTag_PhysicsBehavior
	End
	
	LocomotorSet
		Locomotor = TornadoLocomotor
		Condition = SET_NORMAL 
		Speed     = 20
	End
	
	Behavior = LifetimeUpdate ModuleTag_LifetimeUpdate
		MinLifetime		= CREATE_A_HERO_TORNADO_LIFETIME_L2
		MaxLifetime		= CREATE_A_HERO_TORNADO_LIFETIME_L2
	End	

	Behavior = FireWeaponUpdate ModuleTag_WINDY
		FireWeaponNugget
			WeaponName = WhirlwindWindWeapon ;;,;; TornadoWindWeapon
			FireDelay = 0
			OneShot = No
		End
	End	
	

	// TORNADOES ARE SCARY	
	Behavior = AttributeModifierAuraUpdate ModuleTag_FearMe
		StartsActive	= Yes //If no, requires upgrade to turn on.
		BonusName		= EyeOfSauronFear
		RefreshDelay	= 1000
		Range			= 150.0
		ObjectFilter	= ANY +INFANTRY +CAVALRY
		TargetEnemy		= Yes
		MaxActiveRank	= 1		//Only affects level 1 rank units
	End	


	
	Behavior = SlowDeathBehavior ModuleTag_05
		DeathTypes = ALL
	End

	Geometry = CYLINDER
	GeometryMajorRadius = 1.0
	GeometryMinorRadius = 1.0
	GeometryHeight		= 1.0
	GeometryIsSmall		= Yes

// NO SHADOW -M Lo
//    Shadow			= SHADOW_DECAL//SHADOW_ALPHA_DECAL// SHADOW_ALPHA_DECAL_DYNAMIC
//    ShadowSizeX		= 200//
//    ShadowSizeY		= 200//
//    ShadowTexture	= EUTornadoShadow//
//
//	ShadowOpacityStart = 0
//	ShadowOpacityFadeInTime = 1000
//	ShadowOpacityPeak = 255
//	ShadowOpacityFadeOutTime = 1000
//	ShadowOpacityEnd = 0
//
//	ShadowOverrideLODVisibility = yes

End

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
Object CreateAHeroTornado_Level3

	// *** ART Parameters ***

    ; ButtonImage for Heros is button image on Hero Select UI to select hero. HI = HeroIcon or HeroImage.
    ButtonImage = HSGaladriel_NaturesWrath
    SelectPortrait         = UPTornado
	Draw = W3DScriptedModelDraw ModuleTag_01
		OkToChangeModelColor = Yes
		DefaultModelConditionState
			Model           = EXWhirlwind
			ParticleSysBone = NONE WhirlwindDust01 
			ParticleSysBone = NONE WhirlwindDust02
			ParticleSysBone = NONE WhirlwindLeaves
			ParticleSysBone = NONE WhirlwindDebris
		End  
	End
	
 	Draw = W3DTornadoDraw ModuleTag_TornadoDraw
	
		DecalTemplate
  			Texture        = EXWhirlwindGround
			Style          = SHADOW_ALPHA_DECAL
			OpacityMin     = 5% 
			OpacityMax     = 40%	 
			MaxRadius	   = 100.0
			Color          = R:255 G:255 B:255 A:255 ;R:200 G:200 B:200 A:255 
			OnlyVisibleToOwningPlayer = Yes
			RotationsPerMinute = 0.4
			SpiralAcceleration = 1.0
		End
		DecalCount		= 7
		DecalMaxRadius	= 300.0
		
		
	End
	
	// ***DESIGN parameters ***
	Side			= Mordor
	EditorSorting	= UNIT
	ThreatLevel		= 0.0
	CommandPoints	= 0
	ShockwaveResistance = SHOCKWAVE_RESISTANCE_IMMUNE

	VisionRange		= 200.0
	DisplayName		= OBJECT:Whirlwind
	
	CommandSet		= EmptyCommandSet


	// *** AUDIO Parameters ***

	EvaEnemyObjectSightedEvent = None  // Don't bother player about this object showing up over their base -- happens too much to bother

	SoundAmbient	= TornadoLoopMS
	SoundMoveStart	= TornadoMoveStart

	VoiceAttack		= TornadoSelect
	VoiceMove		= TornadoSelect
	VoiceSelect		= TornadoSelect

	// *** ENGINEERING Parameters ***
	RadarPriority = UNIT
	KindOf = SELECTABLE NO_COLLIDE AIRCRAFT UNATTACKABLE MOVE_ONLY CLICK_THROUGH HERO IGNORE_FOR_VICTORY IGNORE_FOR_EVA_SPEECH_POSITION NOT_AUTOACQUIRABLE IGNORES_SELECT_ALL PASS_EXPERIENCE_TO_PRODUCER
	
	Body = ActiveBody ModuleTag_02
		MaxHealth         = 200000
	End

	Behavior = AIUpdateInterface	ModuleTag_AIUpdateInterface
	End

	Behavior = PhysicsBehavior		ModuleTag_PhysicsBehavior
	End
	
	LocomotorSet
		Locomotor = TornadoLocomotor
		Condition = SET_NORMAL 
		Speed     = 20
	End
	
	Behavior = LifetimeUpdate ModuleTag_LifetimeUpdate
		MinLifetime		= CREATE_A_HERO_TORNADO_LIFETIME_L3
		MaxLifetime		= CREATE_A_HERO_TORNADO_LIFETIME_L3
	End	

	Behavior = FireWeaponUpdate ModuleTag_WINDY
		FireWeaponNugget
			WeaponName = WhirlwindWindWeapon ;;,;; TornadoWindWeapon
			FireDelay = 0
			OneShot = No
		End
	End	
	

	// TORNADOES ARE SCARY	
	Behavior = AttributeModifierAuraUpdate ModuleTag_FearMe
		StartsActive	= Yes //If no, requires upgrade to turn on.
		BonusName		= EyeOfSauronFear
		RefreshDelay	= 1000
		Range			= 150.0
		ObjectFilter	= ANY +INFANTRY +CAVALRY
		TargetEnemy		= Yes
		MaxActiveRank	= 1		//Only affects level 1 rank units
	End	


	
	Behavior = SlowDeathBehavior ModuleTag_05
		DeathTypes = ALL
	End

	Geometry = CYLINDER
	GeometryMajorRadius = 1.0
	GeometryMinorRadius = 1.0
	GeometryHeight		= 1.0
	GeometryIsSmall		= Yes

// NO SHADOW -M Lo
//    Shadow			= SHADOW_DECAL//SHADOW_ALPHA_DECAL// SHADOW_ALPHA_DECAL_DYNAMIC
//    ShadowSizeX		= 200//
//    ShadowSizeY		= 200//
//    ShadowTexture	= EUTornadoShadow//
//
//	ShadowOpacityStart = 0
//	ShadowOpacityFadeInTime = 1000
//	ShadowOpacityPeak = 255
//	ShadowOpacityFadeOutTime = 1000
//	ShadowOpacityEnd = 0
//
//	ShadowOverrideLODVisibility = yes


End

;------------------------------------------------------------------------------
Object CAH_FireFlash

  ; *** ART Parameters ***
  Draw = W3DScriptedModelDraw ModuleTag_01
    DefaultModelConditionState
		Model = firelocator
	End   
    ModelConditionState = WORLD_BUILDER
			Model = locator
	End
  End

  ; ***DESIGN parameters ***
  EditorSorting   = SYSTEM
  Browser = NEUTRAL SYSTEM

  ; *** ENGINEERING Parameters ***  
  KindOf          = IMMOBILE
  
  Draw = W3DLightDraw ModuleTag_02
    Ambient = R:0 G:0 B:0
    Diffuse = R:255 G:128 B:0
    Radius = 150
    Intensity = 5 
    FlickerAmplitude = 3.5
    FlickerFrequency = 1.0
    AttachToBoneInAnotherModule = none
  End 
End
Object Leechblade_Heal_Level_1
	Draw = W3DScriptedModelDraw ModuleTag_01
		;StaticModelLODMode = yes ; Will append M or L to the skin name depending on GameLOD
		DefaultModelConditionState
			Model = None
			ParticleSysBone = NONE LeechbladeMain
			ParticleSysBone = NONE LeechbladeMist
		End
	End
    EditorSorting   = SYSTEM
    KindOf = IMMOBILE UNATTACKABLE  PRELOAD ;NO_COLLIDE
    ForceLuaRegistration = Yes ; I have no AI, but I want to send a fear message so please register me.

    Body = ImmortalBody ModuleTag_02
        MaxHealth = 1
        InitialHealth = 1
    End
	Behavior = FireWeaponUpdate ModuleTagHealWeapon
		FireWeaponNugget
			WeaponName = LeechbladeHealWeapon1 ;;,;; TornadoWindWeapon
			FireDelay = 0
			OneShot = Yes
		End
	End

    Behavior = DeletionUpdate ModuleTag_03 ; Not LifetimeUpdate, since I can't die.  This will DestroyObject me.
        MinLifetime = 2000
        MaxLifetime = 2000
    End
End
Object Leechblade_Heal_Level_2
	Draw = W3DScriptedModelDraw ModuleTag_01
		;StaticModelLODMode = yes ; Will append M or L to the skin name depending on GameLOD
		DefaultModelConditionState
			Model = None
			ParticleSysBone = NONE LeechbladeMain
			ParticleSysBone = NONE LeechbladeMist
		End
	End
    EditorSorting   = SYSTEM
    KindOf = IMMOBILE UNATTACKABLE  PRELOAD ;NO_COLLIDE
    ForceLuaRegistration = Yes ; I have no AI, but I want to send a fear message so please register me.

    Body = ImmortalBody ModuleTag_02
        MaxHealth = 1
        InitialHealth = 1
    End
	Behavior = FireWeaponUpdate ModuleTagHealWeapon
		FireWeaponNugget
			WeaponName = LeechbladeHealWeapon2 ;;,;; TornadoWindWeapon
			FireDelay = 0
			OneShot = Yes
		End
	End

    Behavior = DeletionUpdate ModuleTag_03 ; Not LifetimeUpdate, since I can't die.  This will DestroyObject me.
        MinLifetime = 2000
        MaxLifetime = 2000
    End
End
	

Object FrigidHandsLevel1Egg
	Draw = W3DScriptedModelDraw ModuleTag_Draw
		DefaultModelConditionState
			Model = None
		End
	End

	KindOf = IMMOBILE UNATTACKABLE

	Body = ActiveBody ModuleTag_MakesKillWork
		MaxHealth = 1
	End

	Behavior = LifetimeUpdate ModuleTag_HatchTrigger
		MinLifetime = 500
		MaxLifetime = 500
	End

	Behavior = SlowDeathBehavior ModuleTag_HatchProcess
		DestructionDelay = 0
		Weapon	= INITIAL FrigidHandsWeapon1
	End
End
Object FrigidHandsLevel2Egg
	Draw = W3DScriptedModelDraw ModuleTag_Draw
		DefaultModelConditionState
			Model = None
		End
	End

	KindOf = IMMOBILE UNATTACKABLE

	Body = ActiveBody ModuleTag_MakesKillWork
		MaxHealth = 1
	End

	Behavior = LifetimeUpdate ModuleTag_HatchTrigger
		MinLifetime = 500
		MaxLifetime = 500
	End

	Behavior = SlowDeathBehavior ModuleTag_HatchProcess
		DestructionDelay = 0
		Weapon	= INITIAL FrigidHandsWeapon2
	End
End
Object FrigidHandsLevel3Egg
	Draw = W3DScriptedModelDraw ModuleTag_Draw
		DefaultModelConditionState
			Model = None
		End
	End

	KindOf = IMMOBILE UNATTACKABLE

	Body = ActiveBody ModuleTag_MakesKillWork
		MaxHealth = 1
	End

	Behavior = LifetimeUpdate ModuleTag_HatchTrigger
		MinLifetime = 500
		MaxLifetime = 500
	End

	Behavior = SlowDeathBehavior ModuleTag_HatchProcess
		DestructionDelay = 0
		Weapon	= INITIAL FrigidHandsWeapon3
	End
End

Object WitheringTouchPing1
	Draw = W3DScriptedModelDraw ModuleTag_Draw
		DefaultModelConditionState
			Model = None
			ParticleSysBone = NONE WitheringTouchInitial_RiseA
			ParticleSysBone = NONE WitheringTouchInitial_RiseB
			ParticleSysBone = NONE WitheringTouchInitial_RiseC
			ParticleSysBone = NONE WitheringTouchInitial_HoverA
			ParticleSysBone = NONE WitheringTouchInitial_HoverB
			ParticleSysBone = NONE WitheringTouchInitial_HoverC
			ParticleSysBone = NONE WitheringTouchInitial_FallA
			ParticleSysBone = NONE WitheringTouchInitial_FallB
			ParticleSysBone = NONE WitheringTouchInitial_FallC
			ParticleSysBone = NONE WitheringTouchInitial_FallD
			ParticleSysBone = NONE WitheringTouchExplosion_A
			ParticleSysBone = NONE WitheringTouchExplosion_B
		End
	End
	KindOf = NOT_AUTOACQUIRABLE IMMOBILE IGNORE_FOR_VICTORY

	Body = ActiveBody ModuleTag_MakesKillWork
		MaxHealth = 10
	End
	ArmorSet
		Conditions      = None
		Armor           = StewPotArmor
		DamageFX        = NormalDamageFX
	End
	Behavior = LifetimeUpdate ModuleTag_HatchTrigger
		MinLifetime = 10000.0
		MaxLifetime = 10000.0
	End
	Behavior = SlowDeathBehavior ModuleTag_HatchProcess
		DestructionDelay = 0
	End
	Behavior = FireWeaponUpdate ModuleTag_WeaponFiring
		FireWeaponNugget
			WeaponName = WitheringTouchWeapon1
			Offset = X:0 Y:0 Z:0
			FireDelay = 3200
			OneShot = Yes
		End
	End
End

ChildObject WitheringTouchPing2 WitheringTouchPing1
	Behavior = FireWeaponUpdate ModuleTag_WeaponFiring
		FireWeaponNugget
			WeaponName = WitheringTouchWeapon2
			Offset = X:0 Y:0 Z:0
			FireDelay = 3200
			OneShot = Yes
		End
	End
End

ChildObject WitheringTouchPing3 WitheringTouchPing1
	Behavior = FireWeaponUpdate ModuleTag_WeaponFiring
		FireWeaponNugget
			WeaponName = WitheringTouchWeapon3
			Offset = X:0 Y:0 Z:0
			FireDelay = 3200
			OneShot = Yes
		End
	End
End
Object FrigidHandsFloodMemberLevel_1
	Draw = W3DScriptedModelDraw ModuleTag_01
		StaticModelLODMode = yes ; Will append M or L to the skin name depending on GameLOD
		DefaultModelConditionState
			Model = None
			ParticleSysBone = NONE FrigidHandsCrystals 
			ParticleSysBone = NONE FrigidHandsMist
			ParticleSysBone = NONE FrigidHandsFire
			ParticleSysBone = NONE FrigidHandsSnow
		End
	End

	EditorSorting   = SYSTEM
	KindOf = NO_COLLIDE IMMOBILE UNATTACKABLE INERT SCARY

	Body = HighlanderBody ModuleTag_02
		MaxHealth = 1
		InitialHealth = 1
	End

	Behavior = FireWeaponUpdate ModuleTag_WeaponFiring
		FireWeaponNugget
			WeaponName = FrigidHandsFloodWeapon1			
			Offset = X:-25 Y:0 Z:0
			FireDelay = 0
			OneShot = No
		End
	End

	Behavior = SlowDeathBehavior ModuleTag_FadeOut
		DeathTypes			= ALL
		DestructionDelay		= 250
		FadeDelay			= 0
		FadeTime			= 250
	End

	Geometry = CYLINDER
	GeometryMajorRadius = 17.6
	GeometryHeight = 32.0
	GeometryIsSmall = No
End

ChildObject FrigidHandsFloodMemberLevel_2 FrigidHandsFloodMemberLevel_1
	Behavior = FireWeaponUpdate ModuleTag_WeaponFiring
		FireWeaponNugget
			WeaponName = FrigidHandsFloodWeapon2			
			Offset = X:-25 Y:0 Z:0
			FireDelay = 0
			OneShot = No
		End
	End
End

ChildObject FrigidHandsFloodMemberLevel_3 FrigidHandsFloodMemberLevel_1
	Behavior = FireWeaponUpdate ModuleTag_WeaponFiring
		FireWeaponNugget
			WeaponName = FrigidHandsFloodWeapon3			
			Offset = X:-25 Y:0 Z:0
			FireDelay = 0
			OneShot = No
		End
	End
End
Object FrigidHandsFloodLevel_1

 	Draw = W3DScriptedModelDraw ModuleTag_01
    	DefaultModelConditionState
	      	Model = None
    	End
  	End
	EditorSorting   = SYSTEM
	KindOf = NO_COLLIDE IMMOBILE UNATTACKABLE INERT
	ForceLuaRegistration = Yes ; I have no AI, but I want to send a fear message so please register me.

	; *** ENGINEERING Parameters ***
	Body = ImmortalBody ModuleTag_02
		MaxHealth = 1
		InitialHealth = 1
	End

	Behavior = DeletionUpdate ModuleTag_03 ; Not LifetimeUpdate, since I can't die.  This will DestroyObject me.
		MinLifetime = 10000
		MaxLifetime = 10000
	End
	Behavior = FloodUpdate ModuleTag_FloodCentral
		AngleOfFlow = 0	; In degrees, with 0 as screen right
		DirectionIsRelative = Yes ; If it is relative, it adds the facing of the flood object.

		FloodMember
			MemberTemplateName = FrigidHandsFloodMemberLevel_1
			ControlPointOffsetOne =		X:-55 Y:0 Z:0
			ControlPointOffsetTwo =		X:-15 Y:50 Z:0
			ControlPointOffsetThree =	X:25 Y:100 Z:0
			ControlPointOffsetFour =	X:60 Y:50 Z:0
			MemberSpeed = 20
		End
		FloodMember
			MemberTemplateName = FrigidHandsFloodMemberLevel_1
			ControlPointOffsetOne =		X:-55 Y:0 Z:0
			ControlPointOffsetTwo =		X:-15 Y:30 Z:0
			ControlPointOffsetThree =	X:25 Y:60 Z:0
			ControlPointOffsetFour =	X:60 Y:30 Z:0
			MemberSpeed = 15
		End
		FloodMember
			MemberTemplateName = FrigidHandsFloodMemberLevel_1
			ControlPointOffsetOne =		X:-55 Y:0 Z:0
			ControlPointOffsetTwo =		X:-15 Y:10 Z:0
			ControlPointOffsetThree =	X:25 Y:20 Z:0
			ControlPointOffsetFour =	X:60 Y:10 Z:0
			MemberSpeed = 13
		End
		FloodMember
			MemberTemplateName = FrigidHandsFloodMemberLevel_1
			ControlPointOffsetOne =		X:-55 Y:0 Z:0
			ControlPointOffsetTwo =		X:-15 Y:-10 Z:0
			ControlPointOffsetThree =	X:25 Y:-20 Z:0
			ControlPointOffsetFour =	X:60 Y:-10 Z:0
			MemberSpeed = 13
		End
		FloodMember
			MemberTemplateName = FrigidHandsFloodMemberLevel_1
			ControlPointOffsetOne =		X:-55 Y:0 Z:0
			ControlPointOffsetTwo =		X:-15 Y:-30 Z:0
			ControlPointOffsetThree =	X:25 Y:-60 Z:0
			ControlPointOffsetFour =	X:60 Y:-30 Z:0
			MemberSpeed = 15
		End
		FloodMember
			MemberTemplateName = FrigidHandsFloodMemberLevel_1
			ControlPointOffsetOne =		X:-55 Y:0 Z:0
			ControlPointOffsetTwo =		X:-15 Y:-50 Z:0
			ControlPointOffsetThree =	X:25 Y:-100 Z:0
			ControlPointOffsetFour =	X:60 Y:-50 Z:0
			MemberSpeed = 20
		End
	End
End

ChildObject FrigidHandsFloodLevel_2 FrigidHandsFloodLevel_1
	Behavior = FloodUpdate ModuleTag_FloodCentral
		AngleOfFlow = 0	; In degrees, with 0 as screen right
		DirectionIsRelative = Yes ; If it is relative, it adds the facing of the flood object.

		FloodMember
			MemberTemplateName = FrigidHandsFloodMemberLevel_2
			ControlPointOffsetOne =		X:-55 Y:0 Z:0
			ControlPointOffsetTwo =		X:-15 Y:50 Z:0
			ControlPointOffsetThree =	X:25 Y:100 Z:0
			ControlPointOffsetFour =	X:60 Y:50 Z:0
			MemberSpeed = 20
		End
		FloodMember
			MemberTemplateName = FrigidHandsFloodMemberLevel_2
			ControlPointOffsetOne =		X:-55 Y:0 Z:0
			ControlPointOffsetTwo =		X:-15 Y:30 Z:0
			ControlPointOffsetThree =	X:25 Y:60 Z:0
			ControlPointOffsetFour =	X:60 Y:30 Z:0
			MemberSpeed = 15
		End
		FloodMember
			MemberTemplateName = FrigidHandsFloodMemberLevel_2
			ControlPointOffsetOne =		X:-55 Y:0 Z:0
			ControlPointOffsetTwo =		X:-15 Y:10 Z:0
			ControlPointOffsetThree =	X:25 Y:20 Z:0
			ControlPointOffsetFour =	X:60 Y:10 Z:0
			MemberSpeed = 13
		End
		FloodMember
			MemberTemplateName = FrigidHandsFloodMemberLevel_2
			ControlPointOffsetOne =		X:-55 Y:0 Z:0
			ControlPointOffsetTwo =		X:-15 Y:-10 Z:0
			ControlPointOffsetThree =	X:25 Y:-20 Z:0
			ControlPointOffsetFour =	X:60 Y:-10 Z:0
			MemberSpeed = 13
		End
		FloodMember
			MemberTemplateName = FrigidHandsFloodMemberLevel_2
			ControlPointOffsetOne =		X:-55 Y:0 Z:0
			ControlPointOffsetTwo =		X:-15 Y:-30 Z:0
			ControlPointOffsetThree =	X:25 Y:-60 Z:0
			ControlPointOffsetFour =	X:60 Y:-30 Z:0
			MemberSpeed = 15
		End
		FloodMember
			MemberTemplateName = FrigidHandsFloodMemberLevel_2
			ControlPointOffsetOne =		X:-55 Y:0 Z:0
			ControlPointOffsetTwo =		X:-15 Y:-50 Z:0
			ControlPointOffsetThree =	X:25 Y:-100 Z:0
			ControlPointOffsetFour =	X:60 Y:-50 Z:0
			MemberSpeed = 20
		End
	End
End

ChildObject FrigidHandsFloodLevel_3 FrigidHandsFloodLevel_1
	Behavior = FloodUpdate ModuleTag_FloodCentral
		AngleOfFlow = 0	; In degrees, with 0 as screen right
		DirectionIsRelative = Yes ; If it is relative, it adds the facing of the flood object.

		FloodMember
			MemberTemplateName = FrigidHandsFloodMemberLevel_3
			ControlPointOffsetOne =		X:-55 Y:0 Z:0
			ControlPointOffsetTwo =		X:-15 Y:50 Z:0
			ControlPointOffsetThree =	X:25 Y:100 Z:0
			ControlPointOffsetFour =	X:60 Y:50 Z:0
			MemberSpeed = 20
		End
		FloodMember
			MemberTemplateName = FrigidHandsFloodMemberLevel_3
			ControlPointOffsetOne =		X:-55 Y:0 Z:0
			ControlPointOffsetTwo =		X:-15 Y:30 Z:0
			ControlPointOffsetThree =	X:25 Y:60 Z:0
			ControlPointOffsetFour =	X:60 Y:30 Z:0
			MemberSpeed = 15
		End
		FloodMember
			MemberTemplateName = FrigidHandsFloodMemberLevel_3
			ControlPointOffsetOne =		X:-55 Y:0 Z:0
			ControlPointOffsetTwo =		X:-15 Y:10 Z:0
			ControlPointOffsetThree =	X:25 Y:20 Z:0
			ControlPointOffsetFour =	X:60 Y:10 Z:0
			MemberSpeed = 13
		End
		FloodMember
			MemberTemplateName = FrigidHandsFloodMemberLevel_3
			ControlPointOffsetOne =		X:-55 Y:0 Z:0
			ControlPointOffsetTwo =		X:-15 Y:-10 Z:0
			ControlPointOffsetThree =	X:25 Y:-20 Z:0
			ControlPointOffsetFour =	X:60 Y:-10 Z:0
			MemberSpeed = 13
		End
		FloodMember
			MemberTemplateName = FrigidHandsFloodMemberLevel_3
			ControlPointOffsetOne =		X:-55 Y:0 Z:0
			ControlPointOffsetTwo =		X:-15 Y:-30 Z:0
			ControlPointOffsetThree =	X:25 Y:-60 Z:0
			ControlPointOffsetFour =	X:60 Y:-30 Z:0
			MemberSpeed = 15
		End
		FloodMember
			MemberTemplateName = FrigidHandsFloodMemberLevel_3
			ControlPointOffsetOne =		X:-55 Y:0 Z:0
			ControlPointOffsetTwo =		X:-15 Y:-50 Z:0
			ControlPointOffsetThree =	X:25 Y:-100 Z:0
			ControlPointOffsetFour =	X:60 Y:-50 Z:0
			MemberSpeed = 20
		End
	End
End
Object DreadPlague1

	; *** ART Parameters ***

    ; ButtonImage for Heros is button image on Hero Select UI to select hero. HI = HeroIcon or HeroImage.
    ButtonImage = HIGuldurNecromancerGift
    SelectPortrait = HPGuldurNecromancerGift
	
	Draw = W3DScriptedModelDraw ModuleTag_DrawMist		
		DefaultModelConditionState
			Model				= None
			ParticleSysBone		= NONE DreadPlagueGuldurFortressMist1
			ParticleSysBone		= NONE DreadPlagueGuldurFortressBlightSwampCloud1
			ParticleSysBone		= NONE DreadPlagueGuldurFortressBlightSwampCloud021
			ParticleSysBone		= NONE DreadPlagueGuldurFortressBlightFlies1
			ParticleSysBone		= NONE DreadPlagueGreenMistWhirl1			
		End  		
	End	
	
	; ***DESIGN parameters ***
	Side			= Guldur
	EditorSorting	= UNIT
	ThreatLevel		= 0.0
	CommandPoints	= 0
	ShockwaveResistance = SHOCKWAVE_RESISTANCE_ALWAYS

	VisionRange		= 200.0
	DisplayName		= OBJECT:GuldurGreenMist
	
	CommandSet		= EmptyCommandSet


	; *** AUDIO Parameters ***

	EvaEnemyObjectSightedEvent = None  ; Don't bother player about this object showing up over their base -- happens too much to bother

	SoundAmbient	= TornadoLoopMS
	SoundMoveStart	= TornadoMoveStart

	VoiceAttack		= TornadoSelect
	VoiceMove		= TornadoSelect
	VoiceSelect		= TornadoSelect

	; *** ENGINEERING Parameters ***

	RadarPriority = UNIT
	KindOf = SELECTABLE NO_COLLIDE AIRCRAFT UNATTACKABLE MOVE_ONLY ORIENTS_TO_CAMERA CLICK_THROUGH HERO IGNORE_FOR_VICTORY IGNORE_FOR_EVA_SPEECH_POSITION NOT_AUTOACQUIRABLE IGNORES_SELECT_ALL PASS_EXPERIENCE_TO_PRODUCER
		
	Body = HighlanderBody ModuleTag_02
		MaxHealth         = 1.0
	End
	
	Behavior = AIUpdateInterface	ModuleTag_AIUpdateInterface
	End

	Behavior = PhysicsBehavior		ModuleTag_PhysicsBehavior
	End
	
	Behavior = ProductionUpdate ModuleTag_06
		GiveNoXP = Yes
	End

	Behavior = QueueProductionExitUpdate ModuleTag_07
		UnitCreatePoint			= X:0.0 Y:0.0 Z:0.0
		NaturalRallyPoint		= X:0.0 Y:0.0 Z:0.0
	End
  
	Behavior = SpawnBehavior ModuleTag_SpawnPatrols
		SpawnNumber			= 1
		InitialBurst		= 1
		SpawnTemplateName	= DreadPlagueDamager1
		SpawnReplaceDelay	= 45000
		CanReclaimOrphans	= No
	End

	LocomotorSet
		Locomotor = TornadoLocomotor
		Condition = SET_NORMAL 
		Speed     = 25
	End
	
	Behavior = LifetimeUpdate ModuleTag_LifetimeUpdate
		MinLifetime		= 30000
		MaxLifetime		= 30000
	End	

	// TORNADOES ARE SCARY	
	Behavior = AttributeModifierAuraUpdate ModuleTag_FearMe
		StartsActive	= Yes ;If no, requires upgrade to turn on.
		BonusName		= EyeOfSauronFear
		RefreshDelay	= 1000
		Range			= 350.0 ;;,;; ;;; 150.0
		ObjectFilter	= ANY +INFANTRY +CAVALRY
		TargetEnemy		= Yes
		MaxActiveRank	= 1		;Only affects level 1 rank units
	End	

	Behavior = SlowDeathBehavior ModuleTag_05
		DeathTypes = ALL
	End

	Geometry = CYLINDER
	GeometryMajorRadius = 1.0
	GeometryMinorRadius = 1.0
	GeometryHeight		= 1.0
	GeometryIsSmall		= Yes


End
Object DreadPlagueDamager1
	
  EvaEnemyObjectSightedEvent = None ; Not a real unit

	ArmorSet
		Conditions	  = None
		Armor		   = PingArmor
		DamageFX		= NormalDamageFX
	End

	Behavior = FireWeaponUpdate ModuleTag_WINDY
		FireWeaponNugget
			WeaponName = DreadPlagueWeapon1
			FireDelay = 0
			OneShot = No
		End
	End	

 ; ***DESIGN parameters ***

  EditorSorting   = SYSTEM
  KindOf = NO_COLLIDE IGNORE_FOR_VICTORY IGNORE_FOR_EVA_SPEECH_POSITION SUMMONED

	ThreatLevel		= 0.0
	VisionRange		= 0
	ShroudClearingRange	= 0

 ; *** ENGINEERING Parameters ***

	Body = ActiveBody ModuleTag_Body;Can take damage, but won't die.  Can only die from ::kill() or other unresistable damage
		MaxHealth	  = 1.0
	End

	Behavior = DestroyDie ModuleTag_Die
	End

	Behavior = LifetimeUpdate ModuleTag_HatchTrigger
		MinLifetime = 30000.0
		MaxLifetime = 30000.0
		DeathType		= FADED
	End

	Behavior = AttachUpdate ModuleTag_Attach
		ObjectFilter = NONE +DreadPlague1
		ScanRange = 50
		AlwaysTeleport = Yes
		AnchorToTopOfGeometry = Yes
	End

	Behavior = AIUpdateInterface	ModuleTag_AIUpdateInterface
		AutoAcquireEnemiesWhenIdle = No
	End

	LocomotorSet
		Locomotor = InvisiblePingLocomotor
		Condition = SET_NORMAL
		Speed	 = 1000
	End
	Behavior = SlavedUpdate ModuleTag_Slave
		UseSlaverAsControlForEvaObjectSightedEvents = Yes
		DieOnMastersDeath	= Yes
	End

	Behavior = SlowDeathBehavior ModuleTag_SlowDeath
		DeathTypes			= NONE +FADED
		FadeDelay			= 0
		FadeTime			= 0
		DestructionDelay	= 100
		ShadowWhenDead = No
	End

End

Object DreadPlague2

	; *** ART Parameters ***

    ; ButtonImage for Heros is button image on Hero Select UI to select hero. HI = HeroIcon or HeroImage.
    ButtonImage = HIGuldurNecromancerGift
    SelectPortrait = HPGuldurNecromancerGift
	
	Draw = W3DScriptedModelDraw ModuleTag_DrawMist		
		DefaultModelConditionState
			Model				= None
			ParticleSysBone		= NONE DreadPlagueGuldurFortressMist2
			ParticleSysBone		= NONE DreadPlagueGuldurFortressBlightSwampCloud2
			ParticleSysBone		= NONE DreadPlagueGuldurFortressBlightSwampCloud022
			ParticleSysBone		= NONE DreadPlagueGuldurFortressBlightFlies2
			ParticleSysBone		= NONE DreadPlagueGreenMistWhirl2			
		End  		
	End	
	
	; ***DESIGN parameters ***
	Side			= Guldur
	EditorSorting	= UNIT
	ThreatLevel		= 0.0
	CommandPoints	= 0
	ShockwaveResistance = SHOCKWAVE_RESISTANCE_ALWAYS

	VisionRange		= 200.0
	DisplayName		= OBJECT:GuldurGreenMist
	
	CommandSet		= EmptyCommandSet


	; *** AUDIO Parameters ***

	EvaEnemyObjectSightedEvent = None  ; Don't bother player about this object showing up over their base -- happens too much to bother

	SoundAmbient	= TornadoLoopMS
	SoundMoveStart	= TornadoMoveStart

	VoiceAttack		= TornadoSelect
	VoiceMove		= TornadoSelect
	VoiceSelect		= TornadoSelect

	; *** ENGINEERING Parameters ***

	RadarPriority = UNIT
	KindOf = SELECTABLE NO_COLLIDE AIRCRAFT UNATTACKABLE MOVE_ONLY ORIENTS_TO_CAMERA CLICK_THROUGH HERO IGNORE_FOR_VICTORY IGNORE_FOR_EVA_SPEECH_POSITION NOT_AUTOACQUIRABLE IGNORES_SELECT_ALL PASS_EXPERIENCE_TO_PRODUCER
		
	Body = HighlanderBody ModuleTag_02
		MaxHealth         = 1.0
	End
	
	Behavior = AIUpdateInterface	ModuleTag_AIUpdateInterface
	End

	Behavior = PhysicsBehavior		ModuleTag_PhysicsBehavior
	End
	
	Behavior = ProductionUpdate ModuleTag_06
		GiveNoXP = Yes
	End

	Behavior = QueueProductionExitUpdate ModuleTag_07
		UnitCreatePoint			= X:0.0 Y:0.0 Z:0.0
		NaturalRallyPoint		= X:0.0 Y:0.0 Z:0.0
	End
  
	Behavior = SpawnBehavior ModuleTag_SpawnPatrols
		SpawnNumber			= 1
		InitialBurst		= 1
		SpawnTemplateName	= DreadPlagueDamager2
		SpawnReplaceDelay	= 45000
		CanReclaimOrphans	= No
	End

	LocomotorSet
		Locomotor = TornadoLocomotor
		Condition = SET_NORMAL 
		Speed     = 25
	End
	
	Behavior = LifetimeUpdate ModuleTag_LifetimeUpdate
		MinLifetime		= 30000
		MaxLifetime		= 30000
	End	

	// TORNADOES ARE SCARY	
	Behavior = AttributeModifierAuraUpdate ModuleTag_FearMe
		StartsActive	= Yes ;If no, requires upgrade to turn on.
		BonusName		= EyeOfSauronFear
		RefreshDelay	= 1000
		Range			= 350.0 ;;,;; ;;; 150.0
		ObjectFilter	= ANY +INFANTRY +CAVALRY
		TargetEnemy		= Yes
		MaxActiveRank	= 1		;Only affects level 1 rank units
	End	

	Behavior = SlowDeathBehavior ModuleTag_05
		DeathTypes = ALL
	End

	Geometry = CYLINDER
	GeometryMajorRadius = 1.0
	GeometryMinorRadius = 1.0
	GeometryHeight		= 1.0
	GeometryIsSmall		= Yes


End
Object DreadPlagueDamager2
	
  EvaEnemyObjectSightedEvent = None ; Not a real unit

	ArmorSet
		Conditions	  = None
		Armor		   = PingArmor
		DamageFX		= NormalDamageFX
	End

	Behavior = FireWeaponUpdate ModuleTag_WINDY
		FireWeaponNugget
			WeaponName = DreadPlagueWeapon2
			FireDelay = 0
			OneShot = No
		End
	End	

 ; ***DESIGN parameters ***

  EditorSorting   = SYSTEM
  KindOf = NO_COLLIDE IGNORE_FOR_VICTORY IGNORE_FOR_EVA_SPEECH_POSITION SUMMONED

	ThreatLevel		= 0.0
	VisionRange		= 0
	ShroudClearingRange	= 0

 ; *** ENGINEERING Parameters ***

	Body = ActiveBody ModuleTag_Body;Can take damage, but won't die.  Can only die from ::kill() or other unresistable damage
		MaxHealth	  = 1.0
	End

	Behavior = DestroyDie ModuleTag_Die
	End

	Behavior = LifetimeUpdate ModuleTag_HatchTrigger
		MinLifetime = 30000.0
		MaxLifetime = 30000.0
		DeathType		= FADED
	End

	Behavior = AttachUpdate ModuleTag_Attach
		ObjectFilter = NONE +DreadPlague2
		ScanRange = 50
		AlwaysTeleport = Yes
		AnchorToTopOfGeometry = Yes
	End

	Behavior = AIUpdateInterface	ModuleTag_AIUpdateInterface
		AutoAcquireEnemiesWhenIdle = No
	End

	LocomotorSet
		Locomotor = InvisiblePingLocomotor
		Condition = SET_NORMAL
		Speed	 = 1000
	End
	Behavior = SlavedUpdate ModuleTag_Slave
		UseSlaverAsControlForEvaObjectSightedEvents = Yes
		DieOnMastersDeath	= Yes
	End

	Behavior = SlowDeathBehavior ModuleTag_SlowDeath
		DeathTypes			= NONE +FADED
		FadeDelay			= 0
		FadeTime			= 0
		DestructionDelay	= 100
		ShadowWhenDead = No
	End

End

Object DreadPlague3

	; *** ART Parameters ***

    ; ButtonImage for Heros is button image on Hero Select UI to select hero. HI = HeroIcon or HeroImage.
    ButtonImage = HIGuldurNecromancerGift
    SelectPortrait = HPGuldurNecromancerGift
	
	Draw = W3DScriptedModelDraw ModuleTag_DrawMist		
		DefaultModelConditionState
			Model				= None
			ParticleSysBone		= NONE DreadPlagueGuldurFortressMist3
			ParticleSysBone		= NONE DreadPlagueGuldurFortressBlightSwampCloud3
			ParticleSysBone		= NONE DreadPlagueGuldurFortressBlightSwampCloud023
			ParticleSysBone		= NONE DreadPlagueGuldurFortressBlightFlies3
			ParticleSysBone		= NONE DreadPlagueGreenMistWhirl3			
		End  		
	End	
	
	; ***DESIGN parameters ***
	Side			= Guldur
	EditorSorting	= UNIT
	ThreatLevel		= 0.0
	CommandPoints	= 0
	ShockwaveResistance = SHOCKWAVE_RESISTANCE_ALWAYS

	VisionRange		= 200.0
	DisplayName		= OBJECT:GuldurGreenMist
	
	CommandSet		= EmptyCommandSet


	; *** AUDIO Parameters ***

	EvaEnemyObjectSightedEvent = None  ; Don't bother player about this object showing up over their base -- happens too much to bother

	SoundAmbient	= TornadoLoopMS
	SoundMoveStart	= TornadoMoveStart

	VoiceAttack		= TornadoSelect
	VoiceMove		= TornadoSelect
	VoiceSelect		= TornadoSelect

	; *** ENGINEERING Parameters ***

	RadarPriority = UNIT
	KindOf = SELECTABLE NO_COLLIDE AIRCRAFT UNATTACKABLE MOVE_ONLY ORIENTS_TO_CAMERA CLICK_THROUGH HERO IGNORE_FOR_VICTORY IGNORE_FOR_EVA_SPEECH_POSITION NOT_AUTOACQUIRABLE IGNORES_SELECT_ALL PASS_EXPERIENCE_TO_PRODUCER
		
	Body = HighlanderBody ModuleTag_02
		MaxHealth         = 1.0
	End
	
	Behavior = AIUpdateInterface	ModuleTag_AIUpdateInterface
	End

	Behavior = PhysicsBehavior		ModuleTag_PhysicsBehavior
	End
	
	Behavior = ProductionUpdate ModuleTag_06
		GiveNoXP = Yes
	End

	Behavior = QueueProductionExitUpdate ModuleTag_07
		UnitCreatePoint			= X:0.0 Y:0.0 Z:0.0
		NaturalRallyPoint		= X:0.0 Y:0.0 Z:0.0
	End
  
	Behavior = SpawnBehavior ModuleTag_SpawnPatrols
		SpawnNumber			= 1
		InitialBurst		= 1
		SpawnTemplateName	= DreadPlagueDamager3
		SpawnReplaceDelay	= 45000
		CanReclaimOrphans	= No
	End

	LocomotorSet
		Locomotor = TornadoLocomotor
		Condition = SET_NORMAL 
		Speed     = 25
	End
	
	Behavior = LifetimeUpdate ModuleTag_LifetimeUpdate
		MinLifetime		= 30000
		MaxLifetime		= 30000
	End	

	// TORNADOES ARE SCARY	
	Behavior = AttributeModifierAuraUpdate ModuleTag_FearMe
		StartsActive	= Yes ;If no, requires upgrade to turn on.
		BonusName		= EyeOfSauronFear
		RefreshDelay	= 1000
		Range			= 350.0 ;;,;; ;;; 150.0
		ObjectFilter	= ANY +INFANTRY +CAVALRY
		TargetEnemy		= Yes
		MaxActiveRank	= 1		;Only affects level 1 rank units
	End	

	Behavior = SlowDeathBehavior ModuleTag_05
		DeathTypes = ALL
	End

	Geometry = CYLINDER
	GeometryMajorRadius = 1.0
	GeometryMinorRadius = 1.0
	GeometryHeight		= 1.0
	GeometryIsSmall		= Yes


End
Object DreadPlagueDamager3
	
  EvaEnemyObjectSightedEvent = None ; Not a real unit

	ArmorSet
		Conditions	  = None
		Armor		   = PingArmor
		DamageFX		= NormalDamageFX
	End

	Behavior = FireWeaponUpdate ModuleTag_WINDY
		FireWeaponNugget
			WeaponName = DreadPlagueWeapon3
			FireDelay = 0
			OneShot = No
		End
	End	

 ; ***DESIGN parameters ***

  EditorSorting   = SYSTEM
  KindOf = NO_COLLIDE IGNORE_FOR_VICTORY IGNORE_FOR_EVA_SPEECH_POSITION SUMMONED

	ThreatLevel		= 0.0
	VisionRange		= 0
	ShroudClearingRange	= 0

 ; *** ENGINEERING Parameters ***

	Body = ActiveBody ModuleTag_Body;Can take damage, but won't die.  Can only die from ::kill() or other unresistable damage
		MaxHealth	  = 1.0
	End

	Behavior = DestroyDie ModuleTag_Die
	End

	Behavior = LifetimeUpdate ModuleTag_HatchTrigger
		MinLifetime = 30000.0
		MaxLifetime = 30000.0
		DeathType		= FADED
	End

	Behavior = AttachUpdate ModuleTag_Attach
		ObjectFilter = NONE +DreadPlague3
		ScanRange = 50
		AlwaysTeleport = Yes
		AnchorToTopOfGeometry = Yes
	End

	Behavior = AIUpdateInterface	ModuleTag_AIUpdateInterface
		AutoAcquireEnemiesWhenIdle = No
	End

	LocomotorSet
		Locomotor = InvisiblePingLocomotor
		Condition = SET_NORMAL
		Speed	 = 1000
	End
	Behavior = SlavedUpdate ModuleTag_Slave
		UseSlaverAsControlForEvaObjectSightedEvents = Yes
		DieOnMastersDeath	= Yes
	End

	Behavior = SlowDeathBehavior ModuleTag_SlowDeath
		DeathTypes			= NONE +FADED
		FadeDelay			= 0
		FadeTime			= 0
		DestructionDelay	= 100
		ShadowWhenDead = No
	End

End