 
 ############################## 
 # Country definition for SAF # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = SAF 
	ai = "saf_1936.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
	dissent = 20
	# Resource Reserves 
	energy                 = 720
	metal                  = 360
	rare_materials         = 180
	transports = 50
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
	manpower               = 51 
	capital                = 876 
   diplomacy = 
   {  relation = {  tag = AST value = 200  } # was access = yes 
     relation = {  tag = BEL value = 35  } 
     relation = {  tag = BHU value = 200  } 
     relation = {  tag = CAN value = 200  } # was access = yes 
     relation = {  tag = ENG value = 200  } # was access = yes 
     relation = {  tag = FIN value = 50  } 
     relation = {  tag = FRA value = 150  } 
     relation = {  tag = GER value = 1  } 
     relation = {  tag = IRE value = 80  } 
     relation = {  tag = IRQ value = 100  } 
     relation = {  tag = ITA value = 1  } 
     relation = {  tag = NEP value = 200  } 
     relation = {  tag = NZL value = 200  } # was access = yes 
     relation = {  tag = OMN value = 150  } 
     relation = {  tag = POR value = 125  } 
     relation = {  tag = USA value = 125  } 
     relation = {  tag = YEM value = 150  } 
    } 
   SpyInfo                = {  country = "SAF" NumberOfSpies = 5  } 
   nationalprovinces      = {  872 873 875 876 878 879 880 881 882 883 884 885 886  } 
   ownedprovinces         = {  872 873 875 876 878 879 880 881 882 883 884 885 886  } 
   controlledprovinces    = {  872 873 875 876 878 879 880 881 882 883 884 885 886  } 
   # Commonwealth Tech '36 
   # UK 1936 techs 
   # ###################### 
   techapps               = { 
#Early Fighter  
4500 4510 4520 4530 4540 4550 4010 4020
#Early Bomber 
4600 4610 4620 4630 4120 4130
#Basic Armoured Car  
2860 2870 2880 2020
#Naval Infantry
#1560 1570
#Engineers
1830 1840 1850 
#Great War Tank 
7600 7610 2620 2010 2630
#Great War Heavy Field Artillery 
2290 2300 2310
#Early Static Anti-Air Artillery 
2800 2450 21180 21190
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Early Infantry Division  
1010  1020 1030 1040 1050 1060 1070 1080 1090
#Basic Cavalry Division 
13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380
#Mechanized Agriculture 
5700 5710 5010 5020
#Manufactoring
5810 5820 5050 5830
#Improved Construction Engineering 
5800 5080 5090
#Computers & cryptografi
5310 54010 54020 54030 5316 5326
#Basic Oil Refining 
##5190 
#Medicine
5600 5610 5620
#Troopships
3810

#Great War Hospital System 
14000 14010 14020
#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960 1970
#Great War Destroyer 
3010 3020 3030 3040
#Torpedo & ASW 18
3720 3730 3736 3740 3750 3900

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010  9140 
# Land Doctrines WWI - Entente Line
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
#Landdoctrine ww2 - Defensive Focus (Commonwealth)
6560
# Engagement Theories
8010 8020 8040 8050 8060 8070 8080
# Naval Supremacy
8100 8110 8120 8150 8160 8200 8210
# Naval Interdiction
8500 8510 8520 8600
# Engagement Tactics
8900 8910 8920 8930 8940
#Carrier Pigeons
30020 30030
    } 
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 7 
     political_left    = 5 
     freedom           = 10 
     free_market       = 8 
     professional_army = 3 
     defense_lobby     = 5 
     interventionism   = 6 
    } 

   headofstate            = {  type = 9 id = 425001  } 
   headofgovernment       = {  type = 9 id = 425002  } 
   foreignminister        = {  type = 9 id = 425003  } 
   armamentminister       = {  type = 9 id = 425004  } 
   ministerofsecurity     = {  type = 9 id = 425005  } 
   ministerofintelligence = {  type = 9 id = 425006  } 
   chiefofstaff           = {  type = 9 id = 425007  } 
   chiefofarmy            = {  type = 9 id = 425008  } 
   chiefofnavy            = {  type = 9 id = 425009  } 
   chiefofair             = {  type = 9 id = 425010  } 
   landunit = 
   {  name     = "South African Army" 
     location = 876 
     id       = {  type = 26600 id = 1  } 
     Division = 
     {  id       = {  type = 26600 id = 2  } 
       name     = "1st South African Infantry Division" 
       type     = infantry
	   model    = 6 
       strength = 5 
      } 
     Division = 
     {  id       = {  type = 26600 id = 3  } 
       name     = "2nd South African Infantry Division" 
       type     = infantry
	   model    = 6 
       strength = 5 
      } 
     Division = 
     {  id       = {  type = 26600 id = 4  } 
       name     = "3rd South African Infantry Division" 
       type     = infantry
	   model    = 6 
       strength = 5 
      } 
     Division = 
     {  id       = {  type = 26600 id = 5  } 
       name     = "1st Mounted Commando Division" 
       type     = cavalry
	   model    = 7 
       strength = 10 
      } 
    } 

	navalunit = { 
		id = { type = 26600 id = 6 } 
		name = "Royal South African Navy" 
		location = 880 
		base = 880 
		division = { 
			id = { type = 26600 id = 7 } 
			name = "1st Transport Flotilla" 
			type = transport 
			model = 1
			} 
		} 
  } 
 
