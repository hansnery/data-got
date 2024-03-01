CommandButton Command_ConstructHaradBlackNumenoreanGateHorde
	Command			= UNIT_BUILD
	Object			= HaradGateGuardWarriorsHorde
	Options			=  CANCELABLE
	NeededUpgrade		= Upgrade_GondorBarracksLevel2
	TextLabel		= CONTROLBAR:ConstructAngmarDarkDunedainHorde
	ButtonImage		= uihwblacknumenoreanwarriors
	ButtonBorderType    	= BUILD
	DescriptLabel       	= CONTROLBAR:ToolTipBuildAngmarDarkDunedainHorde
	Radial			= Yes
	InPalantir		= Yes
	ShowProductionCount	= Yes
	;LacksPrerequisiteLabel	= TOOLTIP:LackLevel2HallOfKingsMen
End
CommandButton Command_ConstructHaradBlackNumenoreanMarinesHorde
	Command			= UNIT_BUILD
	Object			= HaradMarinesHorde
	Options			=  CANCELABLE
	NeededUpgrade		= Upgrade_GondorBarracksLevel2
	TextLabel		= CONTROLBAR:ConstructAngmarDarkDunedainHorde
	ButtonImage		= uihwblacknumenoreanwarriors
	ButtonBorderType    	= BUILD
	DescriptLabel       	= CONTROLBAR:ToolTipBuildAngmarDarkDunedainHorde
	Radial			= Yes
	InPalantir		= Yes
	ShowProductionCount	= Yes
	;LacksPrerequisiteLabel	= TOOLTIP:LackLevel2HallOfKingsMen
End
CommandButton Command_ConstructIsengardTroll
		Command				= UNIT_BUILD
		Object				= IsengardAttackTroll
		Options				= CANCELABLE
		TextLabel			= CONTROLBAR:ConstructMordorAttackTroll
		ButtonImage			= uiisengardtroll
		ButtonBorderType		= BUILD
		DescriptLabel			= CONTROLBAR:ToolTipBuildMordorAttackTroll
		Radial				= Yes
//		InPalantir	   		= Yes
		ShowProductionCount		= Yes
	End

CommandButton Command_SpawnOathbreakers
  Command				= UNIT_BUILD
	Object				= OathbreakerHorde ;IsengardDunlandHuskarlHorde
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructOathbreakerHuskarlHorde
	ButtonImage			= UIGuldurHarbinger
	ButtonBorderType	= BUILD
	DescriptLabel		= CONTROLBAR:ToolTipBuildOathbreakerHuskarlHorde
//	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount	= Yes
End

CommandButton Command_ConstructOathbreakerHorde
	Command				= UNIT_BUILD
	Object				= OathbreakerRisenDeadHorde ;WildRisenDeadHorde
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructOathbreakerWarriorHorde
	ButtonImage			= UIGuldurRisenDead
	ButtonBorderType	= BUILD
	DescriptLabel		= CONTROLBAR:ToolTipBuildOathbreakerWarriorHorde
//	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount	= Yes
End

CommandButton Command_PorterConstructPukelStatue
	Command       		= DOZER_CONSTRUCT
	Object        		= RohanPukelStatue
	TextLabel     		= CONTROLBAR:ConstructDolAmrothBarracks
	ButtonImage   		= SBRohanPukelStatue
	ButtonBorderType    = BUILD
	DescriptLabel       = CONTROLBAR:TooltipPukelStatue
	Radial				= No
	InPalantir			= Yes
End

CommandButton Command_ConstructDruedain
	Command					= UNIT_BUILD
	Object					= RohanDruedainWarrior
	Options					= CANCELABLE
	TextLabel				= CONTROLBAR:GenericReviveHero
	ButtonImage				= SBRohanPukelStatue
	ButtonBorderType    	= BUILD
	DescriptLabel       	= CONTROLBAR:PukelStatue
	Radial					= Yes
	InPalantir	   			= No
End

	CommandButton Command_SelectRevivablesMenFortress2
		Command                 = PUSH_VISIBLE_COMMAND_RANGE
		TextLabel               = CONTROLBAR:SelectRevivablesMenFortress
		ButtonImage             = UIAnbornMasterScout
		ButtonBorderType        = SYSTEM
		DescriptLabel           = CONTROLBAR:ToolTipCommandSelectRevivablesMenFortress
		Radial                  = Yes
		CommandRangeStart		= 24	//Starts its counting at 0, so command button 8 is 7
		CommandRangeCount		= 6
	End
	CommandButton Command_ConstructGondorKingsGuard
		Command					= UNIT_BUILD
		Object					= GondorKingsGuard
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:ConstructRohanKingsguardHorde
		ButtonImage				= UIMinasTirithCitadelGuard
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipBuildRohanKingsguardHorde
		Radial					= Yes
		InPalantir	   			= Yes
		ShowProductionCount		= Yes
	End
	CommandButton Command_KOTDDreadVisageKhamul
	  Command                 = SPECIAL_POWER
	  SpecialPower            = SpecialAbilityGenericLeadership2
	  Options				  = NONPRESSABLE
	  TextLabel               = CONTROLBAR:DreadfulOmensCairn
	  ButtonImage             = HIGuldurDreadVisage
	  RadiusCursorType        = TrainingRadiusCursor
	  ButtonBorderType        = ACTION
	  DescriptLabel           = CONTROLBAR:ToolTipDreadfulOmensCairn
	  InPalantir		  = Yes
	End
	CommandButton Command_ConstructForlong
		Command					= UNIT_BUILD
		Object					= GondorForlong
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:GondorForlongRecruit
		ButtonImage				= HIForlong
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructDenethor
		Command					= UNIT_BUILD
		Object					= GondorDenethor
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:GondorDenethorRecruit
		ButtonImage				= HIDenethornew
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructBeregond
		Command					= UNIT_BUILD
		Object					= GondorBeregond
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:GondorBeregondRecruit
		ButtonImage				= HIBeregondnew
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructImrahil
		Command					= UNIT_BUILD
		Object					= GondorImrahil
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:GondorImrahilRecruit
		ButtonImage				= HIImrahilnew
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructFaramir
		Command					= UNIT_BUILD
		Object					= GondorFaramir
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:GondorFaramirRecruit
		ButtonImage				= HIFaramirnew
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructBoromir
		Command					= UNIT_BUILD
		Object					= GondorBoromir
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:GondorBoromirRecruit
		ButtonImage				= HIBoromirNew
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructAnborn
		Command					= UNIT_BUILD
		Object					= CampaignAnborn
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:GenericReviveHero
		ButtonImage				= uianbornnew
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructDamrod
		Command					= UNIT_BUILD
		Object					= CampaignDamrod
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:GenericReviveHero
		ButtonImage				= uidamrodnew
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructMablung
		Command					= UNIT_BUILD
		Object					= CampaignMablung
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:GenericReviveHero
		ButtonImage				= uimablungnew
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructMadril
		Command					= UNIT_BUILD
		Object					= CampaignMadril
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:GenericReviveHero
		ButtonImage				= uimadrilnew
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructBerethor
		Command					= UNIT_BUILD
		Object					= GondorBerethor
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:GondorBerethorRecruit
		ButtonImage				= HIBerethornew
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructGandalf
		Command					= UNIT_BUILD
		Object					= GondorGandalf
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:GandalfTheWhiteRecruit
		ButtonImage				= HIGandalfnew
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructElessar
		Command					= UNIT_BUILD
		Object					= GondorElessar
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:GondorAragornRecruit
		ButtonImage				= HIGondorElessar
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructKingoftheDead
		Command					= UNIT_BUILD
		Object					= CampaignKingoftheDead
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:GenericReviveHero
		ButtonImage				= HIGuldurCargast
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructHama
		Command					= UNIT_BUILD
		Object					= CampaignHama
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:OBJECT:RohanHamaRecruit
		ButtonImage				= HIRohanHama
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructGrimbold
		Command					= UNIT_BUILD
		Object					= CampaignGrimbold
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:GenericReviveHero
		ButtonImage				= HIRohanGrimbold
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructRoheryn
		Command					= UNIT_BUILD
		Object					= CampaignRoheryn
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:GenericReviveHero
		ButtonImage				= HSTheodenMountDismount
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructGamling
		Command					= UNIT_BUILD
		Object					= RohanGamling
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:RohanGamlingRecruit
		ButtonImage				= HIRohanGamling
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructElfhelm
		Command					= UNIT_BUILD
		Object					= RohanElfhelm
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:RohanElfhelmRecruit
		ButtonImage				= HIRohanElfhelm
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructErkenbrand
		Command					= UNIT_BUILD
		Object					= RohanErkenbrand
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:RohanErkenbrandRecruit
		ButtonImage				= HIRohanErkenbrand
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructTheodred
		Command					= UNIT_BUILD
		Object					= RohanTheodred
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:RohanTheodredRecruit
		ButtonImage				= HIRohanTheodred
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructEomer
		Command					= UNIT_BUILD
		Object					= RohanEomer
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:RohanEomerRecruit
		ButtonImage				= HIRohanEomer
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructEowyn
		Command					= UNIT_BUILD
		Object					= RohanEowyn
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:RohanEowynRecruit
		ButtonImage				= HIRohanEowyn
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructTheoden
		Command					= UNIT_BUILD
		Object					= RohanTheoden
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:RohanTheodenRecruit
		ButtonImage				= HITheoden
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructArcah
		Command					= UNIT_BUILD
		Object					= DwarvenArcah
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:EreborArcahRecruit
		ButtonImage				= hiarcahlotrera
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructBalin
		Command					= UNIT_BUILD
		Object					= DwarvenBalin
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:DwarvenBalinRecruit
		ButtonImage				= HIEreborBalin
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructBard
		Command					= UNIT_BUILD
		Object					= DwarvenCaptainofDale
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:DwarvenCaptainofDaleRecruit
		ButtonImage				= HIEreborBard
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructBrand
		Command					= UNIT_BUILD
		Object					= DwarvenBrand
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:DwarvenCaptainofDaleRecruitOld
		ButtonImage				= hibrandlotrera
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructDain
		Command					= UNIT_BUILD
		Object					= DwarvenDain
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:DwarvenDainRecruit
		ButtonImage				= HIEreborDain
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructDwalin
		Command					= UNIT_BUILD
		Object					=  DwarvenDwalin
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:DwalinRecruit
		ButtonImage				= HIEreborDwalin
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructFili
		Command					= UNIT_BUILD
		Object					=  DwarvenFili
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:DwarvenFiliRecruit
		ButtonImage				= HIEreborFili
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructGimli
		Command					= UNIT_BUILD
		Object					=  RohanGimli
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:RohanGimliRecruit
		ButtonImage				= HIGimli
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructGloin
		Command					= UNIT_BUILD
		Object					=  DwarvenGloin
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:GloinRecruit
		ButtonImage				= higloinlotrera
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructHadhod
		Command					= UNIT_BUILD
		Object					=  DwarvenHadhod
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:DwarvenHadhodRecruit
		ButtonImage				= hihadhodlotrera
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructKili
		Command					= UNIT_BUILD
		Object					=  DwarvenKili
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:DwarvenKiliRecruit
		ButtonImage				= HIEreborKili
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructKingDain
		Command					= UNIT_BUILD
		Object					=  DwarvenKingDain
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:DwarvenKingDainRecruit
		ButtonImage				= hidainlotrera
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructMasterofLaketown
		Command					= UNIT_BUILD
		Object					=  DwarvenLaketownMaster
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:LaketownMasterRecruit
		ButtonImage				= uimasteroflaketown
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructMasterSpy
		Command					= UNIT_BUILD
		Object					=  MasterSpy
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:MasterSpy
		ButtonImage				= uimasterspy
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructRoac
		Command					= UNIT_BUILD
		Object					=  DwarvenRoac
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:EreborRoacRecruit
		ButtonImage				= HIEreborRoac
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructStonehelm
		Command					= UNIT_BUILD
		Object					=  DwarvenThorinStonehelm
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:DwarvenThorinHelmRecruit
		ButtonImage				= histonehelmlotrera
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructThorin
		Command					= UNIT_BUILD
		Object					=  DwarvenThorin
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:DwarvenThorinRecruit
		ButtonImage				= HIEreborThorin
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructBifur
		Command					= UNIT_BUILD
		Object					=  DwarvenBifur
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:DwarvenBifurRecruit
		ButtonImage				= HIAzanulbizarThror
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructBofur
		Command					= UNIT_BUILD
		Object					=  DwarvenBofur
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:DwarvenBofurRecruit
		ButtonImage				= HIBofur
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructOin
		Command					= UNIT_BUILD
		Object					=  DwarvenOin
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:DwarvenOinRecruit
		ButtonImage				= HIOin
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructThrainOld
		Command					= UNIT_BUILD
		Object					=  DwarvenThrain
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:DwarvenThrainRecruit
		ButtonImage				= HIAzanulbizarThrain
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructThrorOld
		Command					= UNIT_BUILD
		Object					=  DwarvenThror
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:DwarvenThrorRecruit
		ButtonImage				= HIAzanulbizarThror
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructBalinYoung
		Command					= UNIT_BUILD
		Object					=  YoungBalin
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:DwarvenBalinRecruit
		ButtonImage				= HIAzanulbizarBalin
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructDainYoung
		Command					= UNIT_BUILD
		Object					=  YoungDain
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:DwarvenDainRecruit
		ButtonImage				= HIEreborDain
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructDwalinYoung
		Command					= UNIT_BUILD
		Object					=  YoungDwalin
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:DwalinRecruit
		ButtonImage				= HIAzanulbizarDwalin
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructThorinYoung
		Command					= UNIT_BUILD
		Object					=  YoungThorin
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:DwarvenThorinRecruit
		ButtonImage				= HIAzanulbizarThorin
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructRumil
		Command					= UNIT_BUILD
		Object					=  ElvenRumil
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:ElvenRumilRecruit
		ButtonImage				= HPRumilNew
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructOrophin
		Command					= UNIT_BUILD
		Object					=  ElvenOrophin
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:ElvenOrophinRecruit
		ButtonImage				= HIOrophinNew
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructIdrial
		Command					= UNIT_BUILD
		Object					=  ElvenIdrial
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:IdrialRecruit
		ButtonImage				= HIIdrialNew
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructHaldir
		Command					= UNIT_BUILD
		Object					=  ElvenHaldir
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:HaldirRecruit
		ButtonImage				= HIHaldirNew
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructCeleborn
		Command					= UNIT_BUILD
		Object					=  ElvenCeleborn
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:ElvenLorienCelebornRecruit
		ButtonImage				= HICelebornNew
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructGaladriel
		Command					= UNIT_BUILD
		Object					=  ElvenGaladrielLorien
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:ElvenGaladrielRecruit
		ButtonImage				= HIGaladrielNew
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructArwen
		Command					= UNIT_BUILD
		Object					=  ElvenArwen
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:ArwenRecruit
		ButtonImage				= HIrivArwen
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructGildor
		Command					= UNIT_BUILD
		Object					=  ElvenGildor
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:GildorRecruit
		ButtonImage				= HIrivgildor
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructElladan
		Command					= UNIT_BUILD
		Object					=  ElvenElladan
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:ElladanRecruit
		ButtonImage				= HIrivelladan
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructElrohir
		Command					= UNIT_BUILD
		Object					=  ElvenElrohir
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:ElrohirRecruit
		ButtonImage				= HIrivelrohir
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructHalbarad
		Command					= UNIT_BUILD
		Object					=  ArnorHalbarad
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:GondorHalbaradRecruit
		ButtonImage				= HIrivHalbarad
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructAragorn
		Command					= UNIT_BUILD
		Object					=  ElvenAragorn
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:RivendellAragornRecruit
		ButtonImage				= HIrivAragorn
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructAmdir
		Command					= UNIT_BUILD
		Object					=  CampaignAmdir
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:CampaignAmdirRecruit
		ButtonImage				= HIAmdir
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructElegost
		Command					= UNIT_BUILD
		Object					=  CampaignElegost
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:CampaignElegostRecruit
		ButtonImage				= hielegostbondsfriendship
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructLothrandir
		Command					= UNIT_BUILD
		Object					=  CampaignLothrandir
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:CampaignLothrandirRecruit
		ButtonImage				= HILothrandir
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructTorodan
		Command					= UNIT_BUILD
		Object					=  CampaignTorodan
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:CampaignToradanRecruit
		ButtonImage				= HIToradan
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructGlorfindel
		Command					= UNIT_BUILD
		Object					=  ElvenGlorfindel
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:ElvenGlorfindelRecruit
		ButtonImage				= HIrivGlorfindel
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructElrond
		Command					= UNIT_BUILD
		Object					=  ElvenElrond
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:ElrondRecruit
		ButtonImage				= HIrivElrond
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructFattyBolger
		Command					= UNIT_BUILD
		Object					=  ArnorFattyBolger
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:ArnorFattyBolgerRecruit
		ButtonImage				= hirivbolger
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructFarmerMaggot
		Command					= UNIT_BUILD
		Object					=  ArnorFarmerMaggot
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:ArnorFarmerMaggotRecruit
		ButtonImage				= hirivmaggot
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructFrodo
		Command					= UNIT_BUILD
		Object					=  FellowshipFrodo
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:FrodoRecruit
		ButtonImage				= HIFrodonew
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructSam
		Command					= UNIT_BUILD
		Object					=  FellowshipSam
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:FrodoRecruit
		ButtonImage				= HISamnew
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructSmeagol
		Command					= UNIT_BUILD
		Object					=  FellowshipSmeagol
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:FrodoRecruit
		ButtonImage				= HISmeagol
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructMerry
		Command					= UNIT_BUILD
		Object					=  RohanMerry
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:RohanMerryRecruit
		ButtonImage				= HIRohanMerry
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructPippin
		Command					= UNIT_BUILD
		Object					=  RohanPippin
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:RohanPippinRecruit
		ButtonImage				= HIPippinnew
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructTauriel
		Command					= UNIT_BUILD
		Object					=  MirkwoodTauriel
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:MirkwoodTaurielRecruit
		ButtonImage				= HIMirkwoodTauriel
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructGalion
		Command					= UNIT_BUILD
		Object					=  MirkwoodGalion
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:MirkwoodGalionRecruit
		ButtonImage				= HIMirkwoodGalion
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructFeren
		Command					= UNIT_BUILD
		Object					=  MirkwoodFeren
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:MirkwoodFerenRecruit
		ButtonImage				= HIMirkwoodFeren
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructRadagast
		Command					= UNIT_BUILD
		Object					=  MirkwoodRadagast
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:MirkwoodRadagastRecruit
		ButtonImage				= HIMirkwoodRadagast
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructGrimbeorn
		Command					= UNIT_BUILD
		Object					=  MirkwoodGrimbeorn
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:MirkwoodGrimbeornRecruit
		ButtonImage				= HIMirkwoodGrimbeorn
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructLegolas
		Command					= UNIT_BUILD
		Object					=  MirkwoodLegolas
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:RohanLegolasRecruit
		ButtonImage				= HIMirkwoodLegolas
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructThranduil
		Command					= UNIT_BUILD
		Object					=  MirkwoodThranduil
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:ElvenThranduilRecruit
		ButtonImage				= HIMirkwoodThranduil
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructFrumgar
		Command					= UNIT_BUILD
		Object					=  MirkwoodFrumgar
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:MirkwoodFrumgarRecruit
		ButtonImage				= HIMirkwoodFrumgar
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructGorbag
		Command					= UNIT_BUILD
		Object					=  MordorGorbag
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:MordorGorbagRecruit
		ButtonImage				= HIGorbag
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructAkorahil
		Command					= UNIT_BUILD
		Object					=  MordorAkhorahil
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:AkhorahilRecruit
		ButtonImage				= HiNazgulNew
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructUvatha
		Command					= UNIT_BUILD
		Object					=  MordorUvatha
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:UvathaRecruit
		ButtonImage				= HiNazgulNew
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructFellbeast
		Command					= UNIT_BUILD
		Object					=  MordorFellBeastInterface
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:MordorFellBeastRecruit
		ButtonImage				= HiFellbeastNew
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructShagrat
		Command					= UNIT_BUILD
		Object					=  MordorShagrat
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:MordorShagratRecruit
		ButtonImage				= HIShagrat
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructGothmog
		Command					= UNIT_BUILD
		Object					=  MordorGothmog
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:MordorGothmogRecruit
		ButtonImage				= HiGothmogNew
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructMouthofSauron
		Command					= UNIT_BUILD
		Object					=  MordorMouthOfSauron
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:MordorMouthOfSauronRecruit
		ButtonImage				= HIMouthNew
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructMollok
		Command					= UNIT_BUILD
		Object					=  MordorMollok
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:MordorMollokRecruit
		ButtonImage				= HIMollokNew
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructWitchKing
		Command					= UNIT_BUILD
		Object					=  MordorWitchKing
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:MordorWitchKingOnFellBeastRecruit
		ButtonImage				= HiWitchKingNew
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructSnaga
		Command					= UNIT_BUILD
		Object					=  IsengardSnaga
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:MordorShagratRecruit
		ButtonImage				= UIMordorOrcs
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructGrima
		Command					= UNIT_BUILD
		Object					=  IsengardWormTongue
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:IsengardWormtongueRecruit
		ButtonImage				= HIWormtongue
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructGrishnakh
		Command					= UNIT_BUILD
		Object					=  IsengardGrishnakh
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:IsengardGrishnakhRecruit
		ButtonImage				= HIGrishnakh
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructSharku
		Command					= UNIT_BUILD
		Object					=  IsengardSharku
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:IsengardSharkuRecruit
		ButtonImage				= HISharku
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructUgluk
		Command					= UNIT_BUILD
		Object					=  IsengardUgluk
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:IsengardUglukRecruit
		ButtonImage				= HIUgluknew
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructLurtz
		Command					= UNIT_BUILD
		Object					=  IsengardLurtz
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:IsengardLurtzRecruit
		ButtonImage				= HILurtz
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructWulfgar
		Command					= UNIT_BUILD
		Object					=  IsengardWulfgar
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:IsengardWulfgarRecruit
		ButtonImage				= HIWulfgar
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructSaruman
		Command					= UNIT_BUILD
		Object					=  IsengardSaruman
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:IsengardSarumanRecruit
		ButtonImage				= HISaruman
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructMuzgash
		Command					= UNIT_BUILD
		Object					=  WildMuzgash
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:WildMuzgashRecruit
		ButtonImage				= UIMMMuzgash
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructGolfimbul
		Command					= UNIT_BUILD
		Object					=  WildGolfimbul
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:WildGolfimbulRecruit
		ButtonImage				= UIMMGolfimbul
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructUrshak
		Command					= UNIT_BUILD
		Object					=  WildUrshak
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:WildUrshakRecruit
		ButtonImage				= HIUrshak
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructLug
		Command					= UNIT_BUILD
		Object					=  WildLugtheMauled
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:LugRecruitNew
		ButtonImage				= uilugthemauled
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructGreatGoblin
		Command					= UNIT_BUILD
		Object					=  WildGreatGoblin
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:WildGreatGoblinRecruit
		ButtonImage				= UIMMGG
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructBolg
		Command					= UNIT_BUILD
		Object					=  WildBolgNew
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:BolgRecruitNew
		ButtonImage				= uibolgnew
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructBolgOld
		Command					= UNIT_BUILD
		Object					=  Wyrm
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:BolgRecruit
		ButtonImage				= HIWyrm
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructGorg
		Command					= UNIT_BUILD
		Object					=  CampaignGorgtheTroll
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:BolgRecruitNew
		ButtonImage				= uisnowtroll
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructThrain
		Command					= UNIT_BUILD
		Object					=  GuldurThrain
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:GuldurThrainRecruit
		ButtonImage				= HIGuldurThrain
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructKrimpul
		Command					= UNIT_BUILD
		Object					=  GuldurKrimpul
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:GuldurKrimpulRecruit
		ButtonImage				= HIGuldurKrimpul
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructCargast
		Command					= UNIT_BUILD
		Object					=  GuldurCargast
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:GuldurCargastRecruit
		ButtonImage				= HIGuldurCargast
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructSaenathra
		Command					= UNIT_BUILD
		Object					=  GuldurSaenathra
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:GuldurSaenathraRecruit
		ButtonImage				= HIGuldurSaenathra
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructKhamul
		Command					= UNIT_BUILD
		Object					=  GuldurKhamul
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:GuldurKhamulRecruit
		ButtonImage				= HIGuldurKhamul
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructNecromancer
		Command					= UNIT_BUILD
		Object					=  GuldurNecromancer
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:NecromancerRecruit
		ButtonImage				= HIGuldurNecromancer
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructBeruthiel
		Command					= UNIT_BUILD
		Object					=  HaradBeruthiel
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:HaradBeruthielRecruit
		ButtonImage				= hiberuthiel
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructSyarRhul
		Command					= UNIT_BUILD
		Object					=  HaradSyarRhul
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:HaradSyarRhulRecruit
		ButtonImage				= hiblackvizier
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructSuladan
		Command					= UNIT_BUILD
		Object					=  HaradSuladan
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:HaradSuladanRecruit
		ButtonImage				= hisuladan
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructBurodapan
		Command					= UNIT_BUILD
		Object					=  HaradBurodapan
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:HaradBurodapanRecruit
		ButtonImage				= hiburodapan
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructCassimir
		Command					= UNIT_BUILD
		Object					=  HaradCassimir
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:HaradCassimirRecruit
		ButtonImage				= hicassimir
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructCaranLambar
		Command					= UNIT_BUILD
		Object					=  HaradCaranLambar
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:HaradCaranLambarRecruit
		ButtonImage				= hicaranlambar
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructGoldenKing
		Command					= UNIT_BUILD
		Object					=  HaradGoldenKing
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:HaradGoldenKingRecruit
		ButtonImage				= higoldenking
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructAicanaroc
		Command					= UNIT_BUILD
		Object					=  HaradAicanaroc
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:Aicanaroc
		ButtonImage				= uiaicanarocicon
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructZigur
		Command					= UNIT_BUILD
		Object					=  HaradZigur
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:HaradZigurRecruit
		ButtonImage				= HIZigur
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructOliphant
		Command					= UNIT_BUILD
		Object					=  HaradOliphaunt
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:ConstructHaradMumakil
		ButtonImage				= uimumakilbuttonnew
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructMegaSiegeLadder
		Command					= UNIT_BUILD
		Object					=  IsengardMegaLadder
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:ConstructIsengardSiegeLadder
		ButtonImage				= UIIsenLadder
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructEye
		Command					= UNIT_BUILD
		Object					=  EyeOfSauron
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:EyeofSauron
		ButtonImage				= HIEyeofSauron
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructSauron
		Command					= UNIT_BUILD
		Object					=  MordorSauron
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:SauronRecruit
		ButtonImage				= HISauronNew
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructShelob
		Command					= UNIT_BUILD
		Object					=  MordorShelobNew
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:ShelobRecruit
		ButtonImage				= HIShelob
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructSmaug
		Command					= UNIT_BUILD
		Object					=  WildSmaug
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:WildDrogothRecruit
		ButtonImage				= UIMMSmaug
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructDrogoth
		Command					= UNIT_BUILD
		Object					=  SummonedDragonJH1
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:WildDrogothRecruit
		ButtonImage				= HISummonedDragonBlue
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructDragon
		Command					= UNIT_BUILD
		Object					=  SummonedDragon
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:WildDrogothRecruit
		ButtonImage				= HISummonedDragon
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructDragonstrike
		Command					= UNIT_BUILD
		Object					=  SpellBookDragonStrikeDragon
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:WildDrogothRecruit
		ButtonImage				= HIDragonStrikeDragon
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructBalrog
		Command					= UNIT_BUILD
		Object					=  MordorBalrog
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:SummonBalrog
		ButtonImage				= uibalrogsword
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructGwanthaur
		Command					= UNIT_BUILD
		Object					=  GuldurGwanthaur
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:SummonGwanthaur
		ButtonImage				= HIGuldurGwanthaur
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructTomBombadil
		Command					= UNIT_BUILD
		Object					=  TomBombadil
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:SummonTomBombadil
		ButtonImage				= HITombBombadilnew
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructCelebrimbor
		Command					= UNIT_BUILD
		Object					=  RivendellCelebrimbor
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:HallOfFireSpawnCelebrimbor
		ButtonImage				= BIRivendellHOFSummon
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructWhiteStag
		Command					= UNIT_BUILD
		Object					=  MirkwoodWhiteStag
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:SummonWhiteStag
		ButtonImage				= uiwhitestagicon
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructEverholtBoar
		Command					= UNIT_BUILD
		Object					=  NeutralEverholtBoar
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:EverholtBoar
		ButtonImage				= SBRohanEverholtBoar
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructFingolfin
		Command					= UNIT_BUILD
		Object					=  RivendellFingolfin
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:HallOfFireSpawnFingolfin
		ButtonImage				= BIRivendellHOFSummon
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructGwaihir
		Command					= UNIT_BUILD
		Object					=  RivendellGwaihir
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:SummonEagleAlliesLorien
		ButtonImage				= HIGwahir
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructGilGalad
		Command					= UNIT_BUILD
		Object					=  RivendellGilGalad
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:HallOfFireSpawnGilGalad
		ButtonImage				= UILAGilGalad
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructTurin
		Command					= UNIT_BUILD
		Object					=  RivendellTurin
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:HallOfFireSpawnTurin
		ButtonImage				= BIRivendellHOFSummon
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructOropher
		Command					= UNIT_BUILD
		Object					=  SecondAgeOropher
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:ElvenThranduilRecruit
		ButtonImage				= uiOropher
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipGenericReviveHero
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructHarondorHero
		Command					= UNIT_BUILD
		Object					=  HarondorHero
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:ConstructHaradHarondorSpearmenHorde
		ButtonImage				= uihwharadrimspearmen
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipBuildaradHaradrimSpearmenHorde
		Radial					= Yes
		InPalantir	   			= No
	End
	CommandButton Command_ConstructSerpentGuardHero
		Command					= UNIT_BUILD
		Object					=  GuardoftheSerpentHero
		Options					= CANCELABLE
		TextLabel				= CONTROLBAR:ConstructGuardoftheSerpentHorde
		ButtonImage				= uiguardsoftheserpent
		ButtonBorderType    	= BUILD
		DescriptLabel       	= CONTROLBAR:ToolTipBuildGuardoftheSerpentHorde
		Radial					= Yes
		InPalantir	   			= No
	End
