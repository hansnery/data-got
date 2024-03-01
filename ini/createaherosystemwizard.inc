//---------------------------------------------------------------------------------------------
// Istari Wizard Class
//---------------------------------------------------------------------------------------------
CreateAHeroClass	
	NameTag		   = CreateAHero:ClassName_IstariWizard
	DescriptionTag = CreateAHero:ClassDesc_IstariWizard
	PowersDescTag  = CreateAHero:ClassPowersDesc_IstariWizard
	UpgradeName	   = Upgrade_CreateAHero_ClassIstariWizard
	IconImage	   = Archetype_Wizard
	SubClass	// Wanderer
		NameTag		   = CreateAHero:SubClassName_Wanderer
		DescriptionTag = CreateAHero:SubClassDesc_IstariWizard
		IconImage	   = CPWanderer
		ButtonImage	   = HICAHWanderer
		// In UI it should be  		=  HICAHWanderer_wotr
		// DefaultFaction              = Isengard 
		UsableFactions              = Men Elves Dwarves Isengard Mordor Wild Angmar ;Arnor Rohan Mirkwood Guldur
		SpendableAttributePoints        = 25
		UpgradeName	   = Upgrade_CreateAHero_SubClass_0
		//-------------------------------
		// Awards common to all heros.
		#include "CreateAHeroSystemCommonStatsAndAwards.inc"
		// Class specific awards
		Awards = GuardianOfMiddleEarth
		//-------------------------------
		// Weapons
		BlingUpgrades		  =	@Upgrade_CHW07 Upgrade_CHW09	Upgrade_CHW10 Upgrade_CHW11 Upgrade_CHW40 Upgrade_CHW41
		//-------------------------------
		// Head	Gear
		BlingUpgrades = Upgrade_NoHelmet  Upgrade_CHH01 Upgrade_CHH02 @Upgrade_CHH03 Upgrade_CHH04 Upgrade_CHH05 Upgrade_CHH06 Upgrade_CHH07 Upgrade_CHH08
                ;-------------------------------
                ; Shoulder Plates
		BlingUpgrades = Upgrade_CHSP01 Upgrade_CHSP02 Upgrade_CHSP03 
                ;-------------------------------
                ; Gauntlets
		BlingUpgrades = Upgrade_CHG01 
                ;-------------------------------
                ; Shield
		BlingUpgrades = Upgrade_CHS01 
                ;-------------------------------
                ; Boots
		BlingUpgrades = Upgrade_CHB01 
                ;-------------------------------
                ; Body
		BlingUpgrades = @Upgrade_CHBOD01 Upgrade_CHBOD02 Upgrade_CHBOD03
		DefaultPrimaryColor	  =	R:160 G:160	B:160
		DefaultSecondaryColor =	R:160 G:160	B:160
		DefaultTertiaryColor  =	R:160 G:160	B:160
		Attribute
			GroupName			= CreateAHero_ArmorAttribute
			MinValueUpgrade		= Upgrade_ArmorAttribute02
			MaxValueUpgrade		= Upgrade_ArmorAttribute14
			DefaultValueUpgrade	= Upgrade_ArmorAttribute05
		End
		Attribute
			GroupName			= CreateAHero_DamageMultAttribute
			MinValueUpgrade		= Upgrade_DamageMultAttribute02
			MaxValueUpgrade		= Upgrade_DamageMultAttribute15
			DefaultValueUpgrade	= Upgrade_DamageMultAttribute05
		End
		Attribute
			GroupName			= CreateAHero_HealthMultAttribute
			MinValueUpgrade		= Upgrade_HealthMultAttribute05
			MaxValueUpgrade		= Upgrade_HealthMultAttribute20
			DefaultValueUpgrade	= Upgrade_HealthMultAttribute12
		End
		Attribute
			GroupName			= CreateAHero_AutoHealAttribute
			MinValueUpgrade		= Upgrade_AutoHealAttribute02
			MaxValueUpgrade		= Upgrade_AutoHealAttribute16
			DefaultValueUpgrade	= Upgrade_AutoHealAttribute06
		End
		Attribute
			GroupName			= CreateAHero_VisionAttribute
			MinValueUpgrade		= Upgrade_VisionAttribute04
			MaxValueUpgrade		= Upgrade_VisionAttribute17
			DefaultValueUpgrade	= Upgrade_VisionAttribute12
		End
		// Camera used to view object with in create a hero
		ViewInfo
				FarPitch  = 0.0
		        FarZoom   = 0.2
		        FarFloor  = 5
		        FarDist   = 80.000
		        FarShift  = 20
		        NearPitch = 0.1
		        NearZoom  = 0.205
		        NearFloor = 15
		        NearDist  = 5
		        NearShift = 10
		        CloseUpPitch = -0.0350
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
			MapLocation	= 15
		End
	End
	SubClass	// Avatar
		NameTag		   = CreateAHero:SubClassName_Avatar
		DescriptionTag = CreateAHero:SubClassDesc_Avatar
		UpgradeName	   = Upgrade_CreateAHero_SubClass_1
		IconImage	   = CPAvatar
		ButtonImage	   = HICAHAvatar
		// In UI it should be  		=  HICAHAvatar_wotr
		// DefaultFaction              = Men 
		//DefaultFaction              = Angmar 
		UsableFactions              = Men Elves Dwarves Isengard Mordor Wild Angmar ;Arnor Rohan Mirkwood Guldur
		SpendableAttributePoints        = 25
		//-------------------------------
		// Awards common to all heros.
		#include "CreateAHeroSystemCommonStatsAndAwards.inc"
		// Class specific awards
		Awards = GuardianOfMiddleEarth
		//-------------------------------
		// Weapons
		BlingUpgrades		  =	Upgrade_CHW07 Upgrade_CHW09	@Upgrade_CHW10 Upgrade_CHW11 Upgrade_CHW40 Upgrade_CHW41
		//-------------------------------
		// Head	Gear
		BlingUpgrades = @Upgrade_NoHelmet Upgrade_CHH01 Upgrade_CHH02 Upgrade_CHH03 Upgrade_CHH04 Upgrade_CHH05 Upgrade_CHH06 Upgrade_CHH07 Upgrade_CHH08
		//-------------------------------
	        ; Shoulder Plates
		BlingUpgrades = Upgrade_CHSP01 Upgrade_CHSP02 Upgrade_CHSP03 
                ;-------------------------------
                ; Gauntlets
		BlingUpgrades = Upgrade_CHG01 
                ;-------------------------------
                ; Shield
		BlingUpgrades = Upgrade_CHS01 
                ;-------------------------------
                ; Boots
		BlingUpgrades = Upgrade_CHB01 
                ;-------------------------------
                ; Body
		BlingUpgrades = Upgrade_CHBOD01 Upgrade_CHBOD02 @Upgrade_CHBOD03 
		DefaultPrimaryColor	  =	R:160 G:160	B:160
		DefaultSecondaryColor =	R:160 G:160	B:160
		DefaultTertiaryColor  =	R:160 G:160	B:160
		Attribute
			GroupName			= CreateAHero_ArmorAttribute
			MinValueUpgrade		= Upgrade_ArmorAttribute04
			MaxValueUpgrade		= Upgrade_ArmorAttribute16
			DefaultValueUpgrade	= Upgrade_ArmorAttribute10
		End
		Attribute
			GroupName			= CreateAHero_DamageMultAttribute
			MinValueUpgrade		= Upgrade_DamageMultAttribute03
			MaxValueUpgrade		= Upgrade_DamageMultAttribute15
			DefaultValueUpgrade	= Upgrade_DamageMultAttribute10
		End
		Attribute
			GroupName			= CreateAHero_HealthMultAttribute
			MinValueUpgrade		= Upgrade_HealthMultAttribute02
			MaxValueUpgrade		= Upgrade_HealthMultAttribute15
			DefaultValueUpgrade	= Upgrade_HealthMultAttribute10
		End
		Attribute
			GroupName			= CreateAHero_AutoHealAttribute
			MinValueUpgrade		= Upgrade_AutoHealAttribute02
			MaxValueUpgrade		= Upgrade_AutoHealAttribute16
			DefaultValueUpgrade	= Upgrade_AutoHealAttribute02
		End
		Attribute
			GroupName			= CreateAHero_VisionAttribute
			MinValueUpgrade		= Upgrade_VisionAttribute04
			MaxValueUpgrade		= Upgrade_VisionAttribute17
			DefaultValueUpgrade	= Upgrade_VisionAttribute08
		End
		// Camera used to view object with in create a hero
		ViewInfo
				FarPitch  = 0.0
		        FarZoom   = 0.2
		        FarFloor  = 5
		        FarDist   = 80.000
		        FarShift  = 20
		        NearPitch = 0.1
		        NearZoom  = 0.205
		        NearFloor = 15
		        NearDist  = 5
		        NearShift = 10
		        CloseUpPitch = -0.0350
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
			MapLocation	= 16
		End
	End
	SubClass	// Hermit
		NameTag		   = CreateAHero:SubClassName_Hermit
		DescriptionTag = CreateAHero:ClassPowersDesc_Hermit
		UpgradeName	   = Upgrade_CreateAHero_SubClass_2
		IconImage	   = CPHermit
		ButtonImage	   = HICAHHermit
		// In UI it should be  		=  HICAHHermit_wotr
		//DefaultFaction              = Wild 
		UsableFactions              = Men Elves Dwarves Isengard Mordor Wild Angmar ;Arnor Rohan Mirkwood Guldur
		SpendableAttributePoints        = 25
		//-------------------------------
		// Awards common to all heros.
		#include "CreateAHeroSystemCommonStatsAndAwards.inc"
		// Class specific awards
		Awards = GuardianOfMiddleEarth
		//-------------------------------
		// Weapons
		BlingUpgrades		  =	Upgrade_CHW07 @Upgrade_CHW09	Upgrade_CHW10 Upgrade_CHW11 Upgrade_CHW40 Upgrade_CHW41
		//-------------------------------
		// Head	Gear
		BlingUpgrades = Upgrade_NoHelmet Upgrade_CHH01 @Upgrade_CHH02 Upgrade_CHH03 Upgrade_CHH04 Upgrade_CHH05 Upgrade_CHH06 Upgrade_CHH07 Upgrade_CHH08
	        ;-------------------------------
                ; Shoulder Plates
		BlingUpgrades = Upgrade_CHSP01 Upgrade_CHSP02 Upgrade_CHSP03 
                ;-------------------------------
                ; Gauntlets
		BlingUpgrades = Upgrade_CHG01 
                ;-------------------------------
                ; Shield
		BlingUpgrades = Upgrade_CHS01 
                ;-------------------------------
                ; Boots
		BlingUpgrades = Upgrade_CHB01 
                ;-------------------------------
                ; Body
		BlingUpgrades = Upgrade_CHBOD01 @Upgrade_CHBOD02 Upgrade_CHBOD03 
		DefaultPrimaryColor	  =	R:160 G:160 B:160
		DefaultSecondaryColor =	R:160 G:160 B:160
		DefaultTertiaryColor  =	R:160 G:160 B:160
		Attribute
			GroupName			= CreateAHero_ArmorAttribute
			MinValueUpgrade		= Upgrade_ArmorAttribute02
			MaxValueUpgrade		= Upgrade_ArmorAttribute14
			DefaultValueUpgrade	= Upgrade_ArmorAttribute08
		End
		Attribute
			GroupName			= CreateAHero_DamageMultAttribute
			MinValueUpgrade		= Upgrade_DamageMultAttribute02
			MaxValueUpgrade		= Upgrade_DamageMultAttribute15
			DefaultValueUpgrade	= Upgrade_DamageMultAttribute04
		End
		Attribute
			GroupName			= CreateAHero_HealthMultAttribute
			MinValueUpgrade		= Upgrade_HealthMultAttribute03
			MaxValueUpgrade		= Upgrade_HealthMultAttribute15
			DefaultValueUpgrade	= Upgrade_HealthMultAttribute10
		End
		Attribute
			GroupName			= CreateAHero_AutoHealAttribute
			MinValueUpgrade		= Upgrade_AutoHealAttribute04
			MaxValueUpgrade		= Upgrade_AutoHealAttribute18
			DefaultValueUpgrade	= Upgrade_AutoHealAttribute06
		End
		Attribute
			GroupName			= CreateAHero_VisionAttribute
			MinValueUpgrade		= Upgrade_VisionAttribute04
			MaxValueUpgrade		= Upgrade_VisionAttribute17
			DefaultValueUpgrade	= Upgrade_VisionAttribute12
		End
		// Camera used to view object with in create a hero
		ViewInfo
				FarPitch  = 0.0
		        FarZoom   = 0.2
		        FarFloor  = 5
		        FarDist   = 80.000
		        FarShift  = 20
		        NearPitch = 0.1
		        NearZoom  = 0.205
		        NearFloor = 15
		        NearDist  = 5
		        NearShift = 10
		        CloseUpPitch = -0.0350
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
			MapLocation	= 5
		End
	End
End
