 
 ############################## 
 # Country definition for GUA # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = GUA 
	ai = "gua_1936.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
	dissent = 20
	manpower               = 2 
	# Resource Reserves 
	energy                 = 600
	metal                  = 300
	rare_materials         = 150
	transports = 10
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
	capital                = 2088 
      
   SpyInfo                = {  country = "GUA" NumberOfSpies = 2  } 
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 5 
     political_left    = 2 
     free_market       = 6 
     freedom           = 4 
     professional_army = 3 
     defense_lobby     = 5 
     interventionism   = 4 
    } 

   nationalprovinces      = {  2086 2087 2088  } 
   ownedprovinces         = {  2087 2088  } 
   controlledprovinces    = {  2087 2088  } 
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
#Interbellum Supply 
1910 1920 1930 1940 1950 1960
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240
#Engineers
1830 1840
#Early Static Anti-Air Artillery 
2800 2450 21180 21190
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Modern Agriculture  
5700 5710 5010
#Improved Construction Engineering 
5800 5080  

#Medicine
5600 5610

#Troopships
3810
# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 
} 
inventions = { 3000027 }
   # San Salvador 
   diplomacy = 
   {  relation = {  tag = HON value = 100  } 
     relation = {  tag = USA value = 125  } 
     relation = {  tag = ENG value = 50  } 
    } 
   headofstate            = {  type = 9 id = 305001  } 
   headofgovernment       = {  type = 9 id = 305002  } 
   foreignminister        = {  type = 9 id = 305003  } 
   armamentminister       = {  type = 9 id = 305004  } 
   ministerofsecurity     = {  type = 9 id = 305005  } 
   ministerofintelligence = {  type = 9 id = 305006  } 
   chiefofstaff           = {  type = 9 id = 305007  } 
   chiefofarmy            = {  type = 9 id = 305008  } 
   chiefofnavy            = {  type = 9 id = 305009  } 
   chiefofair             = {  type = 9 id = 305010  } 
   landunit = 
   {  id       = {  type = 16500 id = 65  } 
     name     = "Ejercito de Guatemala" 
     location = 2088 
     Division = 
     {  id       = {  type = 16500 id = 6500  } 
       name     = "Ejercito de Guatemala" 
       strength = 50 
       type     = infantry 
	   model    = 6
      } 
    } 
  } 
 