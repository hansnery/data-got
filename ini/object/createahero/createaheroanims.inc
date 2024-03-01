//================== ANIMATIONS =================================================================

;================================================================================================
;                    Dunedain-specific anims
;================================================================================================




//----------- Special Create A Hero Creation Screen Animations ---------------
;AnimationState =  CREATE_A_HERO_38 CREATE_A_HERO_IN_CREATION_SCREEN CREATE_A_HERO_EXAMINE_WEAPON_LEFT CREATE_A_HERO_SELECTED_CHEER 
;	StateName			   = STATE_ExamineLeftF
;	Animation			   = ExamineLeftF
;		AnimationName	   = chdundan_idlb
;		AnimationMode	   = ONCE
;		AnimationPriority  = 90
;		AnimationBlendTime = 20
;	End
;	Animation			   = ExamineLeft2F
;		AnimationName	   = chdundan_idlb
;		AnimationMode	   = ONCE
;		AnimationPriority  = 90
;		AnimationBlendTime = 20
;	End
;	Flags =	RESTART_ANIM_WHEN_COMPLETE
;End

AnimationState =  CREATE_A_HERO_38 CREATE_A_HERO_IN_CREATION_SCREEN CREATE_A_HERO_EXAMINE_SELF CREATE_A_HERO_SELECTED_CHEER 
	StateName			   = STATE_ExamineSelfF
	Animation			   = ExamineSelf
		AnimationName	   = iunhuskarl_idla
		AnimationMode	   = ONCE
		AnimationBlendTime = 20
	End
End

AnimationState =  CREATE_A_HERO_38 CREATE_A_HERO_IN_CREATION_SCREEN CREATE_A_HERO_EXAMINE_WEAPON_RIGHT CREATE_A_HERO_SELECTED_CHEER 
	StateName			   = STATE_ExamineWeaponF
	Animation			   = WeaponSwap
		AnimationName	   = iunhuskarl_idla
		AnimationMode	   = ONCE
		AnimationBlendTime = 20
	End
End

AnimationState =  CREATE_A_HERO_38 CREATE_A_HERO_IN_CREATION_SCREEN USER_75
 	StateName			   = STATE_SwapModelsF
 	Animation			   = WeaponSwap
 		AnimationName	   = iunhuskarl_idla
 		AnimationMode	   = MANUAL
 		AnimationBlendTime = 0
 	End
End


AnimationState =  CREATE_A_HERO_38 CREATE_A_HERO_IN_CREATION_SCREEN CREATE_A_HERO_SELECTED_CHEER
	StateName = STATE_SelectedCheerF
	Animation = Foot_ATNB // Bored Idle
		AnimationName	   = iunhuskarl_idla
		AnimationMode	   = ONCE
		AnimationPriority  = 90
		AnimationBlendTime = 20
	End
	Animation = Foot_ATND // Bored Fidget
		AnimationName	   = iunhuskarl_idlB
		AnimationMode	   = ONCE
		AnimationPriority  = 10
		AnimationBlendTime = 20
	End
	Animation = Foot_ATNE // Bored Fidget
		AnimationName	   = iunhuskarl_idlD
		AnimationMode	   = ONCE
		AnimationPriority  = 30
		AnimationBlendTime = 20
	End
	Flags =	RESTART_ANIM_WHEN_COMPLETE
	BeginScript //script to set transition from moving
		Prev = CurDrawablePrevAnimationState()
		if Prev == "STATE_Unselected" then 
			CurDrawableSetTransitionAnimState("Trans_SelectedCheerF") 
		end
//  		if Prev == "STATE_SwapModels" then 
//  			CurDrawableSetTransitionAnimState("Trans_SwapModelsF") 
//  		end
	EndScript
End

AnimationState =  CREATE_A_HERO_38 CREATE_A_HERO_IN_CREATION_SCREEN
	StateName = STATE_UnselectedF
	Animation = Foot_ATNB // Bored Idle
		AnimationName       = iunhuskarl_idla
		AnimationMode       = ONCE
		AnimationPriority   = 90
		AnimationBlendTime = 10
	End
	Animation = Foot_ATND // Bored Fidget
		AnimationName       = iunhuskarl_idla
		AnimationMode       = ONCE
		AnimationPriority   = 10
		AnimationBlendTime = 10
	End
	Animation = Foot_ATNE // Bored Fidget
		AnimationName       = iunhuskarl_idla
		AnimationMode       = ONCE
		AnimationPriority   = 3
		AnimationBlendTime = 10
	End
	Flags =	RESTART_ANIM_WHEN_COMPLETE
 	BeginScript //script to set transition from moving
 		Prev = CurDrawablePrevAnimationState()
 		if Prev == "STATE_SwapModels" then 
 			CurDrawableSetTransitionAnimState("Trans_SwapModelsF") 
 		end
 	EndScript
End

TransitionState = Trans_ExamineWeaponF
	Animation = Transition
		AnimationName = iunhuskarl_idla
		AnimationMode = ONCE
		AnimationBlendTime = 20
	End
End
TransitionState = Trans_ExamineSelfF
	Animation = Transition
		AnimationName = iunhuskarl_idla
		AnimationMode = ONCE
		AnimationBlendTime = 20
	End
End
TransitionState = Trans_SelectedCheerF
	Animation = Transition
		AnimationName = iunhuskarl_idla
		AnimationMode = ONCE
		AnimationBlendTime = 20
	End
End

TransitionState = Trans_SwapModelsF
	StateName = STATE_UnselectedF
	Animation = Transition
		AnimationName = iunhuskarl_idla
		AnimationMode = ONCE
		AnimationBlendTime = 0
	End
End

		AnimationState				= SPECIAL_POWER_1							; Aragorn shouting Elendil anim
			StateName				= STATE_ready
			Animation
				AnimationName		= GUFaramir_TNTC
				AnimationMode		= ONCE
			End
			ParticleSysBone			= B_SWORDBONE ElendilFlare FollowBone:yes
			ParticleSysBone			= B_SWORDBONE ElendilSwordFlare FollowBone:yes
;			FXEvent	= Name: FX_ElendilGlowEvent
		End

		//train allies.
		AnimationState		  =	PACKING_TYPE_2 CREATE_A_HERO_37
			Animation
				AnimationName =	GUFaramir_CHRC
				AnimationMode =	LOOP
			End
		End
		//train allies.
		AnimationState		  =	PACKING_TYPE_1 CREATE_A_HERO_37
			;Animation = ATK11
			;	AnimationName =	GUIthil_ATKA1
			;	AnimationMode =	ONCE
			;End
			Animation = ATK12
				AnimationName =	GUIthil_ATKA2
				AnimationMode =	LOOP
				AnimationSpeedFactorRange = 1.75 1.75
			End
		End

		//train allies.
		AnimationState		  =	PACKING_TYPE_5 CREATE_A_HERO_37
			Animation
				AnimationName =	GUFaramir_CHRD
				AnimationMode =	LOOP
			End
		End

		; Throwing and cripple strike
		AnimationState		  =	SPECIAL_WEAPON_FOUR CREATE_A_HERO_37 
			StateName		  =	Attacking
			Animation
				AnimationName =	GUFaramir_ATKC
				AnimationMode =	ONCE
			End
			FrameForPristineBonePositions	= 44
		End

// --------- UNMOUNTED  ------------

//------------------  DYING -------------------------------------------------------------

// --- Flying through the air.
AnimationState        = CREATE_A_HERO_37 STUNNED_FLAILING WEAPONSET_TOGGLE_1
	StateName           = STATE_BowF
	Animation
		AnimationName     = GUFaramir_FLYA
		AnimationMode     = LOOP
	End
	Flags               = RANDOMSTART
End

AnimationState        = CREATE_A_HERO_37 STUNNED_FLAILING 
	StateName           = STATE_SwordF
	Animation
		AnimationName     = GUFaramir_FLYB
		AnimationMode     = LOOP
	End
	Flags               = RANDOMSTART
End

// --- Dying anims
AnimationState        = CREATE_A_HERO_37 DYING SPLATTED WEAPONSET_TOGGLE_1
	StateName           = STATE_BowF
	Animation
		AnimationName     = GUFaramir_LNDA
		AnimationMode     = ONCE
	End
End

AnimationState        = CREATE_A_HERO_37 DYING SPLATTED
	StateName           = STATE_SwordF
	Animation
		AnimationName     = GUFaramir_LNDB
		AnimationMode     = ONCE
	End
End

AnimationState        = CREATE_A_HERO_37 DYING WEAPONSET_TOGGLE_1	//WEAPONSTATE_CLOSE_RANGE
	StateName           = STATE_BowF
	Animation
		AnimationName     = GUFaramir_DIEC
		AnimationMode     = ONCE
	End
End

AnimationState        = CREATE_A_HERO_37 DYING
	StateName           = STATE_SwordF
	Animation
		AnimationName     = GUFaramir_DIEA
		AnimationMode     = ONCE
	End
	Animation           = GUHero_DIEBF
		AnimationName     = GUFaramir_DIEB
		AnimationMode     = ONCE
	End
End


// --- Stunned anims


AnimationState        = CREATE_A_HERO_37 STUNNED_STANDING_UP WEAPONSET_TOGGLE_1
	StateName           = STATE_BowF
	Animation
		AnimationName     = GUFaramir_GTPA
		AnimationMode     = ONCE
		AnimationSpeedFactorRange = 1.5 1.5
	End
End

AnimationState        = CREATE_A_HERO_37 STUNNED_STANDING_UP
	StateName           = STATE_SwordF
	Animation
		AnimationName     = GUFaramir_GTPB
		AnimationMode     = ONCE
		AnimationSpeedFactorRange = 1.5 1.5
	End
End

AnimationState        = CREATE_A_HERO_37 STUNNED WEAPONSET_TOGGLE_1
	StateName           = STATE_BowF
	Animation
		AnimationName     = GUFaramir_LNDA
		AnimationMode     = ONCE
	End
End

AnimationState        = CREATE_A_HERO_37 STUNNED 
	StateName           = STATE_SwordF
	Animation           = GUHero_LNDAF
		AnimationName     = GUFaramir_LNDB
		AnimationMode     = ONCE
	End
End				
	
		

//------------------ MOVING -------------------------------------------------------------

		AnimationState        = CREATE_A_HERO_37 MOVING USER_4                 // Moving slaughter
			StateName           = SlaughterF
			Flags               = RANDOMSTART
			//ParticleSysBone     = None InfantryDustTrails
			Animation           = GUHero_ATKEF
				AnimationName     = GUFaramir_ATKE
				AnimationMode     = LOOP
			End
			StateName           = NoSwordF
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "SwordF" then CurDrawableSetTransitionAnimState("TRANS_SwordToBowF") end
			EndScript
		End

		//--- Running with bow
		AnimationState			= CREATE_A_HERO_37 MOVING WEAPONSET_TOGGLE_1		//WEAPONSTATE_CLOSE_RANGE
			StateName           = STATE_RunningBowF
			Flags               = RANDOMSTART
			//ParticleSysBone    = None InfantryDustTrails
			Animation
				AnimationName   = GUFaramir_RUNA
//				AnimationMode   = LOOP
				AnimationSpeedFactorRange = 0.85 0.85
//				Distance		= 28
			End
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_SwordF" then CurDrawableSetTransitionAnimState("TRANS_SwordToBowF") end
				if Prev == "STATE_RunningSwordF" then CurDrawableSetTransitionAnimState("TRANS_SwordToBow_RunningF") end
				if Prev == "STATE_RappellingF"  then CurDrawableSetTransitionAnimState("Trans_RappellingToRunning_WeaponToggleF") return end
			EndScript
		End

		//--- Running with sword
		AnimationState			= CREATE_A_HERO_37 MOVING
			StateName           = STATE_RunningSwordF
			Flags               = RANDOMSTART
			//ParticleSysBone    = None InfantryDustTrails
			Animation
				AnimationName   = GUFaramir_RUNB
//				AnimationMode   = LOOP
				AnimationSpeedFactorRange = 0.85 0.85
//				Distance = 28
				AnimationBlendTime		=	10
			End
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_BowF" then CurDrawableSetTransitionAnimState("TRANS_BowToSwordF") end
				if Prev == "STATE_RunningBowF" then CurDrawableSetTransitionAnimState("TRANS_BowToSword_RunningF") end
				if Prev == "STATE_RappellingF"  then CurDrawableSetTransitionAnimState("Trans_RappellingToRunningF") return end
			EndScript
		End

		//---------------------------------------------------
		//New style firing with bow
		AnimationState					=	CREATE_A_HERO_37 PREATTACK_A WEAPONSET_TOGGLE_1
			StateName					=	STATE_FiringF
			Animation					=	ReadyToDrawnF
				AnimationName			=	guithil_atka1
				AnimationMode			=	ONCE
//				;UseWeaponTiming			=	Yes			// UseWeaponTiming plus random weapon field equals desync.  Leaving as warning
				//AnimationBlendTime		=	10
			End
		End

		AnimationState					=	CREATE_A_HERO_37 FIRING_OR_RELOADING_A WEAPONSET_TOGGLE_1
			StateName					=	STATE_FiringF
			Animation					=	LooseReloadDrawF
				AnimationName			=	guithil_atka2
				AnimationMode			=	ONCE
//				UseWeaponTiming			=	No			// UseWeaponTiming plus random weapon field equals desync.  Leaving as warning
				AnimationSpeedFactorRange = 1.1 1.1		// Therefore, this is all you get.  A slight speed up so that the animation can always finish before any possible random value Design sets the range for
				//AnimationBlendTime		=	10
			End
		End
		//---------------------End New style firing

		AnimationState					=	CREATE_A_HERO_37 CONTINUOUS_FIRE_MEAN WEAPONSET_TOGGLE_1 ;;.;; uncommented
			Animation					=	HangFrameWhileCoastingF
				AnimationName			=	guithil_atka2
				AnimationMode			=	MANUAL
			End
		End
		
		AnimationState						= CREATE_A_HERO_37 CONTINUOUS_FIRE_SLOW WEAPONSET_TOGGLE_1 ;;.;; uncommented
			//StateName						= STATE_Idle_Bow
			Animation						= PutAwayArrowF
				AnimationName				= guithil_atka3
				AnimationMode				= ONCE
			End
		End
				
		//End New style firing
		//---------------------------------------------------

		AnimationState				= CREATE_A_HERO_37 FIRING_OR_PREATTACK_A WEAPONSET_TOGGLE_1
			StateName				= STATE_FiringF
			Animation
				AnimationName		= guithil_atka1
				AnimationMode		= ONCE
				UseWeaponTiming		= No			// UseWeaponTiming plus random weapon field equals desync.  Leaving as warning
			End
		End

		AnimationState				= FIRING_OR_PREATTACK_A CREATE_A_HERO_37  // Melee attack.

			StateName           = STATE_SwordF
			Animation           = ATKDF
				AnimationName     = GUFaramir_ATKD
				AnimationMode     = ONCE
				UseWeaponTiming		= Yes
				AnimationSpeedFactorRange = 1.149 1.149
			End
			Animation           = ATKEF
				AnimationName    = GUFaramir_ATKE
				AnimationMode     = ONCE
				UseWeaponTiming		= Yes
				AnimationSpeedFactorRange = 1.149 1.149
			End
			Animation           = ATKFF
				AnimationName    = GUFaramir_ATKF
				AnimationMode     = ONCE
				AnimationSpeedFactorRange = 1.47 1.47
			End
		Flags				=	RESTART_ANIM_WHEN_COMPLETE
		End


		
//-------------------- HIT REACTIONS -----------------------------------------------------------

// this hit animation attack stance
		AnimationState = CREATE_A_HERO_37 EMOTION_ALERT HIT_REACTION WEAPONSET_TOGGLE_1
			Animation
				AnimationName = GUFaramir_HITC
				AnimationMode = ONCE
			End
		End

		AnimationState = CREATE_A_HERO_37 HIT_REACTION WEAPONSET_TOGGLE_1
			Animation
				AnimationName = GUFaramir_HITB
				AnimationMode = ONCE
			End
		End

		AnimationState = CREATE_A_HERO_37 HIT_REACTION
			Animation = Sword_HITAF
				AnimationName = GUFaramir_HITC
				AnimationMode = ONCE
			End
			Animation = Sword_HITBF
				AnimationName = GUFaramir_HITD
				AnimationMode = ONCE
			End

			BeginScript
				PrevAnim = CurDrawablePrevAnimation()
				if PrevAnim == "Foot_IDLBF"
				then
					return "Sword_HITBF"
				else
					return "Swort_HITAF"
				end
			EndScript
		End

//------------ SPECIAL POWERS ------------------------------------------------------------------		

		AnimationState		  =	CREATE_A_HERO_37 THROWN_PROJECTILE
			Animation
				AnimationName =	GUFaramir_FLYB
				AnimationMode =	LOOP
			End
		End

		AnimationState		  =	CREATE_A_HERO_37 ABOUT_TO_HIT
			Animation
				AnimationName =	GUFaramir_FLYB
				AnimationMode =	ONCE
			End
		End



//====== LEVELED
		AnimationState				= CREATE_A_HERO_37 LEVELED WEAPONSET_TOGGLE_1	// This state clears itself in 3 seconds
			Animation				= LevelUp
				AnimationName		= GUFaramir_CHRD
				AnimationMode		= ONCE
			End
		End

		AnimationState				= CREATE_A_HERO_37 LEVELED 						// This state clears itself in 3 seconds
			Animation				= LevelUp
				AnimationName		= GUFaramir_CHRC
				AnimationMode		= ONCE
			End
		End

//---------------------- EMOTIONS ---------------------------------------------------------------

		// cheer, mounted
		AnimationState				=	CREATE_A_HERO_37 EMOTION_CELEBRATING MOUNTED
			Animation 
				AnimationName		=	GUFaramir_CHRD
				AnimationMode		=	ONCE
			End
			Flags					=	RESTART_ANIM_WHEN_COMPLETE
		End

		// cheer, w/ bow on foot
		AnimationState				=	CREATE_A_HERO_37 EMOTION_CELEBRATING WEAPONSET_TOGGLE_1
			Animation 
				AnimationName		=	#(MODEL)_B_CHRA
				AnimationMode		=	ONCE
			End
			Flags					=	RESTART_ANIM_WHEN_COMPLETE
		End

		// cheer, on foot
		AnimationState				=	CREATE_A_HERO_37 EMOTION_CELEBRATING
			Animation CHRAF
				AnimationName		=	GUFaramir_CHRC
				AnimationMode		=	ONCE
			End
			Animation CHRBF
				AnimationName		=	GUFaramir_CHRC
				AnimationMode		=	ONCE
			End
			Flags					=	RESTART_ANIM_WHEN_COMPLETE
		End
		
		// raise flag, w/ bow on foot
		AnimationState				=	CREATE_A_HERO_37 RAISING_FLAG WEAPONSET_TOGGLE_1
			Animation 
				AnimationName		=	GUFaramir_CHRD
				AnimationMode		=	ONCE
			End
			Flags					=	RESTART_ANIM_WHEN_COMPLETE
		End

		// cheer, on foot
		AnimationState				=	CREATE_A_HERO_37 RAISING_FLAG
			Animation CHRAF
				AnimationName		=	GUFaramir_CHRD
				AnimationMode		=	ONCE
			End
			Animation CHRBF
				AnimationName		=	GUFaramir_CHRD
				AnimationMode		=	ONCE
			End
			Flags					=	RESTART_ANIM_WHEN_COMPLETE
		End
		
		
		// taunt, w/ bow on foot
		AnimationState				=	CREATE_A_HERO_37 EMOTION_TAUNTING WEAPONSET_TOGGLE_1
			Animation 
				AnimationName		=	GUFaramir_CHRD
				AnimationMode		=	ONCE
			End
			Flags					=	RESTART_ANIM_WHEN_COMPLETE
		End
		
		// taunt, on foot
		AnimationState				=	CREATE_A_HERO_37 EMOTION_TAUNTING
			Animation CHRAF
				AnimationName		=	GUFaramir_TNTC
				AnimationMode		=	ONCE
			End
			Animation CHRBF
				AnimationName		=	GUFaramir_TNTD
				AnimationMode		=	ONCE
			End
			Flags					=	RESTART_ANIM_WHEN_COMPLETE
		End
		
		


//====== ENGAGED
		AnimationState				= CREATE_A_HERO_37 ENGAGED WEAPONSET_TOGGLE_1
			StateName				= STATE_readyF
			Animation
				AnimationName		= GUFaramir_IDLC
				AnimationMode		= ONCE
			End
		End
		AnimationState				= CREATE_A_HERO_37 ENGAGED
			StateName				= STATE_readyF
			Animation
				AnimationName		= GUFaramir_IDLA
				AnimationMode		= ONCE
			End
		End
		AnimationState				= CREATE_A_HERO_37 BETWEEN_FIRING_SHOTS_A WEAPONSET_TOGGLE_1
			StateName				= STATE_readyF
			Animation
				AnimationName		= GUFaramir_IDLC
				AnimationMode		= ONCE
			End
		End
		AnimationState				= CREATE_A_HERO_37 BETWEEN_FIRING_SHOTS_A
			StateName				= STATE_readyF
			Animation
				AnimationName		= GUFaramir_IDLA
				AnimationMode		= ONCE
			End
		End
		
// --- Idle Toggled

		AnimationState = CREATE_A_HERO_37 SELECTED WEAPONSET_TOGGLE_1
			StateName				= STATE_Selected_BowF
			Animation				= Selected_Loop
				AnimationName		= GUFaramir_ATNB
				AnimationMode		= LOOP
				AnimationBlendTime	= 10
			End
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Idle_BowF" then CurDrawableSetTransitionAnimState("TRANS_BoredToSelectedBowF") end
				if Prev == "STATE_Selected_SwordF" then CurDrawableSetTransitionAnimState("TRANS_SwordToBowF") end
			EndScript
			Flags = RESTART_ANIM_WHEN_COMPLETE
		End

		AnimationState = CREATE_A_HERO_37 SELECTED
			StateName				= STATE_Selected_SwordF
			Animation				= Selected_Loop
				AnimationName		= GUFaramir_ATNE
				AnimationMode		= LOOP
				AnimationBlendTime	= 10
			End
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Idle_SwordF" then CurDrawableSetTransitionAnimState("TRANS_BoredToSelectedSwordF") end
				if Prev == "STATE_Selected_BowF" then CurDrawableSetTransitionAnimState("TRANS_BowToSwordF") end
			EndScript
			Flags = RESTART_ANIM_WHEN_COMPLETE
		End


		AnimationState				= CREATE_A_HERO_37 WEAPONSET_TOGGLE_1
			StateName				= STATE_Idle_BowF
			Animation
				AnimationName		=	GUFaramir_IDLC
				AnimationPriority	=	20
				AnimationMode		=	ONCE
				AnimationBlendTime	=	15
			End
			Flags				=	RESTART_ANIM_WHEN_COMPLETE
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Idle_SwordF" then CurDrawableSetTransitionAnimState("TRANS_SwordToBowF") end
			EndScript
		End

		AnimationState				= CREATE_A_HERO_37 
			StateName					= STATE_Idle_SwordF
			Animation = Foot_IDLBF // Bored Idle
				AnimationName       = GUFaramir_IDLE
				AnimationMode       = ONCE
				AnimationPriority   = 20
			End
			Animation = Foot_IDLCF // Bored Fidget
				AnimationName       = GUFaramir_IDLF
				AnimationMode       = ONCE
				AnimationPriority   = 1
			End
			Animation = Foot_IDLDF // Bored Fidget
				AnimationName       = GUFaramir_IDLG
				AnimationMode       = ONCE
				AnimationPriority   = 1
			End

			BeginScript
				Prev = CurDrawablePrevAnimationState()
				;if Prev == "STATE_RunningSwordF" then CurDrawableSetTransitionAnimState("TRANS_SelectedToBoredSwordF	") end
				if Prev == "STATE_Selected_SwordF" then CurDrawableSetTransitionAnimState("TRANS_SelectedToBoredSwordF	") end
				if Prev == "STATE_Idle_BowF" then CurDrawableSetTransitionAnimState("TRANS_BowToSwordF") end
			EndScript
		End
		

	//---transitions--------------------------------------------

		TransitionState = TRANS_BoredToSelectedSwordF
		// Once we have proper animations for enter -> idle -> exit, fix this properly.
			Animation = ANTDF
				AnimationName	= GUFaramir_ANTD
				AnimationMode	= ONCE
			End		
		End
		
		TransitionState = TRANS_SelectedToBoredSwordF
			Animation			= ATNF
				AnimationName	= GUFaramir_ATNF
				AnimationMode	= ONCE
			End		
		End	

		TransitionState = TRANS_BoredToSelectedBowF
			Animation = ATNCF
				AnimationName		= GUFaramir_ATNC
				AnimationMode		= ONCE
			End		
		End
		
		TransitionState = TRANS_CaptainBowToSelectedBowF
			Animation = ATNCF
				AnimationName		= GUFaramir_ATND
				AnimationMode		= ONCE
				AnimationBlendTime	= 10
				AnimationSpeedFactorRange = 1.5 1.5
			End		
		End
		
		TransitionState = TRANS_SelectedToBoredBowF
			Animation			= ATNAF
				AnimationName	= GUFaramir_ATND
				AnimationMode	= ONCE
			End		
		End	


		TransitionState       = TRANS_BowToSwordF
			Animation           = CUHero_STHAF
				AnimationName     = GUFaramir_STHA
				AnimationMode     = ONCE
			End
		End

		TransitionState       = TRANS_SwordToBowF
			Animation           = CUHero_STHBF
				AnimationName     = GUFaramir_STHB
				AnimationMode     = ONCE
			End


		End	

		TransitionState       		= TRANS_BowToSword_RunningF
			Animation           	= DrawSwordsF
				AnimationName       = GUFaramir_STHD
				AnimationMode       = ONCE
			End
		End
		
		TransitionState       		= TRANS_SwordToBow_RunningF
			Animation           	= DrawBowF
				AnimationName       = GUFaramir_STHC
				AnimationMode       = ONCE
			End
		End		

;================================================================================================
;                    Mound Dweller anims
;================================================================================================

AnimationState =  CREATE_A_HERO_40 CREATE_A_HERO_IN_CREATION_SCREEN CREATE_A_HERO_EXAMINE_SELF CREATE_A_HERO_SELECTED_CHEER 
	StateName			   = STATE_ExamineSelfM
	Animation			   = ExamineSelf
		AnimationName	   = chdwell_idle
		AnimationMode	   = ONCE
		AnimationBlendTime = 20
	End
End

AnimationState =  CREATE_A_HERO_40 CREATE_A_HERO_IN_CREATION_SCREEN CREATE_A_HERO_EXAMINE_WEAPON_RIGHT CREATE_A_HERO_SELECTED_CHEER 
	StateName			   = STATE_ExamineWeaponM
	Animation			   = WeaponSwap
		AnimationName	   = chdwell_idle
		AnimationMode	   = ONCE
		AnimationBlendTime = 20
	End
End

AnimationState =  CREATE_A_HERO_40 CREATE_A_HERO_IN_CREATION_SCREEN USER_75
 	StateName			   = STATE_SwapModelsM
 	Animation			   = WeaponSwap
 		AnimationName	   = chdwell_idle
 		AnimationMode	   = MANUAL
 		AnimationBlendTime = 0
 	End
End


AnimationState =  CREATE_A_HERO_40 CREATE_A_HERO_IN_CREATION_SCREEN CREATE_A_HERO_SELECTED_CHEER
	StateName = STATE_SelectedCheerM
	Animation = Foot_ATNB // Bored Idle
		AnimationName	   = chdwell_idle
		AnimationMode	   = ONCE
		AnimationPriority  = 90
		AnimationBlendTime = 20
	End
	Animation = Foot_ATND // Bored Fidget
		AnimationName	   = chdwell_idle
		AnimationMode	   = ONCE
		AnimationPriority  = 10
		AnimationBlendTime = 20
	End
	Animation = Foot_ATNE // Bored Fidget
		AnimationName	   = chdwell_idle
		AnimationMode	   = ONCE
		AnimationPriority  = 30
		AnimationBlendTime = 20
	End
	Flags =	RESTART_ANIM_WHEN_COMPLETE
	BeginScript //script to set transition from moving
		Prev = CurDrawablePrevAnimationState()
		if Prev == "STATE_Unselected" then 
			CurDrawableSetTransitionAnimState("Trans_SelectedCheerF") 
		end
//  		if Prev == "STATE_SwapModels" then 
//  			CurDrawableSetTransitionAnimState("Trans_SwapModelsF") 
//  		end
	EndScript
End
;---------------------------Anim for frost wraith
AnimationState =  USER_29 CREATE_A_HERO_40 CREATE_A_HERO_IN_CREATION_SCREEN
	ParticleSysBone = B_HEAD CreationScreen_FrostWraithBreath FollowBone:Yes
	StateName = STATE_UnselectedM
	Animation = Foot_ATNB // Bored Idle
		AnimationName	   = chdwell_idle
		AnimationMode	   = ONCE
		AnimationPriority  = 90
		AnimationBlendTime = 20
	End
	Animation = Foot_ATND // Bored Fidget
		AnimationName	   = chdwell_idle
		AnimationMode	   = ONCE
		AnimationPriority  = 10
		AnimationBlendTime = 20
	End
	Animation = Foot_ATNE // Bored Fidget
		AnimationName	   = chdwell_idle
		AnimationMode	   = ONCE
		AnimationPriority  = 30
		AnimationBlendTime = 20
	End
	Flags =	RESTART_ANIM_WHEN_COMPLETE
 	BeginScript //script to set transition from moving
 		Prev = CurDrawablePrevAnimationState()
 		if Prev == "STATE_SwapModels" then 
 			CurDrawableSetTransitionAnimState("Trans_SwapModelsM") 
 		end
 	EndScript
End

;AnimationState =  USER_28 CREATE_A_HERO_40 CREATE_A_HERO_IN_CREATION_SCREEN 
; 	StateName			   = STATE_SwapModelsMF
;	ParticleSysBone 	= None CreationScreen_FrostWraithCrystal FollowBone:Yes
; 	Animation			   = WeaponSwap
; 		AnimationName	   = CHDW_DW_U_LEP3
; 		AnimationMode	   = ONCE
; 		AnimationBlendTime = 0
; 	End
;End


AnimationState =  CREATE_A_HERO_40 CREATE_A_HERO_IN_CREATION_SCREEN
	StateName = STATE_UnselectedM
	Animation = Foot_ATNB // Bored Idle
		AnimationName	   = chdwell_idle
		AnimationMode	   = ONCE
		AnimationPriority  = 90
		AnimationBlendTime = 20
	End
	Animation = Foot_ATND // Bored Fidget
		AnimationName	   = chdwell_idle
		AnimationMode	   = ONCE
		AnimationPriority  = 10
		AnimationBlendTime = 20
	End
	Animation = Foot_ATNE // Bored Fidget
		AnimationName	   = chdwell_idle
		AnimationMode	   = ONCE
		AnimationPriority  = 30
		AnimationBlendTime = 20
	End
	Flags =	RESTART_ANIM_WHEN_COMPLETE
 	BeginScript //script to set transition from moving
 		Prev = CurDrawablePrevAnimationState()
 		if Prev == "STATE_SwapModels" then 
 			CurDrawableSetTransitionAnimState("Trans_SwapModelsM") 
 		end
 	EndScript
End

TransitionState = Trans_ExamineWeaponM
	Animation = Transition
		AnimationName = chdwell_idle
		AnimationMode = ONCE
		AnimationBlendTime = 20
	End
End
TransitionState = Trans_ExamineSelfM
	Animation = Transition
		AnimationName = chdwell_idle
		AnimationMode = ONCE
		AnimationBlendTime = 20
	End
End
TransitionState = Trans_SelectedCheerM
	Animation = Transition
		AnimationName = chdwell_idle
		AnimationMode = ONCE
		AnimationBlendTime = 20
	End
End

TransitionState = Trans_SwapModelsM
	StateName = STATE_UnselectedM
	Animation = Transition
		AnimationName = chdwell_idle
		AnimationMode = ONCE
		AnimationBlendTime = 0
	End
End


;================================================================================================
;                    Normal CaH anims
;================================================================================================

//----------- Special Create A Hero Creation Screen Animations ---------------
AnimationState = CREATE_A_HERO_IN_CREATION_SCREEN CREATE_A_HERO_EXAMINE_SELF CREATE_A_HERO_SELECTED_CHEER 
	StateName			   = STATE_ExamineSelf
	Animation			   = ExamineSelf
		AnimationName	   = #(MODEL)_C_CLRA
		AnimationMode	   = ONCE
		AnimationBlendTime = 20
	End
End

AnimationState = CREATE_A_HERO_IN_CREATION_SCREEN CREATE_A_HERO_EXAMINE_WEAPON_RIGHT CREATE_A_HERO_SELECTED_CHEER 
	StateName			   = STATE_ExamineWeapon
	Animation			   = WeaponSwap
		AnimationName	   = #(MODEL)_C_WPNA
		AnimationMode	   = ONCE
		AnimationBlendTime = 20
	End
End

AnimationState = CREATE_A_HERO_IN_CREATION_SCREEN USER_75
 	StateName			   = STATE_SwapModels
 	Animation			   = WeaponSwap
 		AnimationName	   = #(MODEL)_C_ATNB #(MODEL)_C_ATND
 		AnimationMode	   = MANUAL
 		AnimationBlendTime = 0
 	End
End





//-----------------------------------------------------------------------------
AnimationState = CREATE_A_HERO_IN_CREATION_SCREEN CREATE_A_HERO_SELECTED_CHEER
	StateName = STATE_SelectedCheer
	Animation = Foot_ATNB // Bored Idle
		AnimationName	   = #(MODEL)_C_ATNB #(MODEL)_C_ATND
		AnimationMode	   = ONCE
		AnimationPriority  = 90
		AnimationBlendTime = 20
	End
	Animation = Foot_ATND // Bored Fidget
		AnimationName	   = #(MODEL)_C_ATND #(MODEL)_C_ATNB
		AnimationMode	   = ONCE
		AnimationPriority  = 10
		AnimationBlendTime = 20
	End
	Animation = Foot_ATNE // Bored Fidget
		AnimationName	   = #(MODEL)_C_ATNE #(MODEL)_C_ATND #(MODEL)_C_ATNB
		AnimationMode	   = ONCE
		AnimationPriority  = 3
		AnimationBlendTime = 20
	End
	Flags =	RESTART_ANIM_WHEN_COMPLETE
	BeginScript //script to set transition from moving
		Prev = CurDrawablePrevAnimationState()
		if Prev == "STATE_Unselected" then 
			CurDrawableSetTransitionAnimState("Trans_SelectedCheer") 
		end
//  		if Prev == "STATE_SwapModels" then 
//  			CurDrawableSetTransitionAnimState("Trans_SwapModels") 
//  		end
	EndScript
End

AnimationState = CREATE_A_HERO_IN_CREATION_SCREEN
	StateName = STATE_Unselected
	Animation = Foot_ATNB // Bored Idle
		AnimationName       = #(MODEL)_C_ATNB #(MODEL)_C_ATND
		AnimationMode       = ONCE
		AnimationPriority   = 90
		AnimationBlendTime = 10
	End
	Animation = Foot_ATND // Bored Fidget
		AnimationName       = #(MODEL)_C_ATND #(MODEL)_C_ATNB
		AnimationMode       = ONCE
		AnimationPriority   = 10
		AnimationBlendTime = 10
	End
	Animation = Foot_ATNE // Bored Fidget
		AnimationName       = #(MODEL)_C_ATNE #(MODEL)_C_ATND #(MODEL)_C_ATNB
		AnimationMode       = ONCE
		AnimationPriority   = 3
		AnimationBlendTime = 10
	End
	Flags =	RESTART_ANIM_WHEN_COMPLETE
 	BeginScript //script to set transition from moving
 		Prev = CurDrawablePrevAnimationState()
 		if Prev == "STATE_SwapModels" then 
 			CurDrawableSetTransitionAnimState("Trans_SwapModels") 
 		end
 	EndScript
End

TransitionState = Trans_ExamineWeapon
	Animation = Transition
		AnimationName = #(MODEL)_C_WPNA
		AnimationMode = ONCE
		AnimationBlendTime = 20
	End
End
TransitionState = Trans_ExamineSelf
	Animation = Transition
		AnimationName = #(MODEL)_C_CLRA
		AnimationMode = ONCE
		AnimationBlendTime = 20
	End
End
TransitionState = Trans_SelectedCheer
	Animation = Transition
		AnimationName = #(MODEL)_C_SLCA
		AnimationMode = ONCE
		AnimationBlendTime = 20
	End
End

TransitionState = Trans_SwapModels
	StateName = STATE_Unselected
	Animation = Transition
		AnimationName = #(MODEL)_C_ATNB #(MODEL)_C_ATND
		AnimationMode = ONCE
		AnimationBlendTime = 0
	End
End



//----------- Climbing/rappelling ---------------
AnimationState						= CLIMBING WEAPONSET_TOGGLE_1
	StateName						= STATE_Climbing
	Animation						= Climbing
		AnimationName				= #(MODEL)_U_WALB
		AnimationMode				= LOOP
		AnimationBlendTime			= 10
	End
	BeginScript//script to set transition from moving
		Prev = CurDrawablePrevAnimationState()
		if Prev == "STATE_Running"  then CurDrawableSetTransitionAnimState("Trans_RunningToClimbing_WeaponToggle") return end
	EndScript
End
TransitionState = Trans_RunningToClimbing_WeaponToggle
	Animation = Transition
		AnimationName = #(MODEL)_B_WALA
		AnimationMode = ONCE
	End
End

AnimationState						= CLIMBING
	StateName						= STATE_Climbing
	Animation						= Climbing
		AnimationName				= #(MODEL)_U_WALB
		AnimationMode				= LOOP
		AnimationBlendTime			= 10
	End
	BeginScript//script to set transition from moving
		Prev = CurDrawablePrevAnimationState()
		if Prev == "STATE_Running"  then CurDrawableSetTransitionAnimState("Trans_RunningToClimbing") return end
	EndScript
End
TransitionState = Trans_RunningToClimbing
	Animation = Transition
		AnimationName = #(MODEL)_U_WALA
		AnimationMode = ONCE
	End
End

AnimationState						= RAPPELLING WEAPONSET_TOGGLE_1
	StateName						= STATE_Rappelling
	Animation						= Rapelling
		AnimationName				= #(MODEL)_U_WALD
		AnimationMode				= LOOP
		AnimationBlendTime			= 10
	End
	BeginScript//script to set transition from moving
		Prev = CurDrawablePrevAnimationState()
		if Prev == "STATE_Climbing"  then CurDrawableSetTransitionAnimState("Trans_ClimbingToRappelling") return end
	EndScript
End
AnimationState						= RAPPELLING
	StateName						= STATE_Rappelling
	Animation						= Rapelling
		AnimationName				= #(MODEL)_U_WALD
		AnimationMode				= LOOP
		AnimationBlendTime			= 10
	End
	BeginScript//script to set transition from moving
		Prev = CurDrawablePrevAnimationState()
		if Prev == "STATE_Climbing"  then CurDrawableSetTransitionAnimState("Trans_ClimbingToRappelling") return end
	EndScript
End
TransitionState = Trans_ClimbingToRappelling
	Animation = Transition
		AnimationName = #(MODEL)_U_WALC
		AnimationMode = ONCE
	End
End
TransitionState = Trans_RappellingToRunning_WeaponToggle
	Animation = Transition
		AnimationName = MUGblnSwrd_B_WALE
		AnimationMode = ONCE
	End
End
TransitionState = Trans_RappellingToRunning
	Animation = Transition
		AnimationName = MUGblnSwrd_U_WALE
		AnimationMode = ONCE
	End
End
	



// --------- MOUNTED  ------------

// --- Dying Anims
AnimationState					=	DYING AFLAME MOUNTED
	Animation					=	Fire
		AnimationName			=	#(MODEL)_M_MFDA 
		AnimationSpeedFactorRange = 0.9 1.1
	End
	BeginScript
		CurDrawableHideSubObject("arrow") //Circumvents blend issues when the arrow is being shown...
	EndScript
End

AnimationState				=	DYING SPLATTED MOUNTED
	Animation
		AnimationName		=	#(MODEL)_M_LNDA
		AnimationMode		=	ONCE
	End
End
AnimationState        = DYING MOUNTED
	StateName           = STATE_Sword
	Animation
		AnimationName     = #(MODEL)_M_DIEA
		AnimationMode     = ONCE
	End
End

AnimationState				=	STUNNED_STANDING_UP MOUNTED
	Animation
		AnimationName		=	#(MODEL)_M_GTPA
		AnimationMode		=	ONCE
		AnimationSpeedFactorRange = 1.5 1.5
	End
End

AnimationState				=	STUNNED MOUNTED
	Animation
		AnimationName		=	#(MODEL)_M_LNDA
		AnimationMode		=	ONCE
	End
End

AnimationState				=	FREEFALL MOUNTED
	Animation
		AnimationName		=	#(MODEL)_M_FLYA
		AnimationMode		=	LOOP
	End
	Flags					=	RANDOMSTART
End

AnimationState				=	STUNNED_FLAILING MOUNTED
	Animation
		AnimationName		=	#(MODEL)_M_FLYA
		AnimationMode		=	LOOP
	End
	Flags					=	RANDOMSTART
End

AnimationState        = PASSENGER MOUNTED
	Animation
		AnimationName       = #(MODEL)_M_GBDA
		AnimationMode       = LOOP
	End
	Flags               = RANDOMSTART
End

AnimationState        = MOUNTED LEVELED	// This state clears itself in 3 of your Earth seconds
	Animation
		AnimationName           = #(MODEL)_M_LVLA
		AnimationMode       = ONCE
	End
End

AnimationState        = MOUNTED RAISING_FLAG	// This state clears itself in 3 of your Earth seconds
	Animation
		AnimationName           = #(MODEL)_M_CHRA
		AnimationMode		=	ONCE
	End
	Flags					=	RESTART_ANIM_WHEN_COMPLETE
End

// --- Attacking Anims		
AnimationState				= FIRING_OR_PREATTACK_A MOUNTED	// Melee attack.
	Animation
		AnimationName		= #(MODEL)_M_ATKA #(MODEL)_M_ATKB
		AnimationMode		= ONCE
		UseWeaponTiming		= Yes
	End
End

// --- Moving Anims
AnimationState				=	MOUNTED TURN_LEFT_HIGH_SPEED
	Animation
		AnimationName		=	#(MODEL)_M_TNL1
		AnimationMode		=	LOOP
		AnimationSpeedFactorRange= 1.8 1.8
		AnimationBlendTime	=	20
	End
End

AnimationState				=	MOUNTED TURN_RIGHT_HIGH_SPEED
	Animation
		AnimationName		=	#(MODEL)_M_TNR1
		AnimationMode		=	LOOP
		AnimationSpeedFactorRange= 1.8 1.8
		AnimationBlendTime	=	20
	End
End

AnimationState				=	MOVING TURN_LEFT MOUNTED
	Animation
		AnimationName		=	#(MODEL)_M_TRNL
		AnimationMode		=	LOOP
	End
//			//ParticleSysBone			=	None CalvaryDustTrails
End

AnimationState				=	MOVING TURN_RIGHT MOUNTED
	Animation
		AnimationName		=	#(MODEL)_M_TRNR
		AnimationMode		=	LOOP
	End
//			//ParticleSysBone			=	None CalvaryDustTrails
End

AnimationState				=	MOVING ACCELERATE MOUNTED
	Animation
		AnimationName		=	#(MODEL)_M_ACCL
		AnimationMode		=	LOOP
	End
	//ParticleSysBone			=	None CalvaryDustTrails
End

AnimationState				=	MOVING DECELERATE MOUNTED
	Animation
		AnimationName		=	#(MODEL)_M_DECL
		AnimationMode		=	ONCE
	End
	//ParticleSysBone			=	None CalvaryDustTrails
End

AnimationState				=	MOVING WALKING MOUNTED
	Animation
		AnimationName		=	#(MODEL)_M_WLKA
		AnimationMode		=	LOOP
	End
	Flags					=	RANDOMSTART
	//ParticleSysBone			=	None InfantryDustTrails  
End

AnimationState				=	MOVING BACKING_UP MOUNTED
	Animation
		AnimationName		=	#(MODEL)_M_BAKA
		AnimationMode		=	LOOP
	End
	Flags					=	RANDOMSTART
	//ParticleSysBone			=	None InfantryDustTrails  
End

AnimationState        = MOUNTED MOVING FIRING_OR_PREATTACK_A
	ShareAnimation		= Yes
	Animation
		AnimationName       = #(MODEL)_M_ATRA
		AnimationMode       = LOOP
	End
	Flags               = RANDOMSTART  
End

AnimationState				=	MOVING MOUNTED
	Animation
		AnimationName		=	#(MODEL)_M_RUNA
		AnimationMode		=	LOOP
	End
 	Flags					=	RANDOMSTART
	//ParticleSysBone			=	None CalvaryDustTrails  
End

// --- Selected Anims
AnimationState				=	SELECTED MOUNTED
	SimilarRestart			=   Yes			
	StateName				=	AtAttentionIdleMounted
	Animation				=	ATNB
		AnimationName		=	#(MODEL)_M_ATNB
		AnimationMode		=	LOOP
	End
	BeginScript
		Prev = CurDrawablePrevAnimationState()
		if Prev == "Idle" then CurDrawableSetTransitionAnimState("TRANS_Select") end
		if Prev == "AtAttentionIdleMounted" then CurDrawableSetTransitionAnimState("TRANS_Select") end
	EndScript
End

TransitionState				=	TRANS_Select
	Animation
		AnimationName		=	#(MODEL)_M_ATNA
		AnimationMode		=	ONCE
	End
End

// --- Idle Anims
AnimationState				= MOUNTED
	Animation
		AnimationName		=	#(MODEL)_M_IDLA
		AnimationPriority	=	20
		AnimationMode		=	ONCE
		AnimationBlendTime	=	15
	End
	Flags				=	RESTART_ANIM_WHEN_COMPLETE
End

// --------- UNMOUNTED  ------------

//------------------  DYING -------------------------------------------------------------

// --- Flying through the air.
AnimationState        = STUNNED_FLAILING WEAPONSET_TOGGLE_1
	StateName           = STATE_Bow
	Animation
		AnimationName     = #(MODEL)_B_FLYA
		AnimationMode     = LOOP
	End
	Flags               = RANDOMSTART
End

AnimationState        = STUNNED_FLAILING 
	StateName           = STATE_Sword
	Animation
		AnimationName     = #(MODEL)_U_FLYA
		AnimationMode     = LOOP
	End
	Flags               = RANDOMSTART
End

// --- Dying anims
AnimationState        = DYING SPLATTED WEAPONSET_TOGGLE_1
	StateName           = STATE_Bow
	Animation
		AnimationName     = #(MODEL)_B_LNDA
		AnimationMode     = ONCE
	End
End

AnimationState        = DYING SPLATTED
	StateName           = STATE_Sword
	Animation
		AnimationName     = #(MODEL)_U_LNDA
		AnimationMode     = ONCE
	End
End

AnimationState        = DYING WEAPONSET_TOGGLE_1	//WEAPONSTATE_CLOSE_RANGE
	StateName           = STATE_Bow
	Animation
		AnimationName     = #(MODEL)_B_DIEA
		AnimationMode     = ONCE
	End
End

AnimationState        = DYING
	StateName           = STATE_Sword
	Animation
		AnimationName     = #(MODEL)_U_DIEA
		AnimationMode     = ONCE
	End
	Animation           = GUHero_DIEB
		AnimationName     = #(MODEL)_U_DIEB
		AnimationMode     = ONCE
	End
End


// --- Stunned anims


AnimationState        = STUNNED_STANDING_UP WEAPONSET_TOGGLE_1
	StateName           = STATE_Bow
	Animation
		AnimationName     = #(MODEL)_B_GTPA
		AnimationMode     = ONCE
		AnimationSpeedFactorRange = 1.5 1.5
	End
End

AnimationState        = STUNNED_STANDING_UP
	StateName           = STATE_Sword
	Animation
		AnimationName     = #(MODEL)_U_GTPA
		AnimationMode     = ONCE
		AnimationSpeedFactorRange = 1.5 1.5
	End
End

AnimationState        = STUNNED WEAPONSET_TOGGLE_1
	StateName           = STATE_Bow
	Animation
		AnimationName     = #(MODEL)_B_LNDA
		AnimationMode     = ONCE
	End
End

AnimationState        = STUNNED 
	StateName           = STATE_Sword
	Animation           = GUHero_LNDA
		AnimationName     = #(MODEL)_U_LNDA
		AnimationMode     = ONCE
	End
End				

//------------------ SPECIAL POWER ANIMS ---------------------


// RAIN OF ARROWS SPECIAL POWER //
AnimationState				= PACKING_TYPE_1  WEAPONSET_TOGGLE_1
	StateName				= rainofarrows
	Animation
		AnimationName		= #(MODEL)_B_ATKA2
		AnimationMode		= LOOP
	End
//			FXEvent	= Frame:6	Name: FX_SarumanDominateAtSelf
End

// DOMINATE SPECIAL POWER //
AnimationState				= PACKING_TYPE_1
	StateName				= Curse
	Animation
		AnimationName		= #(MODEL)_U_LVLA
		AnimationMode		= ONCE
	End
//			FXEvent	= Frame:6	Name: FX_SarumanDominateAtSelf
End

// DOMINATE SPECIAL POWER //
AnimationState				= PACKING_TYPE_2 CREATE_A_HERO_39
	StateName				= Curse
	Animation
		AnimationName		= #(MODEL)_U_LVLA #(MODEL)_U_SPCD
		AnimationMode		= ONCE
	End
//			;FXEvent	= Frame:6	Name: FX_SarumanDominateAtSelf
End

// TELEPORT SPECIAL POWER //
AnimationState				= PACKING_TYPE_3
	StateName				= Curse
	Animation
		AnimationName		= #(MODEL)_U_SPCA
		AnimationMode		= ONCE
	End
//			FXEvent	= Frame:6	Name: FX_SarumanDominateAtSelf
End

//--------------------- Wound Arrow anim
AnimationState        =  SPECIAL_WEAPON_TWO CREATE_A_HERO_39
	StateName = STATE_Bow
	Animation
		AnimationName       = #(MODEL)_U_SPCD #(MODEL)_U_LVLA
		AnimationMode       = ONCE
	End
	;FrameForPristineBonePositions = 59
	;BeginScript
	;	CurDrawableShowSubObject("arrow")
	;EndScript
End
AnimationState        =  SPECIAL_WEAPON_TWO
	StateName = STATE_Bow
	Animation
		AnimationName       = #(MODEL)_U_SPCL #(MODEL)_U_ATKC
		AnimationMode       = ONCE
	End
	FrameForPristineBonePositions = 59
	BeginScript
		CurDrawableShowSubObject("arrow")
	EndScript
End
		
//------------------ ATTACKING --------------------------------------------------------------------
		// Attacking Anims [Weapon_A]
		
		
		
//		AnimationState        = MOVING WEAPONSET_TOGGLE_1 FIRING_OR_PREATTACK_A
//			Animation           = TrotAndFire
//				AnimationName       = #(MODEL)_U_ATRA
//				AnimationMode       = LOOP
//			End
//			Flags               = RANDOMSTART
//			StateName = RunAndSwing
//		End
//		
//		AnimationState        = FIRING_OR_PREATTACK_A WEAPONSET_TOGGLE_1
//			StateName           = STATE_Sword
//			
//			Animation           = ATKD
//				AnimationName     = #(MODEL)_U_ATKD
//				AnimationMode     = ONCE
//				UseWeaponTiming		= Yes
//				AnimationSpeedFactorRange = 1.149 1.149
//			End
//			
//			Animation           = ATKE
//				AnimationName    = #(MODEL)_U_ATKE
//				AnimationMode     = ONCE
//				UseWeaponTiming		= Yes
//				AnimationSpeedFactorRange = 1.149 1.149
//			End
//			
//			Animation           = ATKF
//				AnimationName    = #(MODEL)_U_ATKF
//				AnimationMode     = ONCE
//				AnimationSpeedFactorRange = 1.47 1.47
//			End
//			Flags				=	RESTART_ANIM_WHEN_COMPLETE
//			//	FrameForPristineBonePositions = 59
//			BeginScript
//				Prev = CurDrawablePrevAnimationState()
//				if Prev == "STATE_Bow" then CurDrawableSetTransitionAnimState("TRANS_BowToSword") end
//			EndScript
//		End

;-----------------------Wraith Moving----------------------------------------
		AnimationState			= CREATE_A_HERO_39 MOVING USER_45
			;StateName           = STATE_RunningSword
			Flags               = RANDOMSTART
			Animation
				AnimationName   = uudweller_wlka
//				AnimationMode   = LOOP
				AnimationSpeedFactorRange = 1.5 1.5
//				;Distance = 28
			End
		End

		AnimationState			= CREATE_A_HERO_39 MOVING USER_27
			;StateName           = STATE_RunningSword
			Flags               = RANDOMSTART
			ParticleSysBone 	= NONE Permanent_FireWraithGlow FollowBone:Yes
			ParticleSysBone = BAT_UARML Permanent_FireWraithSmoke FollowBone:Yes
			ParticleSysBone = BAT_UARMR Permanent_FireWraithSmoke FollowBone:Yes
			ParticleSysBone = B_PELVIS Permanent_FireWraithSmoke FollowBone:Yes
			ParticleSysBone = B_PELVIS Permanent_FireWraithBodyEmbers FollowBone:Yes
			ParticleSysBone = BAT_UARML Permanent_FireWraithBodyEmbers FollowBone:Yes
			ParticleSysBone = BAT_UARMR Permanent_FireWraithBodyEmbers FollowBone:Yes
			ParticleSysBone = BAT_UARMR Permanent_FireWraithHeadEmbers_R FollowBone:Yes
			ParticleSysBone = BAT_UARML Permanent_FireWraithHeadEmbers_L FollowBone:Yes
			ParticleSysBone = B_HEAD Permanent_FireWraithEye_R FollowBone:Yes
			ParticleSysBone = B_HEAD Permanent_FireWraithEye_L FollowBone:Yes
			ParticleSysBone = B_HEAD Permanent_FireWraithHeadEmbers FollowBone:Yes
			ParticleSysBone = B_HEAD Permanent_FireWraithHeadSmoke FollowBone:Yes
			Animation
				AnimationName   = uudweller_wlka
//				AnimationMode   = LOOP
				AnimationSpeedFactorRange = 1.5 1.5
//				;Distance = 28
			End
		End

		AnimationState			= CREATE_A_HERO_39 MOVING USER_33
			;StateName           = STATE_RunningSword
			Flags               = RANDOMSTART
			ParticleSysBone 	= NONE Permanent_MorgulWraithGlow FollowBone:Yes
			ParticleSysBone 	= NONE Permanent_MorgulWraithShadow FollowBone:Yes
			ParticleSysBone = B_HEAD Permanent_MorgulWraithEye_L FollowBone:Yes
			Animation
				AnimationName   = uudweller_wlka
//				AnimationMode   = LOOP
				AnimationSpeedFactorRange = 1.5 1.5
//				;Distance = 28
			End
		End

		AnimationState			= CREATE_A_HERO_39 MOVING USER_29
			;StateName           = STATE_RunningSword
			Flags               = RANDOMSTART
			ParticleSysBone = NONE Permanent_FrostWraithGlow FollowBone:no
			ParticleSysBone = NONE Permanent_FrostWraithSnow FollowBone:no
			ParticleSysBone = B_AXE Permanent_FrostWraithSwordFire FollowBone:Yes
			ParticleSysBone = BAT_UARML Permanent_FrostWraithSmoke FollowBone:Yes
			ParticleSysBone = BAT_UARMR Permanent_FrostWraithSmoke FollowBone:Yes
			ParticleSysBone = BAT_THIGHL Permanent_FrostWraithSmoke FollowBone:Yes
			ParticleSysBone = BAT_THIGHR Permanent_FrostWraithSmoke FollowBone:Yes
			ParticleSysBone = B_PELVIS Permanent_FrostWraithSmoke FollowBone:Yes
			Animation
				AnimationName   = uudweller_wlka
//				AnimationMode   = LOOP
				AnimationSpeedFactorRange = 1.5 1.5
//				;Distance = 28
			End
		End
		AnimationState			= CREATE_A_HERO_39 MOVING USER_32
			;StateName           = STATE_RunningSword
			Flags               = RANDOMSTART
			ParticleSysBone = BAT_UARML Permanent_SandWraithSand FollowBone:Yes
			ParticleSysBone = BAT_UARMR Permanent_SandWraithSand FollowBone:Yes
			ParticleSysBone = B_PELVIS Permanent_SandWraithSand FollowBone:Yes
			ParticleSysBone = BAT_UARML Permanent_SandWraithSmoke FollowBone:Yes
			ParticleSysBone = BAT_UARMR Permanent_SandWraithSmoke FollowBone:Yes
			ParticleSysBone = B_PELVIS Permanent_SandWraithSmoke FollowBone:Yes
			Animation
				AnimationName   = uudweller_wlka
//				AnimationMode   = LOOP
				AnimationSpeedFactorRange = 1.5 1.5
//				;Distance = 28
			End
		End
		AnimationState			= CREATE_A_HERO_39 MOVING
			;StateName           = STATE_RunningSword
			Flags               = RANDOMSTART
			Animation
				AnimationName   = uudweller_wlka
//				AnimationMode   = LOOP
				AnimationSpeedFactorRange = 1.5 1.5
//				;Distance = 28
			End
		End


//------------------ MOVING -------------------------------------------------------------

		AnimationState        = MOVING USER_4                 // Moving slaughter
			StateName           = Slaughter
			Flags               = RANDOMSTART
			//ParticleSysBone     = None InfantryDustTrails
			Animation           = GUHero_ATKE
				AnimationName     = #(MODEL)_U_ATKE
				AnimationMode     = LOOP
			End
			StateName           = NoSword
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "Sword" then CurDrawableSetTransitionAnimState("TRANS_SwordToBow") end
			EndScript
		End

		//--- Running with bow
		AnimationState			= MOVING WEAPONSET_TOGGLE_1		//WEAPONSTATE_CLOSE_RANGE
			StateName           = STATE_RunningBow
			Flags               = RANDOMSTART
			//ParticleSysBone    = None InfantryDustTrails
			Animation
				AnimationName   = #(MODEL)_B_RUNA
//				AnimationMode   = LOOP
				AnimationSpeedFactorRange = 0.85 0.85
//				Distance		= 28
			End
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Sword" then CurDrawableSetTransitionAnimState("TRANS_SwordToBow") end
				if Prev == "STATE_RunningSword" then CurDrawableSetTransitionAnimState("TRANS_SwordToBow_Running") end
				if Prev == "STATE_Rappelling"  then CurDrawableSetTransitionAnimState("Trans_RappellingToRunning_WeaponToggle") return end
			EndScript
		End

		//--- Running with sword
		AnimationState			= MOVING
			StateName           = STATE_RunningSword
			Flags               = RANDOMSTART
			//ParticleSysBone    = None InfantryDustTrails
			Animation
				AnimationName   = #(MODEL)_U_RUNA
//				AnimationMode   = LOOP
				AnimationSpeedFactorRange = 0.85 0.85
//				Distance = 28
			End
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Bow" then CurDrawableSetTransitionAnimState("TRANS_BowToSword") end
				if Prev == "STATE_RunningBow" then CurDrawableSetTransitionAnimState("TRANS_BowToSword_Running") end
				if Prev == "STATE_Rappelling"  then CurDrawableSetTransitionAnimState("Trans_RappellingToRunning") return end
			EndScript
		End

		//---------------------------------------------------
		//New style firing with bow
		AnimationState					=	PREATTACK_A WEAPONSET_TOGGLE_1
			StateName					=	STATE_Firing
			Animation					=	ReadyToDrawn
				AnimationName			=	#(MODEL)_B_ATKA1
				AnimationMode			=	ONCE
//				UseWeaponTiming			=	Yes			// UseWeaponTiming plus random weapon field equals desync.  Leaving as warning
				//AnimationBlendTime		=	10
			End
		End

		AnimationState					=	FIRING_OR_RELOADING_A WEAPONSET_TOGGLE_1
			StateName					=	STATE_Firing
			Animation					=	LooseReloadDraw
				AnimationName			=	#(MODEL)_B_ATKA2
				AnimationMode			=	ONCE
//				UseWeaponTiming			=	Yes			// UseWeaponTiming plus random weapon field equals desync.  Leaving as warning
				AnimationSpeedFactorRange = 1.1 1.1		// Therefore, this is all you get.  A slight speed up so that the animation can always finish before any possible random value Design sets the range for
				//AnimationBlendTime		=	10
			End
		End
		//---------------------End New style firing

		AnimationState					=	CONTINUOUS_FIRE_MEAN WEAPONSET_TOGGLE_1 ;;.;; uncommented
			Animation					=	HangFrameWhileCoasting
				AnimationName			=	#(MODEL)_B_ATKA2
				AnimationMode			=	MANUAL
			End
		End
		
		AnimationState						= CONTINUOUS_FIRE_SLOW WEAPONSET_TOGGLE_1 ;;.;; uncommented
			//StateName						= STATE_Idle_Bow
			Animation						= PutAwayArrow
				AnimationName				= #(MODEL)_U_ATKA3
				AnimationMode				= ONCE
			End
		End
				
		//End New style firing
		//---------------------------------------------------

		AnimationState				= FIRING_OR_PREATTACK_A WEAPONSET_TOGGLE_1
			StateName				= STATE_Firing
			Animation
				AnimationName		= #(MODEL)_B_ATKA1
				AnimationMode		= ONCE
				UseWeaponTiming		= No			// UseWeaponTiming plus random weapon field equals desync.  Leaving as warning
			End
		End

		AnimationState				= FIRING_OR_PREATTACK_A // Melee attack.
			Animation
				AnimationName		= #(MODEL)_U_ATKA1 #(MODEL)_U_ATKA #(MODEL)_U_ATKB
				AnimationMode		= ONCE
				UseWeaponTiming		= Yes
			End
		End


		
//-------------------- HIT REACTIONS -----------------------------------------------------------

// this hit animation attack stance
		AnimationState = EMOTION_ALERT HIT_REACTION WEAPONSET_TOGGLE_1
			Animation
				AnimationName = #(MODEL)_B_HITA
				AnimationMode = ONCE
			End
		End

		AnimationState = HIT_REACTION WEAPONSET_TOGGLE_1
			Animation
				AnimationName = #(MODEL)_B_HITA
				AnimationMode = ONCE
			End
		End

		AnimationState = HIT_REACTION
			Animation = Sword_HITA
				AnimationName = #(MODEL)_U_HITA
				AnimationMode = ONCE
			End
			Animation = Sword_HITB
				AnimationName = #(MODEL)_U_HITB
				AnimationMode = ONCE
			End

			BeginScript
				PrevAnim = CurDrawablePrevAnimation()
				if PrevAnim == "Foot_IDLB"
				then
					return "Sword_HITB"
				else
					return "Swort_HITA"
				end
			EndScript
		End

//------------ SPECIAL POWERS ------------------------------------------------------------------		

		AnimationState		  =	THROWN_PROJECTILE
			Animation
				AnimationName =	#(MODEL)_U_LEP2
				AnimationMode =	LOOP
			End
		End

		AnimationState		  =	ABOUT_TO_HIT
			Animation
				AnimationName =	#(MODEL)_U_LEP3
				AnimationMode =	ONCE
			End
		End

		AnimationState				= SPECIAL_WEAPON_ONE CREATE_A_HERO_39							; Aragorn shouting Elendil anim
			StateName				= STATE_ready
			Animation
				AnimationName		= #(MODEL)_U_ATKB
				AnimationMode		= ONCE
			End
			;ParticleSysBone			= B_SWORDBONE ElendilFlare FollowBone:yes
			;ParticleSysBone			= B_SWORDBONE ElendilSwordFlare FollowBone:yes
;			;FXEvent	= Name: FX_ElendilGlowEvent
		End

		AnimationState				= SPECIAL_POWER_1							; Aragorn shouting Elendil anim
			StateName				= STATE_ready
			Animation
				AnimationName		= #(MODEL)_U_SPCA
				AnimationMode		= ONCE
			End
			ParticleSysBone			= B_SWORDBONE ElendilFlare FollowBone:yes
			ParticleSysBone			= B_SWORDBONE ElendilSwordFlare FollowBone:yes
;			FXEvent	= Name: FX_ElendilGlowEvent
		End

		// WORD OF POWER ANIMS ON FOOT //
		AnimationState		  =	SPECIAL_WEAPON_ONE
			StateName		  =	Attacking
			Animation
				AnimationName =	#(MODEL)_U_SPCA
				AnimationMode =	ONCE
			End
			//FXEvent			  =	Frame:5	Name:FX_GandalfPreAttackBlast
		End

		//	WIZARD BLAST ANIMS MOUNTED //
		AnimationState		  =	SPECIAL_WEAPON_TWO MOUNTED
			StateName		  =	Attacking
			Animation
				AnimationName =	#(MODEL)_U_SPLD #(MODEL)_U_ATKA
				AnimationMode =	ONCE
			End
		End
	
		//	WIZARD BLAST ANIMS ON FOOT //
		AnimationState		  =	SPECIAL_WEAPON_TWO
			StateName		  =	Attacking
			Animation
				AnimationName =	#(MODEL)_U_SPCB #(MODEL)_U_ATKA
				AnimationMode =	ONCE
			End
		End

		//	ISTARI LIGHT STAFF WEAPON MOUNTED //
		AnimationState		  =	SPECIAL_WEAPON_THREE MOUNTED	// FIRING_OR_PREATTACK_C
			StateName		  =	Attacking
			Animation		  =	StaffLaser
				AnimationName =	#(MODEL)_U_SPCD #(MODEL)_U_ATKA
				AnimationMode =	ONCE
			End
			FXEvent			  =	Frame:30 Name:FX_GandalfStaffFlare
		End

		//	ISTARI LIGHT STAFF WEAPON ON FOOT //
		AnimationState		  =	SPECIAL_WEAPON_THREE // FIRING_OR_PREATTACK_C
			StateName		  =	Attacking
			Animation		  =	StaffLaser
				AnimationName =	#(MODEL)_U_SPCE #(MODEL)_U_ATKA//	isitari's light?
				AnimationMode =	ONCE
			End
			FXEvent			  =	Frame:30 Name:FX_GandalfStaffFlare
		End

		
		; Throwing and cripple strike
		AnimationState		  =	SPECIAL_WEAPON_FOUR
			StateName		  =	Attacking
			Animation
				AnimationName =	#(MODEL)_U_SPCD
				AnimationMode =	ONCE
			End
			FrameForPristineBonePositions	= 44
		End

		AnimationState		  =	SPECIAL_WEAPON_FIVE
			StateName		  =	Attacking
			Animation
				AnimationName =	#(MODEL)_U_SPCE
				AnimationMode =	ONCE
			End
		End

		AnimationState		  =	SPECIAL_WEAPON_SIX
			StateName		  =	Attacking
			Animation
				AnimationName =	#(MODEL)_U_SPCF
				AnimationMode =	ONCE
			End
		End

		//	Special Power 1
		AnimationState		  =	PACKING_TYPE_1 UNPACKING
			StateName		  =	Attacking
			Animation		  =	LightningSwordStart
				AnimationName =	#(MODEL)_U_SPCC #(MODEL)_U_ATKA
				AnimationMode =	ONCE
			End
			FXEvent			  =	Frame:14 Name:FX_CreateAHeroLightningCharge
//			FXEvent			  =	Frame:70 Name:FX_GandalfLightningFizzle
			FXEvent			  =	Frame:14 Name:FX_GandalfLightningSword	FrameStop:70
		End
	
		AnimationState		  =	PACKING_TYPE_1 PREPARING
			StateName		  =	Attacking
			Animation		  =	LightningSwordLoop
				AnimationName =	#(MODEL)_U_SPCA #(MODEL)_U_ATKA
				AnimationMode =	LOOP
			End
		End

		AnimationState		  =	PACKING_TYPE_1 PACKING
			StateName		  =	Attacking
			Animation		  =	LightningSwordPutAway
				AnimationName =	#(MODEL)_U_SPCB #(MODEL)_U_ATKA
				AnimationMode =	ONCE
			End
		End

		// (specific) dwarf train allies.
		AnimationState		  =	PACKING_TYPE_2 CREATE_A_HERO_20 CREATE_A_HERO_21
			Animation
				AnimationName =	#(MODEL)_U_SPCC
				AnimationMode =	LOOP
			End
		End

		//	Special Power 2
		AnimationState		  =	PACKING_TYPE_2 UNPACKING
			StateName		  =	Attacking
			Animation		  =	LightningSwordStart
				AnimationName =	#(MODEL)_U_SPCC #(MODEL)_U_ATKA
				AnimationMode =	ONCE
			End
			FXEvent			  =	Frame:14 Name:FX_CreateAHeroLightningCharge
//			FXEvent			  =	Frame:70 Name:FX_GandalfLightningFizzle
			FXEvent			  =	Frame:14 Name:FX_GandalfLightningSword	FrameStop:70
		End
	
		AnimationState		  =	PACKING_TYPE_2 PREPARING
			StateName		  =	Attacking
			Animation		  =	LightningSwordLoop
				AnimationName =	#(MODEL)_U_SPCA #(MODEL)_U_ATKA
				AnimationMode =	LOOP
			End
		End

		AnimationState		  =	PACKING_TYPE_2 PACKING
			StateName		  =	Attacking
			Animation		  =	LightningSwordPutAway
				AnimationName =	#(MODEL)_U_SPCB #(MODEL)_U_ATKA
				AnimationMode =	ONCE
			End
		End
		
//----------- Captain of Gondor - Sword --------------------------------------------
		AnimationState        = PACKING_TYPE_2 WEAPONSET_TOGGLE_1
			StateName		  =	CaptainPower
			Animation           = GUHero_CHRC
				AnimationName     = #(MODEL)_U_CHRC
				AnimationMode     = ONCE
				AnimationSpeedFactorRange = 1.2 1.2
			End
		End

//----------- Captain of Gondor - Bow -----------------------------------------------
		AnimationState        = PACKING_TYPE_2
			StateName		  =	STATE_CaptainBow
			Animation           = GUHero_CHRD
				AnimationName     = #(MODEL)_U_SPCE #(MODEL)_U_SPCA #(MODEL)_U_CHRD
				AnimationMode     = ONCE
//				AnimationSpeedFactorRange = 0.75 0.75
			End
		End

		//	Special Power 3
		AnimationState		  =	PACKING_TYPE_3 UNPACKING
			StateName		  =	Attacking
			Animation		  =	LightningSwordStart
				AnimationName =	#(MODEL)_U_SPCC #(MODEL)_U_ATKA
				AnimationMode =	ONCE
			End
			FXEvent			  =	Frame:14 Name:FX_CreateAHeroLightningCharge
//			FXEvent			  =	Frame:70 Name:FX_GandalfLightningFizzle
			FXEvent			  =	Frame:14 Name:FX_GandalfLightningSword	FrameStop:70
		End
	
		AnimationState		  =	PACKING_TYPE_3 PREPARING
			StateName		  =	Attacking
			Animation		  =	LightningSwordLoop
				AnimationName =	#(MODEL)_U_SPCA #(MODEL)_U_ATKA
				AnimationMode =	LOOP
			End
		End

		AnimationState		  =	PACKING_TYPE_3 PACKING
			StateName		  =	Attacking
			Animation		  =	LightningSwordPutAway
				AnimationName =	#(MODEL)_U_SPCB #(MODEL)_U_ATKA
				AnimationMode =	ONCE
			End
		End
		
		//	Special Power 4
		AnimationState		  =	PACKING_TYPE_4 UNPACKING	  
			Animation		  
				AnimationName =	#(MODEL)_U_SPCA
				AnimationMode =	ONCE
			End
		End
	
		AnimationState		  =	PACKING_TYPE_4 PREPARING
			Animation		 
				AnimationName =	#(MODEL)_U_SPCA
				AnimationMode =	ONCE
			End
		End

		AnimationState		  =	PACKING_TYPE_4 PACKING
			Animation		  
				AnimationName =	#(MODEL)_U_SPCA
				AnimationMode =	ONCE
			End
		End
		
		//	Special Power 5
		
		//		AnimationState		  =	PACKING_TYPE_5 UNPACKING WEAPONSET_TOGGLE_1  
//			Animation		  
//				AnimationName =	#(MODEL)_B_SPCB
//				AnimationMode =	ONCE
//			End
//		End
//	
//		AnimationState		  =	PACKING_TYPE_5 PREPARING WEAPONSET_TOGGLE_1
//			Animation		 
//				AnimationName =	#(MODEL)_B_SPCB
//				AnimationMode =	ONCE
//			End
//		End

		AnimationState		  =	PACKING_TYPE_5 PACKING WEAPONSET_TOGGLE_1
			Animation		  
				AnimationName =	#(MODEL)_B_SPCB
				AnimationMode =	ONCE
				AnimationSpeedFactorRange = 0.7333 0.7333
			End
		End
		
//		AnimationState		  =	PACKING_TYPE_5 UNPACKING	  
//			Animation		  
//				AnimationName =	#(MODEL)_U_SPCB
//				AnimationMode =	ONCE
//			End
//		End
//	
//		AnimationState		  =	PACKING_TYPE_5 PREPARING
//			Animation		 
//				AnimationName =	#(MODEL)_U_SPCB
//				AnimationMode =	ONCE
//			End
//		End

		AnimationState		  =	PACKING_TYPE_5 PACKING
			Animation		  
				AnimationName =	#(MODEL)_U_SPCB
				AnimationMode =	ONCE
			End
		End
		
		//	Special Power 6
//		AnimationState		  =	PACKING_TYPE_6 UNPACKING	  
//			Animation		  
//				AnimationName =	#(MODEL)_U_SPCD
//				AnimationMode =	ONCE
//			End
//		End
//	
//		AnimationState		  =	PACKING_TYPE_6 PREPARING
//			Animation		 
//				AnimationName =	#(MODEL)_U_SPCD
//				AnimationMode =	ONCE
//			End
//		End

		AnimationState		  =	PACKING_TYPE_6 PACKING
			Animation		  
				AnimationName =	#(MODEL)_U_SPCD
				AnimationMode =	ONCE
			End
		End




//====== LEVELED
		AnimationState				= LEVELED WEAPONSET_TOGGLE_1	// This state clears itself in 3 seconds
			Animation				= LevelUp
				AnimationName		= #(MODEL)_B_CHRA #(MODEL)_B_LVLA
				AnimationMode		= ONCE
			End
		End

		AnimationState				= LEVELED 						// This state clears itself in 3 seconds
			Animation				= LevelUp
				AnimationName		= #(MODEL)_U_CHRA #(MODEL)_U_LVLA
				AnimationMode		= ONCE
			End
		End

//---------------------- EMOTIONS ---------------------------------------------------------------

		// cheer, mounted
		AnimationState				=	EMOTION_CELEBRATING MOUNTED
			Animation 
				AnimationName		=	#(MODEL)_M_CHRA #(MODEL)_M_IRFA
				AnimationMode		=	ONCE
			End
			Flags					=	RESTART_ANIM_WHEN_COMPLETE
		End

		// cheer, w/ bow on foot
		AnimationState				=	EMOTION_CELEBRATING WEAPONSET_TOGGLE_1
			Animation 
				AnimationName		=	#(MODEL)_B_CHRA
				AnimationMode		=	ONCE
			End
			Flags					=	RESTART_ANIM_WHEN_COMPLETE
		End

		// cheer, on foot
		AnimationState				=	EMOTION_CELEBRATING
			Animation CHRA
				AnimationName		=	#(MODEL)_U_CHRA #(MODEL)_U_TNTA
				AnimationMode		=	ONCE
			End
			Animation CHRB
				AnimationName		=	#(MODEL)_U_CHRB #(MODEL)_U_CHRA #(MODEL)_U_TNTA
				AnimationMode		=	ONCE
			End
			Flags					=	RESTART_ANIM_WHEN_COMPLETE
		End
		
		// raise flag, w/ bow on foot
		AnimationState				=	RAISING_FLAG WEAPONSET_TOGGLE_1
			Animation 
				AnimationName		=	#(MODEL)_B_CHRA
				AnimationMode		=	ONCE
			End
			Flags					=	RESTART_ANIM_WHEN_COMPLETE
		End

		// cheer, on foot
		AnimationState				=	RAISING_FLAG
			Animation CHRA
				AnimationName		=	#(MODEL)_U_CHRA #(MODEL)_U_TNTA
				AnimationMode		=	ONCE
			End
			Animation CHRB
				AnimationName		=	#(MODEL)_U_CHRB #(MODEL)_U_CHRA #(MODEL)_U_TNTA
				AnimationMode		=	ONCE
			End
			Flags					=	RESTART_ANIM_WHEN_COMPLETE
		End
		
		// taunt, mounted
		AnimationState				=	EMOTION_TAUNTING MOUNTED
			Animation 
				AnimationName		=	#(MODEL)_M_TNTA #(MODEL)_M_IRFA
				AnimationMode		=	ONCE
			End
			Flags					=	RESTART_ANIM_WHEN_COMPLETE
		End
		
		// taunt, w/ bow on foot
		AnimationState				=	EMOTION_TAUNTING WEAPONSET_TOGGLE_1
			Animation 
				AnimationName		=	#(MODEL)_B_TNTA
				AnimationMode		=	ONCE
			End
			Flags					=	RESTART_ANIM_WHEN_COMPLETE
		End
AnimationState				=	EMOTION_TAUNTING CREATE_A_HERO_39
	Animation = Foot_ATNB // Bored Idle
		AnimationName	   = chdwell_idle
		AnimationMode	   = ONCE
		AnimationPriority  = 90
		AnimationBlendTime = 20
	End
	Animation = Foot_ATND // Bored Fidget
		AnimationName	   = chdwell_idle
		AnimationMode	   = ONCE
		AnimationPriority  = 10
		AnimationBlendTime = 20
	End
	Animation = Foot_ATNE // Bored Fidget
		AnimationName	   = chdwell_idle
		AnimationMode	   = ONCE
		AnimationPriority  = 30
		AnimationBlendTime = 20
	End
	Flags =	RESTART_ANIM_WHEN_COMPLETE
End
		// taunt, on foot
		AnimationState				=	EMOTION_TAUNTING
			Animation CHRA
				AnimationName		=	#(MODEL)_U_TNTA
				AnimationMode		=	ONCE
			End
			Animation CHRB
				AnimationName		=	#(MODEL)_U_TNTB #(MODEL)_U_TNTA
				AnimationMode		=	ONCE
			End
			Flags					=	RESTART_ANIM_WHEN_COMPLETE
		End
		
// 	Animation
// 		AnimationName				= RUMerry_CHRA
// 		AnimationMode				= ONCE
// 	End
// 	Animation
// 		AnimationName				= RUMerry_CHRB
// 		AnimationMode				= ONCE
// 	End
// 	Flags							= RESTART_ANIM_WHEN_COMPLETE
// End
// 
// AnimationState						= EMOTION_TAUNTING
// 	Animation
// 		AnimationName				= RUMerry_TNTB
// 		AnimationMode				= LOOP
// 	End
// End
// 
// AnimationState					= EMOTION_ALERT WEAPONSET_TOGGLE_1
// 	StateName					= STATE_Ready_Rocks
// 	Animation					= IDLA
// 		AnimationName			= RUMerry_IDLA
// 		AnimationMode			= LOOP
// 	End
// End
// AnimationState					= EMOTION_ALERT
// 	StateName					= STATE_Ready_Sword
// 	Animation
// 		AnimationName			= RUMerry_IDLB
// 		AnimationMode			= LOOP
// 	End
// End
		


//====== ENGAGED
		AnimationState				= ENGAGED WEAPONSET_TOGGLE_1
			StateName				= STATE_ready
			Animation
				AnimationName		= #(MODEL)_B_IDLA
				AnimationMode		= ONCE
			End
		End
		AnimationState				= ENGAGED
			StateName				= STATE_ready
			Animation
				AnimationName		= #(MODEL)_U_IDLA
				AnimationMode		= ONCE
			End
		End
		AnimationState				= BETWEEN_FIRING_SHOTS_A WEAPONSET_TOGGLE_1
			StateName				= STATE_ready
			Animation
				AnimationName		= #(MODEL)_B_IDLA
				AnimationMode		= ONCE
			End
		End
		AnimationState				= BETWEEN_FIRING_SHOTS_A
			StateName				= STATE_ready
			Animation
				AnimationName		= #(MODEL)_U_IDLA
				AnimationMode		= ONCE
			End
		End
AnimationState =  CREATE_A_HERO_39 USER_45
	StateName = STATE_UnselectedM
	Animation = Foot_ATNB // Bored Idle
		AnimationName	   = chdwell_idle
		AnimationMode	   = ONCE
		AnimationPriority  = 90
		AnimationBlendTime = 20
	End
	Animation = Foot_ATND // Bored Fidget
		AnimationName	   = chdwell_idle
		AnimationMode	   = ONCE
		AnimationPriority  = 10
		AnimationBlendTime = 20
	End
	Animation = Foot_ATNE // Bored Fidget
		AnimationName	   = chdwell_idle
		AnimationMode	   = ONCE
		AnimationPriority  = 30
		AnimationBlendTime = 20
	End
	Flags =	RESTART_ANIM_WHEN_COMPLETE
 	BeginScript //script to set transition from moving
 		Prev = CurDrawablePrevAnimationState()
 		if Prev == "STATE_SwapModels" then 
 			CurDrawableSetTransitionAnimState("Trans_SwapModelsM") 
 		end
 	EndScript
End

AnimationState =  CREATE_A_HERO_39 USER_29
	StateName = STATE_UnselectedM
	ParticleSysBone = B_HEAD FrostWraithBreath FollowBone:Yes
	Animation = Foot_ATNB // Bored Idle
		AnimationName	   = chdwell_idle
		AnimationMode	   = ONCE
		AnimationPriority  = 90
		AnimationBlendTime = 20
	End
	Animation = Foot_ATND // Bored Fidget
		AnimationName	   = chdwell_idle
		AnimationMode	   = ONCE
		AnimationPriority  = 10
		AnimationBlendTime = 20
	End
	Animation = Foot_ATNE // Bored Fidget
		AnimationName	   = chdwell_idle
		AnimationMode	   = ONCE
		AnimationPriority  = 30
		AnimationBlendTime = 20
	End
	Flags =	RESTART_ANIM_WHEN_COMPLETE
 	BeginScript //script to set transition from moving
 		Prev = CurDrawablePrevAnimationState()
 		if Prev == "STATE_SwapModels" then 
 			CurDrawableSetTransitionAnimState("Trans_SwapModelsM") 
 		end
 	EndScript
End

AnimationState =  CREATE_A_HERO_39 
	StateName = STATE_UnselectedM
	Animation = Foot_ATNB // Bored Idle
		AnimationName	   = chdwell_idle
		AnimationMode	   = ONCE
		AnimationPriority  = 90
		AnimationBlendTime = 20
	End
	Animation = Foot_ATND // Bored Fidget
		AnimationName	   = chdwell_idle
		AnimationMode	   = ONCE
		AnimationPriority  = 10
		AnimationBlendTime = 20
	End
	Animation = Foot_ATNE // Bored Fidget
		AnimationName	   = chdwell_idle
		AnimationMode	   = ONCE
		AnimationPriority  = 30
		AnimationBlendTime = 20
	End
	Flags =	RESTART_ANIM_WHEN_COMPLETE
 	BeginScript //script to set transition from moving
 		Prev = CurDrawablePrevAnimationState()
 		if Prev == "STATE_SwapModels" then 
 			CurDrawableSetTransitionAnimState("Trans_SwapModelsM") 
 		end
 	EndScript
End
// --- Idle Toggled

		AnimationState = SELECTED WEAPONSET_TOGGLE_1
			StateName				= STATE_Selected_Bow
			Animation				= Selected_Loop
				AnimationName		= #(MODEL)_B_ATNB
				AnimationMode		= LOOP
				AnimationBlendTime	= 10
			End
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Idle_Bow" then CurDrawableSetTransitionAnimState("TRANS_BoredToSelectedBow") end
			EndScript
			Flags = RESTART_ANIM_WHEN_COMPLETE
		End

		AnimationState = SELECTED
			StateName				= STATE_Selected_Sword
			Animation				= Selected_Loop
				AnimationName		= #(MODEL)_U_ATNB
				AnimationMode		= LOOP
				AnimationBlendTime	= 10
			End
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Idle_Sword" then CurDrawableSetTransitionAnimState("TRANS_BoredToSelectedSword") end
			EndScript
			Flags = RESTART_ANIM_WHEN_COMPLETE
		End

		AnimationState				= WEAPONSET_TOGGLE_1
			StateName				= STATE_Idle_Bow
			Animation
				AnimationName		=	#(MODEL)_B_IDLA
				AnimationPriority	=	20
				AnimationMode		=	ONCE
				AnimationBlendTime	=	15
			End
			Flags				=	RESTART_ANIM_WHEN_COMPLETE
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Idle_Sword" then CurDrawableSetTransitionAnimState("TRANS_SwordToBow") end
			EndScript
		End

		IdleAnimationState
			StateName					= STATE_Idle_Sword	
			Animation = Foot_IDLB // Bored Idle
				AnimationName       = #(MODEL)_U_IDLB
				AnimationMode       = ONCE
				AnimationPriority   = 20
			End
			Animation = Foot_IDLC // Bored Fidget
				AnimationName       = #(MODEL)_U_IBFA
				AnimationMode       = ONCE
				AnimationPriority   = 2
			End
			//Animation = Foot_IDLD // Bored Fidget
			//	AnimationName       = #(MODEL)_U_IBFB
			//	AnimationMode       = ONCE
			//	AnimationPriority   = 1
			//End

			BeginScript
				CurDrawableHideSubObject("arrow")
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Selected_Sword" then CurDrawableSetTransitionAnimState("TRANS_SelectedToBoredSword") end
				if Prev == "STATE_Idle_Bow" then CurDrawableSetTransitionAnimState("TRANS_BowToSword") end
			EndScript
		End
		

	//---transitions--------------------------------------------

		TransitionState = TRANS_BoredToSelectedSword
		// Once we have proper animations for enter -> idle -> exit, fix this properly.
			Animation = ANTD
				AnimationName	= #(MODEL)_U_ATNA #(MODEL)_U_ATND #(MODEL)_U_IDLA
				AnimationMode	= ONCE
			End		
		End
		
		TransitionState = TRANS_SelectedToBoredSword
			Animation			= ATNF
				AnimationName	= #(MODEL)_U_ATNC #(MODEL)_U_ATNF #(MODEL)_U_ATNE
				AnimationMode	= ONCE
			End		
		End	

		TransitionState = TRANS_BoredToSelectedBow
			Animation = ATNC
				AnimationName		= #(MODEL)_U_ATNF #(MODEL)_U_ATNE
				AnimationMode		= ONCE
			End		
		End
		
		TransitionState = TRANS_CaptainBowToSelectedBow
			Animation = ATNC
				AnimationName		= #(MODEL)_U_ATNF
				AnimationMode		= ONCE
				AnimationBlendTime	= 10
				AnimationSpeedFactorRange = 1.5 1.5
			End		
		End
		
		TransitionState = TRANS_SelectedToBoredBow
			Animation			= ATNA
				AnimationName	= #(MODEL)_U_ATNF
				AnimationMode	= ONCE
			End		
		End	


		TransitionState       = TRANS_BowToSword
			Animation           = CUHero_STHA
				AnimationName     = #(MODEL)_B_STHA
				AnimationMode     = ONCE
			End
		End

		TransitionState       = TRANS_SwordToBow
			Animation           = CUHero_STHB
				AnimationName     = #(MODEL)_U_STHA
				AnimationMode     = ONCE
			End
		End	

		TransitionState       		= TRANS_BowToSword_Running
			Animation           	= DrawSwords
				AnimationName       = #(MODEL)_B_STHB
				AnimationMode       = ONCE
			End
		End
		
		TransitionState       		= TRANS_SwordToBow_Running
			Animation           	= DrawBow
				AnimationName       = #(MODEL)_U_STHB
				AnimationMode       = ONCE
			End
		End		

	End
