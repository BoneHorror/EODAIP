 
 ############################## 
 # Country definition for AUS # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = AUS 
	ai = "aus_1936.ai"
	ai_settings = { flags = { MOB1 = yes MOB2 = yes } }
	dissent = 20
	# HACK to make sure that Germany gets the whole manpower pool, all units and resources on annex. 
	# Unwanted side-effect: Will never accept peace with Germany. 
	regular_id   = GER 
	intrinsic_gov_type     = social_liberal 
	manpower               = 0 
	capital                = 195 
	# Resource Reserves 
	energy                 = 1140
	metal                  = 570
	rare_materials         = 285
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
      
   diplomacy = 
   {  relation = {  tag = ENG value = 75  } 
     relation = {  tag = FIN value = 55  } 
     relation = {  tag = FRA value = -10  } 
     relation = {  tag = GER value = 0  } 
     relation = 
     {  tag        = HUN 
       value      = 100 
       guaranteed = {  day = 29 month = december year = 1932  }  
      } 
     relation = {  tag = IRE value = 10  } 
     relation = {  tag = ITA value = 125  } 
     relation = {  tag = SCH value = 50  } 
    } 
   SpyInfo                = {  country = "AUS" NumberOfSpies = 6  } 
   nationalprovinces      = {  186 187 188 189 190 191 192 193 194 195 401 402 } 
   ownedprovinces         = {  186 187 188 189 190 191 192 193 194 195  } 
   controlledprovinces    = {  186 187 188 189 190 191 192 193 194 195  } 
   claimedprovinces 	  = {  197 279 } 
   # Western Minor Tech '36 
   # Group C 1936 techs 
   # ###################### 
   techapps               = {  
#Early Fighter  
4500 4510 4520 4530 4540 4550 4010 4020   
#Interwar Bomber 
4600 4610 4620 4630 4120   
#Multirole fighter
4300 4310 4320 4330
#ww1 strategic bomber
4800 4810 4820
#Engineers
1830 1840 1850 1860
#Medicine
5600 5610 5620 5630
#Basic Armoured Car  
2860 2870 2880 2020   
#Tankette 
7600 7610 2620 2010 2630 2640   
#Great War Heavy Field Artillery 
2290 2300 2310    
#Early Static Anti-Air Artillery 
2800 2450 21180 21190  
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Great War Infantry Division  
1010  1020 1030 1040 1050 1060 
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240 
#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960 1970 1980
#Great War Hospital System 
14000 14010 14020
#Mechanized Agriculture 
5700 5710 5010 5020
#Manufactoring
5810 5820 5050 5830 5060
#Improved Construction Engineering 
5800 5080 5090
#Basic Oil Refining 
#5190 
#Computers & cryptografi
5310 54010 54020 54030 5316 5326
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
# Great War Land Doctrines (central powers)
6500 6510 6530 6550 6590 6600 6620 6650 6670 6610 6680 6690 6700 6710 6910
#Carrier Pigeons
30020 30030
} 
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 5 
     political_left    = 1 
     free_market       = 8 
     freedom           = 7 
     professional_army = 2 
     defense_lobby     = 5 
     interventionism   = 1 
    } 	
	
   headofstate            = {  type = 9 id = 115001  } 
   headofgovernment       = {  type = 9 id = 115150  } # Dollfuss
   foreignminister        = {  type = 9 id = 115003  } 
   armamentminister       = {  type = 9 id = 115004  } 
   ministerofsecurity     = {  type = 9 id = 115005  } 
   ministerofintelligence = {  type = 9 id = 115006  } 
   chiefofstaff           = {  type = 9 id = 115007  } 
   chiefofarmy            = {  type = 9 id = 115008  } 
   chiefofnavy            = {  type = 9 id = 115009  } 
   chiefofair             = {  type = 9 id = 115010  } 
   landunit = 
   {  id       = {  type = 14000 id = 9000  } 
     location = 188 
     name     = "Brigadekommando Nr.1" 
     Division = 
     {  id       = {  type = 14000 id = 9001  } 
       name     = "Brigadekommando Nr.1" 
       type     = infantry 
       model    = 7 
       strength = 30
      } 
    } 
   landunit = 
   {  id       = {  type = 14000 id = 9002  } 
     location = 195 
     name     = "Brigadekommando Nr.2" 
     Division = 
     {  id       = {  type = 14000 id = 9003  } 
       name     = "Brigadekommando Nr.2" 
       type     = infantry 
	   strength = 25
       model    = 7
       extra    = artillery 
	   brigade_model = 3
      } 
    } 
   landunit = 
   {  id       = {  type = 14000 id = 9004  } 
     location = 193 
     name     = "Brigadekommando Nr.3" 
     Division = 
     {  id       = {  type = 14000 id = 9005  } 
       name     = "Brigadekommando Nr.3" 
       type     = infantry 
       model    = 7 
       strength = 25
      } 
    } 
   landunit = 
   {  id       = {  type = 14000 id = 9006  } 
     location = 187 
     name     = "Brigadekommando Nr.4" 
     Division = 
     {  id       = {  type = 14000 id = 9007  } 
       name     = "Brigadekommando Nr.4" 
       type     = bergsjaeger
       model    = 7 
       strength = 25
      } 
    } 
   landunit = 
   {  id       = {  type = 14000 id = 9008  } 
     location = 189 
     name     = "Brigadekommando Nr.5" 
     Division = 
     {  id       = {  type = 14000 id = 9009  } 
       name     = "Brigadekommando Nr.5" 
       type     = bergsjaeger
       model    = 7 
       strength = 25
      } 
    } 
   landunit = 
   {  id       = {  type = 14000 id = 9010  } 
     location = 191 
     name     = "Brigadekommando Nr.6" 
     Division = 
     {  id       = {  type = 14000 id = 9011  } 
       name     = "Brigadekommando Nr.6" 
       type     = bergsjaeger
       model    = 7 
       strength = 30
      } 
    } 
  } 
 