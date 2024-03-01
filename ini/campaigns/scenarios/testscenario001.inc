//-------------------------------------------------------------------------------------------------
// Scenario Name:		Capital Assault - Freeform
// Scenario Description:	This is a freeform game of the Capital Assault mode
// Game Type:			Capital Assault
// Win Conditions:		Player must conquer the capital of each opposing team member
// Unavailable Territories:	None
// # of Players:		2-6
//-------------------------------------------------------------------------------------------------

LivingWorldCampaign WOTRTestScenario001

	IsEvilCampaign = No
	
	;////////////// RTS Settings /////////////
	#include "..\Common\LivingWorldDefaultRTSSettings.inc"

	Scenario
		DisplayName 		= LWScenario:WOTRScenarioTest001
		DisplayDescription 	= LWScenario:WOTRScenarioTest001Description
		DisplayGameType 	= LWScenario:WOTRGameType001
		DisplayObjectives 	= LWScenario:WOTRObjectives001
		DisplayFiction 		= LWScenario:WOTRScenarioFiction001
		DisplayVictoriousText	= LWScenario:WOTRCapitalAssaultWin001
		DisplayDefeatedText	= LWScenario:WOTRCapitalAssaultLose001

		RegionCampaign = PaperMapCampaign_Test

		MaxPlayers = 2
		
		DefaultStartSpots = Swanfleet Dunland
		
		HistoricalScenario = Yes
		
           	OwnershipSet 
                    Regions = Swanfleet The_Angle
                    StartRegion = Swanfleet
           	End

           	OwnershipSet 
                    Regions = Dunland Gap_Of_Rohan
                    StartRegion = Dunland
           	End			
				
		PlayerDefeatCondition
			Teams = 1 2
			LoseIfCapitalLost = No
			NumControlledRegionsLessOrEqualTo = 0
		End
		
		TeamDefeatCondition
			Teams = 1 2
			NumControlledRegionsLessOrEqualTo = 0
		End
	End
	
	
	;//////////////////////////////////////////////////
	Act One
	;//////////////////////////////////////////////////

		;///////////////// Armies ////////////////
		#include "..\Common\LivingWorldDefaultArmies.inc"
	
	End
End