 
 ############################## 
 # Country definition for BUL # 
 ############################## 
  

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = BUL 
	ai = "bul_1936.ai"
	ai_settings = { flags = { MOB1 = yes MOB2 = yes } }
	dissent = 20
	# Resource Reserves 
	energy                 = 1500
	metal                  = 750
	rare_materials         = 375
	oil                    = 500 
	supplies               = 500 
	money                  = 50 
	manpower               = 0 
	capital                = 321 
	transports             = 10 
	escorts                = 4 
   diplomacy = 
   {  relation = {  tag = ENG value = 20  } 
     relation = {  tag = FIN value = 35  } 
     relation = {  tag = FRA value = 20  } 
     relation = {  tag = GER value = 25  } 
     relation = {  tag = GRE value = -75  } 
     relation = {  tag = ITA value = 150  } 
     relation = {  tag = ROM value = 25  } 
     relation = {  tag = SOV value = 15  } 
     relation = {  tag = TUR value = 75  } 
     relation = {  tag = YUG value = 25  } 
    } 
   SpyInfo                = {  country = "BUL" NumberOfSpies = 6  } 
   nationalprovinces      = {   307 317 318 319 320 321 322 323 324 325 326 364 370 
             #East Serbia, Macedonia and Greece 
             328 331 333 363 
              } 
   ownedprovinces         = {  317 318 319 320 321 322 323 324 325 326  } 
   controlledprovinces    = {  317 318 319 320 321 322 323 324 325 326  }
   claimedprovinces = { 334 } 
   
	# Eastern Minor Tech '36 
	# Group D 1936 techs 
	# ###################### 
	techapps               = {  

	# Manufacturing
	5810 5820 5050 5830
	# Construction Engineering 
	5800 5080 5090 
	# Agriculture  
	5700 5710 5010
	# Computers & cryptography
	5310 54010 54020 54030 5316 5326
	# Medicine
	5600 5610 5620

	# Infantry Division  
	1010 1020 1030 1040 1050 1060 
	# Mountain Division 
	1160 1170 1180 1190 1200 1210 1220 1230
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 1350
	# Engineers
	1830 1840 1850 
	# Supply 
	1910 1920 1930 1940 1950 1960

	# Tanks
	7600 7610 2620 2010 2630 2640
	# Armoured Car  
	2860 2870 2880 
	# Field Artillery 
	2290 2300 2310 2900 2910
	# Static Anti-Air Artillery 
	2800 2450 21180 
	# Anti-Air Artillery Brigade 
	2810 2820 

	# Hospital System
	14000 14010
	# Great War Land Doctrines (central powers)
	6500 6510 6530 6550 6590 6600 6620 6650 6670 6610 6680 6690 6700 6710 6910
	# Grand Battle Plan Doctrine
	6560
	
	# Destroyers
	3010
	# Torpedo & ASW 18
	3720 3730 3900
	#Troopships
	3810

	# Naval Doctrines
	8010 8020 8050 
	
	# Interceptor Fighter
	4500 4510 4520 4530 4540 4550 4010
	# Multirole Fighter
	4300 4310 4320 4330
	# Tactical Bomber
	4600 4610 4620 4630 4120
	# Strategic Bomber
	4800 4810 
	# Naval Bomber
	4700 4710

	# Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470
	#Carrier Pigeons
	30020 30030	
	} 

inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     free_market       = 7 
     freedom           = 6 
     professional_army = 2 
     defense_lobby     = 5 
     interventionism   = 9 
    } 
   headofstate            = {  type = 9 id = 95001  } 
   headofgovernment       = {  type = 9 id = 95241  } # Nikola Mushanov
   foreignminister        = {  type = 9 id = 95242  } # Nikola Mushanov
   armamentminister       = {  type = 9 id = 95244  } # Stefan Stefanov
   ministerofsecurity     = {  type = 9 id = 95005  } # Aleksandar Gerginov
   ministerofintelligence = {  type = 9 id = 95006  } 
   chiefofstaff           = {  type = 9 id = 95007  } 
   chiefofarmy            = {  type = 9 id = 95008  } 
   chiefofnavy            = {  type = 9 id = 95009  } 
   chiefofair             = {  type = 9 id = 95010  } 
   # Firepower 
   landunit = 
   {  id       = {  type = 19000 id = 1  } 
     location = 321 
     name     = "1-va Armia" 
     Division = 
     {  id       = {  type = 19000 id = 2  } 
       name     = "1-va Sofiiska pekhotna divizija" 
       strength = 15 
       type     = infantry 
       model    = 7
      } 
     Division = 
     {  id       = {  type = 19000 id = 3  } 
       name     = "7-ma Rilska pekhotna divizija" 
       strength = 15 
       type     = infantry 
       model    = 7
      } 
     Division = 
     {  id       = {  type = 19000 id = 4  } 
       name     = "11-va Zapasna pekhotna divizija" 
       strength = 5 
       type     = infantry 
       model    = 6
      } 
     Division = 
     {  id       = {  type = 19000 id = 5  } 
       name     = "15-ta Ohridska pekhotna divizija" 
       strength = 5 
       type     = infantry 
       model    = 6
      } 
    } 
   landunit = 
   {  id       = {  type = 19000 id = 6  } 
     location = 324 
     name     = "2-ra Armia" 
     Division = 
     {  id       = {  type = 19000 id = 7  } 
       name     = "2-ra Trakiiska pekhotna divizija" 
       strength = 15 
       type     = infantry 
       model    = 7
      } 
     Division = 
     {  id       = {  type = 19000 id = 8  } 
       name     = "8-ma Tundzhanska pekhotna divizija" 
       strength = 15
       type     = infantry 
       model    = 7
      } 
     Division = 
     {  id       = {  type = 19000 id = 9  } 
       name     = "10-ta Rodopska pekhotna divizija" 
       strength = 5
       type     = infantry 
       model    = 6
      } 
     Division = 
     {  id       = {  type = 19000 id = 10  } 
       name     = "12-ra Dobrudzhanska pekhotna divizija" 
       strength = 5
       type     = infantry 
       model    = 6
      } 
    } 
   landunit = 
   {  id       = {  type = 19000 id = 11  } 
     location = 326 
     name     = "3-ta Armia" 
     Division = 
     {  id       = {  type = 19000 id = 12  } 
       name     = "3-ta Balkanska pekhotna divizija" 
       strength = 15
       type     = infantry 
       model    = 7 
      } 
     Division = 
     {  id       = {  type = 19000 id = 13  } 
       name     = "4-ta Preslavska pekhotna divizija" 
       strength = 15
       type     = infantry 
       model    = 7 
      } 
     Division = 
     {  id       = {  type = 19000 id = 14  } 
       name     = "13-ta Pekhotna divizija" 
       strength = 5
       type     = infantry 
       model    = 6
      } 
     Division = 
     {  id       = {  type = 19000 id = 15  } 
       name     = "16-ta Belomorska pekhotna divizija" 
       strength = 5
       type     = infantry 
       model    = 6
      } 
    } 
   landunit = 
   {  id       = {  type = 19000 id = 16  } 
     location = 323 
     name     = "4-ta Armia" 
     Division = 
     {  id       = {  type = 19000 id = 17  } 
       name     = "5-ta Dunavska pekhotna divizija" 
       strength = 15
       type     = infantry 
       model    = 7
      } 
      Division = 
     {  id       = {  type = 19000 id = 18  } 
       name     = "6-ta Bdinska pekhotna divizija" 
       strength = 15
       type     = infantry 
       model    = 7
      } 
     Division = 
     {  id       = {  type = 19000 id = 19  } 
       name     = "9-ta Plevenska pekhotna divizija" 
       strength = 5
       type     = infantry 
       model    = 6
      } 
     Division = 
     {  id       = {  type = 19000 id = 20  } 
       name     = "14-ta Skopska Dunavska pekhotna divizija" 
       strength = 5
       type     = infantry 
       model    = 6
      } 
    } 
   # navalunit = {  
   # id = {  type = 19000 id = 21  } 
   # name = "Bulgarska Flota" 
   # location = 325 
   # base = 325 
   # Division = {  
   # id = {  type = 19000 id = 22  } 
   # name = "1-va Podvodnikova flotilija" 
   # type = destroyer 
   # model = 0 
   #  } 
   #  } 
  } 
 