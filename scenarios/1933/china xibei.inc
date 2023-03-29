 
 ############################## 
 # Country definition for CXB # 
 ############################## 
  
 country = 
 {  tag                    = CXB 
	ai = "cxb_1933.ai"
	ai_settings = { flags = { MOB1 = yes MOB2 = yes RES = yes } }
	dissent = 40
	regular_id             = CHI 
	intrinsic_gov_type     = paternal_autocrat 
	extra_tc               = 2 
	puppet                 = CHI 
	# Resource Reserves 
	energy                 = 360
	metal                  = 180
	rare_materials         = 90
	oil                    = 100 
	supplies               = 100 
	money                  = 50 
	capital                = 1264 # Lanzhou
	manpower               = 31 
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     freedom           = 3 
     free_market       = 3 
     professional_army = 2 
     defense_lobby     = 10 
     interventionism   = 3 
    } 
	
   nationalprovinces      = {  1256 1262 1263 1264 1265 1266 1268 1269 1270 1271 1272 1283 1284 1285  } 
   ownedprovinces         = {  1256 1262 1263 1264 1265 1266 1268 1269 1270 1271 1272 1283 1284 1285  } 
   controlledprovinces    = {  1256 1262 1263 1264 1265 1266 1268 1269 1270 1271 1272 1283 1284 1285  } 
	#Xibei
   techapps = { 
	
	# Manufacturing - Up to 1910
	5810
	# Construction Engineering - Up to 1910
	5800 5080

	# Crypto - Up to 1922
	5316 5326

	# Infantry Division
	1010 1020 1030 1040 1050 1060 1070
	# Mountain Division
	1160 1170 1180 1190 1200 1210 1220
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 1350
	# Engineers
	1830
	# Supply 
	1910 1920 1930 1940 1950 1960

	# Field Artillery 
	2290 2300 2310

	# Hospital System
	14000 14010 14020
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910


	} 

blueprints = {
	
	# Mountain
	1230

	# Cavalry
	1360

	# Manufacturing
	5050 5820
	
	# Crypto
	5327

	# Agriculture
	5700
	
	# Medicine (most were still imported)
	5600
	
	# Tank 
	7600 7610 2620 2010
	
	# Armoured Car  
	2860 2870

	# Artillery
	2920 2900 2910

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
	
	# Interceptor Fighter  
	4500 4510 4520 4530 4540  
	# Multirole Fighter
	4300 4310 4320 
	# Tactical Bomber 
	4600 4610 4620 4630 
	# Strategic Bomber
	4800 4810 
	# Naval Bomber
	4700 
	# Seaplane
	4740 4750 4760
	
	# Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 
}
 inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = CHI value = 200 access = yes  } 
     relation = {  tag = CSX value = 200 access = yes  } 
     relation = {  tag = U67 value = 150  } 
     relation = {  tag = CGX value = 200  } 
     relation = {  tag = CYN value = 200  } 
     relation = {  tag = JAP value = -75  } 
     relation = {  tag = MAN value = -75  } 
     relation = {  tag = CHC value = -100  } 
     relation = {  tag = SIK value = 100 guaranteed = {  day = 29 month = december year = 1934 } } 
    } 
   SpyInfo                = {  country = "CXB" NumberOfSpies = 2  } 
   headofstate            = {  type = 9 id = 610001  } 
   headofgovernment       = {  type = 9 id = 610002  } 
   foreignminister        = {  type = 9 id = 610003  } 
   armamentminister       = {  type = 9 id = 610004  } 
   ministerofsecurity     = {  type = 9 id = 610005  } 
   ministerofintelligence = {  type = 9 id = 610006  } 
   chiefofstaff           = {  type = 9 id = 610007  } 
   chiefofarmy            = {  type = 9 id = 610008  } 
   chiefofnavy            = {  type = 9 id = 610009  } 
   chiefofair             = {  type = 9 id = 610010  } 
  # ###### 
   # XIBEI SAN MA OOB 
   # Type 22200
   # ######

   # Qinghai
   landunit = 
   {  location = 1283 # Germu
     name     = "New 2nd Corps" 
     id       = {  type = 22200 id = 1 } 
     Division = 
     {  experience = 40 
       id         = {  type = 22200 id = 2  } 
       name       = "New 9th Division" 
       type       = infantry
	   strength  = 85
       model     = 6
	   extra1 = artillery
	   brigade_model1 = 4
       extra2 = cavalry_brigade
	   brigade_model2 = 6
      }
    }
	landunit = 
   {  location = 1283 # Germu
     name     = "Qinghai Provincial Security Group" 
     id       = {  type = 22200 id = 3 } 
     Division = 
     {  experience = 40 
       id         = {  type = 22200 id = 4  } 
       name       = "South Qinghai Garrison" 
       type       = cavalry
	   strength  = 50
       model     = 3
      }
    }

	landunit = 
   {  location = 1283 # Germu
     name     = "5th Cavalry Corps" 
     id       = {  type = 22200 id = 8 } 
     Division = 
     {  experience = 40 
       id         = {  type = 22200 id = 9  } 
       name       = "1st 2nd Cavalry Brigade" 
       type       = cavalry
	   strength  = 55
       model     = 4
	   extra1 = artillery
	   brigade_model1 = 3
      }
	  Division = 
     {  experience = 40 
       id         = {  type = 22200 id = 10  } 
       name       = "3rd Independent Cavalry Brigade" 
       type       = cavalry
	   strength  = 55
       model     = 4
	   extra1 = artillery
	   brigade_model1 = 3
      }
    }

	#Ningxia
	landunit = 
   {  location = 1268 # Yinchuan
     name     = "11th Corps" 
     id       = {  type = 22200 id = 11 } 
     Division = 
     {  experience = 40 
       id         = {  type = 22200 id = 12 } 
       name       = "New 7th Division" 
       type       = infantry
	   strength  = 100
       model     = 5
	   extra1 = cavalry_brigade
	   brigade_model1 = 3
      }
	  Division = 
     {  experience = 40 
       id         = {  type = 22200 id = 13  } 
       name       = "10th Independent Brigade" 
       type       = infantry
	   strength  = 100
       model     = 5
	   extra1 = cavalry_brigade
	   brigade_model1 = 3
      }
    }

	landunit = 
   {  location = 1268 # Yinchuan
     name     = "81st Corps" 
     id       = {  type = 22200 id = 14 } 
     Division = 
     {  experience = 40 
       id         = {  type = 22200 id = 15 } 
       name       = "35th Division" 
       type       = infantry
	   strength  = 100
       model     = 5
	   extra1 = cavalry_brigade
	   brigade_model1 = 3
      }
    }

	landunit = 
   {  location = 1268 # Yinchuan
     name     = "Ningxia Provincial Security Group" 
     id       = {  type = 22200 id = 16 } 
     Division = 
     {  experience = 40 
       id         = {  type = 22200 id = 17 } 
       name       = "1st 2nd Security Militia" 
       type       = militia
	   strength  = 100
       model     = 4
	   extra1 = cavalry_brigade
	   brigade_model1 = 3
      }
    }
	landdivision = 
     { dormant = yes  id = { type = 22200 id = 999 } 
       name     = "31st Corps" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22200 id = 998 } 
       name     = "32nd Corps" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22200 id = 997 } 
       name     = "33rd Corps" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22200 id = 996 } 
       name     = "34th Corps" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22200 id = 995 } 
       name     = "35th Corps" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22200 id = 994 } 
       name     = "36th Corps" 
       type     = infantry
       model    = 9
      }
  } 
 