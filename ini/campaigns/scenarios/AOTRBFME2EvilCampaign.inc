//-------------------------------------------------------------------------------------------------
// Scenario Name:		Capital Assault - Freeform
// Scenario Description:	This is a freeform game of the Capital Assault mode
// Game Type:			Capital Assault
// Win Conditions:		Player must conquer the capital of each opposing team member
// Unavailable Territories:	None
// # of Players:		2-6
//-------------------------------------------------------------------------------------------------

LivingWorldCampaign WOTRBFME2EvilCampaign

	IsEvilCampaign = No
	
	;////////////// RTS Settings /////////////
	#include "..\Common\LivingWorldDefaultRTSSettings.inc"

	Scenario
		DisplayName 		= LWScenario:WOTRScenarioBFME2Evil
		DisplayDescription 	= LWScenario:WOTRScenarioBFME2EvilDescription
		DisplayGameType 	= LWScenario:WOTRGameTypeCampaign
		DisplayObjectives 	= LWScenario:WOTRObjectivesCampaign
		DisplayFiction 		= LWScenario:WOTRScenarioFiction001
		DisplayVictoriousText	= LWScenario:WOTRCapitalAssaultWin001
		DisplayDefeatedText	= LWScenario:WOTRCapitalAssaultLose001

		RegionCampaign = BFME2EvilCampaign

		MinPlayers = 2
		MaxPlayers = 2
		
		DisabledFactions = FactionMen FactionRohan FactionDwarves FactionElves FactionMirkwood FactionIsengard FactionWild FactionGuldur FactionAngmar		
		DefaultStartSpots = Dol_Guldur Lothlorien
		
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
		    Factions = FactionMordor
		    Regions = Dol_Guldur
		    Teams = 1 2
		End

		StartingRestriction
		    Factions = FactionArnor
		    Regions = Lothlorien
		    Teams = 1 2
		End

			OwnershipSet 
                    Regions = Dol_Guldur
                    StartRegion = Dol_Guldur           		
					
                    SpawnArmies
                        Armies = WotREvilArmy1
                        Region = Dol_Guldur
                    End					
           	End

			OwnershipSet 
                    Regions = Lothlorien Grey_Havens The_Shire Fornost Mirkwood Withered_Heath Erebor Rivendell
                    StartRegion = Lothlorien						
           	End			
		
	End
	
	
	;//////////////////////////////////////////////////
	Act One
	;//////////////////////////////////////////////////

	//-------------------------------------------------------------------------------------------------
	// Good
	//-------------------------------------------------------------------------------------------------
	
	//-------------------------------------------------------------------------------------------------
	// Evil
	//-------------------------------------------------------------------------------------------------
	SpawnArmy
		ScriptingName = WotREvilArmy1
		SpawnForTemplates = PlayerMordor
		PlayerArmy = WotREvilArmy1
		HeroTemplateName = WotREvilArmy1		
		Icon = MordorArmyIcon
		Banner = BannerMordor
	End	
	
	End

End