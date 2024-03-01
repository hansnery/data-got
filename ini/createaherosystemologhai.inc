//---------------------------------------------------------------------------------------------
// Servants Of Sauron Class
//---------------------------------------------------------------------------------------------
CreateAHeroClass
		NameTag			= CreateAHero:ClassName_OlogHai
		DescriptionTag		= CreateAHero:ClassDesc_OlogHai
		PowersDescTag		= CreateAHero:ClassPowersDesc_OlogHai
		UpgradeName			= Upgrade_CreateAHero_ClassOlogHai
		IconImage	   = CPTroll
		SubClass	// Troll
			NameTag			  =	CreateAHero:SubClassName_Troll
			DescriptionTag	  =	CreateAHero:SubClassDesc_Troll
			IconImage         = CPTroll
			ButtonImage       = HICAHTroll
			//DefaultFaction              = Mordor 
			UsableFactions              = Isengard Mordor Wild Angmar ;Guldur
			SpendableAttributePoints        = 20
			// In UI it should be  		=  HICAHTroll_wotr
			UpgradeName			  =	Upgrade_CreateAHero_SubClass_0
			//-------------------------------
			// Awards common to all heros.
			#include "CreateAHeroSystemCommonStatsAndAwards.inc"
			// Class specific awards
			Awards = ScourgeOfMiddleEarth
			//-------------------------------
			// Weapons
			BlingUpgrades		  =	Upgrade_CHW12 Upgrade_CHW13 Upgrade_CHW14 Upgrade_CHW15 Upgrade_CHW29 Upgrade_CHW30
			//-------------------------------
			// Head	Gear
			BlingUpgrades = Upgrade_NoHelmet Upgrade_CHH01 @Upgrade_CHH02 Upgrade_CHH03 Upgrade_CHH04
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
			BlingUpgrades = Upgrade_CHB01 Upgrade_CHB02 
                	;-------------------------------
                	; Body
			BlingUpgrades = Upgrade_CHBOD01 Upgrade_CHBOD02 Upgrade_CHBOD03
			DefaultPrimaryColor	  =	R:160 G:160 B:160
			DefaultSecondaryColor =	R:160 G:160 B:160
			DefaultTertiaryColor  =	R:160 G:160 B:160
			Attribute
				GroupName			= CreateAHero_ArmorAttribute
				MinValueUpgrade		= Upgrade_ArmorAttribute03
				MaxValueUpgrade		= Upgrade_ArmorAttribute17
				DefaultValueUpgrade	= Upgrade_ArmorAttribute09
			End
			Attribute
				GroupName			= CreateAHero_DamageMultAttribute
				MinValueUpgrade		= Upgrade_DamageMultAttribute13
				MaxValueUpgrade		= Upgrade_DamageMultAttribute20
				DefaultValueUpgrade	= Upgrade_DamageMultAttribute18
			End
			Attribute
				GroupName			= CreateAHero_HealthMultAttribute
				MinValueUpgrade		= Upgrade_HealthMultAttribute02
				MaxValueUpgrade		= Upgrade_HealthMultAttribute13
				DefaultValueUpgrade	= Upgrade_HealthMultAttribute09
			End
			Attribute
				GroupName			= CreateAHero_AutoHealAttribute
				MinValueUpgrade		= Upgrade_AutoHealAttribute07
				MaxValueUpgrade		= Upgrade_AutoHealAttribute20
				DefaultValueUpgrade	= Upgrade_AutoHealAttribute09
			End
			Attribute
				GroupName			= CreateAHero_VisionAttribute
				MinValueUpgrade		= Upgrade_VisionAttribute02
				MaxValueUpgrade		= Upgrade_VisionAttribute08
				DefaultValueUpgrade	= Upgrade_VisionAttribute02
			End
			// Camera used to view object with in create a hero
		ViewInfo
				FarPitch  = 0.00
		        FarZoom   = 0.21
		        FarFloor  = 10
		        FarDist   = 65
		        FarShift  = 20
		        NearPitch = -0.2
		        NearZoom  = 0.21
		        NearFloor = 60
		        NearDist  = 60
		        NearShift = 6
		        CloseUpPitch = -0.20
		        CloseUpZoom  = 0.200
		        CloseUpFloor = 80.000
		        CloseUpDist  = 50.000
		        CloseUpShift = 0.00
		        PortraitPitch = -0.020
		        PortraitZoom  = 0.200
		        PortraitFloor = 50.000
		        PortraitDist  = 54.00
		        PortraitShift = -1.00
		        //NormalCam = 0.50
			CameraAngle	= 0.0
			MapLocation = 7
			End
		End
	SubClass	// Snow Troll
		NameTag			  =	CreateAHero:SubClassName_SnowTroll
		DescriptionTag	  =	CreateAHero:SubClassDesc_SnowTroll
		IconImage         = KUSnowTrollPortrait
		ButtonImage       = WOR_SnowTrollIcon
		//DefaultFaction              = Angmar 
		UsableFactions              = Isengard Mordor Wild Angmar ;Guldur
		SpendableAttributePoints        = 20
		// In UI it should be  		=  HICAHTroll_wotr
		UpgradeName			  =	Upgrade_CreateAHero_SubClass_1
		//-------------------------------
		// Awards common to all heros.
		#include "CreateAHeroSystemCommonStatsAndAwards.inc"
		// Class specific awards
		Awards = ScourgeOfMiddleEarth
		//-------------------------------
		// Weapons
		BlingUpgrades		  =	Upgrade_CHW33 Upgrade_CHW34 Upgrade_CHW42
		//-------------------------------
		// Head	Gear
		BlingUpgrades = Upgrade_NoHelmet Upgrade_CHH01 Upgrade_CHH02 Upgrade_CHH03 Upgrade_CHH04 Upgrade_CHH05
                ;-------------------------------
                ; Shoulder Plates
		BlingUpgrades = Upgrade_CHSP01 Upgrade_CHSP02 
                ;-------------------------------
                ; Gauntlets
		BlingUpgrades = Upgrade_CHG01 Upgrade_CHG02 Upgrade_CHG03 Upgrade_CHG04 Upgrade_CHG05 Upgrade_CHG06 
                ;-------------------------------
                ; Shield
		BlingUpgrades = Upgrade_CHS01 
                ;-------------------------------
                ; Boots
		BlingUpgrades = Upgrade_CHB01 Upgrade_CHB02 
                ;-------------------------------
                ; Body
		BlingUpgrades = @Upgrade_CHBOD01 Upgrade_CHBOD02 Upgrade_CHBOD03 Upgrade_CHBOD04 Upgrade_CHBOD05 Upgrade_CHBOD06 Upgrade_CHBOD07 Upgrade_CHBOD08 
		DefaultPrimaryColor	  =	R:160 G:160 B:160
		DefaultSecondaryColor =	R:160 G:160 B:160
		DefaultTertiaryColor  =	R:160 G:160 B:160
		Attribute
			GroupName			= CreateAHero_ArmorAttribute
			MinValueUpgrade		= Upgrade_ArmorAttribute05
			MaxValueUpgrade		= Upgrade_ArmorAttribute17
			DefaultValueUpgrade	= Upgrade_ArmorAttribute11
		End
		Attribute
			GroupName			= CreateAHero_DamageMultAttribute
			MinValueUpgrade		= Upgrade_DamageMultAttribute10
			MaxValueUpgrade		= Upgrade_DamageMultAttribute17
			DefaultValueUpgrade	= Upgrade_DamageMultAttribute15
		End
		Attribute
			GroupName			= CreateAHero_HealthMultAttribute
			MinValueUpgrade		= Upgrade_HealthMultAttribute02
			MaxValueUpgrade		= Upgrade_HealthMultAttribute13
			DefaultValueUpgrade	= Upgrade_HealthMultAttribute09
		End
		Attribute
			GroupName			= CreateAHero_AutoHealAttribute
			MinValueUpgrade		= Upgrade_AutoHealAttribute05
			MaxValueUpgrade		= Upgrade_AutoHealAttribute20
			DefaultValueUpgrade	= Upgrade_AutoHealAttribute07
		End
		Attribute
			GroupName			= CreateAHero_VisionAttribute
			MinValueUpgrade		= Upgrade_VisionAttribute04
			MaxValueUpgrade		= Upgrade_VisionAttribute10
			DefaultValueUpgrade	= Upgrade_VisionAttribute04
		End
		// Camera used to view object with in create a hero
		ViewInfo
				FarPitch  = 0.00
		        FarZoom   = 0.21
		        FarFloor  = 10
		        FarDist   = 100
		        FarShift  = 20
		        NearPitch = -0.05
		        NearZoom  = 0.21
		        NearFloor = 50
		        NearDist  = 50
		        NearShift = 6
		        CloseUpPitch = -0.0350
		        CloseUpZoom  = 0.100
		        CloseUpFloor = 55.000
		        CloseUpDist  = 55.000
		        CloseUpShift = 0.00
		        PortraitPitch = -0.020
		        PortraitZoom  = 0.200
		        PortraitFloor = 50.000
		        PortraitDist  = 54.00
		        PortraitShift = -1.00
		        //NormalCam = 0.50
			CameraAngle	= 0.0
			MapLocation = 14
		End
	End
	SubClass	// Hill Troll
		NameTag			  =	CreateAHero:SubClassName_HillTroll
		DescriptionTag	  =	CreateAHero:SubClassDesc_HillTroll
		IconImage         = KUHillTrollPortrait
		ButtonImage       = WOR_HillTrollIcon
		//DefaultFaction              = Angmar 
		UsableFactions              = Isengard Mordor Wild Angmar ;Guldur
		SpendableAttributePoints        = 20
		// In UI it should be  		=  HICAHTroll_wotr
		UpgradeName			  =	Upgrade_CreateAHero_SubClass_2
		//-------------------------------
		// Awards common to all heros.
		#include "CreateAHeroSystemCommonStatsAndAwards.inc"
		// Class specific awards
		Awards = ScourgeOfMiddleEarth
		//-------------------------------
		// Weapons
		BlingUpgrades		  =	Upgrade_CHW33 Upgrade_CHW34 Upgrade_CHW42
		//-------------------------------
		// Head	Gear
		BlingUpgrades = Upgrade_NoHelmet  Upgrade_CHH01 Upgrade_CHH02 Upgrade_CHH03 Upgrade_CHH04 Upgrade_CHH05
                ;-------------------------------
                ; Shoulder Plates
		BlingUpgrades = Upgrade_CHSP01 Upgrade_CHSP02 
                ;-------------------------------
                ; Gauntlets
		BlingUpgrades = Upgrade_CHG01 Upgrade_CHG02 Upgrade_CHG03 Upgrade_CHG04 Upgrade_CHG05 Upgrade_CHG06 
                ;-------------------------------
                ; Shield
		BlingUpgrades = Upgrade_CHS01 
                ;-------------------------------
                ; Boots
		BlingUpgrades = Upgrade_CHB01 Upgrade_CHB02 
                ;-------------------------------
                ; Body
		BlingUpgrades = @Upgrade_CHBOD01 Upgrade_CHBOD02 Upgrade_CHBOD03 Upgrade_CHBOD04 Upgrade_CHBOD05 Upgrade_CHBOD06 Upgrade_CHBOD07 Upgrade_CHBOD08 
		DefaultPrimaryColor	  =	R:160 G:160 B:160
		DefaultSecondaryColor =	R:160 G:160 B:160
		DefaultTertiaryColor  =	R:160 G:160 B:160
		Attribute
			GroupName			= CreateAHero_ArmorAttribute
			MinValueUpgrade		= Upgrade_ArmorAttribute06
			MaxValueUpgrade		= Upgrade_ArmorAttribute20
			DefaultValueUpgrade	= Upgrade_ArmorAttribute12
		End
		Attribute
			GroupName			= CreateAHero_DamageMultAttribute
			MinValueUpgrade		= Upgrade_DamageMultAttribute13
			MaxValueUpgrade		= Upgrade_DamageMultAttribute20
			DefaultValueUpgrade	= Upgrade_DamageMultAttribute18
		End
		Attribute
			GroupName			= CreateAHero_HealthMultAttribute
			MinValueUpgrade		= Upgrade_HealthMultAttribute04
			MaxValueUpgrade		= Upgrade_HealthMultAttribute15
			DefaultValueUpgrade	= Upgrade_HealthMultAttribute11
		End
		Attribute
			GroupName			= CreateAHero_AutoHealAttribute
			MinValueUpgrade		= Upgrade_AutoHealAttribute05
			MaxValueUpgrade		= Upgrade_AutoHealAttribute20
			DefaultValueUpgrade	= Upgrade_AutoHealAttribute07
		End
		Attribute
			GroupName			= CreateAHero_VisionAttribute
			MinValueUpgrade		= Upgrade_VisionAttribute02
			MaxValueUpgrade		= Upgrade_VisionAttribute08
			DefaultValueUpgrade	= Upgrade_VisionAttribute02
		End
		// Camera used to view object with in create a hero
		ViewInfo
				FarPitch  = 0.00
		        FarZoom   = 0.21
		        FarFloor  = 10
		        FarDist   = 100
		        FarShift  = 20
		        NearPitch = -0.05
		        NearZoom  = 0.21
		        NearFloor = 60
		        NearDist  = 50
		        NearShift = 6
		        CloseUpPitch = -0.250
		        CloseUpZoom  = 0.200
		        CloseUpFloor = 70.000
		        CloseUpDist  = 40.000
		        CloseUpShift = 0.00
		        PortraitPitch = -0.020
		        PortraitZoom  = 0.200
		        PortraitFloor = 50.000
		        PortraitDist  = 54.00
		        PortraitShift = -1.00
		        //NormalCam = 0.50
			CameraAngle	= 0.0
			MapLocation = 9
		End
	End
		SubClass	// Hill Troll
		NameTag			  =	CreateAHero:SubClassName_PaleOrc
		DescriptionTag	  =	CreateAHero:SubClassDesc_PaleOrc
		IconImage         = UPMMGundabadGuard ;KUHillTrollPortrait
		ButtonImage       = UIMMBodyGuard ;WOR_HillTrollIcon
		//DefaultFaction              = Angmar 
		UsableFactions              = Isengard Mordor Wild Angmar ;Guldur
		SpendableAttributePoints        = 20
		// In UI it should be  		=  HICAHTroll_wotr
		UpgradeName			  =	Upgrade_CreateAHero_SubClass_3
		//-------------------------------
		// Awards common to all heros.
		#include "CreateAHeroSystemCommonStatsAndAwards.inc"
		// Class specific awards
		Awards = ScourgeOfMiddleEarth
		//-------------------------------
		// Weapons
		BlingUpgrades		  = Upgrade_CHW18 Upgrade_CHW19 Upgrade_CHW20 Upgrade_CHW24 Upgrade_CHW31 Upgrade_CHW22;	Upgrade_CHW33 Upgrade_CHW34 Upgrade_CHW42
		//-------------------------------
		// Head	Gear
		BlingUpgrades = Upgrade_NoHelmet  Upgrade_CHH01 Upgrade_CHH02 Upgrade_CHH03 Upgrade_CHH04 Upgrade_CHH05 Upgrade_CHH06 Upgrade_CHH07
                ;-------------------------------
                ; Shoulder Plates
		BlingUpgrades = Upgrade_CHSP01 Upgrade_CHSP02 Upgrade_CHSP03 Upgrade_CHSP04 Upgrade_CHSP05 Upgrade_CHSP06 Upgrade_CHSP07 
                ;-------------------------------
                ; Gauntlets
		BlingUpgrades = Upgrade_CHG01 Upgrade_CHG02 Upgrade_CHG03 
                ;-------------------------------
                ; Shield
		BlingUpgrades = Upgrade_CHS01 Upgrade_CHS02 Upgrade_CHS03 
                ;-------------------------------
                ; Boots
		BlingUpgrades = Upgrade_CHB01 Upgrade_CHB02 Upgrade_CHB03 
                ;-------------------------------
                ; Body
		BlingUpgrades = @Upgrade_CHBOD01 Upgrade_CHBOD02 Upgrade_CHBOD03 Upgrade_CHBOD04 Upgrade_CHBOD05 Upgrade_CHBOD06 Upgrade_CHBOD07 Upgrade_CHBOD08 Upgrade_CHBOD09 Upgrade_CHBOD10 
		DefaultPrimaryColor	  =	R:160 G:160 B:160
		DefaultSecondaryColor =	R:160 G:160 B:160
		DefaultTertiaryColor  =	R:160 G:160 B:160
		Attribute
			GroupName			= CreateAHero_ArmorAttribute
			MinValueUpgrade		= Upgrade_ArmorAttribute04
			MaxValueUpgrade		= Upgrade_ArmorAttribute18
			DefaultValueUpgrade	= Upgrade_ArmorAttribute14
		End
		Attribute
			GroupName			= CreateAHero_DamageMultAttribute
			MinValueUpgrade		= Upgrade_DamageMultAttribute05
			MaxValueUpgrade		= Upgrade_DamageMultAttribute18
			DefaultValueUpgrade	= Upgrade_DamageMultAttribute14
		End
		Attribute
			GroupName			= CreateAHero_HealthMultAttribute
			MinValueUpgrade		= Upgrade_HealthMultAttribute04
			MaxValueUpgrade		= Upgrade_HealthMultAttribute13
			DefaultValueUpgrade	= Upgrade_HealthMultAttribute10
		End
		Attribute
			GroupName			= CreateAHero_AutoHealAttribute
			MinValueUpgrade		= Upgrade_AutoHealAttribute04
			MaxValueUpgrade		= Upgrade_AutoHealAttribute16
			DefaultValueUpgrade	= Upgrade_AutoHealAttribute08
		End
		Attribute
			GroupName			= CreateAHero_VisionAttribute
			MinValueUpgrade		= Upgrade_VisionAttribute03
			MaxValueUpgrade		= Upgrade_VisionAttribute13
			DefaultValueUpgrade	= Upgrade_VisionAttribute04
		End
		// Camera used to view object with in create a hero
		ViewInfo
				FarPitch  = 0.00
		        FarZoom   = 0.21
		        FarFloor  = 10
		        FarDist   = 65
		        FarShift  = 20
		        NearPitch = 0.05
		        NearZoom  = 0.21
		        NearFloor = 60
		        NearDist  = 28
		        NearShift = 6
		        CloseUpPitch = 0.050
		        CloseUpZoom  = 0.200
		        CloseUpFloor = 45.000
		        CloseUpDist  = 40.000
		        CloseUpShift = 0.00
		        PortraitPitch = -0.020
		        PortraitZoom  = 0.200
		        PortraitFloor = 50.000
		        PortraitDist  = 54.00
		        PortraitShift = -1.00
		        //NormalCam = 0.50
			CameraAngle	= 0.0
			MapLocation = 11
		End
	End	
End
