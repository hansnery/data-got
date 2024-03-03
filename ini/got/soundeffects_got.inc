;-----------------------------------------------------------------
;  GAME OF THRONES SUBMOD
;-----------------------------------------------------------------
AudioEvent StannisWarCry
  Sounds = stannis_war_cry
  Limit = 1
  Volume = 140
  MinRange = 700
  MaxRange = 1200
  Type = world shrouded everyone 
  SubmixSlider = SoundFX
End

AudioEvent StannisLastStand
  Sounds      = stannis_last_stand
  Priority = critical
  Limit	     = 1
  Volume      = 120
  ;MinVolume   = 80
  Type        = ui everyone 
  SubmixSlider = SoundFX
End

AudioEvent LightOfRhllorCreated
  Sounds      = melisandre_ive_seen_the_path_to_victory_in_the_flames
  Limit	     = 2
  Volume      = 120
  MinRange = 400
  MaxRange = 1000
  Type        = world everyone 
  SubmixSlider = SoundFX
End

AudioEvent BaratheonLordCastYourLightUponUs
  Sounds      = baratheon_lord_cast_your_light_upon_us
  Limit	     = 2
  Volume      = 120
  MinRange = 400
  MaxRange = 1000
  Type        = world everyone 
  SubmixSlider = SoundFX
End

AudioEvent BaratheonLysCorsairs
  Sounds      = stannis_pirates
  Limit	     = 2
  Volume      = 120
  MinRange = 400
  MaxRange = 1000
  Type        = world everyone 
  SubmixSlider = SoundFX
End

AudioEvent BaratheonIronBank
  Sounds      = stannis_iron_bank
  Limit	     = 2
  Volume      = 120
  MinRange = 400
  MaxRange = 1000
  Type        = world everyone 
  SubmixSlider = SoundFX
End

AudioEvent BaratheonLightbringer
  Sounds      = stannis_lightbringer
  Limit	     = 2
  Volume      = 200
  MinRange = 400
  MaxRange = 1000
  Type        = world everyone 
  SubmixSlider = SoundFX
End

AudioEvent StannisKnightsSpawned
  Sounds      = stannis_knights_spawned
  Priority = critical
  Limit	     = 1
  Volume      = 120
  Type        = ui everyone 
  SubmixSlider = SoundFX
End

AudioEvent MelisandreInnerFire
  Sounds = melisandre_fire_burns_them_all_away
  Volume = 300
  Type = world everyone
  Priority = critical
  Control = interrupt
  Limit = 1
  SubmixSlider = SoundFX
End

AudioEvent TheNightIsDarkAndFullOfTerrors
  Sounds = melisandre_night_is_dark melisandre_night_is_dark3
  Volume = 300
  Type = world everyone
  Priority = critical
  Control = interrupt
  Limit = 1
  SubmixSlider = SoundFX
End

AudioEvent MelisandreSeduction
  Sounds = melisandre_you_must_give_yourself_to_the_lord_of_light melisandre_you_want_to_see_whats_beneath_this_robe melisandre_and_none_have_seen_the_blade melisandre_are_you_a_virgin
  Volume = 300
  Type = world everyone
  Priority = critical
  Control = interrupt
  Limit = 1
  SubmixSlider = SoundFX
End

AudioEvent MelisandreGivingBirth
  Sounds = melisandre_giving_birth ;melisandre_shadowbaby
  Volume = 250
  Type = world everyone
  Priority = critical
  Control = interrupt
  Limit = 1
  SubmixSlider = SoundFX
End

AudioEvent ShadowbabyBorn
  Sounds = shadowbaby_born
  Volume = 250
  Type = world everyone
  Priority = critical
  Control = interrupt
  Limit = 1
  SubmixSlider = SoundFX
End

AudioEvent ShadowbabyMoves
  Sounds = shadowbaby
  Volume = 250
  Type = world everyone
  Priority = critical
  Control = interrupt
  Limit = 1
  SubmixSlider = SoundFX
End

AudioEvent DavosHonestAccounting
  Sounds = davos_honest_accounting
  Volume = 250
  Type = world everyone
  Priority = critical
  Control = interrupt
  Limit = 1
  SubmixSlider = SoundFX
End

AudioEvent DavosOnionsBarrel
  Sounds = davos_and_potatoes davos_first_bite
  Volume = 300
  Type = world everyone
  Priority = critical
  Control = interrupt
  Limit = 1
  SubmixSlider = SoundFX
End

AudioEvent DavosSmugglersTricks
  Sounds = davos_any_shore_any_night davos_you_should_know_what_youre_heading_into
  Volume = 250
  Type = world everyone
  Priority = critical
  Control = interrupt
  Limit = 1
  SubmixSlider = SoundFX
End

AudioEvent DavosHardTruths
  Sounds = davos_hard_truths
  Volume = 250
  Type = world everyone
  Priority = critical
  Control = interrupt
  Limit = 1
  SubmixSlider = SoundFX
End

AudioEvent UpgradeLawfulSon
  Sounds = gendry_lawful_son
  Limit = 3
  Volume = 100
  MinVolume = 80
  Type = world shrouded player
  SubmixSlider = SoundFX
End

AudioEvent UpgradeKingsBloodPower
  Sounds = gendry_bastard_son
  Limit = 3
  Volume = 100
  MinVolume = 80
  Type = world shrouded player
  SubmixSlider = SoundFX
End

AudioEvent GendrySkilledSmith
  Sounds = gendry_proper_forge gendry_nothing_tricky_about_it gendry_make_a_few_thousand_of_these gendry_just_need_decent_steel
  Volume = 300
  Type = world everyone
  Priority = critical
  Control = interrupt
  Limit = 1
  SubmixSlider = SoundFX
End

AudioEvent GendryTheBull
  Sounds = gendry_im_a_fighter
  Volume = 300
  Type = world everyone
  Priority = critical
  Control = interrupt
  Limit = 1
  SubmixSlider = SoundFX
End

AudioEvent GendryStrongSeed
  Sounds = gendry_i_dont_know_much_about_swinging_swords
  Volume = 300
  Type = world everyone
  Priority = critical
  Control = interrupt
  Limit = 1
  SubmixSlider = SoundFX
End