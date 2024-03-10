//--------------------------------------------------------------------------	
//	GAME OF THRONES COMMAND BUTTONS
//--------------------------------------------------------------------------	
CommandButton Command_StannisFakeLeadershipButton
  Command          = SPECIAL_POWER
  SpecialPower     = SpecialAbilityFakeLeadership
  Options					 = NONPRESSABLE
  TextLabel        = CONTROLBAR:StannisLeadership
  ButtonImage      = BAStannisLeadershipButton
  RadiusCursorType = TrainingRadiusCursor
  ButtonBorderType = ACTION
  DescriptLabel    = CONTROLBAR:ToolTipStannisLeadership
  InPalantir		   = Yes
End

CommandButton Command_SpecialAbilityStannisRoyalFleet
	Command			 		 = SPECIAL_POWER
	SpecialPower	 	 = SpecialAbilityStoreObjectsForLevel2TeleportHaldir
	Options			 		 = CONTEXTMODE_COMMAND NEED_TARGET_POS
	TextLabel		 		 = CONTROLBAR:StannisRoyalFleet
	ButtonImage		 	 = BAStannisRoyalFleetButton
	ButtonBorderType = ACTION
	DescriptLabel	 	 = CONTROLBAR:TooltipStannisRoyalFleet
	InPalantir		 	 = Yes
	RadiusCursorType  = RhllorRadiusCursor
	;UnitSpecificSound	= GloinVoiceTeleport
End

CommandButton Command_SpecialAbilityStannisProvenCommander
  Command           = SPECIAL_POWER
  SpecialPower      = SpecialAbilityKingsFavor
  Options           = NEED_TARGET_POS CONTEXTMODE_COMMAND
  TextLabel         = CONTROLBAR:StannisProvenCommander
  ButtonImage       = BAStannisProvenCommanderButton
  CursorName        = Bombard
  RadiusCursorType  = RhllorRadiusCursor
  InvalidCursorName = GenericInvalid
  ButtonBorderType  = ACTION
  DescriptLabel     = CONTROLBAR:ToolTipStannisProvenCommander
  InPalantir        = Yes
End

CommandButton Command_SpecialAbilityStannisLightbringer
  Command                 = SPECIAL_POWER
  SpecialPower            = SpecialAbilityAragornBladeMaster
  TextLabel               = CONTROLBAR:StannisLightbringer
  ButtonImage             = BAStannisLightbringerButton
  ButtonBorderType        = ACTION
  DescriptLabel           = CONTROLBAR:TooltipStannisLightbringer
  InPalantir              = Yes
  AutoAbility             = Yes
  AutoDelay               = 30.0
  PresetRange             = 50.0
  ; DisableOnModelCondition = WEAPONSET_TOGGLE_1
  ; UnitSpecificSound       = AragornVoiceElendil
End

CommandButton Command_SpecialAbilityStannisOnlyForward
	Command						= SPECIAL_POWER 
	SpecialPower			= SpecialAbilityStannisWarCry
	Options						= NEED_TARGET_POS
	TextLabel					= CONTROLBAR:StannisOnlyForward
	ButtonImage				= BAStannisOnlyForwardButton
	CursorName				= Bombard
	RadiusCursorType	= RhllorRadiusCursor
	InvalidCursorName	= GenericInvalid
	ButtonBorderType	= ACTION 
	DescriptLabel			= CONTROLBAR:ToolTipStannisOnlyForward
	InPalantir				= Yes
	AutoAbility				= Yes
End

CommandButton Command_DavosStannisBonus
  Command           = SPECIAL_POWER
  SpecialPower      = SpecialAbilityFakeLeadership2
  Options				  	= NONPRESSABLE
  TextLabel         = CONTROLBAR:DavosLoyalService
  ButtonImage       = BADavosLoyalService
  RadiusCursorType  = TrainingRadiusCursor
  ButtonBorderType  = ACTION
  DescriptLabel     = CONTROLBAR:TooltipDavosLoyalService
  InPalantir		  	= Yes
End

CommandButton Command_SpecialAbilityDavosOnionBarrels
 	Command						= SPECIAL_POWER
 	SpecialPower			= SpecialAbilityOnionBarrel
 	TextLabel					= CONTROLBAR:OnionKnight
 	ButtonImage				= BADavosOnionKnight
 	Options						= NEED_TARGET_POS CONTEXTMODE_COMMAND
 	CursorName				= Bombard
 	InvalidCursorName	= GenericInvalid
 	ButtonBorderType	= ACTION
 	DescriptLabel			= CONTROLBAR:ToolTipOnionKnight
 	InPalantir				= Yes
  AutoAbility				= Yes
	; UnitSpecificSound	= DavosOnionBarrels
End

CommandButton Command_SpecialAbilityDavosHonestAccounting
  Command						= SPECIAL_POWER
  SpecialPower			= SpecialAbilityHonestAccounting
  Options						= NEED_TARGET_ALLY_OBJECT NEED_TARGET_ENEMY_OBJECT NEED_TARGET_NEUTRAL_OBJECT
  TextLabel					= CONTROLBAR:DavosHonestAccounting
  ButtonImage				= BADavosHonestAccounting
  CursorName				= Bombard
  ButtonBorderType	= ACTION
  DescriptLabel			= CONTROLBAR:TooltipDavosHonestAccounting
  InvalidCursorName	= GenericInvalid
  InPalantir				= Yes
  AutoAbility				= Yes
  PresetRange				= 200.0
End

CommandButton Command_Davos_SpecialAbilityTeleportLevel2
	Command			 		 = SPECIAL_POWER
	SpecialPower	 	 = SpecialAbilityStoreObjectsForLevel2TeleportDavos
	Options			 		 = CONTEXTMODE_COMMAND NEED_TARGET_POS
	TextLabel		 		 = CONTROLBAR:DavosSmugglersTricks
	ButtonImage		 	 = BADavosSmugglersTricks
	ButtonBorderType = ACTION
	DescriptLabel	 	 = CONTROLBAR:TooltipDavosTeleport
	InPalantir		 	 = Yes
	RadiusCursorType = RhllorRadiusCursor
End

CommandButton Command_DavosTeleportStoredList
	Command			 		 = SPECIAL_POWER
	SpecialPower	 	 = SpecialAbilityTeleportStoredObjectsDavos
	Options			 		 = CONTEXTMODE_COMMAND NEED_TARGET_POS
	InPalantir		 	 = No
	RadiusCursorType = RhllorRadiusCursor	// should be different to the other	power probably.
End

CommandButton Command_DavosUpjumpedSmuggler
  Command						= SPECIAL_POWER
  SpecialPower			= SpecialAbilityDavosUpjumpedSmuggler
  Options						= NEED_TARGET_ALLY_OBJECT
  TextLabel					= CONTROLBAR:DavosUpjumpedSmuggler
  ButtonImage				= BADavosUpjumpedSmuggler
  CursorName				= Bombard
  ButtonBorderType	= ACTION
  DescriptLabel			= CONTROLBAR:TooltipDavosUpjumpedSmuggler
  InvalidCursorName	= GenericInvalid
  InPalantir				= Yes
  AutoAbility				= Yes
  PresetRange				= 200.0
	; UnitSpecificSound	= DavosUpjumpedSmuggler
End

CommandButton Command_SpecialAbilityGendryOfFleaBottom
	Command						= SPECIAL_POWER
	SpecialPower	   	= SpecialAbilityGendryOfFleaBottom
	Options						= NEED_TARGET_POS
	TextLabel					= CONTROLBAR:GendryOfFleaBottom
	ButtonImage				= BAGendryOfFleaBottom
	ButtonBorderType  = ACTION
	CursorName				= Bombard
	InvalidCursorName = GenericInvalid
	DescriptLabel	   	= CONTROLBAR:TooltipGendryOfFleaBottom
	InPalantir				= Yes   //	 To	be hidden by default
End

CommandButton Command_SpecialAbilityGendryOfStormsEnd
  Command          = SPECIAL_POWER
  SpecialPower     = SpecialAbilityFakeLeadership
  Options					 = NONPRESSABLE
  TextLabel        = CONTROLBAR:GendryOfStormsEnd
  ButtonImage      = BALordGendryOfStormsEnd
  RadiusCursorType = TrainingRadiusCursor
  ButtonBorderType = ACTION
  DescriptLabel    = CONTROLBAR:TooltipGendryOfStormsEnd
  InPalantir		   = Yes
End

CommandButton Command_SpecialAbilityGendryLeapLevel1
  Command					 = SPECIAL_POWER
  SpecialPower		 = SpecialAbilityGendryLeapLevel1
  Options					 = NEED_TARGET_POS CONTEXTMODE_COMMAND
  TextLabel				 = CONTROLBAR:GendryLeap
  ButtonImage			 = BALordGendryLeap
  RadiusCursorType = LeapRadiusCursor
  CursorName			 = Bombard
  ButtonBorderType = ACTION
  DescriptLabel		 = CONTROLBAR:ToolTipGendryLeap
  InPalantir			 = Yes
  AutoAbility			 = Yes
End

CommandButton Command_SpecialAbilityGendryLeapLevel3
  Command					 = SPECIAL_POWER
  SpecialPower		 = SpecialAbilityGendryLeapLevel3
  Options					 = NEED_TARGET_POS CONTEXTMODE_COMMAND
  TextLabel				 = CONTROLBAR:GendryLeap
  ButtonImage			 = BALordGendryLeap
  RadiusCursorType = LeapRadiusCursor
  CursorName			 = Bombard
  ButtonBorderType = ACTION
  DescriptLabel		 = CONTROLBAR:ToolTipGendryLeap
  InPalantir			 = Yes
  AutoAbility			 = Yes
End

CommandButton Command_SpecialAbilityGendryLeapLevel5
  Command					 = SPECIAL_POWER
  SpecialPower		 = SpecialAbilityGendryLeapLevel5
  Options					 = NEED_TARGET_POS CONTEXTMODE_COMMAND
  TextLabel				 = CONTROLBAR:GendryLeap
  ButtonImage			 = BALordGendryLeap
  RadiusCursorType = LeapRadiusCursor
  CursorName			 = Bombard
  ButtonBorderType = ACTION
  DescriptLabel		 = CONTROLBAR:ToolTipGendryLeap
  InPalantir			 = Yes
  AutoAbility			 = Yes
End

CommandButton Command_SpecialAbilityGendryLeapLevel8
  Command					 = SPECIAL_POWER
  SpecialPower		 = SpecialAbilityGendryLeapLevel8
  Options					 = NEED_TARGET_POS CONTEXTMODE_COMMAND
  TextLabel				 = CONTROLBAR:GendryLeap
  ButtonImage			 = BALordGendryLeap
  RadiusCursorType = LeapRadiusCursor
  CursorName			 = Bombard
  ButtonBorderType = ACTION
  DescriptLabel		 = CONTROLBAR:ToolTipGendryLeap
  InPalantir			 = Yes
  AutoAbility			 = Yes
End

CommandButton Command_SpecialAbilityGendrySkilledSmithLevel1
	Command                 = SPECIAL_POWER
	SpecialPower            = SpecialAbilityGendrySkilledSmithLevel1
	Options                 = NEED_TARGET_POS CONTEXTMODE_COMMAND
	TextLabel               = CONTROLBAR:GendrySkilledSmith
	ButtonImage             = BAGendrySkilledSmith
	CursorName              = Bombard
	DisableOnModelCondition = WEAPONSET_TOGGLE_1 USER_4
	RadiusCursorType        = EyeOfSauronRadiusCursor
	InvalidCursorName       = GenericInvalid
	ButtonBorderType        = ACTION
	DescriptLabel           = CONTROLBAR:ToolTipGendrySkilledSmith
	AutoAbility							= Yes
	InPalantir              = Yes
	UnitSpecificSound       = GendrySkilledSmith
End

CommandButton Command_SpecialAbilityGendrySkilledSmithLevel3
	Command                 = SPECIAL_POWER
	SpecialPower            = SpecialAbilityGendrySkilledSmithLevel3
	Options                 = NEED_TARGET_POS CONTEXTMODE_COMMAND
	TextLabel               = CONTROLBAR:GendrySkilledSmith
	ButtonImage             = BAGendrySkilledSmith
	CursorName              = Bombard
	DisableOnModelCondition = WEAPONSET_TOGGLE_1 USER_4
	RadiusCursorType        = EyeOfSauronRadiusCursor
	InvalidCursorName       = GenericInvalid
	ButtonBorderType        = ACTION
	DescriptLabel           = CONTROLBAR:ToolTipGendrySkilledSmith
	AutoAbility							= Yes
	InPalantir              = Yes
	UnitSpecificSound       = GendrySkilledSmith
End

CommandButton Command_SpecialAbilityGendrySkilledSmithLevel5
	Command                 = SPECIAL_POWER
	SpecialPower            = SpecialAbilityGendrySkilledSmithLevel5
	Options                 = NEED_TARGET_POS CONTEXTMODE_COMMAND
	TextLabel               = CONTROLBAR:GendrySkilledSmith
	ButtonImage             = BAGendrySkilledSmith
	CursorName              = Bombard
	DisableOnModelCondition = WEAPONSET_TOGGLE_1 USER_4
	RadiusCursorType        = EyeOfSauronRadiusCursor
	InvalidCursorName       = GenericInvalid
	ButtonBorderType        = ACTION
	DescriptLabel           = CONTROLBAR:ToolTipGendrySkilledSmith
	AutoAbility							= Yes
	InPalantir              = Yes
	UnitSpecificSound       = GendrySkilledSmith
End

CommandButton Command_SpecialAbilityGendrySkilledSmithLevel8
	Command                 = SPECIAL_POWER
	SpecialPower            = SpecialAbilityGendrySkilledSmithLevel8
	Options                 = NEED_TARGET_POS CONTEXTMODE_COMMAND
	TextLabel               = CONTROLBAR:GendrySkilledSmith
	ButtonImage             = BAGendrySkilledSmith
	CursorName              = Bombard
	DisableOnModelCondition = WEAPONSET_TOGGLE_1 USER_4
	RadiusCursorType        = EyeOfSauronRadiusCursor
	InvalidCursorName       = GenericInvalid
	ButtonBorderType        = ACTION
	DescriptLabel           = CONTROLBAR:ToolTipGendrySkilledSmith
	AutoAbility							= Yes
	InPalantir              = Yes
	UnitSpecificSound       = GendrySkilledSmith
End

CommandButton Command_SpecialAbilityGendryStrongSeed
	Command					  = SPECIAL_POWER
	SpecialPower		  = SpecialAbilityGimliHeroMode
	TextLabel				  = CONTROLBAR:GendryStrongSeed
	ButtonImage			  = BAGendryStrongSeed
	ButtonBorderType  = ACTION
	DescriptLabel		  = CONTROLBAR:ToolTipGendryStrongSeed
	UnitSpecificSound	= GendryStrongSeed
	InPalantir			  = Yes
	AutoAbility			  = Yes
End

CommandButton Command_SpecialAbilityGendryTheBull
  Command           = SPECIAL_POWER
  SpecialPower      = SpecialAbilityGendryTheBullCharge
  TextLabel         = CONTROLBAR:GendryTheBull
  ButtonImage       = BAGendryTheBull
  RadiusCursorType  = TrainingRadiusCursor
  ButtonBorderType  = ACTION
  DescriptLabel     = CONTROLBAR:ToolTipGendryTheBull
  InPalantir		    = Yes
  AutoAbility				= Yes
  UnitSpecificSound = GendryTheBull
End

CommandButton Command_SpecialAbilityGendryKnightOfTheHollowHill
	Command          = SPECIAL_POWER
	SpecialPower     = SpecialAbilityFakeLeadership2
	Options					 = NONPRESSABLE NEED_UPGRADE
	NeededUpgrade		 = Upgrade_ObjectLevel8
	TextLabel        = CONTROLBAR:GendryKnightOfTheHollowHill
	ButtonImage      = BAGendryKnightOfTheHollowHill
	RadiusCursorType = TrainingRadiusCursor
	ButtonBorderType = ACTION
	DescriptLabel    = CONTROLBAR:ToolTipKnightOfTheHollowHill
	InPalantir				= Yes
End

CommandButton Command_SpecialPowerMelisandreLvl3
  Command          = OBJECT_UPGRADE
	Options			  	 = CANCELABLE
  Upgrade          = Upgrade_DenethorLevel3
  TextLabel        = CONTROLBAR:PristessOfAsshai
  ButtonImage      = BAMelisandrePriestessOfAsshai
  ButtonBorderType = UPGRADE
  DescriptLabel    = CONTROLBAR:ToolTipPristessOfAsshaiLvl3
  InPalantir       = Yes
End

CommandButton Command_SpecialPowerMelisandreLvl6
  Command          = OBJECT_UPGRADE
	Options			  	 = CANCELABLE
  Upgrade          = Upgrade_DenethorLevel6
  TextLabel        = CONTROLBAR:PristessOfAsshai
  ButtonImage      = BAMelisandrePriestessOfAsshai
  ButtonBorderType = UPGRADE
  DescriptLabel    = CONTROLBAR:ToolTipPristessOfAsshaiLvl3
  InPalantir       = Yes
End

CommandButton Command_SpecialPowerMelisandreLvl10
  Command          = OBJECT_UPGRADE
	Options			  	 = CANCELABLE
  Upgrade          = Upgrade_ArwenLevel10
  TextLabel        = CONTROLBAR:PristessOfAsshai
  ButtonImage      = BAMelisandrePriestessOfAsshai
  ButtonBorderType = UPGRADE
  DescriptLabel    = CONTROLBAR:ToolTipPristessOfAsshaiLvl3
  InPalantir       = Yes
End

CommandButton Command_SpecialPowerMelisandreLvl10Final
  Command          = SPECIAL_POWER
  SpecialPower     = SpecialAbilityFakeLeadership
  Options					 = NONPRESSABLE
  TextLabel        = CONTROLBAR:PristessOfAsshai
  ButtonImage      = BAMelisandrePriestessOfAsshai
  RadiusCursorType = TrainingRadiusCursor
  ButtonBorderType = ACTION
  DescriptLabel    = CONTROLBAR:ToolTipPristessOfAsshaiLvl10
  InPalantir		   = Yes
End

CommandButton Command_SpecialAbilityMelisandreHealingFire
  Command           = SPECIAL_POWER 
  SpecialPower      = SpecialAbility202ElvenGrace
  TextLabel         = CONTROLBAR:MelisandreHealingFire
  ButtonImage       = BAMelisandreHealingFire
  ButtonBorderType  = ACTION 
  DescriptLabel     = CONTROLBAR:TooltipMelisandreHealingFire
  InPalantir				= Yes
  AutoAbility				= Yes
  PresetRange			  = 175.0
  NeedDamagedTarget	= Yes
  UnitSpecificSound = MelisandreInnerFire
End

CommandButton Command_SpecialAbilityTheNightIsDarkAndFullOfTerrors
  Command						= SPECIAL_POWER 
  SpecialPower			= SpecialAbilityMelisandreTheNightIsDarkAndFullOfTerrors
  Options						= NEED_TARGET_POS NEED_UPGRADE
	NeededUpgrade			= Upgrade_ObjectLevel6
  TextLabel					= CONTROLBAR:MelisandreTheNightIsDarkAndFullOfTerrors
  ButtonImage				= BAMelisandreTheNightIsDarkAndFullOfTerrors
  CursorName				= Bombard
  RadiusCursorType	= EyeOfSauronRadiusCursor
  InvalidCursorName	= GenericInvalid
  ButtonBorderType	= ACTION 
  DescriptLabel			= CONTROLBAR:ToolTipMelisandreTheNightIsDarkAndFullOfTerrors
  InPalantir				= Yes
  AutoAbility				= Yes
End

CommandButton Command_SpecialAbilityMelisandreDeadlySeduction
  Command						= SPECIAL_POWER 
  SpecialPower			= SpecialAbilityMelisandreDeadlySeduction
  Options						= NEED_TARGET_ALLY_OBJECT NEED_TARGET_ENEMY_OBJECT NEED_TARGET_NEUTRAL_OBJECT
  TextLabel					= CONTROLBAR:MelisandreDeadlySeduction
  ButtonImage				= BAMelisandreSeduction
  CursorName				= Bombard
  ButtonBorderType	= ACTION
  DescriptLabel			= CONTROLBAR:ToolTipMelisandreDeadlySeduction
  InvalidCursorName	= GenericInvalid
  InPalantir				= Yes
  AutoAbility				= Yes
  PresetRange				= 200.0
End

CommandButton Command_SpecialAbilityMelisandreShadowbinder
  Command           = SPECIAL_POWER
  SpecialPower      = SpecialAbilityMelisandreShadowbinder
	NeededUpgrade		  = Upgrade_Shadowbinder Upgrade_ObjectLevel10
  Options           = NEED_TARGET_ENEMY_OBJECT NEED_UPGRADE
  TextLabel         = CONTROLBAR:MelisandreShadowbinder
  CursorName        = EvilAbilityObj
  InvalidCursorName = GenericInvalid
  ButtonImage       = BAMelisandreShadowbinder
  ButtonBorderType  = ACTION
  DescriptLabel     = CONTROLBAR:ToolTipMelisandreShadowbinder
  InPalantir				= Yes
  AutoAbility				= Yes
End

CommandButton Command_ConstructBaratheonPorter
	Command				   = UNIT_BUILD
	Object				   = BaratheonPorter
	Options				   = CANCELABLE
	TextLabel			   = CONTROLBAR:ConstructMordorPorter
	ButtonImage			 = UIGondorBuilder
	ButtonBorderType = BUILD
	DescriptLabel		 = CONTROLBAR:ToolTipConstructMordorPorter
	Radial				   = Yes
	InPalantir	   	 = Yes
	ShowProductionCount = Yes
End

CommandButton Command_SelectRevivablesDragonstoneFortress
	Command           = PUSH_VISIBLE_COMMAND_RANGE
	TextLabel         = CONTROLBAR:SelectRevivablesMordorFortress
	ButtonImage       = BABaratheonCrownButton
	ButtonBorderType  = SYSTEM
	DescriptLabel     = CONTROLBAR:ToolTipCommandSelectRevivablesMordorFortress
	Radial            = Yes
	CommandRangeStart	= 23	//Starts its counting at 0, so command button 8 is 7
	CommandRangeCount	= 9
End

CommandButton Command_PurchaseUpgradeDragonstoneFortressBaratheonBanners
	Command          = OBJECT_UPGRADE
	Upgrade          = Upgrade_MordorFortressDoomPyres
	Options			  	 = CANCELABLE
	TextLabel        = CONTROLBAR:PurchaseUpgradeDragonstoneFortressBaratheonBanners
	ButtonImage      = BAFiery_Heart_Banner
	ButtonBorderType = UPGRADE
	DescriptLabel    = CONTROLBAR:ToolTipPurchaseUpgradeMordorFortressDoomPyres
	Radial           = Yes
	InPalantir	   	 = No
End

CommandButton Command_PurchaseUpgradeDragonstoneFortressLavaMoat
	Command          = OBJECT_UPGRADE
	Upgrade          = Upgrade_MordorFortressLavaMoat
	Options			  	 = CANCELABLE
	TextLabel        = CONTROLBAR:PurchaseUpgradeDragonstoneFortressLavaMoat
	ButtonImage      = BIMordorLavaMoat
	ButtonBorderType = UPGRADE
	DescriptLabel    = CONTROLBAR:ToolTipPurchaseUpgradeMordorFortressLavaMoat
	Radial           = Yes
	InPalantir	   	 = No
End

CommandButton Command_PurchaseUpgradeDragonstoneFortressSmokeAndBrimstone
	Command          = OBJECT_UPGRADE
	Upgrade          = Upgrade_MordorFortressMagmaCauldrons
	Options			  	 = CANCELABLE
	TextLabel        = CONTROLBAR:PurchaseUpgradeDragonstoneFortressSmokeAndBrimstone
	ButtonImage      = BADragonstoneSmokeAndBrimstone
	ButtonBorderType = UPGRADE
	DescriptLabel    = CONTROLBAR:ToolTipPurchaseUpgradeMordorFortressMagmaCauldrons
	Radial           = Yes
	InPalantir	   	 = No
End

CommandButton Command_FireDragonstoneFortressSmokeAndBrimstone
	Command				   = SPECIAL_POWER
	SpecialPower		 = SpecialAbilityMordorFortressMagmaCauldrons
	;Options			   = HIDE_WHILE_DISABLED
	TextLabel			   = CONTROLBAR:FireWeaponDragonstoneFortressSmokeAndBrimstone
	ButtonImage			 = BADragonstoneSmokeAndBrimstone
	ButtonBorderType = ACTION
	DescriptLabel		 = CONTROLBAR:ToolTipFireWeaponDragonstoneFortressSmokeAndBrimstone
	Radial				   = Yes
	AutoAbility			 = Yes
	InPalantir			 = No
End

CommandButton Command_PurchaseUpgradeDragonstoneFortressValyrianSorcery
	Command          = OBJECT_UPGRADE
	Upgrade          = Upgrade_MordorFortressMorgulSorceryTrigger
	Options			  	 = CANCELABLE
	TextLabel        = CONTROLBAR:PurchaseUpgradeDragonstoneFortressValyrianSorcery
	ButtonImage      = BADragonstoneValyrianSorcery
	ButtonBorderType = UPGRADE
	DescriptLabel    = CONTROLBAR:ToolTipPurchaseUpgradeDragonstoneFortressValyrianSorcery
	Radial           = Yes
	InPalantir	   	 = No
End

CommandButton Command_PurchaseUpgradeDragonstoneFortressStoneDrum
	Command          = OBJECT_UPGRADE
	Upgrade          = Upgrade_MordorFortressGorgorothSpire
	Options			  	 = CANCELABLE NEED_UPGRADE
	NeededUpgrade		 = Upgrade_MordorFortressMorgulSorcery
	TextLabel        = CONTROLBAR:PurchaseUpgradeDragonstoneFortressStoneDrum
	ButtonImage      = BADragonstoneStoneDrum
	ButtonBorderType = UPGRADE
	DescriptLabel    = CONTROLBAR:ToolTipPurchaseUpgradeDragonstoneFortressStoneDrum
	Radial           = Yes
	InPalantir	   	 = No
	LacksPrerequisiteLabel = CONTROLBAR:ToolTipPurchaseUpgradeDragonstoneFortressStoneDrum
End

CommandButton Command_SelectUpgradesDragonstoneFortress
	Command           = PUSH_VISIBLE_COMMAND_RANGE
	TextLabel         = CONTROLBAR:SelectUpgradesMordorFortress
	ButtonImage       = BAStannisSigil
	ButtonBorderType  = SYSTEM
	DescriptLabel     = CONTROLBAR:ToolTipCommandSelectUpgradesMordorFortress
	Radial            = Yes
	CommandRangeStart	= 11	//Starts its counting at 0, so command button 8 is 7
	CommandRangeCount	= 6
End

CommandButton Command_SpecialPowerShireenLvl3
  Command          = OBJECT_UPGRADE
	Options			  	 = CANCELABLE
  Upgrade          = Upgrade_DenethorLevel3
  TextLabel        = CONTROLBAR:PrincessOfDragonstone
  ButtonImage      = BABaratheonSigil
  ButtonBorderType = UPGRADE
  DescriptLabel    = CONTROLBAR:ToolTipPrincessOfDragonstone
  InPalantir       = Yes
End

CommandButton Command_SpecialPowerShireenLvl6
  Command          = OBJECT_UPGRADE
	Options			  	 = CANCELABLE
  Upgrade          = Upgrade_DenethorLevel6
  TextLabel        = CONTROLBAR:PrincessOfDragonstone
  ButtonImage      = BABaratheonSigil
  ButtonBorderType = UPGRADE
  DescriptLabel    = CONTROLBAR:ToolTipPrincessOfDragonstone
  InPalantir       = Yes
End

CommandButton Command_SpecialPowerShireenLvl10
  Command          = OBJECT_UPGRADE
	Options			  	 = CANCELABLE
  Upgrade          = Upgrade_ArwenLevel10
  TextLabel        = CONTROLBAR:PrincessOfDragonstone
  ButtonImage      = BABaratheonSigil
  ButtonBorderType = UPGRADE
  DescriptLabel    = CONTROLBAR:ToolTipPrincessOfDragonstone
  InPalantir       = Yes
End

CommandButton Command_SpecialPowerShireenLvl10Final
  Command          = SPECIAL_POWER
  SpecialPower     = SpecialAbilityFakeLeadership
  Options					 = NONPRESSABLE
  TextLabel        = CONTROLBAR:PrincessOfDragonstone
  ButtonImage      = BABaratheonSigil
  RadiusCursorType = TrainingRadiusCursor
  ButtonBorderType = ACTION
  DescriptLabel    = CONTROLBAR:ToolTipToolTipPrincessOfDragonstoneLvl10
  InPalantir		   = Yes
End

CommandButton Command_SpecialPowerShireenGoodAndKind
  Command          = SPECIAL_POWER
  SpecialPower     = SpecialAbilityFakeLeadership
  Options					 = NONPRESSABLE OK_FOR_MULTI_SELECT
  TextLabel        = CONTROLBAR:ShireenGoodAndKind
  ButtonImage      = BAShireenGoodAndKind
  ButtonBorderType = ACTION
  DescriptLabel    = CONTROLBAR:TooltipShireenGoodAndKind
  InPalantir       = Yes
End

CommandButton Command_SpecialPowerShireenGlowOfTheGreyscale
	Command					 = SPECIAL_POWER
	SpecialPower		 = SpecialAbilityGlorfindelBladeOfPurity
	TextLabel				 = CONTROLBAR:ShireenGlowOfTheGreyscale
	DescriptLabel		 = CONTROLBAR:ToolTipShireenGlowOfTheGreyscale
	ButtonImage			 = BAShireenGlowOfTheGreyscale
	ButtonBorderType = ACTION
	InPalantir			 = Yes
	AutoAbility			 = Yes
End

CommandButton Command_SpecialAbilityShireenLearnedChild
  Command						= SPECIAL_POWER
  SpecialPower			= SpecialAbilityShireenLearnedChild
  Options						= NEED_TARGET_ALLY_OBJECT NEED_UPGRADE
  NeededUpgrade		  = Upgrade_ObjectLevel6
  TextLabel					= CONTROLBAR:ShireenLearnedChild
  ButtonImage				= BAShireenLearnedChild
  CursorName				= Bombard
  ButtonBorderType	= ACTION
  DescriptLabel			= CONTROLBAR:ToolTipShireenLearnedChild
  InvalidCursorName	= GenericInvalid
  InPalantir				= Yes
  AutoAbility				= Yes
  PresetRange				= 200.0
End

CommandButton Command_SalladhorSaanFakeLeadership
  Command          = SPECIAL_POWER
  SpecialPower     = SpecialAbilityFakeLeadership
  Options			     = NONPRESSABLE
  TextLabel        = CONTROLBAR:PrinceOfTheNarrowSea
  ButtonImage      = BACorsairOfLys
  RadiusCursorType = IronHandRadiusCursor
  ButtonBorderType = ACTION
  DescriptLabel    = CONTROLBAR:ToolTipPrinceOfTheNarrowSea
  InPalantir		   = Yes
End

CommandButton Command_SpecialAbilityButAGoodFriend
  Command			      = SPECIAL_POWER
  SpecialPower		  = SpecialAbilityArbiterofFaith
  Options			      = NEED_TARGET_ALLY_OBJECT
  TextLabel			    = CONTROLBAR:ButAGoodFriend
  ButtonImage		    = BASalladhorSaanButAGoodFriend
  CursorName		    = Bombard
  ButtonBorderType	= ACTION
  DescriptLabel		  = CONTROLBAR:ToolTipButAGoodFriend
  InvalidCursorName	= GenericInvalid
  ;UnitSpecificSound	= ForlongVoiceTrueHeart
  InPalantir		    = Yes
  AutoAbility		    = Yes
  PresetRange		    = 200.0
End

CommandButton Command_SpecialAbilityDesireOfPlunder
  Command           = SPECIAL_POWER
  SpecialPower      = SpecialAbilityWateryGraves
  Options           = NEED_TARGET_POS CONTEXTMODE_COMMAND OK_FOR_MULTI_EXECUTE OK_FOR_MULTI_SELECT
  TextLabel         = CONTROLBAR:DesireOfPlunder
  ButtonImage       = BASalladhorSaanDesireOfPlunder
  RadiusCursorType  = AkallabethCursor
  InvalidCursorName = GenericInvalid
  ButtonBorderType  = ACTION
  DescriptLabel     = CONTROLBAR:ToolTipDesireOfPlunder
  AutoAbility			  = Yes
  InPalantir			  = Yes
End

CommandButton Command_SelectBaratheonDavosUpgrades
	Command           = PUSH_VISIBLE_COMMAND_RANGE
	TextLabel         = CONTROLBAR:SelectBaratheonDavosUpgrades
	ButtonImage       = BADavosUpgrades
	ButtonBorderType  = SYSTEM 
	DescriptLabel     = CONTROLBAR:ToolTipCommandSelectBaratheonDavosUpgrades
	Radial            = Yes
	CommandRangeStart	= 17	//Starts its counting at 0, so command button 8 is 7
	CommandRangeCount	= 3
End

CommandButton Command_SelectBaratheonMelisandreUpgrades
	Command           = PUSH_VISIBLE_COMMAND_RANGE
	TextLabel         = CONTROLBAR:SelectBaratheonMelisandreUpgrades
	ButtonImage       = BAMelisandreUpgrades
	ButtonBorderType  = SYSTEM 
	DescriptLabel     = CONTROLBAR:ToolTipCommandSelectBaratheonMelisandreUpgrades
	Radial            = Yes
	CommandRangeStart	= 20	//Starts its counting at 0, so command button 8 is 7
	CommandRangeCount	= 3
End

CommandButton Command_SelectBaratheonLawfulSon
  Command          = PLAYER_UPGRADE
  Upgrade          = Upgrade_BaratheonLawfulSonTrigger
  Options					 = NEED_UPGRADE CANCELABLE
	NeededUpgrade	   = Upgrade_BaratheonLawfulSonAvailableIsTrue
  TextLabel        = CONTROLBAR:PurchaseUpgradeBaratheonLawfulSon
  ButtonImage      = BALawfulSon
  ButtonBorderType = UPGRADE
  DescriptLabel    = CONTROLBAR:ToolTipPurchaseUpgradeBaratheonLawfulSon
  Radial           = Yes
  InPalantir	   	 = Yes
	LacksPrerequisiteLabel = TOOLTIP:LawfulSonIsMutuallyExclusive
End

CommandButton Command_SelectBaratheonDavosUpgrade2
  Command          = PLAYER_UPGRADE
  Upgrade          = Upgrade_MenFortressNumenorStoneworkTrigger
  Options					 = CANCELABLE
  TextLabel        = CONTROLBAR:PurchaseUpgradeBaratheonWeatheredByTheStorm
  ButtonImage      = BAWeatheredByTheStorm
  ButtonBorderType = UPGRADE
  DescriptLabel    = CONTROLBAR:ToolTipPurchaseUpgradeBaratheonWeatheredByTheStorm
  Radial           = Yes
  InPalantir	   	 = Yes
End

CommandButton Command_SelectBaratheonKingsBloodPower
  Command          = PLAYER_UPGRADE
  Upgrade          = Upgrade_BaratheonKingsBloodPowerTrigger
  Options					 = NEED_UPGRADE CANCELABLE
	NeededUpgrade	   = Upgrade_BaratheonKingsBloodPowerAvailableIsTrue
  TextLabel        = CONTROLBAR:PurchaseUpgradeBaratheonKingsBloodPower
  ButtonImage      = BAPowerInKingsBlood
  ButtonBorderType = UPGRADE
  DescriptLabel    = CONTROLBAR:ToolTipPurchaseUpgradeBaratheonKingsBloodPower
  Radial           = Yes
  InPalantir	   	 = Yes
	LacksPrerequisiteLabel = TOOLTIP:KingsBloodPowerIsMutuallyExclusive
End

CommandButton Command_SelectBaratheonMelisandreUpgrade2
  Command          = PLAYER_UPGRADE
  Upgrade          = Upgrade_MenFortressNumenorStoneworkTrigger
  Options					 = CANCELABLE
  TextLabel        = CONTROLBAR:PurchaseUpgradeBaratheonWeatheredByTheStorm
  ButtonImage      = BAWeatheredByTheStorm
  ButtonBorderType = UPGRADE
  DescriptLabel    = CONTROLBAR:ToolTipPurchaseUpgradeBaratheonWeatheredByTheStorm
  Radial           = Yes
  InPalantir	   	 = Yes
End

CommandButton Command_DrogonStun
  Command           = SPECIAL_POWER
  SpecialPower      = SpecialAbilityLurtzCripple
  Options           = NEED_TARGET_ENEMY_OBJECT
  TextLabel         = CONTROLBAR:SpecialAbilityDrogonStun
  CursorName        = EvilAbilityObj
  InvalidCursorName = GenericInvalid
  ButtonImage       = UIMMBolgDebuff
  ButtonBorderType  = ACTION
  DescriptLabel     = CONTROLBAR:ToolTipSpecialAbilityDrogonStun
  InPalantir			  = Yes
  AutoAbility			  = Yes
End

CommandButton Command_DrogonFlamestrike
	Command           = SPECIAL_POWER
	SpecialPower      = SpecialAbilityDrogothFireball
	Options           = NEED_TARGET_ENEMY_OBJECT NEED_TARGET_ALLY_OBJECT NEED_TARGET_NEUTRAL_OBJECT
	TextLabel         = CONTROLBAR:SpecialAbilityDrogonFlamestrike
	ButtonImage       = uikharonaxflamestrike
	ButtonBorderType  = ACTION
	DescriptLabel     = CONTROLBAR:ToolTipSpecialAbilityKhanoraxFlamestrike
	CursorName        = EvilAbilityObj
	InvalidCursorName = GenericInvalid
	AutoAbility				= Yes
	InPalantir				= Yes
End

CommandButton Command_DrogonsWrath
  Command          = SPECIAL_POWER
  SpecialPower     = SpecialAbilityScreech
  TextLabel        = CONTROLBAR:DrogonsWrath
  ButtonImage      = uikharonaxpower5
  ButtonBorderType = ACTION
  DescriptLabel    = CONTROLBAR:TooltipGlaurungsWrath
  InPalantir			 = Yes
  AutoAbility			 = Yes
  PresetRange			 = 150
End

CommandButton Command_DrogonWingBlast
	Command          = SPECIAL_POWER
	SpecialPower     = SpecialAbilityWingBlast
	Options          = NEED_TARGET_POS CONTEXTMODE_COMMAND
	TextLabel        = CONTROLBAR:SpecialAbilityDrogonWingBlast
	ButtonImage      = TGDrogonWingBlastButton
	ButtonBorderType = ACTION
	RadiusCursorType = WingBlastRadiusCursor
	DescriptLabel    = CONTROLBAR:ToolTipSpecialAbilityDrogonWingBlast
	InPalantir			 = Yes
	AutoAbility			 = Yes
End

CommandButton Command_DrogonDracarys
	Command          = SPECIAL_POWER
	SpecialPower     = SpecialAbilityDrogothIncinerate
	Options          = NEED_TARGET_POS CONTEXTMODE_COMMAND
	TextLabel        = CONTROLBAR:SpecialAbilityDrogonDracarys
	ButtonImage      = uikharonaxflamingruin
	ButtonBorderType = ACTION
	RadiusCursorType = FireBreathRadiusCursor
	DescriptLabel    = CONTROLBAR:ToolTipSpecialAbilityFlamingRuin
	InPalantir			 = Yes
	AutoAbility			 = Yes
End