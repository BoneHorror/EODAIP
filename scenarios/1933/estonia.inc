 
 ############################## 
 # Country definition for EST # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = EST 
	ai = "est_1936.ai"
	ai_settings = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
	dissent = 20
	# Resource Reserves 
	energy                 = 360
	metal                  = 180
	rare_materials         = 90
	transports = 80
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
	manpower               = 0 
	capital                = 270 
      
   diplomacy = 
   {  relation = {  tag = ENG value = 65  } 
     relation = {  tag = FIN value = 120  } 
     relation = {  tag = FRA value = 65  } 
     relation = {  tag = GER value = 10  } 
     relation = 
     {  tag        = LAT 
       value      = 150 
       guaranteed = {  day = 29 month = december year = 1932  } 
      } 
     relation = 
     {  tag        = LIT 
       value      = 40 
       guaranteed = {  day = 29 month = december year = 1932  }  
      } 
     relation = {  tag = POL value = 75  } 
     relation = {  tag = SOV value = -30  } 
	 relation = {  tag = CZE value = 65  }
	 relation = {  tag = USA value = 65  }
	 relation = {  tag = SWE value = 75  }
	 relation = {  tag = DEN value = 75  }
    } 
   SpyInfo                = {  country = "EST" NumberOfSpies = 3  } 
   nationalprovinces      = {  270 271 272 273 274 275  } 
   ownedprovinces         = {  270 271 272 273 274 275  } 
   controlledprovinces    = {  270 271 272 273 274 275  } 
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
#Great War Infantry Division  
1010  1020 1030 1040 1050 1060 1070 1080
#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220
 #Naval Infantry
#1560 1570
#Engineers
1830 1840 1850 
#Early Static Anti-Air Artillery 
2800 2450 21180 21190
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Mechanized Agriculture 
5700 5710 5010 5020
#Improved Construction Engineering 
5800 5080 
#Basic Oil Refining 
#5190
#Mass Production
5810 5820
#Short Range Submarine 
3610 3620 3630
#Torpedo & ASW 18
3720 3730 3736 3740 3750 3900
#Medicine
5600 5610
#Troopships
3810

# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
#Naval Doctrines
8010 8040  
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
} 
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 8 
     political_left    = 1 
     free_market       = 5 
     freedom           = 5 
     professional_army = 3 
     defense_lobby     = 5 
     interventionism   = 1 
    } 

   headofstate            = {  type = 9 id = 130001  } 
   headofgovernment       = {  type = 9 id = 130002  } 
   foreignminister        = {  type = 9 id = 130025  } #August Rei
   armamentminister       = {  type = 9 id = 130004  } 
   ministerofsecurity     = {  type = 9 id = 130005  } 
   ministerofintelligence = {  type = 9 id = 130006  } 
   chiefofstaff           = {  type = 9 id = 130007  } 
   chiefofarmy            = {  type = 9 id = 130008  } 
   chiefofnavy            = {  type = 9 id = 130009  } 
   chiefofair             = {  type = 9 id = 130010  } 
   # Estonian Army 
landunit = 
   {  id       = {  type = 30000 id = 1  } 
     location = 270 
     name     = "Maavägi" 
     Division = 
     {  id       = {  type = 30000 id = 2  } 
       name     = "I Jalaväediviis" 
       type     = infantry 
       strength = 30 
       model    = 7
	extra = anti_air
	brigade_model = 1
      } 
     Division = 
     {  id       = {  type = 30000 id = 3  } 
       name     = "II Jalaväediviis" 
       type     = infantry 
       strength = 30
       model    = 7
	extra = cavalry_brigade
	brigade_model = 8
      } 
     Division = 
     {  id       = {  type = 30000 id = 4  } 
       name     = "III Jalaväediviis" 
       type     = infantry 
       strength = 30
       model    = 7
	extra = armored_car
	brigade_model = 1
      } 
  } 
navalunit = 
   {  id       = {  type = 30000 id = 7  } 
     location = 270 
     base     = 270 
     name     = "Merevägi" 
     Division = 
     {  id       = {  type = 30000 id = 8  } 
       name     = "I Hävitaja flotill" 
       type     = destroyer
       model    = 2
       strength = 40
      } 
     Division = 
     {  id       = {  type = 30000 id = 9  } 
       name     = "EML Sulev" 
       type     = destroyer
       model    = 0
       strength = 20
	max_strength = 20
      } 
    }
airunit = 
   {  id       = {  type = 30000 id = 5  } 
     location = 270 
     base     = 270 
     name     = "Ohuvägi" 
     Division = 
     {  id       = {  type = 30000 id = 6  } 
       name     = "I Lennusalk" 
       type     = multi_role
       model    = 3
       strength = 35
      } 
    }
 }
