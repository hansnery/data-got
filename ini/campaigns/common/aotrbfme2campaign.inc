//-------------------------------------------------------------------------------------------------
// This file is meant to be included for those campaigns that share a common region list.
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
// Territory definitions
//-------------------------------------------------------------------------------------------------

;////////////////////////////
;// Fords of Bruinen
;////////////////////////////
Region Fords_Bruinen
	DisplayName				= LW:DisplayNameFordsofBruinen
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Fords of Bruinen"
	SkirmishStillImage		= WOR_Fords_Of_Bruinen
	SkirmishMusicTrack		= BaGood23
	SubObject				= FORDS_OF_BRUINE
	RegionPortrait			= MPFordsOfBruinen

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
	DefenseBonus			= 5
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Rivendell
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-566 Y:1109
	HeroArmySpot			= X:-566 Y:1109
	GarrisonArmySpot		= X:-566 Y:1109

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End

	RestrictBuildings
		Buildings		= Barracks
		NumberAllowed		= 2
	End
	
	RestrictBuildings
		Buildings		= Armory
		NumberAllowed		= 1
	End	
End

;////////////////////////////
;// Mission I: Rivendell
;////////////////////////////
Region Rivendell
	DisplayName				= LW:DisplayNameGoodCampaign1
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP SP GOOD RIVENDELL"
	SkirmishStillImage		= CampaignGood_Rivendell_LoadScreen
	SkirmishMusicTrack		= BaGood02
	SubObject				= RIVENDELL
	RegionPortrait			= MPRivendell

	ConnectsTo			=
		Connection
			Region		= High_Pass
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-455 Y:1099
	HeroArmySpot			= X:-455 Y:1099
	GarrisonArmySpot		= X:-455 Y:1099
	GarrisonArmySpot		= X:-498 Y:1037	

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	CreateAutoFort				= Yes	
End

;////////////////////////////
;// Mission II: High Pass
;////////////////////////////
Region High_Pass
	DisplayName				= LW:DisplayNameGoodCampaign2
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP SP GOOD HIGH PASS"
	SkirmishStillImage		= CampaignGood_HighPass_LoadScreen
	SkirmishMusicTrack		= BaGood04
	SubObject				= HIGH_PASS
	RegionPortrait			= MPHighPass

	ConnectsTo			=	
		Connection
			Region		= Mount_Gram
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-358 Y:1208
	HeroArmySpot			= X:-358 Y:1208
	GarrisonArmySpot		= X:-358 Y:1208

	CPLimit				= 1000
	AllyCPLimit			= 500

	CreateAutoFort				= Yes
End

;////////////////////////////
;// Mission III: Mount Gram
;////////////////////////////
Region Mount_Gram
	DisplayName				= LW:DisplayNameGoodCampaign3
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP SP GOOD ETTENMOORS"
	SkirmishStillImage		= CampaignGood_Ettenmoors_LoadScreen
	SkirmishMusicTrack		= SX_BFME2_Ba1Goblin01
	SubObject				= MOUNT_GRAM
	RegionPortrait			= MPEttenmoors

	ConnectsTo			=
		Connection
			Region		= Ered_Luin
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-722 Y:1424
	HeroArmySpot			= X:-722 Y:1424
	GarrisonArmySpot		= X:-722 Y:1424

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	CreateAutoFort				= Yes
End

;////////////////////////////
;// Mission IV: Blue Mountains
;////////////////////////////
Region Ered_Luin
	DisplayName				= LW:DisplayNameGoodCampaign4
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP SP GOOD BLUE MOUNTAINS"
	SkirmishStillImage		= CampaignGood_BlueMountains_LoadScreen
	SkirmishMusicTrack		= SX_BFME2_Ba1Dwarf02
	SubObject				= ERED_LUIN
	RegionPortrait			= MPEredLuin

	ConnectsTo			=
		Connection
			Region		= Grey_Havens
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1984 Y:1364
	HeroArmySpot			= X:-1984 Y:1364
	GarrisonArmySpot		= X:-1984 Y:1364

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	CreateAutoFort				= Yes
End

;////////////////////////////
;// Mission V: Grey Havens
;////////////////////////////
Region Grey_Havens
	DisplayName				= LW:DisplayNameGoodCampaign5
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP SP GOOD GREY HAVENS"
	SkirmishStillImage		= CampaignGood_GreyHavens_LoadScreen
	SkirmishMusicTrack		= BaGood08
	SubObject				= GREY_HAVENS
	RegionPortrait			= MPGreyHavens

	ConnectsTo			=
		Connection
			Region		= Esgaroth
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
;// Mission VI: Celduin
;////////////////////////////
Region Esgaroth
	DisplayName				= LW:DisplayNameGoodCampaign6
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP SP GOOD CELDUIN"
	SkirmishStillImage		= CampaignGood_Celduin_LoadScreen
	SkirmishMusicTrack		= SX_BFME2_Ex1Good01
	SubObject				= ESGAROTH
	RegionPortrait			= MPEsgaroth

	ConnectsTo			=
		Connection
			Region		= Erebor
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:400 Y:1200
	HeroArmySpot			= X:400 Y:1200
	GarrisonArmySpot		= X:400 Y:1200

	CPLimit				= 1000
	AllyCPLimit			= 500

	CreateAutoFort				= Yes
End

;////////////////////////////
;// Mission VII: Erebor
;////////////////////////////
Region Erebor
	DisplayName				= LW:DisplayNameGoodCampaign7
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP SP GOOD EREBOR"
	SkirmishStillImage		= CampaignGood_Erebor_LoadScreen
	SkirmishMusicTrack		= SX_BFME2_Ex1Dwarf01
	SubObject				= EREBOR
	RegionPortrait			= MPErebor

	ConnectsTo			=
		Connection
			Region		= Dol_Guldur
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:385 Y:1360
	HeroArmySpot			= X:472 Y:1402
	HeroArmySpot			= X:462 Y:1356
	HeroArmySpot			= X:457 Y:1310
	HeroArmySpot			= X:346 Y:1375
	GarrisonArmySpot		= X:295 Y:1322
	;BuildingSpot			= X:385 Y:1360

	CPLimit				= 1000
	AllyCPLimit			= 500

	CreateAutoFort				= Yes
End

;////////////////////////////
;// Mission VIII: Dol Guldur
;////////////////////////////
Region Dol_Guldur
	DisplayName				= LW:DisplayNameGoodCampaign8
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP SP GOOD DOL GULDUR"
	SkirmishStillImage		= CampaignGood_DulGoldur_LoadScreen
	SkirmishMusicTrack		= SX_BFME2_Ba1Goblin02
	SubObject				= DOL_GULDUR
	RegionPortrait			= MPDolGuldur

	CustomCenterPoint		= Yes
	CenterPoint				= X:-32 Y:763

    HeroArmySpot			= X:43 Y:695
    HeroArmySpot			= X:-103 Y:730
    HeroArmySpot			= X:-84 Y:827    
    HeroArmySpot			= X:22 Y:785
    GarrisonArmySpot		= X:-32 Y:763

    CPLimit					= 1000
    AllyCPLimit				= 500
        
	CreateAutoFort				= Yes
End