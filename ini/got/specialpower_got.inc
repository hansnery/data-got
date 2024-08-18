;//////////////////////////////////////////////////////////////////////////////
;// Game of Thrones Submod
;//////////////////////////////////////////////////////////////////////////////
SpecialPower SpellBookFieryFervour
	Enum                		= SPECIAL_SPELL_BOOK_HEAL
	Flags										= WATER_OK RESPECT_RECHARGE_TIME_DISCOUNT
	ReloadTime         			= SPELL_RECHARGE_TIME_TIER_1
	RequiredSciences     		= SCIENCE_FieryFervour
	RadiusCursorRadius  		= 150
	; InitiateAtLocationSound = DrogothVoxFireballEveryone ;HasharinWickedMirage GuildedGuardWeepingBlades
End

SpecialPower SpellBookFireGazing
	Enum										= SPECIAL_SPELL_BOOK_PALANTIR_VISION
	Flags										= WATER_OK RESPECT_RECHARGE_TIME_DISCOUNT
	ReloadTime							= SPELL_RECHARGE_TIME_TIER_1
	RadiusCursorRadius			= 200.0
	RequiredSciences				= SCIENCE_FireGazing
	InitiateAtLocationSound	= LightOfRhllorCreated
End

SpecialPower SpellBookWarChantStannis
	Enum							 = SPECIAL_SPELL_BOOK_WAR_CHANT
	Flags							 = WATER_OK RESPECT_RECHARGE_TIME_DISCOUNT
	ReloadTime      	 = SPELL_RECHARGE_TIME_TIER_1
	RadiusCursorRadius = 75.0
	RequiredSciences	 = SCIENCE_WarChantStannis
	InitiateAtLocationSound = SpellMordorRallyingCall
End

SpecialPower SpellBookShaftsOfDragonmont
	Enum										= SPECIAL_SPELL_BOOK_CHILL_WIND
	RadiusCursorRadius			= 150
	RequiredSciences				= SCIENCE_ShaftsOfDragonmont
	ReloadTime							= SPELL_RECHARGE_TIME_TIER_1
	InitiateAtLocationSound = SpellCrackOfDoomSoundMS
	ViewObjectDuration			= 5000
	ViewObjectRange					= 150
	Flags										= NO_FORBIDDEN_OBJECTS RESPECT_RECHARGE_TIME_DISCOUNT
	ForbiddenObjectFilter		= NONE +WatcherHead +WatcherHittingArm +WatcherCaldera
	ForbiddenObjectRange		= 50
End

SpecialPower SpellBookMightOfTheStormlands
	Enum						 = SPECIAL_SPELL_BOOK_CALL_THE_HORDE
	RequiredSciences = SCIENCE_MightOfTheStormlands
	ReloadTime			 = SPELL_RECHARGE_TIME_TIER_2
	InitiateSound		 = SpellCallTheHordeStereo
	Flags						 = RESPECT_RECHARGE_TIME_DISCOUNT
End

SpecialPower SpellBookBaratheonRebuild
	Enum							 = SPECIAL_SPELL_BOOK_REBUILD
	Flags							 = WATER_OK RESPECT_RECHARGE_TIME_DISCOUNT
	ReloadTime				 = SPELL_RECHARGE_TIME_TIER_1
	RadiusCursorRadius = SPELL_REBUILD_RADIUS_CURSOR
	RequiredSciences	 = SCIENCE_BaratheonRebuild
	InitiateAtLocationSound = SpellRebuild
End

SpecialPower SpellBookBleedingStar
	Enum                    = SPECIAL_SPELL_BOOK_DARKNESS
	RequiredSciences        = SCIENCE_BleedingStar
	ReloadTime              = SPELL_RECHARGE_TIME_TIER_3
	InitiateAtLocationSound = SpellBleedingStar
	Flags					 					= RESPECT_RECHARGE_TIME_DISCOUNT
End

SpecialPower SpellBookPirateAllies
	Enum					= SPECIAL_SPELL_BOOK_HOBBIT_ALLIES
	RequiredSciences		= SCIENCE_PirateAllies
	ReloadTime				= SPELL_RECHARGE_TIME_TIER_2
	InitiateAtLocationSound	= BaratheonLysCorsairs
	RadiusCursorRadius		= 100.0
	Flags					= NO_FORBIDDEN_OBJECTS RESPECT_RECHARGE_TIME_DISCOUNT
	ForbiddenObjectFilter	= NO_SUMMON_NEAR_OBJECT_FILTER
	ForbiddenObjectRange	= 100.0
End

SpecialPower SpellBookSaltAndSmoke
	Enum					= SPECIAL_SPELL_BOOK_TAINT
	RadiusCursorRadius		= SPELLBOOK_TAINT_RADIUS
	RequiredSciences		= SCIENCE_SaltAndSmoke
	ReloadTime				= SPELL_RECHARGE_TIME_TIER_2
	InitiateAtLocationSound = SpellTaint
	ViewObjectDuration		= 5000
	ViewObjectRange			= SPELLBOOK_TAINT_RADIUS
	Flags					= NO_FORBIDDEN_OBJECTS RESPECT_RECHARGE_TIME_DISCOUNT
	ForbiddenObjectFilter	= NONE +WatcherHead +WatcherHittingArm +WatcherCaldera
	ForbiddenObjectRange	= SPELLBOOK_TAINT_RADIUS
End

SpecialPower SpellBookLightbringer
	Enum				= SPECIAL_SPELL_BOOK_ELVEN_GIFTS
  RequiredSciences			= SCIENCE_Lightbringer
  ReloadTime      			= 0
  Flags						= RESPECT_RECHARGE_TIME_DISCOUNT
End

SpecialPower SpellBookShadowbinder
	Enum						 = SPECIAL_SPELL_BOOK_FUEL_THE_FIRES
	RequiredSciences = SCIENCE_Shadowbinder
	ReloadTime       = 0
	Flags						 = RESPECT_RECHARGE_TIME_DISCOUNT
	InitiateSound		 = SpellDwarvenRiches1
End

SpecialPower SpellBookStannisKnights
	Enum										= SPECIAL_SPELL_BOOK_ROHAN_ALLIES
	RequiredSciences				= SCIENCE_StannisKnights
	ReloadTime      				= SPELL_RECHARGE_TIME_TIER_4
	InitiateAtLocationSound = StannisKnightsSpawned
	RadiusCursorRadius			= 100.0
	Flags										= NO_FORBIDDEN_OBJECTS RESPECT_RECHARGE_TIME_DISCOUNT
	ForbiddenObjectFilter		= AOTR_NO_STRUCTURE_SUMMON_NEAR_OBJECT_FILTER
	ForbiddenObjectRange		= 100.0
End

SpecialPower SpellBookLightOfRhllor
	Enum										= SPECIAL_SPELL_BOOK_EYE_OF_SAURON
	Flags										= WATER_OK RESPECT_RECHARGE_TIME_DISCOUNT
	ReloadTime						 	= SPELL_RECHARGE_TIME_TIER_4
	RadiusCursorRadius			= 75.0
	RequiredSciences				= SCIENCE_LightOfRhllor
	InitiateAtLocationSound	= BaratheonLordCastYourLightUponUs ;BaratheonLordCastYourLightUponUs ;LightOfRhllorCreated
End
; Spellbook End
;------------------------------------------------------------------------------
; GAME OF THRONES HEROES
;------------------------------------------------------------------------------
SpecialPower SpecialAbilityStannisWarCry
	Enum						   			= SPECIAL_GENERAL_TARGETLESS_TWO
	ReloadTime					   	= 180000
	RadiusCursorRadius			= DAIN_MIGHTYRAGE_EFFECT_RADIUS
End

SpecialPower SpecialAbilityMelisandreTheNightIsDarkAndFullOfTerrors
	Enum										= SPECIAL_SPELL_BOOK_RALLYING_CALL
	ReloadTime							= 120000
	RadiusCursorRadius			= 100.0
	Flags										= NO_FORBIDDEN_OBJECTS LIMIT_DISTANCE WATER_OK
	MaxCastRange						= 500
	InitiateAtLocationSound	= TheNightIsDarkAndFullOfTerrors
End

SpecialPower SpecialAbilityMelisandreDeadlySeduction
	Enum				 						= SPECIAL_AT_VISIBLE_OBJECT
	ReloadTime	 						= 120000
	ObjectFilter 						= ANY +HERO ALLIES ENEMIES NEUTRAL -BaratheonMelisandre
	MaxCastRange 						= 500
End

SpecialPower SpecialAbilityMelisandreFriendlySeduction
	Enum						   = SPECIAL_KINGS_FAVOR
	ReloadTime				 = 150000
	RadiusCursorRadius = 50.0
	Flags						   = NEEDS_OBJECT_FILTER
	ObjectFilter			 = ANY +HORDE -SUMMONED SAME_PLAYER
End

SpecialPower SpecialAbilityMelisandreShadowbinder
	Enum				 = SPECIAL_SARUMAN_FIRE_BALL
	ReloadTime	 = SPELL_RECHARGE_TIME_TIER_4
	Flags				 = NEEDS_OBJECT_FILTER
	ObjectFilter = ANY +HERO ENEMIES NEUTRAL -BaratheonMelisandre
	MaxCastRange = 500
	ForbiddenObjectFilter	= ANY +STRUCTURE
	ForbiddenObjectRange	= 5
End

SpecialPower SpecialAbilityHonestAccounting
	Enum					= SPECIAL_AT_VISIBLE_OBJECT
	ReloadTime		= 120000
	ObjectFilter 	= ANY +HERO -BaratheonDavos
	MaxCastRange	= 500
	InitiateSound	= DavosHonestAccounting
End

SpecialPower SpecialAbilityOnionBarrel
  Enum								= SPECIAL_SKULL_TOTEM
  ReloadTime					= 180000
  RadiusCursorRadius	= 5
  Flags								= LIMIT_DISTANCE
  MaxCastRange				= 200
	InitiateSound				= DavosOnionsBarrel
End

SpecialPower SpecialAbilityStoreObjectsForLevel2TeleportDavos
	Enum							 = SPECIAL_STORE_LIST_1
	RadiusCursorRadius = 100.0
	ReloadTime				 = 180000						   // Uses chained reload time.
	ObjectFilter			 = ANY +INFANTRY +CAVALRY +HERO -GondorTrebuchet ALLIES +BaratheonDavos
	InitiateSound			 = DavosSmugglersTricks
End

SpecialPower SpecialAbilityTeleportStoredObjectsDavos
	Enum			   = SPECIAL_TELEPORT_LIST_TO_POSITION
	RadiusCursorRadius = 100.0
	ReloadTime		   = 180000
End

SpecialPower SpecialAbilityDavosUpjumpedSmuggler
	Enum					= SPECIAL_AT_VISIBLE_OBJECT
	ReloadTime		= 180000
	ObjectFilter	= CRIPPLE_STRIKE_202_SPECIAL_OBJECT_FILTER
	InitiateSound	= DavosHardTruths
End

SpecialPower SpecialAbilityGendryOfFleaBottom
	Enum			 							=	SPECIAL_BALROG_WINGS
	ReloadTime		 					=	180000				  // This is completely	   auto, so	make the timout	*quite*	fast.
	PublicTimer		 					=	No
	Flags										= NO_FORBIDDEN_OBJECTS
	ForbiddenObjectFilter		= NONE +STRUCTURE
	ForbiddenObjectRange		= 10
	InitiateAtLocationSound = CaH_Invulnerability
	; Flags				    				= LIMIT_DISTANCE
	; MaxCastRange		    		= 800
End

SpecialPower SpecialAbilityGendrySkilledSmithLevel1
	Enum						   = SPECIAL_KINGS_FAVOR
	ReloadTime					   = 150000
	RadiusCursorRadius			   = 30
	Flags						   = NEEDS_OBJECT_FILTER
	ObjectFilter				   = AOTR_GENERIC_BUFF_RECIPIENT_OBJECT_FILTER ;BARATHEON_FORGED_BLADES_UNITS_OBJECTFILTER
End

SpecialPower SpecialAbilityGendrySkilledSmithLevel3
	Enum						   = SPECIAL_KINGS_FAVOR
	ReloadTime					   = 150000
	RadiusCursorRadius			   = 60
	Flags						   = NEEDS_OBJECT_FILTER
	ObjectFilter				   = AOTR_GENERIC_BUFF_RECIPIENT_OBJECT_FILTER ;BARATHEON_FORGED_BLADES_UNITS_OBJECTFILTER
End

SpecialPower SpecialAbilityGendrySkilledSmithLevel5
	Enum						   = SPECIAL_KINGS_FAVOR
	ReloadTime					   = 150000
	RadiusCursorRadius			   = 90
	Flags						   = NEEDS_OBJECT_FILTER
	ObjectFilter				   = AOTR_GENERIC_BUFF_RECIPIENT_OBJECT_FILTER ;BARATHEON_FORGED_BLADES_UNITS_OBJECTFILTER
End

SpecialPower SpecialAbilityGendrySkilledSmithLevel8
	Enum						   = SPECIAL_KINGS_FAVOR
	ReloadTime					   = 150000
	RadiusCursorRadius			   = 120
	Flags						   = NEEDS_OBJECT_FILTER
	ObjectFilter				   = AOTR_GENERIC_BUFF_RECIPIENT_OBJECT_FILTER ;BARATHEON_FORGED_BLADES_UNITS_OBJECTFILTER
End

SpecialPower SpecialAbilityGendryTheBullCharge
  Enum                = SPECIAL_TRIGGER_ATTRIBUTE_MODIFIER
  ReloadTime          = 240000
  InitiateAtLocationSound     = GondorSoldierCelebratingLarge
End

SpecialPower SpecialAbilityGendryLeapLevel1
	Enum			= SPECIAL_GIMLI_LEAP
	ReloadTime		= 30000
	RadiusCursorRadius	= 20.0
	Flags			= PATHABLE_ONLY
End

SpecialPower SpecialAbilityGendryLeapLevel3
	Enum			= SPECIAL_GIMLI_LEAP
	ReloadTime		= 60000
	RadiusCursorRadius	= 30.0
	Flags			= PATHABLE_ONLY
End

SpecialPower SpecialAbilityGendryLeapLevel5
	Enum			= SPECIAL_GIMLI_LEAP
	ReloadTime		= 90000
	RadiusCursorRadius	= 40.0
	Flags			= PATHABLE_ONLY
End

SpecialPower SpecialAbilityGendryLeapLevel8
	Enum			= SPECIAL_GIMLI_LEAP
	ReloadTime		= 120000
	RadiusCursorRadius	= 50.0
	Flags			= PATHABLE_ONLY
End

SpecialPower SpecialAbilityShireenLearnedChild
	Enum				 = SPECIAL_AT_VISIBLE_OBJECT
	ReloadTime	 = 240000
	ObjectFilter = NONE +HERO -SUMMONED -BaratheonShireen ALLIES
End

SpecialPower SpecialAbilityRhaegalWingBlast
	Enum			 = SPECIAL_GENERAL_TARGETLESS
	ReloadTime = 90000
	RadiusCursorRadius = 100.0
End

SpecialPower SpecialAbilityRhaegalDracarys
	Enum							 = SPECIAL_BALROG_BREATH
	ReloadTime				 = 300000
	RadiusCursorRadius = 110
	Flags							 = WATER_OK
End

SpecialPower SpecialAbilityViserionWingBlast
	Enum			 = SPECIAL_GENERAL_TARGETLESS
	ReloadTime = 90000
	RadiusCursorRadius = 75.0
End

SpecialPower SpecialAbilityViserionDracarys
	Enum							 = SPECIAL_BALROG_BREATH
	ReloadTime				 = 300000
	RadiusCursorRadius = 80
	Flags							 = WATER_OK
End

SpecialPower SpellBookBaratheonWhiteStag
	Enum										= SPECIAL_SPELL_BOOK_ROHAN_ALLIES
	RequiredSciences				= SCIENCE_SignOfLegitimacy
	ReloadTime      				= SPELL_RECHARGE_TIME_TIER_3
	InitiateAtLocationSound = SpellSpawnBaratheonWhiteStag
	RadiusCursorRadius			= 100.0
	Flags										= NO_FORBIDDEN_OBJECTS RESPECT_RECHARGE_TIME_DISCOUNT
	ForbiddenObjectFilter		= AOTR_NO_STRUCTURE_SUMMON_NEAR_OBJECT_FILTER
	ForbiddenObjectRange		= 100.0
End

SpecialPower SpellBookTheIronBank
	Enum							 = SPECIAL_SPELL_BOOK_DRAGON_ALLY
	ReloadTime				 = SPELL_RECHARGE_TIME_TIER_4
	RadiusCursorRadius = 50.0
	RequiredSciences	 = SCIENCE_TheIronBank
	ViewObjectDuration = 5000
	ViewObjectRange 	 = 100
	InitiateAtLocationSound = BaratheonIronBank
	Flags										= NO_FORBIDDEN_OBJECTS RESPECT_RECHARGE_TIME_DISCOUNT
	ForbiddenObjectFilter		= AOTR_NO_STRUCTURE_SUMMON_NEAR_OBJECT_FILTER
	ForbiddenObjectRange		= 50.0
End

SpecialPower SpecialAbilityDavosSmugglersTricks
	Enum							 = SPECIAL_TELEPORT_TEAM_TO_CASTER
	RadiusCursorRadius = 60.0
	ReloadTime				 = SPELL_RECHARGE_TIME_TIER_4
	ObjectFilter			 = ANY	+INFANTRY +CAVALRY +DOZER +HERO -RohanTreeBerd -IsengardBatteringRam -MordorBatteringRam -IsengardBallista -IsengardExplosiveMine -MordorGrond -MordorCatapult -DwarfBatteringRam -DwarvenCatapult -DwarvenDemolisher -DwarvenMangonel -GuldurEntwife -GondorTrebuchet -GondorBigTrebuchet_Summoned -MirkwoodBatteringRam -MirkwoodBallista -ArnorBreelandRam -RohanBatteringRam -RohanMangonel ALLIES
	InitiateSound			 = DavosSmugglersTricks ;CaH_TeleportPart1
End