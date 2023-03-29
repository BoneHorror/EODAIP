 
 ############################## 
 # Country definition for AFG # 
 ############################## 
  
country = {
	tag                    = AFG 
   ai = "afg_1936.ai"
   ai_settings = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
   dissent = 20
	# Resource Reserves 
	energy                 = 360
	metal                  = 180
	rare_materials         = 90
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
	manpower               = 18 
      
	capital                = 2171 
	policy = {
		date              = {  year = 0 month = january day = 0  } 
		democratic        = 3 
		political_left    = 3 
		free_market       = 7 
		freedom           = 6 
		professional_army = 5 
		defense_lobby     = 1 
		interventionism   = 1 
	} 
 
	nationalprovinces      = {  2168 2169 2170 2171 2172 2173 1529 1537  } 
	ownedprovinces         = {  2168 2169 2170 2171 2172 2173  } 
	controlledprovinces    = {  2168 2169 2170 2171 2172 2173  } 
   
	# ROTW Minor Tech '36 
	# Group E 1936 techs 
	# ###################### 
	techapps = {  
		#Interwar Armoured Car  
		2860
		# Inf support 
		1910 1920 1930 1940 1950 1960
		#Light Field Artillery  
		2290
		#SW Tank 
		7600 7610	
		#1916 lgt. Infantry Division  
		1010  1020 1030 1040 1050 1060 1070 1160  1170 1180 1190 1200 1210 1220 1230 
		#1916 Cavalry Division  
		13060 13070 13080 1310 1320 1330 1340 1350
		#Early Agriculture
		5700 
		# Great War Land Doctrines (entente)
		6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
	} 
	
	inventions = { 3000027 }
	diplomacy = {
		relation = {  tag = ENG value = -75  } 
		relation = {  tag = ITA value = 50  } 
		relation = {  tag = PER value = 25  } 
		relation = {  tag = SAU value = 50  } 
		relation = {  tag = SOV value = 1  } 
		relation = {  tag = TUR value = 50  } 
		relation =   
        {  tag        = UPE 
         value      = 200  
         guaranteed = {  day = 29 month = december year = 1936 }   
        }   
	} 
	SpyInfo                = {  country = "AFG" NumberOfSpies = 5  } 
	headofstate            = {  type = 9 id = 155089  } 
	headofgovernment       = {  type = 9 id = 155002  } 
	foreignminister        = {  type = 9 id = 155003  } 
	armamentminister       = {  type = 9 id = 155004  } 
	ministerofsecurity     = {  type = 9 id = 155005  } 
	ministerofintelligence = {  type = 9 id = 155006  } 
	chiefofstaff           = {  type = 9 id = 155007  } 
	chiefofarmy            = {  type = 9 id = 155008  } 
	chiefofnavy            = {  type = 9 id = 155009  } 
	chiefofair             = {  type = 9 id = 155010  } 

	##################### 
	###AFGHANISTAN OOB### 
	##################### 

	# Even though it was actually a brigade, I made Farah cavalry to have 
	# max_strength of 100.
	# This is because Afghani army had several smaller but still independent 
	# cavalry units.
	# I also put max_strength 80 for smaller infantry divisions to differ them 
	# from mixed infantry divisions.
	# Mixed infantry divisions had also cavalry attachments, and thus their 
	# strength was higher than strength of regular infantry divisions.

	landunit = {
		id = { type = 10000 id = 1 }
		location = 2171 # Kabul
		name = "Royan Afghan Household"
		division = {
			id = { type = 10000 id = 2 }
			name = "Royal Household Division"
			strength = 100
			type = infantry
			model = 7
			extra = cavalry_brigade 
			brigade_model = 8
		}
	}
	landunit = {
		id = { type = 10000 id = 8 }
		location = 2171 # Kabul
		name = "1st Army Corps"
		division = {
			id = { type = 10000 id = 3 }
			name = "1st Infantry Division"
			strength = 40
			type = infantry
			model = 6
			extra = artillery 
			brigade_model = 0
		}
		division = {
			id = { type = 10000 id = 4 }
			name = "2nd Infantry Division"
			strength = 40
			type = infantry
			model = 6
		}
		division = {
			id = { type = 10000 id = 5 }
			name = "3rd Infantry Division"
			strength = 40
			type = infantry
			model = 6
		}
	}
	landunit = {
		id = { type = 10000 id = 10 }
		location = 2169 # Chakhansur
		name = "Farah Military District"
		division = {
			id = { type = 10000 id = 11 }
			name = "Farah Cavalry Brigade"
			strength = 20
			type = cavalry 
			model = 7
		}
	}
	landunit = {
		id = { type = 10000 id = 12 }
		location = 2171 # Ghazni
		name = "Ghazni Military District"
		division = {
			id = { type = 10000 id = 13 }
			name = "Ghazni Mixed Division"
			strength = 40
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 10000 id = 14 }
		location = 2169 # Kandahar
		name = "Kandahar Military District"
		division = {
			id = { type = 10000 id = 15 }
			name = "Kandahar Mixed Division"
			strength = 40
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 10000 id = 16 }
		location = 2172 # Herat
		name = "Herat Military District"

		division = {
			id = { type = 10000 id = 17 }
			name = "Herat Mixed Division"
			strength = 40
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 10000 id = 18 }
		location = 2168 # Mazar-e Sharif
		name = "Turkestan Military District"
		division = {
			id = { type = 10000 id = 19 }
			name = "Turkestan Mixed Division"
			strength = 40
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 10000 id = 20 }
		location = 2170 # Faizabad
		name = "Kadaghan & Badakhchan Military District"

		division = {
			id = { type = 10000 id = 21 }
			name = "Kadaghan & Badakhchan Mixed Division"
			strength = 40
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 10000 id = 22 }
		location = 2172 # Maymana
		name = "Maymeneh Military District"
		division = {
			id = { type = 10000 id = 23 }
			name = "Maymeneh Mixed Regiment"
			strength = 10
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 10000 id = 24 }
		location = 2170 # Jalalabad
		name = "The East Military District"
		division = {
			id = { type = 10000 id = 25 }
			name = "The East Mixed Division"
			strength = 40
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 10000 id = 6 }
		location = 2171 # 
		name = "The South Military District"
		division = {
			id = { type = 10000 id = 7 }
			name = "The South Mixed Division"
			strength = 40
			type = infantry
			model = 5
		}
	}
} 