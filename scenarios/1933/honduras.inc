 
 ############################## 
 # Country definition for HON # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = HON 
	ai = "hon_1936.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes } }
	dissent = 20
	manpower               = 0 
	# Resource Reserves 
	energy                 = 240
	metal                  = 120
	rare_materials         = 60
	transports = 20
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
	capital                = 2085 
      
   SpyInfo                = {  country = "HON" NumberOfSpies = 1  } 
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 5 
     political_left    = 2 
     free_market       = 6 
     freedom           = 4 
     professional_army = 2 
     defense_lobby     = 5 
     interventionism   = 4 
    } 

   nationalprovinces      = {  2084 2085  } 
   ownedprovinces         = {  2084 2085  } 
   controlledprovinces    = {  2084 2085  } 
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
#Naval Infantry
#1560 1570
#Engineers
1830 1840 1850  
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
# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
  } 
  inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = ENG value = 50  } 
     relation = {  tag = GUA value = 100  } 
     relation = {  tag = NIC value = 100  } 
     relation = {  tag = SAL value = 100  } 
     relation = {  tag = USA value = 100  } 
    } 
   headofstate            = {  type = 9 id = 355001  } 
   headofgovernment       = {  type = 9 id = 355002  } 
   foreignminister        = {  type = 9 id = 355003  } 
   armamentminister       = {  type = 9 id = 355004  } 
   ministerofsecurity     = {  type = 9 id = 355005  } 
   ministerofintelligence = {  type = 9 id = 355006  } 
   chiefofstaff           = {  type = 9 id = 355007  } 
   chiefofarmy            = {  type = 9 id = 355008  } 
   chiefofnavy            = {  type = 9 id = 355009  } 
   chiefofair             = {  type = 9 id = 355010  } 
   landunit = 
   {  id       = {  type = 19500 id = 55  } 
     name     = "Ejercito de Honduras" 
     location = 2085 
     Division = 
     {  id       = {  type = 19500 id = 5500  } 
       name     = "Ejercito de Honduras" 
       strength = 20
       type     = infantry 
	   model    = 6

      } 
    } 
  } 
 