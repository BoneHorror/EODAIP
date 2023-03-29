 
 ############################## 
 # Country definition for DEN # 
 ############################## 
  

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = DEN 
	ai = "den_1936.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
	dissent = 20
	manpower               = 10 
	capital                = 294 
	# Resource Reserves 
	energy                 = 660
	metal                  = 330
	rare_materials         = 165
	transports = 230
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
      
   diplomacy = 
   {  relation = {  tag = BEL value = 100  } 
     relation = {  tag = ENG value = 100  } 
     relation = {  tag = FIN value = 75  } 
     relation = {  tag = GER value = 25  } 
     relation = {  tag = HOL value = 100  } 
     relation = {  tag = LUX value = 100  } 
     relation = {  tag = NOR value = 150  } 
     relation = {  tag = PER value = 50  } 
     relation = {  tag = SWE value = 75  } 
     relation = {  tag = USA value = 75  } 
	 relation = {  tag = LIT value = 75  }
	 relation = {  tag = LAT value = 75  }
	 relation = {  tag = EST value = 75  }
    } 
   SpyInfo                = {  country = "DEN" NumberOfSpies = 3  } 
   nationalprovinces      = {  1 2 3 216 217 218 219 220 294 1783  } 
   ownedprovinces         = {  1 2 3 216 217 218 219 220 294 1783  } 
   controlledprovinces    = {  1 2 3 216 217 218 219 220 294 1783  } 
   # Western Minor Tech '36 
   # Group C 1936 techs 
   # ###################### 
   techapps               = {  
#Early Fighter  
4500 4510 4520 4530 4540 4550 4010 4020   
#Interwar Bomber 
4600 4610 4620 4630 4120   
#Great War Tank
7600 7610 2620 2010   
#Great War Heavy Field Artillery 
2290 2300 2310    
#Early Static Anti-Air Artillery 
2800 2450 21180 21190 21200   
#Basic Anti-Air Artillery Brigade 
2810 2820 2510   
#Great War Infantry Division  
1010 1020 1030 1040 1050 1060    
#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960 1970 1980
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340    
#Early Mountain Division 
1160 1170 1180 1190 1200 1210 1220 1230 1240   
#Engineers
1830 1840 1850 1860
#Mechanized Agriculture 
5700 5710 5010 5020
#Computers & cryptografi
5310 54010 54020 54030 5316 5326
#Manufactoring
5810 5820 5050 5830 5060
#Improved Construction Engineering 
5800 5080 5090
#Basic Oil Refining 
#5190 
#Faculty of Atomic Research 
5470

#Naval Doctrines
8010 8020 8040 8050 
#Great War Destroyer 
3010 3020 3030 3040
#Early Light Cruiser 
3110 3120 3130
#Early Heavy Cruiser 
3210 3220 3230
#Short Range Submarine 
3610 3620 3630
#Multirole fighter
4300 4310 4320 4330
#ww1 strategic bomber
4800 4810 4820
#ww1 navalbomber
4700 4710
#Torpedo & ASW 18
3720 3730 3736 3740 3750 3900
#Troopships
3810
#Medicine
5600 5610 5620 5630
# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
#Carrier Pigeons
30020 30030
} 
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 10 
     political_left    = 10 
     free_market       = 6 
     freedom           = 8 
     professional_army = 3 
     defense_lobby     = 1 
     interventionism   = 3 
    } 

   headofstate            = {  type = 9 id = 75001  } 
   headofgovernment       = {  type = 9 id = 75002  } 
   foreignminister        = {  type = 9 id = 75003  } 
   armamentminister       = {  type = 9 id = 75004  } 
   ministerofsecurity     = {  type = 9 id = 75005  } 
   ministerofintelligence = {  type = 9 id = 75006  } 
   chiefofstaff           = {  type = 9 id = 75007  } 
   chiefofarmy            = {  type = 9 id = 75008  } 
   chiefofnavy            = {  type = 9 id = 75009  } 
   chiefofair             = {  type = 9 id = 75010  } 
   landunit = 
   {  location = 294 
     name     = "Sjællenske Division" 
     id       = {  type = 27000 id = 40  } 
     Division = 
     {  id       = {  type = 27000 id = 41  } 
       name     = "1. 'Sjællenske' Division" 
       type     = infantry 
       model    = 7
       strength = 25
	extra = anti_air
	brigade_model = 1
      } 
    } 
   landunit = 
   {  location = 220 
     name     = "Jydske Division" 
     id       = {  type = 27000 id = 42  } 
     Division = 
     {  id       = {  type = 27000 id = 43  } 
       name     = "2. 'Jydske' Division" 
       type     = infantry 
       model    = 7
       strength = 25
	extra = engineer
	brigade_model = 2
      } 
    } 

	navalunit = { 
		id = { type = 27000 id = 44 } 
		name = "Kongelinge Danske Marine" 
		location = 294 
		base = 294 
		division = { 
			id = { type = 27000 id = 45 } 
			name = "KDM Olfert Fischer" 
			type = heavy_cruiser 
			model = 1 
			} 
		division = { 
			id = { type = 27000 id = 46 } 
			name = "KDM Peder Skram" 
			type = heavy_cruiser 
			model = 1 
			} 
		division = { 
			id = { type = 27000 id = 2428 } 
			name = "KDM Niels Juel" 
			type = light_cruiser 
			model = 2 
			} 
		division = { 
			id = { type = 27000 id = 2426 } 
			name = "1. Torpedobådsflotille" 
			type = destroyer
			model = 0 
			} 
		division = { 
			id = { type = 27000 id = 2427 } 
			name = "2. Torpedobådsflotille" 
			type = destroyer
			model = 0 
			} 
		division = { 
			id = { type = 27000 id = 2429 } 
			name = "3. Torpedobådsflotille" 
			type = destroyer
			model = 0 
			} 
		division = { 
			id = { type = 27000 id = 2430 } 
			name = "4. Torpedobådsflotille" 
			type = destroyer
			model = 0 
			} 
		division = { 
			id = { type = 27000 id = 47 } 
			name = "1. Ubådsflotille" 
			type = submarine 
			model = 1 
			} 
		division = { 
			id = { type = 27000 id = 48 } 
			name = "2. Ubådsflotille" 
			type = submarine 
			model = 2 
			strength = 60
			} 
		division = { 
			id = { type = 27000 id = 2431 } 
			name = "3. Ubådsflotille" 
			type = submarine 
			model = 3 
			strength = 60
			} 
		division = { 
			id = { type = 27000 id = 2432 } 
			name = "1. Transportsflotille" 
			type = transport
			model = 1 
			} 
		division = { 
			id = { type = 27000 id = 2433 } 
			name = "2. Transportsflotille" 
			type = transport
			model = 1 
			} 
		} 

	airunit = { 
		id = { type = 27000 id = 2424 } 
		name = "Marinens Flyvevaesen" 
		location = 294 
		base = 294 
		division = { 
			id = { type = 27000 id = 2435 } 
			name = "1. Gruppe" 
			type = interceptor
			model = 6 
			strength = 20
			} 
		} 

    division_development =  
    {  name  = "5. Torpedobådsflotille"  
      type  = destroyer  
      model = 0 
	new_model = no 
      cost  = 0.1  
      id    = {  type = 27000 id = 2434  }  
      date  = {  year = 1934 month = october day = 19  }  
     }  

  } 
 