 
 ############################## 
 # Country definition for ARG # 
 ############################## 
  

 ##################### 
 # Country main data # 
 ##################### 
  
country = {
	tag                    = ARG 
	ai = "arg_1936.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }
	dissent = 20
	manpower               = 78 
	# Resource Reserves 
	energy                 = 1620
	metal                  = 810
	rare_materials         = 405
	transports = 50
	oil                    = 500 
	supplies               = 500 
	money                  = 20 
	capital                = 2050 

	policy = {
		date              = {  year = 0 month = january day = 0  } 
		democratic        = 5 
		political_left    = 3 
		free_market       = 8 
		freedom           = 6 
		professional_army = 4 
		defense_lobby     = 6 
		interventionism   = 3 
	} 

	nationalprovinces   = {  2026 2027 2028 2029 2034 2035 2036 2037 2038 2039 2043 2044 2045 2048 2049 2050 2053 2054 2055 2056  } 
	ownedprovinces      = {  2026 2027 2028 2029 2034 2035 2036 2037 2038 2039 2044 2048 2049 2050 2053 2054 2055 2056  } 
	controlledprovinces = {  2026 2027 2028 2029 2034 2035 2036 2037 2038 2039 2044 2048 2049 2050 2053 2054 2055 2056  } 
	
	# Semi-Major Tech '36 
	# Group C 1933 techs 
	# ###################### 
	techapps = {
		#Early Fighter  
		4500 4510 4520 4530 4540 4550 4010
		#Early Bomber 
		4600 4610 4620 4630 4120 4130
		#SEAPLANES
		4740 4750 4760
		#Great War Tank 
		7600 7610 2620 2010 2630
		#Great War Heavy Field Artillery 
		2290 2300 2310
		#Early Static Anti-Air Artillery 
		2800 2450 21180 21190
		#Basic Anti-Air Artillery Brigade 
		2810 2820 2510
		#Great War Infantry Division  
		1010  1020 1030 1040 1050 1060 
		#Interbellum Supply 
		1910 1920 1930 1940 1950 1960
		#Great War Cavalry Division  
		13060 13070 13080 1310 1320 1330 1340 
		#Early Mountain Division 
		1160  1170 1180 1190 1200 1210 1220 1230 1240
		#Naval Infantry
		#1560 1570 1580
		#Engineers
		1830 1840 1850 1860
		#Medicine
		5600 5610 5620
		#Mechanized Agriculture 
		5700 5710 5010 5020
		#Manufactoring
		5810 5820 5050 5830 5060
		#Improved Construction Engineering 
		5800 5080  
		#Computers & cryptography
		5310 54010 54020 54030 5316 5326
		#Improved Destroyer 
		3010 3020 3030 3040 3050
		#Interwar Light Cruiser 
		3110 3120 3130 3140
		#Early Heavy Cruiser 
		3210 3220 3230 3240
		#Great War Battleship 
		3410 3420 3430 3440 3450 3456 3460
		#Short Range Submarine 
		3610 3620 3630
		#Torpedo & ASW 18
		3720 3730 3736 3740 3900
		#Troopships
		3810
		#Air Doctrines - ww2 techs
		27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470
		# Great War Land Doctrines (entente)
		6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
		# Defensive Focus Grand Battleplan Path (FRA / UK)
		6560
		# Engagement Theories
		8010 8020 8040 8050
		# Naval Supremacy
		8100
		# Engagement Tactics - Fleet-in-Being colum
		8900 8910 8920 8930
		#Carrier Pigeons
		30020 30030
	} 
	
	inventions = { 3000027 }
	diplomacy = {
		relation = {  tag = BOL value = 50  } 
		relation = {  tag = BRA value = -10  } 
		relation = {  tag = CHL value = -20  } 
		relation = {  tag = COL value = 10  } 
		relation = {  tag = ENG value = 75  } 
		relation = {  tag = ECU value = 10  } 
		relation = {  tag = GER value = 75  } 
		relation = {  tag = IRE value = 20  } 
		relation = {  tag = ITA value = 30  } 
		relation = {  tag = PAR value = 50  } 
		relation = {  tag = PRU value = 20  } 
		relation = {  tag = URU value = -50  } 
		relation = {  tag = USA value = 75  } 
		relation = {  tag = VEN value = 10  } 
	} 
	SpyInfo                = {  country = "ARG" NumberOfSpies = 6  } 
	headofstate            = {  type = 9 id = 165001  } 
	headofgovernment       = {  type = 9 id = 165002  } 
	foreignminister        = {  type = 9 id = 165003  } 
	armamentminister       = {  type = 9 id = 165004  } 
	ministerofsecurity     = {  type = 9 id = 165005  } 
	ministerofintelligence = {  type = 9 id = 165006  } 
	chiefofstaff           = {  type = 9 id = 165007  } 
	chiefofarmy            = {  type = 9 id = 165008  } 
	chiefofnavy            = {  type = 9 id = 165009  } 
	chiefofair             = {  type = 9 id = 165010  } 
	
	###############
	# Argentine OOB 
	###############
	
	landunit = {
		id       = {  type = 12000 id = 1  } 
		name     = "Comando de Caballeria" 
		location = 2050 # Buenos Aires 
		division = {
			id       = {  type = 12000 id = 2  } 
			name     = "Brigada de Caballeria 1" 
			type     = cavalry 
			model    = 8
			strength = 20
		} 
		division = {
			id       = {  type = 12000 id = 3  } 
			name     = "Brigada de Caballeria 1" 
			type     = cavalry 
			model    = 8
			strength = 20
		} 
		division = {
			id       = {  type = 12000 id = 4  } 
			name     = "Brigada de Caballeria 1" 
			type     = cavalry 
			model    = 8
			strength = 20
		} 
	} 
	landunit = {
		id       = {  type = 12000 id = 5  } 
		name     = "Division de Infanteria 1" 
		location = 2050 
		division = {
			id       = {  type = 12000 id = 6  } 
			name     = "Division de Infanteria 1" 
			strength = 35
			type     = infantry 
			model    = 7
		} 
	} 
	landunit = {
		id       = {  type = 12000 id = 7  } 
		name     = "Division de Infanteria 2" 
		location = 2053 
		division = {
			id       = {  type = 12000 id = 8  } 
			name     = "Division de Infanteria 2" 
			strength = 35
			type     = infantry
			model    = 7
		} 
	} 	
	landunit = {
		id       = {  type = 12000 id = 9  } 
		name     = "Division de Infanteria 3" 
		location = 2055 
		division = {
			id       = {  type = 12000 id = 10  } 
			name     = "Division de Infanteria 3" 
			strength = 35
			type     = infantry
			model    = 7
		} 
	} 	
	landunit = {
		id       = {  type = 12000 id = 11  } 
		name     = "Division de Infanteria 4" 
		location = 2054 
		division = {
			id       = {  type = 12000 id = 12  } 
			name     = "Division de Infanteria 4" 
			strength = 35
			type     = infantry
			model    = 7
		} 
	} 	
	landunit = {
		id       = {  type = 12000 id = 13  } 
		name     = "Division de Infanteria 5" 
		location = 2026 
		division = {
			id       = {  type = 12000 id = 14  } 
			name     = "Division de Infanteria 5" 
			strength = 35
			type     = infantry
			model    = 7
		} 
	} 	
	landunit = {
		id       = {  type = 12000 id = 15  } 
		name     = "Comando de Infanteria de Montana" 
		location = 2026 
		division = {
			id       = {  type = 12000 id = 16  } 
			name     = "Agrupacion de Infanteria de Montana" 
			strength = 25
			type     = bergsjaeger
			model    = 7
		} 
	} 		
	
	navalunit = { 
		id = { type = 12000 id = 17 } 
		name = "Armada de la Republica Argentina" 
		location = 2048 
		base = 2048 
		division = { 
			id = { type = 12000 id = 18 } 
			name = "ARA Rivadavia" 
			type = battleship 
			model = 3
			extra1 = naval_fire_controll_l
			brigade_model1 = 0 
			extra2 = naval_anti_air_l
			brigade_model2 = 0
		} 
		division = { 
			id = { type = 12000 id = 19 } 
			name = "ARA Moreno" 
			type = battleship 
			model = 3 
			extra1 = naval_fire_controll_l
			brigade_model1 = 0 
			extra2 = naval_anti_air_l
			brigade_model2 = 0
		} 
		division = { 
			id = { type = 12000 id = 20 } 
			name = "ARA Garibaldi" 
			type = heavy_cruiser 
			model = 1 
		} 
		division = { 
			id = { type = 12000 id = 21 } 
			name = "ARA San Martin" 
			type = heavy_cruiser 
			model = 1 
			extra1 = naval_fire_controll_s
			brigade_model1 = 0 
		} 
		division = { 
			id = { type = 12000 id = 22 } 
			name = "ARA General Belgrano" 
			type = heavy_cruiser 
			model = 1
 			extra1 = naval_fire_controll_s
			brigade_model1 = 0 
		} 
		division = { 
			id = { type = 12000 id = 23 } 
			name = "ARA Pueyrredon" 
			type = heavy_cruiser 
			model = 1 
 			extra1 = naval_fire_controll_s
			brigade_model1 = 0 
		} 
		division = { 
			id = { type = 12000 id = 24 } 
			name = "ARA Almirante Brown" 
			type = light_cruiser 
			model = 3 
 			extra1 = naval_fire_controll_s
			brigade_model1 = 0 
			extra2 = floatplane
			brigade_model2 = 4
		} 
		division = { 
			id = { type = 12000 id = 25 } 
			name = "ARA Veinticinco De Mayo" 
			type = light_cruiser 
			model = 3 
 			extra1 = naval_fire_controll_s
			brigade_model1 = 0 
			extra2 = floatplane
			brigade_model2 = 4
		} 
		division = { 
			id = { type = 12000 id = 26 } 
			name = "Flotilla de Destructores No. 1" 
			type = destroyer 
			model = 2
			strength = 80 
		} 
		division = { 
			id = { type = 12000 id = 27 } 
			name = "Flotilla de Destructores No. 2" 
			type = destroyer 
			model = 4 
		} 
		division = { 
			id = { type = 12000 id = 28 } 
			name = "Flotilla de Submarinos No. 1" 
			type = submarine 
			model = 3
			strength = 60 
		} 
		division = { 
			id = { type = 12000 id = 29 } 
			name = "Flotilla de Transportes No. 1" 
			type = transport
			model = 1
		} 
	}   
	
	airunit = {
		id       = {  type = 12000 id = 30  } 
		name     = "Fuerza Aérea Argentina" 
		location = 2050 
		base     = 2050 
		division = {
			id       = {  type = 12000 id = 31  } 
			name     = "Grupo 4 de Caza" 
			strength = 15
			type     = interceptor 
			model    = 6
		} 
		division = {
			id       = {  type = 12000 id = 32  } 
			name     = "Grupo 1 de Transporte Aéreo" 
			strength = 10
			type     = transport_plane
			model    = 0
		} 
	} 
	airunit = {
		id       = {  type = 12000 id = 33  } 
		name     = "Comando de Aviacion Naval" 
		location = 2048 
		base     = 2048 
		division = {
			id       = {  type = 12000 id = 34  } 
			name     = "Fuerza Aeronaval No. 2" 
			strength = 20
			type     = naval_bomber 
			model    = 1
		} 
    } 
} 
