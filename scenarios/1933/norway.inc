 
 ############################## 
 # Country definition for NOR # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = NOR 
	ai = "nor_1933.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
	dissent = 20
	energy                 = 600
	metal                  = 300
	rare_materials         = 150
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
	manpower               = 7 
	capital                = 483 
      
	# Norwegian merchant marine is INSANE! 
	transports             = 430 
	escorts                = 5 
   diplomacy = 
   {  relation = {  tag = BEL value = 100  } 
     relation = {  tag = DEN value = 150  } 
     relation = {  tag = ENG value = 90  } 
     relation = {  tag = FIN value = 75  } 
     relation = {  tag = HOL value = 100  } 
     relation = {  tag = LUX value = 100  } 
     relation = {  tag = SWE value = 150  } 
     relation = {  tag = USA value = 75  } 
    } 
   SpyInfo                = {  country = "NOR" NumberOfSpies = 5  } 
   nationalprovinces      = {  483 484 485 486 487 488 489 490 491 492 493 494 495 496 497  } 
   ownedprovinces         = {  483 484 485 486 487 488 489 490 491 492 493 494 495 496 497  } 
   controlledprovinces    = {  483 484 485 486 487 488 489 490 491 492 493 494 495 496 497  } 
   
	# Western Minor Tech '33
	# Group C 1933 techs 
	# ###################### 
	techapps               = { 
	# Fighter  
	4500 4510 4520 4530 4540 4550 4010 4020
	# Bomber 
	4600 4610 4620 4630 4120
	# Armoured Car  
	2860 2870 2880 2020
	# Tankette 
	7600 7610 2620 2010 2630 2640
	# Field Artillery 
	2290 2300 2310 
	# Static Anti-Air Artillery 
	2800 2450 21180 21190
	# Heavy Cruiser 
	3210 3220 3230
	# Anti-Air Artillery Brigade 
	2810 2820 2510
	# Infantry Division  
	1010  1020 1030 1040 1050 1060 
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 
	# Mountain Division 
	1160  1170 1180 1190 1200 1210 1220 1230
	# Supply 
	1910 1920 1930 1940 1950 1960 1970 1980
	# Agriculture 
	5700 5710 5010 5020
	# Computers & cryptography
	5310 54010 54020 54030 5316 5326
	# Manufacturing
	5810 5820 5050 5830 5060
	# Construction Engineering 
	5800 5080 5090 
	# Destroyer 
	3010 3020 3030 3040
	# Light Cruiser 
	3110 3120 3130
	# Battleship 
	3410 3420 3430 3440 3450 3456 3460
	# Submarine 
	3610 3620 3630
	# Naval Doctrines
	8010 8020 8040 8050 
	# Multirole fighter
	4300 4310 4320 4330
	# Strategic bomber
	4800 4810 4820
	# Navalbomber
	4700 4710
	# Naval Infantry
	#1560 1570 1580
	# Engineers
	1830 1840 1850 1860
	# Torpedo & ASW 18
	3720 3730 3736 3740 3750 3900
	# Troopships
	3810
	# Medicine
	5600 5610 5620 5630
	# Land Doctrines WW1 - Entente Line
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
	# Land Doctrines WW2 - none
	# Air Doctrines
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470
	#Carrier Pigeons
	30020 30030
} 

	inventions = { 3000027 }
	policy = 
	{  date              = {  year = 0 month = january day = 0  } 
		democratic        = 9 
		political_left    = 9 
		freedom           = 7 
		free_market       = 7 
		professional_army = 3 
		defense_lobby     = 5 
		interventionism   = 2 
	} 

	headofstate            = {  type = 9 id = 65001  } 
	headofgovernment       = {  type = 9 id = 65002  } 
	foreignminister        = {  type = 9 id = 65003  } 
	armamentminister       = {  type = 9 id = 65004  } 
	ministerofsecurity     = {  type = 9 id = 65005  } 
	ministerofintelligence = {  type = 9 id = 65006  } 
	chiefofstaff           = {  type = 9 id = 65007  } 
	chiefofarmy            = {  type = 9 id = 65008  } 
	chiefofnavy            = {  type = 9 id = 65009  } 
	chiefofair             = {  type = 9 id = 65010  } 
	
	
	landunit = 
   {  location = 484 
     name     = "1. Divisjon" 
     id       = {  type = 12600 id = 1  } 
     Division = 
     {  id       = {  type = 12600 id = 2  } 
       name     = "1. Infanteridivisjon" 
       type     = infantry 
	   model = 5
       strength = 10 
	extra = engineer
	brigade_model = 2
      } 
    } 
   landunit = 
   {  location = 483 
     name     = "2. Divisjon" 
     id       = {  type = 12600 id = 3  } 
     Division = 
     {  id       = {  type = 12600 id = 4  } 
       name     = "2. Infanteridivisjon" 
       type     = infantry 
	   model = 5
       strength = 10 
      } 
    } 
   landunit = 
   {  location = 485 
     name     = "3. Divisjon" 
     id       = {  type = 12600 id = 5  } 
     Division = 
     {  id       = {  type = 12600 id = 6  } 
       name     = "3. Infanteridivisjon" 
       type     = infantry 
	   model = 5
       strength = 5 
      } 
    } 
   landunit = 
   {  location = 488 
     name     = "4. Divisjon" 
     id       = {  type = 12600 id = 7  } 
     Division = 
     {  id       = {  type = 12600 id = 8  } 
       name     = "4. Infanteridivisjon" 
       type     = infantry 
	   model = 5
       strength = 5 
      } 
    } 
   landunit = 
   {  location = 493 
     name     = "5. Divisjon" 
     id       = {  type = 12600 id = 9  } 
     Division = 
     {  id       = {  type = 12600 id = 10  } 
       name     = "5. Infanteridivisjon" 
       type     = infantry 
	   model = 5
       strength = 10 
      } 
    } 
   landunit = 
   {  location = 497 
     name     = "6. Divisjon" 
     id       = {  type = 12600 id = 11  } 
     Division = 
     {  id       = {  type = 12600 id = 12  } 
       name     = "6. Infanteridivisjon" 
       type     = infantry 
	   model = 5
       strength = 10 
      } 
    } 

	navalunit = { 
		id = { type = 12600 id = 13 } 
		name = "Kongelig Norske Marine" 
		location = 483 
		base = 491 
		division = { 
			id = { type = 12600 id = 14 } 
			name = "KNM Tordenskjold" 
			type = heavy_cruiser
			model = 1 
			} 
		division = { 
			id = { type = 12600 id = 15 } 
			name = "KNM Harald Haarfagre" 
			type = heavy_cruiser
			model = 1 
			} 
		division = { 
			id = { type = 12600 id = 16 } 
			name = "8. Transporten Flotiljen" 
			type = transport
			model = 1 
			} 
		} 
	navalunit = { 
		id = { type = 12600 id = 17 } 
		name = "1. Sjoforsvarsdistrikt" 
		location = 483 
		base = 491 
		division = { 
			id = { type = 12600 id = 18 } 
			name = "2. Torpeder Flotiljen" 
			type = destroyer 
			model = 0
			strength = 100
			} 
		division = { 
			id = { type = 12600 id = 19 } 
			name = "3. Torpeder Flotiljen" 
			type = destroyer 
			model = 0
			strength = 100
			} 
		division = { 
			id = { type = 12600 id = 20 } 
			name = "2. Ubaten Flotiljen" 
			type = submarine 
			model = 2
			strength = 60
			} 
		division = { 
			id = { type = 12600 id = 21 } 
			name = "2. Ubaten Flotiljen" 
			type = submarine 
			model = 1
			strength = 60
			} 
		division = { 
			id = { type = 12600 id = 22 } 
			name = "1. Transporten Flotiljen" 
			type = transport
			model = 1 
			} 
		division = { 
			id = { type = 12600 id = 23 } 
			name = "2. Transporten Flotiljen" 
			type = transport
			model = 1 
			} 
		} 
	navalunit = { 
		id = { type = 12600 id = 24 } 
		name = "2. Sjoforsvarsdistrikt" 
		location = 488 
		base = 491 
		division = { 
			id = { type = 12600 id = 25 } 
			name = "1. Destroyer Flotiljen" 
			type = destroyer 
			model = 1
			strength = 60
			} 
		division = { 
			id = { type = 12600 id = 26 } 
			name = "1. Torpeder Flotiljen" 
			type = destroyer 
			model = 0
			strength = 100
			} 
		division = { 
			id = { type = 12600 id = 27 } 
			name = "4. Torpeder Flotiljen" 
			type = destroyer 
			model = 0
			strength = 100
			} 
		division = { 
			id = { type = 12600 id = 28 } 
			name = "3. Transporten Flotiljen" 
			type = transport
			model = 1 
			} 
		division = { 
			id = { type = 12600 id = 29 } 
			name = "4. Transporten Flotiljen" 
			type = transport
			model = 1 
			} 
		division = { 
			id = { type = 12600 id = 30 } 
			name = "5. Transporten Flotiljen" 
			type = transport
			model = 1 
			} 
		} 
	navalunit = { 
		id = { type = 12600 id = 31 } 
		name = "3. Sjoforsvarsdistrikt" 
		location = 493 
		base = 495 
		division = { 
			id = { type = 12600 id = 32 } 
			name = "KNM Norge" 
			type = heavy_cruiser
			model = 1 
			} 
		division = { 
			id = { type = 12600 id = 33 } 
			name = "KNM Eidsvold" 
			type = heavy_cruiser
			model = 1 
			} 
		division = { 
			id = { type = 12600 id = 34 } 
			name = "3. Ubaten Flotiljen" 
			type = submarine 
			model = 2
			strength = 60
			} 
		division = { 
			id = { type = 12600 id = 35 } 
			name = "6. Transporten Flotiljen" 
			type = transport
			model = 1 
			} 
		division = { 
			id = { type = 12600 id = 36 } 
			name = "7. Transporten Flotiljen" 
			type = transport
			model = 1 
			} 
		} 

	airunit = { 
		id = { type = 12600 id = 37 } 
		name = "Marinens Flyvevaaben" 
		location = 483 
		base = 483 
		division = { 
			id = { type = 12600 id = 38 } 
			name = "1 Luftving" 
			type = interceptor
			model = 6
			strength = 20 
			} 
		} 
  } 
 
