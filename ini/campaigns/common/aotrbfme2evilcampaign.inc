//-------------------------------------------------------------------------------------------------
// This file is meant to be included for those campaigns that share a common region list.
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
// Territory definitions
//-------------------------------------------------------------------------------------------------

;////////////////////////////
;// Dol Guldur
;////////////////////////////
Region Dol_Guldur
	DisplayName				= LW:DisplayNameDolGuldur
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Dol Guldur"
	SkirmishStillImage		= WOR_Dol_Guldur
	SkirmishMusicTrack		= BaGood23
	SubObject				= DOL_GULDUR
	RegionPortrait			= MPDolGuldur

	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 		= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo				=
        Connection
			Region = Lothlorien
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-32 Y:763
    HeroArmySpot			= X:-32 Y:763
    GarrisonArmySpot		= X:-32 Y:763

    CPLimit					= 1000
    AllyCPLimit				= 500
End

;////////////////////////////
;// Mission I: Lothlorien
;////////////////////////////
Region Lothlorien
	DisplayName				= LW:DisplayNameEvilCampaign1
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP SP EVIL LORIEN"
	SkirmishStillImage		= CampaignEvil_Lorien_LoadScreen
	SkirmishMusicTrack		= SX_BFME2_Ba1Goblin01
	SubObject				= LOTHLORIEN
	RegionPortrait			= MPLothlorien

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 5
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 5
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Grey_Havens
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-405 Y:710
	HeroArmySpot			= X:-405 Y:710
	GarrisonArmySpot		= X:-405 Y:710

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	CreateAutoFort				= Yes
End

;////////////////////////////
;// Mission II: Grey Havens
;////////////////////////////
Region Grey_Havens
	DisplayName				= LW:DisplayNameEvilCampaign2
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP SP EVIL GREY HAVENS"
	SkirmishStillImage		= CampaignEvil_GreyHavens_LoadScreen
	SkirmishMusicTrack		= R_BbEvil105
	SubObject				= GREY_HAVENS
	RegionPortrait			= MPGreyHavens

	ConnectsTo			=
		Connection
			Region		= The_Shire
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1882 Y:1117
	HeroArmySpot			= X:-1964 Y:1073
	GarrisonArmySpot		= X:-1964 Y:1073

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	CreateAutoFort				= Yes
End

;////////////////////////////
;// Mission III: The Shire
;////////////////////////////
Region The_Shire
	DisplayName				= LW:DisplayNameEvilCampaign3
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP SP EVIL SHIRE"
	SkirmishStillImage		= CampaignEvil_Shire_LoadScreen
	SkirmishMusicTrack		= SX_BFME2_Ba1Goblin02
	SubObject				= THE_SHIRE
	RegionPortrait			= MPShire

	ConnectsTo			=
		Connection
			Region		= Fornost
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1466 Y:1094
	HeroArmySpot			= X:-1466 Y:1094
	GarrisonArmySpot		= X:-1466 Y:1094

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	CreateAutoFort				= Yes
End

;////////////////////////////
;// Mission IV: Fornost
;////////////////////////////
Region Fornost
	DisplayName				= LW:DisplayNameEvilCampaign4
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP SP EVIL FORNOST"
	SkirmishStillImage		= CampaignEvil_Fornost_LoadScreen
	SkirmishMusicTrack		= SX_BFME2_Ba1Goblin01
	SubObject				= FORNOST
	RegionPortrait			= MPDeadmansDike

	ConnectsTo			=
		Connection
			Region		= Mirkwood
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1238 Y:1249
	HeroArmySpot			= X:-1238 Y:1249
	GarrisonArmySpot		= X:-1238 Y:1249

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	CreateAutoFort				= Yes
End

;////////////////////////////
;// Mission V: Mirkwood
;////////////////////////////
Region Mirkwood
	DisplayName				= LW:DisplayNameEvilCampaign5
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP SP EVIL Mirkwood"
	SkirmishStillImage		= CampaignEvil_Mirkwood_LoadScreen
	SkirmishMusicTrack		= SX_BFME2_Ex1Goblin02
	SubObject				= MIRKWOOD
	RegionPortrait			= MPMirkwood

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Withered_Heath
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:149 Y:994
	HeroArmySpot			= X:149 Y:994
	GarrisonArmySpot		= X:149 Y:994

	CPLimit					= 1000
	AllyCPLimit				= 500

	CreateAutoFort				= Yes
End

;////////////////////////////
;// Mission VI: Withered Heath
;////////////////////////////
Region Withered_Heath
	DisplayName				= LW:DisplayNameEvilCampaign6
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP SP EVIL WITHERED HEATH"
	SkirmishStillImage		= CampaignEvil_WitheredHeath_LoadScreen
	SkirmishMusicTrack		= R_BbEvil108
	SubObject				= WITHERED_HEATH
	RegionPortrait			= MPWitheredHeath

	ConnectsTo			=
		Connection
			Region		= Erebor
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:357 Y:1519
	HeroArmySpot			= X:357 Y:1519
	GarrisonArmySpot		= X:357 Y:1519

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	CreateAutoFort				= Yes
End

;////////////////////////////
;// Mission VII: Erebor
;////////////////////////////
Region Erebor
	DisplayName				= LW:DisplayNameEvilCampaign7
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP SP EVIL EREBOR"
	SkirmishStillImage		= CampaignEvil_Erebor_LoadScreen
	SkirmishMusicTrack		= SX-EvilExplore1
	SubObject				= EREBOR
	RegionPortrait			= MPErebor

	ConnectsTo			=
		Connection
			Region		= Rivendell
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:385 Y:1360
	HeroArmySpot			= X:385 Y:1360
	GarrisonArmySpot		= X:385 Y:1360

	CPLimit				= 1000
	AllyCPLimit			= 500

	CreateAutoFort				= Yes
End

;////////////////////////////
;// Mission VIII: Rivendell
;////////////////////////////
Region Rivendell
	DisplayName				= LW:DisplayNameEvilCampaign8
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP SP EVIL RIVENDELL"
	SkirmishStillImage		= CampaignEvil_Rivendell_LoadScreen
	SkirmishMusicTrack		= SX-EvilExplore5
	SubObject				= RIVENDELL
	RegionPortrait			= MPRivendell

	CustomCenterPoint		= Yes
	CenterPoint				= X:-455 Y:1099
	HeroArmySpot			= X:-455 Y:1099
	GarrisonArmySpot		= X:-455 Y:1099

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	CreateAutoFort				= Yes	
End