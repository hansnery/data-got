//--------------------------------------------------------------------------	
//	GAME OF THRONES COMMAND BUTTONS
//--------------------------------------------------------------------------	
CommandButton Command_StannisFakeLeadershipButton
  Command          = SPECIAL_POWER
  SpecialPower     = SpecialAbilityFakeLeadership
  Options					 = NONPRESSABLE
  TextLabel        = CONTROLBAR:StannisLeadership
  ButtonImage      = StannisLeadershipButton
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
	ButtonImage		 	 = StannisRoyalFleetButton
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
  ButtonImage       = StannisProvenCommanderButton
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
  ButtonImage             = StannisLightbringerButton
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
	ButtonImage				= StannisOnlyForwardButton
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
  ButtonImage       = DavosLoyalService
  RadiusCursorType  = TrainingRadiusCursor
  ButtonBorderType  = ACTION
  DescriptLabel     = CONTROLBAR:TooltipDavosLoyalService
  InPalantir		  	= Yes
End

CommandButton Command_SpecialAbilityDavosOnionBarrels
 	Command						= SPECIAL_POWER
 	SpecialPower			= SpecialAbilityOnionBarrel
 	TextLabel					= CONTROLBAR:OnionKnight
 	ButtonImage				= DavosOnionKnight
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
  ButtonImage				= DavosHonestAccounting
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
	ButtonImage		 	 = DavosSmugglersTricks
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
  ButtonImage				= DavosUpjumpedSmuggler
  CursorName				= Bombard
  ButtonBorderType	= ACTION
  DescriptLabel			= CONTROLBAR:TooltipDavosUpjumpedSmuggler
  InvalidCursorName	= GenericInvalid
  InPalantir				= Yes
  AutoAbility				= Yes
  PresetRange				= 200.0
	; UnitSpecificSound	= DavosUpjumpedSmuggler
End