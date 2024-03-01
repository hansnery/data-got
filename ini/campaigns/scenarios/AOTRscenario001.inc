//-------------------------------------------------------------------------------------------------
// Scenario Name:		Assault on Rohan
// Game Type:			Capital Assault
// # of Players:		2 - Rohan & Isengard
//-------------------------------------------------------------------------------------------------

LivingWorldCampaign AOTRScenario001

	IsEvilCampaign = No

	;////////////// RTS Settings /////////////
	#include "..\Common\LivingWorldCapitalRTSSettings.inc"

	Scenario
		DisplayName 		= LWScenario:AOTRScenario001
		DisplayDescription 	= LWScenario:AOTRScenario001Description
		DisplayGameType		= LWScenario:WOTRGameType001
		DisplayObjectives 	= LWScenario:WOTRObjectives001
		DisplayFiction 		= LWScenario:WOTRScenarioFiction004
		DisplayVictoriousText	= LWScenario:WOTRCapitalAssaultWin001
		DisplayDefeatedText	= LWScenario:WOTRCapitalAssaultLose001

		RegionCampaign = AOTRScenario001

		MinPlayers = 2
		MaxPlayers = 2

		//DisableRegions = 
		DisabledFactions = FactionArnor FactionDwarves FactionMen FactionMordor FactionWild FactionElves FactionMirkwood FactionAngmar FactionGuldur
		DisallowStartInRegions = Helms_Deep Fords_Isen Westfold Rohan Dunland Gap_Rohan Eaves_Fangorn Dunharrow East_Rohan Eastfold East_Emnet Fangorn_Forest Halifirien West_Emnet Wold
		DefaultStartSpots = Edoras Isengard

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
		    Factions = FactionRohan
		    Regions = Edoras
		    Teams = 1 2
		End

		StartingRestriction
		    Factions = FactionIsengard
		    Regions = Isengard
		    Teams = 1 2
		End

		//-----------End Historical starting restrictions
            
           	//----------------------------------------------------------
           	// OwnershipSets
           	//----------------------------------------------------------

           	// OwnershipSets are how you decide who owns which region at the start of the game (and what armies are owned also)
 
           	OwnershipSet 
                    Regions = Edoras Helms_Deep Fords_Isen Westfold Rohan
                    StartRegion = Edoras
                    
                    SpawnBuildings
                        Buildings = LW_FORT
                        Region = Edoras
                    End

                    SpawnBuildings
                        Buildings = LW_FARM
                        Region = Westfold
                    End

                    SpawnBuildings
                        Buildings = LW_FARM
                        Region = Rohan
                    End
					
                    SpawnBuildings
                        Buildings = LW_FARM
                        Region = Eastfold
                    End

                    SpawnBuildings
                        Buildings = LW_FARM
                        Region = East_Emnet
                    End					
					
                    SpawnArmies
                        Armies = HeroArmy1
                        Region = Edoras
                    End

                    SpawnArmies
                        Armies = HeroArmy2
                        Region = Halifirien
                    End					
					
                    SpawnArmies
                        Armies = HeroArmy3
                        Region = Fords_Isen
                    End

                    SpawnArmies
                        Armies = GarrisonArmy1
                        Region = Helms_Deep
                    End					

           	End
 
            OwnershipSet
                    Regions = Dunland Gap_Rohan Isengard Eaves_Fangorn
                    StartRegion = Isengard

                    SpawnBuildings
                        Buildings = LW_ARMORY
                        Region = Isengard
                    End
					
                    SpawnBuildings
                        Buildings = LW_FARM
                        Region = Eaves_Fangorn
                    End
					
                    SpawnBuildings
                        Buildings = LW_BARRACKS
                        Region = Dunland
                    End			

                    SpawnArmies
                        Armies = HeroArmy1
                        Region = Isengard
                    End

                    SpawnArmies
                        Armies = HeroArmy2
                        Region = Gap_Rohan
                    End

                    SpawnArmies
                        Armies = HeroArmy3
                        Region = Dunland
                    End					
	
            End

	End
	;//////////////////////////////////////////////////
	Act One
	;//////////////////////////////////////////////////

//-------------------------------------------------------------------------------------------------
// Rohan
//-------------------------------------------------------------------------------------------------

SpawnArmy
	ScriptingName = HeroArmy1
	SpawnForTemplates = PlayerRohan		
	HeroTemplateName = RohanTheoden
	PlayerArmy = RohanTheodenArmy_AOTR001
	Icon = RohanHeroArmyIcon
	Banner = BannerRohan
End

SpawnArmy
	ScriptingName = HeroArmy2
	SpawnForTemplates = PlayerRohan
	HeroTemplateName = RohanEomer
	PlayerArmy = RohanEomerArmy_AOTR001
	Icon = RohanHeroArmyIcon
	Banner = BannerRohan
End

SpawnArmy
	ScriptingName = HeroArmy3
	SpawnForTemplates = PlayerRohan
	HeroTemplateName = RohanTheodred
	PlayerArmy = RohanTheodredArmy_AOTR001
	Icon = RohanHeroArmyIcon
	Banner = BannerRohan
End

SpawnArmy
	ScriptingName = GarrisonArmy1
	SpawnForTemplates = PlayerRohan
	PlayerArmy = RohanHelmsDeepArmy_AOTR001
	Icon = RohanArmyIcon
End

//-------------------------------------------------------------------------------------------------
// Isengard
//-------------------------------------------------------------------------------------------------

SpawnArmy
	ScriptingName = HeroArmy1
	SpawnForTemplates = PlayerIsengard		
	HeroTemplateName = IsengardSaruman_WOTR
	PlayerArmy = SarumanPlayerArmy_AOTR001
	Icon = IsengardHeroArmyIcon
	Banner = BannerIsengard
End

SpawnArmy
	ScriptingName = HeroArmy2
	SpawnForTemplates = PlayerIsengard		
	HeroTemplateName = IsengardLurtz
	PlayerArmy = LurtzPlayerArmy_AOTR001
	Icon = IsengardHeroArmyIcon
	Banner = BannerIsengard
End

SpawnArmy
	ScriptingName = HeroArmy3
	SpawnForTemplates = PlayerIsengard		
	HeroTemplateName = IsengardWulfgar_WOTR
	PlayerArmy = WulfgarPlayerArmy_AOTR001
	Icon = DunlandArmyIcon
	Banner = BannerIsengard
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
