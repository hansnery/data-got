//---------------------------------------------------------------------------------------------
// Dwarf Class
//---------------------------------------------------------------------------------------------
CreateAHeroClass	
	NameTag			= CreateAHero:ClassName_Dwarf
	DescriptionTag	= CreateAHero:ClassDesc_Dwarf
	PowersDescTag		= CreateAHero:ClassPowersDesc_Dwarf
	UpgradeName			= Upgrade_CreateAHero_ClassDwarf
	IconImage	=	Archetype_Dwarf
	SubClass	// Taskmaster
		NameTag			  =	CreateAHero:SubClassName_Taskmaster
		DescriptionTag	  =	CreateAHero:SubClassDesc_Taskmaster
		IconImage         = CPDwarfTaskmaster
		ButtonImage       = HICAHDwarfTaskmaster
		SpendableAttributePoints        = 30 
		UsableFactions              = Men Elves Dwarves ;Arnor Rohan Mirkwood
		// In UI it should be  		=  HICAHDwarfTaskmaster_wotr
		UpgradeName		  =	Upgrade_CreateAHero_SubClass_0
		//-------------------------------
		// Awards common to all heros.
		#include "CreateAHeroSystemCommonStatsAndAwards.inc"
		// Class specific awards
		Awards = GuardianOfMiddleEarth
		//-------------------------------
		// Weapons
		BlingUpgrades		  =	Upgrade_CHW01 Upgrade_CHW31 Upgrade_CHW32 Upgrade_CHW36 Upgrade_CHW02 Upgrade_CHW03 Upgrade_CHW04 Upgrade_CHW05 @Upgrade_CHW06
		//-------------------------------
		// Head	Gear
		BlingUpgrades = Upgrade_NoHelmet Upgrade_CHH01 @Upgrade_CHH02 Upgrade_CHH03 Upgrade_CHH04 Upgrade_CHH05 Upgrade_CHH06 Upgrade_CHH07 Upgrade_CHH08 Upgrade_CHH09
	        ;-------------------------------
                ; Shoulder Plates
		BlingUpgrades = Upgrade_CHSP01 Upgrade_CHSP02 Upgrade_CHSP03 @Upgrade_CHSP04 Upgrade_CHSP05 Upgrade_CHSP06 Upgrade_CHSP07 Upgrade_CHSP08 
                ;-------------------------------
                ; Gauntlets
		BlingUpgrades = Upgrade_CHG01 Upgrade_CHG02 Upgrade_CHG03 Upgrade_CHG04 
                ;-------------------------------
                ; Shield
		BlingUpgrades = Upgrade_CHS01 Upgrade_CHS02 Upgrade_CHS03 @Upgrade_CHS04 Upgrade_CHS05 Upgrade_CHS06 
                ;-------------------------------
                ; Boots
		BlingUpgrades = Upgrade_CHB01 Upgrade_CHB02 Upgrade_CHB03 Upgrade_CHB04 Upgrade_CHB05 Upgrade_CHB06 Upgrade_CHB07 @Upgrade_CHB08 Upgrade_CHB09 
                ;-------------------------------
                ; Body
		BlingUpgrades = Upgrade_CHBOD01 @Upgrade_CHBOD02 Upgrade_CHBOD03 Upgrade_CHBOD04 Upgrade_CHBOD05 Upgrade_CHBOD06 Upgrade_CHBOD07 Upgrade_CHBOD08 
		DefaultPrimaryColor	  =	R:160 G:160 B:160
		DefaultSecondaryColor =	R:160 G:160 B:160
		DefaultTertiaryColor  =	R:160 G:160 B:160
		Attribute
			GroupName			= CreateAHero_ArmorAttribute
			MinValueUpgrade		= Upgrade_ArmorAttribute08 //Upgrade_ArmorAttribute04
			MaxValueUpgrade		= Upgrade_ArmorAttribute19
			DefaultValueUpgrade	= Upgrade_ArmorAttribute18
		End
		Attribute
			GroupName			= CreateAHero_DamageMultAttribute
			MinValueUpgrade		= Upgrade_DamageMultAttribute05
			MaxValueUpgrade		= Upgrade_DamageMultAttribute19
			DefaultValueUpgrade	= Upgrade_DamageMultAttribute16
		End
		Attribute
			GroupName			= CreateAHero_HealthMultAttribute
			MinValueUpgrade		= Upgrade_HealthMultAttribute06
			MaxValueUpgrade		= Upgrade_HealthMultAttribute19
			DefaultValueUpgrade	= Upgrade_HealthMultAttribute14
		End
		Attribute
			GroupName			= CreateAHero_AutoHealAttribute
			MinValueUpgrade		= Upgrade_AutoHealAttribute06
			MaxValueUpgrade		= Upgrade_AutoHealAttribute20
			DefaultValueUpgrade	= Upgrade_AutoHealAttribute07
		End
		Attribute
			GroupName			= CreateAHero_VisionAttribute
			MinValueUpgrade		= Upgrade_VisionAttribute02
			MaxValueUpgrade		= Upgrade_VisionAttribute12
			DefaultValueUpgrade	= Upgrade_VisionAttribute02
		End
		// Camera used to view object with in create a hero
		ViewInfo
				FarPitch  = 0.0
		        FarZoom   = 0.20
		        FarFloor  = 10
		        FarDist   = 70
		        FarShift  = 8
		        NearPitch = 0.15
		        NearZoom  = 0.204
		        NearFloor = 5
		        NearDist  = 5
		        NearShift = 5
		        CloseUpPitch = 0.0350
		        CloseUpZoom  = 0.200
		        CloseUpFloor = 30.000
		        CloseUpDist  = 40.000
		        CloseUpShift = 0.00
		        PortraitPitch = 0.020
		        PortraitZoom  = 0.200
		        PortraitFloor = 40.000
		        PortraitDist  = 54.00
		        PortraitShift = -1.00
		        //NormalCam = 0.50
			CameraAngle	= 0.0
			MapLocation	= 6
		End
	End
	SubClass	// Sage
		NameTag			  =	CreateAHero:SubClassName_Sage
		DescriptionTag	  =	CreateAHero:SubClassDesc_Sage
		IconImage         = CPDwarfSage
		ButtonImage       = HICAHDwarfSage
		// In UI it should be  		=  HICAHDwarfSage_wotr
		UsableFactions              = Men Elves Dwarves ;Arnor Rohan Mirkwood
		SpendableAttributePoints        = 30
		UpgradeName			  =	Upgrade_CreateAHero_SubClass_1
		//-------------------------------
		// Awards common to all heros.
		#include "CreateAHeroSystemCommonStatsAndAwards.inc"
		// Class specific awards
		Awards = GuardianOfMiddleEarth
		//-------------------------------
		// Weapons
		BlingUpgrades		  =	Upgrade_CHW01 Upgrade_CHW31 Upgrade_CHW32 Upgrade_CHW36 Upgrade_CHW02 @Upgrade_CHW03 Upgrade_CHW04 Upgrade_CHW05 Upgrade_CHW06
		//-------------------------------
		// Head	Gear
		BlingUpgrades = Upgrade_NoHelmet Upgrade_CHH01 Upgrade_CHH02 Upgrade_CHH03 Upgrade_CHH04 Upgrade_CHH05 Upgrade_CHH06 Upgrade_CHH07 @Upgrade_CHH08 Upgrade_CHH09
                ;-------------------------------
                ; Shoulder Plates
		BlingUpgrades = Upgrade_CHSP01 @Upgrade_CHSP02 Upgrade_CHSP03 Upgrade_CHSP04 Upgrade_CHSP05 Upgrade_CHSP06 Upgrade_CHSP07 Upgrade_CHSP08 
                ;-------------------------------
                ; Gauntlets
		BlingUpgrades = Upgrade_CHG01 Upgrade_CHG02 Upgrade_CHG03 Upgrade_CHG04 
                ;-------------------------------
                ; Shield
		BlingUpgrades = Upgrade_CHS01 Upgrade_CHS02 @Upgrade_CHS03 Upgrade_CHS04 Upgrade_CHS05 Upgrade_CHS06 Upgrade_CHS07 Upgrade_CHS08 Upgrade_CHS09 
                ;-------------------------------
                ; Boots
		BlingUpgrades = Upgrade_CHB01 Upgrade_CHB02 Upgrade_CHB03 Upgrade_CHB04 Upgrade_CHB05 Upgrade_CHB06 Upgrade_CHB07 @Upgrade_CHB08 Upgrade_CHB09 
                ;-------------------------------
                ; Body
		BlingUpgrades = Upgrade_CHBOD01 Upgrade_CHBOD02 Upgrade_CHBOD03 Upgrade_CHBOD04 Upgrade_CHBOD05 @Upgrade_CHBOD06 Upgrade_CHBOD07 Upgrade_CHBOD08 		
		
		
		// Weapons
		//BlingUpgrades		  =	Upgrade_CHW01 Upgrade_CHW31 Upgrade_CHW32 Upgrade_CHW36
		//-------------------------------
		// Head	Gear
		//BlingUpgrades = Upgrade_NoHelmet Upgrade_CHH01 Upgrade_CHH02 Upgrade_CHH03 Upgrade_CHH04 Upgrade_CHH05 Upgrade_CHH06
		//-------------------------------
		// Shoulder	Plates
		//BlingUpgrades = Upgrade_NoShoulderPlates Upgrade_DWARF_CHSP01 Upgrade_DWARF_CHSP02 Upgrade_DWARF_CHSP03 Upgrade_DWARF_CHSP04 Upgrade_DWARF_CHSP05 Upgrade_DWARF_CHSP06
		//-------------------------------
		// Gauntlets
		//BlingUpgrades = Upgrade_NoGauntlets Upgrade_DWARF_CHG01 Upgrade_DWARF_CHG02 Upgrade_DWARF_CHG03 Upgrade_DWARF_CHG04
		//-------------------------------
		// Shield
		//BlingUpgrades = Upgrade_NoShield Upgrade_CAPG_CHS01
		//-------------------------------
		// Boots
		//BlingUpgrades = Upgrade_NoBoots Upgrade_DWARF_CHB01 Upgrade_DWARF_CHB02 Upgrade_DWARF_CHB03 Upgrade_DWARF_CHB04
		//-------------------------------
		// Body
		//BlingUpgrades = Upgrade_DSAGE_CHBOD01 Upgrade_DSAGE_CHBOD02 Upgrade_DSAGE_CHBOD03 Upgrade_DSAGE_CHBOD04 Upgrade_DSAGE_CHBOD05
		DefaultPrimaryColor	  =	R:160 G:160 B:160
		DefaultSecondaryColor =	R:160 G:160 B:160
		DefaultTertiaryColor  =	R:160 G:160 B:160
		Attribute
			GroupName			= CreateAHero_ArmorAttribute
			MinValueUpgrade		= Upgrade_ArmorAttribute04
			MaxValueUpgrade		= Upgrade_ArmorAttribute19
			DefaultValueUpgrade	= Upgrade_ArmorAttribute12
		End
		Attribute
			GroupName			= CreateAHero_DamageMultAttribute
			MinValueUpgrade		= Upgrade_DamageMultAttribute09 //Upgrade_DamageMultAttribute05
			MaxValueUpgrade		= Upgrade_DamageMultAttribute20
			DefaultValueUpgrade	= Upgrade_DamageMultAttribute18
		End
		Attribute
			GroupName			= CreateAHero_HealthMultAttribute
			MinValueUpgrade		= Upgrade_HealthMultAttribute03
			MaxValueUpgrade		= Upgrade_HealthMultAttribute12
			DefaultValueUpgrade	= Upgrade_HealthMultAttribute08
		End
		Attribute
			GroupName			= CreateAHero_AutoHealAttribute
			MinValueUpgrade		= Upgrade_AutoHealAttribute06
			MaxValueUpgrade		= Upgrade_AutoHealAttribute20
			DefaultValueUpgrade	= Upgrade_AutoHealAttribute10
		End
		Attribute
			GroupName			= CreateAHero_VisionAttribute
			MinValueUpgrade		= Upgrade_VisionAttribute02
			MaxValueUpgrade		= Upgrade_VisionAttribute14
			DefaultValueUpgrade	= Upgrade_VisionAttribute06
		End
		// Camera used to view object with in create a hero
		ViewInfo
				FarPitch  = 0.0
		        FarZoom   = 0.205
		        FarFloor  = 10
		        FarDist   = 70
		        FarShift  = 8
		        NearPitch = 0.15
		        NearZoom  = 0.20
		        NearFloor = 5
		        NearDist  = 5
		        NearShift = 5
		        CloseUpPitch = 0.0350
		        CloseUpZoom  = 0.200
		        CloseUpFloor = 30.000
		        CloseUpDist  = 40.000
		        CloseUpShift = 0.00
		        PortraitPitch = 0.020
		        PortraitZoom  = 0.200
		        PortraitFloor = 40.000
		        PortraitDist  = 54.00
		        PortraitShift = -1.00
		        //NormalCam = 0.50
			CameraAngle	= 0.0
			MapLocation	= 6
		End
	End
End
