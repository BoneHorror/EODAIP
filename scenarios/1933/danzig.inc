 
 ############################## 
 # Country definition for U06 Free City of Danzig # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
 province = 
 {  id         = 181 
   anti_air   = 2 
   naval_base = {  size =  8 current_size =  8  } 
   air_base   = {  size =  4 current_size =  4  } 
  }              # Danzig 
  
 country = 
 {  tag                    = U06 
	ai = "u06_1936.ai"
	ai_settings	= { flags = { MOB1 = yes } }
	dissent = 20
	capital                = 181 
	puppet      = POL 
	# Resource Reserves 
	energy                 = 100 
	metal                  = 100 
	rare_materials         = 50 
	oil                    = 50 
	supplies               = 100 
	money                  = 50 
	manpower               = 0
      
   transports             = 40 
   escorts                = 0 
   free = {  ic = -3  } 
   diplomacy = 
   {   
   relation = {  tag = GER value = 80 access = no  }  
    } 
   SpyInfo                = {  country = "U06" NumberOfSpies = 3  } 
  
    
   nationalprovinces      = {  181  } 
   ownedprovinces         = {  181  } 
   controlledprovinces    = {  181  } 
   
  # FRA 1936 techs 
   # ###################### 
   techapps               = { 
#Great War Infantry Division  
1010  1020 1030 1040 1050 1060 
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240
#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960 1970 1980
#Interwar Fighter  
4500 4510 4520 4530 4540 4550 4010
#Land Doctrines
6560 6030
#1930 Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 1350 1360 1370
#Basic Armoured Car  
2860 2870 2880 2020
#Great War Heavy Field Artillery 
2290 2300 2310
#Early Static Anti-Air Artillery 
2800 2450
#Great War Destroyer 
3010 3020 3030 3040
#Interwar Light Cruiser 
3110 3120 3130 3140
#Early Heavy Cruiser 
3210 3220 3230
#Interwar Bomber 
4600 4610 4620 4630 4120
#Manufactoring
5810 5820 5050 5830 5060
#Computers & cryptografi
5310 54010 54020 54030 5316 5326
#Improved Construction Engineering 
5800 5080 
#Medicine
5600 5610 5620 5630
#Torpedo & ASW 18
3720 3730 3736 3740 3750 3900
#Troopships
3810
# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
#Naval Doctrines
8010 8020 8050
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

} 
 inventions = { 3000027 }  
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 7 
     political_left    = 3 
     free_market       = 8 
     freedom           = 10 
     professional_army = 1 
     defense_lobby     = 3 
     interventionism   = 2 
    } 
  
   headofstate            = {  type = 9 id = 845011  } #Ernst Ziehm
   headofgovernment       = {  type = 9 id = 845012  } #Ernst Ziehm
   foreignminister        = {  type = 9 id = 845013  } #Ernst Ziehm
   armamentminister       = {  type = 9 id = 845004  } 
   ministerofsecurity     = {  type = 9 id = 845005  } 
   ministerofintelligence = {  type = 9 id = 845006  } 
   chiefofstaff           = {  type = 9 id = 845007  } 
   chiefofarmy            = {  type = 9 id = 845008  } 
   chiefofnavy            = {  type = 9 id = 845009  } 
   chiefofair             = {  type = 9 id = 845010  } 

	navalunit = { 
		id = { type = 13500 id = 9000 } 
		name = "Freie Stadt Danzigs Handelsmarine" 
		location = 181
		base = 181
		division = { 
			id = { type = 13500 id = 9001 } 
			name = "Handelsmarine" 
			type = transport 
			model = 1 
			} 
		}      
  }