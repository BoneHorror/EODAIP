 
 ############################## 
 # Country definition for NIC # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = NIC 
	ai = "nic_1936.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes } }
	puppet      = USA 
	dissent = 20
	# Resource Reserves 
	energy                 = 240
	metal                  = 120
	rare_materials         = 60
	transports = 10
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
	capital                = 2080 
	manpower               = 0 
      
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 7 
     political_left    = 2 
     freedom           = 4 
     free_market       = 7 
     professional_army = 2 
     defense_lobby     = 8 
     interventionism   = 8 
    } 

   nationalprovinces      = {  2080 2082  } 
   ownedprovinces         = {  2080 2082  } 
   controlledprovinces    = {  2080 2082  } 
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
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240
#Interbellum Supply 
1910 1920 1930 1940 1950 1960
#Early Static Anti-Air Artillery 
2800 2450 21180 21190
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Modern Agriculture  
5700 5710 5010
#Improved Construction Engineering 
5800 5080     
# Land Doctrines WW1 - Entente Line
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
#Landdoctrine ww2 - none

#Medicine
5600 5610
#Engineers
1830 1840 
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
} 
inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = HON value = 100  } 
     relation = {  tag = USA value = 100  } 
    } 
   SpyInfo                = {  country = "NIC" NumberOfSpies = 2  } 
   headofstate            = {  type = 9 id = 315001  } 
   headofgovernment       = {  type = 9 id = 315002  } 
   foreignminister        = {  type = 9 id = 315003  } 
   armamentminister       = {  type = 9 id = 315004  } 
   ministerofsecurity     = {  type = 9 id = 315005  } 
   ministerofintelligence = {  type = 9 id = 315006  } 
   chiefofstaff           = {  type = 9 id = 315007  } 
   chiefofarmy            = {  type = 9 id = 315008  } 
   chiefofnavy            = {  type = 9 id = 315009  } 
   chiefofair             = {  type = 9 id = 315010  } 
   landunit = 
   {  id       = {  type = 11600 id = 45  } 
     name     = "Guardia Nacional" 
     location = 2080 
     Division = 
     {  id       = {  type = 11600 id = 4500  } 
       name     = "Guardia Nacional" 
       strength     = 50 
       type     = militia
	   model    = 3
      } 
    } 
  } 
 
