 
 ############################## 
 # Country definition for TIB # 
 ############################## 
  
 country = 
 {  tag                    = TIB 
	ai = "tib_1936.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes } }
	dissent = 20
	# Resource Reserves 
	energy                 = 300
	metal                  = 150
	rare_materials         = 75
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
	capital                = 1289 
	manpower               = 0 
      
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
   democratic    		= 2 
   political_left  		= 2 
   freedom      		= 1 
   free_market    		= 5 
   professional_army 	= 2 
   defense_lobby     	= 2 
   interventionism  	= 1 
    } 
 nationalprovinces   = {  1294 1286 1287 1288 1289 1295 1290 1278 1285 } 
   ownedprovinces         = { 1286 1287 1288 1289 1290 1294 1295  } 
   controlledprovinces    = { 1286 1287 1288 1289 1290 1294 1295  } 
 claimedprovinces = { 1455 1458 1283 1284 1292 1293 1262}
# Tibet
   techapps = { 
	
	# Construction Engineering
	5800

	# Crypto - Up to 1922
	5316 5326

	# Infantry Division
	1010 1020 1030 1040 
	# Mountain Division
	1160 1170 1180 1190 1200 1210 
	# Cavalry Division  
	13060 13070 13080 1310
	# Supply 
	1910 1920 1930

	# Field Artillery 
	2290

	# Hospital System
	14000
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670

	} 

blueprints = {
	# Medicine (most were still imported)
	5600

	# Artillery
	2300
	
	# Infantry
	1050 1060
	
	# Mountain
	1220
}
inventions = { 3000027 }
   SpyInfo                = {  country = "TIB" NumberOfSpies = 4  } 
   headofstate            = {  type = 9 id = 440075  } #13th Dalai Lama
   headofgovernment       = {  type = 9 id = 440002  } 
   foreignminister        = {  type = 9 id = 440003  } 
   armamentminister       = {  type = 9 id = 440004  } 
   ministerofsecurity     = {  type = 9 id = 440005  } 
   ministerofintelligence = {  type = 9 id = 440006  } 
   chiefofstaff           = {  type = 9 id = 440007  } 
   chiefofarmy            = {  type = 9 id = 440008  } 
   chiefofnavy            = {  type = 9 id = 440009  } 
   chiefofair             = {  type = 9 id = 440010  } 
	# Tibet 1933
   landunit = 
   {  location = 1289 #Lhasa 
     name     = "Xizang Army" 
     id       = {  type = 10700 id = 1  } 
     Division = 
     {  id    = {  type = 10700 id = 2  } 
       name  = "1st 2nd 3rd Regiments" 
	   strength = 18
       type  = infantry 
	   model    = 3
	   extra1 = cavalry_brigade
	   brigade_model1 = 2
      } 
     Division = 
     {  id   = {  type = 10700 id = 3  } 
       name  = "4th 5th 6th Regiments" 
	   strength = 9
       type  = infantry 
	   model    = 4
	   extra1 = cavalry_brigade
	   brigade_model1 = 2
      } 
     Division = 
     {  id   = {  type = 10700 id = 4  } 
       name = "7th 8th 9th 10th Regiments" 
       type = infantry
	   strength = 12
	   model    = 3
	   extra1 = cavalry_brigade
	   brigade_model1 = 2
      } 
    }
  } 
 
