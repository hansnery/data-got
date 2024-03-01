//-------------------------------------------------------------------------------------------------
// Scenario Name:		Capital Assault - Freeform
// Scenario Description:	This is a freeform game of the Capital Assault mode
// Game Type:			Capital Assault
// Win Conditions:		Player must conquer the capital of each opposing team member
// Unavailable Territories:	None
// # of Players:		2-6
//-------------------------------------------------------------------------------------------------

LivingWorldCampaign WOTRAOTRWarDwarfOrcScenario

	IsEvilCampaign = No
	
	;////////////// RTS Settings /////////////
	#include "..\Common\LivingWorldDefaultRTSSettings.inc"

	Scenario
		DisplayName 		= LWScenario:AOTRScenarioWarDwarfOrc
		DisplayDescription 	= LWScenario:AOTRScenarioWarDwarfOrcDescription
		DisplayGameType 	= LWScenario:WOTRGameType002
		DisplayObjectives 	= LWScenario:WOTRObjectives002
		DisplayFiction 		= LWScenario:WOTRScenarioFiction004
		DisplayVictoriousText	= LWScenario:WOTRCapitalAssaultWin001
		DisplayDefeatedText	= LWScenario:WOTRCapitalAssaultLose001

		RegionCampaign = WOTRAOTRWarDwarfOrcScenario

		MinPlayers = 2
		MaxPlayers = 2
		
		DisabledFactions = FactionMen FactionRohan FactionIsengard FactionAngmar FactionMirkwood FactionArnor FactionElves FactionGuldur FactionMordor
		DefaultStartSpots = Ironfoot_Halls Moria
		
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
		    Regions = Ironfoot_Halls
		    Teams = 1
		End

		StartingRestriction
		    Factions = FactionWild
		    Regions = Moria
		    Teams = 2
		End
		
		OwnershipSet 
            Regions = Ironfoot_Halls Dimrill_Dale Tharbad Vales_Celduin Dunfearn Dunland Iron_Foothills Iron_Hills Withered_Heath
            StartRegion = Ironfoot_Halls   
				
				SpawnBuildings
                    Buildings = LW_FORT
                    Region = Dunfearn
                End		
				SpawnBuildings
                    Buildings = LW_FORT
                    Region = Withered_Heath
                End	
				SpawnBuildings
                    Buildings = LW_FARM
                    Region = Vales_Celduin
                End	
				SpawnBuildings
                    Buildings = LW_FARM
                    Region = Iron_Hills
                End	
				SpawnBuildings
                    Buildings = LW_BARRACKS
                    Region = Dunland
                End	
				SpawnBuildings
                    Buildings = LW_ARMORY
                    Region = Iron_Foothills
                End
				
		        SpawnArmies
                    Armies = HeroArmy1
                    Region = Dunfearn
                End	
		        SpawnArmies
                    Armies = HeroArmy2
                    Region = Vales_Celduin
                End					
                SpawnArmies
                    Armies = HeroArmy3
                    Region = Ironfoot_Halls
                End	
                SpawnArmies
                    Armies = GarrisonArmy1
                    Region = Dimrill_Dale
                End	
                SpawnArmies
                    Armies = GarrisonArmy2
                    Region = Dunland
                End	
                SpawnArmies
                    Armies = GarrisonArmy3 GarrisonArmy4
                    Region = Vales_Celduin
                End	
                SpawnArmies
                    Armies = GarrisonArmy5
                    Region = Dunland
                End	
                SpawnArmies
                    Armies = GarrisonArmy6
                    Region = Iron_Foothills
                End	
                SpawnArmies
                    Armies = GarrisonArmy7
                    Region = Withered_Heath
                End	
				
        End
		
		OwnershipSet 
            Regions = Moria Caradhras High_Pass Goblin_Town Mount_Gram Gundabad Grey_Mountains Carn_Dum Angmar
            StartRegion = Moria   
			
				SpawnBuildings
                    Buildings = LW_FORT
                    Region = Moria 
                End	
				SpawnBuildings
                    Buildings = LW_FORT
                    Region = Goblin_Town
                End		
				SpawnBuildings
                    Buildings = LW_FARM
                    Region = Angmar
                End	
				SpawnBuildings
                    Buildings = LW_FARM
                    Region = High_Pass
                End	
				SpawnBuildings
                    Buildings = LW_BARRACKS
                    Region = Caradhras
                End	
				SpawnBuildings
                    Buildings = LW_ARMORY
                    Region = Carn_Dum
                End		
				
		        SpawnArmies
                    Armies = HeroArmy1
                    Region = Gundabad
                End	
		        SpawnArmies
                    Armies = HeroArmy2
                    Region = Goblin_Town
                End					
                SpawnArmies
                    Armies = HeroArmy3 GarrisonArmy1 GarrisonArmy2
                    Region = Moria
                End			
                SpawnArmies
                    Armies = GarrisonArmy3
                    Region = Grey_Mountains
                End	
                SpawnArmies
                    Armies = GarrisonArmy4
                    Region = Carn_Dum
                End	
                SpawnArmies
                    Armies = GarrisonArmy5
                    Region = High_Pass
                End					
        End
	
	End
	;//////////////////////////////////////////////////
	Act One
	;//////////////////////////////////////////////////
//-------------------------------------------------------------------------------------------------
// Dwarves
//-------------------------------------------------------------------------------------------------
SpawnArmy
	ScriptingName = HeroArmy1
	SpawnForTemplates = PlayerDwarves
	HeroTemplateName = YoungThorin_WOTR
	PlayerArmy = YoungThorinPlayerArmy
	Icon = DwarfHeroArmyIcon
	Banner = BannerDwarves
End

SpawnArmy
	ScriptingName = HeroArmy2
	SpawnForTemplates = PlayerDwarves
	HeroTemplateName = DwarvenThrain_WOTR
	PlayerArmy = DwarvenThrainPlayerArmy
	Icon = DwarfHeroArmyIcon
	Banner = BannerDwarves
End

SpawnArmy
	ScriptingName = HeroArmy3
	SpawnForTemplates = PlayerDwarves
	HeroTemplateName = YoungDain_WOTR
	PlayerArmy = YoungDainPlayerArmy
	Icon = DwarfHeroArmyIcon
	Banner = BannerDwarves
End

SpawnArmy
	ScriptingName = GarrisonArmy1
	SpawnForTemplates = PlayerDwarves
	PlayerArmy = DwarvenThrorArmy
	Icon = DwarfArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy2
	SpawnForTemplates = PlayerDwarves
	PlayerArmy = YoungDwalinArmy
	Icon = DwarfArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy3
	SpawnForTemplates = PlayerDwarves
	PlayerArmy = YoungBalinArmy
	Icon = DwarfArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy4
	SpawnForTemplates = PlayerDwarves
	PlayerArmy = Thrain_StartingArmy
	Icon = DwarfArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy5
	SpawnForTemplates = PlayerDwarves
	PlayerArmy = DunlandDwarvenArmy
	Icon = DwarfArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy6
	SpawnForTemplates = PlayerDwarves
	PlayerArmy = IronHillDwarvenArmy
	Icon = DwarfArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy7
	SpawnForTemplates = PlayerDwarves
	PlayerArmy = WitheredDwarvenArmy
	Icon = DwarfArmyIcon
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
	HeroTemplateName = WildTrueAzog_WOTR
	PlayerArmy = TrueAzogPlayerArmy
	Icon = WildHeroArmyIcon
	Banner = BannerWild
End

SpawnArmy
	ScriptingName = GarrisonArmy1
	SpawnForTemplates = PlayerWild
	PlayerArmy = CorruptedWild_StartingArmy
	Icon = WildArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy2
	SpawnForTemplates = PlayerWild
	PlayerArmy = PlunderersPlayerArmy
	Icon = WildArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy3
	SpawnForTemplates = PlayerWild
	PlayerArmy = WildGreyMountainsArmy
	Icon = WildArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy4
	SpawnForTemplates = PlayerWild
	PlayerArmy = CarnDumArmy
	Icon = WildArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy5
	SpawnForTemplates = PlayerWild
	PlayerArmy = HighPassDOArmy
	Icon = WildArmyIcon
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