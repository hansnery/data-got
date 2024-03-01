//-------------------------------------------------------------------------------------------------
// Scenario Name:		Capital Assault - Freeform
// Scenario Description:	This is a freeform game of the Capital Assault mode
// Game Type:			Capital Assault
// Win Conditions:		Player must conquer the capital of each opposing team member
// Unavailable Territories:	None
// # of Players:		2-6
//-------------------------------------------------------------------------------------------------

LivingWorldCampaign WOTRAOTRLastAllianceScenario

	IsEvilCampaign = No
	
	;////////////// RTS Settings /////////////
	#include "..\Common\LivingWorldDefaultRTSSettings.inc"

	Scenario
		DisplayName 		= LWScenario:AOTRScenarioLastAlliance
		DisplayDescription 	= LWScenario:AOTRScenarioLastAllianceDescription
		DisplayGameType 	= LWScenario:WOTRGameTypeLastAlliance
		DisplayObjectives 	= LWScenario:WOTRObjectivesLastAlliance
		DisplayFiction 		= LWScenario:WOTRScenarioFictionLastAlliance
		DisplayVictoriousText	= LWScenario:WOTRCapitalAssaultWinLastAlliance
		DisplayDefeatedText	= LWScenario:WOTRCapitalAssaultLoseLastAlliance

		UseMpRulesVictoryCondition = No

		RegionCampaign = WOTRAOTRLastAllianceScenario

		MinPlayers = 2
		MaxPlayers = 2
		
		DisabledFactions = FactionMirkwood FactionDwarves FactionElves FactionWild FactionGuldur FactionMen FactionRohan FactionIsengard FactionAngmar
		DefaultStartSpots = Mount_Doom Grey_Havens
		
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
		
		StartingRestriction
		    Factions = FactionArnor
		    Regions = Grey_Havens
		    Teams = 1
		End
		
		StartingRestriction
		    Factions = FactionMordor
		    Regions = Mount_Doom
		    Teams = 2
		End
		
		OwnershipSet 
            Regions = Grey_Havens Harlindon Tower_Hills Weathertop Rivendell Cape_Forlond Moria Angmar Fornost Lothlorien Halls_Elvenking Taur_En_Morvith Taur_Na_Faroth Taur_Hith Osgiliath Minas_Tirith Lossarnach Pelargir Dol_Amroth Harlond Central_Ithilien Anorien Ringlo_Vale Swanfleet
            StartRegion = Grey_Havens          		
					
                SpawnArmies
                    Armies = HeroArmy1 GarrisonArmy2
                    Region = Grey_Havens
                End	
				SpawnArmies
                    Armies = HeroArmy2 GarrisonArmy3
                    Region = Rivendell
                End	
				SpawnArmies
                    Armies = HeroArmy3 GarrisonArmy1
                    Region = Weathertop
                End		
				SpawnArmies
                    Armies = GarrisonArmy4
                    Region = Cape_Forlond
                End		
				SpawnArmies
                    Armies = GarrisonArmy5
                    Region = Fornost
                End	
				SpawnArmies
                    Armies = GarrisonArmy6
                    Region = Angmar
                End	
				SpawnArmies
                    Armies = GarrisonArmy7
                    Region = Swanfleet
                End			
				SpawnArmies
                    Armies = GarrisonArmy8
                    Region = Moria
                End		
				SpawnArmies
                    Armies = GarrisonArmy9
                    Region = Lothlorien
                End	
				SpawnArmies
                    Armies = GarrisonArmy10
                    Region = Taur_Hith
                End
				SpawnArmies
                    Armies = GarrisonArmy11
                    Region = Halls_Elvenking
                End		
				SpawnArmies
                    Armies = GarrisonArmy12
                    Region = Taur_Na_Faroth
                End		
				SpawnArmies
                    Armies = GarrisonArmy13
                    Region = Osgiliath
                End	
				SpawnArmies
                    Armies = GarrisonArmy14
                    Region = Central_Ithilien
                End		
				SpawnArmies
                    Armies = GarrisonArmy15
                    Region = Dol_Amroth
                End		
				SpawnArmies
                    Armies = GarrisonArmy16
                    Region = Ringlo_Vale
                End					
        End
		
		OwnershipSet 
            Regions = Mount_Doom Ered_Luin_Highlands Forlindon Ost_In_Edhil Eregion Cardolan Caradhras Dimrill_Dale Gundabad Grey_Mountains Withered_Heath Mount_Gram Ettenmoors High_Pass Goblin_Town Old_Forest Field_Celebrant Nan_Celebrant Hall_Oak Mirkwood Northern_Mirkwood Forest_Gate Gladden_Fields Vale_Anduin Halifirien Tolfalas Lebennin Belfalas Southern_Ithilien Cair_Andros Crossroads Emyn_Arnen Black_Gate Dagorlad Dead_Marshes Ered_Lithui Gorgoroth Minas_Morgul Nurn Sea_Of_Nurnen Slavefields_Of_Nurn Old_Brown_Lands
            StartRegion = Mount_Doom          			

				SpawnBuildings
                    Buildings = LW_ARMORY
                    Region = Mount_Doom
                End					
				
				SpawnArmies
                    Armies = GarrisonArmy1
                    Region = Ered_Luin_Highlands
                End	

				SpawnArmies
                    Armies = GarrisonArmy2
                    Region = Forlindon
                End		

				SpawnArmies
                    Armies = GarrisonArmy3
                    Region = Ost_In_Edhil
                End	
				
				SpawnArmies
                    Armies = GarrisonArmy4
                    Region = Eregion
                End	
				
				SpawnArmies
                    Armies = GarrisonArmy5
                    Region = Cardolan
                End	

				SpawnArmies
                    Armies = GarrisonArmy6
                    Region = Old_Forest
                End	

				SpawnArmies
                    Armies = GarrisonArmy7
                    Region = Mount_Gram
                End	
				
				SpawnArmies
                    Armies = GarrisonArmy8
                    Region = Ettenmoors
                End	
				
				SpawnArmies
                    Armies = GarrisonArmy9
                    Region = Grey_Mountains
                End	
				
				SpawnArmies
                    Armies = GarrisonArmy10
                    Region = Withered_Heath
                End	
				
				SpawnArmies
                    Armies = GarrisonArmy11
                    Region = Gundabad
                End	
				
				SpawnArmies
                    Armies = GarrisonArmy12
                    Region = High_Pass
                End	
				
				SpawnArmies
                    Armies = GarrisonArmy13
                    Region = Goblin_Town
                End	

				SpawnArmies
                    Armies = GarrisonArmy14
                    Region = Caradhras
                End	
				
				SpawnArmies
                    Armies = GarrisonArmy15
                    Region = Dimrill_Dale
                End	
				
				SpawnArmies
                    Armies = GarrisonArmy16
                    Region = Northern_Mirkwood
                End	
				
				SpawnArmies
                    Armies = GarrisonArmy17
                    Region = Hall_Oak
                End	
				
				SpawnArmies
                    Armies = GarrisonArmy18
                    Region = Forest_Gate
                End	
				
				SpawnArmies
                    Armies = GarrisonArmy19
                    Region = Mirkwood
                End	
				
				SpawnArmies
                    Armies = GarrisonArmy20
                    Region = Vale_Anduin
                End	
				
				SpawnArmies
                    Armies = GarrisonArmy21
                    Region = Gladden_Fields
                End	
				
				SpawnArmies
                    Armies = GarrisonArmy22
                    Region = Field_Celebrant
                End	
				
				SpawnArmies
                    Armies = GarrisonArmy23
                    Region = Nan_Celebrant
                End	
				
				SpawnArmies
                    Armies = GarrisonArmy24
                    Region = Old_Brown_Lands
                End	
				
				SpawnArmies
                    Armies = GarrisonArmy25
                    Region = Halifirien
                End	
				
				SpawnArmies
                    Armies = GarrisonArmy26
                    Region = Southern_Ithilien
                End	
				
				SpawnArmies
                    Armies = GarrisonArmy27
                    Region = Tolfalas
                End	
				
				SpawnArmies
                    Armies = GarrisonArmy28
                    Region = Belfalas
                End	
				
				SpawnArmies
                    Armies = GarrisonArmy29
                    Region = Lebennin
                End	
				
				SpawnArmies
                    Armies = GarrisonArmy30
                    Region = Emyn_Arnen
                End	
	
				SpawnArmies
                    Armies = GarrisonArmy31
                    Region = Crossroads
                End	
				
				SpawnArmies
                    Armies = GarrisonArmy32
                    Region = Minas_Morgul
                End
				
				SpawnArmies
                    Armies = GarrisonArmy33
                    Region = Cair_Andros
                End
				SpawnArmies
                    Armies = GarrisonArmy34
                    Region = Mount_Doom
                End

				SpawnArmies
                    Armies = GarrisonArmy35
                    Region = Gorgoroth
                End

				SpawnArmies
                    Armies = GarrisonArmy36
                    Region = Black_Gate
                End

				SpawnArmies
                    Armies = GarrisonArmy37
                    Region = Dead_Marshes
                End
				
				SpawnArmies
                    Armies = GarrisonArmy38
                    Region = Dagorlad
                End
        End

	End
	
	;//////////////////////////////////////////////////
	Act One
	;//////////////////////////////////////////////////
//-------------------------------------------------------------------------------------------------
// Last Alliance
//-------------------------------------------------------------------------------------------------
SpawnArmy
	ScriptingName = HeroArmy1
	SpawnForTemplates = PlayerRivendell
	HeroTemplateName = SecondAgeGilGalad_WotR
	PlayerArmy = GilGaladPlayerArmy
	Icon = RivendellHeroArmyIcon
	Banner = BannerRivendell
End	

SpawnArmy
	ScriptingName = HeroArmy2
	SpawnForTemplates = PlayerRivendell
	HeroTemplateName = SecondAgeElrond_WotR
	PlayerArmy = SecondAgeElrondPlayerArmy
	Icon = RivendellHeroArmyIcon
	Banner = BannerRivendell
End

SpawnArmy
	ScriptingName = HeroArmy3
	SpawnForTemplates = PlayerRivendell
	HeroTemplateName = SecondAgeElendil_WotR
	PlayerArmy = SecondAgeElendilPlayerArmy
	Icon = MoWHeroArmyIcon
	Banner = BannerMen
End

SpawnArmy
	ScriptingName = GarrisonArmy1
	SpawnForTemplates = PlayerRivendell
	PlayerArmy = WeathertopAllianceArmy
	Icon = MoWArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy2
	SpawnForTemplates = PlayerRivendell
	PlayerArmy = HavensAllianceArmy
	Icon = MoWArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy3
	SpawnForTemplates = PlayerRivendell
	PlayerArmy = RivendellAllianceArmy
	Icon = MoWArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy4
	SpawnForTemplates = PlayerRivendell
	PlayerArmy = SecondAgeLindonGuardArmy
	Icon = MoWArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy5
	SpawnForTemplates = PlayerRivendell
	PlayerArmy = FornostAllianceArmy
	Icon = MoWArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy6
	SpawnForTemplates = PlayerRivendell
	PlayerArmy = RivendellKnightArmy
	Icon = MoWArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy7
	SpawnForTemplates = PlayerRivendell
	PlayerArmy = SecondAgeLindonWarriorArmy
	Icon = MoWArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy8
	SpawnForTemplates = PlayerRivendell
	PlayerArmy = MoriaAllianceArmy
	Icon = MoWArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy9
	SpawnForTemplates = PlayerRivendell
	PlayerArmy = LorienAllianceArmy
	Icon = MoWArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy10
	SpawnForTemplates = PlayerRivendell
	PlayerArmy = HithlinAllianceArmy
	Icon = MoWArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy11
	SpawnForTemplates = PlayerRivendell
	PlayerArmy = HallsAllianceArmy
	Icon = MoWArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy12
	SpawnForTemplates = PlayerRivendell
	PlayerArmy = FarothAllianceArmy
	Icon = MoWArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy13
	SpawnForTemplates = PlayerRivendell
	PlayerArmy = OsgiliathAllianceArmy
	Icon = MoWArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy14
	SpawnForTemplates = PlayerRivendell
	PlayerArmy = IthilienAllianceArmy
	Icon = MoWArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy15
	SpawnForTemplates = PlayerRivendell
	PlayerArmy = DolAmrothAllianceArmy
	Icon = MoWArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy16
	SpawnForTemplates = PlayerRivendell
	PlayerArmy = SecondAgeGondorFighterArmy
	Icon = MoWArmyIcon
End
//-------------------------------------------------------------------------------------------------
// Mordor
//-------------------------------------------------------------------------------------------------

SpawnArmy
	ScriptingName = GarrisonArmy1
	SpawnForTemplates = PlayerMordor
	PlayerArmy = Mordor_StartingArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy2
	SpawnForTemplates = PlayerMordor
	PlayerArmy = ForlindonAllianceArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy3
	SpawnForTemplates = PlayerMordor
	PlayerArmy = OstInEdhilAllianceArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy4
	SpawnForTemplates = PlayerMordor
	PlayerArmy = EregionAllianceArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy5
	SpawnForTemplates = PlayerMordor
	PlayerArmy = TharbadAllianceArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy6
	SpawnForTemplates = PlayerMordor
	PlayerArmy = OldForestAllianceArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy7
	SpawnForTemplates = PlayerMordor
	PlayerArmy = GramAllianceArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy8
	SpawnForTemplates = PlayerMordor
	PlayerArmy = EttenmorsAllianceArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy9
	SpawnForTemplates = PlayerMordor
	PlayerArmy = GreyMountAllianceArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy10
	SpawnForTemplates = PlayerMordor
	PlayerArmy = WitheredAllianceArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy11
	SpawnForTemplates = PlayerMordor
	PlayerArmy = GundabadAllianceArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy12
	SpawnForTemplates = PlayerMordor
	PlayerArmy = HighPassAllianceArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy13
	SpawnForTemplates = PlayerMordor
	PlayerArmy = GoblinTownAllianceArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy14
	SpawnForTemplates = PlayerMordor
	PlayerArmy = CaradhrasAllianceArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy15
	SpawnForTemplates = PlayerMordor
	PlayerArmy = DimrillAllianceArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy16
	SpawnForTemplates = PlayerMordor
	PlayerArmy = NMirkwoodAllianceArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy17
	SpawnForTemplates = PlayerMordor
	PlayerArmy = HallOakAllianceArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy18
	SpawnForTemplates = PlayerMordor
	PlayerArmy = ForestGateAllianceArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy19
	SpawnForTemplates = PlayerMordor
	PlayerArmy = MirkwoodAllianceArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy20
	SpawnForTemplates = PlayerMordor
	PlayerArmy = AnduinAllianceArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy21
	SpawnForTemplates = PlayerMordor
	PlayerArmy = GladdenAllianceArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy22
	SpawnForTemplates = PlayerMordor
	PlayerArmy = CelebrantAllianceArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy23
	SpawnForTemplates = PlayerMordor
	PlayerArmy = NCelebrantAllianceArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy24
	SpawnForTemplates = PlayerMordor
	PlayerArmy = BrownLandsAllianceArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy25
	SpawnForTemplates = PlayerMordor
	PlayerArmy = EastfoldAllianceArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy26
	SpawnForTemplates = PlayerMordor
	PlayerArmy = SIthilienAllianceArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy27
	SpawnForTemplates = PlayerMordor
	PlayerArmy = TolfalasAllianceArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy28
	SpawnForTemplates = PlayerMordor
	PlayerArmy = BelfalasAllianceArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy29
	SpawnForTemplates = PlayerMordor
	PlayerArmy = LebenninAllianceArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy30
	SpawnForTemplates = PlayerMordor
	PlayerArmy = ArnenAllianceArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy31
	SpawnForTemplates = PlayerMordor
	PlayerArmy = CrossroadsAllianceArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy32
	SpawnForTemplates = PlayerMordor
	PlayerArmy = MorgulAllianceArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy33
	SpawnForTemplates = PlayerMordor
	PlayerArmy = AndrosAllianceArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy34
	SpawnForTemplates = PlayerMordor
	PlayerArmy = DoomAllianceArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy35
	SpawnForTemplates = PlayerMordor
	PlayerArmy = GorgorothAllianceArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy36
	SpawnForTemplates = PlayerMordor
	PlayerArmy = BlackGateAllianceArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy37
	SpawnForTemplates = PlayerMordor
	PlayerArmy = MarshesAllianceArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy38
	SpawnForTemplates = PlayerMordor
	PlayerArmy = DagorlandAllianceArmy
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