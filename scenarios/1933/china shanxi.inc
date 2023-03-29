 
 ############################## 
 # Country definition for CSX # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = CSX 
	flag_ext 	= _PNE
	ai = "csx_1933.ai"
	ai_settings = { flags = { MOB1 = yes MOB2 = yes RES = yes} }
	dissent = 10
	regular_id             = CHI 
	intrinsic_gov_type     = paternal_autocrat 
	extra_tc               = 20 
	puppet                 = CHI 
	# Resource Reserves 
	energy                 = 480
	metal                  = 240
	rare_materials         = 120
	oil                    = 100 
	supplies               = 100 
	money                  = 50 
	capital                = 1252 # Taiyuan 
	manpower               = 173 
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     freedom           = 3 
     free_market       = 3 
     professional_army = 2 
     defense_lobby     = 5 
     interventionism   = 1 
    } 
	ic_modifier				= 1.02 #
	energy_modifier			= 1.5 #
   nationalprovinces      = { 1238 1239 1240 1248 1249 1250 1251 1252 1253 1254 1257 1258 1255 1259 1260} 
   ownedprovinces         = { 1238 1239 1240 1248 1249 1250 1251 1252 1253 1254 1257 1258 1255 1259 1260}
   controlledprovinces    = { 1238 1239 1248 1249 1250 1251 1252 1253 1254 1257 1258 1255 1259 1260}
	#Shanxi
 	techapps = { 
	
	# Manufacturing - Up to 1915
	5810 5820
	# Construction Engineering - Up to 1910
	5800 5080

	# Crypto - Up to 1922
	5316 5326

	# Infantry Division
	1010 1020 1030 1040 1050 1060 1070
	# Mountain Division
	1160 1170 1180 1190 1200 1210 1220
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340
	# Engineers
	1830
	# Supply 
	1910 1920 1930 1940 1950 1960

	# Field Artillery 
	2290 2300 2310 2900 2910

	# Hospital System
	14000 14010 14020
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910

	# Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 
	} 

blueprints = {
	
	# Mountain
	1230

	# Cavalry
	1350 1360

	# Manufacturing
	5050
	
	# Crypto
	5327

	# Agriculture
	5700
	
	# Medicine (most were still imported)
	5600
	
	# Tank 
	7600 7610 2620 2010
	
	# Armoured Car  
	2860 2870 2880

	# Artillery (from GER/SOV)
	2920 2930

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
}
 inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = CHI value = 100 access = yes  } 
     relation = {  tag = CGX value = 200  } 
     relation = {  tag = CXB value = 200  } 
     relation = {  tag = CYN value = 200  } 
     relation = {  tag = U67 value = 200 access = yes } 
     relation = {  tag = JAP value = -100  } 
     relation = {  tag = MAN value = -100  } 
     relation = {  tag = CHC value = -75  } 
    } 
   SpyInfo                = {  country = "CSX" NumberOfSpies = 2  } 
   headofstate            = {  type = 9 id = 605001  } 
   headofgovernment       = {  type = 9 id = 605002  } 
   foreignminister        = {  type = 9 id = 605003  } 
   armamentminister       = {  type = 9 id = 605004  } 
   ministerofsecurity     = {  type = 9 id = 605005  } 
   ministerofintelligence = {  type = 9 id = 605006  } 
   chiefofstaff           = {  type = 9 id = 605007  } 
   chiefofarmy            = {  type = 9 id = 605008  } 
   chiefofnavy            = {  type = 9 id = 605009  } 
   chiefofair             = {  type = 9 id = 605010  } 
   # ###### 
   # SHANXI Land 1904 OOB 
   # TYPE: 22300 
   # ###### 
   landunit = 
   {  location = 1252 # Taiyuan
     name     = "19th Corps" 
     # leader =  
     id       = {  type = 22300 id = 1  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22300 id = 2  } 
       name       = "70th Division" 
       type     = infantry 
       strength   = 60
       model      = 5
      }
      Division = 
     {  experience = 30 
       id         = {  type = 22300 id = 3  } 
       name       = "72nd Division" 
       type     = infantry 
       strength   = 60
       model      = 5
      } 
    }
   landunit = 
   {  location = 1252 # Taiyuan
     name     = "33rd Corps" 
     # leader =  
     id       = {  type = 22300 id = 4  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22300 id = 5  } 
       name       = "69th Division" 
       type     = infantry 
       strength   = 60
       model      = 5
      }
      Division = 
     {  experience = 30 
       id         = {  type = 22300 id = 6  } 
       name       = "71st Division" 
       type     = infantry 
       strength   = 60
       model      = 5
      } 
    }
   landunit = 
   {  location = 1252 # Taiyuan
     name     = "34th Corps" 
     # leader =  
     id       = {  type = 22300 id = 7  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22300 id = 8  } 
       name       = "66th Division" 
       type     = infantry 
       strength   = 60
       model      = 5
      }
      Division = 
     {  experience = 30 
       id         = {  type = 22300 id = 9  } 
       name       = "73rd Division" 
       type     = infantry 
       strength   = 60
       model      = 5
      } 
    }
	   landunit = 
   {  location = 1252 # Taiyuan
     name     = "35th Corps" 
     # leader =  
     id       = {  type = 22300 id = 10  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22300 id = 11  } 
       name       = "68th Division" 
       type     = infantry 
       strength   = 60
       model      = 5
      }
      Division = 
     {  experience = 30 
       id         = {  type = 22300 id = 12  } 
       name       = "101st Division" 
       type     = infantry 
       strength   = 60
       model      = 5
      } 
    }
		   landunit = 
   {  location = 1252 # Taiyuan
     name     = "Shanxi Independent Divisions" 
     # leader =  
     id       = {  type = 22300 id = 13  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22300 id = 14  } 
       name       = "New 2nd Division" 
       type     = infantry 
       strength   = 60
       model      = 5
      }
      Division = 
     {  experience = 30 
       id         = {  type = 22300 id = 15  } 
       name       = "1st Cavalry Division" 
       type     = cavalry
       strength   = 33
       model      = 5
      } 
	  Division = 
     {  experience = 30 
       id         = {  type = 22300 id = 16  } 
       name       = "2nd Cavalry Division" 
       type     = cavalry
       strength   = 33
       model      = 5
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22300 id = 17  } 
       name       = "1st Independent Brigade" 
       type     = infantry 
       strength   = 40
       model      = 5
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22300 id = 18  } 
       name       = "2nd Independent Brigade" 
       type     = infantry 
       strength   = 40
       model      = 5
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22300 id = 19  } 
       name       = "3rd Independent Brigade" 
       type     = infantry 
       strength   = 40
       model      = 5
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22300 id = 20  } 
       name       = "7th Independent Brigade" 
       type     = infantry 
       strength   = 40
       model      = 5
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22300 id = 21  } 
       name       = "8th Independent Brigade" 
       type     = infantry 
       strength   = 40
       model      = 5
      }
    }
  } 
 
