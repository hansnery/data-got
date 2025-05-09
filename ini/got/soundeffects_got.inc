;-----------------------------------------------------------------
;  GAME OF THRONES SUBMOD
;-----------------------------------------------------------------
AudioEvent StannisWarCry
  Sounds       = stannis_war_cry
  Limit        = 1
  Volume       = 140
  MinRange     = 700
  MaxRange     = 1200
  Type         = world shrouded everyone 
  SubmixSlider = SoundFX
End

AudioEvent StannisLastStand
  Sounds       = stannis_last_stand
  Priority     = critical
  Limit	       = 1
  Volume       = 120
  Type         = ui everyone
  SubmixSlider = SoundFX
End

AudioEvent StannisResentment
  Sounds	 = stannis_bend_the_knee
  Volume	 = 125
  MinRange = 500
  MaxRange = 1000
  Priority = critical
  Limit		 = 2
  Type		 = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent LightOfRhllorCreated
  Sounds       = melisandre_ive_seen_the_path_to_victory_in_the_flames
  Limit	       = 2
  Volume       = 200
  MinRange     = 400
  MaxRange     = 1000
  Type         = world everyone 
  SubmixSlider = SoundFX
End

AudioEvent BaratheonLordCastYourLightUponUs
  Sounds       = baratheon_lord_cast_your_light_upon_us
  Limit	       = 2
  Volume       = 120
  MinRange     = 400
  MaxRange     = 1000
  Type         = world everyone 
  SubmixSlider = SoundFX
End

AudioEvent BaratheonLysCorsairs
  Sounds       = stannis_pirates
  Limit	       = 2
  Volume       = 120
  MinRange     = 400
  MaxRange     = 1000
  Type         = world everyone 
  SubmixSlider = SoundFX
End

AudioEvent BaratheonIronBank
  Sounds       = stannis_iron_bank
  Limit	       = 2
  Volume       = 200
  MinRange     = 400
  MaxRange     = 1000
  Type         = ui everyone
  SubmixSlider = SoundFX
End

AudioEvent BaratheonLightbringer
  Sounds       = stannis_lightbringer
  Limit	       = 2
  Volume       = 150
  MinRange     = 400
  MaxRange     = 1000
  Type         = ui everyone
  SubmixSlider = SoundFX
End

AudioEvent StannisKnightsSpawned
  Sounds       = stannis_knights_spawned
  Priority     = critical
  Limit	       = 1
  Volume       = 120
  Type         = ui everyone 
  SubmixSlider = SoundFX
End

AudioEvent MelisandreInnerFire
  Sounds       = melisandre_fire_burns_them_all_away
  Volume       = 300
  Type         = world everyone
  Priority     = critical
  Control      = interrupt
  Limit        = 1
  SubmixSlider = SoundFX
End

AudioEvent TheNightIsDarkAndFullOfTerrors
  Sounds       = melisandre_night_is_dark melisandre_night_is_dark3
  Volume       = 300
  Type         = world everyone
  Priority     = critical
  Control      = interrupt
  Limit        = 1
  SubmixSlider = SoundFX
End

AudioEvent MelisandreSeduction
  Sounds       = melisandre_you_must_give_yourself_to_the_lord_of_light melisandre_you_want_to_see_whats_beneath_this_robe melisandre_and_none_have_seen_the_blade melisandre_are_you_a_virgin
  Volume       = 300
  Type         = world everyone
  Priority     = critical
  Control      = interrupt
  Limit        = 1
  SubmixSlider = SoundFX
End

AudioEvent MelisandreGivingBirth
  Sounds       = melisandre_giving_birth ;melisandre_shadowbaby
  Volume       = 300
  Type         = world everyone
  Priority     = critical
  Control      = interrupt
  Limit        = 1
  SubmixSlider = SoundFX
End

AudioEvent ShadowbabyBorn
  Sounds       = shadowbaby_born
  Volume       = 300
  Type         = world everyone
  Priority     = critical
  Control      = interrupt
  Limit        = 1
  SubmixSlider = SoundFX
End

AudioEvent ShadowbabyMoves
  Sounds       = shadowbaby
  Volume       = 300
  Type         = world everyone
  Priority     = critical
  Control      = interrupt
  Limit        = 1
  SubmixSlider = SoundFX
End

AudioEvent DavosHonestAccounting
  Sounds       = davos_honest_accounting
  Volume       = 250
  Type         = world everyone
  Priority     = critical
  Control      = interrupt
  Limit        = 1
  SubmixSlider = SoundFX
End

AudioEvent DavosOnionsBarrel
  Sounds       = davos_and_potatoes davos_first_bite
  Volume       = 300
  Type         = world everyone
  Priority     = critical
  Control      = interrupt
  Limit        = 1
  SubmixSlider = SoundFX
End

AudioEvent DavosSmugglersTricks
  Sounds       = davos_any_shore_any_night davos_you_should_know_what_youre_heading_into
  Volume       = 250
  Type         = world everyone
  Priority     = critical
  Control      = interrupt
  Limit        = 1
  SubmixSlider = SoundFX
End

AudioEvent DavosHardTruths
  Sounds       = davos_hard_truths
  Volume       = 250
  Type         = world everyone
  Priority     = critical
  Control      = interrupt
  Limit        = 1
  SubmixSlider = SoundFX
End

AudioEvent UpgradeLawfulSon
  Sounds       = gendry_lawful_son
  Limit        = 3
  Volume       = 200
  Type         = ui everyone ;world shrouded player
  SubmixSlider = SoundFX
End

AudioEvent UpgradeKingsBloodPower
  Sounds       = gendry_bastard_son
  Limit        = 3
  Volume       = 150
  Type         = ui everyone ;world shrouded player
  SubmixSlider = SoundFX
End

AudioEvent GendrySkilledSmith
  Sounds       = gendry_proper_forge gendry_nothing_tricky_about_it gendry_make_a_few_thousand_of_these gendry_just_need_decent_steel
  Volume       = 300
  Type         = world everyone
  Priority     = critical
  Control      = interrupt
  Limit        = 1
  SubmixSlider = SoundFX
End

AudioEvent GendryTheBull
  Sounds       = gendry_im_a_fighter
  Volume       = 300
  Type         = world everyone
  Priority     = critical
  Control      = interrupt
  Limit        = 1
  SubmixSlider = SoundFX
End

AudioEvent GendryStrongSeed
  Sounds       = gendry_i_dont_know_much_about_swinging_swords
  Volume       = 300
  Type         = world everyone
  Priority     = critical
  Control      = interrupt
  Limit        = 1
  SubmixSlider = SoundFX
End

AudioEvent Carousing
  Sounds       = the_bear_and_the_maiden_fair got_carousing
  Limit        = 2
  Volume       = 150
  MinRange     = 300
  MaxRange     = 1000
  Priority     = critical
  Type         = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent SpellSpawnBaratheonWhiteStag
  Sounds       = white_stag
  Volume       = 200
  Priority     = critical
  Limit        = 3
  Type         = world everyone
  SubmixSlider = SoundFX
End

AudioEvent SpellBleedingStar
  Sounds       = comet
  Limit	       = 2
  Volume       = 200
  MinRange     = 400
  MaxRange     = 800
  Type         = ui player enemies allies
  SubmixSlider = SoundFX
End

AudioEvent UpgradeSacrificeShireen
  Sounds       = sacrifice_shireen
  Limit        = 3
  Volume       = 200
  Type         = ui everyone ;world shrouded player
  SubmixSlider = SoundFX
End

AudioEvent UpgradePrayHarder
  Sounds       = pray_harder
  Limit        = 3
  Volume       = 150
  Type         = ui everyone ;world shrouded player
  SubmixSlider = SoundFX
End

AudioEvent UpgradeBurnIdols
  Sounds       = burn_idols
  Limit        = 3
  Volume       = 150
  Type         = ui everyone ;world shrouded player
  SubmixSlider = SoundFX
End

AudioEvent UpgradeMasterOfShips
  Sounds       = master_of_ships
  Limit        = 3
  Volume       = 200
  Type         = ui everyone ;world shrouded player
  SubmixSlider = SoundFX
End

AudioEvent SpellBaratheonDrums
  Sounds     = baratheon_drums
  Volume     = 300
  MinRange   = 300
  MaxRange   = 1000
  PitchShift = 0 2
  Priority   = critical
  Limit      = 2
  Type       = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent UpgradeBaratheonBanners
  Sounds    = melisandre_upgrade_banners
  Volume    = 500
  MinVolume = 495
  Limit     = 3
  Type      = world shrouded player
  SubmixSlider = SoundFX
End

AudioEvent UpgradeBaratheonLavaMoat
  Sounds    = melisandre_upgrade_dragonmont
  Volume    = 500
  MinVolume = 495
  Limit     = 3
  Type      = world shrouded player
  SubmixSlider = SoundFX
End

AudioEvent UpgradeBaratheonSmokeAndBrimstone
  Sounds    = melisandre_upgrade_smoke
  Volume    = 500
  MinVolume = 495
  Limit     = 3
  Type      = world shrouded player
  SubmixSlider = SoundFX
End

AudioEvent UpgradeBaratheonValyrianSorcery
  Sounds    = melisandre_upgrade_valyrian_spells
  Volume    = 500
  MinVolume = 495
  Limit     = 3
  Type      = world shrouded player
  SubmixSlider = SoundFX
End

AudioEvent UpgradeBaratheonManTheDrum
  Sounds    = melisandre_upgrade_man_the_drum
  Volume    = 500
  MinVolume = 495
  Limit     = 3
  Type      = world shrouded player
  SubmixSlider = SoundFX
End

AudioEvent MelisandrePaintedTable
	Sounds     = melisandre_painted_table
	Volume     = 500
  MinVolume  = 495
	PitchShift = -1 1
	MinRange   = 400
	MaxRange   = 1000
	Limit      = 1
	Type       = world shrouded everyone
	SubmixSlider = SoundFX
End