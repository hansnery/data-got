//-------------------------------------------------------------------------------------------------
// Scenario Name:		Capital Assault - Freeform
// Scenario Description:	This is a freeform game of the Capital Assault mode
// Game Type:			Capital Assault
// Win Conditions:		Player must conquer the capital of each opposing team member
// Unavailable Territories:	None
// # of Players:		2-6
//-------------------------------------------------------------------------------------------------

LivingWorldCampaign WOTRAOTRWarSouthScenario

	IsEvilCampaign = No
	
	;////////////// RTS Settings /////////////
	#include "..\Common\LivingWorldDefaultRTSSettings.inc"

	Scenario
		DisplayName 		= LWScenario:AOTRScenarioWarSouth
		DisplayDescription 	= LWScenario:AOTRScenarioWarSouthDescription
		DisplayGameType 	= LWScenario:WOTRGameType002
		DisplayObjectives 	= LWScenario:WOTRObjectives002
		DisplayFiction 		= LWScenario:WOTRScenarioFiction004
		DisplayVictoriousText	= LWScenario:WOTRCapitalAssaultWin001
		DisplayDefeatedText	= LWScenario:WOTRCapitalAssaultLose001

		RegionCampaign = WOTRAOTRWarSouthScenario

		MinPlayers = 5
		MaxPlayers = 5
		
		DisabledFactions = FactionMirkwood FactionDwarves FactionArnor FactionElves FactionWild FactionGuldur
		DefaultStartSpots = Erebor Rivendell Gundabad Dol_Guldur Lothlorien Rhun
		
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
		    Factions = FactionMen
		    Regions = Minas_Tirith
		    Teams = 1
		End

		StartingRestriction
		    Factions = FactionRohan
		    Regions = Edoras
		    Teams = 1
		End
		
		StartingRestriction
		    Factions = FactionIsengard
		    Regions = Isengard
		    Teams = 2
		End
		
		StartingRestriction
		    Factions = FactionAngmar
		    Regions = Umbar
		    Teams = 2
		End
		
		StartingRestriction
		    Factions = FactionMordor
		    Regions = Mount_Doom
		    Teams = 2
		End

		OwnershipSet 
            Regions = Minas_Tirith Anfalas Belfalas Dol_Amroth Erech Lamedon Lebennin Lossarnach Pelargir Ringlo_Vale Tolfalas Anorien Cair_Andros Druadan_Forest Harlond Northern_Ithilien Osgiliath
            StartRegion = Minas_Tirith           		
					
                SpawnArmies
                    Armies = HeroArmy1
                    Region = Northern_Ithilien
                End	
				SpawnArmies
                    Armies = HeroArmy4
                    Region = Snowbourn
                End	
                SpawnArmies
                    Armies = HeroArmy3
                    Region = Dol_Amroth
                End	
			    SpawnArmies
                    Armies = GarrisonArmy1
                    Region = Pelargir
                End	
			    SpawnArmies
                    Armies = GarrisonArmy2
                    Region = Lossarnach
                End
			    SpawnArmies
                    Armies = GarrisonArmy3
                    Region = Northern_Ithilien
                End
			    SpawnArmies
                    Armies = GarrisonArmy4
                    Region = Minas_Tirith
                End
			    SpawnArmies
                    Armies = GarrisonArmy5
                    Region = Dol_Amroth
                End
			    SpawnArmies
                    Armies = GarrisonArmy6
                    Region = Anfalas
                End
				SpawnBuildings
                    Buildings = LW_FORT
                    Region = Osgiliath
                End	
				SpawnBuildings
                    Buildings = LW_ARMORY
                    Region = Northern_Ithilien
                End
				SpawnBuildings
                    Buildings = LW_BARRACKS
                    Region = Lossarnach
                End		
				SpawnBuildings
                    Buildings = LW_FARM
                    Region = Ringlo_Vale
                End	
				SpawnBuildings
                    Buildings = LW_FARM
                    Region = Lamedon
                End					
        End

		OwnershipSet 
            Regions = Dunharrow Eastfold Eastern_Rohan Edoras Fords_Isen Harrowdale Helms_Deep Snowbourn The_Folde West_Emnet Westfold
            StartRegion = Edoras           		
                SpawnArmies
                    Armies = HeroArmy1
                    Region = Helms_Deep
                End
                SpawnArmies
                    Armies = HeroArmy2
                    Region = Fords_Isen
                End
                SpawnArmies
                    Armies = HeroArmy3
                    Region = Eastern_Rohan
                End
				SpawnArmies
                    Armies = GarrisonArmy1
                    Region = Edoras
                End
				SpawnArmies
                    Armies = GarrisonArmy2
                    Region = Helms_Deep
                End
				SpawnArmies
                    Armies = GarrisonArmy3
                    Region = Eastern_Rohan
                End
				SpawnArmies
                    Armies = GarrisonArmy4
                    Region = Fords_Isen
                End
				SpawnBuildings
                    Buildings = LW_FORT
                    Region = Fords_Isen
                End
				SpawnBuildings
                    Buildings = LW_ARMORY
                    Region = Dunharrow
                End
				SpawnBuildings
                    Buildings = LW_FORT
                    Region = Eastfold
                End
				SpawnBuildings
                    Buildings = LW_FARM
                    Region = West_Emnet
                End	
				SpawnBuildings
                    Buildings = LW_FARM
                    Region = Eastern_Rohan
                End	
				SpawnBuildings
                    Buildings = LW_BARRACKS
                    Region = The_Folde
                End					
        End

		OwnershipSet 
            Regions = Gap_Of_Rohan Isengard Eaves_Fangorn East_Emnet Dunland Wulfborg Frecalund Regnfells
            StartRegion = Isengard          		
               SpawnArmies
                    Armies = HeroArmy1
                    Region = Eaves_Fangorn
                End
                SpawnArmies
                    Armies = HeroArmy2
                    Region = Isengard
                End
                SpawnArmies
                    Armies = HeroArmy3
                    Region = Wulfborg
                End
				SpawnArmies
                    Armies = GarrisonArmy1
                    Region = Isengard
                End
				SpawnArmies
                    Armies = GarrisonArmy2
                    Region = Eaves_Fangorn
                End	
				SpawnArmies
                    Armies = GarrisonArmy3
                    Region = East_Emnet
                End	
				SpawnArmies
                    Armies = GarrisonArmy4
                    Region = Gap_Of_Rohan
                End	
				SpawnArmies
                    Armies = GarrisonArmy5
                    Region = Wulfborg
                End	
				SpawnArmies
                    Armies = GarrisonArmy6
                    Region = Eaves_Fangorn
                End		
				SpawnBuildings
                    Buildings = LW_FARM
                    Region = East_Emnet
                End	
				SpawnBuildings
                    Buildings = LW_FARM
                    Region = Regnfells
                End	
				SpawnBuildings
                    Buildings = LW_FARM
                    Region = Dunland
                End
				SpawnBuildings
                    Buildings = LW_BARRACKS
                    Region = Frecalund
                End	
				SpawnBuildings
                    Buildings = LW_ARMORY
                    Region = Eaves_Fangorn
                End				
        End

		OwnershipSet 
            Regions = Black_Gate Cirith_Ungol Dagorlad Durthang Ered_Lithui Gorgoroth Minas_Morgul Mount_Doom Nurn Sea_Of_Nurnen Slavefields_Of_Nurn Emyn_Arnen Central_Ithilien Crossroads
            StartRegion = Mount_Doom          		
               SpawnArmies
                    Armies = HeroArmy1
                    Region = Minas_Morgul
                End	
                SpawnArmies
                    Armies = HeroArmy2
                    Region = Mount_Doom
                End
                SpawnArmies
                    Armies = HeroArmy3
                    Region = Ered_Lithui
                End
				SpawnArmies
                    Armies = GarrisonArmy1
                    Region = Black_Gate
                End
				SpawnArmies
                    Armies = GarrisonArmy2
                    Region = Black_Gate
                End
				SpawnArmies
                    Armies = GarrisonArmy3
                    Region = Central_Ithilien
                End
				SpawnArmies
                    Armies = GarrisonArmy4
                    Region = Dagorlad
                End
				SpawnBuildings
                    Buildings = LW_FARM
                    Region = Regnfells
                End	
				SpawnBuildings
                    Buildings = LW_FARM
                    Region = Crossroads
                End
				SpawnBuildings
                    Buildings = LW_FARM
                    Region = Slavefields_Of_Nurn
                End
				SpawnBuildings
                    Buildings = LW_FARM
                    Region = Ered_Lithui
                End
				SpawnBuildings
                    Buildings = LW_BARRACKS
                    Region = Gorgoroth
                End
				SpawnBuildings
                    Buildings = LW_BARRACKS
                    Region = Nurn
                End	
				SpawnBuildings
                    Buildings = LW_ARMORY
                    Region = Dagorlad
                End	
				SpawnBuildings
                    Buildings = LW_FORT
                    Region = Mount_Doom
                End				
        End
		
		OwnershipSet 
            Regions = Maros Umbar White_Pillar Hidar Cape_Of_Mardruak Harondor Ethir_Anduin Nafarat_Delta
            StartRegion = Umbar         		
              SpawnArmies
                    Armies = HeroArmy1
                    Region = Hidar
                End	
                SpawnArmies
                    Armies = HeroArmy2
                    Region = Umbar
                End
                SpawnArmies
                    Armies = HeroArmy3
                    Region = Nafarat_Delta
                End
				SpawnArmies
                    Armies = GarrisonArmy1
                    Region = Harondor
                End	
				SpawnArmies
                    Armies = GarrisonArmy2
                    Region = Umbar
                End	
				SpawnArmies
                    Armies = GarrisonArmy3
                    Region = Umbar
                End	
				SpawnArmies
                    Armies = GarrisonArmy4
                    Region = Nafarat_Delta
                End	
				SpawnArmies
                    Armies = GarrisonArmy5
                    Region = Nafarat_Delta
                End	
				SpawnBuildings
                    Buildings = LW_FORT
                    Region = Maros
                End	
				SpawnBuildings
                    Buildings = LW_ARMORY
                    Region = Nafarat_Delta
                End	
				SpawnBuildings
                    Buildings = LW_FARM
                    Region = White_Pillar
                End				
        End
	
	End
	
	;//////////////////////////////////////////////////
	Act One
	;//////////////////////////////////////////////////
	
//-------------------------------------------------------------------------------------------------
// Men of the West
//-------------------------------------------------------------------------------------------------
SpawnArmy
	ScriptingName = HeroArmy1
	SpawnForTemplates = PlayerMen
	HeroTemplateName = GondorFaramir
	PlayerArmy = FaramirPlayerArmy
	Icon = MoWHeroArmyIcon
	Banner = BannerMen
End

SpawnArmy
	ScriptingName = HeroArmy4
	SpawnForTemplates = PlayerMen
	HeroTemplateName = GondorGandalf_WOTR
	PlayerArmy = StormCrowPlayerArmy
	Icon = MoWHeroArmyIcon
	Banner = BannerMen
    PalantirMovie = Palantir_513	
End

SpawnArmy
	ScriptingName = HeroArmy3
	SpawnForTemplates = PlayerMen
	HeroTemplateName = GondorImrahil_WOTR
	PlayerArmy = ImrahilPlayerArmy
	Icon = MoWHeroArmyIcon
	Banner = BannerMen
    PalantirMovie = Palantir_513	
End

SpawnArmy
	ScriptingName = GarrisonArmy1
	SpawnForTemplates = PlayerMen
	PlayerArmy = PelargirNCArmy
	Icon = MoWArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy2
	SpawnForTemplates = PlayerMen
	PlayerArmy = LossarnachPlayerArmy
	Icon = MoWArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy3
	SpawnForTemplates = PlayerMen
	PlayerArmy = IthilienPlayerArmy
	Icon = MoWArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy4
	SpawnForTemplates = PlayerMen
	PlayerArmy = AnorienPlayerArmy
	Icon = MoWArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy5
	SpawnForTemplates = PlayerMen
	PlayerArmy = DolAmrothPlayerArmy
	Icon = MoWArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy6
	SpawnForTemplates = PlayerMen
	PlayerArmy = LamedonClansmenArmy
	Icon = MoWArmyIcon
End

//-------------------------------------------------------------------------------------------------
// Rohan
//-------------------------------------------------------------------------------------------------
SpawnArmy
	ScriptingName = HeroArmy1
	SpawnForTemplates = PlayerRohan
	HeroTemplateName = RohanErkenbrand
	PlayerArmy = ErkenbrandPlayerArmy
	Icon = RohanHeroArmyIcon
	Banner = BannerRohan
End

SpawnArmy
	ScriptingName = HeroArmy2
	SpawnForTemplates = PlayerRohan
	HeroTemplateName = RohanTheodred
	PlayerArmy = TheodredPlayerArmy
	Icon = RohanHeroArmyIcon
	Banner = BannerRohan
End

SpawnArmy
	ScriptingName = HeroArmy3
	SpawnForTemplates = PlayerRohan
	HeroTemplateName = RohanEomer
	PlayerArmy = EomerPlayerArmy
	Icon = RohanHeroArmyIcon
	Banner = BannerRohan
End

SpawnArmy
	ScriptingName = GarrisonArmy1
	SpawnForTemplates = PlayerRohan
	PlayerArmy = Rohan_StartingArmy
	Icon = RohanArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy2
	SpawnForTemplates = PlayerRohan
	PlayerArmy = WestfoldPlayerArmy
	Icon = RohanArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy3
	SpawnForTemplates = PlayerRohan
	PlayerArmy = RohirrimPlayerArmy
	Icon = RohanArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy4
	SpawnForTemplates = PlayerRohan
	PlayerArmy = RohanSpearmenArmy
	Icon = RohanArmyIcon
End
//-------------------------------------------------------------------------------------------------
// Mordor
//-------------------------------------------------------------------------------------------------

SpawnArmy
	ScriptingName = HeroArmy1
	SpawnForTemplates = PlayerMordor
	HeroTemplateName = MordorGothmog
	PlayerArmy = GothmogPlayerArmy
	Icon = MordorHeroArmyIcon
	Banner = BannerMordor
End

SpawnArmy
	ScriptingName = HeroArmy2
	SpawnForTemplates = PlayerMordor
	HeroTemplateName = MordorMouthOfSauron
	PlayerArmy = MouthOfSauronArmy
	Icon = MordorHeroArmyIcon
	Banner = BannerMordor
End

SpawnArmy
	ScriptingName = HeroArmy3
	SpawnForTemplates = PlayerMordor
	HeroTemplateName = MordorUvatha_WOTR
	PlayerArmy = UvathaPlayerArmy
	Icon = MordorHeroArmyIcon
	Banner = BannerMordor
End

SpawnArmy
	ScriptingName = GarrisonArmy1
	SpawnForTemplates = PlayerMordor
	PlayerArmy = Mordor_StartingArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy2
	SpawnForTemplates = PlayerMordor
	PlayerArmy = Mordor_StartingArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy3
	SpawnForTemplates = PlayerMordor
	PlayerArmy = MordorCentralIthilienArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy4
	SpawnForTemplates = PlayerMordor
	PlayerArmy = MordorEasterlingDagorlandArmy
	Icon = MordorArmyIcon
End
//-------------------------------------------------------------------------------------------------
// Isengard
//-------------------------------------------------------------------------------------------------

SpawnArmy
	ScriptingName = HeroArmy1
	SpawnForTemplates = PlayerIsengard
	HeroTemplateName = IsengardUgluk
	PlayerArmy = UglukPlayerArmy
	Icon = IsengardHeroArmyIcon
	Banner = BannerIsengard
End

SpawnArmy
	ScriptingName = HeroArmy2
	SpawnForTemplates = PlayerIsengard
	HeroTemplateName = IsengardLurtz
	PlayerArmy = LurtzPlayerArmy
	Icon = IsengardHeroArmyIcon
	Banner = BannerIsengard
End

SpawnArmy
	ScriptingName = HeroArmy3
	SpawnForTemplates = PlayerIsengard
	HeroTemplateName = IsengardWulfgar_WOTR
	PlayerArmy = WulfgarPlayerArmy
	Icon = DunlandArmyIcon
	Banner = BannerIsengard
End

SpawnArmy
	ScriptingName = GarrisonArmy1
	SpawnForTemplates = PlayerIsengard
	PlayerArmy = Isengard_StartingArmy
	Icon = IsengardArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy2
	SpawnForTemplates = PlayerIsengard
	PlayerArmy = GrishnakhArmy
	Icon = IsengardArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy3
	SpawnForTemplates = PlayerIsengard
	PlayerArmy = WargsPlayerArmy
	Icon = IsengardArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy4
	SpawnForTemplates = PlayerIsengard
	PlayerArmy = WildmenPlayerArmy
	Icon = IsengardArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy5
	SpawnForTemplates = PlayerIsengard
	PlayerArmy = DunlandPlayerArmy
	Icon = IsengardArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy6
	SpawnForTemplates = PlayerIsengard
	PlayerArmy = Isengard_StartingArmy
	Icon = IsengardArmyIcon
End
//-------------------------------------------------------------------------------------------------
// Haradwaith
//-------------------------------------------------------------------------------------------------
SpawnArmy
	ScriptingName = HeroArmy1
	SpawnForTemplates = PlayerAngmar
	HeroTemplateName = HaradSuladan
	PlayerArmy = SuladanPlayerArmy
	Icon = AngmarHeroArmyIcon
	Banner = BannerAngmar
End

SpawnArmy
	ScriptingName = HeroArmy2
	SpawnForTemplates = PlayerAngmar
	HeroTemplateName = HaradCassimir
	PlayerArmy = CassimirPlayerArmy
	Icon = AngmarHeroArmyIcon
	Banner = BannerAngmar
End

SpawnArmy
	ScriptingName = HeroArmy3
	SpawnForTemplates = PlayerAngmar
	HeroTemplateName = HaradBurodapan
	PlayerArmy = BurodapanPlayerArmy
	Icon = AngmarHeroArmyIcon
	Banner = BannerAngmar
End

SpawnArmy
	ScriptingName = GarrisonArmy1
	SpawnForTemplates = PlayerAngmar
	PlayerArmy = Angmar_StartingArmy
	Icon = AngmarArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy2
	SpawnForTemplates = PlayerAngmar
	PlayerArmy = HaradBlackNumenoranWarriorsHordeArmy
	Icon = AngmarArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy3
	SpawnForTemplates = PlayerAngmar
	PlayerArmy = HaradBlackNumenoranWarriorsHordeArmy
	Icon = AngmarArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy4
	SpawnForTemplates = PlayerAngmar
	PlayerArmy = HaradCorsairsOfUmbarHordeArmy
	Icon = AngmarArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy5
	SpawnForTemplates = PlayerAngmar
	PlayerArmy = HaradCorsairsOfUmbarHordeArmy
	Icon = AngmarArmyIcon
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