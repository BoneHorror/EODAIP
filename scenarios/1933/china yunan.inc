 
 ############################## 
 # Country definition for CYN # 
 ############################## 
  
 country = 
 {  tag                    = CYN 
	flag_ext 	= _PNE
	ai = "cyn_1936.ai"
	ai_settings = { flags = { MOB1 = yes MOB2 = yes RES = yes } }
	dissent = 30
	regular_id             = CHI 
	intrinsic_gov_type     = paternal_autocrat 
	extra_tc               = 4 
	# Resource Reserves 
	energy                 = 300
	metal                  = 150
	rare_materials         = 75
	oil                    = 100 
	supplies               = 100 
	money                  = 50 
	capital                = 1390 # Kunming 
	manpower               = 0 
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     freedom           = 3 
     free_market       = 3 
     professional_army = 2 
     defense_lobby     = 2 
     interventionism   = 1 
    } 
   nationalprovinces      = {  1291 1292 1293 1296 1297 1298 1299 1300 1302 1304 1384 1385 1386 1387 1388 1389 1390 1413  } 
   ownedprovinces         = {  1291 1292 1293 1384 1385 1386 1387 1388 1389 1390 } 
   controlledprovinces    = {  1291 1292 1293 1384 1385 1386 1387 1388 1389 1390 } 
   #Yunnan
 	techapps = { 
	
	# Manufacturing - Up to 1915
	5810 5820
	# Construction Engineering - Up to 1910
	5800 5080

	# Crypto - Up to 1922
	5316 5326

	# Infantry Division
	1010 1020 1030 1040 1050 1060
	# Mountain Division
	1160 1170 1180 1190 1200 1210 1220
	# Cavalry Division  
	13060 13070 13080 1310
	# Engineers
	1830
	# Supply 
	1910 1920 1930 1940 1950

	# Field Artillery 
	2290 2300 2310 2900 2910

	# Hospital System
	14000 14010 14020
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910

	# Interceptor Fighter  
	4500 4510 4520 4530 4540  
	# Multirole Fighter
	4300 4310 4320 
	# Tactical Bomber 
	4600 4610 4620 4630 
	# Strategic Bomber
	4800 4810 

	# Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 
	} 

blueprints = {
	
	# Infantry
	1070

	# Mountain
	1230

	# Cavalry
	1320 1330 1340 1350

	# Manufacturing
	5050
	
	# Crypto
	5327

	# Supply
	1960

	# Tank
	7600 7610 2620 2010
	
	# Armoured Car  
	2860 2870 2880

	#Manpower Focus
	6570
	
	# Naval Doctrines
	8010 8020 8050 8060 8070 8080
	
	# Destroyers
	3010 
	# Light Cruiser 
	3110 3120
	# Heavy Cruiser 
	3210 3220
	# Troopships
	3810
	#Early Torpedoes
	3720
	#Early Battleship
	3410
	
	# Naval Bomber
	4700 
	# Seaplane
	4740 4750 4760

}
 inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = CHI value = 200  } 
     relation = {  tag = CSX value = 200  } 
     relation = {  tag = CXB value = 200  } 
     relation = {  tag = CGX value = 200  } 
     relation = {  tag = U67 value = 200  } 
     relation = {  tag = JAP value = -75  } 
     relation = {  tag = MAN value = -75  } 
     relation = {  tag = CHC value = -200  } 
    } 
   SpyInfo                = {  country = "CYN" NumberOfSpies = 2  } 
   headofstate            = {  type = 9 id = 615001  } 
   headofgovernment       = {  type = 9 id = 615002  } 
   foreignminister        = {  type = 9 id = 615003  } 
   armamentminister       = {  type = 9 id = 615004  } 
   ministerofsecurity     = {  type = 9 id = 615005  } 
   ministerofintelligence = {  type = 9 id = 615006  } 
   chiefofstaff           = {  type = 9 id = 615007  } 
   chiefofarmy            = {  type = 9 id = 615008  } 
   chiefofnavy            = {  type = 9 id = 615009  } 
   chiefofair             = {  type = 9 id = 615010  } 
   # ###### 
   # CHINA 1933 OOB 
   # Type = 22100
   # ###### 
   # Xikang
   # http://forum.paradoxplaza.com/forum/showthread.php?687389-OOB-and-information-of-China-for-moders&p=15451250&viewfull=1#post15451250
	landunit = 
   {  location = 1292 # Ya'an
     name     = "24th Corps" 
     # leader =  
     id       = {  type = 22100 id = 1  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22100 id = 2  } 
       name       = "136th Division" 
       type     = militia 
       strength   = 33
       model      = 3
	   extra1 = police
	   brigade_model1 = 1
      }
      Division = 
     {  experience = 30 
       id         = {  type = 22100 id = 3  } 
       name       = "137th Division" 
       type     = militia
       strength   = 33
       model      = 3
	   extra1 = police
	   brigade_model1 = 1
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22100 id = 4  } 
       name       = "138th Division" 
       type       = militia
       strength   = 33
       model      = 3
	   extra1 = police
	   brigade_model1 = 1
      }
    }
	#Yunnan
	landunit = 
   {  location = 1390 # Kunming
     name     = "10th Route Army" 
     # leader =  
     id       = {  type = 22100 id = 5  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22100 id = 6  } 
       name       = "1st Independent Brigade" 
       type     = infantry
       strength   = 40
       model      = 6
      }
      Division = 
     {  experience = 30 
       id         = {  type = 22100 id = 7  } 
       name       = "2nd Independent Brigade" 
       type     = infantry
       strength   = 40
       model      = 6
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22100 id = 8  } 
       name       = "3rd Independent Brigade" 
       type       = infantry
       strength   = 40
       model      = 6
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22100 id = 9  } 
       name       = "5th Independent Brigade" 
       type       = infantry
       strength   = 40
       model      = 6
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22100 id = 10  } 
       name       = "7th Independent Brigade" 
       type       = infantry
       strength   = 40
       model      = 6
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22100 id = 11  } 
       name       = "9th Independent Brigade" 
       type       = infantry
       strength   = 40
       model      = 6
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22100 id = 18  } 
       name       = "10th Route Army HQ" 
       type       = hq
       strength   = 40
       model      = 2
      }
    }
  }  
 