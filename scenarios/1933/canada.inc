 
 ############################## 
 # Country definition for CAN # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = CAN 
	ai = "can_1936.ai"
	ai_settings = { flags = { MOB1 = yes MOB2 = yes } }
	dissent = 20
	# Resource Reserves 
	energy                 = 2460
	metal                  = 1230
	rare_materials         = 615
	oil                    = 500 
	supplies               = 500 
	money                  = 20 
	manpower               = 17 
	capital                = 2108 
	transports             = 160 
	escorts                = 1 
    
   diplomacy = 
   {  relation = {  tag = AST value = 200  } # was access = yes 
     relation = {  tag = BEL value = 150  } 
     relation = {  tag = BHU value = 200  } 
     relation = {  tag = ENG value = 200  } # was access = yes 
     relation = {  tag = FRA value = 150  } 
     relation = {  tag = GER value = 1  } 
     relation = {  tag = HOL value = 80  } 
     relation = {  tag = IRE value = 75  } 
     relation = {  tag = IRQ value = 100  } 
     relation = {  tag = ITA value = 1  } 
     relation = {  tag = NEP value = 200  } 
     relation = {  tag = NZL value = 200  } # was access = yes 
     relation = {  tag = OMN value = 150  } 
     relation = {  tag = SAF value = 200  } # was access = yes 
     relation = {  tag = USA value = 175  } 
     relation = {  tag = YEM value = 150  } 
    } 
   SpyInfo                = {  country = "CAN" NumberOfSpies = 6  } 
   nationalprovinces      = {  2089 2090 2091 2092 2093 2094 2095 2096 2097 2098 2099 2100 2101 2102 2103 2104 2105 2106 2107 2108 2109 2110 2111 2112 2113 2114 2115 2116 2117 2118 2119 2120 2121 2122 2123 2124 2125 2126 2127 2128 2129 2130 2131 2132 2133 2134 2135 2136 2137 2138 2148 2149  } 
   ownedprovinces         = {  2089 2090 2091 2092 2093 2094 2095 2096 2097 2098 2099 2100 2101 2102 2103 2104 2105 2106 2107 2108 2109 2110 2111 2112 2113 2114 2115 2116 2117 2118 2119 2120 2121 2122 2123 2124 2125 2126 2127 2128 2129 2130 2131 2132 2133 2134 2148 2149   } 
   controlledprovinces    = {  2089 2090 2091 2092 2093 2094 2095 2096 2097 2098 2099 2100 2101 2102 2103 2104 2105 2106 2107 2108 2109 2110 2111 2112 2113 2114 2115 2116 2117 2118 2119 2120 2121 2122 2123 2124 2125 2126 2127 2128 2129 2130 2131 2132 2133 2134 2148 2149 
                             } 
							 
	# Commonwealth Tech '36 
	# Canada 1933 techs 
	# ###################### 
	techapps = { 
	# Infantry Division  
	1010  1020 1030 1040 1050 1060 1070 1080 1090
	# Cavalry Division 
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370
	# Hospital System 
	14000 14010 14020
	# Inf support 
	1910 1920 1930 1940 1950 1960 1970 1980
	#Engineers
	1830 1840 1850 1860
	# Tank 
	7600 7610 2620 2010 2630
	# Armoured Car  
	2860 2870 2880 2020
	# Field Artillery 
	2290 2300 2310
	# Static Anti-Air Artillery 
	2800 2450 21180 21190 
	# Anti-Air Artillery Brigade 
	2810 2820 2510
	# Destroyer 
	3010 3020 3030 3040 3050 
	# Light Cruiser 
	3110 3120 
	#Early Fighter  
	4500 4510 4520 4530 4540 4550 4010 4020
	#Early Bomber 
	4600 4610 4620 4630 4120 4130
	#Multirole fighter
	4300 4310 4320 4330
	#ww1 strategic bomber
	4800 4810 4820
	#ww1 navalbomber
	#SEAPLANES
	4740 4750 4760 4770
	#Transport Planes
	4290
	#Mechanized Agriculture 
	5700 5710 5010 5020
	#Manufactoring
	5810 5820 5050 5830 5060
	#Improved Construction Engineering 
	5800 5080 5090 
	#Basic Oil Refining 
	#5190
	#Computers & cryptografi
	5310 54010 54020 54030 5316 5326
	#Torpedo & ASW 18
	3720 3730 3736 3740 3900
	#Troopships
	3810 3820
	#Medicine
	5600 5610 5620 5630
	#Exp. Rocket
	5560
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910	
	# Defensive Focus Grand Battleplan Path (FRA / UK)
	6560 
	# Engagement Theories
	8010 8020 8040 8050 8060 8070 8080
	# Naval Supremacy
	8100 8110 8120 8150 8160 8200 8210
	# Naval Interdiction
	8500 8510 8520 8600
	# Engagement Tactics
	8900 8910 8920 8930 8940

	#Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470
	#Carrier Pigeons
	30020 30030  
} 
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 9 
     political_left    = 2 
     free_market       = 10 
     freedom           = 10 
     professional_army = 2 
     defense_lobby     = 2 
     interventionism   = 4 
    }
	
   headofstate            = {  type = 9 id = 220182  } #Sir Vere Ponsonby
   headofgovernment       = {  type = 9 id = 220013  } #R.B. Bennett
   foreignminister        = {  type = 9 id = 220019  } #R.B. Bennett 
   armamentminister       = {  type = 9 id = 220184  } #Donald Matheson Sutherland
   ministerofsecurity     = {  type = 9 id = 220177  } #Hugh Guthrie
   ministerofintelligence = {  type = 9 id = 220060  } #Maurice Pope
   chiefofstaff           = {  type = 9 id = 220186  } #Andrew McNaughton
   chiefofarmy            = {  type = 9 id = 220187  } #Andrew McNaughton
   chiefofnavy            = {  type = 9 id = 220188  } #Walter Hose
   chiefofair             = {  type = 9 id = 220189  } #James Lindsay Gordon
   landunit = 
   {  id       = {  type = 20000 id = 1  } 
     name     = "Canadian Army" 
     location = 2108 
     Division = 
     {  id       = {  type = 20000 id = 2  } 
       name     = "1st Canadian Infantry Division" 
       strength = 30 
       type     = infantry 
       model    = 7 
      } 
     Division = 
     {  id       = {  type = 20000 id = 3  } 
       name     = "2nd Canadian Infantry Division" 
       strength = 5 
       type     = infantry 
       model    = 6 
      } 
    } 

   airunit = 
   {  id       = {  type = 20000 id = 4  } 
     name     = "Royal Canadian Air Force" 
     location = 2108 
     base     = 2108
     Division = 
     {  id       = {  type = 20000 id = 5  } 
       name     = "No.1 Group RCAF" 
       strength = 15
       type     = multi_role
       model    = 2 
      } 
     Division = 
     {  id       = {  type = 20000 id = 6  } 
       name     = "No.2 Group RCAF" 
       strength = 15 
       type     = transport_plane
       model    = 0 
      } 
    } 

	navalunit = { 
		id = { type = 20000 id = 7 } 
		name = "Royal Canadian Navy" 
		location = 2132 
		base = 2132 
		division = { 
			id = { type = 20000 id = 8 } 
			name = "Destroyer Division 1" 
			type = destroyer 
			model = 3
			strength = 40
			} 
		division = { 
			id = { type = 20000 id = 9 } 
			name = "Destroyer Division 2" 
			type = destroyer 
			model = 4
			strength = 40
			} 
		division = { 
			id = { type = 20000 id = 10 } 
			name = "1st Transport Flotilla" 
			type = transport 
			model = 1
			} 
		division = { 
			id = { type = 20000 id = 11 } 
			name = "2nd Transport Flotilla" 
			type = transport 
			model = 1
			} 
		division = { 
			id = { type = 20000 id = 12 } 
			name = "3rd Transport Flotilla" 
			type = transport 
			model = 1
			} 
		} 
		
		#Garrison divisions deployed on Canadian east coast in reaction to successful Operation Sealion
		
		landdivision = { dormant = yes id = { type = 14800 id = 862 }  name = "Canadian Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked  = yes }
		landdivision = { dormant = yes id = { type = 14800 id = 863 }  name = "Canadian Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked  = yes }
		landdivision = { dormant = yes id = { type = 14800 id = 864 }  name = "Canadian Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked  = yes }
		landdivision = { dormant = yes id = { type = 14800 id = 865 }  name = "Canadian Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked  = yes }
		landdivision = { dormant = yes id = { type = 14800 id = 866 }  name = "Canadian Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked  = yes }
		landdivision = { dormant = yes id = { type = 14800 id = 867 }  name = "Canadian Home Defense"  type = garrison model = 6 extra = artillery brigade_model = 9 locked  = yes }
		
  } 
 
