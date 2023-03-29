 
 ############################## 
 # Country definition for LIT # 
 ############################## 
   
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = LIT 
	ai = "lit_1936.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
	dissent = 20
	capital                = 262 
	manpower               = 20 
	# Resource Reserves 
	energy                 = 480
	metal                  = 240
	rare_materials         = 120
	transports = 10
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
      
   diplomacy = 
   {  relation = {  tag = ENG value = 65  } 
     relation = 
     {  tag        = EST 
       value      = 40 
       guaranteed = {  day = 29 month = december year = 1932  } 
      } 
     relation = {  tag = FIN value = 80  } 
     relation = {  tag = CZE value = 65  }
     relation = {  tag = USA value = 65  }
     relation = {  tag = SWE value = 75  }
     relation = {  tag = DEN value = 75  }
     relation = {  tag = FRA value = 65  } 
     relation = {  tag = GER value = -50  } 
     relation = 
     {  tag        = LAT 
       value      = 40 
       guaranteed = {  day = 29 month = december year = 1932  } 
      } 
     relation = {  tag = POL value = -125  } 
     relation = {  tag = SOV value = 75  } 
    } 
   SpyInfo                = {  country = "LIT" NumberOfSpies = 3  } 
   nationalprovinces      = {  252 255 258 259 260 261 262 263 } 
   ownedprovinces         = {  259 260 261 262 263  } 
   controlledprovinces    = {  259 260 261 262 263  } 
   # Eastern Minor Tech '36 
   # Group D 1936 techs 
   # ###################### 
   # GW fighter 
   techapps               = {  
#Interwar Fighter  
4500 4510 4520 4530 4540 4550 4010
#Basic Armoured Car  
2860 2870 2880 2020
#Great War Heavy Field Artillery 
2290 2300 2310 2900
#SW Tank 
7600 7610
#Great War Infantry Division  
1010  1020 1030 1040 1050 1060 1070 1080
#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960 1970
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340
#Early Mountain Division 
1160  1170 1180 1190 1200 1210
#Engineers
1830 1840 1850 
#Early Static Anti-Air Artillery 
2800 2450 21180
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Medicine
5600 5610
#Scientific Management
5810
#Troopships
3810
#Modern Agriculture  
5700 5710 5010
#Improved Construction Engineering 
5800 5080 

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
# Land Doctrine WW1 - Entente Line (default)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
} 
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 5 
     political_left    = 2 
     freedom           = 5 
     free_market       = 5 
     professional_army = 5 
     defense_lobby     = 5 
     interventionism   = 5 
    } 

   headofstate            = {  type = 9 id = 140001  } 
   headofgovernment       = {  type = 9 id = 140002  } 
   foreignminister        = {  type = 9 id = 140003  } 
   armamentminister       = {  type = 9 id = 140004  } 
   ministerofsecurity     = {  type = 9 id = 140005  } 
   ministerofintelligence = {  type = 9 id = 140006  } 
   chiefofstaff           = {  type = 9 id = 140007  } 
   chiefofarmy            = {  type = 9 id = 140008  } 
   chiefofnavy            = {  type = 9 id = 140009  } 
   chiefofair             = {  type = 9 id = 140010  } 
   # Firepower 
   # ########################################### 
   # ###Lithuanian Army######################### 
   # ########################################### 
   landunit = 
   {  id       = {  type = 26500 id = 1  } 
     location = 262 
     name     = "Lietuvos Sausumos kariuomene" 
     Division = 
     {  id       = {  type = 26500 id = 2  } 
       name     = "1. Divizija" 
       type     = infantry 
	   model = 7
       strength = 45
      } 
     Division = 
     {  id       = {  type = 26500 id = 3  } 
       name     = "2. Divizija" 
       type     = infantry 
	   model = 7
        strength = 45
      } 
     Division = 
     {  id       = {  type = 26500 id = 4  } 
       name     = "3. Divizija" 
       type     = infantry 
       strength = 45
	   model = 7
      } 
     Division = 
     {  id       = {  type = 26500 id = 5  } 
       name     = "Kavalerijos brigada" 
       type     = cavalry
	   model = 7
       strength = 20
      } 
    }  

airunit = 
   {  id       = {  type = 26500 id = 6  } 
     location = 262 
     base     = 262 
     name     = "Lietuvos Karo Aviacijos" 
     Division = 
     {  id       = {  type = 26500 id = 7  } 
       name     = "Aviacijos Korpusu" 
       type     = interceptor 
       model    = 6
       strength = 35
      } 
    }
  } 
 
