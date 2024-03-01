//---------------------------------------------------------------------------------------------
// Istari Wizard Class
//---------------------------------------------------------------------------------------------
CreateAHeroClass	
	NameTag		   = CreateAHero:ClassName_WightLord
	DescriptionTag = CreateAHero:ClassDesc_WightLord
	PowersDescTag  = CreateAHero:ClassPowersDesc_IstariWizard
	UpgradeName	   = Upgrade_CreateAHero_ClassWraith
	IconImage	   = uiwightlordcahbutton ;Archetype_Wizard
	SubClass	// Wanderer
		NameTag		   = CreateAHero:SubClassName_MoundDweller
		DescriptionTag = CreateAHero:SubClassDesc_MoundDweller
		IconImage	   = UPWightLords
		ButtonImage	   = UIWightLords
		// In UI it should be  		=  HICAHWanderer_wotr
		// DefaultFaction              = Isengard 
		UsableFactions              = Isengard Mordor Wild Angmar ;Arnor Rohan Mirkwood Guldur
		SpendableAttributePoints        = 25
		UpgradeName	   = Upgrade_CreateAHero_SubClass_0
		//-------------------------------
		// Awards common to all heros.
		#include "CreateAHeroSystemCommonStatsAndAwards.inc"
		// Class specific awards
		Awards = GuardianOfMiddleEarth
		//-------------------------------
		// Weapons
		BlingUpgrades		  =	@Upgrade_CHW07 Upgrade_CHW09	Upgrade_CHW10 Upgrade_CHW11 Upgrade_CHW40 
		//-------------------------------
                ;-------------------------------
                ; Head	Gear
		BlingUpgrades = Upgrade_CHH01 Upgrade_CHH02 Upgrade_CHH03 Upgrade_CHH04 Upgrade_CHH05 Upgrade_CHH06 Upgrade_CHH07 Upgrade_CHH08 Upgrade_CHH09 Upgrade_CHH10 Upgrade_CHH11 Upgrade_CHH12 Upgrade_CHH13 Upgrade_CHH14
                ;-------------------------------
                ; Shoulder Plates
		BlingUpgrades = Upgrade_CHSP01 @Upgrade_CHSP02 Upgrade_CHSP03 Upgrade_CHSP04 Upgrade_CHSP05 Upgrade_CHSP06 Upgrade_CHSP07 
                ;-------------------------------
                ; Gauntlets
		BlingUpgrades = Upgrade_CHG01 Upgrade_CHG02 Upgrade_CHG03 Upgrade_CHG04 
                ;-------------------------------
                ; Shield
		BlingUpgrades = Upgrade_CHS01 Upgrade_CHS02 Upgrade_CHS03 Upgrade_CHS04 Upgrade_CHS05 Upgrade_CHS06 
                ;-------------------------------
                ; Boots
		BlingUpgrades = Upgrade_CHB01 Upgrade_CHB02 Upgrade_CHB03 Upgrade_CHB06 Upgrade_CHB04 Upgrade_CHB05 Upgrade_CHB07 ;;Upgrade_CHB08 Upgrade_CHB09  
                ;-------------------------------
                ; Body
		BlingUpgrades = Upgrade_CHBOD01 Upgrade_CHBOD02 Upgrade_CHBOD03 Upgrade_CHBOD04 Upgrade_CHBOD05 Upgrade_CHBOD06  Upgrade_CHBOD07  Upgrade_CHBOD08  Upgrade_CHBOD09  Upgrade_CHBOD10  

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
		        FarFloor  = 15
		        FarDist   = 70.000
		        FarShift  = 20
		        NearPitch = 0.15
		        NearZoom  = 0.20
		        NearFloor = 30
		        NearDist  = 5
		        NearShift = 7
		        CloseUpPitch = -0.0150
		        CloseUpZoom  = 0.1800
		        CloseUpFloor = -25.000
		        CloseUpDist  = -26.000
		        CloseUpShift = 0.00
		        PortraitPitch = -0.020
		        PortraitZoom  = 0.150 ;0.2
		        PortraitFloor = -10.000
		        PortraitDist  = 34.00
		        PortraitShift = -1.00
		        //NormalCam = 0.50
			CameraAngle	= 0.0
			MapLocation	= 17
		End
	End

End
