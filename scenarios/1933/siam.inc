
 ############################## 
 # Country definition for SIA # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = SIA 
	ai = "sia_1936.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
	dissent = 20
	name = SIA36
	# Resource Reserves 
	energy                 = 540
	metal                  = 270
	rare_materials         = 135
	transports = 10
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
	capital                = 1423 
	manpower               = 6 
      
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 4 
     political_left    = 3 
     freedom           = 3 
     free_market       = 3 
     professional_army = 5 
     defense_lobby     = 5 
     interventionism   = 5 
    } 

   nationalprovinces      = {  1422 1423 1424 1425 1426 1427 1428 1429 1430 1431  } 
   ownedprovinces         = {  1422 1423 1424 1425 1426 1427 1428 1429 1430 1431  } 
   controlledprovinces    = {  1422 1423 1424 1425 1426 1427 1428 1429 1430 1431  }
   claimedprovinces = { 1391 1394 1398 1400 1401 1402 1404 1405 1409 1412 1413 1433 1434 }  
   # ROTW Minor Tech '36 
   # Group D 1936 techs 
   # ###################### 
   # GW fighter 
   techapps               = {  
#Interwar Fighter  
4500 4510 4520 4530 4540 4550 4010   
#Interwar Bomber 
4600 4610 4620 4630 4120   
#Basic Armoured Car  
2860 2870 2880 2020   
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
#Basic Anti-Air Artillery Brigade 
2810 2820 2510  
#Manufactoring
5810 5820 
#Improved Construction Engineering 
5800 5080 

#Great War Destroyer 
3010 3020 3030 3040 
#Early Light Cruiser 
3110 3120 3130
#Short Range Submarine 
3610 3620 
#Naval Doctrines
8010 8050  
#Naval Infantry
#1560 
#Engineers
1830 1840 
#Torpedo & ASW 18
3720 3730 3736 3740 3750 3900
#Troopships
3810
#Medicine
5600 5610
#Land Doctrines WWI - Entente line
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
#Landdoctrine ww2 - none

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

} 
inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = ENG value = 70  } 
     relation = {  tag = FRA value = -100  } 
     relation = {  tag = JAP value = 75  } 
     relation = {  tag = MAN value = 75  } 
    } 
   SpyInfo                = {  country = "SIA" NumberOfSpies = 5  } 
   headofstate            = {  type = 9 id = 290102  } #Rama VII
   headofgovernment       = {  type = 9 id = 290002  } 
   foreignminister        = {  type = 9 id = 290003  } 
   armamentminister       = {  type = 9 id = 290004  } 
   ministerofsecurity     = {  type = 9 id = 290005  } 
   ministerofintelligence = {  type = 9 id = 290006  } 
   chiefofstaff           = {  type = 9 id = 290007  } 
   chiefofarmy            = {  type = 9 id = 290008  } 
   chiefofnavy            = {  type = 9 id = 290009  } 
   chiefofair             = {  type = 9 id = 290010  } 
   landunit = 
   {  location = 1424 
     name     = "Royal Thai Army" 
     id       = {  type = 23600 id = 1  } 
     Division = 
     {  id       = {  type = 23600 id = 2  } 
       name     = "1. Infantry Division" 
       type     = infantry 
	   model = 6
       strength = 50 
	extra = cavalry_brigade
	brigade_model = 7
      } 
     Division = 
     {  id       = {  type = 23600 id = 3  } 
       name     = "2. Infantry Division" 
       type     = infantry 
	   model = 6
       strength = 40
	extra = engineer
	brigade_model = 1 
      } 
     Division = 
     {  id       = {  type = 23600 id = 4  } 
       name     = "3. Infantry Division" 
       type     = infantry 
	   model = 6
       strength = 70 
      } 
     Division = 
     {  id       = {  type = 23600 id = 5  } 
       name     = "4. Infantry Division" 
       type     = infantry 
	   model = 6
       strength = 70 
      } 
    } 

   navalunit = 
   {  location = 1424 
     base     = 1424 
     name     = "Royal Thai Navy" 
     id       = {  type = 23600 id = 6  } 
     Division = 
     {  id    = {  type = 23600 id = 7  } 
       name  = "1. Destroyer Flotilla" 
       type  = destroyer 
       model = 1
	strength = 60 
      } 
     Division = 
     {  id    = {  type = 23600 id = 8  } 
       name  = "1. Torpedo Boat Flotilla" 
       type  = destroyer 
       model = 0
	strength = 80
      } 
    } 

   airunit = 
   {  location = 1424 
     base     = 1424 
     name     = "Royal Thai Airforce" 
     id       = {  type = 23600 id = 10  } 
     Division = 
     {  id       = {  type = 23600 id = 11  } 
       name     = "Wing 1" 
       type     = interceptor 
       model    = 5 
       strength = 30 
      } 
     Division = 
     {  id       = {  type = 23600 id = 12  } 
       name     = "Wing 2" 
       type     = tactical_bomber 
       model    = 2
       strength = 10 
      } 
    } 
  } 
 
