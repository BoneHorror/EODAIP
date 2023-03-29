 
 ############################## 
 # Country definition for BRA # 
 ############################## 
  

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = BRA 
	ai = "bra_1936.ai"
	ai_settings = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
	dissent = 20
	# Resource Reserves 
	energy                 = 2040
	metal                  = 1020
	rare_materials         = 510
	transports = 60
	oil                    = 500 
	supplies               = 500 
	money                  = 20 
	manpower               = 105 
      
   capital                = 2075 
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 5 
     political_left    = 3 
     free_market       = 8 
     freedom           = 7 
     professional_army = 3 
     defense_lobby     = 6 
     interventionism   = 3 
    } 
   nationalprovinces      = {  2001 2002 2003 2004 2005 2006 2057 2058 2059 2060 2061 2062 2065 2066 2067 2068 2069 2070 2071 2072 2073 2074 2075 2076  } 
   ownedprovinces         = {  2001 2002 2003 2004 2005 2006 2057 2058 2059 2060 2061 2062 2065 2066 2067 2068 2069 2070 2071 2072 2073 2074 2075 2076  } 
   controlledprovinces    = {  2001 2002 2003 2004 2005 2006 2057 2058 2059 2060 2061 2062 2065 2066 2067 2068 2069 2070 2071 2072 2073 2074 2075 2076  } 

	# Group C 1933 techs 
	# ###################### 
	techapps = {  
	# Fighter  
	4500 4510 4520 4530 4540 4550 4010  
	# Bomber 
	4600 4610 4620 4630 4120
	# Multirole fighter
	4300 4310 4320 4330
	# Strategic bomber
	4800 4810
	# SEAPLANES
	4740 4750 4760
	# Supply 
	1910 1920 1930 1940 1950 1960
	# Engineers
	1830 1840 1850 1860
	# Armoured Car  
	2860 2870 2880 2020
	# Tank 
	7600 7610 2620 2010 2630
	# Field Artillery 
	2290 2300 2310
	# Static Anti-Air Artillery 
	2800 2450 21180 21190
	# Anti-Air Artillery Brigade 
	2810 2820 2510
	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 1350 1360   
	# Mountain Division 
	1160 1170 1180 1190 1200 1210 1220 1230 1240
	# Computers & cryptography
	5310 54010 54020 54030 5316 5326
	# Agriculture  
	5700 5710 5010
	# Manufactoring
	5810 5820 5050 5830
	# Construction Engineering
	5800 5080   
	# Destroyer 
	3010 3020 3030 3040
	# Light Cruiser 
	3110 3120 3130
	# Heavy Cruiser 
	3210 3220 3230
	# Battleship 
	3410 3420 3430 3440 3450 3456 3460
	# Submarine 
	3610 3620
	# Torpedo & ASW 18
	3720 3730 3736 3740 3900
	# Troopships
	3810
	# Medicine
	5600 5610 5620
	# Hospital System
	14000 14010

	# Air Doctrines
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
   diplomacy = 
   {  relation = {  tag = ARG value = -10  } 
     relation = {  tag = BOL value = 10  } 
     relation = {  tag = CHL value = 10  } 
     relation = {  tag = COL value = 10  } 
     relation = {  tag = ECU value = 10  } 
     relation = {  tag = GER value = 50  } 
     relation = {  tag = IRE value = 20  } 
     relation = {  tag = PAR value = 10  } 
     relation = {  tag = POR value = 75  } 
     relation = {  tag = PRU value = 10  } 
     relation = {  tag = SOV value = -50  } 
     relation = {  tag = URU value = 125  } 
     relation = {  tag = USA value = 120  } 
     relation = {  tag = VEN value = 10  } 
    } 
   SpyInfo                = {  country = "BRA" NumberOfSpies = 5  } 
   headofstate            = {  type = 9 id = 160001  } 
   headofgovernment       = {  type = 9 id = 160002  } 
   foreignminister        = {  type = 9 id = 160003  } 
   armamentminister       = {  type = 9 id = 160004  } 
   ministerofsecurity     = {  type = 9 id = 160005  } 
   ministerofintelligence = {  type = 9 id = 160006  } 
   chiefofstaff           = {  type = 9 id = 160007  } 
   chiefofarmy            = {  type = 9 id = 160008  } 
   chiefofnavy            = {  type = 9 id = 160009  } 
   chiefofair             = {  type = 9 id = 160010  } 
   landunit = 
   {  id       = {  type = 18000 id = 1  } 
     name     = "1a Regiao militar" 
     location = 2075 
     Division = 
     {  id       = {  type = 18000 id = 2  } 
       name     = "1a Divisão de Exercito" 
       strength = 75
       type     = infantry 
	   model    = 7
       extra    = artillery 
	   brigade_model = 4
      } 
    } 
   landunit = 
   {  id       = {  type = 18000 id = 3  } 
     name     = "2a Regiao militar" 
     location = 2059 
     Division = 
     {  id       = {  type = 18000 id = 4  } 
       name     = "2a Divisão de Exercito" 
       strength = 75
       type     = infantry 
	   model    = 7
      } 
    } 
   landunit = 
   {  id       = {  type = 18000 id = 5  } 
     name     = "3a Regiao militar" 
     location = 2058 
     Division = 
     {  id       = {  type = 18000 id = 6  } 
       name     = "3a Divisão de Exercito" 
       strength = 75
       type     = infantry 
	   model    = 7
      } 
     Division = 
     {  id       = {  type = 18000 id = 7  } 
       name     = "1a Divisão de Cavalaria" 
       strength = 60
       type     = cavalry
	   model    = 8
      } 
     Division = 
     {  id       = {  type = 18000 id = 8  } 
       name     = "2a Divisão de Cavalaria" 
       strength = 60
       type     = cavalry
	   model    = 8
      } 
     Division = 
     {  id       = {  type = 18000 id = 9  } 
       name     = "3a Divisão de Cavalaria" 
       strength = 60
       type     = cavalry
	   model    = 8
      } 
    } 
   landunit = 
   {  id       = {  type = 18000 id = 10  } 
     name     = "4a Regiao militar" 
     location = 2076 
     Division = 
     {  id       = {  type = 18000 id = 11  } 
       name     = "4a Divisão de Exercito" 
       strength = 75
       type     = infantry 
	   model    = 7
      } 
    } 
   landunit = 
   {  id       = {  type = 18000 id = 12  } 
     name     = "5/6/7/8a Regiao militar" 
     location = 2071 
     Division = 
     {  id       = {  type = 18000 id = 13  } 
       name     = "5a Divisão de Exercito" 
       strength = 30
       type     = infantry 
	   model    = 8
      } 
    } 
   landunit = 
   {  id       = {  type = 18000 id = 14  } 
     name     = "9a Regiao militar" 
     location = 2060 
     Division = 
     {  id       = {  type = 18000 id = 15  } 
       name     = "Brigada Mista" 
       strength = 25
       type     = infantry 
	   model    = 6
      } 
    } 

	navalunit = { 
		id = { type = 18000 id = 16 } 
		name = "Marinha do Brasil" 
		location = 2058 
		base = 2058 
		division = { 
			id = { type = 18000 id = 17 } 
			name = "NRB São Paulo" 
			type = battleship 
			model = 2
			extra1 = naval_fire_controll_l
			brigade_model1 = 0
 			extra2 = naval_improved_hull_l
			brigade_model2 = 0
			extra3 = naval_anti_air_l
			brigade_model3 = 0
			} 
		division = { 
			id = { type = 18000 id = 18 } 
			name = "NRB Floriano" 
			type = heavy_cruiser
			model = 1 
			} 
		division = { 
			id = { type = 18000 id = 19 } 
			name = "NRB Bahia" 
			type = light_cruiser 
			model = 1
 			extra1 = naval_torpedoes_s
			brigade_model1 = 0
			extra2 = naval_anti_air_s
			brigade_model2 = 0
			} 
		division = { 
			id = { type = 18000 id = 20 } 
			name = "NRB Rio Grande do Sul" 
			type = light_cruiser 
			model = 1
 			extra1 = naval_torpedoes_s
			brigade_model1 = 0
			extra2 = naval_anti_air_s
			brigade_model2 = 0
			} 
		division = { 
			id = { type = 18000 id = 21 } 
			name = "NRB Maranhao" 
			type = destroyer
			model = 2
			strength = 20
			max_strength = 20 
			} 
		division = { 
			id = { type = 18000 id = 22 } 
			name = "1 Flotilha de Contratorpedeiros" 
			type = destroyer 
			model = 1
			strength = 100
			} 
		division = { 
			id = { type = 18000 id = 23 } 
			name = "2 Flotilha de Contratorpedeiros" 
			type = destroyer 
			model = 1
			strength = 80
			} 
		division = { 
			id = { type = 18000 id = 24 } 
			name = "NRB Humayta" 
			type = submarine
			model = 3
			strength = 20
			max_strength = 20
			} 
		division = { 
			id = { type = 18000 id = 25 } 
			name = "1 Flotilha de Submarinos" 
			type = submarine
			model = 1
			strength = 60
			} 
		division = { 
			id = { type = 18000 id = 26 } 
			name = "1 Flotilha de Transportes" 
			type = transport 
			model = 1
			} 
		}  

   airunit = 
   {  id       = {  type = 18000 id = 27  } 
     name     = "Serviço de Aviaçao Militar" 
     location = 2059 
     base     = 2059 
     Division = 
     {  id       = {  type = 18000 id = 28  } 
       name     = "1. Grupo de Aviaçao" 
       strength = 35 
       type     = multi_role
       model    = 3
      } 
    } 
   airunit = 
   {  id       = {  type = 18000 id = 29  } 
     name     = "Serviço de Aviaçao Naval" 
     location = 2058 
     base     = 2058 
     Division = 
     {  id       = {  type = 18000 id = 30  } 
       name     = "2. Grupo de Aviaçao" 
       strength = 10 
       type     = naval_bomber
       model    = 1
      } 
    } 

    division_development =    
   {  name  = "NRB Minas Geraes"  
      type  = battleship  
      model = 3  
      cost  = 1.1  
	unitcost = no
	new_model = no
      id    = {  type = 18000 id = 31  }  
      date  = {  year = 1935 month = june day = 29  }  
	extra1 = naval_fire_controll_l
	brigade_model1 = 0
 	extra2 = naval_improved_hull_l
	brigade_model2 = 0
	extra3 = naval_anti_air_l
	brigade_model3 = 0
     }  
  } 
 
