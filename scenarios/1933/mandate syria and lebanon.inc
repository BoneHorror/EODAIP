 
 ############################## 
 # Country definition for U04 French Mandate for Syria and the Lebanon # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 

 country = 
 {  tag                    = U04 
	ai = "u04_1936.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes } }
	dissent = 20
	capital                = 1019 
	puppet                 = FRA 
	# Resource Reserves 
	energy                 = 60
	metal                  = 30
	rare_materials         = 15
	oil                    = 500 
	supplies               = 2000 
	money                  = 50 
	manpower               = 0 
	transports             = 100 
	escorts                = 10 
      
   diplomacy = 
   {   
   relation = {  tag = FRA value = 50 access = yes  }  
    } 
   SpyInfo                = {  country = "U04" NumberOfSpies = 3  } 
  
    
   nationalprovinces      = {   } 
   ownedprovinces         = {  1014 1015 1016 1017 1018 1019 1020 1021 1054 } 
   controlledprovinces    = {  1014 1015 1016 1017 1018 1019 1020 1021 1054 } 
   
  # FRA 1936 techs 
   # ###################### 
   techapps               = {  
#Great War Infantry Division  
1010  1020 1030 1040 1050 1060    
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240  
#1930 Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 1350 1360 1370

#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960

#Basic Armoured Car  
2860 2870 2880 2020

#Great War Heavy Field Artillery 
2290 2300 2310 
#Early Anti-Tank Artillery 
#2400
#Early Static Anti-Air Artillery 
2800 2450
#SW Tank 
7600 7610
#Great War Destroyer 
3010 3020 3030 3040
#Interwar Light Cruiser 
3110 3120 3130 3140
#Early Heavy Cruiser 
3210 3220 3230

#Interwar Fighter  
4500 4510 4520 4530 4540 4550 4010
# Interwar Bomber 
4600 4610 4620 4630 4120

#Improved Construction Engineering 
5800 5080 
 
#Engineers
1830 1840 
#Firepower Focus Doctrine 
6010 
#Grand Battleplan Doctrine 
6030
#Torpedo & ASW 18
3720 3730 3736 3740 3750 3900
#Troopships
3810
#Medicine
5600
# Land Doctrines WW1 - Entente (default)
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
     professional_army = 2 
     defense_lobby     = 7 
     interventionism   = 2 
    } 
    landunit = 
   {  id       = {  type = 13500 id = 1001  } 
     name     = "Troupes du Levant" 
     location = 1016 
     Division = 
     {  id       = {  type = 13500 id = 1002  } 
       name     = "Forces supplétives du Levant" 
	   model    = 3
       strength = 40 
       type     = militia
      } 
     Division = 
     {  id       = {  type = 13500 id = 1003  } 
       name     = "Subdivision de Damas" 
       strength = 100 
       type     = militia
	   model    = 4
	extra = cavalry_brigade
	brigade_model = 6
      } 
    } 
    landunit = 
   {  id       = {  type = 13500 id = 1004  } 
     name     = "Subdivision de Beyrouth" 
     location = 1019 
     Division = 
     {  id       = {  type = 13500 id = 1005  } 
       name     = "Subdivision de Beyrouth" 
       strength = 60 
       type     = militia
	   model    = 4
      } 
    } 
  }
