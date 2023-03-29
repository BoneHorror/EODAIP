 
 ############################## 
 # Country definition for SPR # 
 ############################## 
   
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = SPR 
	regular_id             = SPA 
	intrinsic_gov_type     = left_wing_radical 
	ai = "spr_1936.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }
	manpower               = 35 
	# Resource Reserves 
	energy                 = 2280
	metal                  = 1140
	rare_materials         = 570
	oil                    = 500 
	supplies               = 500 
	money                  = 20 
	dissent                = 30 
	capital                = 460 

	transports             = 240 
	escorts                = 27 
   # Gibralter claim 
   diplomacy = 
   {  relation = {  tag = ENG value = -10  } 
     relation = {  tag = FIN value = 35  } 
     relation = {  tag = FRA value = 10  } 
     relation = {  tag = GER value = -50  } 
     relation = {  tag = IRE value = 50  } 
     relation = {  tag = ITA value = -50  } 
     relation = {  tag = POR value = -50  } 
     relation = {  tag = SOV value = -10  } 
    } 
   SpyInfo                = {  country = "SPR" NumberOfSpies = 7  } 
   # Spanish Guinea 
   nationalprovinces      = {  348 436 437 438 439 440 441 442 443 444 445 446 447 448 449 450 451 452 453 454 455 456 457 458 459 460 461 462 463 464 465 466 467 468 469 470 471 472 473 474 475 990 991                         } 
   ownedprovinces         = {  436 437 438 439 440 441 442 443 444 445 446 447 448 449 450 451 452 453 454 455 456 457 458 459 460 461 462 463 464 465 466 467 468 469 470 471 472 473 474 475 715 716 913 916 987 988 989 990 991    
                             } 
   # Spanish Guinea 
   controlledprovinces    = {  436 437 438 439 440 441 442 443 444 445 446 447 448 449 450 451 452 453 454 455 456 457 458 459 460 461 462 463 464 465 466 467 468 469 470 471 472 473 474 475 715 716 913 916 987 988 989 990 991   
                             }
	claimedprovinces = {
		715 716 913 916 987 988 989
	}

	# Group C 1933 techs 
	# ###################### 
	techapps               = { 
	# Fighter  
	4500 4510 4520 4530 4540 4550 4010 4020
	# Armoured Car  
	2860 2870 2880 2020
	# Tankette 
	7600 7610 2620 2010 2630 2640
	# Field Artillery 
	2290 2300 2310 
	# Static Anti-Air Artillery 
	2800 2450 21180 21190
	# Bomber 
	4600 4610 4620 4630 4120 4130
	# Anti-Air Artillery Brigade 
	2810 2820 2510
	# Supply 
	1910 1920 1930 1940 1950 1960
	# Engineers
	1830 1840 1850 1860
	# Battleship 
	3410 3420 3430 3440 3450 3456 3460
	# Heavy Cruiser 
	3210 3220 3230 3240 3250
	# Submarine 
	3610 3620 3630
	# Light Cruiser 
	3110 3120 3130 3140
	# Destroyer 
	3010 3020 3030 3040 3050 
	# Infantry Division  
	1010  1020 1030 1040 1050 1060 
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340
	# Mountain Division 
	1160  1170 1180 1190 1200 1210 1220 1230 1240
	# Agriculture  
	5700 5710 5010
	# Computers & cryptography
	5310 54010 54020 54030 5316 5326
	# Manufacturing
	5810 5820 5050 5830
	# Construction Engineering 
	5800 5080 5090 
	# Multirole fighter
	4300 4310 4320 4330
	# strategic bomber
	4800 4810 4820
	# navalbomber
	4700 4710
	# Torpedo & ASW 18
	3720 3730 3736 3740 3750 3900
	# Troopships
	3810
	# Medicine
	5600 5610 5620 
	# Hospital System
	14000 14010

	# WWI Land Doctrines - Entente line: eng fra ita usa bel hol jap
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
	# Landdoctrine -- none?
	
	# Naval Doctrines
	8010 8020 8040 8050 
	# Air Doctrines
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470
	#Carrier Pigeons
	30020 30030
} 

	inventions = { 3000027 }
	policy = 
	{  date              = {  year = 0 month = january day = 0  } 
		democratic        = 9 
		political_left    = 7 
		freedom           = 7 
		free_market       = 4 
		professional_army = 4 
		defense_lobby     = 4 
		interventionism   = 3 
	} 

	headofstate            = {  type = 9 id = 255001  } 
	headofgovernment       = {  type = 9 id = 255002  } 
	foreignminister        = {  type = 9 id = 255003  } 
	armamentminister       = {  type = 9 id = 255004  } 
	ministerofsecurity     = {  type = 9 id = 255005  } 
	ministerofintelligence = {  type = 9 id = 255006  } 
	chiefofstaff           = {  type = 9 id = 255007  } 
	chiefofarmy            = {  type = 9 id = 255008  } 
	chiefofnavy            = {  type = 9 id = 255009  } 
	chiefofair             = {  type = 9 id = 255010  } 
	dormant_leaders        = {  255008 255051  } 

	# Spanish Troops 
   landunit = 
   {  id       = {  type = 27600 id = 1  } 
     location = 473 
     name     = "33 Regimiento Infanteria 'Cadiz'" 
     Division = 
     {  id   = {  type = 27600 id = 2  } 
       name = "33 Regimiento Infanteria 'Cadiz'" 
       type = garrison
	   model      = 3
	extra = artillery
	brigade_model = 2
	strength = 20
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 3  } 
     location = 462 
     name     = "34 Regimiento Infanteria 'Sevilla'" 
     Division = 
     {  id   = {  type = 27600 id = 4  } 
       name = "34 Regimiento Infanteria 'Sevilla'" 
       type = garrison
	   model      = 3
	extra = artillery
	brigade_model = 2
	strength = 20
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 5  } 
     location = 441 
     name     = "35 Regimiento Infanteria 'Merida'" 
     Division = 
     {  id   = {  type = 27600 id = 6  } 
       name = "35 Regimiento Infanteria 'Merida'" 
       type = garrison
	   model      = 3
	extra = artillery
	brigade_model = 2
	strength = 20
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 7  } 
     location = 460 
     name     = "1 Division Infanteria" 
     Division = 
     {  id    = {  type = 27600 id = 8  } 
       name  = "1 Division Infanteria" 
       type  = infantry 
	   model      = 7
       extra = light_armor_brigade
	   brigade_model = 1
	strength = 75
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 9  } 
     location = 474 
     name     = "2 Division Infanteria" 
     Division = 
     {  id    = {  type = 27600 id = 10  } 
       name  = "2 Division Infanteria" 
       type  = infantry 
	   model      = 7
       extra = artillery
	   brigade_model = 1
	strength = 75
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 11  } 
     location = 464 
     name     = "3 Division Infanteria" 
     Division = 
     {  id    = {  type = 27600 id = 12  } 
       name  = "3 Division Infanteria" 
       type  = infantry 
	   model      = 7
       extra = cavalry_brigade
	   brigade_model = 8
	strength = 75
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 13  } 
     location = 440 
     name     = "4 Division Infanteria" 
     Division = 
     {  id    = {  type = 27600 id = 14  } 
       name  = "4 Division Infanteria" 
       type  = infantry 
	   model      = 7
       extra = artillery
	   brigade_model = 1
	strength = 75
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 15  } 
     location = 442 
     name     = "5 Division Infanteria" 
     Division = 
     {  id    = {  type = 27600 id = 16  } 
       name  = "5 Division Infanteria" 
       type  = infantry 
	   model      = 7
       extra = cavalry_brigade
	   brigade_model = 8
	strength = 75
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 17  } 
     location = 451 
     name     = "6 Division Infanteria" 
     Division = 
     {  id    = {  type = 27600 id = 18  } 
       name  = "6 Division Infanteria" 
       type  = infantry 
	   model      = 7
       extra = artillery
	   brigade_model = 1
	strength = 75
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 19  } 
     location = 448 
     name     = "7 Division Infanteria" 
     Division = 
     {  id    = {  type = 27600 id = 20  } 
       name  = "7 Division Infanteria" 
       type  = infantry 
	   model      = 7
       extra = anti_air
	   brigade_model = 1
	strength = 75
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 21  } 
     location = 441 
     name     = "8 Division Infanteria" 
     Division = 
     {  id    = {  type = 27600 id = 22  } 
       name  = "8 Division Infanteria" 
       type  = infantry 
	   model      = 7
       extra = artillery
	   brigade_model = 1
	strength = 75
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 23  } 
     location = 447 
     name     = "Division Caballeria" 
     Division = 
     {  id    = {  type = 27600 id = 24  } 
       name  = "Division Caballeria" 
       type  = cavalry
	   model      = 8
       extra = artillery 
	   brigade_model = 1
	strength = 75
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 25  } 
     location = 446 
     name     = "1 Brigada Montana" 
     Division = 
     {  id    = {  type = 27600 id = 26  } 
       name  = "1 Brigada Montana" 
       type  = bergsjaeger
	   model      = 7
	strength = 30
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 27  } 
     location = 437 
     name     = "2 Brigada Montana" 
     Division = 
     {  id    = {  type = 27600 id = 28  } 
       name  = "2 Brigada Montana" 
       type  = bergsjaeger
	   model      = 7
	strength = 30
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 29  } 
     location = 475 
     name     = "Comandancia General de Baleares" 
     Division = 
     {  id       = {  type = 27600 id = 30  } 
       name     = "Comandancia General de Baleares" 
       type     = infantry 
	   model      = 6
       strength = 45 
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 31  } 
     location = 990 
     name     = "Comandancia General de Canarias" 
     Division = 
     {  id       = {  type = 27600 id = 32  } 
       name     = "Comandancia General de Canarias" 
       type     = infantry 
	   model      = 6
       strength = 45 
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 33  } 
     location = 987 
     name     = "Fuerzas del Sahara Espanol" 
     Division = 
     {  id   = {  type = 27600 id = 34  } 
       name = "Fuerzas del Sahara Espanol" 
       type = militia
	   model      = 3
	strength = 10
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 35  } 
     location = 715 
     name     = "Circonscripcion Occidental" 
     Division = 
     {  id       = {  type = 27600 id = 36  } 
       name     = "Ceuta-Tetuan Sub-Division" 
       type     = infantry 
	   model      = 6
       strength = 100 
      } 
     Division = 
     {  id       = {  type = 27600 id = 37  } 
       name     = "Larache Sub-Division" 
       type     = infantry 
	   model      = 6
       strength = 100 
      } 
     Division = 
     {  id       = {  type = 27600 id = 38  } 
       name     = "Tercio 'Duque de Alba' 2 de la Legion" 
       type     = infantry 
	   model      = 7
       strength = 30 
      } 
     Division = 
     {  id       = {  type = 27600 id = 39  } 
       name     = "Mehal-La 1" 
       type     = militia
	   model      = 2
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 27600 id = 40  } 
       name     = "Mehal-La 3" 
       type     = militia
	   model      = 2
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 27600 id = 41  } 
       name     = "Mehal-La 4" 
       type     = militia
	   model      = 2
       strength = 50 
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 42  } 
     location = 716 
     name     = "Circonscripcion Oriental" 
     Division = 
     {  id       = {  type = 27600 id = 43  } 
       name     = "Fuerzas Regulares Indigenas" 
       type     = infantry
	   model      = 5
       strength = 70 
      } 
     Division = 
     {  id       = {  type = 27600 id = 44  } 
       name     = "Tercio 'Gran Capitan' 1 de la Legion" 
       type     = infantry 
	   model      = 7
       strength = 30 
      } 
     Division = 
     {  id       = {  type = 27600 id = 45  } 
       name     = "Mehal-La 2" 
       type     = militia
	   model      = 2
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 27600 id = 46  } 
       name     = "Mehal-La 5" 
       type     = militia
	   model      = 2
       strength = 50 
      } 
    } 

   # Some naval units were clearly outdated or in bad fighting shape. Strength has been reduced in those cases. 
	navalunit = { 
		id = { type = 27600 id = 47 } 
		name = "Base Naval Cádiz" 
		location = 473 
		base = 473 
		division = { 
			id = { type = 27600 id = 48 } 
			name = "República" 
			type = light_cruiser 
			model = 2 
			strength = 100 
			} 
		division = { 
			id = { type = 27600 id = 49 } 
			name = "Flotilla de Torpederos No.1" 
			type = destroyer 
			model = 0
			strength = 80 
			} 
		} 
	navalunit = { 
		id = { type = 27600 id = 50 } 
		name = "Base Naval Cartagena" 
		location = 463 
		base = 463 
		division = { 
			id = { type = 27600 id = 82 } 
			name = "Carlos V" 
			type = battlecruiser 
			model = 0 
			strength = 25
			} 
		division = { 
			id = { type = 27600 id = 51 } 
			name = "Dédalo" 
			type = escort_carrier
			model = 0 
			} 
		division = { 
			id = { type = 27600 id = 52 } 
			name = "Flotilla de Destructores No.2" 
			type = destroyer 
			model = 4
			strength = 100
			} 
		division = { 
			id = { type = 27600 id = 53 } 
			name = "Flotilla de Destructores No.1" 
			type = destroyer 
			model = 3
			strength = 60
			} 
		division = { 
			id = { type = 27600 id = 54 } 
			name = "Flotilla de Torpederos No.2" 
			type = destroyer 
			model = 0
			strength = 100
			} 
		division = { 
			id = { type = 27600 id = 55 } 
			name = "Flotilla de Submarinos No.4" 
			type = submarine 
			model = 3
			strength = 60 
			} 
		division = { 
			id = { type = 27600 id = 56 } 
			name = "Flotilla de Submarinos No.3" 
			type = submarine 
			model = 3 
			strength = 60
			} 
		division = { 
			id = { type = 27600 id = 57 } 
			name = "Flotilla de Submarinos No.2" 
			type = submarine 
			model = 2 
			strength = 60
			} 
		division = { 
			id = { type = 27600 id = 58 } 
			name = "Flotilla de Transportes No.1" 
			type = transport 
			model = 1 
			} 
		} 
	navalunit = { 
		id = { type = 27600 id = 59 } 
		name = "Base Naval El Ferrol" 
		location = 441 
		base = 441 
		division = { 
			id = { type = 27600 id = 60 } 
			name = "España" 
			type = battleship 
			model = 2 
			} 
		division = { 
			id = { type = 27600 id = 61 } 
			name = "Jaime I" 
			type = battleship 
			model = 2 
			strength = 100 
			} 
		division = { 
			id = { type = 27600 id = 62 } 
			name = "Libertad" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 27600 id = 63 } 
			name = "Almirante Cervera" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 27600 id = 64 } 
			name = "Miguel de Cervantes" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 27600 id = 65 } 
			name = "Flotilla de Torpederos No.3" 
			type = destroyer 
			model = 0
			strength = 100 
			} 
		division = { 
			id = { type = 27600 id = 66 } 
			name = "Flotilla de Transportes No.2" 
			type = transport 
			model = 1 
			} 
		} 
	navalunit = { 
		id = { type = 27600 id = 67 } 
		name = "Base Naval Mahon" 
		location = 475
		base = 475
		division = { 
			id = { type = 27600 id = 68 } 
			name = "Flotilla de Submarinos No.1" 
			type = submarine 
			model = 2 
			strength = 80
			} 
		} 
	navalunit = { 
		id = { type = 27600 id = 69 } 
		name = "Naval Estacion Canarias" 
		location = 990 
		base = 990 
		division = { 
			id = { type = 27600 id = 70 } 
			name = "Méndez Núñez" 
			type = light_cruiser 
			model = 2 
			} 
		}     
	navalunit = { 
		id = { type = 27600 id = 71 } 
		name = "Naval Estacion Marroqui" 
		location = 715
		base = 988
		division = { 
			id = { type = 27600 id = 72 } 
			name = "Flotilla de Transportes No.3" 
			type = transport model = 1 
			} 
		} 

   airunit = 
   {  location = 460 
     base     = 460 
     id       = {  type = 27600 id = 73  } 
     name     = "Aviacion militar" 
     Division = 
     {  id       = {  type = 27600 id = 74  } 
       name     = "Escuadra No.1" 
       strength = 65 
       type     = interceptor 
	   model    = 6
      } 
     Division = 
     {  id       = {  type = 27600 id = 75  } 
       name     = "Escuadra No.2" 
       strength = 65 
       type     = interceptor 
	   model    = 6
      } 
    } 
   airunit = 
   {  location = 464 
     base     = 464 
     id       = {  type = 27600 id = 76  } 
     name     = "Aéronautica Naval" 
     Division = 
     {  id       = {  type = 27600 id = 77  } 
       name     = "Escuadra No.3" 
       strength = 50 
       type     = naval_bomber 
	   model    = 1
      } 
    }  

   division_development = 
   {  name  = "Canarias" 
     type  = heavy_cruiser 
     model = 4 
     cost  = 0.3 
	new_model = no
     id    = {  type = 27600 id = 78  } 
     date  = {  year = 1936 month = september day = 15  } 
    } 
   division_development = 
   {  name  = "Baleares" 
     type  = heavy_cruiser 
     model = 4 
     cost  = 0.3
	new_model = no 
     id    = {  type = 27600 id = 79  } 
     date  = {  year = 1936 month = december day = 28  } 
    } 
   division_development = 
   {  name  = "Flotilla de Destructores No.3" 
     type  = destroyer 
     model = 4 
     cost  = 0.1
	new_model = no 
     id    = {  type = 27600 id = 80  } 
     date  = {  year = 1936 month = august day = 15  } 
    } 
   division_development = 
   {  name  = "Flotilla de Destructores No.4" 
     type  = destroyer 
     model = 4 
     cost  = 0.1
	new_model = no 
     id    = {  type = 27600 id = 81  } 
     date  = {  year = 1936 month = august day = 15  } 
    } 
  } 
 
