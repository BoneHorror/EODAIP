 
 ############################## 
 # Country definition for UPE # 
 ############################## 
  
 country = 
 {  tag                    = UPE
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes RES = yes} }
	flag_ext 	= _33
	dissent = 10
	# Resource Reserves 
	energy                 = 20
	metal                  = 20
	rare_materials         = 20
	oil                    = 0
	supplies               = 5000 
	money                  = 5
	capital                = 1279 # Kashgar
	manpower               = 10
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
   ownedprovinces         = {  1279 1275 1282 1274  } 
   controlledprovinces    = {  1279 1275 1282 1274  } 
# East Turkestan
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
  inventions = {  3000027 }
   diplomacy = 
   {
		relation = { tag = AFG value = 200 }
		relation = { tag = ENG value = 100 }   
    } 
   SpyInfo                = {  country = "UPE" NumberOfSpies = 4  } 
   headofstate            = {  type = 9 id = 1400003  } 
   headofgovernment       = {  type = 9 id = 1400002  } 
   foreignminister        = {  type = 9 id = 1400004  } 
   armamentminister       = {  type = 9 id = 1400010  } 
   ministerofsecurity     = {  type = 9 id = 1400012  } 
   ministerofintelligence = {  type = 9 id = 1400014  } 
   chiefofstaff           = {  type = 9 id = 1400005  } 
   chiefofarmy            = {  type = 9 id = 1400008  } 
   #chiefofnavy            = {  type = 9 id = 420009  } 
   #chiefofair             = {  type = 9 id = 420010  } 
  landunit = 
   {  location = 1279
     name     = "National Army of the Islamic Republic East Turkestan Republic" 
     id       = {  type = 25600 id = 10  } 
     Division = 
     {  id   = {  type = 25600 id = 11 } 
       name = "Kashgar Division" 
       type = militia 
	   strength = 80
	   model    = 3
      } 
     Division = 
     {  id   = {  type = 25600 id = 12  } 
       name = "Hotan Division" 
       type = militia
	   strength = 80
	   model    = 3
      } 
     Division = 
     {  id   = {  type = 25600 id = 13  } 
       name = "Qumul-Qurqan Revolutionary Divisions" 
       type = militia 
	   strength = 80
	   model    = 3
      }
	 Division = 
	 {  id   = {  type = 25600 id = 14  }
	   name = "Aqsu Cavalry Regiments"
	   type = cavalry
	   strength = 80
	   model = 5
	  }
	 Division = 
	 {  id   = {  type = 25600 id = 15  }
	   name = "Aletai Cavalry Regiments"
	   type = cavalry
	   strength = 80
	   model = 5
	  }
    } 
  } 
 