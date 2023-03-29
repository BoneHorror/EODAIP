 
 ############################## 
 # Country definition for DOM # 
 ############################## 
  

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = DOM 
	ai = "dom_1936.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes } }
	dissent = 20
	# Resource Reserves 
	energy                 = 360
	metal                  = 180
	rare_materials         = 90
	transports = 10
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
	manpower               = 2 
	capital                = 1780 
      
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 5 
     political_left    = 2 
     free_market       = 8 
     freedom           = 5 
     professional_army = 2 
     defense_lobby     = 5 
     interventionism   = 1 
    } 

   nationalprovinces      = {  1780  } 
   ownedprovinces         = {  1780  } 
   controlledprovinces    = {  1780  } 
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
#Modern Agriculture  
5700 5710 5010
#Improved Construction Engineering 
5800 5080 

#Naval Infantry
#1560 
#Medicine
5600
#Troopships
3810


#Engineers
1830 
# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
 } 
 inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = CUB value = 50  } 
     relation = {  tag = HAI value = -30  } 
     relation = {  tag = USA value = 125  } 
    } 
   SpyInfo                = {  country = "DOM" NumberOfSpies = 1  } 
   headofstate            = {  type = 9 id = 320001  } 
   headofgovernment       = {  type = 9 id = 320002  } 
   foreignminister        = {  type = 9 id = 320003  } 
   armamentminister       = {  type = 9 id = 320004  } 
   ministerofsecurity     = {  type = 9 id = 320005  } 
   ministerofintelligence = {  type = 9 id = 320006  } 
   chiefofstaff           = {  type = 9 id = 320007  } 
   chiefofarmy            = {  type = 9 id = 320008  } 
   chiefofnavy            = {  type = 9 id = 320009  } 
   chiefofair             = {  type = 9 id = 320010  } 
   landunit = 
   {  id       = {  type = 28000 id = 75  } 
     name     = "Ejercito Nacional de la Republica Dominicana" 
     location = 1780 
     Division = 
     {  id       = {  type = 28000 id = 7500  } 
       name     = "Ejercito Nacional" 
       strength = 15 
       type     = infantry 
       model    = 6
      } 
    } 
  } 
 