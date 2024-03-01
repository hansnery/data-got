;//////////////////////////////////
;///// NEW HERO RETREAT POWER /////
;//////////////////////////////////

Behavior = AutoPickUpUpdate ModuleTag_RetreatSeeker
  ScanDelayTime		= 0
  ScanDistance		= 999999999		; default value is 300 units
  PickUpFilter		= NONE +RetreatBeacon ; MordorFighter ; +TREE		; Slightly tricky since trees don't exist.  This will trigger the special stuff you have to do to grab a tree.
  CanScanWhileAttackingOrMoving = Yes ;,;
  RunFromButton		= Yes		; No natural scanning, wakes up to run exactly once when hit with a WakeAutoPickup button
  RunFromButtonNumber = 2			; In case of multiples, this lines up with the OPTION_(ONE) field in the waking button
End

Behavior = GrabPassengerSpecialPower ModuleTag_OopsIGottaGo
  SpecialPowerTemplate		= SpecialAbilityGrabPassenger
  UpdateModuleStartsAttack	= Yes
;  AllowTree					= Yes
;	InitiateFX					= FX_TrollGrabInitiate   ; Evil hack so we can different voices for grab tree or grab rock
End

Behavior = SpecialAbilityUpdate ModuleTag_RetreatGrabber
  SpecialPowerTemplate    = SpecialAbilityGrabPassenger
  StartAbilityRange       = 8.0
                    ; Note that the timings here are not exactly right, but they are catered to fit
                    ; the anims, so the grabs are a bit 'snatchy'.

  UnpackTime              = 300		; This does not match the animation, but looks good.
  PreparationTime         = 10000			; touching it to grabbing it
  PersistentPrepTime      = 5000		; grabbing it to whacking it on the ground (if shrubbery)
  PackTime                = 10000		; whacking it to holding it nice

  GrabPassengerAnimAndDuration   = AnimState:EATING AnimTime:3000 TriggerTime:1400
;  GrabPassengerHealGainPercent	= 40.0 ;,;

  AwardXPForTriggering    = 0
  TriggerAttributeModifier = RetreatDeactivator
  AttributeModifierDuration = 5000

;	RejectedConditions		= WEAPON_TOGGLE		; Cannot pick things up when already holding a rock to throw
End

  Behavior = TransportContain ModuleTag_RetreatObjectDevourer
    ObjectStatusOfContained = UNSELECTABLE
    PassengerFilter			= NONE +RetreatBeacon ; MordorFighter; +CLUB ;  +ORC
  ;	ManualPickUpFilter		= ANY +CLUB -ORC	; we do not want the user to be able to manually pick up an orc with a troll.
    Slots					= 1
    ShowPips				= No
    AllowEnemiesInside		= No
    AllowNeutralInside		= Yes
    AllowAlliesInside		= Yes
    DamagePercentToUnits	= 100%

  ;	TypeOneForWeaponSet		= CLUB				; sets WEAPONSET_PASSENGER_TYPE_ONE
  ;	TypeOneForWeaponState	= CLUB

  ;  PassengerBonePrefix = PassengerBone:Trunk       KindOf:CLUB
;    PassengerBonePrefix = PassengerBone:Trunk		KindOf:INFANTRY

    EjectPassengersOnDeath = Yes
    ShouldThrowOutPassengers = Yes
  End

  Behavior = DoCommandUpgrade Module_GoRetreatBackToSafety ;,;
    TriggeredBy = Upgrade_AIRetreatON Upgrade_ObjectUnderAIControl
    RequiresAllTriggers = Yes
    GetUpgradeCommandButtonName = Command_SpecialAbilityHeroRetreatNew
    Permanent = No
  End

    Behavior = ObjectCreationUpgrade ModuleTag_DeactivateRetreat ;,;
         TriggeredBy = Upgrade_AIRetreatOFF
         RemoveUpgrade = Upgrade_AIRetreatON
    End

    Behavior = ObjectCreationUpgrade ModuleTag_ReactivateRetreat ;,;
        TriggeredBy = Upgrade_AIRetreatON
        RemoveUpgrade = Upgrade_AIRetreatOFF
  End

;/Disabled, we want to use ReallyDamaged instead

; Behavior = AISpecialPowerUpdate HeroRetreat
;   CommandButtonName = Command_SpecialAbilityHeroRetreatNew
;   SpecialPowerAIType = AI_SPECIAL_POWER_BASIC_SELF_BUFF
; End
