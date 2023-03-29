
 
 ############################## 
 # Country definition for PRU # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = PRU 
	ai = "pru_1936.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes } }
	dissent = 20
	# Resource Reserves 
	energy                 = 600
	metal                  = 300
	rare_materials         = 150
	transports = 10
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
	capital                = 2016 
	manpower               = 99 
      
   diplomacy = 
   {  relation = {  tag = ARG value = 20  } 
     relation = {  tag = BOL value = 30  } 
     relation = {  tag = BRA value = 10  } 
     relation = {  tag = CHL value = -25  } 
     relation = {  tag = COL value = -35  } 
     relation = {  tag = ECU value = -50  } 
     relation = {  tag = PAR value = 25  } 
     relation = {  tag = URU value = 25  } 
     relation = {  tag = USA value = 75  } 
     relation = {  tag = VEN value = 10  } 
    } 
   nationalprovinces      = {  2008 2010 2011 2012 2013 2014 2015 2016 2017 2018 2033  } 
   ownedprovinces         = {  2011 2012 2013 2014 2015 2016 2017 2018  } 
   controlledprovinces    = {  2011 2012 2013 2014 2015 2016 2017 2018  } 
   # ROTW Minor Tech '36 
   # Group D 1936 techs 
   # ###################### 
   # GW fighter 
   techapps               = {
#Interwar Fighter  
4500 4510 4520 4530 4540 4550
#Basic Armoured Car  
2860 2870 2880 2020
#Great War Heavy Field Artillery 
2290 2300 2310
#SW Tank 
7600 7610
#Great War Infantry Division  
1010  1020 1030 1040 1050 1060 
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240 1250
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Interbellum Supply 
1910 1920 1930 1940 1950 1960
#Modern Agriculture  
5700 5710 5010
#Improved Construction Engineering 
5800 5080 
#Early Light Cruiser 
3110 3120 3130
#Early Static Anti-Air Artillery 
2800 2450 21180 21190
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Short Range Submarine 
3610 3620 3630
#Great War Destroyer 
3010 3020 3030 3040

# Naval Firepower Doctrine
8010 8020 8040 8050  
#Naval Infantry
#1560 1570
#Engineers
1830 1840 1850
#Torpedo & ASW 18
3720 3730 3736 3740 3750 3900
#Troopships
3810 
#Medicine
5600 5610 
# Land Doctrines WWI - Entente line (default)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
# Land Doctrines WWII - none

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 
} 
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 5 
     political_left    = 2 
     freedom           = 4 
     free_market       = 4 
     professional_army = 6 
     defense_lobby     = 5 
     interventionism   = 5 
    } 

   SpyInfo                = {  country = "PRU" NumberOfSpies = 4  } 
   headofstate            = {  type = 9 id = 185157  } #Luis Miguel Sánchez Cerro
   headofgovernment       = {  type = 9 id = 185002  } 
   foreignminister        = {  type = 9 id = 185003  } 
   armamentminister       = {  type = 9 id = 185004  } 
   ministerofsecurity     = {  type = 9 id = 185005  } 
   ministerofintelligence = {  type = 9 id = 185006  } 
   chiefofstaff           = {  type = 9 id = 185007  } 
   chiefofarmy            = {  type = 9 id = 185008  } 
   chiefofnavy            = {  type = 9 id = 185009  } 
   chiefofair             = {  type = 9 id = 185010  } 
   landunit = 
   {  id       = {  type = 17600 id = 1  } 
     name     = "1a Region Militar" 
     location = 2014 
     Division = 
     {  id       = {  type = 17600 id = 2  } 
       name     = "1a Division de Infanteria'" 
       strength = 15
       type     = infantry 
	   model = 6 
      } 
    } 
   landunit = 
   {  id       = {  type = 17600 id = 3  } 
     name     = "2a Region Militar" 
     location = 2016 
     Division = 
     {  id       = {  type = 17600 id = 4  } 
       name     = "2a Division de Infanteria'" 
       strength = 15
       type     = infantry 
	   model = 6 
      } 
    } 
   landunit = 
   {  id       = {  type = 17600 id = 5  } 
     name     = "3a Region Militar" 
     location = 2017
     Division = 
     {  id       = {  type = 17600 id = 6  } 
       name     = "3a Division de Infanteria'" 
       strength = 15
       type     = infantry 
	   model = 6 
      } 
    } 
   landunit = 
   {  id       = {  type = 17600 id = 7  } 
     name     = "4a Region Militar" 
     location = 2015 
     Division = 
     {  id       = {  type = 17600 id = 8  } 
       name     = "4a Division de Infanteria'" 
       strength = 15
       type     = infantry 
	   model = 6 
      } 
    } 
   landunit = 
   {  id       = {  type = 17600 id = 9  } 
     name     = "5a Region Militar" 
     location = 2012 
     Division = 
     {  id       = {  type = 17600 id = 10  } 
       name     = "5a Division de Infanteria'" 
       strength = 15
       type     = infantry 
	   model = 6 
      } 
    } 
	navalunit = { 
		id = { type = 17600 id = 11 } 
		name = "Marina del Guerra del Peru" 
		location = 2016 
		base = 2016 
		division = { 
			id = { type = 17600 id = 12 } 
			name = "BAP Almirante Grau" 
			type = light_cruiser 
			model = 1 
			} 
		division = { 
			id = { type = 17600 id = 13 } 
			name = "BAP Coronel Bolognesi" 
			type = light_cruiser 
			model = 1 
			} 
		division = { 
			id = { type = 17600 id = 14 } 
			name = "BAP Teniente Rodriguez" 
			type = destroyer 
			model = 2
			strength = 20
			max_strength = 20
			} 
		division = { 
			id = { type = 17600 id = 15 } 
			name = "Flotilla de Submarinos No.1" 
			type = submarine 
			model = 3
			strength = 80 
			} 
		} 
	airunit = { 
		id = { type = 17600 id = 16 } 
		name = "Cuerpo de Aéronautica del Peru" 
		location = 2016 
		base = 2016 
		division = { 
			id = { type = 17600 id = 17 } 
			name = "Ala Aérea No.1" 
			type = interceptor
			model = 7
			strength = 15
			} 
		} 
  } 
 
