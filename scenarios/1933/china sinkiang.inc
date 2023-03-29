 
 ############################## 
 # Country definition for SIK # 
 ############################## 
  
 country = 
 {  tag                    = SIK 
	ai = "sik_1936.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes RES = yes} }
	dissent = 40
	# Resource Reserves 
	energy                 = 240
	metal                  = 120
	rare_materials         = 60
	oil                    = 5000 
	supplies               = 2000 
	money                  = 10 
	capital                = 1281 # Urumqi 
	manpower               = 5
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     freedom           = 3 
     free_market       = 3 
     professional_army = 6
     defense_lobby     = 5 
     interventionism   = 5 
    } 
   nationalprovinces      = {  1273 1274 1275 1276 1277 1278 1279 1280 1281 1282  } 
   ownedprovinces         = {  1273 1276 1277 1280 1281   } 
   controlledprovinces    = {  1281 1277 } 
# Xinjiang
   techapps = { 
	
	# Manufacturing - Up to 1910
	5810
	# Construction Engineering
	5800

	# Crypto - Up to 1922
	5316 5326

	# Infantry Division
	1010 1020 1030 1040 1050 1060 
	# Mountain Division
	1160 1170 1180 1190 1200 1210 
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 1350
	# Engineers
	1830
	# Supply 
	1910 1920 1930 1940 1950

	# Field Artillery 
	2290 2300 2310

	# Hospital System
	14000 14010 
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910


	} 

blueprints = {
	
	# Infantry
	1070

	# Mountain
	1220

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

	# Hospital System
	14020

	
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
  inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = CHC value = 40  } 
     relation = {  tag = SOV value = 125  } 
     relation = {  tag = TAN value = 125  } 
     relation = {  tag = CGX value = 100  } 
     relation = {  tag = CXB value = 100  } 
    } 
   SpyInfo                = {  country = "SIK" NumberOfSpies = 4  } 
   headofstate            = {  type = 9 id = 420031  } #Jin Shuren
   headofgovernment       = {  type = 9 id = 420002  } 
   foreignminister        = {  type = 9 id = 420003  } 
   armamentminister       = {  type = 9 id = 420004  } 
   ministerofsecurity     = {  type = 9 id = 420005  } 
   ministerofintelligence = {  type = 9 id = 420006  } 
   chiefofstaff           = {  type = 9 id = 420007  } 
   chiefofarmy            = {  type = 9 id = 420008  } 
   chiefofnavy            = {  type = 9 id = 420009  } 
   chiefofair             = {  type = 9 id = 420010  } 
   #######
   # Xinjiang 1933
   # http://forum.paradoxplaza.com/forum/showthread.php?687389-OOB-and-information-of-China-for-moders&p=15441005&viewfull=1#post15441005
   #######
   landunit = 
   {  location = 1281 #Urumqi
     name     = "Anti Imperialist Army" 
     id       = {  type = 25600 id = 20  } 
     Division = 
     {  id   = {  type = 25600 id = 21  } 
       name = "Guard Regiment" 
       type = infantry 
	   strength = 15
	   model    = 4
      } 
     Division = 
     {  id   = {  type = 25600 id = 22 } 
       name = "Dihua City Defense Battalion" 
       type = garrison
	   strength = 8 
	   model    = 3
      } 
     Division = 
     {  id   = {  type = 25600 id = 23  } 
       name = "Training Regiment" 
       type = militia
	   strength = 10
	   model    = 3
      } 
    }
   landunit = 
   {  location = 1281 #Urumqi
     #location = 1280 #Ghulja
     name     = "Yili Garrison Command" 
     id       = {  type = 25600 id = 24  } 
     Division = 
     {  id   = {  type = 25600 id = 25  } 
       name = "Yili-Tacheng Garrisons" 
       type = garrison 
	   strength = 5
	   model    = 3
      } 
    }
   landunit = 
   {  location = 1281 #Urumqi
     #location = 1273 #Aletai
     name     = "Chenghua Garrison Command" 
     id       = {  type = 25600 id = 26  } 
     Division = 
     {  id   = {  type = 25600 id = 27  } 
       name = "Ashan Garrison" 
       type = garrison 
	   strength = 5
	   model    = 3
      } 
    }
	landunit = 
   {  location = 1281 #Urumqi
     #location = 1276 #Karamay
     name     = "Qitai City Defense Command" 
     id       = {  type = 25600 id = 28 } 
     Division = 
     {  id   = {  type = 25600 id = 29  } 
       name = "Qitai Garrison" 
       type = garrison 
	   strength = 8
	   model    = 3
      } 
    }
	landunit = 
   {
     location = 1277 #Qumul
     name     = "Hami Garrison Command" 
     id       = {  type = 25600 id = 30 } 
     Division = 
     {  id   = {  type = 25600 id = 31  } 
       name = "Hami Garrison" 
       type = garrison 
	   strength = 4
	   model    = 3
      } 
    }
	landunit = 
   {  location = 1281 #Urumqi
     name     = "Tushantuo Garrison Command" 
     id       = {  type = 25600 id = 32 } 
     Division = 
     {  id   = {  type = 25600 id = 33  } 
       name = "12th Infantry 8th Cavalry" 
       type = infantry 
	   strength = 12
	   model    = 5
      } 
    }
    landunit = 
   {  location = 1281 #Urumqi
	  #location = 1279 #Kashgar
     name     = "Kashengeer Garrison Command" 
     id       = {  type = 25600 id = 34 } 
     Division = 
     {  id   = {  type = 25600 id = 35  } 
       name = "4th 5th 7th 9th Cavalry Regiments" 
       type = cavalry 
	   strength = 20
	   model    = 6
      } 
	 Division = 
     {  id   = {  type = 25600 id = 36  } 
       name = "7th Division" 
       type = infantry
	   strength = 15
	   model    = 6
      } 
    }
    landunit = 
   {  location = 1281 #Urumqi
      #location = 1275 #Aqsu
     name     = "Yanqi Garrison Command" 
     id       = {  type = 25600 id = 37 } 
     Division = 
     {  id   = {  type = 25600 id = 38  } 
       name = "Yanqi Garrison" 
       type = garrison 
	   strength = 4
	   model    = 3
      } 
    }
    landunit = 
   {  location = 1281 #Urumqi
      #location = 1282 #Hotan
     name     = "White Russian Expeditionary Force" 
     id       = {  type = 25600 id = 39 } 
     Division = 
     {  id   = {  type = 25600 id = 40  } 
       name = "6th Cavalry Regiment" 
       type = cavalry
	   strength = 6
	   model    = 5
	   extra1    = artillery
	   brigade_model1 = 4
      }
    }
  } 
 