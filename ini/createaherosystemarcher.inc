//-----------------------------------------------------
// Archer Class
//-----------------------------------------------------
CreateAHeroClass	
	NameTag		   = CreateAHero:ClassName_Archer
	DescriptionTag = CreateAHero:ClassDesc_Archer
	PowersDescTag  = CreateAHero:ClassPowersDesc_Archer
	UpgradeName	   = Upgrade_CreateAHero_ClassArcher
	IconImage	=	Archetype_Elf
	SubClass	// Elven Archer  ModuleTag_Archer_SubClass_0
		NameTag				  =	CreateAHero:SubClassName_ElvenArcher
		DescriptionTag		 		 =	CreateAHero:SubClassDesc_MaleElvenArcher
		IconImage			  = CPMaleElfArcher
		ButtonImage          			 = HICAHMaleElfArcher
		// In UI it should be  		=  HICAHMaleElfArcher_wotr
		SpendableAttributePoints        = 30
		//DefaultFaction              = 
		UsableFactions              = Men Elves Dwarves ;Arnor Rohan Mirkwood
		UpgradeName			  =	Upgrade_CreateAHero_SubClass_0
//-------------------------------
// Awards common to all heros.
		#include "CreateAHeroSystemCommonStatsAndAwards.inc"
		// Class specific awards
		Awards = GuardianOfMiddleEarth
//	-------------------------------
//	Weapons
		BlingUpgrades		  =	Upgrade_CHW08 Upgrade_CHW02  Upgrade_CHW37 Upgrade_CHW38 Upgrade_CHW39
//	-------------------------------
//	Head Gear
		BlingUpgrades =	Upgrade_NoHelmet Upgrade_CHH01 Upgrade_CHH02 Upgrade_CHH03
//	-------------------------------
        ; Shoulder Plates
		BlingUpgrades = Upgrade_CHSP01 Upgrade_CHSP02 Upgrade_CHSP03 Upgrade_CHSP04 Upgrade_CHSP05 
        ;-------------------------------
        ; Gauntlets
		BlingUpgrades = Upgrade_CHG01 Upgrade_CHG02 Upgrade_CHG03 Upgrade_CHG04 Upgrade_CHG05 
        ;-------------------------------
        ; Shield
		BlingUpgrades = Upgrade_CHS01 
        ;-------------------------------
        ; Boots
		BlingUpgrades = Upgrade_CHB01 Upgrade_CHB02 Upgrade_CHB03 Upgrade_CHB04 
        ;-------------------------------
        ; Body
		BlingUpgrades = Upgrade_CHBOD01 Upgrade_CHBOD02 Upgrade_CHBOD03 Upgrade_CHBOD04 
		DefaultPrimaryColor	  =	R:160 G:160	B:160
		DefaultSecondaryColor =	R:160 G:160	B:160
		DefaultTertiaryColor  =	R:160 G:160	B:160
		Attribute
			GroupName			= CreateAHero_ArmorAttribute
			MinValueUpgrade		= Upgrade_ArmorAttribute03
			MaxValueUpgrade		= Upgrade_ArmorAttribute16
			DefaultValueUpgrade	= Upgrade_ArmorAttribute10
		End
		Attribute
			GroupName			= CreateAHero_DamageMultAttribute
			MinValueUpgrade		= Upgrade_DamageMultAttribute03
			MaxValueUpgrade		= Upgrade_DamageMultAttribute13
			DefaultValueUpgrade	= Upgrade_DamageMultAttribute10
		End
		Attribute
			GroupName			= CreateAHero_HealthMultAttribute
			MinValueUpgrade		= Upgrade_HealthMultAttribute05
			MaxValueUpgrade		= Upgrade_HealthMultAttribute20
			DefaultValueUpgrade	= Upgrade_HealthMultAttribute12
		End
		Attribute
			GroupName			= CreateAHero_AutoHealAttribute
			MinValueUpgrade		= Upgrade_AutoHealAttribute03
			MaxValueUpgrade		= Upgrade_AutoHealAttribute14
			DefaultValueUpgrade	= Upgrade_AutoHealAttribute06
		End
		Attribute
			GroupName			= CreateAHero_VisionAttribute
			MinValueUpgrade		= Upgrade_VisionAttribute06
			MaxValueUpgrade		= Upgrade_VisionAttribute19
			DefaultValueUpgrade	= Upgrade_VisionAttribute12
		End
	// Camera used to view object with in create a hero
		ViewInfo
				FarPitch  = 0.0
		        FarZoom   = 0.2
		        FarFloor  = 20
		        FarDist   = 70.000
		        FarShift  = 20
		        NearPitch = 0.1
		        NearZoom  = 0.205
		        NearFloor = 30
		        NearDist  = 5
		        NearShift = 8
		        CloseUpPitch = -0.0350
		        CloseUpZoom  = 0.200
		        CloseUpFloor = 55.000
		        CloseUpDist  = 40.000
		        CloseUpShift = 0.00
		        PortraitPitch = -0.020
		        PortraitZoom  = 0.200
		        PortraitFloor = 50.000
		        PortraitDist  = 54.00
		        PortraitShift = -1.00
		        //NormalCam = 0.50
			CameraAngle	= 0.0
			MapLocation	= 10
		End
	End
	SubClass	// Female Elven Archer  ModuleTag_Archer_SubClass_1
		NameTag		   = CreateAHero:SubClassName_FemaleElvenArcher
		DescriptionTag = CreateAHero:SubClassDesc_FemaleElvenArcher
		IconImage	   = CPFemaleElfArcher
		ButtonImage	   = HICAHFemaleElvenArcher
		// In UI it should be  	=  HICAHFemaleElvenArcher_wotr
		//DefaultFaction              = Elves 
		UsableFactions              = Men Elves Dwarves ;Arnor Rohan Mirkwood
		SpendableAttributePoints        = 30
		UpgradeName	   = Upgrade_CreateAHero_SubClass_1
		//-------------------------------
		// Awards common to all heros.
		#include "CreateAHeroSystemCommonStatsAndAwards.inc"
		// Class specific awards
		Awards = GuardianOfMiddleEarth
		//-------------------------------
		// Weapons
		BlingUpgrades =	Upgrade_CHW08 Upgrade_CHW02 Upgrade_CHW37 Upgrade_CHW38 Upgrade_CHW39
		//-------------------------------
		// Head	Gear
		BlingUpgrades = Upgrade_NoHelmet Upgrade_CHH01 Upgrade_CHH02 Upgrade_CHH03
                ;-------------------------------
                ; Shoulder Plates
		BlingUpgrades = Upgrade_CHSP01 Upgrade_CHSP02 Upgrade_CHSP03 Upgrade_CHSP04 Upgrade_CHSP05 Upgrade_CHSP06 Upgrade_CHSP07 
                ;-------------------------------
                ; Gauntlets
		BlingUpgrades = Upgrade_CHG01 Upgrade_CHG02 Upgrade_CHG03 Upgrade_CHG04 Upgrade_CHG05 Upgrade_CHG06 Upgrade_CHG07 
                ;-------------------------------
                ; Shield
		BlingUpgrades = Upgrade_CHS01 
                ;-------------------------------
                ; Boots
		BlingUpgrades = Upgrade_CHB01 Upgrade_CHB02 Upgrade_CHB03 Upgrade_CHB04 Upgrade_CHB05 Upgrade_CHB06 Upgrade_CHB07 
                ;-------------------------------
                ; Body
		BlingUpgrades = Upgrade_CHBOD01 @Upgrade_CHBOD02 Upgrade_CHBOD03 
		DefaultPrimaryColor	  =	R:160 G:160	B:160
		DefaultSecondaryColor =	R:160 G:160	B:160
		DefaultTertiaryColor  =	R:160 G:160	B:160
		Attribute
			GroupName			= CreateAHero_ArmorAttribute
			MinValueUpgrade		= Upgrade_ArmorAttribute03
			MaxValueUpgrade		= Upgrade_ArmorAttribute16
			DefaultValueUpgrade	= Upgrade_ArmorAttribute10
		End
		Attribute
			GroupName			= CreateAHero_DamageMultAttribute
			MinValueUpgrade		= Upgrade_DamageMultAttribute03
			MaxValueUpgrade		= Upgrade_DamageMultAttribute12
			DefaultValueUpgrade	= Upgrade_DamageMultAttribute08
		End
		Attribute
			GroupName			= CreateAHero_HealthMultAttribute
			MinValueUpgrade		= Upgrade_HealthMultAttribute05
			MaxValueUpgrade		= Upgrade_HealthMultAttribute20
			DefaultValueUpgrade	= Upgrade_HealthMultAttribute12
		End
		Attribute
			GroupName			= CreateAHero_AutoHealAttribute
			MinValueUpgrade		= Upgrade_AutoHealAttribute03
			MaxValueUpgrade		= Upgrade_AutoHealAttribute14
			DefaultValueUpgrade	= Upgrade_AutoHealAttribute06
		End
		Attribute
			GroupName			= CreateAHero_VisionAttribute
			MinValueUpgrade		= Upgrade_VisionAttribute06
			MaxValueUpgrade		= Upgrade_VisionAttribute20
			DefaultValueUpgrade	= Upgrade_VisionAttribute14
		End
		// Camera used to view object with in create a hero
		ViewInfo
				FarPitch  = 0.0
		        FarZoom   = 0.2
		        FarFloor  = 20
		        FarDist   = 70.000
		        FarShift  = 20
		        NearPitch = 0.1
		        NearZoom  = 0.205
		        NearFloor = 30
		        NearDist  = 5
		        NearShift = 8
		        CloseUpPitch = -0.0350
		        CloseUpZoom  = 0.200
		        CloseUpFloor = 50.000
		        CloseUpDist  = 40.000
		        CloseUpShift = 0.00
		        PortraitPitch = -0.020
		        PortraitZoom  = 0.200
		        PortraitFloor = 50.000
		        PortraitDist  = 54.00
		        PortraitShift = -1.00
		        //NormalCam = 0.50
			CameraAngle	= 0.0
			MapLocation	= 3
		End
	End
	
		SubClass	// Dunedain  ModuleTag_Archer_SubClass_0
		NameTag				  =	CreateAHero:SubClassName_Dunedain
		DescriptionTag		 		 =	CreateAHero:SubClassDesc_Dunedain
		IconImage			  = uprangercah ;CPMaleElfArcher
		ButtonImage          			 = HICAHRanger
		// In UI it should be  		=  HICAHMaleElfArcher_wotr
		SpendableAttributePoints        = 30
		//DefaultFaction              = 
		UsableFactions              = Men Elves Dwarves ;Arnor Rohan Mirkwood
		UpgradeName			  =	Upgrade_CreateAHero_SubClass_2
//-------------------------------
// Awards common to all heros.
		#include "CreateAHeroSystemCommonStatsAndAwards.inc"
		// Class specific awards
		Awards = GuardianOfMiddleEarth
//	-------------------------------
//	Weapons
		BlingUpgrades		  = @Upgrade_CHW39 Upgrade_CHW25 Upgrade_CHW38 Upgrade_CHW21 Upgrade_CHW22 Upgrade_CHW23 Upgrade_CHW24 Upgrade_CHW35           
//	-------------------------------
//	Head Gear
		BlingUpgrades =	Upgrade_NoHelmet Upgrade_CHH01 @Upgrade_CHH02 Upgrade_CHH03 Upgrade_CHH04 Upgrade_CHH05 Upgrade_CHH06 Upgrade_CHH07 Upgrade_CHH08 Upgrade_CHH09
//	-------------------------------
//	Shoulder Plates
		BlingUpgrades =	Upgrade_NoShoulderPlates Upgrade_CHSP01 Upgrade_CHSP02 Upgrade_CHSP03 
//	-------------------------------
//	Gauntlets
		BlingUpgrades =	Upgrade_NoGauntlets	Upgrade_CHG01 Upgrade_CHG02 Upgrade_CHG03 Upgrade_CHG04
//	-------------------------------
//	Shield
		BlingUpgrades =	Upgrade_NoShield Upgrade_CHS01 Upgrade_CHS02 @Upgrade_CHS03 Upgrade_CHS04 Upgrade_CHS05 
//	-------------------------------
//	Boots
		BlingUpgrades =	Upgrade_NoBoots Upgrade_CHB01 Upgrade_CHB02 Upgrade_CHB03 Upgrade_CHB04 Upgrade_CHB05 Upgrade_CHB06 Upgrade_CHB07 @Upgrade_CHB08
//	-------------------------------
//	Body
		BlingUpgrades =	@Upgrade_CHBOD01 Upgrade_CHBOD02 Upgrade_CHBOD03 Upgrade_CHBOD04 Upgrade_CHBOD05 Upgrade_CHBOD06 
		DefaultPrimaryColor	  =	R:160 G:160	B:160
		DefaultSecondaryColor =	R:160 G:160	B:160
		DefaultTertiaryColor  =	R:160 G:160	B:160
		Attribute
			GroupName			= CreateAHero_ArmorAttribute
			MinValueUpgrade		= Upgrade_ArmorAttribute03
			MaxValueUpgrade		= Upgrade_ArmorAttribute16
			DefaultValueUpgrade	= Upgrade_ArmorAttribute10
		End
		Attribute
			GroupName			= CreateAHero_DamageMultAttribute
			MinValueUpgrade		= Upgrade_DamageMultAttribute03
			MaxValueUpgrade		= Upgrade_DamageMultAttribute13
			DefaultValueUpgrade	= Upgrade_DamageMultAttribute10
		End
		Attribute
			GroupName			= CreateAHero_HealthMultAttribute
			MinValueUpgrade		= Upgrade_HealthMultAttribute05
			MaxValueUpgrade		= Upgrade_HealthMultAttribute20
			DefaultValueUpgrade	= Upgrade_HealthMultAttribute12
		End
		Attribute
			GroupName			= CreateAHero_AutoHealAttribute
			MinValueUpgrade		= Upgrade_AutoHealAttribute03
			MaxValueUpgrade		= Upgrade_AutoHealAttribute14
			DefaultValueUpgrade	= Upgrade_AutoHealAttribute06
		End
		Attribute
			GroupName			= CreateAHero_VisionAttribute
			MinValueUpgrade		= Upgrade_VisionAttribute06
			MaxValueUpgrade		= Upgrade_VisionAttribute19
			DefaultValueUpgrade	= Upgrade_VisionAttribute12
		End
	// Camera used to view object with in create a hero
		ViewInfo
				FarPitch  = 0.05
		        FarZoom   = 0.21
		        FarFloor  = 10
		        FarDist   = 70
		        FarShift  = 20
		        NearPitch = 0.1
		        NearZoom  = 0.205
		        NearFloor = 5
		        NearDist  = 5
		        NearShift = 10
		        CloseUpPitch = -0.0350
		        CloseUpZoom  = 0.1900
		        CloseUpFloor = 25.000
		        CloseUpDist  = 40.000
		        CloseUpShift = 0.00
		        PortraitPitch = -0.020
		        PortraitZoom  = 0.200
		        PortraitFloor = 50.000
		        PortraitDist  = 54.00
		        PortraitShift = -1.00
		        //NormalCam = 0.50
			CameraAngle	= 0.0
			MapLocation	= 4
		End
	End
End
