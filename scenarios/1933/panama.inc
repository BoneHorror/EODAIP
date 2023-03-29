 
 ############################## 
 # Country definition for PAN # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = PAN 
	# Resource Reserves 
	ai = "pan_1936.ai"
	ai_settings	= { flags = { MOB1 = yes } }
	dissent = 20
	energy                 = 240
	metal                  = 120
	rare_materials         = 60
	transports = 30
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
	capital                = 2078 
	manpower               = 0 
      
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 7 
     political_left    = 5 
     freedom           = 4 
     free_market       = 4 
     professional_army = 1 
     defense_lobby     = 4 
     interventionism   = 4 
    } 

   nationalprovinces      = {  889 2077 2078  } 
   ownedprovinces         = {  2077 2078  } 
   controlledprovinces    = {  2077 2078  } 
   # ROTW Minor Tech '36 
   # Group E 1936 techs 
   # ###################### 
   # GW fighter 
   techapps               = {  
#Interwar Fighter  
4500 4510 4520 4530
#Interwar Armoured Car  
2860
#Light Field Artillery  
2290
#SW Tank 
7600 7610
#1916 lgt. Infantry Division  
1010  1020 1030 1040 1050 1060
#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960 
#1916 Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Medicine
5600
# Modern Agriculture
5700 5710 5010
  
#Engineers
1830 1840 
# Basic Construction Engineering
5800 5080 
# Improved Construction Engineering 
5090 
# Land Doctrines WW1 - Entente (default)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
# Land Doctrines WW2 - none

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 

  } 
  inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = USA value = 175  } 
     relation = {  tag = COL value = 50  } 
    } 
   SpyInfo                = {  country = "PAN" NumberOfSpies = 2  } 
   headofstate            = {  type = 9 id = 405001  } 
   headofgovernment       = {  type = 9 id = 405002  } 
   foreignminister        = {  type = 9 id = 405003  } 
   armamentminister       = {  type = 9 id = 405004  } 
   ministerofsecurity     = {  type = 9 id = 405005  } 
   ministerofintelligence = {  type = 9 id = 405006  } 
   chiefofstaff           = {  type = 9 id = 405007  } 
   chiefofarmy            = {  type = 9 id = 405008  } 
   chiefofnavy            = {  type = 9 id = 405009  } 
   chiefofair             = {  type = 9 id = 405010  } 
   # Improved Construction Engineering 

   landunit = 
   {  id       = {  type = 14600 id = 1001  } 
     name     = "Policia Nacional" 
     location = 2078
     Division = 
     {  id       = {  type = 14600 id = 1002  } 
       name     = "Policia Nacional" 
       type     = militia
	   model    = 3
       strength = 20 
      } 
    } 
  } 
 
