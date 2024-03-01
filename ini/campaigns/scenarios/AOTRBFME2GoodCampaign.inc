//-------------------------------------------------------------------------------------------------
// Scenario Name:		Capital Assault - Freeform
// Scenario Description:	This is a freeform game of the Capital Assault mode
// Game Type:			Capital Assault
// Win Conditions:		Player must conquer the capital of each opposing team member
// Unavailable Territories:	None
// # of Players:		2-6
//-------------------------------------------------------------------------------------------------

LivingWorldCampaign WOTRBFME2GoodCampaign

	IsEvilCampaign = No
	
	;////////////// RTS Settings /////////////
	#include "..\Common\LivingWorldDefaultRTSSettings.inc"

	Scenario
		DisplayName 		= LWScenario:WOTRScenarioBFME2Good
		DisplayDescription 	= LWScenario:WOTRScenarioBFME2GoodDescription
		DisplayGameType 	= LWScenario:WOTRGameTypeCampaign
		DisplayObjectives 	= LWScenario:WOTRObjectivesCampaign
		DisplayFiction 		= LWScenario:WOTRScenarioFiction001
		DisplayVictoriousText	= LWScenario:WOTRCapitalAssaultWin001
		DisplayDefeatedText	= LWScenario:WOTRCapitalAssaultLose001

		UseMpRulesVictoryCondition = No

		RegionCampaign = BFME2GoodCampaign

		MinPlayers = 2
		MaxPlayers = 2
		
		DisabledFactions = FactionMen FactionRohan FactionDwarves FactionElves FactionMirkwood FactionIsengard FactionWild FactionGuldur FactionAngmar		
		DefaultStartSpots = Fords_Bruinen Rivendell
		
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
		    Factions = FactionArnor
		    Regions = Fords_Bruinen
		    Teams = 1 2
		End

		StartingRestriction
		    Factions = FactionMordor
		    Regions = Rivendell
		    Teams = 1 2
		End

			OwnershipSet 
                    Regions = Fords_Bruinen
                    StartRegion = Fords_Bruinen           		
					
                    SpawnArmies
                        Armies = WotRGoodArmy1
                        Region = Fords_Bruinen
                    End					
           	End

			OwnershipSet 
                    Regions = Rivendell High_Pass Mount_Gram Ered_Luin Grey_Havens Esgaroth Erebor Dol_Guldur
                    StartRegion = Rivendell	

                    ;SpawnArmies
                    ;    Armies = WotREvilArmy1
                    ;    Region = Rivendell
                    ;End						
           	End			
		
	End
	
	
	;//////////////////////////////////////////////////
	Act One
	;//////////////////////////////////////////////////

	//-------------------------------------------------------------------------------------------------
	// Good
	//-------------------------------------------------------------------------------------------------
	SpawnArmy
		ScriptingName = WotRGoodArmy1
		SpawnForTemplates = PlayerRivendell		
		HeroTemplateName = WotRGoodArmy1
		PlayerArmy = WotRGoodArmy1
		Icon = RivendellHeroArmyIcon
		Banner = BannerRivendell
	End
	
	//-------------------------------------------------------------------------------------------------
	// Evil
	//-------------------------------------------------------------------------------------------------
	
	End

End