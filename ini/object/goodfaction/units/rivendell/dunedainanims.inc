//================== ANIMATIONS ==============================================================		
//--- Long Shot ----------------------------------------------------------------------------
		AnimationState			= FIRING_E			
			Animation
				AnimationName	= GUFaramir_SKL.gufaramir_45
				AnimationMode   = LOOP								// loop it, because this looks better than just stopping immediately after.
				AnimationSpeedFactorRange	= 2.0 2.5
				AnimationBlendTime = 30
			End
			BeginScript
				;CurDrawableHideSubObject("spear")
			EndScript
		End
//----------- Flying through air -------
		AnimationState        = STUNNED_FLAILING WEAPONSET_TOGGLE_1
			StateName           = STATE_Sword
			Animation           = GUFaramir_FLYB
				AnimationName     = GUFaramir_SKL.GUFaramir_FLYB
				AnimationMode     = LOOP
				AnimationSpeedFactorRange	= 0.4 0.6
			End
			Flags               = RANDOMSTART
		End
		AnimationState        = STUNNED_FLAILING WEAPONSET_TOGGLE_2
			StateName           = STATE_Spear
			Animation           = GUFaramir_FLYB
				AnimationName     = GUFaramir_SKL.GUFaramir_FLYB
				AnimationMode     = LOOP
				AnimationSpeedFactorRange	= 0.4 0.6
			End
			Flags               = RANDOMSTART
		End
		AnimationState        = STUNNED_FLAILING 
			StateName           = STATE_Bow
			Animation           = GUFaramir_FLYA
				AnimationName     = GUFaramir_SKL.GUFaramir_FLYA
				AnimationMode     = LOOP
				AnimationSpeedFactorRange	= 0.4 0.6
			End
			Flags               = RANDOMSTART
			BeginScript
				;CurDrawableHideSubObject("spear")
			EndScript
		End
		;--------------------------Dying
		AnimationState        = DYING SPLATTED WEAPONSET_TOGGLE_1
			StateName           = STATE_Sword
			Animation           = GUFaramir_LNDB
				AnimationName     = GUFaramir_SKL.GUFaramir_LNDB
				AnimationMode     = ONCE
			End
		End
		AnimationState        = DYING SPLATTED WEAPONSET_TOGGLE_2
			StateName           = STATE_Spear
			Animation           = GUFaramir_LNDB
				AnimationName     = GUFaramir_SKL.GUFaramir_LNDB
				AnimationMode     = ONCE
			End
		End
		AnimationState        = DYING SPLATTED
			StateName           = STATE_Bow
			Animation           = GUFaramir_LNDA
				AnimationName     = GUFaramir_SKL.GUFaramir_LNDA
				AnimationMode     = ONCE
			End
			BeginScript
				;CurDrawableHideSubObject("spear")
			EndScript
		End
		AnimationState        = DYING WEAPONSET_TOGGLE_1
			StateName           = STATE_Sword
			Animation           = GUFaramir_DIEA
				AnimationName     = GUFaramir_SKL.GUFaramir_DIEA
				AnimationMode     = ONCE
			End
			Animation           = GUFaramir_DIEB
				AnimationName     = GUFaramir_SKL.GUFaramir_DIEB
				AnimationMode     = ONCE
			End
		End
		AnimationState        = DYING WEAPONSET_TOGGLE_2
			StateName           = STATE_Spear
			Animation           = GUFaramirS_DIEA
				AnimationName     = GUFaramir_SKL.GUFaramirS_DIEA
				AnimationMode     = ONCE
			End
			Animation           = GUFaramir_DIEB
				AnimationName     = GUFaramir_SKL.GUFaramir_DIEB
				AnimationMode     = ONCE
			End
		End
		AnimationState        = DYING
			StateName           = STATE_Bow
			Animation           = GUFaramir_DIEC
				AnimationName     = GUFaramir_SKL.GUFaramir_DIEC
				AnimationMode     = ONCE
			End
			BeginScript
				;CurDrawableHideSubObject("spear")
			EndScript
		End
		;--------------------------Stunned
		AnimationState						= PARALYZED
			Animation
				AnimationName				= GUFaramir_IDLC
				AnimationMode				= LOOP
			End
			BeginScript
				;CurDrawableHideSubObject("spear")
			EndScript
		End
		AnimationState        = STUNNED_STANDING_UP WEAPONSET_TOGGLE_1
			StateName           = STATE_Sword
			Animation           = GUFaramir_GTPB
				AnimationName     = GUFaramir_SKL.GUFaramir_GTPB
				AnimationMode     = ONCE
				AnimationSpeedFactorRange = 1.5 1.5
			End
		End
		AnimationState        = STUNNED_STANDING_UP WEAPONSET_TOGGLE_2
			StateName           = STATE_Spear
			Animation           = GUFaramirS_GTPA
				AnimationName     = GUFaramir_SKL.GUFaramirS_GTPA
				AnimationMode     = ONCE
				AnimationSpeedFactorRange = 1.5 1.5
			End
		End
		AnimationState        = STUNNED_STANDING_UP
			StateName           = STATE_Bow
			Animation           = GUFaramir_GTPA
				AnimationName     = GUFaramir_SKL.GUFaramir_GTPA
				AnimationMode     = ONCE
				AnimationSpeedFactorRange = 1.5 1.5
			End
			BeginScript
				;CurDrawableHideSubObject("spear")
			EndScript
		End
		AnimationState        = STUNNED WEAPONSET_TOGGLE_1
			StateName           = STATE_Sword
			Animation           = GUFaramir_LNDB
				AnimationName     = GUFaramir_SKL.GUFaramir_LNDB
				AnimationMode     = ONCE
			End
		End
		AnimationState        = STUNNED WEAPONSET_TOGGLE_2
			StateName           = STATE_Spear
			Animation           = GUFaramir_LNDB
				AnimationName     = GUFaramir_SKL.GUFaramir_LNDB
				AnimationMode     = ONCE
			End
		End
		AnimationState        = STUNNED 
			StateName           = STATE_Bow
			Animation           = GUFaramir_LNDA
				AnimationName     = GUFaramir_SKL.GUFaramir_LNDA
				AnimationMode     = ONCE
			End
			BeginScript
				;CurDrawableHideSubObject("spear")
			EndScript
		End				
		AnimationState        = USER_1
			Animation           = GUFaramir_POSA
				AnimationName     = GUFaramir_SKL.GUFaramir_POSA
				AnimationMode     = ONCE
			End
		End
		AnimationState        =  SPECIAL_WEAPON_ONE
			StateName = STATE_Bow
			Animation
				AnimationName           = GUFaramir_SKL.GUFaramir_ATKC
				AnimationMode       = ONCE
			End
			FrameForPristineBonePositions = 59
			BeginScript
				CurDrawableShowSubObject("arrow")
				CurDrawableShowSubObject("arrowup")
				;CurDrawableHideSubObject("spear")
			EndScript
		End
		;------------------------Moving
		AnimationState        = MOVING WEAPONSET_TOGGLE_1 FIRING_OR_PREATTACK_A
			Animation           = TrotAndFire
				AnimationName       = GUFaramir_SKL.GUFaramir_ATRA
				AnimationMode       = LOOP
			End
			Flags               = RANDOMSTART
			StateName = RunAndSwing
		End
		AnimationState        = MOVING WEAPONSET_TOGGLE_2 FIRING_OR_PREATTACK_A
			Animation           = TrotAndFire
				AnimationName       = GUFaramir_SKL.gudundan_atra
				AnimationMode       = LOOP
				AnimationSpeedFactorRange = 1.0 1.3
			End
			Flags               = RANDOMSTART
			StateName = RunAndSwing
			BeginScript
				CurDrawableHideSubObject("arrow")
				CurDrawableHideSubObject("arrowup")
			EndScript
		End
		AnimationState        = FIRING_OR_PREATTACK_A WEAPONSET_TOGGLE_1
			StateName           = STATE_Sword
			Animation           = ATKD
				AnimationName     = GUFaramir_SKL.GUFaramir_ATKD
				AnimationMode     = ONCE
				UseWeaponTiming		= Yes
				AnimationSpeedFactorRange = 1.149 1.149
			End
			Animation           = ATKE
				AnimationName    = GUFaramir_SKL.GUFaramir_ATKE
				AnimationMode     = ONCE
				UseWeaponTiming		= Yes
				AnimationSpeedFactorRange = 1.149 1.149
			End
			Animation           = ATKF
				AnimationName    = GUFaramir_SKL.GUFaramir_ATKF
				AnimationMode     = ONCE
				AnimationSpeedFactorRange = 1.47 1.47
			End
			Flags				=	RESTART_ANIM_WHEN_COMPLETE
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Bow" then CurDrawableSetTransitionAnimState("TRANS_BowToSword") end
			EndScript
		End
		AnimationState        = FIRING_OR_PREATTACK_A WEAPONSET_TOGGLE_2
			StateName           = STATE_Spear
			Animation           = ATKD
				AnimationName     = GUFaramir_SKL.GUFaramirS_ATKA
				AnimationMode     = ONCE
				UseWeaponTiming		= Yes
				AnimationSpeedFactorRange = 1.5 1.55
			End
			Animation           = ATKE
				AnimationName    = GUFaramir_SKL.GUFaramirS_ATKB
				AnimationMode     = ONCE
				UseWeaponTiming		= Yes
				AnimationSpeedFactorRange = 1.5 1.55
			End
			Animation           = ATKF
				AnimationName    = GUFaramir_SKL.GUFaramirS_ATKA
				AnimationMode     = ONCE
				AnimationSpeedFactorRange = 1.5 1.55
			End
			Flags				=	RESTART_ANIM_WHEN_COMPLETE
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Bow" then CurDrawableSetTransitionAnimState("TRANS_BowToSword") end
			EndScript
		End
		AnimationState        = MOVING USER_4
			StateName           = Slaughter
			Flags               = RANDOMSTART
			Animation           = GUFaramirS_ATKB
				AnimationName     = GUFaramir_SKL.GUFaramirS_ATKB
				AnimationMode     = LOOP
			End
			StateName           = NoSword
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "Sword" then CurDrawableSetTransitionAnimState("TRANS_SwordToBow") end
			EndScript
		End
		AnimationState                =    MOVING WEAPONSET_TOGGLE_2 ATTACKING
            Animation                =    gudundan_runb
                AnimationName        =    GUFaramir_SKL.gudundan_runb
                AnimationMode        =    LOOP
				AnimationSpeedFactorRange = 1.0 1.3
				;AnimationSpeedFactorRange = 0.9 0.9
            End
			Animation                        = GUFaramirA_RUND
                AnimationName                = GUManMocap_RUND
                AnimationMode                = LOOP
                ;AnimationSpeedFactorRange = 0.9 0.9
            End
            Flags                    =    RANDOMSTART
//            ParticleSysBone        =    None InfantryDustTrails
            BeginScript
				CurDrawableHideSubObject("arrow")
				CurDrawableHideSubObject("arrowup")
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Bow" then CurDrawableSetTransitionAnimState("TRANS_BowToSword") end
				if Prev == "STATE_RunningBow" then CurDrawableSetTransitionAnimState("TRANS_BowToSword_Running") end
			EndScript
        End
		
		AnimationState			= MOVING WEAPONSET_TOGGLE_1
			StateName           = STATE_RunningSword
			Flags               = RANDOMSTART
			Animation           = GUFaramir_RUNB
				AnimationName   = GUFaramir_SKL.guithil_runb
				AnimationSpeedFactorRange = 1.0 1.3
				; AnimationSpeedFactorRange = 0.85 0.85
				; Distance		= 28
			End
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Bow" then CurDrawableSetTransitionAnimState("TRANS_BowToSword") end
				if Prev == "STATE_RunningBow" then CurDrawableSetTransitionAnimState("TRANS_BowToSword_Running") end
			EndScript
		End
		
		AnimationState			= MOVING WEAPONSET_TOGGLE_2
			StateName           = STATE_RunningSword
			Flags               = RANDOMSTART
			Animation           = gudundan_rund
				AnimationName   = GUFaramir_SKL.gudundan_rund
				AnimationSpeedFactorRange = 1.0 1.3
				; AnimationSpeedFactorRange = 0.85 0.85
				; Distance		= 28
			End
			Animation           = gudundan_rund
				AnimationName   = GUFaramir_SKL.gudundan_rune
				AnimationSpeedFactorRange = 1.0 1.3
				; AnimationSpeedFactorRange = 0.85 0.85
				; Distance		= 28
			End
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Bow" then CurDrawableSetTransitionAnimState("TRANS_BowToSword") end
				if Prev == "STATE_RunningBow" then CurDrawableSetTransitionAnimState("TRANS_BowToSword_Running") end
				CurDrawableHideSubObject("arrow")
				CurDrawableHideSubObject("arrowup")
			EndScript
		End
		
		AnimationState        = ATTACKING WEAPONSET_TOGGLE_1
			StateName           = STATE_Sword
			Animation           = ATKD
				AnimationName     = GUFaramir_SKL.GUFaramir_IDLA
				AnimationMode     = MANUAL
			End			
		End
		
		
		AnimationState        = ATTACKING WEAPONSET_TOGGLE_2
			StateName           = STATE_Spear
			Animation           = ATKD
				AnimationName     = GUFaramir_SKL.GUFaramirS_IDLA
				AnimationMode     = MANUAL
			End			
		End
		AnimationState			= MOVING
			StateName           = STATE_RunningBow
			Flags               = RANDOMSTART
			Animation           = GUFaramir_RUNA
				AnimationName   = GUFaramir_SKL.guithil_runa
				AnimationSpeedFactorRange = 1.0 1.3
				; AnimationSpeedFactorRange = 0.85 0.85
				; Distance = 28
			End
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Sword" then CurDrawableSetTransitionAnimState("TRANS_SwordToBow") end
				if Prev == "STATE_RunningSword" then CurDrawableSetTransitionAnimState("TRANS_SwordToBow_Running") end
				;CurDrawableHideSubObject("spear")
			EndScript
		End
		
		AnimationState					= MOVING EMOTION_TERROR
			Animation					= Terror
				AnimationName			= GUFaramir_SKL.GUFaramir_RUNA
				AnimationMode			= LOOP
			End
			BeginScript
				CurDrawableShowSubObject("arrow")
				CurDrawableShowSubObject("arrowup")
				CurDrawableShowSubObject("arrownock")
				;CurDrawableHideSubObject("spear")
			EndScript
		End
;============================================CONTINUOUS FIRING VANILLA=============================	
//---------------------------------------------------
		AnimationState						= PREATTACK_A 
			StateName						= STATE_Firing
			Animation						= ReadyToDrawn
				AnimationName				= GUFaramir_SKL.guithil_atka1
				AnimationMode				= ONCE
				UseWeaponTiming				= Yes
				AnimationSpeedFactorRange	= 1.5 1.5
				AnimationBlendTime			= 10			
			End
			BeginScript
				CurDrawableShowSubObject("arrow")
				CurDrawableShowSubObject("arrowup")
				CurDrawableShowSubObject("arrownock")
			EndScript
		End
		AnimationState						= FIRING_OR_RELOADING_A
			StateName						= STATE_Firing
			Animation						= OneFrameOfShooting
				AnimationName				= GUFaramir_SKL.guithil_atka2
				AnimationMode				= ONCE
				AnimationSpeedFactorRange	= 1.0 1.0 ;1.25 1.25
				AnimationBlendTime			= 0
			End
			BeginScript
				CurDrawableShowSubObject("arrow")
				CurDrawableShowSubObject("arrowup")
				CurDrawableShowSubObject("arrownock")
			EndScript
		End

;============================================CONTINUOUS FIRING VANILLA=============================	
;----Keep PreAttack_C after _A. Thats what fixes the strange shooting		
		AnimationState						= PREATTACK_C
			StateName						= STATE_Firing
			Animation						= ReadyToDrawn
				AnimationName				= GUFaramir_SKL.guithil_atka1
				AnimationMode				= ONCE
//				UseWeaponTiming				= Yes			// UseWeaponTiming plus random weapon field equals desync.  Leaving as warning
				AnimationSpeedFactorRange	= 1.5 1.5		// Therefore, this is all you get.  A slight speed up so that the animation can always finish before any possible random value Design sets the range for
				AnimationBlendTime			= 10			
			End
			BeginScript
				CurDrawableShowSubObject("arrow")
				CurDrawableShowSubObject("arrowup")
				CurDrawableShowSubObject("arrownock")
			EndScript
		End
		AnimationState						= FIRING_OR_RELOADING_C
			StateName						= STATE_Firing
			Animation						= OneFrameOfShooting
				AnimationName				= GUFaramir_SKL.guithil_atka2
				AnimationMode				= ONCE
				AnimationSpeedFactorRange	= 1.0 1.0 ;1.25 1.25
				AnimationBlendTime			= 0
			End
			BeginScript
				CurDrawableShowSubObject("arrow")
				CurDrawableShowSubObject("arrowup")
				CurDrawableShowSubObject("arrownock")
			EndScript
		End
;============================================CONTINUOUS FIRING VANILLA=============================	
;============================================CONTINUOUS FIRING VANILLA=============================	
//-------- Persistant firing (keep bow drawn ) ------------
		AnimationState					=	CONTINUOUS_FIRE_MEAN
			Animation					=	HangFrameWhileCoasting
				AnimationName			=	GUFaramir_SKL.guithil_atka2
				AnimationMode			=	MANUAL
				UseWeaponTiming			= Yes	
				AnimationBlendTime			= 10
			End
			BeginScript
				CurDrawableShowSubObject("arrow")
				CurDrawableShowSubObject("arrowup")
				CurDrawableShowSubObject("arrownock")
			EndScript
		End
		AnimationState                        = CONTINUOUS_FIRE_SLOW
            Animation                        = PutAwayArrow
                AnimationName                = GUFaramir_SKL.guithil_atka3
                AnimationMode                = ONCE
            End
        End
;============================================CONTINUOUS FIRING VANILLA=============================	
		;----------------------------
        ; AnimationState                    =    PREATTACK_A 
            ; StateName                    =    STATE_Firing
            ; Animation                    =    ReadyToDrawn
                ; AnimationName            =    GUFaramir_SKL.guithil_atka1
                ; AnimationMode            =    ONCE
            ; End
        ; End
        ; AnimationState                    =    FIRING_OR_RELOADING_A 
            ; StateName                    =    STATE_Firing
            ; Animation                    =    LooseReloadDraw
                ; AnimationName            =    GUFaramir_SKL.guithil_atka2
                ; AnimationMode            =    ONCE
                ; AnimationSpeedFactorRange = 1.1 1.1
            ; End
        ; End
        ; AnimationState                    =    CONTINUOUS_FIRE_MEAN
            ; Animation                    =    HangFrameWhileCoasting
                ; AnimationName            =    GUFaramir_SKL.guithil_atka2
                ; AnimationMode            =    MANUAL
            ; End
        ; End
        ; AnimationState                        = CONTINUOUS_FIRE_SLOW
            ; Animation                        = PutAwayArrow
                ; AnimationName                = GUFaramir_SKL.guithil_atka3
                ; AnimationMode                = ONCE
            ; End
        ; End
		
		AnimationState = EMOTION_ALERT HIT_REACTION WEAPONSET_TOGGLE_1
			Animation = Hit_Level_1_d
				AnimationName = GUFaramir_SKL.GUFaramir_HITD
				AnimationMode = ONCE
			End
		End
		
		AnimationState = EMOTION_ALERT HIT_REACTION WEAPONSET_TOGGLE_2
			Animation = Hit_Level_1_d
				AnimationName = GUFaramir_SKL.GUFaramir_HITD
				AnimationMode = ONCE
			End
		End
		AnimationState = HIT_REACTION WEAPONSET_TOGGLE_1
			Animation = Hit_Level_1_b
				AnimationName = GUFaramir_SKL.GUFaramir_HITB
				AnimationMode = ONCE
			End
		End
		AnimationState = HIT_REACTION WEAPONSET_TOGGLE_2
			Animation = Hit_Level_1_b
				AnimationName = GUFaramir_SKL.GUFaramirS_HITA
				AnimationMode = ONCE
			End
		End
		AnimationState = HIT_REACTION
			Animation = Hit_Level_1_c
				AnimationName = GUFaramir_SKL.GUFaramir_HITC
				AnimationMode = ONCE
			End
		End
		AnimationState = HIT_REACTION
			Animation = Hit_Level_1_c
				AnimationName = GUFaramir_SKL.GUFaramir_HITC
				AnimationMode = ONCE
			End
		End
		
		AnimationState						= EMOTION_AFRAID WEAPONSTATE_CLOSE_RANGE
			ShareAnimation					= Yes
			StateName						= STATE_Sword
			Animation						= FearWithSword
				AnimationName				= GUFaramir_SKL.gufaramir_fear
				AnimationMode				= LOOP
			End
			BeginScript
				CurDrawableHideSubObject("arrow")
				CurDrawableHideSubObject("arrowup")
				CurDrawableHideSubObject("arrownock")
			EndScript
		End
		AnimationState						= EMOTION_AFRAID
			ShareAnimation					= Yes
			StateName						= STATE_Bow
			Animation						= FERA
				AnimationName				= GUFaramir_SKL.gufaramir_fear
				AnimationMode				= LOOP
			End
			BeginScript
				CurDrawableShowSubObject("arrow")
				CurDrawableShowSubObject("arrowup")
				CurDrawableShowSubObject("arrownock")
				;CurDrawableHideSubObject("spear")
			EndScript
		End
		
		AnimationState				= LEVELED WEAPONSET_TOGGLE_1
			Animation				= LevelUp
				AnimationName		= GUFaramir_SKL.GUFaramir_CHRC
				AnimationMode		= ONCE
			End
		End
		
		AnimationState				= LEVELED WEAPONSET_TOGGLE_2
			Animation				= LevelUp
				AnimationName		= GUFaramir_SKL.GUFaramirS_CHRA
				AnimationMode		= ONCE
			End
		End
		AnimationState				= LEVELED
			Animation				= LevelUp
				AnimationName		= GUFaramir_SKL.GUFaramir_CHRD
				AnimationMode		= ONCE
			End
			BeginScript
				;CurDrawableHideSubObject("spear")
			EndScript
		End
		AnimationState				=	EMOTION_CELEBRATING WEAPONSET_TOGGLE_1
			Animation
				AnimationName		=	GUFaramir_SKL.GUFaramir_CHRC
				AnimationMode		=	LOOP
			End
		End
		AnimationState				=	EMOTION_CELEBRATING WEAPONSET_TOGGLE_2
			Animation
				AnimationName		=	GUFaramir_SKL.GUFaramirS_CHRA
				AnimationMode		=	LOOP
			End
			Animation
				AnimationName		=	GUFaramir_SKL.GUFaramirS_CHRB
				AnimationMode		=	LOOP
			End
			Flags						= RESTART_ANIM_WHEN_COMPLETE
		End
		AnimationState				=	EMOTION_CELEBRATING
			Animation
				AnimationName		=	GUFaramir_SKL.GUFaramir_CHRD
				AnimationMode		=	LOOP
			End
			BeginScript
				;CurDrawableHideSubObject("spear")
			EndScript
		End
		AnimationState				=	EMOTION_TAUNTING WEAPONSET_TOGGLE_1
			Animation
				AnimationName		=	GUFaramir_SKL.GUFaramir_TNTC
				AnimationMode		=	ONCE
			End
			Animation
				AnimationName		=	GUFaramir_SKL.GUFaramir_TNTD
				AnimationMode		=	ONCE
			End
			Flags						= RESTART_ANIM_WHEN_COMPLETE
		End
		AnimationState				=	EMOTION_TAUNTING WEAPONSET_TOGGLE_2
			Animation
				AnimationName		=	GUFaramir_SKL.GUFaramirS_TNTA
				AnimationMode		=	ONCE
			End
			Animation
				AnimationName		=	GUFaramir_SKL.GUFaramirS_TNTA
				AnimationMode		=	ONCE
			End
			Flags						= RESTART_ANIM_WHEN_COMPLETE
		End
		AnimationState				=	EMOTION_TAUNTING
			Animation
				AnimationName		=	GUFaramir_SKL.GUFaramir_CHRD
				AnimationMode		=	LOOP
			End
			BeginScript
				;CurDrawableHideSubObject("spear")
			EndScript
		End
		AnimationState					= SELECTED WEAPONSET_TOGGLE_1
			StateName					= STATE_Selected_Sword
			Animation					= ATNE
				AnimationName			= GUFaramir_SKL.GUFaramir_ATNE
				AnimationMode			= LOOP
				AnimationBlendTime		= 15
			End
			Flags						= RESTART_ANIM_WHEN_COMPLETE
			BeginScript
				CurDrawableHideSubObject("arrow")
				CurDrawableHideSubObject("arrowup")
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Selected_Bow" then CurDrawableSetTransitionAnimState("TRANS_BowToSword") end
				if Prev == "STATE_Idle_Sword" then CurDrawableSetTransitionAnimState("TRANS_BoredToSelectedSword") return end
			EndScript
		End
		AnimationState					= SELECTED WEAPONSET_TOGGLE_2
			StateName					= STATE_Selected_Sword
			Animation					= ATNE
				AnimationName			= GUFaramir_SKL.gudundan_atnb
				AnimationMode			= LOOP
				AnimationBlendTime		= 15
			End
			Flags						= RESTART_ANIM_WHEN_COMPLETE
			BeginScript
				CurDrawableHideSubObject("arrow")
				CurDrawableHideSubObject("arrowup")
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Selected_Bow" then CurDrawableSetTransitionAnimState("TRANS_BowToSword") end
				if Prev == "STATE_Idle_Spear" then CurDrawableSetTransitionAnimState("TRANS_BoredToSelectedSpear") return end
			EndScript
		End
		AnimationState				=	EMOTION_ALERT WEAPONSET_TOGGLE_1
			StateName				=	STATE_READY
			Animation				=	ready
				AnimationName		=	GUFaramir_SKL.GUMithilrS_IDLA
				AnimationMode		=	LOOP
				AnimationBlendTime	=	20
			End
		End
		AnimationState				=	EMOTION_ALERT WEAPONSET_TOGGLE_2
			StateName				=	STATE_READY
			Animation				=	ready
				AnimationName		=	GUFaramir_SKL.GUFaramirS_IDLA
				AnimationMode		=	LOOP
				AnimationBlendTime	=	20
			End
		End
		AnimationState				=	RAISING_FLAG WEAPONSET_TOGGLE_1
			Animation
				AnimationName		=	GUFaramir_SKL.GUFaramir_CHRC
				AnimationMode		=	LOOP
			End
		
		End
		AnimationState				=	RAISING_FLAG WEAPONSET_TOGGLE_2
			Animation
				AnimationName		=	GUFaramir_SKL.GUFaramirS_CHRA
				AnimationMode		=	LOOP
			End
		
		End
		AnimationState				=	RAISING_FLAG
			Animation
				AnimationName		=	GUFaramir_SKL.GUFaramir_CHRD
				AnimationMode		=	LOOP
			End
		
		End
		AnimationState				=	SELECTED 
			StateName				=	STATE_Selected_Bow
			Animation				=	ATNB
				AnimationName		=	GUFaramir_SKL.GUFaramir_ATNB
				AnimationMode		=	LOOP
				AnimationBlendTime  = 15
			End
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Selected_Sword" then CurDrawableSetTransitionAnimState("TRANS_SwordToBow") end
				if Prev == "STATE_Idle_Bow"	then CurDrawableSetTransitionAnimState("TRANS_BoredToSelectedBow") return end
				if Prev == "STATE_CaptainBow" then CurDrawableSetTransitionAnimState("TRANS_CaptainBowToSelectedBow") end
				CurDrawableHideSubObject("arrow")
				CurDrawableHideSubObject("arrowup")
				;CurDrawableHideSubObject("spear")
			EndScript
		End
		AnimationState					= WEAPONSET_TOGGLE_1
			StateName					= STATE_Idle_Sword	
			Animation           		= IDLE
				AnimationName       	= GUFaramir_SKL.GUFaramir_IDLE
				AnimationMode       	= ONCE ; If Flags =	RESTART_ANIM_WHEN_COMPLETE is added this MUST be ONCE to vary animations on WEAPONSET_TOGGLE_1
				AnimationPriority	    = 20
				AnimationBlendTime  = 15
			End
			Animation           		= IDLF
				AnimationName       	= GUFaramir_SKL.GUFaramir_IDLF
				AnimationMode       	= ONCE
				AnimationPriority	    = 1
			End
			Animation           		= IDLG
				AnimationName       	= GUFaramir_SKL.GUFaramir_IDLG
				AnimationMode       	= ONCE
				AnimationPriority	    = 1
			End
			Flags					=	RESTART_ANIM_WHEN_COMPLETE
			BeginScript
				CurDrawableHideSubObject("arrow")
				CurDrawableHideSubObject("arrowup")
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Idle_Bow" then CurDrawableSetTransitionAnimState("TRANS_BowToSword") end
				if Prev == "STATE_Selected_Sword" then CurDrawableSetTransitionAnimState("TRANS_SelectedToBoredSword") end
			EndScript
		End
		AnimationState					= WEAPONSET_TOGGLE_2
			StateName					= STATE_Idle_Spear	
			Animation           		= IDLE
				AnimationName       	= GUFaramir_SKL.gudundan_idlSb
				AnimationMode       	= ONCE ; If Flags =	RESTART_ANIM_WHEN_COMPLETE is added this MUST be ONCE to vary animations on WEAPONSET_TOGGLE_1
				AnimationPriority	    = 5
				AnimationBlendTime  = 15
			End
			Animation           		= IDLF
				AnimationName       	= GUFaramir_SKL.gudundan_idlSc
				AnimationMode       	= ONCE
				AnimationPriority	    = 1
			End
			Animation           		= IDLG
				AnimationName       	= GUFaramir_SKL.gudundan_idlSd
				AnimationMode       	= ONCE
				AnimationPriority	    = 1
			End
			Flags					=	RESTART_ANIM_WHEN_COMPLETE
			BeginScript
				CurDrawableHideSubObject("arrow")
				CurDrawableHideSubObject("arrowup")
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Idle_Bow" then CurDrawableSetTransitionAnimState("TRANS_BowToSword") end
				if Prev == "STATE_Selected_Sword" then CurDrawableSetTransitionAnimState("TRANS_SelectedToBoredSpear") end
			EndScript
		End
		IdleAnimationState
			StateName           = STATE_Idle_Bow
			Animation           = IdleBow
				AnimationName     = GUFaramir_SKL.gudundan_idld
				AnimationMode     = ONCE
				AnimationBlendTime  = 15
				AnimationPriority = 10
			End
			Animation           = IdleBow
				AnimationName     = GUFaramir_SKL.gudundan_idle
				AnimationMode     = ONCE
				AnimationBlendTime  = 15
				AnimationPriority = 10
			End				
			Animation           = IdleBow
				AnimationName     = GUFaramir_SKL.GUDUNDAN_IDLC
				AnimationMode     = ONCE
				AnimationPriority = 1
			End
			Flags							= RESTART_ANIM_WHEN_COMPLETE
			BeginScript
				CurDrawableHideSubObject("arrow")
				CurDrawableHideSubObject("arrowup")
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Idle_Sword" then CurDrawableSetTransitionAnimState("TRANS_SwordToBow") end
				if Prev == "STATE_Selected_Bow" then CurDrawableSetTransitionAnimState("TRANS_SelectedToBoredBow") end
				;CurDrawableHideSubObject("spear")
			EndScript
		End
		TransitionState = TRANS_BoredToSelectedSword
			Animation = ANTD
				AnimationName		= GUFaramir_SKL.gufaramir_antd
				AnimationMode	= ONCE
				;AnimationMode				= ONCE_BACKWARDS
			End		
			;Flags							= START_FRAME_LAST
		End
		TransitionState = TRANS_SelectedToBoredSword
			Animation			= ATNF
				AnimationName	= GUFaramir_SKL.gufaramir_atnf
				AnimationMode	= ONCE
			End		
		End	
		TransitionState = TRANS_BoredToSelectedSpear
			Animation			= ATND
				AnimationName	= GUFaramir_SKL.gudundan_atna
				AnimationMode	= ONCE
			End	
		End
		TransitionState = TRANS_SelectedToBoredSpear
			Animation			= ATNF
				AnimationName	= GUFaramir_SKL.gudundan_atnc
				AnimationMode	= ONCE
			End		
		End	
		TransitionState = TRANS_BoredToSelectedBow
			Animation = ATNC
				AnimationName		= GUFaramir_SKL.gummandril_atna
				AnimationMode		= ONCE
			End
			BeginScript
				CurDrawableHideSubObject("arrow")
				CurDrawableHideSubObject("arrowup")
				;CurDrawableHideSubObject("spear")
			EndScript				
		End
		TransitionState = TRANS_CaptainBowToSelectedBow
			Animation = ATNC
				AnimationName		= GUFaramir_SKL.gummandril_atna
				AnimationMode		= ONCE
				AnimationBlendTime	= 10
			End
			BeginScript
				CurDrawableHideSubObject("arrow")
				CurDrawableHideSubObject("arrowup")
				;CurDrawableHideSubObject("spear")
			EndScript			
		End
		TransitionState = TRANS_SelectedToBoredBow
			Animation			= ATNA
				AnimationName	= GUFaramir_SKL.gummandril_atnc
				AnimationMode	= ONCE
			End
			BeginScript
				CurDrawableHideSubObject("arrow")
				CurDrawableHideSubObject("arrowup")
				;CurDrawableHideSubObject("spear")
			EndScript				
		End	
		TransitionState       = TRANS_BowToSword
			Animation           = GUFaramir_STHA
				AnimationName     = GUFaramir_SKL.GUFaramir_STHA 
				AnimationMode     = ONCE
			End
		End
		TransitionState       = TRANS_SwordToBow
			Animation           = GUFaramir_STHB
				AnimationName     = GUFaramir_SKL.GUFaramir_STHB 
				AnimationMode     = ONCE
			End
		End	
		TransitionState       		= TRANS_BowToSword_Running
			Animation           	= DrawSwords
				AnimationName       = GUFaramir_SKL.GUFaramir_STHD
				AnimationMode       = ONCE
			End
		End
		TransitionState       		= TRANS_SwordToBow_Running
			Animation           	= DrawBow
				AnimationName       = GUFaramir_SKL.GUFaramir_STHC
				AnimationMode       = ONCE
			End
		End		
	End