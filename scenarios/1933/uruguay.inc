 
 ############################## 
 # Country definition for URU # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = URU 
	ai = "uru_1936.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes } }
	dissent = 20
	# Resource Reserves 
	energy                 = 480
	metal                  = 240
	rare_materials         = 120
	transports = 10
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
	capital                = 2052 
	manpower               = 2 
      
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 5 
     political_left    = 2 
     freedom           = 5 
     free_market       = 5 
     professional_army = 2 
     defense_lobby     = 4 
     interventionism   = 1 
    } 

   nationalprovinces      = {  2051 2052  } 
   ownedprovinces         = {  2051 2052  } 
   controlledprovinces    = {  2051 2052  } 
   # ROTW Minor Tech '36 
   # Group D 1936 techs 
   # ###################### 
   # GW fighter 
   techapps               = {  
 #Interwar Fighter  
 4500 4510 4520 4530 4540 4550 4010
#Basic Armoured Car  
2860 2870 2880 2020
#Great War Heavy Field Artillery 
2290 2300 2310
#SW Tank 
7600 7610
#Great War Infantry Division  
1010  1020 1030 1040 1050 1060 
#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240   
#Early Static Anti-Air Artillery 
2800 2450 21180 21190
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Mechanized Agriculture
5700 5710 5010 5020
#Manufactoring
5810 5820 5050
#Improved Construction Engineering
5800 5080  
#Basic Oil Refining
 #5190 

 #Naval Infantry
#1560 1570
#Engineers
1830 1840 1850 
#Medicine
5600 5610 
#Torpedo & ASW 18
3720 3730 3736 3740 3750 3900
#Troopships
3810
# Land Doctrines WWI - Entente line
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
#Landdoctrine ww2 - none?

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

} 
inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = ARG value = -50  } 
     relation = {  tag = BOL value = 10  } 
     relation = {  tag = BRA value = 125  } 
     relation = {  tag = CHL value = 20  } 
     relation = {  tag = COL value = 10  } 
     relation = {  tag = ECU value = 10  } 
     relation = {  tag = PAR value = 20  } 
     relation = {  tag = PRU value = 25  } 
     relation = {  tag = SOV value = -100  } 
     relation = {  tag = USA value = 100  } 
     relation = {  tag = VEN value = 10  } 
    } 
   SpyInfo                = {  country = "URU" NumberOfSpies = 4  } 
   headofstate            = {  type = 9 id = 195001  } 
   headofgovernment       = {  type = 9 id = 195002  } 
   foreignminister        = {  type = 9 id = 195003  } 
   armamentminister       = {  type = 9 id = 195004  } 
   ministerofsecurity     = {  type = 9 id = 195005  } 
   ministerofintelligence = {  type = 9 id = 195006  } 
   chiefofstaff           = {  type = 9 id = 195007  } 
   chiefofarmy            = {  type = 9 id = 195008  } 
   chiefofnavy            = {  type = 9 id = 195009  } 
   chiefofair             = {  type = 9 id = 195010  } 
   landunit = 
   {  id       = {  type = 13700 id = 1  } 
     name     = "Ejercito Nacional" 
     location = 2052 
     Division = 
     {  id       = {  type = 13700 id = 2  } 
       name     = "1a Division de Infanteria" 
       strength = 25 
       type     = infantry 
	   model    = 6
      } 
	  Division = 
     {  id       = {  type = 13700 id = 3  } 
       name     = "2a Division de Infanteria" 
       strength = 25
       type     = infantry
	   model    = 6
      } 
    }
	
	navalunit = { 
		id = { type = 13700 id = 4 } 
		name = "Armada Nacional" 
		location = 2052 
		base = 2052 
		division = { 
			id = { type = 13700 id = 5 } 
			name = "ROU Montevideo" 
			type = light_cruiser
			model = 0 
			} 	
  } 
 
}