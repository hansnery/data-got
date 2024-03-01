//-------------------------------------------------------------------------------------------------
// Scenario Name:		6 Players
// Scenario Description:	This is a 6 player game with preset starting locations (Mordor Iron_Hills Rohan Lothlorien Cardolan Arnor)
// Unavailable Territories:	None
// # of Players:		6
//-------------------------------------------------------------------------------------------------

LivingWorldCampaign WOTRScenario002

	IsEvilCampaign = No
	
	;////////////// RTS Settings /////////////
	#include "..\Common\LivingWorldDefaultRTSSettings.inc"

	Scenario
		DisplayName 		= LWScenario:WOTRWarInTheNorth
		DisplayDescription 	= LWScenario:WOTRWarInTheNorthDescription
		DisplayGameType 	= LWScenario:WOTRGameType001
		DisplayObjectives 	= LWScenario:WOTRObjectives001
		DisplayFiction 		= LWScenario:WOTRScenarioFiction001
		DisplayVictoriousText	= LWScenario:WOTRCapitalAssaultWin001
		DisplayDefeatedText	= LWScenario:WOTRCapitalAssaultLose001

		RegionCampaign = WarInTheNorth

		MaxPlayers = 6
				
		DisabledFactions = FactionMen FactionElves FactionIsengard FactionMordor
		DefaultStartSpots = Erebor_Dale Mount_Gundabad
		
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
		    Regions = Erebor_Dale
		    Teams = 1 2
		End
		
		StartingRestriction
		    Factions = FactionWild
		    Regions = Mount_Gundabad
		    Teams = 1 2
		End
		
		OwnershipSet 
            Regions = Carnen Erebor_Dale Esgaroth Iron_Hills
            StartRegion = Erebor_Dale
		
			SpawnArmies
                Armies = HeroArmy2
                Region = Iron_Hills
            End

            SpawnArmies
                Armies = HeroArmy3
                Region = Esgaroth
            End
			
            SpawnBuildings
                Buildings = LW_BARRACKS
                Region = Erebor_Dale
            End

            SpawnBuildings
                Buildings = LW_BARRACKS
                Region = Iron_Hills
            End

            SpawnBuildings
                Buildings = LW_FARM
                Region = Esgaroth
            End			
		
        End
 
        OwnershipSet
            Regions = Grey_Mountains Eastern_Wastes Mount_Gundabad Withered_Heath
            StartRegion = Mount_Gundabad

			SpawnArmies
                Armies = HeroArmy1
                Region = Eastern_Wastes
            End

            SpawnArmies
                Armies = HeroArmy2
                Region = Withered_Heath
            End
			
		    SpawnBuildings
                Buildings = LW_FORT
                Region = Mount_Gundabad
            End
			
            SpawnBuildings
                Buildings = LW_BARRACKS
                Region = Mount_Gundabad
            End

            SpawnBuildings
                Buildings = LW_FARM
                Region = Withered_Heath
            End
			
        End
	End
	
	
	;//////////////////////////////////////////////////
	Act One
	;//////////////////////////////////////////////////

		;///////////////// Armies ////////////////
		#include "..\Common\LivingWorldDefaultArmies.inc"


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