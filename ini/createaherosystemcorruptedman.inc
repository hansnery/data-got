//-----------------------------------------------------------------------------------------------------
// Corrupted Man Class
//-----------------------------------------------------------------------------------------------------
CreateAHeroClass	
	NameTag			= CreateAHero:ClassName_CorruptedMan
	DescriptionTag	= CreateAHero:ClassDesc_CorruptedMan
	PowersDescTag		= CreateAHero:ClassPowersDesc_CorruptedMan
	UpgradeName			= Upgrade_CreateAHero_ClassCorruptedMan
	IconImage	   = Archetype_CorruptedMan
	SubClass	// CorruptedMan 1
		NameTag			  =	CreateAHero:SubClassName_CorruptMan1
		DescriptionTag	  =	CreateAHero:SubClassDesc_Easterling
		UpgradeName		  =	Upgrade_CreateAHero_SubClass_0
		IconImage         = CPEasterling
		ButtonImage       = HICAHEasterling
		SpendableAttributePoints        = 30
		//DefaultFaction              =		
		UsableFactions              =  Isengard Mordor Wild Angmar ;Guldur
		// In UI it should be  		=  HICAHEasterling_wotr
		//-------------------------------
		// Awards common to all heros.
		#include "CreateAHeroSystemCommonStatsAndAwards.inc"
		// Class specific awards
		Awards = ScourgeOfMiddleEarth
		//-------------------------------
		// Weapons
		BlingUpgrades =	Upgrade_CHW25 @Upgrade_CHW26 Upgrade_CHW21 Upgrade_CHW22 Upgrade_CHW23 Upgrade_CHW24 Upgrade_CHW35
		//-------------------------------
		// Head	Gear
		BlingUpgrades = @Upgrade_NoHelmet Upgrade_CHH01 Upgrade_CHH02 Upgrade_CHH03 Upgrade_CHH04 Upgrade_CHH05 Upgrade_CHH06 
                ; Shoulder Plates
		BlingUpgrades = Upgrade_CHSP01 Upgrade_CHSP02 Upgrade_CHSP03 Upgrade_CHSP04 
                ;-------------------------------
                ; Gauntlets
		BlingUpgrades = Upgrade_CHG01 Upgrade_CHG02 Upgrade_CHG03 Upgrade_CHG04 
                ;-------------------------------
                ; Shield
		BlingUpgrades = Upgrade_CHS01 
                ;-------------------------------
                ; Boots
		BlingUpgrades = Upgrade_CHB01 Upgrade_CHB02 Upgrade_CHB03 Upgrade_CHB04 
                ;-------------------------------
                ; Body
		BlingUpgrades = @Upgrade_CHBOD01 Upgrade_CHBOD02 Upgrade_CHBOD03 Upgrade_CHBOD04 Upgrade_CHBOD05 Upgrade_CHBOD06 Upgrade_CHBOD07 
		DefaultPrimaryColor	  =	R:160 G:160 B:160
		DefaultSecondaryColor =	R:160 G:160 B:160
		DefaultTertiaryColor  =	R:160 G:160 B:160
		Attribute
			GroupName			= CreateAHero_ArmorAttribute
			MinValueUpgrade		= Upgrade_ArmorAttribute04
			MaxValueUpgrade		= Upgrade_ArmorAttribute15
			DefaultValueUpgrade	= Upgrade_ArmorAttribute12
		End
		Attribute
			GroupName			= CreateAHero_DamageMultAttribute
			MinValueUpgrade		= Upgrade_DamageMultAttribute04
			MaxValueUpgrade		= Upgrade_DamageMultAttribute16
			DefaultValueUpgrade	= Upgrade_DamageMultAttribute10
		End
		Attribute
			GroupName			= CreateAHero_HealthMultAttribute
			MinValueUpgrade		= Upgrade_HealthMultAttribute05
			MaxValueUpgrade		= Upgrade_HealthMultAttribute19
			DefaultValueUpgrade	= Upgrade_HealthMultAttribute12
		End
		Attribute
			GroupName			= CreateAHero_AutoHealAttribute
			MinValueUpgrade		= Upgrade_AutoHealAttribute02
			MaxValueUpgrade		= Upgrade_AutoHealAttribute15
			DefaultValueUpgrade	= Upgrade_AutoHealAttribute08
		End
		Attribute
			GroupName			= CreateAHero_VisionAttribute
			MinValueUpgrade		= Upgrade_VisionAttribute05
			MaxValueUpgrade		= Upgrade_VisionAttribute19
			DefaultValueUpgrade	= Upgrade_VisionAttribute08
		End
		// Camera used to view object with in create a hero
		ViewInfo
				FarPitch  = 0.05
		        FarZoom   = 0.2
		        FarFloor  = 40
		        FarDist   = 85
		        FarShift  = 20
		        NearPitch = 0.15
		        NearZoom  = 0.205
		        NearFloor = 40
		        NearDist  = 15
		        NearShift = 8
		        CloseUpPitch = -0.010
		        CloseUpZoom  = 0.200
		        CloseUpFloor = 40.000
		        CloseUpDist  = 40.000
		        CloseUpShift = 0.00
		        PortraitPitch = -0.020
		        PortraitZoom  = 0.200
		        PortraitFloor = 50.000
		        PortraitDist  = 54.00
		        PortraitShift = -1.00
		        //NormalCam = 0.50
			CameraAngle	= 0.0
				MapLocation	= 13
		End
	End
	SubClass	// CorruptedMan 2
		NameTag			  =	CreateAHero:SubClassName_CorruptMan2
		DescriptionTag	  =	CreateAHero:SubClassDesc_Haradrim
		IconImage         = CPHaradrim
		ButtonImage       = HICAHHaradrim
		// In UI it should be  		=  HICAHHaradrim_wotr
		UsableFactions              =  Isengard Mordor Wild Angmar ;Guldur
		SpendableAttributePoints        = 30
		//DefaultFaction              =		
		UpgradeName			  =	Upgrade_CreateAHero_SubClass_1
		//-------------------------------
		// Awards common to all heros.
		#include "CreateAHeroSystemCommonStatsAndAwards.inc"
		// Class specific awards
		Awards = ScourgeOfMiddleEarth
		//-------------------------------
		// Weapons
		BlingUpgrades		  =	@Upgrade_CHW25 Upgrade_CHW26 Upgrade_CHW21 Upgrade_CHW22 Upgrade_CHW23 Upgrade_CHW24 Upgrade_CHW35
		//-------------------------------
		// Head	Gear
		BlingUpgrades = Upgrade_NoHelmet Upgrade_CHH01 Upgrade_CHH02 Upgrade_CHH03 Upgrade_CHH04 Upgrade_CHH05 Upgrade_CHH06 
                ;-------------------------------
                ; Shoulder Plates
		BlingUpgrades = Upgrade_CHSP01 @Upgrade_CHSP02 Upgrade_CHSP03 Upgrade_CHSP04 
                ;-------------------------------
                ; Gauntlets
		BlingUpgrades = Upgrade_CHG01 @Upgrade_CHG02 Upgrade_CHG03 Upgrade_CHG04 
                ;-------------------------------
                ; Shield
		BlingUpgrades = Upgrade_CHS01 
                ;-------------------------------
                ; Boots
		BlingUpgrades = Upgrade_CHB01 @Upgrade_CHB02 Upgrade_CHB03 Upgrade_CHB04 
                ;-------------------------------
                ; Body
		BlingUpgrades = Upgrade_CHBOD01 @Upgrade_CHBOD02 Upgrade_CHBOD03 Upgrade_CHBOD04 Upgrade_CHBOD05 Upgrade_CHBOD06 Upgrade_CHBOD07 
		DefaultPrimaryColor	  =	R:65 G:54 B:66
		DefaultSecondaryColor =	R:65 G:54 B:66
		DefaultTertiaryColor  =	R:176 G:157 B:112
		Attribute
			GroupName			= CreateAHero_ArmorAttribute
			MinValueUpgrade		= Upgrade_ArmorAttribute02
			MaxValueUpgrade		= Upgrade_ArmorAttribute14
			DefaultValueUpgrade	= Upgrade_ArmorAttribute08
		End
		Attribute
			GroupName			= CreateAHero_DamageMultAttribute
			MinValueUpgrade		= Upgrade_DamageMultAttribute05
			MaxValueUpgrade		= Upgrade_DamageMultAttribute18
			DefaultValueUpgrade	= Upgrade_DamageMultAttribute12
		End
		Attribute
			GroupName			= CreateAHero_HealthMultAttribute
			MinValueUpgrade		= Upgrade_HealthMultAttribute05
			MaxValueUpgrade		= Upgrade_HealthMultAttribute19
			DefaultValueUpgrade	= Upgrade_HealthMultAttribute12
		End
		Attribute
			GroupName			= CreateAHero_AutoHealAttribute
			MinValueUpgrade		= Upgrade_AutoHealAttribute03
			MaxValueUpgrade		= Upgrade_AutoHealAttribute14
			DefaultValueUpgrade	= Upgrade_AutoHealAttribute08
		End
		Attribute
			GroupName			= CreateAHero_VisionAttribute
			MinValueUpgrade		= Upgrade_VisionAttribute05
			MaxValueUpgrade		= Upgrade_VisionAttribute19
			DefaultValueUpgrade	= Upgrade_VisionAttribute10
		End
		// Camera used to view object with in create a hero
		ViewInfo
				FarPitch  = 0.05
		        FarZoom   = 0.2
		        FarFloor  = 40
		        FarDist   = 85
		        FarShift  = 20
		        NearPitch = 0.15
		        NearZoom  = 0.205
		        NearFloor = 40
		        NearDist  = 15
		        NearShift = 8
		        CloseUpPitch = -0.010
		        CloseUpZoom  = 0.200
		        CloseUpFloor = 40.000
		        CloseUpDist  = 40.000
		        CloseUpShift = 0.00
		        PortraitPitch = -0.020
		        PortraitZoom  = 0.200
		        PortraitFloor = 50.000
		        PortraitDist  = 54.00
		        PortraitShift = -1.00
		        //NormalCam = 0.50
			CameraAngle	= 0.0
				MapLocation	= 8
		End
	End
End
