 
 ############################## 
 # Country definition for TAN # 
 ############################## 
  
 country = 
 {  tag                    = TAN 
	puppet                 = SOV 
	ai = "tan_1936.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes } }
	dissent = 20
	# Resource Reserves 
	energy                 = 300
	metal                  = 150
	rare_materials         = 75
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
	capital                = 1119 
	manpower               = 2 
   SpyInfo                = {  country = "TAN" NumberOfSpies = 1  } 
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 1 
     political_left    = 10 
     freedom           = 3 
     free_market       = 3 
     professional_army = 2 
     defense_lobby     = 5 
     interventionism   = 5 
    } 
   nationalprovinces      = {  1119  } 
   ownedprovinces         = {  1119  } 
   controlledprovinces    = {  1119  } 
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
#Early Agriculture
5700 

# Land Doctrine WWI - Entente line
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
#Landdoctrine ww2 - none?

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

 } 
 inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = MON value = 200  } 
     relation = {  tag = SIK value = 125  } 
     relation = {  tag = SOV value = 200  } 
     relation = {  tag = TAN value = 50  } 
    } 
   headofstate            = {  type = 9 id = 435001  } 
   headofgovernment       = {  type = 9 id = 435002  } 
   foreignminister        = {  type = 9 id = 435003  } 
   armamentminister       = {  type = 9 id = 435004  } 
   ministerofsecurity     = {  type = 9 id = 435005  } 
   ministerofintelligence = {  type = 9 id = 435006  } 
   chiefofstaff           = {  type = 9 id = 435007  } 
   chiefofarmy            = {  type = 9 id = 435008  } 
   chiefofnavy            = {  type = 9 id = 435009  } 
   chiefofair             = {  type = 9 id = 435010  } 

# No data found. Had probably no army as it was under Soviet 'protection'.
#
#   landunit = 
#   {  location = 1119 
#     id       = {  type = 31600 id = 1  } 
#     name     = "1ya Tunska Armiya" 
#     Division = 
#     {  id       = {  type = 31600 id = 2  } 
#       name     = "1. Tuvanska Strelkovaya Diviziya" 
#       type     = infantry 
#	   model    = 5
#       strength = 20 
#      } 
#    } 
   } 
 
 
