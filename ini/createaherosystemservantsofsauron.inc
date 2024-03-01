//---------------------------------------------------------------------------------------------
// Servants Of Sauron Class
//---------------------------------------------------------------------------------------------
CreateAHeroClass	
	NameTag			= CreateAHero:ClassName_ServantsOfSauron
	DescriptionTag		= CreateAHero:ClassDesc_ServantsOfSauron
	PowersDescTag		= CreateAHero:ClassPowersDesc_ServantsOfSauron
	UpgradeName			= Upgrade_CreateAHero_ClassServantsOfSauron
	IconImage	   = Archetype_ServantofSauron
	SubClass	// OrcRaider
		NameTag			  =	CreateAHero:SubClassName_OrcRaider
		DescriptionTag	  =	CreateAHero:SubClassDesc_OrcRaider
		IconImage         = CPOrcRaider
		ButtonImage       = HICAHOrcRaider
		// In UI it should be  		=  HICAHOrcRaider_wotr
		//DefaultFaction              = Wild 
		UsableFactions              = Isengard Mordor Wild Angmar ;Guldur
		SpendableAttributePoints        = 30
		UpgradeName			  =	Upgrade_CreateAHero_SubClass_2
		//-------------------------------
		// Awards common to all heros.
		#include "CreateAHeroSystemCommonStatsAndAwards.inc"
		// Class specific awards
		Awards = ScourgeOfMiddleEarth
		//-------------------------------
		// Weapons
		BlingUpgrades		  =	Upgrade_CHW19 @Upgrade_CHW20 Upgrade_CHW23 Upgrade_CHW24 Upgrade_CHW28 Upgrade_CHW32
		//-------------------------------
		// Head	Gear
		BlingUpgrades = Upgrade_NoHelmet Upgrade_CHH01 Upgrade_CHH02 Upgrade_CHH03 Upgrade_CHH04 Upgrade_CHH05
                ;-------------------------------
                ; Shoulder Plates
		BlingUpgrades = Upgrade_CHSP01 Upgrade_CHSP02 Upgrade_CHSP03 Upgrade_CHSP04 Upgrade_CHSP05 Upgrade_CHSP06 
                ;-------------------------------
                ; Gauntlets
		BlingUpgrades = Upgrade_CHG01 Upgrade_CHG02 Upgrade_CHG03 Upgrade_CHG04 Upgrade_CHG05 Upgrade_CHG06 
                ;-------------------------------
                ; Shield
		BlingUpgrades = Upgrade_CHS01 
                ;-------------------------------
                ; Boots
		BlingUpgrades = Upgrade_CHB01 Upgrade_CHB02 Upgrade_CHB03 Upgrade_CHB04 Upgrade_CHB05 Upgrade_CHB06 Upgrade_CHB07 
                ;-------------------------------
                ; Body
		BlingUpgrades = Upgrade_CHBOD01 Upgrade_CHBOD02 Upgrade_CHBOD03 
		DefaultPrimaryColor	  =	R:160 G:160 B:160
		DefaultSecondaryColor =	R:160 G:160 B:160
		DefaultTertiaryColor  =	R:160 G:160 B:160
		Attribute
			GroupName			= CreateAHero_ArmorAttribute
			MinValueUpgrade		= Upgrade_ArmorAttribute04
			MaxValueUpgrade		= Upgrade_ArmorAttribute17
			DefaultValueUpgrade	= Upgrade_ArmorAttribute12
		End
		Attribute
			GroupName			= CreateAHero_DamageMultAttribute
			MinValueUpgrade		= Upgrade_DamageMultAttribute04
			MaxValueUpgrade		= Upgrade_DamageMultAttribute16
			DefaultValueUpgrade	= Upgrade_DamageMultAttribute12
		End
		Attribute
			GroupName			= CreateAHero_HealthMultAttribute
			MinValueUpgrade		= Upgrade_HealthMultAttribute04
			MaxValueUpgrade		= Upgrade_HealthMultAttribute13
			DefaultValueUpgrade	= Upgrade_HealthMultAttribute12
		End
		Attribute
			GroupName			= CreateAHero_AutoHealAttribute
			MinValueUpgrade		= Upgrade_AutoHealAttribute04
			MaxValueUpgrade		= Upgrade_AutoHealAttribute15
			DefaultValueUpgrade	= Upgrade_AutoHealAttribute06
		End
		Attribute
			GroupName			= CreateAHero_VisionAttribute
			MinValueUpgrade		= Upgrade_VisionAttribute04
			MaxValueUpgrade		= Upgrade_VisionAttribute16
			DefaultValueUpgrade	= Upgrade_VisionAttribute08
		End
		ViewInfo
				FarPitch  = 0.02
		        FarZoom   = 0.2
		        FarFloor  = 10
		        FarDist   = 60
		        FarShift  = 20
		        NearPitch = 0.15
		        NearZoom  = 0.2
		        NearFloor = 35
		        NearDist  = 10
		        NearShift = 7
		        CloseUpPitch = 0.0350
		        CloseUpZoom  = 0.200
		        CloseUpFloor = 35.000
		        CloseUpDist  = 40.000
		        CloseUpShift = 0.00
		        PortraitPitch = 0.020
		        PortraitZoom  = 0.200
		        PortraitFloor = 40.000
		        PortraitDist  = 54.00
		        PortraitShift = -1.00
		        //NormalCam = 0.50
			CameraAngle	= 0.0
			MapLocation	= 7 
		End
	End	 // SubClass Troll
	SubClass	// Uruk (With armor pieces)
		NameTag			  =	CreateAHero:SubClassName_Uruk
		DescriptionTag	  =	CreateAHero:SubClassDesc_Uruk
		IconImage         = CPUrukHai
		ButtonImage       = HICAHUrukHai
		// In UI it should be  		=  HICAHUrukHai_wotr
		//DefaultFaction              = Isengard 
		UsableFactions              = Isengard Mordor Wild Angmar ;Guldur
		SpendableAttributePoints        = 30
		UpgradeName			  =	Upgrade_CreateAHero_SubClass_3
		//-------------------------------
		// Awards common to all heros.
		#include "CreateAHeroSystemCommonStatsAndAwards.inc"
		// Class specific awards
		Awards = ScourgeOfMiddleEarth
		//-------------------------------
		// Weapons
		BlingUpgrades		  =	Upgrade_CHW18 Upgrade_CHW19	Upgrade_CHW20 Upgrade_CHW24 //Upgrade_CHW23
		//-------------------------------
		// Head	Gear
		BlingUpgrades = Upgrade_NoHelmet Upgrade_CHH01 Upgrade_CHH02 Upgrade_CHH03 Upgrade_CHH04 Upgrade_CHH05 Upgrade_CHH06
                ;-------------------------------
                ; Shoulder Plates
		BlingUpgrades = Upgrade_CHSP01 Upgrade_CHSP02 Upgrade_CHSP03 Upgrade_CHSP04 
                ;-------------------------------
                ; Gauntlets
		BlingUpgrades = Upgrade_CHG01 Upgrade_CHG02 Upgrade_CHG03 Upgrade_CHG04 Upgrade_CHG05 
                ;-------------------------------
                ; Shield
		BlingUpgrades = Upgrade_CHS01 Upgrade_CHS02 Upgrade_CHS03 
                ;-------------------------------
                ; Boots
		BlingUpgrades = Upgrade_CHB01 Upgrade_CHB02 Upgrade_CHB03 Upgrade_CHB04 
                ;-------------------------------
                ; Body
		BlingUpgrades = Upgrade_CHBOD01 Upgrade_CHBOD02 Upgrade_CHBOD03 Upgrade_CHBOD04 

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
		ViewInfo
				FarPitch  = 0.0
		        FarZoom   = 0.21
		        FarFloor  = 20
		        FarDist   = 80
		        FarShift  = 20
		        NearPitch = 0.1
		        NearZoom  = 0.21
		        NearFloor = 60
		        NearDist  = 30
		        NearShift = 6
		        CloseUpPitch = -0.0250
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
			MapLocation = 12
		End
	End
End
