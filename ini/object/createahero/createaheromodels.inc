DefaultModelConditionState
	Model				 = CHHW_CG_U_SKN
	Skeleton			 = CHHW_CG_U_SKL
	ModelAnimationPrefix = CHHW_CG
	PortraitImageName	 = CPGamling
	ButtonImageName		 = CPGamlingAlpha
End

		ModelConditionState	= USER_45
			Model	=	uunecrocloud
		End

//--------------------------------------------------------------------------------------------------------------------------------------
// Dunedain Upgrade_CreateAHero_ClassArcher / Upgrade_CreateAHero_SubClass_0
ModelConditionState	= CREATE_A_HERO_37 INVISIBLE_STEALTH WEAPONSET_TOGGLE_1
	Model				 = chdundan01_bow
	Skeleton			 = GUFaramir_SKL
	;ModelAnimationPrefix = CHAR_AR
	PortraitImageName	 = uprangercah 
	ButtonImageName		 = HICAHRanger
	ParticleSysBone		= NONE Predator FollowBone:Yes Persist:SPAWN PersistID:100
	ParticleSysBone		= NONE Predator02 FollowBone:Yes Persist:SPAWN PersistID:101
	WeaponLaunchBone	= PRIMARY ARROW
End
ModelConditionState	= CREATE_A_HERO_37 WEAPONSET_TOGGLE_1
	Model				 = chdundan01_bow ;chdundan01_bow
	Skeleton			 = GUFaramir_SKL
	;ModelAnimationPrefix = CHAR_AR
	PortraitImageName	 = uprangercah 
	ButtonImageName		 = HICAHRanger
	ParticleSysBone		= NONE Predator FollowBone:Yes Persist:HOLD PersistID:100
	ParticleSysBone		= NONE Predator02 FollowBone:Yes Persist:HOLD PersistID:101
	WeaponLaunchBone	= PRIMARY ARROW
End

ModelConditionState	= CREATE_A_HERO_37 INVISIBLE_STEALTH
	Model				 = chdundan01_swd 
	Skeleton			 = GUFaramir_SKL
	;ModelAnimationPrefix = CHAR_AR
	PortraitImageName	 = uprangercah ;CPMaleElfArcher
	ButtonImageName		 = HICAHRanger
	ParticleSysBone		= NONE Predator FollowBone:Yes Persist:SPAWN PersistID:100
	ParticleSysBone		= NONE Predator02 FollowBone:Yes Persist:SPAWN PersistID:101
	WeaponLaunchBone	= PRIMARY ARROW
End
ModelConditionState	= CREATE_A_HERO_37
	Model				 = chdundan01_swd
	Skeleton			 = GUFaramir_SKL
	;ModelAnimationPrefix = CHAR_AR
	PortraitImageName	 = uprangercah ;CPMaleElfArcher
	ButtonImageName		 = HICAHRanger
	ParticleSysBone		= NONE Predator FollowBone:Yes Persist:HOLD PersistID:100
	ParticleSysBone		= NONE Predator02 FollowBone:Yes Persist:HOLD PersistID:101
	WeaponLaunchBone	= PRIMARY ARROW
End
//--------------------------------------------------------------------------------------------------------------------------------------
// Dunedain Upgrade_CreateAHeroMapMode Upgrade_CreateAHero_ClassArcher / Upgrade_CreateAHero_SubClass_0
ModelConditionState	= CREATE_A_HERO_38 INVISIBLE_STEALTH
	Model				 = chdundan01_skn
	Skeleton			 = GUFaramir_SKL
	;ModelAnimationPrefix = CHAR_AR
	PortraitImageName	 = uprangercah ;CPMaleElfArcher
	ButtonImageName		 = HICAHRanger
	ParticleSysBone		= NONE Predator FollowBone:Yes Persist:SPAWN PersistID:100
	ParticleSysBone		= NONE Predator02 FollowBone:Yes Persist:SPAWN PersistID:101
	WeaponLaunchBone	= PRIMARY ARROW
End
ModelConditionState	= CREATE_A_HERO_38
	Model				 = chdundan01_skn
	Skeleton			 = GUFaramir_SKL
	;ModelAnimationPrefix = CHAR_AR
	PortraitImageName	 = uprangercah ;CPMaleElfArcher
	ButtonImageName		 = HICAHRanger
	ParticleSysBone		= NONE Predator FollowBone:Yes Persist:HOLD PersistID:100
	ParticleSysBone		= NONE Predator02 FollowBone:Yes Persist:HOLD PersistID:101
	WeaponLaunchBone	= PRIMARY ARROW
End
//--------------------------------------------------------------------------------------------------------------------------------------
;---------------------------------Wraith, morgul state
// Upgrade_Upgrade_CreateAHero_ClassWraith/Upgrade_CreateAHero_SubClass_0
ModelConditionState	= CREATE_A_HERO_39 USER_33
	Model				 = chdwell_skn
	Skeleton			 = chdw_dw_u_skl
	ParticleSysBone 	= NONE MorgulWraithGlow FollowBone:Yes
	ParticleSysBone 	= NONE MorgulWraithShadow FollowBone:Yes
	ParticleSysBone = B_HEAD MorgulWraithEye_L FollowBone:Yes

	ModelAnimationPrefix = CHDW_DW
	PortraitImageName	 = UPWightLords
	ButtonImageName		 = UIWightLords
	;WeaponLaunchBone	 = PRIMARY WizStaff02_FXBO
End
;---------------------------------Wraith, fire state
// Upgrade_Upgrade_CreateAHero_ClassWraith/Upgrade_CreateAHero_SubClass_0
ModelConditionState	= CREATE_A_HERO_39 USER_27
	Model				 = chdwell_skn
	Skeleton			 = chdw_dw_u_skl
	ParticleSysBone 	= NONE FireWraithGlow FollowBone:Yes
	ParticleSysBone = BAT_UARML FireWraithSmoke FollowBone:Yes
	ParticleSysBone = BAT_UARMR FireWraithSmoke FollowBone:Yes
	ParticleSysBone = B_PELVIS FireWraithSmoke FollowBone:Yes
	ParticleSysBone = B_PELVIS FireWraithBodyEmbers FollowBone:Yes
	ParticleSysBone = BAT_UARML FireWraithBodyEmbers FollowBone:Yes
	ParticleSysBone = BAT_UARMR FireWraithBodyEmbers FollowBone:Yes
	ParticleSysBone = BAT_UARMR FireWraithHeadEmbers_R FollowBone:Yes
	ParticleSysBone = BAT_UARML FireWraithHeadEmbers_L FollowBone:Yes
	ParticleSysBone = B_HEAD FireWraithEye_R FollowBone:Yes
	ParticleSysBone = B_HEAD FireWraithEye_L FollowBone:Yes
	ParticleSysBone = B_HEAD FireWraithHeadEmbers FollowBone:Yes
	ParticleSysBone = B_HEAD FireWraithHeadSmoke FollowBone:Yes

	ModelAnimationPrefix = CHDW_DW
	PortraitImageName	 = UPWightLords
	ButtonImageName		 = UIWightLords
	;WeaponLaunchBone	 = PRIMARY WizStaff02_FXBO
End
;---------------------------------Wraith, frost state
ModelConditionState	= USER_29 CREATE_A_HERO_39
	Model				 = chdwell_skn
	Skeleton			 = chdw_dw_u_skl
	ModelAnimationPrefix = CHDW_DW
	ParticleSysBone = NONE FrostWraithGlow FollowBone:no
	ParticleSysBone = NONE FrostWraithSnow FollowBone:no
	ParticleSysBone = B_AXE FrostWraithSwordFire FollowBone:Yes
	ParticleSysBone = BAT_UARML FrostWraithSmoke FollowBone:Yes
	ParticleSysBone = BAT_UARMR FrostWraithSmoke FollowBone:Yes
	ParticleSysBone = BAT_THIGHL FrostWraithSmoke FollowBone:Yes
	ParticleSysBone = BAT_THIGHR FrostWraithSmoke FollowBone:Yes
	ParticleSysBone = B_PELVIS FrostWraithSmoke FollowBone:Yes
	PortraitImageName	 = UPWightLords
	ButtonImageName		 = UIWightLords
	;WeaponLaunchBone	 = PRIMARY WizStaff02_FXBO
End
;---------------------------------Wraith in creation screen, morgul state
// Upgrade_Upgrade_CreateAHero_ClassWraith/Upgrade_CreateAHero_SubClass_0
ModelConditionState	= CREATE_A_HERO_40 USER_33
	Model				 = chdwell_skn
	Skeleton			 = chdw_dw_u_skl
	ParticleSysBone 	= NONE MorgulWraithGlow FollowBone:Yes
	ParticleSysBone 	= NONE MorgulWraithShadow FollowBone:Yes
	ParticleSysBone = B_HEAD MorgulWraithEye_L FollowBone:Yes

	ModelAnimationPrefix = CHDW_DW
	PortraitImageName	 = UPWightLords
	ButtonImageName		 = UIWightLords
	;WeaponLaunchBone	 = PRIMARY WizStaff02_FXBO
End
;---------------------------------Wraith in creation screen, sand state
ModelConditionState	= USER_32 CREATE_A_HERO_39
	Model				 = chdwell_skn
	Skeleton			 = chdw_dw_u_skl
	ModelAnimationPrefix = CHDW_DW
	;ParticleSysBone = NONE CreationScreen_SandWraithGlow1 FollowBone:no
	;ParticleSysBone = NONE CreationScreen_SandWraithGlow2 FollowBone:no
	;ParticleSysBone = NONE CreationScreen_SandWraithSandSpawner FollowBone:no
	ParticleSysBone = BAT_UARML SandWraithSmoke FollowBone:Yes
	ParticleSysBone = BAT_UARMR SandWraithSmoke FollowBone:Yes
	ParticleSysBone = BAT_UARML SandWraithSand FollowBone:Yes
	ParticleSysBone = BAT_UARMR SandWraithSand FollowBone:Yes
	ParticleSysBone = B_PELVIS SandWraithSmoke FollowBone:Yes
	ParticleSysBone = B_PELVIS SandWraithSand FollowBone:Yes
	PortraitImageName	 = UPWightLords
	ButtonImageName		 = UIWightLords
	;WeaponLaunchBone	 = PRIMARY WizStaff02_FXBO
End
;---------------------------------Wraith, normal state
// Upgrade_Upgrade_CreateAHero_ClassWraith/Upgrade_CreateAHero_SubClass_0
ModelConditionState	= CREATE_A_HERO_39
	Model				 = chdwell_skn
	Skeleton			 = chdw_dw_u_skl
	ParticleSysBone = BAT_UARML WraithSmoke FollowBone:Yes
	ParticleSysBone = BAT_UARMR WraithSmoke FollowBone:Yes
	ParticleSysBone = B_PELVIS WraithSmoke FollowBone:Yes
	ModelAnimationPrefix = CHDW_DW
	PortraitImageName	 = UPWightLords
	ButtonImageName		 = UIWightLords
	;WeaponLaunchBone	 = PRIMARY WizStaff02_FXBO
End
;---------------------------------Wraith in creation screen, fire state
//Upgrade_CreateAHeroMapMode Upgrade_Upgrade_CreateAHero_ClassWraith/Upgrade_CreateAHero_SubClass_0
ModelConditionState	= CREATE_A_HERO_40 USER_27
	Model				 = chdwell_skn
	Skeleton			 = chdw_dw_u_skl
	ModelAnimationPrefix = CHDW_DW
	ParticleSysBone 	= NONE CreationScreen_FireWraithGlow FollowBone:no
	ParticleSysBone = BAT_UARML CreationScreen_FireWraithSmoke FollowBone:Yes
	ParticleSysBone = BAT_UARMR CreationScreen_FireWraithSmoke FollowBone:Yes
	ParticleSysBone = B_PELVIS CreationScreen_FireWraithSmoke FollowBone:Yes
	ParticleSysBone = B_PELVIS CreationScreen_FireWraithBodyEmbers FollowBone:Yes
	ParticleSysBone = BAT_UARML CreationScreen_FireWraithBodyEmbers FollowBone:Yes
	ParticleSysBone = BAT_UARMR CreationScreen_FireWraithBodyEmbers FollowBone:Yes
	ParticleSysBone = BAT_UARMR CreationScreen_FireWraithHeadEmbers_R FollowBone:Yes
	ParticleSysBone = BAT_UARML CreationScreen_FireWraithHeadEmbers_L FollowBone:Yes
	ParticleSysBone = B_HEAD CreationScreen_FireWraithEye_R FollowBone:Yes
	ParticleSysBone = B_HEAD CreationScreen_FireWraithEye_L FollowBone:Yes
	ParticleSysBone = B_HEAD CreationScreen_FireWraithHeadEmbers FollowBone:Yes
	ParticleSysBone = B_HEAD CreationScreen_FireWraithHeadSmoke FollowBone:Yes
	
	PortraitImageName	 = UPWightLords
	ButtonImageName		 = UIWightLords
	;WeaponLaunchBone	 = PRIMARY WizStaff02_FXBO
End
;---------------------------------Wraith in creation screen, frost state
ModelConditionState	= USER_29 CREATE_A_HERO_40
	Model				 = chdwell_skn
	Skeleton			 = chdw_dw_u_skl
	ModelAnimationPrefix = CHDW_DW
	ParticleSysBone = NONE CreationScreen_FrostWraithGlow FollowBone:no
	ParticleSysBone = NONE CreationScreen_FrostWraithSnow FollowBone:no
	;ParticleSysBone = NONE CreationScreen_FrostWraithCrystal FollowBone:no
	ParticleSysBone = B_AXE CreationScreen_FrostWraithSwordFire FollowBone:Yes
	ParticleSysBone = BAT_UARML CreationScreen_FrostWraithSmoke FollowBone:Yes
	ParticleSysBone = BAT_UARMR CreationScreen_FrostWraithSmoke FollowBone:Yes
	ParticleSysBone = BAT_THIGHL CreationScreen_FrostWraithSmoke FollowBone:Yes
	ParticleSysBone = BAT_THIGHR CreationScreen_FrostWraithSmoke FollowBone:Yes
	ParticleSysBone = B_PELVIS CreationScreen_FrostWraithSmoke FollowBone:Yes
	PortraitImageName	 = UPWightLords
	ButtonImageName		 = UIWightLords
	;WeaponLaunchBone	 = PRIMARY WizStaff02_FXBO
End
;---------------------------------Wraith in creation screen, sand state
ModelConditionState	= USER_32 CREATE_A_HERO_40
	Model				 = chdwell_skn
	Skeleton			 = chdw_dw_u_skl
	ModelAnimationPrefix = CHDW_DW
	;ParticleSysBone = NONE CreationScreen_SandWraithGlow1 FollowBone:no
	;ParticleSysBone = NONE CreationScreen_SandWraithGlow2 FollowBone:no
	;ParticleSysBone = NONE CreationScreen_SandWraithSandSpawner FollowBone:no
	ParticleSysBone = BAT_UARML CreationScreen_SandWraithSmoke FollowBone:Yes
	ParticleSysBone = BAT_UARMR CreationScreen_SandWraithSmoke FollowBone:Yes
	ParticleSysBone = BAT_UARML CreationScreen_SandWraithSand FollowBone:Yes
	ParticleSysBone = BAT_UARMR CreationScreen_SandWraithSand FollowBone:Yes
	ParticleSysBone = B_PELVIS CreationScreen_SandWraithSmoke FollowBone:Yes
	ParticleSysBone = B_PELVIS CreationScreen_SandWraithSand FollowBone:Yes
	PortraitImageName	 = UPWightLords
	ButtonImageName		 = UIWightLords
	;WeaponLaunchBone	 = PRIMARY WizStaff02_FXBO
End
;---------------------------------Wraith in creation screen, normal state
ModelConditionState	= CREATE_A_HERO_40
	Model				 = chdwell_skn
	Skeleton			 = chdw_dw_u_skl
	ModelAnimationPrefix = CHDW_DW
	ParticleSysBone = BAT_UARML CreationScreen_WraithSmoke FollowBone:Yes
	ParticleSysBone = BAT_UARMR CreationScreen_WraithSmoke FollowBone:Yes
	ParticleSysBone = B_PELVIS CreationScreen_WraithSmoke FollowBone:Yes
	PortraitImageName	 = UPWightLords
	ButtonImageName		 = UIWightLords
	;WeaponLaunchBone	 = PRIMARY WizStaff02_FXBO
End

//--------------------------------------------------------------------------------------------------------------------------------------
// CAPTAIN OF GONDOR -	Upgrade_CreateAHero_ClassHeroOfTheWest/Upgrade_CreateAHero_SubClass_2
ModelConditionState	= MOUNTED CREATE_A_HERO_00
	Model				 = CHHW_MW_M_SKN
	Skeleton			 = CHHW_MW_M_SKL
	ModelAnimationPrefix = CHHW_MW
	PortraitImageName	 = CPCaptainofGondor
	ButtonImageName		 = HICAHCaptainGondor
	WeaponLaunchBone	 = PRIMARY ARROW
End
// CAPTAIN OF GONDOR -	Upgrade_CreateAHero_ClassHeroOfTheWest/Upgrade_CreateAHero_SubClass_2 (MOUNTED)
ModelConditionState	= CREATE_A_HERO_00
	Model				 = CHHW_CG_U_SKN
	Skeleton			 = CHHW_CG_U_SKL
	ModelAnimationPrefix = CHHW_CG
	PortraitImageName	 = CPCaptainofGondor
	ButtonImageName		 = HICAHCaptainGondor
	WeaponLaunchBone	 = PRIMARY SPEAR
End
// CAPTAIN OF GONDOR -	Upgrade_CreateAHero_ClassHeroOfTheWest/Upgrade_CreateAHero_SubClass_2 (Hero Creation Screen)
ModelConditionState	= CREATE_A_HERO_01
	Model				 = CHHW_CG_C_SKN
	Skeleton			 = CHHW_CG_C_SKL
	ModelAnimationPrefix = CHHW_CG
	PortraitImageName	 = CPCaptainofGondor
	ButtonImageName		 = HICAHCaptainGondor
End

//--------------------------------------------------------------------------------------------------------------------------------------
// Shield Maiden Upgrade_CreateAHero_ClassHeroOfTheWest_SubClass_1 MOUNTED
ModelConditionState	= MOUNTED CREATE_A_HERO_02
	Model				 = CHHW_SM_M_SKN
	Skeleton			 = CHHW_SM_M_SKL
	ModelAnimationPrefix = CHHW_SM
	PortraitImageName	 = CPShieldMaiden
	ButtonImageName		 = HICAHShieldMaiden
	WeaponLaunchBone	 = PRIMARY SPEAR
End
// Shield Maiden Upgrade_CreateAHero_ClassHeroOfTheWest_SubClass_1
ModelConditionState	= CREATE_A_HERO_02
	Model				 = CHHW_SM_U_SKN
	Skeleton			 = CHHW_SM_U_SKL
	ModelAnimationPrefix = CHHW_SM
	PortraitImageName	 = CPShieldMaiden
	ButtonImageName		 = HICAHShieldMaiden
	WeaponLaunchBone	 = PRIMARY SPEAR
End
// Shield Maiden Upgrade_CreateAHero_ClassHeroOfTheWest_SubClass_1 + Upgrade_CreateAHeroMapMode
ModelConditionState	= CREATE_A_HERO_03
	Model				 = CHHW_SM_C_SKN
	Skeleton			 = CHHW_SM_C_SKL
	ModelAnimationPrefix = CHHW_SM
	PortraitImageName	 = CPShieldMaiden
	ButtonImageName		 = HICAHShieldMaiden
End

//--------------------------------------------------------------------------------------------------------------------------------------
// WIZARD WANDERER Upgrade_CreateAHero_ClassIstariWizard/Upgrade_CreateAHero_SubClass_0
ModelConditionState	= CREATE_A_HERO_04
	Model				 = CHWZ_YW_U_SKN
	Skeleton			 = CHWZ_YW_U_SKL
	ModelAnimationPrefix = CHWZ_YW
	PortraitImageName	 = CPWanderer
	ButtonImageName		 = HICAHWanderer
	WeaponLaunchBone	 = PRIMARY WizStaff02_FXBO
End
// WIZARD WANDERER Upgrade_CreateAHeroMapMode Upgrade_CreateAHero_ClassIstariWizard/Upgrade_CreateAHero_SubClass_0
ModelConditionState	= CREATE_A_HERO_05
	Model				 = CHWZ_YW_C_SKN
	Skeleton			 = CHWZ_YW_C_SKL
	ModelAnimationPrefix = CHWZ_YW
	PortraitImageName	 = CPWanderer
	ButtonImageName		 = HICAHWanderer
	WeaponLaunchBone	 = PRIMARY WizStaff02_FXBO
End

//--------------------------------------------------------------------------------------------------------------------------------------
// WIZARD AVATAR Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_2
ModelConditionState	= CREATE_A_HERO_06
	Model				 = CHWZ_AV_U_SKN
	Skeleton			 = CHWZ_YW_U_SKL
	ModelAnimationPrefix = CHWZ_YW
	PortraitImageName	 = CPAvatar
	ButtonImageName		 = HICAHAvatar
	WeaponLaunchBone	 = PRIMARY WizStaff02_FXBO
End
// WIZARD AVATAR Upgrade_CreateAHeroMapMode Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_2 (Creation Screen)
ModelConditionState	= CREATE_A_HERO_07
	Model				 = CHWZ_AV_C_SKN
	Skeleton			 = CHWZ_YW_C_SKL
	ModelAnimationPrefix = CHWZ_YW
	PortraitImageName	 = CPAvatar
	ButtonImageName		 = HICAHAvatar
	WeaponLaunchBone	 = PRIMARY WizStaff02_FXBO
End

//--------------------------------------------------------------------------------------------------------------------------------------
// WIZARD HERMIT Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_3
ModelConditionState	= CREATE_A_HERO_08
	Model				 = CHWZ_HR_U_SKN
	Skeleton			 = CHWZ_YW_U_SKL
	ModelAnimationPrefix = CHWZ_YW
	PortraitImageName	 = CPHermit
	ButtonImageName		 = HICAHHermit
	WeaponLaunchBone	 = PRIMARY WizStaff02_FXBO
End
// WIZARD HERMIT Upgrade_CreateAHeroMapMode Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_SubClass_3
ModelConditionState	= CREATE_A_HERO_09
	Model				 = CHWZ_HR_C_SKN
	Skeleton			 = CHWZ_YW_C_SKL
	ModelAnimationPrefix = CHWZ_YW
	PortraitImageName	 = CPHermit
	ButtonImageName		 = HICAHHermit
	WeaponLaunchBone	 = PRIMARY WizStaff02_FXBO
End

//--------------------------------------------------------------------------------------------------------------------------------------
// TROLL Upgrade_CreateAHero_ClassServantsOfSauron/Upgrade_CreateAHero_SubClass_0	
ModelConditionState	= CREATE_A_HERO_10
	Model				 = CHSS_TL_U_SKN
	Skeleton			 = CHSS_TL_U_SKL
	ModelAnimationPrefix = CHSS_TL
	PortraitImageName	 = CPTroll
	ButtonImageName		 = HICAHTroll
	WeaponLaunchBone	= PRIMARY Bat_HandL
End
// TROLL Upgrade_CreateAHeroMapMode Upgrade_CreateAHero_ClassServantsOfSauron/Upgrade_CreateAHero_SubClass_0	
ModelConditionState	= CREATE_A_HERO_11
	Model				 = CHSS_TL_C_SKN
	Skeleton			 = CHSS_TL_C_SKL
	ModelAnimationPrefix = CHSS_TL
	PortraitImageName	 = CPTroll
	ButtonImageName		 = HICAHTroll
	WeaponLaunchBone	= PRIMARY Bat_HandL
End

//--------------------------------------------------------------------------------------------------------------------------------------
// ELF ARCHER Upgrade_CreateAHero_ClassArcher / Upgrade_CreateAHero_SubClass_0
ModelConditionState	= CREATE_A_HERO_12 INVISIBLE_STEALTH
	Model				 = CHAR_EL_U_SKN
	Skeleton			 = CHAR_AR_U_SKL
	ModelAnimationPrefix = CHAR_AR
	PortraitImageName	 = CPMaleElfArcher
	ButtonImageName		 = HICAHMaleElfArcher
	ParticleSysBone		= NONE Predator FollowBone:Yes Persist:SPAWN PersistID:100
	ParticleSysBone		= NONE Predator02 FollowBone:Yes Persist:SPAWN PersistID:101
	WeaponLaunchBone	= PRIMARY ARROW
End
ModelConditionState	= CREATE_A_HERO_12
	Model				 = CHAR_EL_U_SKN
	Skeleton			 = CHAR_AR_U_SKL
	ModelAnimationPrefix = CHAR_AR
	PortraitImageName	 = CPMaleElfArcher
	ButtonImageName		 = HICAHMaleElfArcher
	ParticleSysBone		= NONE Predator FollowBone:Yes Persist:HOLD PersistID:100
	ParticleSysBone		= NONE Predator02 FollowBone:Yes Persist:HOLD PersistID:101
	WeaponLaunchBone	= PRIMARY ARROW
End
// ELF ARCHER Upgrade_CreateAHeroMapMode Upgrade_CreateAHero_ClassArcher / Upgrade_CreateAHero_SubClass_0
ModelConditionState	= CREATE_A_HERO_13 INVISIBLE_STEALTH
	Model				 = CHAR_EL_C_SKN
	Skeleton			 = CHAR_AR_C_SKL
	ModelAnimationPrefix = CHAR_AR
	PortraitImageName	 = CPMaleElfArcher
	ButtonImageName		 = HICAHMaleElfArcher
	ParticleSysBone		= NONE Predator FollowBone:Yes Persist:SPAWN PersistID:100
	ParticleSysBone		= NONE Predator02 FollowBone:Yes Persist:SPAWN PersistID:101
	WeaponLaunchBone	= PRIMARY ARROW
End
ModelConditionState	= CREATE_A_HERO_13
	Model				 = CHAR_EL_C_SKN
	Skeleton			 = CHAR_AR_C_SKL
	ModelAnimationPrefix = CHAR_AR
	PortraitImageName	 = CPMaleElfArcher
	ButtonImageName		 = HICAHMaleElfArcher
	ParticleSysBone		= NONE Predator FollowBone:Yes Persist:HOLD PersistID:100
	ParticleSysBone		= NONE Predator02 FollowBone:Yes Persist:HOLD PersistID:101
	WeaponLaunchBone	= PRIMARY ARROW
End

//--------------------------------------------------------------------------------------------------------------------------------------
// FEMALE ELVEN ARCHER Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_1
ModelConditionState	= CREATE_A_HERO_14 INVISIBLE_STEALTH
	Model				 = CHAR_FE_U_SKN
	Skeleton			 = CHAR_FE_U_SKL
	ModelAnimationPrefix = CHAR_FE
	PortraitImageName	 = CPFemaleElfArcher
	ButtonImageName		 = HICAHFemaleElvenArcher
	WeaponLaunchBone	= PRIMARY B_Hand_L
	ParticleSysBone		= NONE Predator FollowBone:Yes Persist:SPAWN PersistID:100
	ParticleSysBone		= NONE Predator02 FollowBone:Yes Persist:SPAWN PersistID:101
	WeaponLaunchBone	= PRIMARY ARROW
End
ModelConditionState	= CREATE_A_HERO_14
	Model				 = CHAR_FE_U_SKN
	Skeleton			 = CHAR_FE_U_SKL
	ModelAnimationPrefix = CHAR_FE
	PortraitImageName	 = CPFemaleElfArcher
	ButtonImageName		 = HICAHFemaleElvenArcher
	WeaponLaunchBone	= PRIMARY B_Hand_L
	ParticleSysBone		= NONE Predator FollowBone:Yes Persist:HOLD PersistID:100
	ParticleSysBone		= NONE Predator02 FollowBone:Yes Persist:HOLD PersistID:101
	WeaponLaunchBone	= PRIMARY ARROW
End
// FEMALE ELVEN ARCHER Upgrade_CreateAHeroMapMode Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_SubClass_1
ModelConditionState	= CREATE_A_HERO_15 INVISIBLE_STEALTH
	Model				 = CHAR_FE_C_SKN
	Skeleton			 = CHAR_FE_C_SKL
	ModelAnimationPrefix = CHAR_FE
	PortraitImageName	 = CPFemaleElfArcher
	ButtonImageName		 = HICAHFemaleElvenArcher
	WeaponLaunchBone	= PRIMARY B_Hand_L
	ParticleSysBone		= NONE Predator FollowBone:Yes Persist:SPAWN PersistID:100
	ParticleSysBone		= NONE Predator02 FollowBone:Yes Persist:SPAWN PersistID:101
	WeaponLaunchBone	= PRIMARY ARROW
End
ModelConditionState	= CREATE_A_HERO_15
	Model				 = CHAR_FE_C_SKN
	Skeleton			 = CHAR_FE_C_SKL
	ModelAnimationPrefix = CHAR_FE
	PortraitImageName	 = CPFemaleElfArcher
	ButtonImageName		 = HICAHFemaleElvenArcher
	WeaponLaunchBone	= PRIMARY B_Hand_L
	ParticleSysBone		= NONE Predator FollowBone:Yes Persist:HOLD PersistID:100
	ParticleSysBone		= NONE Predator02 FollowBone:Yes Persist:HOLD PersistID:101
	WeaponLaunchBone	= PRIMARY ARROW
End

//--------------------------------------------------------------------------------------------------------------------------------------
// CORRUPTED MAN #1 Upgrade_CreateAHero_ClassCorruptedMan_SubClass_0
ModelConditionState	= CREATE_A_HERO_16 INVISIBLE_STEALTH
	Model				 = CHCM_CM_U_SKN
	Skeleton			 = CHCM_CM_U_SKL
	ModelAnimationPrefix = CHCM_CM
	PortraitImageName	 = CPEasterling
	ButtonImageName		 = HICAHEasterling
	ParticleSysBone		= NONE Predator FollowBone:Yes Persist:SPAWN PersistID:100
	ParticleSysBone		= NONE Predator02 FollowBone:Yes Persist:SPAWN PersistID:101
	WeaponLaunchBone	= PRIMARY ARROW
End
ModelConditionState	= CREATE_A_HERO_16
	Model				 = CHCM_CM_U_SKN
	Skeleton			 = CHCM_CM_U_SKL
	ModelAnimationPrefix = CHCM_CM
	PortraitImageName	 = CPEasterling
	ButtonImageName		 = HICAHEasterling
	ParticleSysBone		= NONE Predator FollowBone:Yes Persist:HOLD PersistID:100
	ParticleSysBone		= NONE Predator02 FollowBone:Yes Persist:HOLD PersistID:101
	WeaponLaunchBone	= PRIMARY ARROW
End
// CORRUPTED MAN #1 Upgrade_CreateAHeroMapMode Upgrade_CreateAHero_ClassCorruptedMan_SubClass_0
ModelConditionState	= CREATE_A_HERO_17 INVISIBLE_STEALTH
	Model				 = CHCM_CM_C_SKN
	Skeleton			 = CHCM_CM_C_SKL
	ModelAnimationPrefix = CHCM_CM
	PortraitImageName	 = CPEasterling
	ButtonImageName		 = HICAHEasterling
	ParticleSysBone		= NONE Predator FollowBone:Yes Persist:SPAWN PersistID:100
	ParticleSysBone		= NONE Predator02 FollowBone:Yes Persist:SPAWN PersistID:101
	WeaponLaunchBone	= PRIMARY ARROW
End
ModelConditionState	= CREATE_A_HERO_17
	Model				 = CHCM_CM_C_SKN
	Skeleton			 = CHCM_CM_C_SKL
	ModelAnimationPrefix = CHCM_CM
	PortraitImageName	 = CPEasterling
	ButtonImageName		 = HICAHEasterling
	ParticleSysBone		= NONE Predator FollowBone:Yes Persist:HOLD PersistID:100
	ParticleSysBone		= NONE Predator02 FollowBone:Yes Persist:HOLD PersistID:101
	WeaponLaunchBone	= PRIMARY ARROW
End

//--------------------------------------------------------------------------------------------------------------------------------------
// CORRUPTED MAN #2 Upgrade_CreateAHero_ClassCorruptedMan_SubClass_1
ModelConditionState	= CREATE_A_HERO_18 INVISIBLE_STEALTH
	Model				 = CHCM_FN_U_SKN
	Skeleton			 = CHCM_CM_U_SKL
	ModelAnimationPrefix = CHCM_CM
	PortraitImageName	 = CPHaradrim
	ButtonImageName		 = HICAHHaradrim
	ParticleSysBone		= NONE Predator FollowBone:Yes Persist:SPAWN PersistID:100
	ParticleSysBone		= NONE Predator02 FollowBone:Yes Persist:SPAWN PersistID:101
	WeaponLaunchBone	= PRIMARY ARROW
End
ModelConditionState	= CREATE_A_HERO_18
	Model				 = CHCM_FN_U_SKN
	Skeleton			 = CHCM_CM_U_SKL
	ModelAnimationPrefix = CHCM_CM
	PortraitImageName	 = CPHaradrim
	ButtonImageName		 = HICAHHaradrim
	ParticleSysBone		= NONE Predator FollowBone:Yes Persist:HOLD PersistID:100
	ParticleSysBone		= NONE Predator02 FollowBone:Yes Persist:HOLD PersistID:101
	WeaponLaunchBone	= PRIMARY ARROW
End
// CORRUPTED MAN #2 Upgrade_CreateAHeroMapMode Upgrade_CreateAHero_ClassCorruptedMan_SubClass_1
ModelConditionState	= CREATE_A_HERO_19 INVISIBLE_STEALTH
	Model				 = CHCM_FN_C_SKN
	Skeleton			 = CHCM_CM_C_SKL
	ModelAnimationPrefix = CHCM_CM
	PortraitImageName	 = CPHaradrim
	ButtonImageName		 = HICAHHaradrim
	ParticleSysBone		= NONE Predator FollowBone:Yes Persist:SPAWN PersistID:100
	ParticleSysBone		= NONE Predator02 FollowBone:Yes Persist:SPAWN PersistID:101
	WeaponLaunchBone	= PRIMARY ARROW
End
ModelConditionState	= CREATE_A_HERO_19
	Model				 = CHCM_FN_C_SKN
	Skeleton			 = CHCM_CM_C_SKL
	ModelAnimationPrefix = CHCM_CM
	PortraitImageName	 = CPHaradrim
	ButtonImageName		 = HICAHHaradrim
	ParticleSysBone		= NONE Predator FollowBone:Yes Persist:HOLD PersistID:100
	ParticleSysBone		= NONE Predator02 FollowBone:Yes Persist:HOLD PersistID:101
	WeaponLaunchBone	= PRIMARY ARROW
End


//--------------------------------------------------------------------------------------------------------------------------------------
// DWARF Taskmaster		Upgrade_CreateAHero_ClassDwarf_SubClass_0
ModelConditionState	= CREATE_A_HERO_20
	Model				 = chdw_dw_U_skn ;CHDW_TM_U_SKN
	Skeleton			 = CHDW_DW_U_SKL
	ModelAnimationPrefix = CHDW_DW
	PortraitImageName	 = CPDwarfTaskmaster
	ButtonImageName		 = HICAHDwarfTaskmaster
	WeaponLaunchBone	= PRIMARY Axe02				; Needed for the WeaponFireSpecialAbility version as primary slot is used.
	WeaponLaunchBone	= TERTIARY Axe02
End
// DWARF Taskmaster Upgrade_CreateAHeroMapMode Upgrade_CreateAHero_ClassDwarf_SubClass_0
ModelConditionState	= CREATE_A_HERO_21
	Model				 = chdw_dw_c_skn ;CHDW_TM_C_SKN
	Skeleton			 = CHDW_DW_C_SKL
	ModelAnimationPrefix = CHDW_DW
	PortraitImageName	 = CPDwarfTaskmaster
	ButtonImageName		 = HICAHDwarfTaskmaster
	WeaponLaunchBone	= PRIMARY Axe02				; Needed for the WeaponFireSpecialAbility version as primary slot is used.
	WeaponLaunchBone	= TERTIARY Axe02
End
//--------------------------------------------------------------------------------------------------------------------------------------
// DWARF Sage Upgrade_CreateAHero_ClassDwarf_SubClass_1
ModelConditionState	= CREATE_A_HERO_22
	Model				 = chdw_sg_u_skn ;CHDW_SG_U_SKN // Change
	Skeleton			 = CHDW_DW_U_SKL
	ModelAnimationPrefix = CHDW_DW
	PortraitImageName	 = CPDwarfSage
	ButtonImageName		 = HICAHDwarfSage
	WeaponLaunchBone	= PRIMARY Axe02				; Needed for the WeaponFireSpecialAbility version as primary slot is used.
	WeaponLaunchBone	= TERTIARY Axe02
End
// DWARF Sage Upgrade_CreateAHeroMapMode Upgrade_CreateAHero_ClassDwarf_SubClass_1
ModelConditionState	= CREATE_A_HERO_23
	Model				 = chdw_sg_c_skn ;CHDW_SG_C_SKN // Change
	Skeleton			 = CHDW_DW_C_SKL
	ModelAnimationPrefix = CHDW_DW
	PortraitImageName	 = CPDwarfSage
	ButtonImageName		 = HICAHDwarfSage
	WeaponLaunchBone	= PRIMARY Axe02				; Needed for the WeaponFireSpecialAbility version as primary slot is used.
	WeaponLaunchBone	= TERTIARY Axe02
End

//--------------------------------------------------------------------------------------------------------------------------------------
// ORC RAIDER Upgrade_CreateAHero_ClassServantsOfSauron_SubClass_2
ModelConditionState	= CREATE_A_HERO_24
	Model				 = CHSS_OR_U_SKN
	Skeleton			 = CHSS_GB_U_SKL
	ModelAnimationPrefix = CHSS_GB
	PortraitImageName	 = CPOrcRaider
	ButtonImageName		 = HICAHOrcRaider
	WeaponLaunchBone	= PRIMARY B_HAND_R
End
// ORC RAIDER Upgrade_CreateAHeroMapMode Upgrade_CreateAHero_ClassServantsOfSauron_SubClass_2
ModelConditionState	= CREATE_A_HERO_25
	Model				 = CHSS_OR_C_SKN
	Skeleton			 = CHSS_GB_C_SKL
	ModelAnimationPrefix = CHSS_GB
	PortraitImageName	 = CPOrcRaider
	ButtonImageName		 = HICAHOrcRaider
	WeaponLaunchBone	= PRIMARY B_HAND_R
End

//--------------------------------------------------------------------------------------------------------------------------------------
// URUK Upgrade_CreateAHero_ClassServantsOfSauron_SubClass_3
ModelConditionState	= CREATE_A_HERO_26
	Model				 = CHSS_UK_U_SKN
	Skeleton			 = CHSS_UK_U_SKL
	ModelAnimationPrefix = CHSS_UK
	PortraitImageName	 = CPUruk
	ButtonImageName		 = HICAHUrukhai
	WeaponLaunchBone	= PRIMARY B_HandR
End
// URUK Upgrade_CreateAHeroMapMode Upgrade_CreateAHero_ClassServantsOfSauron_SubClass_3
ModelConditionState	= CREATE_A_HERO_27
	Model				 = CHSS_UK_C_SKN
	Skeleton			 = CHSS_UK_C_SKL
	ModelAnimationPrefix = CHSS_UK
	PortraitImageName	 = CPUruk
	ButtonImageName		 = HICAHUrukhai
	WeaponLaunchBone	= PRIMARY B_HandR
End


//--------------------------------------------------------------------------------------------------------------------------------------
// TROLL Upgrade_CreateAHero_ClassOlogHai/Upgrade_CreateAHero_SubClass_0	
ModelConditionState	= CREATE_A_HERO_29
	Model				 = CHSS_TL_U_SKN
	Skeleton			 = CHSS_TL_U_SKL
	ModelAnimationPrefix = CHSS_TL
	PortraitImageName	 = CPTroll
	ButtonImageName		 = HICAHTroll
	WeaponLaunchBone	= PRIMARY Bat_HandL
End
// TROLL Upgrade_CreateAHeroMapMode Upgrade_CreateAHero_ClassOlogHai/Upgrade_CreateAHero_SubClass_0	
ModelConditionState	= CREATE_A_HERO_30
	Model				 = CHSS_TL_C_SKN
	Skeleton			 = CHSS_TL_C_SKL
	ModelAnimationPrefix = CHSS_TL
	PortraitImageName	 = CPTroll
	ButtonImageName		 = HICAHTroll
	WeaponLaunchBone	= PRIMARY Bat_HandL
End

//--------------------------------------------------------------------------------------------------------------------------------------
// SNOW TROLL Upgrade_CreateAHero_ClassOlogHai/Upgrade_CreateAHero_SubClass_1	
ModelConditionState	= CREATE_A_HERO_31
	Model				 = CHTL_ST_U_SKN
	Skeleton			 = CHTL_ST_U_SKL
	ModelAnimationPrefix = CHTL_ST
	PortraitImageName	 = KUSnowTrollPortrait
	ButtonImageName		 = WOR_SnowTrollIcon
	WeaponLaunchBone	= PRIMARY WeaponCOB
End
// SNOW TROLL Upgrade_CreateAHeroMapMode Upgrade_CreateAHero_ClassOlogHai/Upgrade_CreateAHero_SubClass_1
ModelConditionState	= CREATE_A_HERO_32
	Model				 = CHTL_ST_C_SKN
	Skeleton			 = CHTL_ST_C_SKL
	ModelAnimationPrefix = CHTL_ST
	PortraitImageName	 = KUSnowTrollPortrait
	ButtonImageName		 = WOR_SnowTrollIcon
	WeaponLaunchBone	= PRIMARY WeaponCOB
End

//--------------------------------------------------------------------------------------------------------------------------------------
// Hill TROLL Upgrade_CreateAHero_ClassOlogHai/Upgrade_CreateAHero_SubClass_2/
ModelConditionState	= CREATE_A_HERO_33
	Model				 = CHTL_HT_U_SKN
	Skeleton			 = CHTL_HT_U_SKL
	ModelAnimationPrefix = CHTL_HT
	PortraitImageName	 = KUHillTrollPortrait
	ButtonImageName		 = WOR_HillTrollIcon
	WeaponLaunchBone	= PRIMARY Weapon
End
// SNOW TROLL Upgrade_CreateAHeroMapMode Upgrade_CreateAHero_ClassOlogHai/Upgrade_CreateAHero_SubClass_2
ModelConditionState	= CREATE_A_HERO_34
	Model				 = CHTL_HT_C_SKN
	Skeleton			 = CHTL_HT_C_SKL
	ModelAnimationPrefix = CHTL_HT
	PortraitImageName	 = KUHillTrollPortrait
	ButtonImageName		 = WOR_HillTrollIcon
	WeaponLaunchBone	= PRIMARY Weapon
End// Hill TROLL Upgrade_CreateAHero_ClassOlogHai/Upgrade_CreateAHero_SubClass_3	
ModelConditionState	= CREATE_A_HERO_35
	Model				 = chss_ob_u_skn
	Skeleton			 = CHSS_UK_U_SKL
	ModelAnimationPrefix = CHSS_UK
	PortraitImageName	 = UPMMGundabadGuard
	ButtonImageName		 = UIMMBodyGuard
	WeaponLaunchBone	= PRIMARY Weapon
End
ModelConditionState	= CREATE_A_HERO_36
	Model				 = chss_ob_c_skn
	Skeleton			 = CHSS_UK_C_SKL
	ModelAnimationPrefix = CHSS_UK
	PortraitImageName	 = UPMMGundabadGuard
	ButtonImageName		 = UIMMBodyGuard
	WeaponLaunchBone	= PRIMARY Weapon
End