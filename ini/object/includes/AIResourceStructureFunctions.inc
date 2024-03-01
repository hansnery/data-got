;==============================
;		AI FARM DEFENSE MECHANIC
;==============================
; No longer needed now that defense teams are fully functional
; Behavior = CallHelpOnDamage ModuleTag_SaveMeYouFools
;   DamageTypes = ALL
;   CallRadius = 2000
;   CallDelay = 5000
;   MoveToAttacker = No ; Yes
;   ValidObjects = ANY SAME_PLAYER +INFANTRY +CAVALRY -DOZER
; End
;
; Behavior = CallHelpOnDamage ModuleTag_TheCalvaryHasArrived
;   DamageTypes = ALL -SPECIALIST
;   CallRadius = 150000
;   CallDelay = 5000
;   MoveToAttacker = Yes
;   ValidObjects = ANY SAME_PLAYER +CAVALRY
; End

;================================
;    AI Farm Economy Settings
;================================

;---Farm Discounts---
  BuildCost = 150
  ; First four farms are half price for captain in order to help set up early base. Only first farm is discounted for Peasant/Soldier

  Behavior = CostModifierUpgrade ModuleTag_EarlyFarmDiscount
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_HardAIMultiPlayer Upgrade_BrutalAIMultiPlayer
      ObjectFilter        = ANY +GondorFarm_ForAI +RohanRandomResourceStructure_AI +RohanFarmForAI +WildMineShaft_ForAI +GuldurSlaveMill_ForAI +ElvenMallornTree_ForAI +DwarvenMineShaft_ForAI +MirkwoodHuntingLodge_ForAI +MirkwoodRandomResourceStructure_AI +MordorSlaughterHouse_ForAI +MordorArmory_ForAI +IsengardFurnace_ForAI +RivendellOrchard_ForAI +HaradwaithBazaar_ForAI
      Percentage        = 0%
      Percentage        = 0%
      Percentage        = 0%
      Percentage        = 100%
  End

  Behavior = CostModifierUpgrade ModuleTag_NoEarlyFarmDiscount
  LabelForPalantirString = GUI:Blank
  StartsActive = No ; Run on build complete, not upgrade
  TriggeredBy = Upgrade_EasyAIMultiPlayer Upgrade_MediumAIMultiPlayer
      ObjectFilter        = ANY +GondorFarm_ForAI +RohanRandomResourceStructure_AI +RohanFarmForAI +WildMineShaft_ForAI +GuldurSlaveMill_ForAI +ElvenMallornTree_ForAI +DwarvenMineShaft_ForAI +MirkwoodHuntingLodge_ForAI +MirkwoodRandomResourceStructure_AI +MordorSlaughterHouse_ForAI +MordorArmory_ForAI +IsengardFurnace_ForAI +RivendellOrchard_ForAI +HaradwaithBazaar_ForAI
      Percentage        = 100%
      Percentage        = 100%
      Percentage        = 100%
      Percentage        = 100%
  End
;-------------------
;---AI Difficulty Penalities
  Behavior = AttributeModifierUpgrade ModuleTag_EasyAIPenalty
  	TriggeredBy				= Upgrade_EasyAIMultiPlayer
  	AttributeModifier		= AIEasyEconomyNerf
  End

  Behavior = AttributeModifierUpgrade ModuleTag_MediumAIPenalty
  	TriggeredBy				= Upgrade_MediumAIMultiPlayer
  	AttributeModifier		= AIMediumEconomyNerf
  End

  ;---Faction-Specific Adjustments
    ;---Misty Mountains
    Behavior = AttributeModifierUpgrade ModuleTag_MistyMountainAIPenalty
    	TriggeredBy				= Upgrade_EasyAIMultiPlayer Upgrade_WildFaction
      RequiresAllTriggers = Yes
    	AttributeModifier		= AIMistyMountainsPeasantNerf
    End
    ;---Rohan
    ; Behavior = AttributeModifierUpgrade RohanAIPenalty
    ;   TriggeredBy				= Upgrade_EasyAIMultiPlayer Upgrade_RohanFaction
    ;   AttributeModifier		= AIMistyMountainsPeasantNerf
    ; End
    ; Disabled while testing windmill nerf, remove if unneeded
    ;---Harad
    ; Behavior = AttributeModifierUpgrade ModuleTag_HaradwaithAIPenaltyOffset
    ; 	TriggeredBy				= Upgrade_MediumAIMultiPlayer Upgrade_AngmarFaction
    ;   RequiresAllTriggers = Yes
    ; 	AttributeModifier		= AIMediumEconomyOffset
    ; End

    ; Behavior = AttributeModifierUpgrade ModuleTag_HaradwaithAICaptainHelper
    ; 	TriggeredBy				= Upgrade_HardAIMultiPlayer Upgrade_AngmarFaction
    ;   RequiresAllTriggers = Yes
    ; 	AttributeModifier		= AIStimulusPackage
    ; End

    ; ;---Woodland Realm
    ; Behavior = AttributeModifierUpgrade ModuleTag_MirkwoodAIPenaltyOffset
    ; 	TriggeredBy				= Upgrade_MediumAIMultiPlayer Upgrade_MirkwoodFaction
    ;   RequiresAllTriggers = Yes
    ; 	AttributeModifier		= AIMediumEconomyOffset
    ; End
