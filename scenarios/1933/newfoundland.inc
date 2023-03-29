 ############################## 
 # Country definition for U60 # 
 ############################## 
country = { 
  tag       	 = U60
  puppet = ENG
  ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }
  capital   	 = 2137 
  manpower  	 = 0 
  # Resource Reserves 
  ai             = "U60_1914.ai"
  energy         = 405
  metal          = 202
  rare_materials = 101
  oil            = 125  
  supplies       = 125  
  money          = 5 
  # Others
  transports     = 60 
  escorts        = 0  
  # ######################   
  policy = 
  { date = { year = 0 month = january day = 0 } 
    democratic        = 10
    political_left    = 3 
    free_market       = 8 
    freedom           = 10 
    professional_army = 4 
    defense_lobby     = 2 
    interventionism   = 6
 }
 
  # ###################### 
  headofstate            = { type = 9 id = 1115001 }
  headofgovernment       = { type = 9 id = 1115002 }
  foreignminister        = { type = 9 id = 1115003 }
  armamentminister       = { type = 9 id = 1115004 }
  ministerofsecurity     = { type = 9 id = 1115005 }
  ministerofintelligence = { type = 9 id = 1115006 }
  chiefofstaff           = { type = 9 id = 1115007 }
  chiefofarmy            = { type = 9 id = 1115008 }
  chiefofnavy            = { type = 9 id = 1115009 }
  chiefofair             = { type = 9 id = 1115010 }  
  # ###################### 
  nationalprovinces    = { 2136 2137 2138
						 } 
  ownedprovinces       = { 2136 2137 2138
						 } 
  controlledprovinces  = { 2136 2137 2138
						 } 
  # ######################     
  # Commonwealth Tech '14 
  # UK 1914 techs
  # ###################### 

   techapps               = { 
	#Early Infantry Division  
	1010  1020 1030 
	#Basic Cavalry Division 
	13060 13070 
	#Great War Hospital System 
	14000
	#Naval Infantry

	#Engineers
	1830
	#Great War Tank 

	#Basic Armoured Car  

	#Great War Heavy Field Artillery 
	2290 
	#Early Static Anti-Air Artillery 

	#Basic Anti-Air Artillery Brigade 
	#Medicine
	5600
	#Improved Destroyer 
	3010 3020 
	#Early Light Cruiser 
	3110
	#Early Fighter  

	#Early Bomber 

	#Multirole fighter

	#ww1 strategic bomber

	#ww1 navalbomber

	#Mechanized Agriculture 
	5700
	#Improved Construction Engineering 

	#Basic Oil Refining 

	#Census Tabulating Machine 

	#ASW 18

	#Troopships
	3810

	#Landdoctrine ww1 - rest
	6500 6510 6530 

	#Land Doctrines

	#Naval Doctrines
	8010 8020 8040 8050 8060 8070 8080 8100 8110 8120 8150 8500 8900
	#Air Doctrines - ww1 techs
 }
  # ######################    
  diplomacy = 
  { relation = { tag = BEL value = 75 } 
    relation = { tag = BHU value = 200 } 
    relation = { tag = CAN value = 200 } 
    relation = { tag = ENG value = 200 } 
    relation = { tag = FIN value = 65 } 
    relation = { tag = FRA value = 150 } 
    relation = { tag = GER value = 1  } 
    relation = { tag = IRE value = 75 } 
    relation = { tag = IRQ value = 100 } 
    relation = { tag = ITA value = 1  } 
    relation = { tag = NEP value = 200 } 
    relation = { tag = NZL value = 200 } 
    relation = { tag = OMN value = 150 } 
    relation = { tag = SAF value = 200 } 
    relation = { tag = SAU value = 50 } 
    relation = { tag = USA value = 125 } 
    relation = { tag = YEM value = 150 } 
    relation = { tag = AST value = 200 } 
 }  
  # ######################    
  SpyInfo        = { country = "U60" NumberOfSpies = 1 } 
  # #################### 
  # Newfoundland OOB
  #landunit = 
  #{  id    = {  type = 6121 id = 1  } 
  # name   = "Royal Newfoundland Regiment" 
  # location = 2137 
  # Division = 
  # {  id    = {  type = 6121 id = 2  } 
  #  name   = "Royal Newfoundland Regiment" 
  #  strength = 1
  #  type   = infantry 
  #  model  = 3 
  #  } 
  # } 
  #navalunit = 
  #{  id    = {  type = 6121 id = 3  } 
  # location = 2137 
  # base   = 2137 
  # name   = "Newfoundland Transport Fleet" 
  # Division = 
  # {  id  = {  type = 6121 id = 4  } 
  #  name = "Newfoundland Transport Squadron" 
  #  type = transport 
  #	model = 0
  #  } 
  # } 
  } 
 
