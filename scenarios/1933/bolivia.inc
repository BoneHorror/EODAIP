 
 ############################## 
 # Country definition for BOL # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = BOL 
	ai = "bol_1936.ai"
	ai_settings = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes} }
	dissent = 20
	manpower               = 19 
	# Resource Reserves 
	energy                 = 360
	metal                  = 180
	rare_materials         = 90
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
	capital                = 2020 
      
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 7 
     political_left    = 5 
     free_market       = 8 
     freedom           = 7 
     professional_army = 7 
     defense_lobby     = 8 
     interventionism   = 5 
    } 
   nationalprovinces      = {  2002 2019 2020 2021 2024 2046 2063 2064  } 
   ownedprovinces         = {  2019 2020 2021 2063 2064  } 
   controlledprovinces    = {  2019 2020 2021 2063 2064  } 
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
#Medicine
5600 5610 5620
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
# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
#Carrier Pigeons
30020 30030
} 
inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = ARG value = 50  } 
     relation = {  tag = BRA value = 10  } 
     relation = {  tag = CHL value = -50  } 
     relation = {  tag = COL value = 1  } 
     relation = {  tag = ECU value = -20  } 
     relation = {  tag = GER value = 15  } 
     relation = {  tag = PAR value = -50  } 
     relation = {  tag = PRU value = 30  } 
     relation = {  tag = URU value = 10  } 
     relation = {  tag = USA value = 85  } 
     relation = {  tag = VEN value = -15  } 
    } 
   SpyInfo                = {  country = "BOL" NumberOfSpies = 3  } 
   headofstate            = {  type = 9 id = 205217  } 
   headofgovernment       = {  type = 9 id = 205218  } 
   foreignminister        = {  type = 9 id = 205003  } 
   armamentminister       = {  type = 9 id = 205004  } 
   ministerofsecurity     = {  type = 9 id = 205005  } 
   ministerofintelligence = {  type = 9 id = 205006  } 
   chiefofstaff           = {  type = 9 id = 205007  } 
   chiefofarmy            = {  type = 9 id = 205008  } 
   chiefofnavy            = {  type = 9 id = 205009  } 
   chiefofair             = {  type = 9 id = 205010  } 
   # People's Army 
   landunit = 
   {  id       = {  type = 17000 id = 40  } 
     name     = "Region militar del Norte" 
     location = 2020 
     Division = 
     {  id       = {  type = 17000 id = 4000  } 
       name     = "Division de Infantería 1" 
       strength = 100 
       type     = infantry 
       model    = 6
       extra    = artillery 
	   brigade_model = 3
      } 
    }
   landunit = 
   {  id       = {  type = 17000 id = 4001  } 
     name     = "Region militar del Sur" 
     location = 2021 
     Division = 
     {  id       = {  type = 17000 id = 4002  } 
       name     = "Division de Infantería 2" 
       strength = 100 
       type     = infantry 
       model    = 6
      } 
     Division = 
     {  id       = {  type = 17000 id = 4003  } 
       name     = "Division de Infantería 3" 
       strength = 100 
       type     = infantry 
       model    = 6
      } 
     Division = 
     {  id       = {  type = 17000 id = 4004  } 
       name     = "Division de Infantería 4" 
       strength = 100 
       type     = infantry 
       model    = 6
      } 
    }
   landunit = 
   {  id       = {  type = 17000 id = 4005  } 
     name     = "Region militar Central" 
     location = 2063 
     Division = 
     {  id       = {  type = 17000 id = 4006  } 
       name     = "Division de Infantería 5" 
       strength = 100 
       type     = infantry 
       model    = 6
      } 
     Division = 
     {  id       = {  type = 17000 id = 4007  } 
       name     = "Division de Infantería 6" 
       strength = 100 
       type     = infantry 
       model    = 6
      } 
    }
  } 
 