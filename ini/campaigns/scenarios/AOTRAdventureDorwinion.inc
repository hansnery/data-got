//-------------------------------------------------------------------------------------------------
LivingWorldCampaign AOTRAdventureDorwinion

	IsEvilCampaign = No

	;////////////// RTS Settings /////////////
	#include "..\Common\LivingWorldCapitalRTSSettings.inc"

	Scenario
		DisplayName 		= LWScenario:AOTRAdventureDorwinion
		DisplayDescription 	= LWScenario:AOTRAdventureDorwinionDescription
		DisplayGameType		= LWScenario:WOTRGameType001
		DisplayObjectives 	= LWScenario:WOTRObjectives001
		DisplayFiction 		= LWScenario:WOTRScenarioFiction004
		DisplayVictoriousText	= LWScenario:WOTRCapitalAssaultWin001
		DisplayDefeatedText	= LWScenario:WOTRCapitalAssaultLose001

		RegionCampaign = AOTRAdventureDorwinion

		MinPlayers = 2
		MaxPlayers = 2

		//DisableRegions = 
		DisabledFactions = FactionArnor FactionDwarves FactionMen FactionRohan FactionWild FactionElves FactionISengard FactionAngmar FactionGuldur
		DisallowStartInRegions = 
		DefaultStartSpots = Dorwinion Rhun

		//HistoricalScenario marks this scenario as following several rules:
		// *Each player must play a unique faction (the list of selectable factions is dicated by the
		//  "DisabledFactions" flag above)
		// *Each faction has a predetermined starting location and team (outlined in the starting
		//  restrictions below)
		// Please read the information below on Starting Restrictions for more information.
		HistoricalScenario = Yes

           	PlayerDefeatCondition
                    Teams = 1 2
                    LoseIfCapitalLost = Yes
                    NumControlledRegionsLessOrEqualTo = 0
           	End
             
           	TeamDefeatCondition
                    Teams = 1 2
                    NumControlledRegionsLessOrEqualTo = 0
           	End

		//A HistoricalScenario MUST include a Starting Restriction for each faction allowed in the 
		//scenario.  This restriction dictates the starting region and team of each faction.  This is
		//important because users will NOT be able to choose a team or starting location if the 
		//"HistoricalScenario" flag is set.
		//
		//Also note, in this case Starting Restrictions are being used in a different context than what
		//they are used for when the HistoricalScenario flag is not set.  Without the HistoricalScenario
		//flag, starting restrictions restrict selection to starting position only, and the starting
		//position dictates the faction and/or team
		StartingRestriction
		    Factions = FactionMirkwood
		    Regions = Dorwinion
		    Teams = 1 2
		End

		StartingRestriction
		    Factions = FactionMordor
		    Regions = Rhun
		    Teams = 1 2
		End

		//-----------End Historical starting restrictions
            
           	//----------------------------------------------------------
           	// OwnershipSets
           	//----------------------------------------------------------

           	// OwnershipSets are how you decide who owns which region at the start of the game (and what armies are owned also)
 
           	OwnershipSet 
                    Regions = Dorwinion
                    StartRegion = Dorwinion
                    
                    ;SpawnBuildings
                    ;    Buildings = LW_FORT
                    ;    Region = 
                    ;End

                    SpawnArmies
                        Armies = HeroArmy1
                        Region = Dorwinion
                    End			

           	End
 
            OwnershipSet
                    Regions = Rhun
                    StartRegion = Rhun

                    ;SpawnBuildings
                    ;    Buildings = LW_ARMORY
                    ;    Region =
                    ;End

                    SpawnArmies
                        Armies = HeroArmy1
                        Region = Rhun
                    End
            End

	End
	;//////////////////////////////////////////////////
	Act One
	;//////////////////////////////////////////////////

//-------------------------------------------------------------------------------------------------
// Dorwinion
//-------------------------------------------------------------------------------------------------

SpawnArmy
	ScriptingName = HeroArmy1
	SpawnForTemplates = PlayerMirkwood	
	HeroTemplateName = Morinehtar
	PlayerArmy = DorwinionMorinehtarPlayerArmy
	Icon = MirkwoodHeroArmyIcon
	Banner = BannerMirkwood
End

//-------------------------------------------------------------------------------------------------
// Mordor - Rhûn
//-------------------------------------------------------------------------------------------------

SpawnArmy
	ScriptingName = HeroArmy1
	SpawnForTemplates = PlayerMordor
	HeroTemplateName = MordorMouthOfSauron
	PlayerArmy = MouthOfSauronArmy
	Icon = MordorHeroArmyIcon
	Banner = BannerMordor
End
	
End
End
