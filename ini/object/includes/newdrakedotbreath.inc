;;,;; 2.02e Summoned Dragon DoT Breath

;------------------------------------------------------------------------------
	DamageNugget                        ; The large 90 degree arc
		Damage			= #MULTIPLY( FIREDRAKE_FLAME_DAMAGE 0.056 )
		Radius			= FIREDRAKE_FLAME_RADIUS
		DelayTime		= 200
		DamageType		= FLAME
		DamageFXType	= FLAME
		DeathType		= BURNED
		DamageArc		= 90
		DamageMaxHeight = 20 ;;,;; 50 ;We won't hurt something far above us.  Birds fly at around 100
		DamageSpeed		= 400
                DamageScalar  = 200000% NONE +MINE ;,; Make sure we one shot kill mines
	End
	
	DamageNugget						; The small area directly in front.
		Damage			= #MULTIPLY( FIREDRAKE_FLAME_DAMAGE 0.056 )
		Radius			= #MULTIPLY( FIREDRAKE_FLAME_RADIUS 0.25 )
		DelayTime		= 200
		DamageType		= FLAME
		DamageFXType	= FLAME
		DeathType		= BURNED
		DamageMaxHeight = 20 ;;,;; 50 ;We won't hurt something far above us.  Birds fly at around 100
		DamageSpeed		= 400
	End

	DamageNugget
		Damage			= #MULTIPLY( FIREDRAKE_FLAME_DAMAGE 0.111 )
		Radius			= FIREDRAKE_FLAME_RADIUS
		DelayTime		= 200
		DamageType		= MAGIC
		DamageArc		= 90
		DamageMaxHeight = 20 ;;,;; 50 ;We won't hurt something far above us.  Birds fly at around 100
		DamageSpeed		= 400
	End

;------------------------------------------------------------------------------
	DamageNugget                        ; The large 90 degree arc
		Damage			= #MULTIPLY( FIREDRAKE_FLAME_DAMAGE 0.056 )
		Radius			= FIREDRAKE_FLAME_RADIUS
		DelayTime		= 400
		DamageType		= FLAME
		DamageFXType	= FLAME
		DeathType		= BURNED
		DamageArc		= 90
		DamageMaxHeight = 20 ;;,;; 50 ;We won't hurt something far above us.  Birds fly at around 100
		DamageSpeed		= 400
                DamageScalar  = 200000% NONE +MINE ;,; Make sure we one shot kill mines
	End
	
	DamageNugget						; The small area directly in front.
		Damage			= #MULTIPLY( FIREDRAKE_FLAME_DAMAGE 0.056 )
		Radius			= #MULTIPLY( FIREDRAKE_FLAME_RADIUS 0.25 )
		DelayTime		= 400
		DamageType		= FLAME
		DamageFXType	= FLAME
		DeathType		= BURNED
		DamageMaxHeight = 20 ;;,;; 50 ;We won't hurt something far above us.  Birds fly at around 100
		DamageSpeed		= 400
	End

	DamageNugget
		Damage			= #MULTIPLY( FIREDRAKE_FLAME_DAMAGE 0.111 )
		Radius			= FIREDRAKE_FLAME_RADIUS
		DelayTime		= 400
		DamageType		= MAGIC
		DamageArc		= 90
		DamageMaxHeight = 20 ;;,;; 50 ;We won't hurt something far above us.  Birds fly at around 100
		DamageSpeed		= 400
	End

;------------------------------------------------------------------------------
	DamageNugget                        ; The large 90 degree arc
		Damage			= #MULTIPLY( FIREDRAKE_FLAME_DAMAGE 0.056 )
		Radius			= FIREDRAKE_FLAME_RADIUS
		DelayTime		= 600
		DamageType		= FLAME
		DamageFXType	= FLAME
		DeathType		= BURNED
		DamageArc		= 90
		DamageMaxHeight = 20 ;;,;; 50 ;We won't hurt something far above us.  Birds fly at around 100
		DamageSpeed		= 400
                DamageScalar  = 200000% NONE +MINE ;,; Make sure we one shot kill mines
	End
	
	DamageNugget						; The small area directly in front.
		Damage			= #MULTIPLY( FIREDRAKE_FLAME_DAMAGE 0.056 )
		Radius			= #MULTIPLY( FIREDRAKE_FLAME_RADIUS 0.25 )
		DelayTime		= 600
		DamageType		= FLAME
		DamageFXType	= FLAME
		DeathType		= BURNED
		DamageMaxHeight = 20 ;;,;; 50 ;We won't hurt something far above us.  Birds fly at around 100
		DamageSpeed		= 400
	End

	DamageNugget
		Damage			= #MULTIPLY( FIREDRAKE_FLAME_DAMAGE 0.111 )
		Radius			= FIREDRAKE_FLAME_RADIUS
		DelayTime		= 600
		DamageType		= MAGIC
		DamageArc		= 90
		DamageMaxHeight = 20 ;;,;; 50 ;We won't hurt something far above us.  Birds fly at around 100
		DamageSpeed		= 400
	End

;------------------------------------------------------------------------------
	DamageNugget                        ; The large 90 degree arc
		Damage			= #MULTIPLY( FIREDRAKE_FLAME_DAMAGE 0.056 )
		Radius			= FIREDRAKE_FLAME_RADIUS
		DelayTime		= 800
		DamageType		= FLAME
		DamageFXType	= FLAME
		DeathType		= BURNED
		DamageArc		= 90
		DamageMaxHeight = 20 ;;,;; 50 ;We won't hurt something far above us.  Birds fly at around 100
		DamageSpeed		= 400
                DamageScalar  = 200000% NONE +MINE ;,; Make sure we one shot kill mines
	End
	
	DamageNugget						; The small area directly in front.
		Damage			= #MULTIPLY( FIREDRAKE_FLAME_DAMAGE 0.056 )
		Radius			= #MULTIPLY( FIREDRAKE_FLAME_RADIUS 0.25 )
		DelayTime		= 800
		DamageType		= FLAME
		DamageFXType	= FLAME
		DeathType		= BURNED
		DamageMaxHeight = 20 ;;,;; 50 ;We won't hurt something far above us.  Birds fly at around 100
		DamageSpeed		= 400
	End

	DamageNugget
		Damage			= #MULTIPLY( FIREDRAKE_FLAME_DAMAGE 0.111 )
		Radius			= FIREDRAKE_FLAME_RADIUS
		DelayTime		= 800
		DamageType		= MAGIC
		DamageArc		= 90
		DamageMaxHeight = 20 ;;,;; 50 ;We won't hurt something far above us.  Birds fly at around 100
		DamageSpeed		= 400
	End

;------------------------------------------------------------------------------
	DamageNugget                        ; The large 90 degree arc
		Damage			= #MULTIPLY( FIREDRAKE_FLAME_DAMAGE 0.056 )
		Radius			= FIREDRAKE_FLAME_RADIUS
		DelayTime		= 1000
		DamageType		= FLAME
		DamageFXType	= FLAME
		DeathType		= BURNED
		DamageArc		= 90
		DamageMaxHeight = 20 ;;,;; 50 ;We won't hurt something far above us.  Birds fly at around 100
		DamageSpeed		= 400
                DamageScalar  = 200000% NONE +MINE ;,; Make sure we one shot kill mines
	End
	
	DamageNugget						; The small area directly in front.
		Damage			= #MULTIPLY( FIREDRAKE_FLAME_DAMAGE 0.056 )
		Radius			= #MULTIPLY( FIREDRAKE_FLAME_RADIUS 0.25 )
		DelayTime		= 1000
		DamageType		= FLAME
		DamageFXType	= FLAME
		DeathType		= BURNED
		DamageMaxHeight = 20 ;;,;; 50 ;We won't hurt something far above us.  Birds fly at around 100
		DamageSpeed		= 400
	End

	DamageNugget
		Damage			= #MULTIPLY( FIREDRAKE_FLAME_DAMAGE 0.111 )
		Radius			= FIREDRAKE_FLAME_RADIUS
		DelayTime		= 1000
		DamageType		= MAGIC
		DamageArc		= 90
		DamageMaxHeight = 20 ;;,;; 50 ;We won't hurt something far above us.  Birds fly at around 100
		DamageSpeed		= 400
	End

;------------------------------------------------------------------------------
	DamageNugget                        ; The large 90 degree arc
		Damage			= #MULTIPLY( FIREDRAKE_FLAME_DAMAGE 0.056 )
		Radius			= FIREDRAKE_FLAME_RADIUS
		DelayTime		= 1200
		DamageType		= FLAME
		DamageFXType	= FLAME
		DeathType		= BURNED
		DamageArc		= 90
		DamageMaxHeight = 20 ;;,;; 50 ;We won't hurt something far above us.  Birds fly at around 100
		DamageSpeed		= 400
                DamageScalar  = 200000% NONE +MINE ;,; Make sure we one shot kill mines
	End
	
	DamageNugget						; The small area directly in front.
		Damage			= #MULTIPLY( FIREDRAKE_FLAME_DAMAGE 0.056 )
		Radius			= #MULTIPLY( FIREDRAKE_FLAME_RADIUS 0.25 )
		DelayTime		= 1200
		DamageType		= FLAME
		DamageFXType	= FLAME
		DeathType		= BURNED
		DamageMaxHeight = 20 ;;,;; 50 ;We won't hurt something far above us.  Birds fly at around 100
		DamageSpeed		= 400
	End

	DamageNugget
		Damage			= #MULTIPLY( FIREDRAKE_FLAME_DAMAGE 0.111 )
		Radius			= FIREDRAKE_FLAME_RADIUS
		DelayTime		= 1200
		DamageType		= MAGIC
		DamageArc		= 90
		DamageMaxHeight = 20 ;;,;; 50 ;We won't hurt something far above us.  Birds fly at around 100
		DamageSpeed		= 400
	End

;------------------------------------------------------------------------------
	DamageNugget                        ; The large 90 degree arc
		Damage			= #MULTIPLY( FIREDRAKE_FLAME_DAMAGE 0.056 )
		Radius			= FIREDRAKE_FLAME_RADIUS
		DelayTime		= 1400
		DamageType		= FLAME
		DamageFXType	= FLAME
		DeathType		= BURNED
		DamageArc		= 90
		DamageMaxHeight = 20 ;;,;; 50 ;We won't hurt something far above us.  Birds fly at around 100
		DamageSpeed		= 400
                DamageScalar  = 200000% NONE +MINE ;,; Make sure we one shot kill mines
	End
	
	DamageNugget						; The small area directly in front.
		Damage			= #MULTIPLY( FIREDRAKE_FLAME_DAMAGE 0.056 )
		Radius			= #MULTIPLY( FIREDRAKE_FLAME_RADIUS 0.25 )
		DelayTime		= 1400
		DamageType		= FLAME
		DamageFXType	= FLAME
		DeathType		= BURNED
		DamageMaxHeight = 20 ;;,;; 50 ;We won't hurt something far above us.  Birds fly at around 100
		DamageSpeed		= 400
	End

	DamageNugget
		Damage			= #MULTIPLY( FIREDRAKE_FLAME_DAMAGE 0.111 )
		Radius			= FIREDRAKE_FLAME_RADIUS
		DelayTime		= 1400
		DamageType		= MAGIC
		DamageArc		= 90
		DamageMaxHeight = 20 ;;,;; 50 ;We won't hurt something far above us.  Birds fly at around 100
		DamageSpeed		= 400
	End

;------------------------------------------------------------------------------
	DamageNugget                        ; The large 90 degree arc
		Damage			= #MULTIPLY( FIREDRAKE_FLAME_DAMAGE 0.056 )
		Radius			= FIREDRAKE_FLAME_RADIUS
		DelayTime		= 1600
		DamageType		= FLAME
		DamageFXType	= FLAME
		DeathType		= BURNED
		DamageArc		= 90
		DamageMaxHeight = 20 ;;,;; 50 ;We won't hurt something far above us.  Birds fly at around 100
		DamageSpeed		= 400
                DamageScalar  = 200000% NONE +MINE ;,; Make sure we one shot kill mines
	End
	
	DamageNugget						; The small area directly in front.
		Damage			= #MULTIPLY( FIREDRAKE_FLAME_DAMAGE 0.056 )
		Radius			= #MULTIPLY( FIREDRAKE_FLAME_RADIUS 0.25 )
		DelayTime		= 1600
		DamageType		= FLAME
		DamageFXType	= FLAME
		DeathType		= BURNED
		DamageMaxHeight = 20 ;;,;; 50 ;We won't hurt something far above us.  Birds fly at around 100
		DamageSpeed		= 400
	End

	DamageNugget
		Damage			= #MULTIPLY( FIREDRAKE_FLAME_DAMAGE 0.111 )
		Radius			= FIREDRAKE_FLAME_RADIUS
		DelayTime		= 1600
		DamageType		= MAGIC
		DamageArc		= 90
		DamageMaxHeight = 20 ;;,;; 50 ;We won't hurt something far above us.  Birds fly at around 100
		DamageSpeed		= 400
	End

;------------------------------------------------------------------------------
	DamageNugget                        ; The large 90 degree arc
		Damage			= #MULTIPLY( FIREDRAKE_FLAME_DAMAGE 0.056 )
		Radius			= 100
		DelayTime		= 1800
		DamageType		= FLAME
		DamageFXType	= FLAME
		DeathType		= BURNED
		DamageArc		= 90
		DamageMaxHeight = 20 ;;,;; 50 ;We won't hurt something far above us.  Birds fly at around 100
		DamageSpeed		= 400
                DamageScalar  = 200000% NONE +MINE ;,; Make sure we one shot kill mines
	End
	
	DamageNugget						; The small area directly in front.
		Damage			= #MULTIPLY( FIREDRAKE_FLAME_DAMAGE 0.056 )
		Radius			= #MULTIPLY( 120 0.25 )
		DelayTime		= 1800
		DamageType		= FLAME
		DamageFXType	= FLAME
		DeathType		= BURNED
		DamageMaxHeight = 20 ;;,;; 50 ;We won't hurt something far above us.  Birds fly at around 100
		DamageSpeed		= 400
	End

	DamageNugget
		Damage			= #MULTIPLY( FIREDRAKE_FLAME_DAMAGE 0.111 )
		Radius			= 120
		DelayTime		= 1800
		DamageType		= MAGIC
		DamageArc		= 90
		DamageMaxHeight = 20 ;;,;; 50 ;We won't hurt something far above us.  Birds fly at around 100
		DamageSpeed		= 400
	End