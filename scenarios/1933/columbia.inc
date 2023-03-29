 
 ############################## 
 # Country definition for COL # 
 ############################## 
  

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = COL 
	ai = "col_1936.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }
	dissent = 20
	# Resource Reserves 
	energy                 = 660
	metal                  = 330
	rare_materials         = 165
	transports = 10
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
	manpower               = 59 
	capital                = 1991 
      
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 7 
     political_left    = 4 
     free_market       = 8 
     freedom           = 7 
     professional_army = 4 
     defense_lobby     = 5 
     interventionism   = 2 
    } 

   nationalprovinces      = {  1756 1985 1986 1987 1990 1991 1994 2009  } 
   ownedprovinces         = {  1756 1985 1986 1987 1990 1991 1994 2009 } 
   controlledprovinces    = {  1756 1985 1986 1987 1990 1991 1994 2009 } 
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
7600 7610 2620 2010
#Great War Infantry Division
1010 1020 1030 1040 1050 1060 
#Interbellum Supply 
1910 1920 1930 1940 1950 1960
#Great War Cavalry Division
13060 13070 13080 1310 1320 1330 1340 
#Early Mountain Division
1160 1170 1180 1190 1200 1210 1220 1230 1240
#Early Static Anti-Air Artillery
2800 2450 21180 21190
#Basic Anti-Air Artillery Brigade
2810 2820 2510
#Modern Agriculture
5700 5710 5010
#Improved Construction Engineering
5800 5080

#Engineers
1830 1840 1850 1860
#Great War Destroyer 
3010 3020 3030 3040
#Torpedo & ASW 18
3720 3730 3736 3740 3750 3900
#Troopships
3810
#Medicine
5600 5610
# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
#Naval Doctrines
8010 8050
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
} 
inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = ARG value = 10  } 
     relation = {  tag = BOL value = 1  } 
     relation = {  tag = BRA value = 10  } 
     relation = {  tag = CHL value = 15  } 
     relation = {  tag = ECU value = 20  } 
     relation = {  tag = GER value = -20  } 
     relation = {  tag = PAN value = 50  } 
     relation = {  tag = PAR value = 10  } 
     relation = {  tag = PRU value = -35  } 
     relation = {  tag = URU value = 10  } 
     relation = {  tag = USA value = 75  } 
     relation = {  tag = VEN value = 20  } 
    } 
   SpyInfo                = {  country = "COL" NumberOfSpies = 3  } 
   headofstate            = {  type = 9 id = 175185  } #Enrique Olaya Herrera
   headofgovernment       = {  type = 9 id = 175186  } #Enrique Olaya Herrera
   foreignminister        = {  type = 9 id = 175044  } #Roberto Urdaneta Arbeláez
   armamentminister       = {  type = 9 id = 175063  } #Carlos Arango Vélez
   ministerofsecurity     = {  type = 9 id = 175005  }
   ministerofintelligence = {  type = 9 id = 175006  }
   chiefofstaff           = {  type = 9 id = 175007  } 
   chiefofarmy            = {  type = 9 id = 175008  } 
   chiefofnavy            = {  type = 9 id = 175009  } 
   chiefofair             = {  type = 9 id = 175010  } 

   landunit = 
   {  id       = {  type = 23000 id = 1  } 
     name     = "1a Region Militar" 
     location = 1991 
     Division = 
     {  id       = {  type = 23000 id = 2  } 
       name     = "1a Brigada de Infanteria" 
       strength   = 15
       type     = infantry 
       model    = 6
      } 
    } 
   landunit = 
   {  id       = {  type = 23000 id = 3  } 
     name     = "2a Region Militar" 
     location = 1986 
     Division = 
     {  id       = {  type = 23000 id = 4  } 
       name     = "2a Brigada de Infanteria" 
       strength   = 15
       type     = infantry 
       model    = 6
      } 
    } 
   landunit = 
   {  id       = {  type = 23000 id = 5  } 
     name     = "3a Region Militar" 
     location = 1985 
     Division = 
     {  id       = {  type = 23000 id = 6  } 
       name     = "3a Brigada de Infanteria" 
       strength   = 15
       type     = infantry 
       model    = 6
      } 
    } 
   landunit = 
   {  id       = {  type = 23000 id = 7  } 
     name     = "4a Region Militar" 
     location = 1987 
     Division = 
     {  id       = {  type = 23000 id = 8  } 
       name     = "4a Brigada de Infanteria" 
       strength   = 15
       type     = infantry 
       model    = 6
      } 
    } 
   landunit = 
   {  id       = {  type = 23000 id = 9  } 
     name     = "5a Region Militar" 
     location = 1990 
     Division = 
     {  id       = {  type = 23000 id = 10  } 
       name     = "5a Brigada de Infanteria" 
       strength   = 15
       type     = infantry 
       model    = 6
      } 
    } 
  } 
 