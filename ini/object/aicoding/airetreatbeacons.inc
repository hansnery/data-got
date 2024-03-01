;//NEW AI RETREAT MECHANIC - Spawns beacons for AI units to run to when injured

Behavior = SpawnBehavior ModuleTag_SpawnRetreatBeacons
  TriggeredBy		= Upgrade_ObjectUnderAIControl
;	ConflictsWith 	= Upgrade_HasIsenSiegeWorks
  SpawnNumber			= 1
  InitialBurst		= 1
  SpawnTemplateName	= RetreatBeaconBASE
  SpawnReplaceDelay	= 45000000000
  CanReclaimOrphans	= Yes
End

Behavior = PassiveAreaEffectBehavior ModuleTag_AIHeroHealer
  EffectRadius			= GONDOR_WELL_AOE_RADIUS
  PingDelay			= 3000	;2000;msec
  HealPercentPerSecond		= 5%	;3%
  AllowFilter			= ANY +HERO SAME_PLAYER
  UpgradeRequired = Upgrade_ObjectUnderAIControl
  NonStackable			= Yes
;  HealFX				= FX_SpellHealUnitHealBuff
End
