 
 ############################## 
 # Country definition for SAL # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = SAL 
	ai = "sal_1936.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }
	dissent = 20
	# Resource Reserves 
	energy                 = 240
	metal                  = 120
	rare_materials         = 60
	transports = 10
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
	manpower               = 14 
	capital                = 2079 
      
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 5 
     political_left    = 2 
     freedom           = 5 
     free_market       = 5 
     professional_army = 4 
     defense_lobby     = 5 
     interventionism   = 3 
    } 
   nationalprovinces      = {  2079  } 
   ownedprovinces         = {  2079  } 
   controlledprovinces    = {  2079  } 
   # ROTW Minor Tech '36 
   # Group D 1936 techs 
   # ###################### 
   # GW fighter 
   techapps               = {
#Interwar Fighter  
4500 4510 4520 4530 4540 4550 4010
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Great War Heavy Field Artillery 
2290 2300 2310 
#SW Tank 
7600 7610
#Great War Infantry Division  
1010  1020 1030 1040 1050 1060 
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240
#Interbellum Supply 
1910 1920 1930 1940 1950 1960
#Early Static Anti-Air Artillery 
2800 2450 21180 21190 
#Modern Agriculture  
5700 5710 5010
#Basic Construction Engineering 
5800 5080
#Basic Oil Refining 
#5190
#Medicine
5600
#Engineers
1830 1840

#Land Doctrines WWI - Entente Line
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
#Land Doctrines WWII - none

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
   } 
   inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = HON value = 100  } 
     relation = {  tag = USA value = 100  } 
    } 
   SpyInfo                = {  country = "SAL" NumberOfSpies = 2  } 
   #SpyInfo                = {  country = "MEX" NumberOfSpies = 3  } 
   #SpyInfo                = {  country = "USA" NumberOfSpies = 3  } 
   #SpyInfo                = {  country = "PAN" NumberOfSpies = 3  } 
   #SpyInfo                = {  country = "DOM" NumberOfSpies = 3  } 
   #SpyInfo                = {  country = "CUB" NumberOfSpies = 3  } 
   #SpyInfo                = {  country = "HON" NumberOfSpies = 3  } 
   headofstate            = {  type = 9 id = 345001  } 
   headofgovernment       = {  type = 9 id = 345002  } 
   foreignminister        = {  type = 9 id = 345003  } 
   armamentminister       = {  type = 9 id = 345004  } 
   ministerofsecurity     = {  type = 9 id = 345005  } 
   ministerofintelligence = {  type = 9 id = 345006  } 
   chiefofstaff           = {  type = 9 id = 345007  } 
   chiefofarmy            = {  type = 9 id = 345008  } 
   chiefofnavy            = {  type = 9 id = 345009  } 
   chiefofair             = {  type = 9 id = 345010  } 
   landunit = 
   {  id       = {  type = 21600 id = 70  } 
     name     = "Ejercito Salvadoreno" 
     location = 2079 
     Division = 
     {  id       = {  type = 21600 id = 7000  } 
       name     = "Ejercito Salvadoreno" 
       strength = 25 
       type     = infantry 
	   model    = 6
      } 
    } 
   } 
 
