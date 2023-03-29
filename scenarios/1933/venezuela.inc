 
 ############################## 
 # Country definition for VEN # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = VEN 
	ai = "ven_1936.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes } }
	dissent = 20
	# Resource Reserves 
	energy                 = 480
	metal                  = 240
	rare_materials         = 120
	transports = 20
	oil                    = 500 
	supplies               = 500 
	money                  = 20 
	capital                = 1993 
	manpower               = 66 
      
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 6 
     political_left    = 1 
     freedom           = 5 
     free_market       = 7 
     professional_army = 6 
     defense_lobby     = 5 
     interventionism   = 3 
    } 

   nationalprovinces      = {  1988 1989 1992 1993 1995 1996 1998  } 
   ownedprovinces         = {  1988 1989 1992 1993 1995 1996  } 
   controlledprovinces    = {  1988 1989 1992 1993 1995 1996  } 
   # ROTW Minor Tech '36 
   # Group D 1936 techs 
   # ###################### 
   # GW fighter 
   techapps               = {
#Interwar Fighter  
4500 4510 4520 4530 4540 4550
#Medicine
5600 5610 5620
#Early Static Anti-Air Artillery 
2800 2450 21180 21190
#Basic Armoured Car  
2860 2870 2880 2020
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Great War Heavy Field Artillery 
2290 2300 2310
#SW Tank 
7600 7610
#Engineers
1830 1840 1850 1860
#Great War Infantry Division  
1010 1020 1030 1040 1050 1060 
#Interbellum Supply 
1910 1920 1930 1940 1950 1960
#Early Mountain Division 
1160 1170 1180 1190 1200 1210 1220 1230 1240
#Torpedo & ASW 18
3720 3730 3736 3740 3750 3900
#Troopships
3810

#Manufactoring
5810 5820 5050
#Improved Construction Engineering 
5800 5080 
#Basic Oil Refining 
#5190 
#Mechanized Agriculture 
5700 5710 5010 5020
# Land Doctrines WWI - Entente line
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
#Landdoctrine ww2 - none?

 #Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 
  } 
 inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = ARG value = 10  } 
     relation = {  tag = BOL value = -15  } 
     relation = {  tag = BRA value = 10  } 
     relation = {  tag = CHL value = 20  } 
     relation = {  tag = COL value = 20  } 
     relation = {  tag = ECU value = 20  } 
     relation = {  tag = ENG value = -10  } 
     relation = {  tag = PAR value = 10  } 
     relation = {  tag = PRU value = 10  } 
     relation = {  tag = URU value = 10  } 
     relation = {  tag = USA value = 125  } 
    } 
   SpyInfo                = {  country = "VEN" NumberOfSpies = 5  } 
   headofstate            = {  type = 9 id = 180106  } #Juan Vicente Gómez
   headofgovernment       = {  type = 9 id = 180101  } #Juan Vicente Gómez
   foreignminister        = {  type = 9 id = 180061  } #Pedro Itriago Chacín
   armamentminister       = {  type = 9 id = 180004  } 
   ministerofsecurity     = {  type = 9 id = 180005  } 
   ministerofintelligence = {  type = 9 id = 180006  } 
   chiefofstaff           = {  type = 9 id = 180007  } 
   chiefofarmy            = {  type = 9 id = 180008  } 
   chiefofnavy            = {  type = 9 id = 180009  } 
   chiefofair             = {  type = 9 id = 180010  } 
   # Firepower 
   # Rather wild estimations 
   landunit = 
   {  id       = {  type = 15800 id = 45  } 
     name     = "Armada Nacional" 
     location = 1993 
     Division = 
     {  id       = {  type = 15800 id = 4500  } 
       name     = "1a Division de Infanteria" 
       strength = 15
       type     = infantry
		model    = 6   
      } 
     Division = 
     {  id       = {  type = 15800 id = 4501  } 
       name     = "2a Division de Infanteria" 
       strength = 15
       type     = infantry
		model    = 6   
      } 
     Division = 
     {  id       = {  type = 15800 id = 4502  } 
       name     = "3a Division de Infanteria" 
       strength = 15
       type     = infantry
		model    = 6   
      } 
    } 
  } 
 
