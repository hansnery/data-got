
//-------------------------------------------------------------------------------------------------
// Victory Types usable by scenarios
// Created by: JHamel based on contents of old WOTRScenario001 through WOTRScenario044
//-------------------------------------------------------------------------------------------------

// VERY,VERY, VERY important since the MPRules uses hardcoded values the order that these load in must match them!!!!

LivingWorldVictoryType		
	DisplayGameType 	= LWScenario:WOTRGameType001		// Capital Assault, pulled from WOTRScenario001 through 011
									// Also 042 and 043 (War in the North and South)
									
	DisplayObjectives 	= LWScenario:WOTRObjectives001
	DisplayVictoriousText	= LWScenario:WOTRCapitalAssaultWin001
	DisplayDefeatedText	= LWScenario:WOTRCapitalAssaultLose001
		
	PlayerDefeatCondition
		Teams = 1 2
		LoseIfCapitalLost = Yes
		NumControlledRegionsLessOrEqualTo = 0
	End
		
	TeamDefeatCondition
		Teams = 1 2
		NumControlledRegionsLessOrEqualTo = 0
	End
End