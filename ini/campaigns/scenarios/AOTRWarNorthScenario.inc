//-------------------------------------------------------------------------------------------------
// Scenario Name:		Capital Assault - Freeform
// Scenario Description:	This is a freeform game of the Capital Assault mode
// Game Type:			Capital Assault
// Win Conditions:		Player must conquer the capital of each opposing team member
// Unavailable Territories:	None
// # of Players:		2-6
//-------------------------------------------------------------------------------------------------

LivingWorldCampaign WOTRAOTRWarNorthScenario

	IsEvilCampaign = No
	
	;////////////// RTS Settings /////////////
	#include "..\Common\LivingWorldDefaultRTSSettings.inc"

	Scenario
		DisplayName 		= LWScenario:AOTRScenarioWarNorth
		DisplayDescription 	= LWScenario:AOTRScenarioWarNorthDescription
		DisplayGameType 	= LWScenario:WOTRGameType002
		DisplayObjectives 	= LWScenario:WOTRObjectives002
		DisplayFiction 		= LWScenario:WOTRScenarioFiction004
		DisplayVictoriousText	= LWScenario:WOTRCapitalAssaultWin001
		DisplayDefeatedText	= LWScenario:WOTRCapitalAssaultLose001

		RegionCampaign = WOTRAOTRWarNorthScenario

		MinPlayers = 6
		MaxPlayers = 6
		
		DisabledFactions = FactionMen FactionRohan FactionIsengard FactionAngmar FactionMirkwood		
		DefaultStartSpots = Erebor Rivendell Gundabad Dol_Guldur Lothlorien Rhun
		
		HistoricalScenario = Yes
		
		PlayerDefeatCondition
			Teams = 1 2
			LoseIfCapitalLost = No
			NumControlledRegionsLessOrEqualTo = 0
		End
		
		TeamDefeatCondition
			Teams = 1 2
			NumControlledRegionsLessOrEqualTo = 0
		End
		
		StartingRestriction
		    Factions = FactionDwarves
		    Regions = Erebor
		    Teams = 1
		End

		StartingRestriction
		    Factions = FactionArnor
		    Regions = Rivendell
		    Teams = 1
		End
		
		StartingRestriction
		    Factions = FactionElves
		    Regions = Lothlorien
		    Teams = 1
		End
		
		StartingRestriction
		    Factions = FactionWild
		    Regions = Gundabad
		    Teams = 2
		End
		
		StartingRestriction
		    Factions = FactionMordor
		    Regions = Rhun
		    Teams = 2
		End
		
		StartingRestriction
		    Factions = FactionGuldur
		    Regions = Dol_Guldur
		    Teams = 2
		End

		OwnershipSet 
            Regions = Erebor Esgaroth Ironfoot_Halls Iron_Hills Targul
            StartRegion = Erebor           		
					
                SpawnArmies
                    Armies = HeroArmy1 GarrisonArmy1
                    Region = Erebor
                End	
				SpawnArmies
                    Armies = HeroArmy2 GarrisonArmy2
                    Region = Esgaroth
                End	
                SpawnArmies
                    Armies = HeroArmy3 GarrisonArmy3
                    Region = Ironfoot_Halls
                End	
				SpawnBuildings
                    Buildings = LW_BARRACKS
                    Region = Iron_Hills
                End
				SpawnBuildings
                    Buildings = LW_FARM
                    Region = Targul
                End					
        End

		OwnershipSet 
            Regions = Lothlorien Nan_Celebrant Taur_Hith Halls_Elvenking Hall_Oak Forest_Gate
            StartRegion = Lothlorien           		
					
                SpawnArmies
                    Armies = HeroArmy1
                    Region = Halls_Elvenking
                End	
				SpawnArmies
                    Armies = HeroArmy2 HeroArmy3 GarrisonArmy1
                    Region = Lothlorien
                End
				SpawnArmies
                    Armies = GarrisonArmy2
                    Region = Hall_Oak
                End	
				SpawnBuildings
                    Buildings = LW_BARRACKS
                    Region = Forest_Gate
                End
				SpawnBuildings
                    Buildings = LW_FARM
                    Region = Taur_Hith
                End					
        End

		OwnershipSet 
            Regions = Rivendell Fords_Bruinen The_Angle Hollin
            StartRegion = Rivendell          		
					
                SpawnArmies
                    Armies = HeroArmy2 GarrisonArmy1
                    Region = The_Angle
                End	
				SpawnArmies
                    Armies = HeroArmy1 HeroArmy3 GarrisonArmy2
                    Region = Rivendell
                End	
				SpawnBuildings
                    Buildings = LW_BARRACKS
                    Region = Hollin
                End
				SpawnBuildings
                    Buildings = LW_FARM
                    Region = Fords_Bruinen
                End					
        End

		OwnershipSet 
            Regions = Rhun Kunin Surubeki Steppes_Sarakhax
            StartRegion = Rhun          		
					
                SpawnArmies
                    Armies = HeroArmy1 GarrisonArmy1
                    Region = Surubeki
                End	
				SpawnArmies
                    Armies = HeroArmy2 GarrisonArmy2
                    Region = Rhun
                End	
				SpawnArmies
                    Armies = HeroArmy3 GarrisonArmy3
                    Region = Kunin
                End	
				SpawnBuildings
                    Buildings = LW_FORT
                    Region = Kunin
                End
				SpawnBuildings
                    Buildings = LW_BARRACKS
                    Region = Surubeki
                End
				SpawnBuildings
                    Buildings = LW_FARM
                    Region = Rhun
                End					
        End
		
		OwnershipSet 
            Regions = Dol_Guldur Emyn_Muil Old_Brown_Lands Taur_En_Ungolath
            StartRegion = Dol_Guldur          		
					
                SpawnArmies
                    Armies = HeroArmy3 GarrisonArmy3
                    Region = Emyn_Muil
                End	
				SpawnArmies
                    Armies = HeroArmy1 GarrisonArmy1
                    Region = Dol_Guldur
                End
				SpawnArmies
                    Armies = HeroArmy2 GarrisonArmy2
                    Region = Taur_En_Ungolath
                End
				SpawnBuildings
                    Buildings = LW_FORT
                    Region = Emyn_Muil
                End
				SpawnBuildings
                    Buildings = LW_BARRACKS
                    Region = Taur_En_Ungolath
                End
				SpawnBuildings
                    Buildings = LW_FARM
                    Region = Old_Brown_Lands
                End				
        End
		
		OwnershipSet 
            Regions = Gundabad Moria Goblin_Town Grey_Mountains Carn_Dum Angmar
            StartRegion = Gundabad        		
					
                SpawnArmies
                    Armies = HeroArmy1 GarrisonArmy1
                    Region = Moria
                End	
				SpawnArmies
                    Armies = HeroArmy2 GarrisonArmy3
                    Region = Gundabad
                End	
				SpawnArmies
                    Armies = HeroArmy3 GarrisonArmy2
                    Region = Goblin_Town
                End	
				SpawnBuildings
                    Buildings = LW_FORT
                    Region = Moria
                End
				SpawnBuildings
                    Buildings = LW_BARRACKS
                    Region = Goblin_Town
                End
				SpawnBuildings
                    Buildings = LW_BARRACKS
                    Region = Angmar
                End
				SpawnBuildings
                    Buildings = LW_FARM
                    Region = Grey_Mountains
                End
				SpawnBuildings
                    Buildings = LW_FARM
                    Region = Carn_Dum
                End						
        End
	End
	
	;//////////////////////////////////////////////////
	Act One
	;//////////////////////////////////////////////////

//-------------------------------------------------------------------------------------------------
// Lothlorien
//-------------------------------------------------------------------------------------------------

SpawnArmy
	ScriptingName = HeroArmy1
	SpawnForTemplates = PlayerElves
	HeroTemplateName = MirkwoodThranduil_NCS
	PlayerArmy = ThranduilNCSPlayerArmy
	Icon = MirkwoodHeroArmyIcon
	Banner = BannerMirkwood
End

SpawnArmy
	ScriptingName = HeroArmy2
	SpawnForTemplates = PlayerElves
	HeroTemplateName = ElvenHaldir
	PlayerArmy = HaldirPlayerArmy
	Icon = ElfHeroArmyIcon
	Banner = BannerElves
End

SpawnArmy
	ScriptingName = HeroArmy3
	SpawnForTemplates = PlayerElves
	HeroTemplateName = ElvenRumil
	PlayerArmy = RumilPlayerArmy
	Icon = ElfHeroArmyIcon
	Banner = BannerElves
End

SpawnArmy
	ScriptingName = GarrisonArmy1
	SpawnForTemplates = PlayerElves
	PlayerArmy = Elven_StartingArmy
	Icon = ElfArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy2
	SpawnForTemplates = PlayerElves
	PlayerArmy = Greenwood_StartingArmy
	Icon = MirkwoodArmyIcon
End
//-------------------------------------------------------------------------------------------------
// Dwarves
//-------------------------------------------------------------------------------------------------

SpawnArmy
	ScriptingName = HeroArmy1
	SpawnForTemplates = PlayerDwarves
	HeroTemplateName = DwarvenKingDain_WOTR
	PlayerArmy = KingDainPlayerArmy
	Icon = DwarfHeroArmyIcon
	Banner = BannerDwarves
End

SpawnArmy
	ScriptingName = HeroArmy2
	SpawnForTemplates = PlayerDwarves
	HeroTemplateName = DwarvenBrand_WOTR
	PlayerArmy = BrandPlayerArmy
	Icon = DwarfHeroArmyIcon
	Banner = BannerDwarves
End

SpawnArmy
	ScriptingName = HeroArmy3
	SpawnForTemplates = PlayerDwarves
	HeroTemplateName = DwarvenThorinStonehelm_WOTR
	PlayerArmy = StonehelmPlayerArmy
	Icon = DwarfHeroArmyIcon
	Banner = BannerDwarves
End

SpawnArmy
	ScriptingName = GarrisonArmy1
	SpawnForTemplates = PlayerDwarves
	PlayerArmy = Dwarven_StartingArmy
	Icon = DwarfArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy2
	SpawnForTemplates = PlayerDwarves
	PlayerArmy = Dale_StartingArmy
	Icon = DwarfArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy3
	SpawnForTemplates = PlayerDwarves
	PlayerArmy = IH_StartingArmy
	Icon = DwarfArmyIcon
End

//-------------------------------------------------------------------------------------------------
// Rivendell
//-------------------------------------------------------------------------------------------------

SpawnArmy
	ScriptingName = HeroArmy1
	SpawnForTemplates = PlayerRivendell
	HeroTemplateName = ElvenGildor
	PlayerArmy = GildorPlayerArmy
	Icon = RivendellHeroArmyIcon
	Banner = BannerRivendell
End

SpawnArmy
	ScriptingName = HeroArmy2
	SpawnForTemplates = PlayerRivendell
	HeroTemplateName = ElvenAragorn
	PlayerArmy = StriderPlayerArmy
	Icon = RivendellHeroArmyIcon
	Banner = BannerRivendell
End

SpawnArmy
	ScriptingName = HeroArmy3
	SpawnForTemplates = PlayerRivendell
	HeroTemplateName = ElvenGlorfindel_WOTR
	PlayerArmy = GlorfindelPlayerArmy
	Icon = RivendellHeroArmyIcon
	Banner = BannerRivendell
End

SpawnArmy
	ScriptingName = GarrisonArmy1
	SpawnForTemplates = PlayerRivendell
	PlayerArmy = Rivendell_DunadanArmy
	Icon = RivendellArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy2
	SpawnForTemplates = PlayerRivendell
	PlayerArmy = Noldor_StartingArmy
	Icon = RivendellArmyIcon
End
//-------------------------------------------------------------------------------------------------
// Mordor
//-------------------------------------------------------------------------------------------------

SpawnArmy
	ScriptingName = HeroArmy1
	SpawnForTemplates = PlayerMordor
	HeroTemplateName = RhunBelokhZa_WOTR
	PlayerArmy = BelokhZaPlayerArmy
	Icon = MordorHeroArmyIcon
	Banner = BannerMordor
End

SpawnArmy
	ScriptingName = HeroArmy2
	SpawnForTemplates = PlayerMordor
	HeroTemplateName = RhunKhrenTak_WOTR
	PlayerArmy = KhrenTakPlayerArmy
	Icon = MordorHeroArmyIcon
	Banner = BannerMordor
End

SpawnArmy
	ScriptingName = HeroArmy3
	SpawnForTemplates = PlayerMordor
	HeroTemplateName = RhunVahRus_WOTR
	PlayerArmy = VahRusPlayerArmy
	Icon = MordorHeroArmyIcon
	Banner = BannerMordor
End

SpawnArmy
	ScriptingName = GarrisonArmy1
	SpawnForTemplates = PlayerMordor
	PlayerArmy = Serf_StartingArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy2
	SpawnForTemplates = PlayerMordor
	PlayerArmy = Easterling_StartingArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy3
	SpawnForTemplates = PlayerMordor
	PlayerArmy = Easterling_StartingArmy
	Icon = MordorArmyIcon
End

//-------------------------------------------------------------------------------------------------
// Wild
//-------------------------------------------------------------------------------------------------

SpawnArmy
	ScriptingName = HeroArmy1
	SpawnForTemplates = PlayerWild
	HeroTemplateName = WildMuzgash
	PlayerArmy = MuzgashPlayerArmy
	Icon = WildHeroArmyIcon
	Banner = BannerWild
End

SpawnArmy
	ScriptingName = HeroArmy2
	SpawnForTemplates = PlayerWild
	HeroTemplateName = WildUrshak
	PlayerArmy = UrshakPlayerArmy
	Icon = WildHeroArmyIcon
	Banner = BannerWild
End

SpawnArmy
	ScriptingName = HeroArmy3
	SpawnForTemplates = PlayerWild
	HeroTemplateName = WildGreatGoblin
	PlayerArmy = GreatGoblinPlayerArmy
	Icon = WildHeroArmyIcon
	Banner = BannerWild
End

SpawnArmy
	ScriptingName = GarrisonArmy1
	SpawnForTemplates = PlayerWild
	PlayerArmy = Moria_StartingArmy
	Icon = WildArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy2
	SpawnForTemplates = PlayerWild
	PlayerArmy = Moria_StartingArmy
	Icon = WildArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy3
	SpawnForTemplates = PlayerWild
	PlayerArmy = Gundabad_StartingArmy
	Icon = WildArmyIcon
End

//-------------------------------------------------------------------------------------------------
// Dol Guldur
//-------------------------------------------------------------------------------------------------

SpawnArmy
	ScriptingName = HeroArmy1
	SpawnForTemplates = PlayerGuldur
	HeroTemplateName = GuldurKrimpul_WOTR
	PlayerArmy = KrimpulPlayerArmy
	Icon = GuldurHeroArmyIcon
	Banner = BannerGuldur
End

SpawnArmy
	ScriptingName = HeroArmy2
	SpawnForTemplates = PlayerGuldur
	HeroTemplateName = GuldurSaenathra_WOTR
	PlayerArmy = SaenathraPlayerArmy
	Icon = GuldurHeroArmyIcon
	Banner = BannerGuldur
End

SpawnArmy
	ScriptingName = HeroArmy3
	SpawnForTemplates = PlayerGuldur
	HeroTemplateName = GuldurKhamul_WOTR
	PlayerArmy = GuldurKhamulPlayerArmy
	Icon = GuldurHeroArmyIcon
	Banner = BannerGuldur
End

SpawnArmy
	ScriptingName = GarrisonArmy1
	SpawnForTemplates = PlayerGuldur
	PlayerArmy = Guldur_StartingArmy
	Icon = GuldurArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy2
	SpawnForTemplates = PlayerGuldur
	PlayerArmy = Spider_StartingArmy
	Icon = GuldurArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy3
	SpawnForTemplates = PlayerGuldur
	PlayerArmy = EliteGuldur_StartingArmy
	Icon = GuldurArmyIcon
End

		;//////////////// Cities (Yes, this is a hack for mouse over movies.) ////////////////
		//#include "..\Common\LivingWorldCities.inc"

		;//////////////// VISUAL FLUFF ////////////////
		EyeTowerPoints
			LookPoint = X:436 Y:687 ; Rohan
			LookPoint = X:481 Y:287
			LookPoint = X:1179 Y:461
			LookPoint = X:947 Y:917
			LookPoint = X:172 Y:573 ; Isengard
			LookPoint = X:160 Y:560 ; Isengard
			LookPoint = X:175 Y:557 ; Isengard
			LookPoint = X:171 Y:348 ; Helm's Deep
			LookPoint = X:257 Y:535 ; Helm's Deep
			LookPoint = X:120 Y:350 ; Helm's Deep
			LookPoint = X:157 Y:420 ; Helm's Deep
		End		
	End

End