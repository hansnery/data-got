;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; ASOIAF HEROES
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;
; Baratheon Builder
;;;;;;;;;;;;;;;;;;;;;
AudioEvent BaratheonBuilderVoiceSalute
  Sounds = builder_baratheon builder_do_you_need_something_built
  Volume = #ADD( UNIT_RESPONSE_VOLUME 85 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 85 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent BaratheonBuilderVoiceSelect
  Sounds = builder_baratheon builder_do_you_need_something_built builder_get_paid builder_queen_of_dragons builder_repair builder_stormlands builder_summer builder_the_wall builder_we_have_work_to_do builder_where_are_we_building ;builder_walls builder_white_walkers builder_wildlings builder_nights_watch builder_giants
  Volume = #ADD( UNIT_RESPONSE_VOLUME 85 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 85 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

Multisound BaratheonBuilderVoiceSelectMS
  Subsounds = BaratheonBuilderVoiceSelect MenBuilderFoleySelect
End

AudioEvent BaratheonBuilderVoiceMove
  Sounds = builder_cart builder_lets_get_this_thing_moving builder_lets_get_to_work builder_lets_get_working builder_lets_go builder_straight_away builder_supplies_are_coming builder_tavern builder_tools_ready builder_wait_this_is_heavy
  Volume = #ADD( UNIT_RESPONSE_VOLUME 85 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 85 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent BaratheonBuilderVoiceBuild
  Sounds = builder_castles builder_clear_the_land builder_dragons_breath builder_lets_build_it builder_living_or_dead builder_miss_the_days builder_next_war builder_repair builder_stone_and_mortar builder_sturdy_foundation builder_there_is_a_good_place  ;builder_more_walls builder_tower builder_scaffolding builder_shelter builder_dragons builder_battlements
  Volume = #ADD( UNIT_RESPONSE_VOLUME 85 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 85 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent BaratheonBuilderVoiceGarrison
  Sounds = builder_shelter
  Volume = #ADD( UNIT_RESPONSE_VOLUME 85 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 85 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End
;;;;;;;;;;;;;;;;;;;;;
; Stannis Baratheon
;;;;;;;;;;;;;;;;;;;;;
AudioEvent StannisVoiceSalute
  Sounds = stannis_salute
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent StannisVoiceAttack
  Sounds        = stannis_not_easily_killed stannis_bend_the_knee stannis_kingdom_bleed stannis_punish_them stannis_little_regard stannis_cleaner_ways
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent StannisVoiceMove
  Sounds        = stannis_kingdom_bleed stannis_what_other_way stannis_lords
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  PlayPercent = VOICE_MOVE_PLAY_PERCENT
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent StannisVoiceDisengage
  Sounds        = stannis_victory_in_the_flames stannis_the_flames_lied stannis_i_never_asked_for_this
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent StannisVoiceRetreatToCastle
  Sounds        = stannis_greater_number
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent StaninsVoiceHelpMe
  Sounds        = stannis_stand_and_fight
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= HELPME_MINVOLUME 
  Type          = world player voice
  Priority = critical
  SubmixSlider = voice
End

AudioEvent StannisVoiceSelectMS
  Sounds        = stannis_iron_throne stannis_thieves stannis_rightful_king stannis_time_to_choose stannis_i_saw_a_vision_in_the_flames stannis_we_must_do_our_duty
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent StannisVoiceSelectBattle
  Sounds        = stannis_fighting stannis_not_easily_killed stannis_bend_the_knee stannis_kingdom_bleed stannis_punish_them stannis_little_regard stannis_beat_dogs stannis_kneel
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	    = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider  = voice
End

AudioEvent StannisVoiceDie
  Sounds        = stannis_stand_and_fight 
  Volume        = UNIT_RESPONSE_VOLUME
  MinRange = 500
  MaxRange = 1000
  Type          = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent StannisVoiceRespawn
  Sounds        = stannis_unless_i_triumph
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End
;;;;;;;;;;;;;;;;;;;;;
; Melisandre
;;;;;;;;;;;;;;;;;;;;;
AudioEvent MelisandreVoiceSalute
  Sounds = melisandre_night_is_dark2
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent MelisandreVoiceAttack
  Sounds        = melisandre_are_you_afraid melisandre_death_by_fire_is_the_purest_death melisandre_do_you_want_to_stop_me melisandre_these_armies_are_toys melisandre_this_war_has_just_begun melisandre_you_smell_of_fear melisandre_you_will_sweep_aside_this_pretender melisandre_valar_morghulis melisandre_the_fire_cleansed_them
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent MelisandreVoiceMove
  Sounds        = melisandre_i_pray_for_his_commands melisandre_stannis_does_not_need_to_beg melisandre_let_me_show_you_what_you_are_fighting_for melisandre_theres_only_one_war melisandre_come_with_us melisandre_there_are_two_gods melisandre_you_could_never_disturb_me melisandre_you_have_so_many_questions
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  PlayPercent = VOICE_MOVE_PLAY_PERCENT
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent MelisandreVoiceDisengage
  Sounds        = melisandre_do_you_want_to_stop_me melisandre_quit_the_war melisandre_you_must_have_faith melisandre_youre_troubled_my_king
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent MelisandreVoiceRetreatToCastle
  Sounds        = melisandre_do_you_want_to_stop_me melisandre_quit_the_war melisandre_you_must_have_faith melisandre_youre_troubled_my_king
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent MelisandreVoiceHelpMe
  Sounds        = melisandre_ive_been_fighting_far_longer_than_you melisandre_dead_before_the_dawn melisandre_sometimes_sacrifices_must_be_made
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= HELPME_MINVOLUME 
  Type          = world player voice
  Priority = critical
  SubmixSlider = voice
End

AudioEvent MelisandreVoiceSelectMS
  Sounds        = melisandre_i_pray_for_his_commands melisandre_stannis_does_not_need_to_beg melisandre_let_me_show_you_what_you_are_fighting_for melisandre_theres_only_one_war melisandre_come_with_us melisandre_there_are_two_gods melisandre_you_could_never_disturb_me melisandre_you_have_so_many_questions
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent MelisandreVoiceSelectBattle
  Sounds        = melisandre_are_you_afraid melisandre_death_by_fire_is_the_purest_death melisandre_do_you_want_to_stop_me melisandre_these_armies_are_toys melisandre_this_war_has_just_begun melisandre_you_smell_of_fear melisandre_you_will_sweep_aside_this_pretender
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent MelisandreVoiceDie
  Sounds = melisandre_dies
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ShadowbabyDisappears
  Sounds        = shadowbaby
  Volume        = UNIT_RESPONSE_VOLUME
  MinRange = 500
  MaxRange = 1000
  Type          = world shrouded everyone voice
  SubmixSlider = voice
End

;;;;;;;;;;;;;;;;;;;;;
; Davos
;;;;;;;;;;;;;;;;;;;;;
AudioEvent DavosVoiceSalute
  Sounds = davos_stannis_honourable davos_you_need_someone_to_bring_sellswords_and_pirates_to_your_side
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DavosVoiceAttack
  Sounds        = davos_cleaner_ways davos_is_there_a_difference_between_kill_and_sacrifice davos_its_a_problem_for_now davos_no_weapons_friends davos_this_boy_has_done_you_no_harm davos_you_are_my_enemy davos_you_might_want_to_bring_one_of_those_swords
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent DavosVoiceAttackStructure
  Sounds        = davos_plunder davos_they_barred_the_passage davos_those_walls_have_never_been_breached
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent DavosVoiceMove
  Sounds        = davos_at_once_your_grace davos_does_seem_the_wiser_choice davos_havent_been_here_in_years davos_ive_looked_in_shops_taverns_brothels davos_of_course_i_will davos_stannis_is_our_king davos_thats_easy
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  PlayPercent = VOICE_MOVE_PLAY_PERCENT
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent DavosVoiceDisengage
  Sounds        = davos_you_could_have_freed_me_yesterday davos_wars_are_expensive davos_this_war_is_not_over davos_another_way davos_and_theres_still_a_war_to_fight davos_stubborn davos_avoid_good_men_such_as_yourselves davos_his_men_know_how_to_fight davos_i_cant_say_it_was_a_pleasure_doing_business_with_you davos_it_is_sad_to_say_but_ive_seen_worse davos_march_forward
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent DavosVoiceRetreatToCastle
  Sounds        = davos_safety_is_never_a_permanent_state_of_affairs davos_take_me_back_there
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent DavosVoiceHelpMe
  Sounds        = davos_just_a_bit_of_blood
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= HELPME_MINVOLUME 
  Type          = world player voice
  Priority = critical
  SubmixSlider = voice
End

AudioEvent DavosVoiceSelect
  Sounds        = davos_your_grace davos_without_reading davos_what_can_i_do_for_you davos_wasnt_sure_id_find_ya davos_stannis_is_my_god davos_she_whispers_orders davos_read davos_pray davos_nothing_fucks_you_harder_than_time davos_my_lord davos_anybody_give_you_any_trouble davos_as_long_as_stannis_lives_the_war_is_not_over davos_bad_things_are_coming davos_easterns_have_different_sense_of_time davos_hes_in_his_prime davos_hes_a_tried_and_tested_battle_commander davos_he_does_it davos_hes_the_one_true_king davos_i_didnt_do_the_thieving davos_i_wish_i_had_a_god davos_night_is_dark
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent DavosVoiceSelectBattle
  Sounds        = davos_stannis_never_gives_up davos_situation_is_complicated_enough_already davos_stannis_has_just_begun_the_fight
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent DavosVoiceDie
  Sounds = davos_just_a_bit_of_blood
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

;;;;;;;;;;;;;;;;;;;;;
; Gendry
;;;;;;;;;;;;;;;;;;;;;
AudioEvent GendryVoiceSalute
  Sounds = gendry_im_robert_baratheons_bastard_son
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent LordGendryVoiceSalute
  Sounds = gendry_im_robert_baratheons_son
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GendryVoiceAttack
  Sounds        = gendry_you_gonna_sing gendry_steel_sings gendry_little_ones gendry_insult_people gendry_dead_soon gendry_crossed_my_mind gendry_i_cant_wait_out_this_war gendry_prefer_a_hammer
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent GendryVoiceAttackStructure
  Sounds        = gendry_idk_what_that_is
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent GendryVoiceMove
  Sounds        = gendry_im_ready_lets_go gendry_i_heard_it gendry_how_far_below gendry_fighting_someone gendry_where_should_i_go gendry_i_understand gendry_understood
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  PlayPercent = VOICE_MOVE_PLAY_PERCENT
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent GendryVoiceDisengage
  Sounds        = gendry_what_wouldve_done gendry_weve_come_a_long_way gendry_they_scare_me gendry_stupid gendry_never_seen_anything_like_this gendry_im_not_whinging gendry_im_not_leaving_ya gendry_im_a_bit_busy gendry_i_shouldve_known gendry_dont_worry gendry_i_ower_you_my_life
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent GendryVoiceRetreatToCastle
  Sounds        = gendry_here_i_am_back_where_i_started
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent GendryVoiceHelpMe
  Sounds        = gendry_why_are_you_doing_this gendry_is_this_some_kind_of_trick
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= HELPME_MINVOLUME 
  Type          = world player voice
  Priority = critical
  SubmixSlider = voice
End

AudioEvent GendryVoiceSelect
  Sounds        = gendry_they_fought_together_and_won gendry_you_are_here_to_help gendry_you_want_me_to_come_with_you gendry_you_came_to_get_me gendry_served_tywin gendry_served_men gendry_never_had_a_father gendry_never_had_a_family gendry_im_lowborn gendry_im_a_mistake gendry_highborn_is_trouble gendry_fleabottom gendry_dont_trust_any_of_them gendry_bowls_of_brown gendry_any_idiot_can_buy_armor
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent GendryVoiceSelectBattle
  Sounds        = gendry_you_gonna_sing gendry_steel_sings gendry_little_ones gendry_insult_people gendry_dead_soon gendry_crossed_my_mind
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent GendryVoiceLeave
  Sounds = gendry_you_sold_me gendry_i_wanted_to_be_one_of_you
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GendryVoiceDie
  Sounds = gendry_scream
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End
;;;;;;;;;;;;;;;;;;;;;
; Shireen Baratheon
;;;;;;;;;;;;;;;;;;;;;
AudioEvent ShireenVoiceSalute
  Sounds = shireen_salute
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 85 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 85 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ShireenVoiceMove
  Sounds    = shireen_move1 shireen_move2 shireen_move3 shireen_move4 shireen_move5 shireen_move6 shireen_move7 shireen_move8 shireen_move9
  Volume    = #ADD( UNIT_RESPONSE_VOLUME 85 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 85 )
  PlayPercent  = VOICE_MOVE_PLAY_PERCENT
  Type         = world player voice
  SubmixSlider = voice
End

AudioEvent ShireenVoiceDisengage
  Sounds    = shireen_retreat1 shireen_retreat2 shireen_retreat3 shireen_retreat4
  Volume    = #ADD( UNIT_RESPONSE_VOLUME 85 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 85 )
  PlayPercent  = VOICE_MOVE_PLAY_PERCENT
  Type         = world player voice
  SubmixSlider = voice
End

AudioEvent ShireenVoiceSelect
  Sounds    = shireen_select1 shireen_select2 shireen_select3 shireen_select4 shireen_select5 shireen_select6 shireen_select7 shireen_select8 shireen_select9
  Volume    = #ADD( UNIT_RESPONSE_VOLUME 85 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 85 )
  Type      = world player voice
  SubmixSlider = voice
End

AudioEvent ShireenVoiceHelpMe
  Sounds    = shireen_help1 shireen_help2
  Volume    = #ADD( UNIT_RESPONSE_VOLUME 85 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 85 )
  Type      = world player voice
  SubmixSlider = voice
End

AudioEvent ShireenVoiceRespawn
  Sounds    = shireen_respawn
  Volume    = #ADD( UNIT_RESPONSE_VOLUME 85 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 85 )
  Type      = world player voice
  SubmixSlider = voice
End

AudioEvent ShireenVoiceDie
  Sounds    = shireen_dies
  Volume    = #ADD( UNIT_RESPONSE_VOLUME 85 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 85 )
  Type      = world player voice
  SubmixSlider = voice
End
;;;;;;;;;;;;;;;;;;;;;
; Salladhor Saan
;;;;;;;;;;;;;;;;;;;;;
AudioEvent SalladhorSaanVoiceSalute
  Sounds = salladhor_saan_salute
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 85 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 85 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent SalladhorSaanVoiceMove
  Sounds    = salladhor_saan_move2 salladhor_saan_move3 salladhor_saan_move5 salladhor_saan_move6 salladhor_saan_move7
  Volume    = #ADD( UNIT_RESPONSE_VOLUME 85 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 85 )
  PlayPercent  = VOICE_MOVE_PLAY_PERCENT
  Type         = world player voice
  SubmixSlider = voice
End

AudioEvent SalladhorSaanVoiceMoveShip
  Sounds    = salladhor_saan_select5 salladhor_saan_move1 salladhor_saan_move4
  Volume    = #ADD( UNIT_RESPONSE_VOLUME 85 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 85 )
  PlayPercent  = VOICE_MOVE_PLAY_PERCENT
  Type         = world player voice
  SubmixSlider = voice
End

AudioEvent SalladhorSaanVoiceAttack
  Sounds    = salladhor_saan_attack1 salladhor_saan_attack2 salladhor_saan_attack3 salladhor_saan_attack4 salladhor_saan_attack5 salladhor_saan_attack6 salladhor_saan_attack7
  Volume    = #ADD( UNIT_RESPONSE_VOLUME 85 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 85 )
  PlayPercent  = VOICE_MOVE_PLAY_PERCENT
  Type         = world player voice
  SubmixSlider = voice
End

AudioEvent SalladhorSaanVoiceDisengage
  Sounds    = salladhor_saan_retreat1 salladhor_saan_retreat2
  Volume    = #ADD( UNIT_RESPONSE_VOLUME 85 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 85 )
  PlayPercent  = VOICE_MOVE_PLAY_PERCENT
  Type         = world player voice
  SubmixSlider = voice
End

AudioEvent SalladhorSaanVoiceSelect
  Sounds    = salladhor_saan_select1 salladhor_saan_select2 salladhor_saan_select3 salladhor_saan_select4 salladhor_saan_select6 salladhor_saan_select7
  Volume    = #ADD( UNIT_RESPONSE_VOLUME 85 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 85 )
  Type      = world player voice
  SubmixSlider = voice
End

AudioEvent SalladhorSaanVoiceHelpMe
  Sounds    = salladhor_saan_help1 salladhor_saan_help2 salladhor_saan_help3
  Volume    = #ADD( UNIT_RESPONSE_VOLUME 85 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 85 )
  Type      = world player voice
  SubmixSlider = voice
End

AudioEvent SalladhorSaanVoiceRespawn
  Sounds    = salladhor_saan_respawn
  Volume    = #ADD( UNIT_RESPONSE_VOLUME 85 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 85 )
  Type      = world player voice
  SubmixSlider = voice
End

AudioEvent SalladhorSaanVoiceDie
  Sounds    = salladhor_saan_dies
  Volume    = #ADD( UNIT_RESPONSE_VOLUME 85 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 85 )
  Type      = world player voice
  SubmixSlider = voice
End
;;;;;;;;;;;;;;;;;;;;;
; Stormlander Guard
;;;;;;;;;;;;;;;;;;;;;
AudioEvent StormlanderGuardVoiceAttack
  Sounds    = stormlander_guard_attack1 stormlander_guard_attack2 stormlander_guard_attack3 stormlander_guard_attack4 stormlander_guard_attack5 stormlander_guard_attack6 stormlander_guard_attack7
  Volume    = M_BREELANDERS_RESPONSE_VOLUME
  MinVolume = M_BREELANDERS_RESPONSE_MINVOLUME
  Type      = world player voice
  SubmixSlider = voice
End

AudioEvent StormlanderGuardAttackBuilding
  Sounds    = stormlander_guard_attack_building1 stormlander_guard_attack_building2 stormlander_guard_attack_building3 stormlander_guard_attack_building4 stormlander_guard_attack_building5
  Volume    = M_BREELANDERS_RESPONSE_VOLUME
  MinVolume = M_BREELANDERS_RESPONSE_MINVOLUME
  Type      = world player voice
  SubmixSlider = voice
End

AudioEvent StormlanderGuardVoiceSalute
  Sounds    = stormlander_guard_salute1 stormlander_guard_salute2 stormlander_guard_salute3 stormlander_guard_salute4
  Volume    = M_BREELANDERS_RESPONSE_VOLUME
  MinVolume = M_BREELANDERS_RESPONSE_MINVOLUME
  Limit     = 1
  Type      = world player voice
  SubmixSlider = voice
End

AudioEvent StormlanderGuardVoiceMove
  Sounds      = stormlander_guard_move1 stormlander_guard_move2 stormlander_guard_move3 stormlander_guard_move4 stormlander_guard_move5 stormlander_guard_move6 stormlander_guard_move7 stormlander_guard_move8
  Volume      = M_BREELANDERS_RESPONSE_VOLUME
  MinVolume   = M_BREELANDERS_RESPONSE_MINVOLUME
  PlayPercent = VOICE_MOVE_PLAY_PERCENT
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent StormlanderGuardVoiceMoveCamp
  Sounds    = stormlander_guard_move_camp1 stormlander_guard_move_camp2 stormlander_guard_move_camp3 stormlander_guard_move_camp4
  Volume    = M_BREELANDERS_RESPONSE_VOLUME
  MinVolume = M_BREELANDERS_RESPONSE_MINVOLUME
  Type      = world player voice
  SubmixSlider = voice
End

AudioEvent  StormlanderGuardVoiceDisengage
  Sounds    = stormlander_guard_disengage1 stormlander_guard_disengage2 stormlander_guard_disengage3 stormlander_guard_disengage4 stormlander_guard_disengage5
  Volume    = M_BREELANDERS_RESPONSE_VOLUME
  MinVolume = M_BREELANDERS_RESPONSE_MINVOLUME
  Type      = world player voice
  SubmixSlider = voice
End

AudioEvent  StormlanderGuardVoiceRetreat
  Sounds    = stormlander_guard_retreat1
  Volume    = M_BREELANDERS_RESPONSE_VOLUME
  MinVolume = M_BREELANDERS_RESPONSE_MINVOLUME
  Type      = world player voice
  SubmixSlider = voice
End

AudioEvent StormlanderGuardVoiceSelect
  Sounds    = stormlander_guard_select1 stormlander_guard_select2 stormlander_guard_select3 stormlander_guard_select4 stormlander_guard_select5 stormlander_guard_select6 stormlander_guard_select7
  Volume    = M_BREELANDERS_RESPONSE_VOLUME
  MinVolume = M_BREELANDERS_RESPONSE_MINVOLUME
  Type      = world player voice
  SubmixSlider = voice
End

Multisound StormlanderGuardVoiceSelectMS
	Subsounds = StormlanderGuardVoiceSelect PeasantVoiceSelect2
End

AudioEvent StormlanderGuardVoiceSelectBattle
  Sounds    = stormlander_guard_combat1 stormlander_guard_combat2 stormlander_guard_combat3 stormlander_guard_combat4 stormlander_guard_combat5
  Volume    = M_BREELANDERS_RESPONSE_VOLUME
  MinVolume = M_BREELANDERS_RESPONSE_MINVOLUME
  Type      = world player voice
  SubmixSlider = voice
End

AudioEvent StormlanderGuardVoiceEnterStateAttack
  Sounds       = stormlander_guard_attack1 stormlander_guard_attack2 stormlander_guard_attack3 stormlander_guard_attack4 stormlander_guard_attack5 stormlander_guard_attack6 stormlander_guard_attack7
  Limit        = 1
  Volume       = BATTLE_CHATTER_VOLUME
  MinVolume    = BATTLE_CHATTER_MIN_VOLUME
  Type         = world allies enemies voice shrouded
  SubmixSlider = voice
  MaxRange     = BATTLE_CHATTER_RANGE
  PlayPercent  = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent StormlanderGuardVoiceEnterStateAttackBuilding
  Sounds       = stormlander_guard_attack_building1 stormlander_guard_attack_building2 stormlander_guard_attack_building3 stormlander_guard_attack_building4 stormlander_guard_attack_building5
  Limit        = 1
  Volume       = BATTLE_CHATTER_VOLUME
  MinVolume    = BATTLE_CHATTER_MIN_VOLUME
  Type         = world allies enemies voice shrouded
  SubmixSlider = voice
  MaxRange     = BATTLE_CHATTER_RANGE
  PlayPercent  = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent StormlanderGuardVoiceEnterStateMove
  Sounds       = stormlander_guard_move1 stormlander_guard_move2 stormlander_guard_move3 stormlander_guard_move4 stormlander_guard_move5 stormlander_guard_move6 stormlander_guard_move7 stormlander_guard_move8
  Limit        = 1
  Volume       = BATTLE_CHATTER_VOLUME
  MinVolume    = BATTLE_CHATTER_MIN_VOLUME
  Type         = world allies enemies voice shrouded
  SubmixSlider = voice
  MaxRange     = BATTLE_CHATTER_RANGE
  PlayPercent  = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent StormlanderGuardVoiceEnterStateMoveCamp
  Sounds       = stormlander_guard_move_camp1 stormlander_guard_move_camp2 stormlander_guard_move_camp3 stormlander_guard_move_camp4
  Limit        = 1
  Volume       = BATTLE_CHATTER_VOLUME
  MinVolume    = BATTLE_CHATTER_MIN_VOLUME
  Type         = world allies enemies voice shrouded
  SubmixSlider = voice
  MaxRange     = BATTLE_CHATTER_RANGE
  PlayPercent  = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent StormlanderGuardVoiceEnterStateDisengage
  Sounds       = stormlander_guard_disengage1 stormlander_guard_disengage2 stormlander_guard_disengage3 stormlander_guard_disengage4 stormlander_guard_disengage5
  Limit        = 1
  Volume       = BATTLE_CHATTER_VOLUME
  MinVolume    = BATTLE_CHATTER_MIN_VOLUME
  Type         = world allies enemies voice shrouded
  SubmixSlider = voice
  MaxRange     = BATTLE_CHATTER_RANGE
  PlayPercent  = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent StormlanderGuardVoiceEnterStateRetreat
  Sounds       = stormlander_guard_retreat1
  Limit        = 1
  Volume       = BATTLE_CHATTER_VOLUME
  MinVolume    = BATTLE_CHATTER_MIN_VOLUME
  Type         = world allies enemies voice shrouded
  SubmixSlider = voice
  MaxRange     = BATTLE_CHATTER_RANGE
  PlayPercent  = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent StormlanderGuardVoiceGarrison
  Sounds    = stormlander_guard_garrison1 stormlander_guard_garrison2
  Volume    = M_BREELANDERS_RESPONSE_VOLUME
  MinVolume = M_BREELANDERS_RESPONSE_MINVOLUME
  Type      = world player voice
  SubmixSlider = voice
End

AudioEvent StormlanderGuardMoveShip
  Sounds    = stormlander_guard_ship1
  Priority  = high
  Volume    = M_BREELANDERS_RESPONSE_VOLUME
  MinVolume = M_BREELANDERS_RESPONSE_MINVOLUME
  Type      = world player voice
  SubmixSlider = voice
End

AudioEvent StormlanderGuardVoiceMoveTrees
  Sounds       = stormlander_guard_move_trees1 stormlander_guard_move_trees2
  Volume       = M_BREELANDERS_RESPONSE_VOLUME
  MinVolume	   = M_BREELANDERS_RESPONSE_MINVOLUME
  Type         = world player voice
  SubmixSlider = voice
End

AudioEvent StormlanderGuardVoiceEnterStateMoveTrees
  Sounds       = stormlander_guard_move_trees1 stormlander_guard_move_trees2
  Limit        = 1
  Volume       = BATTLE_CHATTER_VOLUME
  MinVolume    = BATTLE_CHATTER_MIN_VOLUME
  Type         = world allies enemies voice shrouded
  SubmixSlider = voice
  MaxRange     = BATTLE_CHATTER_RANGE
  PlayPercent  = BATTLE_CHATTER_PLAY_PERCENT
End
;;;;;;;;;;;;;;;;;;;;;
; Dragonstone Soldier
;;;;;;;;;;;;;;;;;;;;;
AudioEvent DragonstoneSoldierVoiceAttack
  Sounds    = dragonstone_soldier_attack1 dragonstone_soldier_attack2 dragonstone_soldier_attack3 dragonstone_soldier_attack4 dragonstone_soldier_attack5 dragonstone_soldier_attack6 dragonstone_soldier_attack7 dragonstone_soldier_attack8 dragonstone_soldier_attack9
  Volume    = 180
  MinVolume = 175
  Type      = world player voice
  SubmixSlider = voice
End

AudioEvent DragonstoneSoldierAttackBuilding
  Sounds    = dragonstone_soldier_attack_building1 dragonstone_soldier_attack_building2 dragonstone_soldier_attack_building3 dragonstone_soldier_attack_building4 dragonstone_soldier_attack_building5
  Volume    = 180
  MinVolume = 175
  Type      = world player voice
  SubmixSlider = voice
End

AudioEvent DragonstoneSoldierVoiceSalute
  Sounds    = dragonstone_soldier_salute1 dragonstone_soldier_salute2 dragonstone_soldier_salute3 dragonstone_soldier_salute4
  Volume    = 180
  MinVolume = 175
  Limit     = 1
  Type      = world player voice
  SubmixSlider = voice
End

AudioEvent DragonstoneSoldierVoiceMove
  Sounds      = dragonstone_soldier_move1 dragonstone_soldier_move2 dragonstone_soldier_move3 dragonstone_soldier_move4 dragonstone_soldier_move5 dragonstone_soldier_move6 dragonstone_soldier_move7 dragonstone_soldier_move8
  Volume    = 180
  MinVolume = 175
  PlayPercent = VOICE_MOVE_PLAY_PERCENT
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent DragonstoneSoldierVoiceMoveCamp
  Sounds    = dragonstone_soldier_move_camp1 dragonstone_soldier_move_camp2 dragonstone_soldier_move_camp3 dragonstone_soldier_move_camp4
  Volume    = 180
  MinVolume = 175
  Type      = world player voice
  SubmixSlider = voice
End

AudioEvent  DragonstoneSoldierVoiceDisengage
  Sounds    = dragonstone_soldier_disengage1 dragonstone_soldier_disengage2 dragonstone_soldier_disengage3 dragonstone_soldier_disengage4 dragonstone_soldier_disengage5
  Volume    = 180
  MinVolume = 175
  Type      = world player voice
  SubmixSlider = voice
End

AudioEvent  DragonstoneSoldierVoiceRetreat
  Sounds    = dragonstone_soldier_retreat1 dragonstone_soldier_retreat2
  Volume    = 180
  MinVolume = 175
  Type      = world player voice
  SubmixSlider = voice
End

AudioEvent DragonstoneSoldierVoiceSelect
  Sounds    = dragonstone_soldier_select1 dragonstone_soldier_select2 dragonstone_soldier_select3 dragonstone_soldier_select4 dragonstone_soldier_select5 dragonstone_soldier_select6 dragonstone_soldier_select7
  Volume    = 180
  MinVolume = 175
  Type      = world player voice
  SubmixSlider = voice
End

Multisound DragonstoneSoldierVoiceSelectMS
	Subsounds = DragonstoneSoldierVoiceSelect PeasantVoiceSelect2
End

AudioEvent DragonstoneSoldierVoiceSelectBattle
  Sounds    = dragonstone_soldier_select_battle1 dragonstone_soldier_select_battle2 dragonstone_soldier_select_battle3 dragonstone_soldier_select_battle4 dragonstone_soldier_select_battle5
  Volume    = 180
  MinVolume = 175
  Type      = world player voice
  SubmixSlider = voice
End

AudioEvent DragonstoneSoldierVoiceEnterStateAttack
  Sounds       = dragonstone_soldier_attack1 dragonstone_soldier_attack2 dragonstone_soldier_attack3 dragonstone_soldier_attack4 dragonstone_soldier_attack5 dragonstone_soldier_attack6 dragonstone_soldier_attack7 dragonstone_soldier_attack8 dragonstone_soldier_attack9
  Limit        = 1
  Volume       = BATTLE_CHATTER_VOLUME
  MinVolume    = BATTLE_CHATTER_MIN_VOLUME
  Type         = world allies enemies voice shrouded
  SubmixSlider = voice
  MaxRange     = BATTLE_CHATTER_RANGE
  PlayPercent  = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent DragonstoneSoldierVoiceEnterStateAttackBuilding
  Sounds       = dragonstone_soldier_attack_building1 dragonstone_soldier_attack_building2 dragonstone_soldier_attack_building3 dragonstone_soldier_attack_building4 dragonstone_soldier_attack_building5
  Limit        = 1
  Volume       = BATTLE_CHATTER_VOLUME
  MinVolume    = BATTLE_CHATTER_MIN_VOLUME
  Type         = world allies enemies voice shrouded
  SubmixSlider = voice
  MaxRange     = BATTLE_CHATTER_RANGE
  PlayPercent  = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent DragonstoneSoldierVoiceEnterStateMove
  Sounds       = dragonstone_soldier_move1 dragonstone_soldier_move2 dragonstone_soldier_move3 dragonstone_soldier_move4 dragonstone_soldier_move5 dragonstone_soldier_move6 dragonstone_soldier_move7 dragonstone_soldier_move8
  Limit        = 1
  Volume       = BATTLE_CHATTER_VOLUME
  MinVolume    = BATTLE_CHATTER_MIN_VOLUME
  Type         = world allies enemies voice shrouded
  SubmixSlider = voice
  MaxRange     = BATTLE_CHATTER_RANGE
  PlayPercent  = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent DragonstoneSoldierVoiceEnterStateMoveCamp
  Sounds       = dragonstone_soldier_move_camp1 dragonstone_soldier_move_camp2 dragonstone_soldier_move_camp3 dragonstone_soldier_move_camp4
  Limit        = 1
  Volume       = BATTLE_CHATTER_VOLUME
  MinVolume    = BATTLE_CHATTER_MIN_VOLUME
  Type         = world allies enemies voice shrouded
  SubmixSlider = voice
  MaxRange     = BATTLE_CHATTER_RANGE
  PlayPercent  = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent DragonstoneSoldierVoiceEnterStateDisengage
  Sounds       = dragonstone_soldier_disengage1 dragonstone_soldier_disengage2 dragonstone_soldier_disengage3 dragonstone_soldier_disengage4 dragonstone_soldier_disengage5
  Limit        = 1
  Volume       = BATTLE_CHATTER_VOLUME
  MinVolume    = BATTLE_CHATTER_MIN_VOLUME
  Type         = world allies enemies voice shrouded
  SubmixSlider = voice
  MaxRange     = BATTLE_CHATTER_RANGE
  PlayPercent  = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent DragonstoneSoldierVoiceEnterStateRetreat
  Sounds       = dragonstone_soldier_retreat1 dragonstone_soldier_retreat2
  Limit        = 1
  Volume       = BATTLE_CHATTER_VOLUME
  MinVolume    = BATTLE_CHATTER_MIN_VOLUME
  Type         = world allies enemies voice shrouded
  SubmixSlider = voice
  MaxRange     = BATTLE_CHATTER_RANGE
  PlayPercent  = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent DragonstoneSoldierVoiceGarrison
  Sounds    = dragonstone_soldier_garrison1 dragonstone_soldier_garrison2
  Volume    = 180
  MinVolume = 175
  Type      = world player voice
  SubmixSlider = voice
End

AudioEvent DragonstoneSoldierVoiceCapture
  Sounds    = dragonstone_soldier_capture1 dragonstone_soldier_capture2 dragonstone_soldier_capture3
  Volume    = 180
  MinVolume = 175
  Type      = world player voice
  SubmixSlider = voice
End

AudioEvent DragonstoneSoldierMoveShip
  Sounds    = dragonstone_soldier_ship1
  Priority  = high
  Volume    = 180
  MinVolume = 175
  Type      = world player voice
  SubmixSlider = voice
End

AudioEvent DragonstoneSoldierVoiceMoveTrees
  Sounds       = dragonstone_soldier_trees1 dragonstone_soldier_trees2
  Volume    = 180
  MinVolume = 175
  Type         = world player voice
  SubmixSlider = voice
End

AudioEvent DragonstoneSoldierVoiceEnterStateMoveTrees
  Sounds       = dragonstone_soldier_trees1 dragonstone_soldier_trees2
  Limit        = 1
  Volume       = BATTLE_CHATTER_VOLUME
  MinVolume    = BATTLE_CHATTER_MIN_VOLUME
  Type         = world allies enemies voice shrouded
  SubmixSlider = voice
  MaxRange     = BATTLE_CHATTER_RANGE
  PlayPercent  = BATTLE_CHATTER_PLAY_PERCENT
End
;;;;;;;;;;;;;;;;;;;;;
; EVA - Camp
;;;;;;;;;;;;;;;;;;;;;
AudioEvent CampGenericDragonEggDropped
  Sounds    = dragon_egg_by_the_seven dragon_egg_old_gods_and_the_new dragon_egg_dropped dragon_egg_take_it1
  Volume    = #ADD( CAMP_ORC_VOLUME 90 )
  MinVolume = #ADD( CAMP_ORC_MINVOLUME 90 )
  Type      = world player voice
  SubmixSlider = voice
End

AudioEvent CampBaratheonDragonEggDropped
  Sounds    = dragon_egg_lord_of_light dragon_egg_rhllor dragon_egg_dropped dragon_egg_take_it1
  Volume    = #ADD( CAMP_ORC_VOLUME 90 )
  MinVolume = #ADD( CAMP_ORC_MINVOLUME 90 )
  Type      = world player voice
  SubmixSlider = voice
End

AudioEvent CampGenericDragonEggPickedUpByUs
  Sounds    = dragon_egg_take_it1 dragon_egg_take_to_the_fortress
  Volume    = #ADD( CAMP_ORC_VOLUME 90 )
  MinVolume = #ADD( CAMP_ORC_MINVOLUME 90 )
  Type      = world player voice
  SubmixSlider = voice
End

AudioEvent CampGenericDragonEggPickedUpByTheEnemy
  Sounds = dragon_egg_enemy_stole_it dragon_egg_enemy_wield dragon_egg_enemy_with_an_egg dragon_egg_lost_to_the_enemy
  Volume = #ADD( CAMP_ORC_VOLUME 90 )
  MinVolume = #ADD( CAMP_ORC_MINVOLUME 90 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGenericDragonEggRetrieved
  Sounds = dragon_egg_we_have_it dragon_egg_we_have_it2 dragon_egg_we_have_it3 dragon_egg_we_have_it4 dragon_egg_we_have_it5 dragon_egg_we_have_it6
  Sounds = ECRin_OwnUsd ECRin_OwnUse
  Volume = #ADD( CAMP_ORC_VOLUME 90 )
  MinVolume = #ADD( CAMP_ORC_MINVOLUME 90 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGenericDragonEggLost
  Sounds    = dragon_egg_lost dragon_egg_lost2 dragon_egg_lost3 dragon_egg_lost4 dragon_egg_lost5 dragon_egg_lost6
  Volume    = #ADD( CAMP_ORC_VOLUME 90 )
  MinVolume = #ADD( CAMP_ORC_MINVOLUME 90 )
  Type      = world player voice
  SubmixSlider = voice
End

AudioEvent CampGenericEnemyHasDragonEgg
  Sounds    = dragon_egg_enemy_has_it dragon_egg_enemy_wields
  Volume    = #ADD( CAMP_ORC_VOLUME 90 )
  MinVolume = #ADD( CAMP_ORC_MINVOLUME 90 )
  Type      = world player voice
  SubmixSlider = voice
End

AudioEvent CampGenericAllyHasDragonEgg
  Sounds    = dragon_egg_ally dragon_egg_ally2
  Volume    = #ADD( CAMP_ORC_VOLUME 90 )
  MinVolume = #ADD( CAMP_ORC_MINVOLUME 90 )
  Type      = world player voice
  SubmixSlider = voice
End
;;;;;;;;;;;;;;;;;;;;;
; Drogon
;;;;;;;;;;;;;;;;;;;;;
AudioEvent DrogonVoiceSalute
  Sounds        = dragon2
  Priority      = High
  Volume        = 200
  MinVolume     = 195
  Type          = world player voice
  SubmixSlider  = voice
End

AudioEvent DrogonVoiceAttack
  Sounds        = dragon3 dragon9 dragon17
  Priority      = High
  Volume        = 200
  MinVolume     = 195
  Type          = world player voice
  SubmixSlider  = voice
End

AudioEvent DrogonVoiceMove
  Sounds        = dragon1 dragon4 dragon6 dragon7 dragon8 dragon11 dragon12 dragon13 dragon14 dragon15 dragon16 dragon18
  Priority      = High
  Volume        = 200
  MinVolume     = 195
  PlayPercent   = VOICE_MOVE_PLAY_PERCENT
  Type          = world player voice
  SubmixSlider  = voice
End

AudioEvent DrogonVoiceDisengage
  Sounds        = dragon19 dragon20
  Priority      = High
  Volume        = 200
  MinVolume     = 195
  Type          = world player voice
  SubmixSlider  = voice
End

AudioEvent DrogonVoiceFireball
  Sounds        = dragon_fire
  Priority      = High
  Volume        = 200
  MinVolume     = 195
  Type          = world player voice
  SubmixSlider  = voice
End

AudioEvent DrogonVoiceDracarys
  Sounds        = dragon_fire
  Priority      = High
  Volume        = 200
  MinVolume     = 195
  Type          = world player voice
  SubmixSlider  = voice
End

AudioEvent DrogonVoiceFear
  Sounds        = dragon5
  Priority      = High
  Volume        = 200
  MinVolume     = 195
  Type          = world player voice
  SubmixSlider  = voice
End

AudioEvent DrogonVoiceScreech
  Sounds        = dragon_screech
  Priority      = High
  Volume        = 200
  MinVolume     = 195
  Type          = world player voice
  SubmixSlider  = voice
End

AudioEvent DrogonVoiceDie
  Sounds        = dragon_dies dragon_dies2 dragon_dies3
  Priority      = High
  Limit         = 3
  Volume        = UNIT_RESPONSE_VOLUME
  MinRange      = 500
  MaxRange      = 1000
  Type          = world shrouded everyone voice
  SubmixSlider  = voice
End
