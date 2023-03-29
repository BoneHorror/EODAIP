############################## 
 # Country definition for MAN # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag			= MAN 
	ai			= "man_1936.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes } }
	dissent					= 15
	puppet					= JAP 
	control					= JAP 
	# Resource Reserves 
	energy					= 900
	metal					= 450
	rare_materials			= 225
	transports				= 10
	oil						= 200 
	supplies				= 100 
	money					= 10 
	manpower				= 0 
	capital					= 1208 
   diplomacy = 
   { relation = {  tag = CHC value = -100  } 
     relation = {  tag = CHI value = -100  }
     relation = {  tag = CSX value = -100  } 
     relation = {  tag = U67 value = -200 } 
     relation = {  tag = CXB value = -75  } 
     relation = {  tag = CYN value = -75  } 
     relation = {  tag = CGX value = -75  } 
     relation = {  tag = GER value = 20  } 
     relation = {  tag = JAP value = 200 access = yes  } 
     relation = {  tag = SIA value = 75  } 
     relation = {  tag = USA value = 1  } 
    } 
	nationalprovinces	= { 1208 1219 } 
	ownedprovinces		= { 1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1217 1218 1220 1237 } 
	controlledprovinces	= { 1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1217 1218 1220 1237 }
	claimedprovinces	= { 1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1209 1210 1211 1212 1213 1214 1215 1216 1217 1218 1220 1235 1236 1237 } #Added to cores by events

   # ROTW Minor Tech '36 
   # Group E 1936 techs 
   # ###################### 
   # GW fighter 
   techapps               = {  
		#Interwar Fighter  
		4500 4510 4520 4530
		#Interwar Armoured Car  
		2860
		#Light Field Artillery  
		2290
		#SW Tank 
		7600 7610 2620 2010
		#Great War Infantry Division  
		1010  1020 1030 1040 1050 1060 
		#Interbellum 1930 Supply 
		1910 1920 1930 1940 1950 1960 1970
		#1916 Cavalry Division  
		13060 13070 13080 1310 1320 1330 1340 
		#Early Agriculture
		5700 
		#Naval Infantry
		#1560 
		#Medicine
		5600
		#Troopships
		3810
		#Engineers
		1830 1840
		#Manufactoring
		5810 5820
		# Basic Construction Engineering
		5800 5080 
		# Early Anti-Tank Artillery
		#2400  
		 
		 #Air Doctrines - ww2 techs
		27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
		 # Land Doctrines WW1 - Entente Line (default)
		6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
	} 
	inventions = { 3000027 }
   policy = 
   { date              = {  year = 0 month = january day = 0  } 
     democratic        = 1 
     political_left    = 4 
     freedom           = 3 
     free_market       = 3 
     professional_army = 2 
     defense_lobby     = 8 
     interventionism   = 8 
    } 

   SpyInfo                = {  country = "MAN" NumberOfSpies = 5  } 
   headofstate            = {  type = 9 id = 235001  } 
   headofgovernment       = {  type = 9 id = 235002  } 
   foreignminister        = {  type = 9 id = 235003  } 
   armamentminister       = {  type = 9 id = 235004  } 
   ministerofsecurity     = {  type = 9 id = 235005  } 
   ministerofintelligence = {  type = 9 id = 235006  } 
   chiefofstaff           = {  type = 9 id = 235007  } 
   chiefofarmy            = {  type = 9 id = 235008  } 
   chiefofnavy            = {  type = 9 id = 235009  } 
   chiefofair             = {  type = 9 id = 235010  } 
   # Basic Construction Engineering Development Process 
   landunit = 
   {  location = 1214 
     id       = {  type = 28500 id = 1  } 
     name     = "Fengtian Guard Army" 
     Division = 
     {  id       = {  type = 28500 id = 2  } 
        name     = "1st Mixed Brigade" 
        type     = infantry
		model = 6
        strength = 16
		#max_strength = 16
	    extra = cavalry_brigade
	    brigade_model = 5
      } 
     Division = 
     {  id       = {  type = 28500 id = 3  } 
        name     = "2nd Mixed Brigade" 
        type     = infantry
	    model = 6  
        strength = 13 
		#max_strength = 13
	    extra = cavalry_brigade
	    brigade_model = 5
      } 
     Division = 
     {  id       = {  type = 28500 id = 4  } 
        name     = "3rd Mixed Brigade" 
        type     = infantry
		model = 6  
        strength = 14
		#max_strength = 14
	    extra = cavalry_brigade
	    brigade_model = 5
      } 
     Division = 
     {  id       = {  type = 28500 id = 5  } 
        name     = "4th Mixed Brigade" 
        type     = infantry
		model = 3   
        strength = 10
		#max_strength = 10
	   	extra = cavalry_brigade
		brigade_model = 5
      } 
     Division = 
     {  id       = {  type = 28500 id = 6  } 
        name     = "5th Mixed Brigade" 
        type     = infantry
		model = 3   
        strength = 8
		#max_strength = 8
	   	extra = cavalry_brigade
		brigade_model = 5
      } 
     Division = 
     {  id       = {  type = 28500 id = 7  } 
        name     = "6th Mixed Brigade" 
        type     = infantry
		model = 3   
        strength = 13
		#max_strength = 13
	   	extra = cavalry_brigade
		brigade_model = 5
      } 
     Division = 
     {  id       = {  type = 28500 id = 8  } 
        name     = "7th Mixed Brigade" 
        type     = infantry
		model = 3   
        strength = 12
		#max_strength = 12
	   	extra = cavalry_brigade
		brigade_model = 5
      } 
     Division = 
     {  id       = {  type = 28500 id = 9  } 
        name     = "1st 2nd Cavalry Brigades" 
        type     = cavalry
		model = 6  
        strength = 24
		#max_strength = 24
      }
	 Division = 
     {  id       = {  type = 28500 id = 10  } 
        name     = "1st Teaching Brigade" 
        type     = infantry
		model = 6 
        strength = 24
		#max_strength = 24
      } 
    }
   landunit = 
    {  location = 1207 #Jilin 
     id       = {  type = 28500 id = 11  } 
     name     = "Kirin Guard Army" 
     Division = 
     {  id       = {  type = 28500 id = 12  } 
        name     = "1st Infantry Brigade" 
        type     = infantry
		model = 6
        strength = 24
		#max_strength = 24
	    extra = cavalry_brigade #Includes Cav Brigade
	    brigade_model = 5
      }
	 Division = 
     {  id       = {  type = 28500 id = 13  } 
        name     = "2nd Infantry Brigade" 
        type     = infantry
		model = 6
        strength = 23
		#max_strength = 23
	    extra = cavalry_brigade #Includes Cav Brigade
	    brigade_model = 5
      } 
	 Division = 
     {  id       = {  type = 28500 id = 14  } 
        name     = "3rd Infantry Brigade" 
        type     = infantry
		model = 6
        strength = 24
		#max_strength = 24
	    extra = cavalry_brigade #Includes Cav Brigade
	    brigade_model = 5
      } 
	  Division = 
     {  id       = {  type = 28500 id = 15  } 
        name     = "4th Infantry Brigade" 
        type     = infantry
		model = 6
        strength = 33
		#max_strength = 33
	    extra = cavalry_brigade #Includes Cav Brigade
	    brigade_model = 5
      } 
	  Division = 
     {  id       = {  type = 28500 id = 16  } 
        name     = "5th Infantry Brigade" 
        type     = infantry
		model = 6
        strength = 25
		#max_strength = 25
      }
	  Division = 
     {  id       = {  type = 28500 id = 17  } 
        name     = "7th Infantry Brigade" 
        type     = infantry
		model = 6
        strength = 18
		#max_strength = 18
      } Division = 
     {  id       = {  type = 28500 id = 18  } 
        name     = "8th Infantry Brigade" 
        type     = infantry
		model = 6
        strength = 18
		#max_strength = 18
      }
	  Division = 
     {  id       = {  type = 28500 id = 19  } 
        name     = "2nd Teaching Brigade" 
        type     = infantry
		model = 6
        strength = 20
		#max_strength = 20
      } 
	}
	landunit = 
	 {  location = 1207 #Jilin 
     id       = {  type = 28500 id = 20  } 
     name     = "Kirin Railway Guard" 
	 Division = 
     {  id       = {  type = 28500 id = 21  } 
        name     = "Sanrin Unit" 
        type     = garrison
		model = 3
        strength = 15
		#max_strength = 15
      } 
	}
	landunit = 
	 {  location = 1199 #Harbin 
     id       = {  type = 28500 id = 22  } 
     name     = "Heilongjiang Guard Army" 
	 Division = 
     {  id       = {  type = 28500 id = 23  } 
        name     = "1st Mixed Brigade" 
        type     = infantry
		model = 6
        strength = 31
		#max_strength = 31
	    extra = cavalry_brigade
	    brigade_model = 5
      } 
	 Division = 
     {  id       = {  type = 28500 id = 24  } 
        name     = "2nd Mixed Brigade" 
        type     = infantry
		model = 6
        strength = 31
		#max_strength = 31
	    extra = cavalry_brigade
	    brigade_model = 5
      } 
	 Division = 
     {  id       = {  type = 28500 id = 25  } 
        name     = "3rd Mixed Brigade" 
        type     = infantry
		model = 6
        strength = 32
		#max_strength = 32
	    extra = cavalry_brigade
	    brigade_model = 5
      } 
	 Division = 
     {  id       = {  type = 28500 id = 26  } 
        name     = "4th Mixed Brigade" 
        type     = infantry
		model = 6
        strength = 23
		#max_strength = 23
      } 
	 Division = 
     {  id       = {  type = 28500 id = 27  } 
        name     = "5th Mixed Brigade" 
        type     = infantry
		model = 6
        strength = 15
		#max_strength = 15
      } 
	}
    landunit = 
	 {  location = 1206 #Haila'er
     id       = {  type = 28500 id = 28  } 
     name     = "Hsingan Army" 
	 Division = 
     {  id       = {  type = 28500 id = 29 } 
        name     = "Hsingan Garrison" 
        type     = garrison
		model = 3
        strength = 43
		#max_strength = 43
      } 
	}
	landunit = 
	 {  location = 1237 #Ulayanqada
     id       = {  type = 28500 id = 30  } 
     name     = "Taoliao Army" 
	 Division = 
     {  id       = {  type = 28500 id = 31 } 
        name     = "Rehe Guard Army" 
        type     = infantry
		model = 6
        strength = 100
	    extra = cavalry_brigade
	    brigade_model = 5
      } 
	}
  } 
