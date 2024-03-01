//---------------------------------------------------------------------------------------------
// Men of The West Class
//---------------------------------------------------------------------------------------------
CreateAHeroClass
	NameTag		   = CreateAHero:ClassName_HeroesOfTheWest
	DescriptionTag = CreateAHero:ClassDesc_HeroesOfTheWest
	PowersDescTag  = CreateAHero:ClassPowersDesc_HeroesOfTheWest
	UpgradeName	   = Upgrade_CreateAHero_ClassHeroOfTheWest
	IconImage	   = Archetype_HerooftheWest
	SubClass // Captain Of Gondor
		NameTag				  =	CreateAHero:SubClassName_CaptainOfGondor
		DescriptionTag		  =	CreateAHero:SubClassDesc_CaptainOfGondor
		IconImage			  = CPCaptainofGondor
		ButtonImage           		= HICAHCaptainGondor
		// In UI it should be  		=  HICAHCaptainGondor_wotr
		//DefaultFaction              = Men
		UsableFactions              = Men Elves Dwarves ;Arnor Rohan Mirkwood
		SpendableAttributePoints        = 30
		UpgradeName			  =	Upgrade_CreateAHero_SubClass_0
		//-------------------------------
		// Awards common to all heros.
		#include "CreateAHeroSystemCommonStatsAndAwards.inc"
		// Class specific awards
		Awards = GuardianOfMiddleEarth
		//-------------------------------
		// Weapons
		BlingUpgrades		  =	@Upgrade_CHW03 Upgrade_CHW04  Upgrade_CHW05 Upgrade_CHW06 Upgrade_CHW27 Upgrade_CHW28
		//-------------------------------
		// Head	Gear
		BlingUpgrades = @Upgrade_CHH01 Upgrade_CHH02 Upgrade_CHH03 Upgrade_CHH04 Upgrade_CHH05 Upgrade_CHH06 Upgrade_CHH07 Upgrade_CHH08 Upgrade_CHH09
		//-------------------------------
                ; Shoulder Plates
		BlingUpgrades = Upgrade_CHSP01 @Upgrade_CHSP02 Upgrade_CHSP03 Upgrade_CHSP04 Upgrade_CHSP05 Upgrade_CHSP06 Upgrade_CHSP07 Upgrade_CHSP08
                ; Gauntlets
		BlingUpgrades = @Upgrade_CHG01 Upgrade_CHG02 Upgrade_CHG03 Upgrade_CHG04
                ; Shield
		BlingUpgrades = Upgrade_CHS01 Upgrade_CHS02 Upgrade_CHS03 @Upgrade_CHS04 Upgrade_CHS05 Upgrade_CHS06 Upgrade_CHS07 Upgrade_CHS08 Upgrade_CHS09 Upgrade_CHS10
                ; Boots
		BlingUpgrades = Upgrade_CHB01 Upgrade_CHB02 Upgrade_CHB03 Upgrade_CHB04 @Upgrade_CHB05 Upgrade_CHB06 Upgrade_CHB07
                ; Body
		BlingUpgrades = @Upgrade_CHBOD01 Upgrade_CHBOD02 Upgrade_CHBOD03 Upgrade_CHBOD04 Upgrade_CHBOD05 Upgrade_CHBOD06 Upgrade_CHBOD07

		DefaultPrimaryColor	  =	R:150 G:150	B:150
		DefaultSecondaryColor =	R:150 G:150	B:150
		DefaultTertiaryColor  =	R:150 G:150	B:150
		Attribute
			GroupName			= CreateAHero_ArmorAttribute
			MinValueUpgrade		= Upgrade_ArmorAttribute05
			MaxValueUpgrade		= Upgrade_ArmorAttribute20
			DefaultValueUpgrade	= Upgrade_ArmorAttribute16
		End
		Attribute
			GroupName			= CreateAHero_DamageMultAttribute
			MinValueUpgrade		= Upgrade_DamageMultAttribute04
			MaxValueUpgrade		= Upgrade_DamageMultAttribute17
			DefaultValueUpgrade	= Upgrade_DamageMultAttribute12
		End
		Attribute
			GroupName			= CreateAHero_HealthMultAttribute
			MinValueUpgrade		= Upgrade_HealthMultAttribute06 //Upgrade_HealthMultAttribute04
			MaxValueUpgrade		= Upgrade_HealthMultAttribute18 //Upgrade_HealthMultAttribute15
			DefaultValueUpgrade	= Upgrade_HealthMultAttribute12 //Upgrade_HealthMultAttribute10
		End
		Attribute
			GroupName			= CreateAHero_AutoHealAttribute
			MinValueUpgrade		= Upgrade_AutoHealAttribute05
			MaxValueUpgrade		= Upgrade_AutoHealAttribute18
			DefaultValueUpgrade	= Upgrade_AutoHealAttribute06
		End
		Attribute
			GroupName			= CreateAHero_VisionAttribute
			MinValueUpgrade		= Upgrade_VisionAttribute04
			MaxValueUpgrade		= Upgrade_VisionAttribute14
			DefaultValueUpgrade	= Upgrade_VisionAttribute08
		End
		// Camera used to view object with in create a hero
		// NormaCam == 1.0 means it is at far location
		ViewInfo
				FarPitch  = 0.0
		        FarZoom   = 0.2
		        FarFloor  = 40
		        FarDist   = 80.000
		        FarShift  = 18
		        NearPitch = 0.1
		        NearZoom  = 0.21
		        NearFloor = 50
		        NearDist  = 20
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
			MapLocation	= 1
		End
	End
	SubClass // Shield Maiden
		NameTag				  =	CreateAHero:SubClassName_SheildMaiden
		DescriptionTag		  =	CreateAHero:SubClassDesc_ShieldMaiden
		//IconImage			  =	CPShieldMaidenAlpha
		IconImage			  = CPShieldMaiden
		ButtonImage           = HICAHShieldMaiden
		// In UI it should be  		=  HICAHShieldMaiden_wotr
		//DefaultFaction              = Rohan
		UsableFactions              = Men Elves Dwarves ;Arnor Rohan Mirkwood
		SpendableAttributePoints        = 30
		UpgradeName			  =	Upgrade_CreateAHero_SubClass_1
		//-------------------------------
		// Awards common to all heros.
		#include "CreateAHeroSystemCommonStatsAndAwards.inc"
		// Class specific awards
		Awards = GuardianOfMiddleEarth
		//	-------------------------------
		//	Weapons
		BlingUpgrades	=	Upgrade_CHW03 Upgrade_CHW04 Upgrade_CHW05 Upgrade_CHW06 Upgrade_CHW27 Upgrade_CHW28
		//	-------------------------------
		//	Head Gear
		BlingUpgrades	 =	Upgrade_NoHelmet @Upgrade_CHH01 Upgrade_CHH02 Upgrade_CHH03 Upgrade_CHH04
                ;-------------------------------
                ; Shoulder Plates
		BlingUpgrades = Upgrade_CHSP01 Upgrade_CHSP02 Upgrade_CHSP03 Upgrade_CHSP04 Upgrade_CHSP05 Upgrade_CHSP06
                ;-------------------------------
                ; Gauntlets
		BlingUpgrades = Upgrade_CHG01 Upgrade_CHG02 Upgrade_CHG03 Upgrade_CHG04 Upgrade_CHG05 Upgrade_CHG06
                ;-------------------------------
                ; Shield
		BlingUpgrades = Upgrade_CHS01 Upgrade_CHS02 Upgrade_CHS03 @Upgrade_CHS04 Upgrade_CHS05
                ;-------------------------------
                ; Boots
		BlingUpgrades = Upgrade_CHB01 Upgrade_CHB02 Upgrade_CHB03 Upgrade_CHB04 Upgrade_CHB05 Upgrade_CHB06
                ;-------------------------------
                ; Body
		BlingUpgrades = Upgrade_CHBOD01 Upgrade_CHBOD02 Upgrade_CHBOD03 Upgrade_CHBOD04 Upgrade_CHBOD05

		DefaultPrimaryColor	  =	R:255 G:255	B:255
		DefaultSecondaryColor =	R:255 G:255	B:255
		DefaultTertiaryColor  =	R:255 G:255	B:255
		Attribute
			GroupName			= CreateAHero_ArmorAttribute
			MinValueUpgrade		= Upgrade_ArmorAttribute05
			MaxValueUpgrade		= Upgrade_ArmorAttribute20
			DefaultValueUpgrade	= Upgrade_ArmorAttribute16
		End
		Attribute
			GroupName			= CreateAHero_DamageMultAttribute
			MinValueUpgrade		= Upgrade_DamageMultAttribute04
			MaxValueUpgrade		= Upgrade_DamageMultAttribute17
			DefaultValueUpgrade	= Upgrade_DamageMultAttribute12
		End
		Attribute
			GroupName			= CreateAHero_HealthMultAttribute
			MinValueUpgrade		= Upgrade_HealthMultAttribute06
			MaxValueUpgrade		= Upgrade_HealthMultAttribute18
			DefaultValueUpgrade	= Upgrade_HealthMultAttribute12
		End
		Attribute
			GroupName			= CreateAHero_AutoHealAttribute
			MinValueUpgrade		= Upgrade_AutoHealAttribute05
			MaxValueUpgrade		= Upgrade_AutoHealAttribute18
			DefaultValueUpgrade	= Upgrade_AutoHealAttribute06
		End
		Attribute
			GroupName			= CreateAHero_VisionAttribute
			MinValueUpgrade		= Upgrade_VisionAttribute04
			MaxValueUpgrade		= Upgrade_VisionAttribute14
			DefaultValueUpgrade	= Upgrade_VisionAttribute08
		End
		// Camera used to view object with in create	a hero
		ViewInfo
				FarPitch  = 0.0
		        FarZoom   = 0.2
		        FarFloor  = 15
		        FarDist   = 70
		        FarShift  = 20
		        NearPitch = 0.1
		        NearZoom  = 0.21
		        NearFloor = 40
		        NearDist  = 15
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
			MapLocation	= 2
		End
	End
End
