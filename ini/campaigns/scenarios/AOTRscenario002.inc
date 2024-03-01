//-------------------------------------------------------------------------------------------------
// Scenario Name:		Siege of Gondor
// Game Type:			Capital Assault
// # of Players:		2 - Gondor & Mordor
//-------------------------------------------------------------------------------------------------

LivingWorldCampaign AOTRScenario002

	IsEvilCampaign = No

	;////////////// RTS Settings /////////////
	#include "..\Common\LivingWorldCapitalRTSSettings.inc"

	Scenario
		DisplayName 		= LWScenario:AOTRScenario002
		DisplayDescription 	= LWScenario:AOTRScenario002Description
		DisplayGameType		= LWScenario:WOTRGameType001
		DisplayObjectives 	= LWScenario:WOTRObjectives001
		DisplayFiction 		= LWScenario:WOTRScenarioFiction004
		DisplayVictoriousText	= LWScenario:WOTRCapitalAssaultWin001
		DisplayDefeatedText	= LWScenario:WOTRCapitalAssaultLose001

		RegionCampaign = AOTRScenario002

		MinPlayers = 2
		MaxPlayers = 2

		//DisableRegions = 
		DisabledFactions = FactionArnor FactionDwarves FactionRohan FactionIsengard FactionWild FactionElves FactionMirkwood FactionAngmar FactionGuldur
		DisallowStartInRegions = Osgiliath Northern_Ithilien Cair_Andros Harlond Mount_Doom Nurn Black_Gate Shelob_Lair Minas_Morgul Dagorlad Rhun Andrast Anfalas Anorien Belfalas Central_Ithilien Dead_Marshes Dol_Amroth Eastfold Emyn_Arnen Harlond Harondor Khand Lamedon Lebennin Mouths_Entwash Near_Harad Pelargir Southern_Ithilien Tolfalas Umbar Far_Harad Druadan_Forest
		DefaultStartSpots = Minas_Tirith Lithlad

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
		    Factions = FactionMen
		    Regions = Minas_Tirith
		    Teams = 1 2
		End

		StartingRestriction
		    Factions = FactionMordor
		    Regions = Lithlad
		    Teams = 1 2
		End

		//-----------End Historical starting restrictions
            
           	//----------------------------------------------------------
           	// OwnershipSets
           	//----------------------------------------------------------

           	// OwnershipSets are how you decide who owns which region at the start of the game (and what armies are owned also)
 
           	OwnershipSet 
                    Regions = Minas_Tirith Osgiliath Northern_Ithilien Cair_Andros Harlond
                    StartRegion = Minas_Tirith
                    
                    ;SpawnBuildings
                    ;    Buildings = LW_FORT
                    ;    Region = Edoras
                    ;End

                    SpawnArmies
                        Armies = HeroArmy1
                        Region = Northern_Ithilien
                    End		
					
                    SpawnArmies
                        Armies = HeroArmy2
                        Region = Osgiliath
                    End	
					
                    SpawnArmies
                        Armies = GarrisonArmy1
                        Region = Minas_Tirith
                    End					

           	End
 
            OwnershipSet
                    Regions = Lithlad Mount_Doom Nurn Black_Gate Shelob_Lair Minas_Morgul
                    StartRegion = Lithlad

                    ;SpawnBuildings
                    ;    Buildings = LW_ARMORY
                    ;    Region = Isengard
                    ;End
					
                    SpawnBuildings
                        Buildings = LW_FARM
                        Region = Nurn
                    End

                    SpawnArmies
                        Armies = HeroArmy1
                        Region = Minas_Morgul
                    End
					
                    SpawnArmies
                        Armies = HeroArmy2
                        Region = Lithlad
                    End

                    SpawnArmies
                        Armies = HeroArmy3
                        Region = Minas_Morgul
                    End

                    SpawnArmies
                        Armies = GarrisonArmy1
                        Region = Black_Gate
                    End					
	
            End

	End
	;//////////////////////////////////////////////////
	Act One
	;//////////////////////////////////////////////////

//-------------------------------------------------------------------------------------------------
// Gondor
//-------------------------------------------------------------------------------------------------

SpawnArmy
	ScriptingName = HeroArmy1
	SpawnForTemplates = PlayerMen
	HeroTemplateName = GondorFaramir
	PlayerArmy = FaramirPlayerArmy_AOTR002
	Icon = MoWHeroArmyIcon
	Banner = BannerMen
End

SpawnArmy
	ScriptingName = HeroArmy2
	SpawnForTemplates = PlayerMen
	HeroTemplateName = GondorBoromir
	PlayerArmy = BoromirPlayerArmy_AOTR002
	Icon = MoWHeroArmyIcon
	Banner = BannerMen
    PalantirMovie = Palantir_513	
End

SpawnArmy
	ScriptingName = GarrisonArmy1
	SpawnForTemplates = PlayerMen
	PlayerArmy = MinasTirith_StartingArmy_AOTR002
	Icon = MoWArmyIcon
End

//-------------------------------------------------------------------------------------------------
// Mordor
//-------------------------------------------------------------------------------------------------

SpawnArmy
	ScriptingName = HeroArmy1
	SpawnForTemplates = PlayerMordor
	HeroTemplateName = MordorGothmog
	PlayerArmy = GothmogPlayerArmy_AOTR002
	Icon = MordorHeroArmyIcon
	Banner = BannerMordor
End

SpawnArmy
	ScriptingName = HeroArmy2
	SpawnForTemplates = PlayerMordor
	HeroTemplateName = MordorMouthOfSauron
	PlayerArmy = MouthOfSauronArmy_AOTR002
	Icon = MordorHeroArmyIcon
	Banner = BannerMordor
End

SpawnArmy
	ScriptingName = HeroArmy3
	SpawnForTemplates = PlayerMordor
	HeroTemplateName = MordorWitchKing_WOTR
	PlayerArmy = WitchKingArmy_AOTR002
	Icon = MordorHeroArmyIcon
	Banner = BannerMordor
End

SpawnArmy
	ScriptingName = GarrisonArmy1
	SpawnForTemplates = PlayerMordor
	PlayerArmy = Mordor_StartingArmy_AOTR002
	Icon = MordorArmyIcon
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
