 
 ############################## 
 # Country definition for PER # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = PER 
	ai = "per_1936.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
	dissent = 20
	# Resource Reserves 
	energy                 = 540
	metal                  = 270
	rare_materials         = 135
	transports = 20
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
	capital                = 1085 
	manpower               = 154 
      
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     freedom           = 3 
     free_market       = 5 
     professional_army = 5 
     defense_lobby     = 5 
     interventionism   = 5 
    } 

   nationalprovinces      = {  1080 1081 1082 1083 1084 1085 1086 1087 1088 1089 1090 1091 1092 1093 1094 1095  } 
   ownedprovinces         = {  1080 1081 1082 1083 1084 1085 1086 1087 1088 1089 1090 1091 1092 1093 1094 1095  } 
   controlledprovinces    = {  1080 1081 1082 1083 1084 1085 1086 1087 1088 1089 1090 1091 1092 1093 1094 1095  } 
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
#Interbellum Supply 
1910 1920 1930 1940 1950 1960
#Medicine
5600
#Engineers
1830 1840 
#1916 Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Early Agriculture
5700
# Land Doctrines WWI - Entente Line (default)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
# Land Doctrines WW2 - none

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
 } 
 inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = AFG value = 25  } 
     relation = {  tag = DEN value = 50  } 
     relation = {  tag = ENG value = 25  } 
     relation = {  tag = IRQ value = 125  } 
     relation = {  tag = SAU value = 100  } 
     relation = {  tag = SOV value = -20  } 
     relation = {  tag = SWE value = 50  } 
     relation = {  tag = TUR value = -50  } 
    } 
   SpyInfo                = {  country = "PER" NumberOfSpies = 5  } 
   headofstate            = {  type = 9 id = 150001  } 
   headofgovernment       = {  type = 9 id = 150002  } 
   foreignminister        = {  type = 9 id = 150003  } 
   armamentminister       = {  type = 9 id = 150004  } 
   ministerofsecurity     = {  type = 9 id = 150005  } 
   ministerofintelligence = {  type = 9 id = 150006  } 
   chiefofstaff           = {  type = 9 id = 150007  } 
   chiefofarmy            = {  type = 9 id = 150008  } 
   chiefofnavy            = {  type = 9 id = 150009  } 
   chiefofair             = {  type = 9 id = 150010  } 
   landunit = 
   {  location = 1085 
     name     = "Tehran Dastebandi" 
     id       = {  type = 16600 id = 1  } 
     Division = 
     {  id    = {  type = 16600 id = 2  } 
       name  = "5. Sarbaze Piyade" 
       type  = infantry 
	   model    = 6
       extra = artillery 
	   brigade_model = 1
	strength = 50
      } 
    } 
   landunit = 
   {  location = 1084 
     name     = "Kurdestan Dastebandi" 
     id       = {  type = 16600 id = 3  } 
     Division = 
     {  id    = {  type = 16600 id = 4  } 
       name  = "1. Sarbaze Piyade" 
       type  = infantry 
	   model    = 5
       extra = cavalry_brigade 
	   brigade_model = 6
	strength = 35
      } 
    } 
   landunit = 
   {  location = 1089 
     name     = "Khuzestan Dastebandi" 
     id       = {  type = 16600 id = 5  } 
     Division = 
     {  id    = {  type = 16600 id = 6  } 
       name  = "2. Sarbaze Piyade" 
       type  = infantry 
	   model    = 5
	strength = 35
      } 
    } 
   landunit = 
   {  location = 1088 
     name     = "Fars Dastebandi" 
     id       = {  type = 16600 id = 7  } 
     Division = 
     {  id    = {  type = 16600 id = 8  } 
       name  = "3. Sarbaze Piyade" 
       type  = infantry 
	   model    = 5
	strength = 35
      } 
    } 
   landunit = 
   {  location = 1093 
     name     = "Makran Dastebandi" 
     id       = {  type = 16600 id = 9  } 
     Division = 
     {  id    = {  type = 16600 id = 10  } 
       name  = "4. Sarbaze Piyade" 
       type  = infantry 
	   model    = 5
	strength = 35
      } 
    } 
   landunit = 
   {  location = 1092 
     name     = "Khorasan Dastebandi" 
     id       = {  type = 16600 id = 11  } 
     Division = 
     {  id    = {  type = 16600 id = 12  } 
       name  = "Khorasan Sarbaze Piyade" 
       type  = militia
	   model    = 3
	strength = 50
      } 
    } 
  } 
 
