############################## 
 # Country definition for SWE # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = SWE 
	ai = "swe_1933.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
	dissent = 20
	# Resource Reserves 
	energy                 = 1320
	metal                  = 660
	rare_materials         = 330
	transports = 240
	oil                    = 500 
	supplies               = 500 
	money                  = 20 
	manpower               = 4 
	capital                = 2159 
      
   diplomacy = 
   {  relation = {  tag = BEL value = 100  } 
     relation = {  tag = DEN value = 75  } 
     relation = {  tag = ENG value = 80  } 
     relation = {  tag = FIN value = 150  } 
     relation = {  tag = GER value = 50  } 
     relation = {  tag = HOL value = 100  } 
     relation = {  tag = LUX value = 100  } 
     relation = {  tag = NOR value = 150  } 
     relation = {  tag = PER value = 50  } 
     relation = {  tag = USA value = 75  } 
	 relation = {  tag = LIT value = 75  }
	 relation = {  tag = LAT value = 75  }
	 relation = {  tag = EST value = 75  }	 
    } 
   SpyInfo                = {  country = "SWE" NumberOfSpies = 6  } 
   nationalprovinces      = {   526 2152 2153 2154 2155 2156 2157 2158 2159 2160 2161 2162 2163 2164 2165 2166 2167  } 
   ownedprovinces         = {   2152 2153 2154 2155 2156 2157 2158 2159 2160 2161 2162 2163 2164 2165 2166 2167  } 
   controlledprovinces    = {   2152 2153 2154 2155 2156 2157 2158 2159 2160 2161 2162 2163 2164 2165 2166 2167  } 
   
	# Group C 1933 techs 
	# ###################### 
	techapps = {  
	# Early Fighter  
	4500 4510 4520 4530 4540 4550 4010 4020  
	# Bomber 
	4600 4610 4620 4630 4120 4130
	# Naval Bomber 
	4700 4710
	# Multirole fighter
	4300 4310 4320 4330
	# Strategic bomber
	4800 4810 4820
	# Supply 
	1910 1920 1930 1940 1950 1960 1970 1980
	# Engineers
	1830 1840 1850 1860
	# Armoured Car  
	2860 2870 2880 2020
	# Tank 
	7600 7610 2620 2010 2630
	# Field Artillery 
	2290 2300 2310 
	# Heavy Cruiser 
	3210 3220 3230
	# Static Anti-Air Artillery 
	2800 2450 21180 21190 
	# Anti-Air Artillery Brigade 
	2810 2820 2510
	# Infantry Division  
	1010  1020 1030 1040 1050 1060 
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 
	# Mountain Division 
	1160  1170 1180 1190 1200 1210 1220 1230 1240
	# Agriculture 
	5700 5710 5010 5020
	# Computers & cryptography
	5310 54010 54020 54030 5316 5326
	# Manufacturing
	5810 5820 5050 5830 5060
	# Construction Engineering 
	5800 5080 5090  
	# Destroyer 
	3010 3020 3030 3040 3050 
	# Light Cruiser 
	3110 3120 3130 3140
	# Submarine 
	3610 3620 3630
	# Battlecruiser  
	3310 3320 3330
	# Battleship 
	3410 3420 3430 3440 3450 3456 3460
	# Faculty of Atomic Research 
	5470  
	# Torpedo & ASW 18
	3720 3730 3736 3740 3750 3900
	# Troopships
	3810
	# Medicine
	5600 5610 5620 5630
	# Air Doctrines 
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 
	# Naval Doctrines 
	8010 8020 8040 8050
	# Land Doctrines WWI - Entente line
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
	# Landdoctrine ww2 - none
	#Carrier Pigeons
	30020 30030
}
 
	inventions = { 3000027 }
	policy = 
	{  date              = {  year = 0 month = january day = 0  } 
		democratic        = 10 
		political_left    = 10 
		freedom           = 6 
		free_market       = 7 
		professional_army = 3 
		defense_lobby     = 5 
		interventionism   = 4 
	} 

	headofstate            = {  type = 9 id = 40001  } 
	headofgovernment       = {  type = 9 id = 40012  } 
	foreignminister        = {  type = 9 id = 40017  } 
	armamentminister       = {  type = 9 id = 40026  } 
	ministerofsecurity     = {  type = 9 id = 40037  } 
	ministerofintelligence = {  type = 9 id = 40006  } 
	chiefofstaff           = {  type = 9 id = 40007  } 
	chiefofarmy            = {  type = 9 id = 40008  } 
	chiefofnavy            = {  type = 9 id = 40009  } 
	chiefofair             = {  type = 9 id = 40010  } 
	
   # 5 infantry divisions. 
   landunit = 
   {  location = 2152 
     name     = "Södra Distrikt" 
     id       = {  type = 29600 id = 1  } 
     Division = 
     {  id    = {  type = 29600 id = 2  } 
       name  = "Södra Arméfördelning" 
       type  = infantry 
       model = 7 
       strength = 30
	extra = anti_air
	brigade_model = 2
      } 
    } 
   landunit = 
   {  location = 2153 
     name     = "Västra Distrikt" 
     id       = {  type = 29600 id = 3  } 
     Division = 
     {  id    = {  type = 29600 id = 4  } 
       name  = "Västra Arméfördelning" 
       type  = infantry 
       model = 7 
       strength = 30
	extra = artillery
	brigade_model = 4
      } 
    } 
   landunit = 
   {  location = 2159 
     name     = "Östra Distrikt" 
     id       = {  type = 29600 id = 5  } 
     Division = 
     {  id    = {  type = 29600 id = 6  } 
       name  = "Östra Arméfördelning" 
       type  = infantry 
       model = 7 
       strength = 30
	extra = engineer
	brigade_model = 2
      } 
     Division = 
     {  id    = {  type = 29600 id = 7  } 
       name  = "Östra Brigade" 
       type  = infantry 
       model = 7 
       strength = 15
	extra = artillery
	brigade_model = 4
      } 
    } 
   landunit = 
   {  location = 2165 
     name     = "Norra Distrikt" 
     id       = {  type = 29600 id = 8  } 
     Division = 
     {  id    = {  type = 29600 id = 9  } 
       name  = "Norra Arméfördelning" 
       type  = infantry 
       model = 7 
       strength = 30
      } 
    } 
   landunit = 
   {  location = 2166 
     name     = "Övre Norrland Militär Område" 
     id       = {  type = 29600 id = 10  } 
     Division = 
     {  id    = {  type = 29600 id = 11  } 
       name  = "Övre Norrlandstrupper" 
       type  = infantry 
       model = 7 
	strength = 15
      } 
    } 
   landunit = 
   {  location = 2156 
     name     = "Gotland Militär Område" 
     id       = {  type = 29600 id = 12  } 
     Division = 
     {  id    = {  type = 29600 id = 13  } 
       name  = "Gotlandstrupper" 
       type  = garrison
       model = 3 
	strength = 5
      } 
    } 
    
	navalunit = { 
		id = { type = 29600 id = 14 } 
		name = "Marinen" 
		location = 2159 
		base = 2159 
		division = { 
			id = { type = 29600 id = 15 } 
			name = "HMS Äran" 
			type = heavy_cruiser 
			model = 1 
			} 
		division = { 
			id = { type = 29600 id = 16 } 
			name = "HMS Wasa" 
			type = heavy_cruiser 
			model = 1 
			} 
		division = { 
			id = { type = 29600 id = 17 } 
			name = "HMS Tapperheten" 
			type = heavy_cruiser 
			model = 1 
			} 
		division = { 
			id = { type = 29600 id = 18 } 
			name = "HMS Manligheten" 
			type = heavy_cruiser 
			model = 1 
			} 
		division = { 
			id = { type = 29600 id = 19 } 
			name = "HMS Oden" 
			type = heavy_cruiser 
			model = 1 
			} 
		division = { 
			id = { type = 29600 id = 20 } 
			name = "HMS Thor" 
			type = heavy_cruiser 
			model = 1 
			} 
		division = { 
			id = { type = 29600 id = 21 } 
			name = "HMS Oscar II" 
			type = heavy_cruiser 
			model = 1 
			} 
		division = { 
			id = { type = 29600 id = 22 } 
			name = "HMS Sverige" 
			type = heavy_cruiser 
			model = 1
			extra1 = naval_fire_controll_s
			brigade_model1 = 0
			} 
		division = { 
			id = { type = 29600 id = 23 } 
			name = "HMS Drottning Victoria" 
			type = heavy_cruiser 
			model = 1
			extra1 = naval_fire_controll_s
			brigade_model1 = 0
			} 
		division = { 
			id = { type = 29600 id = 24 } 
			name = "HMS Gustav V" 
			type = heavy_cruiser 
			model = 1 
			extra1 = naval_fire_controll_s
			brigade_model1 = 0
			} 
		division = { 
			id = { type = 29600 id = 25 } 
			name = "HMS Fylgia" 
			type = light_cruiser 
			model = 1
			extra1 = naval_improved_hull_s
			brigade_model1 = 0 
			} 
		division = { 
			id = { type = 29600 id = 26 } 
			name = "5. Jagaresflottilj" 
			type = destroyer 
			model = 4 
			strength = 40
			} 
		division = {
			id = { type = 29600 id = 27 }
			name = "4. Jagaresflottilj"
			type = destroyer
			model = 3
			strength = 80
			}
		division = { 
			id = { type = 29600 id = 28 } 
			name = "3. Jagaresflottilj" 
			type = destroyer 
			model = 2
			strength = 80
			} 
		division = { 
			id = { type = 29600 id = 29 } 
			name = "2. Jagaresflottilj" 
			type = destroyer 
			model = 1
			strength = 100
			} 
		division = { 
			id = { type = 29600 id = 30 } 
			name = "1. Jagaresflottilj" 
			type = destroyer 
			model = 0
			strength = 60
			} 
		division = { 
			id = { type = 29600 id = 31 } 
			name = "4. Ubåtsflottilj" 
			type = submarine 
			model = 3 
			strength = 60
			} 
		division = { 
			id = { type = 29600 id = 32 } 
			name = "3. Ubåtsflottilj" 
			type = submarine 
			model = 2 
			strength = 80
			} 
		division = { 
			id = { type = 29600 id = 33 } 
			name = "2. Ubåtsflottilj" 
			type = submarine 
			model = 2 
			strength = 100
			} 
		division = { 
			id = { type = 29600 id = 34 } 
			name = "1. Ubåtsflottilj" 
			type = submarine 
			model = 1 
			strength = 100
			} 
		division = { 
			id = { type = 29600 id = 35 } 
			name = "1. Trängsflottilj" 
			type = transport 
			model = 1
			} 
		division = { 
			id = { type = 29600 id = 36 } 
			name = "2. Trängsflottilj" 
			type = transport 
			model = 1
			}
		division = { 
			id = { type = 29600 id = 37 } 
			name = "3. Trängsflottilj" 
			type = transport 
			model = 1
			}
		} 

   airunit = 
   {  location = 2159 
     base     = 2159 
     name     = "Flygvapnet" 
     id       = {  type = 29600 id = 39  } 
     Division = 
     {  id    = {  type = 29600 id = 40  } 
       name  = "1. Flyggruppen" 
       type  = interceptor 
       model = 5
	strength = 30
      } 
    } 

    division_development =  
    {  name  = "HMS Gotland"  
      type  = light_cruiser  
      model = 3  
	new_model = no
      cost  = 0.2  
      id    = {  type = 29600 id = 38  }  
      date  = {  year = 1934 month = december day = 14  } 
      extra1 = floatplane
      brigade_model1 = 5 	  
     }  
  } 
 
