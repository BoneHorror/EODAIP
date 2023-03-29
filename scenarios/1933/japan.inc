############################## 
# Country definition for JAP # 
############################## 
  
##################### 
# Country main data # 
##################### 
  
country = {
	tag                    = JAP 
	ai = "jap_1933.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes} }
	belligerence           = 10 
	capital                = 1552 
	manpower               = 200
	# Resource Reserves 
	energy                 = 1000 
	metal                  = 1000 
	rare_materials         = 500 
	oil                    = 500 
	supplies               = 500 
	money                  = 100 
	transports             = 640 
	escorts                = 100 
    
   	diplomacy = {
		relation = {  tag = BEL value = -25  } 
		relation = {  tag = CGX value = -75  } 
		relation = {  tag = CHC value = -200  } 
		relation = {  tag = CHI value = -100  } 
		relation = {  tag = CHL value = 20  } 
		relation = {  tag = CSX value = -100  } 
		relation = {  tag = CXB value = -75  } 
		relation = {  tag = CYN value = -75  } 
		relation = {  tag = U67 value = -200 } 
		relation = {  tag = ENG value = -25  } 
		relation = {  tag = ETH value = 35  } 
		relation = {  tag = FIN value = 20  } 
		relation = {  tag = FRA value = -20  } 
		relation = {  tag = GER value = 20  } 
		relation = {  tag = HOL value = -50  } 
		relation = {  tag = MAN value = 200 access = yes  } 
		relation = {  tag = SIA value = 75  } 
		relation = {  tag = SOV value = -10  } 
		relation = {  tag = USA value = 15  } 
	} 
	SpyInfo                = {  country = "JAP" NumberOfSpies = 9  } 
    
	nationalprovinces = {  
		1543 1544 1545 1546 1547 1548 1549 1550 1551 1552 1553 1554 1555 1556 1557 1558 1559 1560 1561 1562 1563 1564 1661 1662 1663 1664 1672 
		1541 1542 # Sakhalin
        1228 1229 1230 1231 1232 1233 # South Korea 
		1221 1222 1223 1224 1225 1226 1227 # North Korea
		1361 1362 1363 1364 # Taiwan 
	} 
	ownedprovinces = {  
		1219 1221 1223 1224 1225 1226 1227 1228 1230 1231 1232 1233 1361 1364 1542 1543 1544 1545 1546 1547 1548 1549 1550 1551 1552 1553 1554 1555 1556 1557 1558 1559 1560 1561 1562 1563 1564 1661 1662 1663 1664 1665 1666 1667 1668 1669 1670 1671 1672 1674 1675 1676 1677 1681 1684 1685 1686 
		# Sakhalin
		1222 1229 1363 
		#Japan in China        
		1216 1235 1236 1245 1246 1362
		#Shanghai
		1338
	} 
	controlledprovinces = {  
		1219 1221 1223 1224 1225 1226 1227 1228 1230 1231 1232 1233 1361 1362 1364 1542 1543 1544 1545 1546 1547 1548 1549 1550 1551 1552 1553 1554 1555 1556 1557 1558 1559 1560 1561 1562 1563 1564 1661 1662 1663 1664 1665 1666 1667 1668 1669 1670 1671 1672 1674 1675 1676 1677 1681 1684 1685 1686  
		# Sakhalin 
		1222 1229 1363 
		#Japan in China        
		1216 1235 1236 1245 1246
		#Shanghai
		1338
	} 
	claimedprovinces = { 
		1665 1666 1667 1668 1669 1670 1671 1672 1674 1675 1676 1677 1681 1684 1685 1686 #Pacific Island
		1219 #Port Arthur / Dalian
		1216 1235 1236 1245 #Tangshan (border between Manchukuo and Japan under Japanese rule for gameplay reason)
		1683 #Guam 
		1240 #North Chahar
        #Shanghai
		1338
	} 	
	
	# JAP 1933 techs 
	# ###################### 
	techapps = { 
		# Infantry Division  
		1010 1020 1030 1040 1050 1060 1070 1080 1090
		# Mountain
		1160 1170 1180 1190 1200 1210 1220 1230 1240
		# Cavalry Division  
		13060 13070 13080 1310 1320 1330 1340 1350 1360 1370
		# Marines
		1560 1570 1580
		# Engineers
		1830 1840 1850 1860
		# Interbellum 1930 Supply 
		1910 1920 1930 1940 1950 1960 1970 1980
		# Tanks 
		7600 7610 2620 2010 2630 2640 2646
		# Armored Car  
		2860 2870 2880 2020
		# Field Artillery 
		2290 2300 2310 2900 2910 2920
		# Early Anti-Tank Artillery 
		#2400
		# Static Anti-Air Artillery 
		2800 2450 21180 21190
		# Anti-Air Artillery Brigade 
		2810 2820 2510
		# Destroyer 
		3010 3020 3030 3040 3050 3060 
		# Light Cruiser 
		3110 3120 3130 3140 3150 
		# Heavy Cruiser 
		3210 3220 3230 3240 3250 
		# Battlecruiser
		3310 3320 3330 3340
		# Battleship 
		3410 3420 3430 3440 3450 3456 3460
		# Aircraft Carrier
		3510 3520 
		# Light carrier 
		12100 12110 12120 12130
		# Submarine
		3610 3620 3630 3640 
		# Torpedos & ASW
		3720 3730 3736 3740 3750 3760 
		# Troopships
		3810 3820
		# Early Fighter  
		4500 4510 4520 4530 4540 4550 4010 4020
		# Early Bomber 
		4600 4610 4620 4630 4120 4130
		# Basic Naval Bomber 
		4700 4710 
		# Transports
		4290
		# Multirole fighter
		4300 4310 4320 4330 4340
		# Seaplanes
		4740 4750 4760 4770 4780
		# Strategic Bomber
		4800 4810 4820
		# CAG 34
		4900 4910 4920
		# Modern Agriculture
		5700 5710 5010
		# Manufacturing
		5810 5820 5050 5830
		# Construction Engineering 
		5800 5080 5090 
		# Basic Oil Refining 
		#5190 
		# Computers & Cryptography
		5310 54010 54020 54030 
		5316 5326 5327
		# Medicine
		5600 5610 5620
		# Exp. Rocket
		5560
		# Great War Land Doctrines (entente)
		6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
		# Land Doctrines (Light Infantry line)
		6390
		# Hospital System 
		14000 14010
		# Naval Doctrines
		# Engagement Theories
		8010 8020 8030 8040 8050 8060 8070 8080
		# Naval Supremacy
		8100 8110 8120 8150
		# Naval Interdiction
		8500 8510 8520 8550 8560 8600 8610
		# Engagement Tactics - Fleet-in-Being column
		8900 8910 8920 8930 8940 8950
		# Subsidiary Carrier Role
		81650
		# Amphibious Warfare
		82300
		# Logistic Support
		82500
		# Air Doctrines - ww2 techs
		27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470   
		#Carrier Pigeons
		30020 30030
	} 
	blueprints = { 81730 81740 4190} 
	inventions = { 3000027 }

	policy = {
		date              = {  year = 0 month = january day = 0  } 
		democratic        = 4 
		political_left    = 2 
		freedom           = 1#3 
		free_market       = 4 # 3 
		professional_army = 5
		defense_lobby     = 7 # 8 
		interventionism   = 8 
	} 
	peacetime_ic_mod       = 0.8 # +0.2 by 1 event pre-war
	ic_modifier				= 1.05 #
	headofstate            = {  type = 9 id = 50001  } 
	headofgovernment       = {  type = 9 id = 50323  } # Makoto Saito
	foreignminister        = {  type = 9 id = 50259  } # Uchida Kosai
	armamentminister       = {  type = 9 id = 50300  } # Takahashi Korekiyo
	ministerofsecurity     = {  type = 9 id = 50078  } # Yamamoto Tatsuo
	ministerofintelligence = {  type = 9 id = 50006  } 
	chiefofstaff           = {  type = 9 id = 50007  } 
	chiefofarmy            = {  type = 9 id = 50008  } 
	chiefofnavy            = {  type = 9 id = 50009  } 
	chiefofair             = {  type = 9 id = 50010  } 
	
	
	### Japan Land OOB ### 
	
	landunit = {
		id       = {  type = 13016 id = 1  } 
		name     = "Kantôgun" 
		location = 1208 
		division = {
			id       = {  type = 13016 id = 2  } 
			name     = "Kantôgun saikô shireibu" 
			strength = 40 
			type     = hq 
			model    = 2 
		} 
		division = {
			id       = {  type = 13016 id = 3  } 
			name     = "Dai 2 Hoheishidan" 
			strength = 100 
			type     = infantry 
			model    = 7
			extra1   = cavalry_brigade
			brigade_model1 = 5
 			extra2   = engineer
			brigade_model2 = 3
		} 
		division = {
			id       = {  type = 13016 id = 6  } 
			name     = "Dai 7 Hoheishidan" 
			strength = 100 
			type     = infantry 
			model    = 7 
			extra1   = cavalry_brigade
			brigade_model1 = 5
			extra2   = engineer 
			brigade_model2 = 3
		} 
		division = {
			id       = {  type = 13016 id = 7  } 
			name     = "Dai 8 Hoheishidan" 
			strength = 100
			type     = infantry 
			model    = 7 
			extra    = engineer 
			brigade_model = 3
		} 
		division = {
			id       = {  type = 13016 id = 9  } 
			name     = "Dai 9 Hoheishidan" 
			strength = 100
			type     = infantry 
			model    = 7 
			extra1   = cavalry_brigade
			brigade_model1 = 5
			extra2   = engineer 
			brigade_model2 = 3
		} 
		division = {
			id       = {  type = 13016 id = 10  } 
			name     = "Dai 10 Hoheishidan" 
			strength = 100
			type     = infantry 
			model    = 7 
			extra1   = cavalry_brigade
			brigade_model1 = 5
			extra2   = engineer 
			brigade_model2 = 3
		} 
		division = {
			id       = {  type = 13016 id = 22  } 
			name     = "Dai 19 Hoheishidan" 
			strength = 100
			type     = infantry 
			model    = 7 
			extra1   = cavalry_brigade
			brigade_model1 = 5
			extra2   = anti_air
			brigade_model2 = 1
		} 
		division = {
			id       = {  type = 13016 id = 2299  } 
			name     = "Dai 24 Hoheishidan" 
			strength = 50
			type     = infantry 
			model    = 6
			extra    = engineer
			brigade_model = 3
		} 
		division = {
			id       = {  type = 13016 id = 1010  } 
			name     = "Dai 25 Hoheishidan" 
			strength = 50
			type     = infantry 
			model    = 7 
			extra1   = cavalry_brigade
			brigade_model1 = 5
			extra2   = engineer 
			brigade_model2 = 3
		} 
		division = {
			id       = {  type = 13016 id = 2298  } 
			name     = "Dai 26 Hoheishidan" 
			strength = 50
			type     = infantry 
			model    = 6
			extra    = engineer
			brigade_model = 3
		} 
		division = {
			id       = {  type = 13016 id = 1100  } 
			name     = "Dai 28 Hoheishidan" 
			strength = 50
			type     = infantry 
			model    = 7 
			extra1   = cavalry_brigade
			brigade_model1 = 5
			extra2   = engineer 
			brigade_model2 = 3
		} 
		division = {
			id       = {  type = 13016 id = 1110  } 
			name     = "Dai 29 Hoheishidan" 
			strength = 50
			type     = infantry 
			model    = 7 
			extra    = light_armor_brigade
			brigade_model = 2
		} 
	} 
	landunit = {
		id       = {  type = 13016 id = 5  } 
		name     = "Kihei gurupu" 
		location = 1209
		division = {
			id       = {  type = 13016 id = 11  } 
			name     = "Dai 1 Kihei ryodan" 
			strength = 70
			type     = cavalry 
			model    = 9 
		} 
		division = {
			id       = {  type = 13016 id = 12  } 
			name     = "Dai 3 Kihei ryodan" 
			strength = 55
			type     = cavalry 
			model    = 9 
		} 
		division = {
			id       = {  type = 13016 id = 13  } 
			name     = "Dai 4 Kihei ryodan" 
			strength = 70
			type     = cavalry 
			model    = 9 
			extra    = engineer 
			brigade_model = 3
		} 
	} 

	landunit = {
		id       = {  type = 13016 id = 8  } 
		name     = "Seibu Gun" 
		location = 1560
		division = {
			id       = {  type = 13016 id = 23  } 
			name     = "Dai 11 Hoheishidan" 
			strength = 100
			type     = infantry 
			model    = 7 
			extra1   = cavalry_brigade
			brigade_model1 = 5
			extra2   = engineer 
			brigade_model2 = 3
		} 
		division = {
			id       = {  type = 13016 id = 25  } 
			name     = "Dai 12 Hoheishidan" 
			strength = 100
			type     = infantry 
			model    = 7 
			extra1   = light_armor_brigade
			brigade_model1 = 2
			extra2   = engineer
			brigade_model2 = 3
		} 
		division = {
			id       = {  type = 13016 id = 33  } 
			name     = "Dai 18 Hoheishidan" 
			strength = 100
			type     = infantry 
			model    = 6 
			extra1   = artillery
			brigade_model1 = 6
			extra2   = engineer 
			brigade_model2 = 3
		} 
		division = {
			id       = {  type = 13016 id = 34  } 
			name     = "Dai 21 Hoheishidan" 
			strength = 50
			type     = infantry 
			model    = 6 
			extra    = engineer 
			brigade_model = 3
		} 
		division = {
			id       = {  type = 13016 id = 36  } 
			name     = "Dai 23 Hoheishidan" 
			strength = 50
			type     = infantry 
			model    = 6
			extra1   = light_armor_brigade
			brigade_model1 = 2
			extra2   = engineer
			brigade_model2 = 3
		} 
		division = {
			id       = {  type = 13016 id = 737  } 
			name     = "Dai 101 Hoheishidan" 
			strength = 50
			type     = infantry 
			model    = 7 
			extra1   = cavalry_brigade
			brigade_model1 = 6
			extra2   = engineer
			brigade_model2 = 3
		} 
		division = {
			id       = {  type = 13016 id = 837  } 
			name     = "Dai 106 Hoheishidan" 
			strength = 50
			type     = infantry 
			model    = 7 
			extra1   = cavalry_brigade
			brigade_model1 = 6
			extra2   = engineer
			brigade_model2 = 3
		} 
	}
	landunit = {
		id       = {  type = 13016 id = 16  } 
		name     = "Shina chutongun" 
		location = 1245
		division = {
			id       = {  type = 13016 id = 37  } 
			name     = "Dai 5 Hoheishidan" 
			strength = 100
			type     = infantry 
			model    = 7 
			extra1   = cavalry_brigade
			brigade_model1 = 6
			extra2   = engineer
			brigade_model2 = 3
		} 
		division = {
			id       = {  type = 13016 id = 4  } 
			name     = "Dai 6 Hoheishidan" 
			strength = 100 
			type     = infantry 
			model    = 7 
			extra1   = cavalry_brigade
			brigade_model1 = 6
			extra2   = engineer
			brigade_model2 = 3
		} 
		division = {
			id       = {  type = 13016 id = 40  } 
			name     = "Dai 20 Hoheishidan" 
			strength = 100
			type     = infantry 
			model    = 7 
			extra1   = cavalry_brigade
			brigade_model1 = 5
			extra2   = engineer 
			brigade_model2 = 3
		} 
			division = {
			id       = {  type = 13016 id = 44  } 
			name     = "Dai 27 Hoheishidan" 
			strength = 50
			type     = infantry 
			model    = 6
			extra    = engineer
			brigade_model = 3
		} 
	} 
	landunit = {
	    id       = {  type = 13016 id = 43  }
		name     = "Akita Gun"
		location = 1547
		division = {
			id       = {  type = 13016 id = 446  }
			name     = "Dai 108 Hoheishidan"
			strength = 50
			type     = infantry
			model    = 6
			extra    = engineer
			brigade_model = 3
		}
		division = {
			id       = {  type = 13016 id = 449  }
			name     = "Dai 114 Hoheishidan"
			strength = 50
			type     = infantry
			model    = 6
			extra    = engineer
			brigade_model = 3
		}
	}
	landunit = {
	    id       = {  type = 13016 id = 447  }
		name     = "Kanazawa Gun"
		location = 1556
		division = {
			id       = {  type = 13016 id = 448  }
			name     = "Dai 109 Hoheishidan"
			strength = 50
			type     = infantry
			model    = 6
			extra    = engineer
			brigade_model = 3
		}
	}
	landunit = {
		id       = {  type = 13016 id = 21  } 
		name     = "Tobu gun" 
		location = 1557
		division = {
			id       = {  type = 13016 id = 45  } 
			name     = "Dai 3 Hoheishidan"  
			strength = 100 
			type     = infantry 
			model    = 7 
			extra1   = artillery
			brigade_model1 = 6
			extra2    = anti_air 
			brigade_model = 1
		} 
		division = {
			id       = {  type = 13016 id = 48  } 
			name     = "Dai 4 Hoheishidan" 
			strength = 100
			type     = infantry 
			model    = 6
			extra1   = cavalry_brigade
			brigade_model1 = 4
			extra2   = engineer 
			brigade_model2 = 2
		} 
		division = {
			id       = {  type = 13016 id = 53  } 
			name     = "Dai 13 Hoheishidan" 
			strength = 50
			type     = infantry 
			model    = 6
			extra1   = cavalry_brigade
			brigade_model1 = 5
 			extra2   = engineer
			brigade_model2 = 3
		} 
		division = {
			id       = {  type = 13016 id = 58  } 
			name     = "Dai 15 Hoheishidan" 
			strength = 50
			type     = infantry 
			model    = 6 
			extra1   = cavalry_brigade
			brigade_model1 = 5
 			extra2   = artillery
			brigade_model2 = 6
		} 
		division = {
			id       = {  type = 13016 id = 60  } 
			name     = "Dai 17 'Ranan' Hoheishidan" 
			strength = 50
			type     = infantry 
			model    = 6 
			extra1   = cavalry_brigade
			brigade_model1 = 5
 			extra2   = artillery
			brigade_model2 = 6
		} 
	} 
	landunit = {
		id       = {  type = 13016 id = 24  } 
		name     = "Tokyo keibi shireibu"  
		location = 1552
		division = {
			id       = {  type = 13016 id = 17  } 
			name     = "Daihon'ei" 
			strength  = 40 
			type     = hq 
			model    = 2 
			extra    = anti_air
			brigade_model = 1
		} 
		division = {
			id       = {  type = 13016 id = 70  } 
			name     = "Dai 1 Hoheishidan" 
			strength = 100
			type     = infantry 
			model    = 7 
			extra1   = artillery 
			brigade_model1 = 6
			extra2   = engineer
			brigade_model2 = 2
		} 
		division = {
			id       = {  type = 13016 id = 18  } 
			name     = "Dai 14 Hoheishidan" 
			strength = 100
			type     = infantry 
			model    = 7 
			extra1   = cavalry_brigade
			brigade_model1 = 4
			extra2   = engineer 
			brigade_model2 = 2
		} 
		division = {
			id       = {  type = 13016 id = 29  } 
			name     = "Dai 22 Hoheishidan" 
			strength = 50
			type     = infantry
			model    = 6
			extra    = engineer 
			brigade_model = 3
		} 
		division = {
			id       = {  type = 13016 id = 30  } 
			name     = "Konoe Shidan" 
			strength = 100
			type     = infantry
			model    = 8
			extra1   = artillery 
			brigade_model1 = 6
			extra2   = anti_air 
			brigade_model2 = 1
		} 
		division = {
			id       = {  type = 13016 id = 31  } 
			name     = "Dai 2 Kihei ryodan" 
			strength = 70
			type     = cavalry 
			model    = 9 
			extra    = light_armor_brigade
			brigade_model = 2
		} 
	} 
	landunit = {
		id       = {  type = 13016 id = 28  } 
		name     = "Kure Kaigunku"  
		location = 1554
		division = {
			id       = {  type = 13016 id = 26  } 
			name     = "Kure Rikusentai"
			strength = 10
			type     = marine
			model    = 2
		} 
	} 
	landunit = {
		id       = {  type = 13016 id = 32  } 
		name     = "Maizuru Kaigunku" 
		location = 1558
		division = {
			id       = {  type = 13016 id = 20  } 
			name     = "Maizuru Rikusentai" 
			strength = 10
			type     = marine
			model    = 2
		} 
	} 
	landunit = {
		id       = {  type = 13016 id = 35  } 
		name     = "Sasebo Kaigunku" 
		location = 1560 
		division = {
			id       = {  type = 13016 id = 38  } 
			name     = "Sasebo Rikusentai" 
			strength = 10
			type     = marine
			model    = 2 
		} 
	} 
	landunit = {
		id       = {  type = 13016 id = 39  } 
		name     = "Yokosuka Kaigunku" 
		location = 1552
		division = {
			id       = {  type = 13016 id = 27  } 
			name     = "Yokosuka Rikusentai" 
			strength = 10
			type     = marine
			model    = 2
		} 
		division = {
			id       = {  type = 13016 id = 2097  } 
			name     = "Shanghai Rikusentai" 
			strength = 17
			type     = marine
			model    = 2
		} 
	}
	landunit = {
		id       = {  type = 13016 id = 499  }
		name     = "Chuo Gun"
		location = 1558
		division = {
			id       = {  type = 13016 id = 19  } 
			name     = "Dai 16 Hoheishidan" 
			strength = 65
			type     = infantry 
			model    = 7 
			extra1   = cavalry_brigade
			brigade_model1 = 5
 			extra2   = engineer
			brigade_model2 = 3
		} 
	}
	landunit = {
		id       = {  type = 13016 id = 4222  }
		name     = "Ryojun Kaigunku"
		location = 1219
		division = {
			id       = { type = 13016 id = 4223 }
			name     = "Ryojun Rikusentai"
			strength = 15
			type     = garrison
			model    = 3
		}
	}
	landunit = {
		id       = {  type = 13016 id = 42  } 
		name     = "Uchi komu ko gun" # Inner Mongolian army
		location = 1209
		division = {
			id       = {  type = 13016 id = 14  } 
			name     = "Uchi komu ko gun" 
			strength = 100 
			type     = cavalry 
			model    = 7 
		} 
	} 
	landunit = {
		id       = {  type = 13016 id = 46  } 
		name     = "Higashi no Kawakita gun" # Chinese collaborationists 
		location = 1245
		division = {
			id       = {  type = 13016 id = 50  } 
			name     = "Dai 1 Tai" 
			strength = 80
			type     = militia
			model    = 4
		} 
		division = {
			id       = {  type = 13016 id = 51  } 
			name     = "Dai 2 Tai" 
			strength = 80
			type     = militia
			model    = 4
		} 
		division = {
			id       = {  type = 13016 id = 55  } 
			name     = "Dai 3 Tai" 
			strength = 80
			type     = militia
			model    = 4
		} 
		division = {
			id       = {  type = 13016 id = 56  } 
			name     = "Dai 4 Tai" 
			strength = 80
			type     = militia
			model    = 4
		} 
		division = {
			id       = {  type = 13016 id = 72  } 
			name     = "Kunren tai" 
			strength = 40
			type     = militia
			model    = 3
		} 
	} 
	### Japan Navy OOB ### 
  
	navalunit = { 
		id = { type = 13016 id = 112 } 
		name = "Rengo Kantai" 
		location = 1554 
		base = 1554 
		division = { 
			id = { type = 13016 id = 123 } 
			name = "Nagato" 
			type = battleship 
			model = 5 
			extra1 = floatplane
			brigade_model1 = 5
		} 
		division = { 
			id = { type = 13016 id = 125 } 
			name = "Mutsu" 
			type = battleship 
			model = 5 
			extra1 = floatplane
			brigade_model1 = 5
		} 
		division = { 
			id = { type = 13016 id = 175 } 
			name = "Akagi" 
			type = carrier 
			model = 0 
			extra1 = cag 
			brigade_model1 = 1 
		} 
		division = { 
			id = { type = 13016 id = 177 } 
			name = "Kaga" 
			type = carrier 
			model = 0 
			extra1 = cag 
			brigade_model1 = 1 
		} 
		division = { 
			id = { type = 13016 id = 173 } 
			name = "Hosho" 
			type = escort_carrier 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 263 } 
			name = "Notoro" 
			type = escort_carrier 
			model = 0 
		} 
		division = { 
			id = { type = 13016 id = 150 } 
			name = "Yubari" 
			type = light_cruiser 
			model = 3 
			extra1 = naval_torpedoes_s
			brigade_model1 = 0
		} 
		division = { 
			id = { type = 13016 id = 139 } 
			name = "Tenryu" 
			type = light_cruiser 
			model = 2
		} 
		division = { 
			id = { type = 13016 id = 127 } 
			name = "Tatsuta" 
			type = light_cruiser 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 131 } 
			name = "Tama" 
			type = light_cruiser 
			model = 2 
			extra1 = floatplane
			brigade_model1 = 3
		} 
		division = { 
			id = { type = 13016 id = 132 } 
			name = "Kitakami" 
			type = light_cruiser 
			model = 2 
			extra1 = floatplane
			brigade_model1 = 3
		}  
		division = { 
			id = { type = 13016 id = 135 } 
			name = "Kiso" 
			type = light_cruiser 
			model = 2 
			extra1 = floatplane
			brigade_model1 = 3
		} 
		division = { 
			id = { type = 13016 id = 140 } 
			name = "Yura" 
			type = light_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 3
			extra2 = naval_torpedoes_s
			brigade_model2 = 0
		} 
		division = { 
			id = { type = 13016 id = 146 } 
			name = "Kinu" 
			type = light_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 3
			extra2 = naval_torpedoes_s
			brigade_model2 = 0
		} 
		division = { 
			id = { type = 13016 id = 182 } 
			name = "Dai 7 Kuchikusentai" 
			type = destroyer 
			model = 4 
			extra1 = naval_torpedoes_s
			brigade_model1 = 0
		} 
		division = { 
			id = { type = 13016 id = 197 } 
			name = "Dai 29 Kuchikusentai" 
			type = destroyer 
			model = 3 
		} 
		division = { 
			id = { type = 13016 id = 198 } 
			name = "Dai 30 Kuchikusentai" 
			type = destroyer 
			model = 3 
		} 
		division = { 
			id = { type = 13016 id = 201 } 
			name = "Dai 3 Kuchikusentai" 
			type = destroyer 
			model = 3 
		} 
		division = { 
			id = { type = 13016 id = 207 } 
			name = "Dai 34 Kuchikusentai" 
			type = destroyer 
			model = 3 
		} 
		division = { 
			id = { type = 13016 id = 229 } 
			name = "I-5" 
			type = nuclear_submarine
			model = 0
		} 
		division = { 
			id = { type = 13016 id = 226 } 
			name = "Dai 18 Sensuisentai" 
			type = submarine 
			model = 3 
		} 
		division = { 
			id = { type = 13016 id = 227 } 
			name = "Dai 19 Sensuisentai" 
			type = submarine 
			model = 3 
		} 
		division = { 
			id = { type = 13016 id = 230 } 
			name = "Dai 28 Sensuisentai" 
			type = submarine 
			model = 3 
		} 
		division = { 
			id = { type = 13016 id = 232 } 
			name = "Dai 1 Sensuisentai" 
			type = submarine 
			model = 3 
		} 
		division = { 
			id = { type = 13016 id = 233 } 
			name = "Dai 2 Sensuisentai" 
			type = submarine 
			model = 3 
		} 
		division = { 
			id = { type = 13016 id = 234 } 
			name = "Dai 26 Sensuisentai" 
			type = submarine 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 235 } 
			name = "Dai 27 Sensuisentai" 
			type = submarine 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 187 } 
			name = "Dai 1 Yusosentai" 
			type = transport 
			model = 1 
		} 
		division = { 
			id = { type = 13016 id = 188 } 
			name = "Dai 2 Yusosentai" 
			type = transport 
			model = 1 
		} 
		division = { 
			id = { type = 13016 id = 189 } 
			name = "Dai 3 Yusosentai" 
			type = transport 
			model = 1 
		} 
		division = { 
			id = { type = 13016 id = 221 } 
			name = "Dai 4 Yusosentai" 
			type = transport 
			model = 1 
		} 
		division = { 
			id = { type = 13016 id = 192 } 
			name = "Dai 5 Yusosentai" 
			type = transport 
			model = 1 
			} 
		division = { 
			id = { type = 13016 id = 191 } 
			name = "Dai 7 Yusosentai" 
			type = transport 
			model = 1 
		} 
		division = { 
			id = { type = 13016 id = 190 } 
			name = "Dai 8 Yusosentai" 
			type = transport 
			model = 1 
		} 
	}

	navalunit = { 
		id = { type = 13016 id = 116 } 
		name = "Dai 1 Kantai" 
		location = 1560 
		base = 1560 
		division = { 
			id = { type = 13016 id = 121 } 
			name = "Ise" 
			type = battleship 
			model = 4 
			extra1 = naval_anti_air_l
			brigade_model1 = 0
			extra2 = floatplane
			brigade_model2 = 5
		} 
		division = { 
			id = { type = 13016 id = 122 } 
			name = "Hyuga" 
			type = battleship 
			model = 4 
			extra1 = floatplane
			brigade_model1 = 5
		} 
		division = { 
			id = { type = 13016 id = 118 } 
			name = "Fuso" 
			type = battleship 
			model = 3 
			extra1 = naval_improved_hull_l
			brigade_model1 = 0
			extra2 = floatplane
			brigade_model2 = 5
		} 
		division = { 
			id = { type = 13016 id = 113 } 
			name = "Kongo" 
			type = battlecruiser 
			model = 1 
			extra1 = naval_improved_hull_l
			brigade_model1 = 0			
			extra2 = floatplane
			brigade_model2 = 5
			extra3 = naval_fire_controll_l
			brigade_model3 = 0
		} 
		division = { 
			id = { type = 13016 id = 115 } 
			name = "Haruna" 
			type = battlecruiser 
			model = 1 
			extra1 = naval_improved_hull_l
			brigade_model1 = 0
			extra2 = floatplane
			brigade_model2 = 5
		} 
		division = { 
			id = { type = 13016 id = 117 } 
			name = "Kirishima" 
			type = battlecruiser 
			model = 1 
			extra1 = naval_improved_hull_l
			brigade_model1 = 0
			extra2 = floatplane
			brigade_model2 = 5
		} 
		division = { 
			id = { type = 13016 id = 157 } 
			name = "Aoba" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
			extra2 = naval_torpedoes_s
			brigade_model2 = 0
		} 
		division = { 
			id = { type = 13016 id = 158 } 
			name = "Kinugasa" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
			extra2 = naval_torpedoes_s
			brigade_model2 = 0
		} 
		division = { 
			id = { type = 13016 id = 133 } 
			name = "Furutaka" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
			extra2 = naval_anti_air_s
			brigade_model2 = 0
			extra3 = naval_torpedoes_s
			brigade_model3 = 0
		} 
		division = { 
			id = { type = 13016 id = 156 } 
			name = "Kako" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
			extra2 = naval_anti_air_s
			brigade_model2 = 0
			extra3 = naval_torpedoes_s
			brigade_model3 = 0
		} 
		division = { 
			id = { type = 13016 id = 1152 } 
			name = "Sendai" 
			type = light_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 3
			extra2 = naval_torpedoes_s
			brigade_model2 = 0
		} 
		division = { 
			id = { type = 13016 id = 153 } 
			name = "Abukuma" 
			type = light_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 3
			extra2 = naval_torpedoes_s
			brigade_model2 = 0
		} 
		division = { 
			id = { type = 13016 id = 215 } 
			name = "Dai 11 Kuchikusentai" 
			type = destroyer 
			model = 4 
			extra1 = naval_torpedoes_s
			brigade_model1 = 0
		} 
		division = { 
			id = { type = 13016 id = 205 } 
			name = "Dai 12 Kuchikusentai" 
			type = destroyer 
			model = 4 
			extra1 = naval_torpedoes_s
			brigade_model1 = 0
		} 
		division = { 
			id = { type = 13016 id = 214 } 
			name = "Dai 19 Kuchikusentai" 
			type = destroyer 
			model = 4 
			extra1 = naval_torpedoes_s
			brigade_model1 = 0
		} 
		division = { 
			id = { type = 13016 id = 206 } 
			name = "Dai 17 Kuchikusentai" 
			type = destroyer 
			model = 3 
		} 
	} 
	
	navalunit = { 
		id = { type = 13016 id = 120 } 
		name = "Dai 2 Kantai" 
		location = 1558 
		base = 1558 
		division = { 
			id = { type = 13016 id = 163 } 
			name = "Myoko" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
			extra2 = naval_torpedoes_s
			brigade_model2 = 0
		} 
		division = { 
			id = { type = 13016 id = 160 } 
			name = "Haguro" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
			extra2 = naval_torpedoes_s
			brigade_model2 = 0
		} 
		division = { 
			id = { type = 13016 id = 159 } 
			name = "Nachi" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
			extra2 = naval_torpedoes_s
			brigade_model2 = 0
		} 
		division = { 
			id = { type = 13016 id = 166 } 
			name = "Takao" 
			type = heavy_cruiser 
			model = 4 
			extra1 = floatplane
			brigade_model1 = 4
			extra2 = naval_torpedoes_s
			brigade_model2 = 0
		} 
		division = { 
			id = { type = 13016 id = 165 } 
			name = "Atago" 
			type = heavy_cruiser 
			model = 4 
			extra1 = floatplane
			brigade_model1 = 4
			extra2 = naval_torpedoes_s
			brigade_model2 = 0
		} 
		division = { 
			id = { type = 13016 id = 169 } 
			name = "Maya" 
			type = heavy_cruiser 
			model = 4 
			extra1 = floatplane
			brigade_model1 = 4
			extra2 = naval_torpedoes_s
			brigade_model2 = 0
		} 
		division = { 
			id = { type = 13016 id = 167 } 
			name = "Chokai" 
			type = heavy_cruiser 
			model = 4 
			extra1 = floatplane
			brigade_model1 = 4
			extra2 = naval_torpedoes_s
			brigade_model2 = 0
		} 
		division = { 
			id = { type = 13016 id = 161 } 
			name = "Naka" 
			type = light_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 3
			extra2 = naval_torpedoes_s
			brigade_model2 = 0
		} 
		division = { 
			id = { type = 13016 id = 196 } 
			name = "Dai 16 Kuchikusentai" 
			type = destroyer 
			model = 3 
		} 
		division = { 
			id = { type = 13016 id = 213 } 
			name = "Dai 24 Kuchikusentai" 
			type = destroyer 
			model = 3 
		} 
	} 
	
	navalunit = { 
		id = { type = 13016 id = 124 } 
		name = "Dai 3 Kantai" 
		location = 1361 
		base = 1362 
		division = { 
			id = { type = 13016 id = 164 } 
			name = "Ashigara" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
			extra2 = naval_torpedoes_s
			brigade_model2 = 0
		} 
		division = {
			id = { type = 13016 id = 258 }
			name = "Iwate"
			type = heavy_cruiser
			model = 1
		}
		division = { 
			id = { type = 13016 id = 130 } 
			name = "Kuma" 
			type = light_cruiser 
			model = 2
 			extra1 = floatplane
			brigade_model1 = 3
		} 
		division = { 
			id = { type = 13016 id = 145 } 
			name = "Natori" 
			type = light_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 3
			extra2 = naval_torpedoes_s
			brigade_model2 = 0
		} 
		division = { 
			id = { type = 13016 id = 151 } 
			name = "Isuzu" 
			type = light_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 3
			extra2 = naval_torpedoes_s
			brigade_model2 = 0
		} 
		division = { 
			id = { type = 13016 id = 137 } 
			name = "Nagara" 
			type = light_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 3
			extra2 = naval_torpedoes_s
			brigade_model2 = 0
		} 
		division = { 
			id = { type = 13016 id = 154 } 
			name = "Jintsu" 
			type = light_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 3
			extra2 = naval_torpedoes_s
			brigade_model2 = 0
		} 
		division = { 
			id = { type = 13016 id = 186 } 
			name = "Dai 5 Kuchikusentai" 
			type = destroyer 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 200 } 
			name = "Dai 22 Kuchikusentai" 
			type = destroyer 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 134 } 
			name = "Dai 9 Sensuisentai" 
			type = submarine 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 217 } 
			name = "Dai 6 Yusosentai" 
			type = transport 
			model = 1 
		} 
		division = { 
			id = { type = 13016 id = 224 } 
			name = "Dai 9 Yusosentai" 
			type = transport 
			model = 1 
		} 
	} 
	
	navalunit = { 
		id = { type = 13016 id = 126 } 
		name = "Dai 2 Kaigunku" 
		location = 1554 
		base = 1554 
		division = {
			id = { type = 13016 id = 262 }
			name = "Yakumo"
			type = heavy_cruiser
			model = 1
		}
		division = { 
			id = { type = 13016 id = 199 } 
			name = "Dai 13 Kuchikusentai" 
			type = destroyer 
			model = 3
			strength = 80 
		} 
		division = { 
			id = { type = 13016 id = 147 } 
			name = "Dai 6 Sensuisentai" 
			type = submarine 
			model = 2 
		} 
	}
		
	navalunit = { 
		id = { type = 13016 id = 172 } 
		name = "Chinkai Kaigunku" 
		location = 1232 
		base = 1232 
		division = { 
			id = { type = 13016 id = 194 } 
			name = "Dai 32 Kuchikusentai" 
			type = destroyer 
			model = 3 
			strength = 80 
		} 
	} 
			
	navalunit = { 
		id = { type = 13016 id = 193 } 
		name = "Ominato Kaigunku" 
		location = 1551 
		base = 1551 
		division = { 
			id = { type = 13016 id = 195 } 
			name = "Dai 1 Kuchikusentai" 
			type = destroyer 
			model = 2 
		} 
	} 
	
	navalunit = { 
		id = { type = 13016 id = 231 } 
		name = "Kaigun Heigakko" 
		location = 1552 
		base = 1552 
		division = { 
			id = { type = 13016 id = 114 } 
			name = "Hiei" 
			type = battlecruiser 
			model = 1 
		} 
		division = { 
			id = { type = 13016 id = 148 } 
			name = "Asama" 
			type = heavy_cruiser 
			model = 1 
		} 
		division = { 
			id = { type = 13016 id = 138 } 
			name = "Izumo" 
			type = heavy_cruiser 
			model = 1
		} 
		division = {
			id = { type = 13016 id = 259 }
			name = "Azuma"
			type = heavy_cruiser
			model = 1
		}
		division = { 
			id = { type = 13016 id = 170 } 
			name = "Kasuga" 
			type = heavy_cruiser 
			model = 1 
		} 
		division = { 
			id = { type = 13016 id = 171 } 
			name = "Nisshin" 
			type = heavy_cruiser 
			model = 1 
		} 
		division = { 
			id = { type = 13016 id = 136 } 
			name = "Oi" 
			type = light_cruiser 
			model = 2 
			extra1 = floatplane
			brigade_model1 = 4
		} 
		division = { 
			id = { type = 13016 id = 129 } 
			name = "Yahagi" 
			type = light_cruiser 
			model = 1 
		} 
		division = { 
			id = { type = 13016 id = 128 } 
			name = "Hirado" 
			type = light_cruiser 
			model = 1 
		} 
		division = { 
			id = { type = 13016 id = 152 } 
			name = "Tsushima" 
			type = light_cruiser 
			model = 0 
			extra1 = naval_fire_controll_s
			brigade_model1 = 0
		} 
		division = { 
			id = { type = 13016 id = 184 } 
			name = "Dai 9 Kuchikusentai" 
			type = destroyer 
			model = 2 
			} 
		division = { 
			id = { type = 13016 id = 185 } 
			name = "Dai 4 Kuchikusentai" 
			type = destroyer 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 181 } 
			name = "Dai 8 Kuchikusentai" 
			type = destroyer 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 183 } 
			name = "Dai 4 Sensuisentai" 
			type = submarine
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 2249 } 
			name = "Dai 5 Sensuisentai" 
			type = submarine
			model = 2
		} 
		division = { 
			id = { type = 13016 id = 2250 } 
			name = "Dai 7 Sensuisentai" 
			type = submarine
			model = 2
		} 
	}

	
	### Japan Air OOB ### 
	
	airunit = {
		location = 1552 
		base     = 1552 
		id       = {  type = 13016 id = 236  } 
		name     = "Dai 1 Hikogun" 
		division = {
			id    = {  type = 13016 id = 237  } 
			name  = "Dai 3 Hikorentai" 
			type  = interceptor 
			model = 6
			strength = 75
		} 
		division = {
			id    = {  type = 13016 id = 241  } 
			name  = "Dai 4 Hikorentai" 
			type  = interceptor 
			model = 6
			strength = 75
		} 
	} 
	airunit = {
		location = 1219 
		base     = 1219 
		id       = {  type = 13016 id = 238  } 
		name     = "Dai 2 Hikogun" 
		division = {
			id    = {  type = 13016 id = 239  } 
			name  = "Dai 1 Hikorentai" 
			type  = interceptor 
			model = 7
		} 
		division = {
			id    = {  type = 13016 id = 243  } 
			name  = "Dai 2 Hikorentai" 
			type  = interceptor 
			model = 7
		} 
		division = {
			id    = {  type = 13016 id = 245  } 
			name  = "Dai 5 Hikorentai" 
			type  = tactical_bomber 
			model = 5
			strength = 30 
		} 
	} 
	airunit = {
		location = 1362 
		base     = 1362 
		id       = {  type = 13016 id = 246  } 
		name     = "Dai 11 Kokukantai" 
		division = {
			id       = {  type = 13016 id = 253  } 
			name     = "Dai 3 Kokutai" 
			strength = 35 
			type     = interceptor 
			model    = 6
		} 
		division = {
			id    = {  type = 13016 id = 247  } 
			name  = "Dai 7 Kokutai" 
			type  = naval_bomber 
			model = 1
			strength = 75 
		} 
		division = {
			id    = {  type = 13016 id = 249  } 
			name  = "Dai 8 Kokutai" 
			type  = naval_bomber 
			model = 1
			strength = 70 
		} 
		division = {
			id       = {  type = 13016 id = 251  } 
			name     = "Dai 9 Kokutai" 
			type  = naval_bomber 
			model = 1
			strength = 70 
		} 
	} 

	
	
	# ### Under division_development ### 
	
	division_development = {  
		name  = "Ryujo" 
		type  = light_carrier 
		model = 0 
		cost  = 0.3
		id    = {  type = 13016 id = 264  } 
		date  = {  year = 1933 month = may day = 9  } 
		new_model = no
		extra1 = light_cag
		brigade_model1 = 1
	} 
	division_development = {  
		name  = "Yamashiro"
		type  = battleship
		model = 3
		cost  = 1.0
		unitcost = no
		id    = { type = 13016 id = 265 }
		date  = { year = 1935 month = march day = 1 }
		extra1 = naval_improved_hull_l
		brigade_model1 = 0
		new_model = no
	}
	division_development = {  
		name  = "Kamoi" 
		type  = escort_carrier 
		model = 0 
		cost  = 0.1
		unitcost = no
		id    = {  type = 13016 id = 266 } 
		date  = {  year = 1934 month = june day = 0  } 
		new_model = no
	} 
	division_development = {  
		name  = "Mogami"
		type  = heavy_cruiser
		model = 4
		cost  = 0.3
		id    = { type = 13016 id = 267 }
		date  = { year = 1935 month = july day = 28 }
		extra1 = floatplane
		brigade_model1 = 4
		extra2 = naval_torpedoes_s
		brigade_model2 = 0
		new_model = no
	}
	division_development = {  
		name  = "Mikuma"
		type  = heavy_cruiser
		model = 4
		cost  = 0.3
		id    = { type = 13016 id = 268 }
		date  = { year = 1935 month = august day = 29 }
		extra1 = floatplane
		brigade_model1 = 4
		extra2 = naval_torpedoes_s
		brigade_model2 = 0
		new_model = no
	}
	division_development = {  
		name  = "Dai 6 Kuchikusentai"
		type  = destroyer
		model = 4
		cost  = 0.1
		id    = { type = 13016 id = 269 }
		date  = { year = 1933 month = august day = 29 }
		extra1 = naval_torpedoes_s
		brigade_model1 = 0
		new_model = no
	}
	division_development = {
		name  = "Dai 3 Sensuisentai" 
		type  = submarine
		model = 3 
		cost  = 0.1
		id    = {  type = 13016 id = 270  } 
		date  = {  year = 1934 month = july day = 29  } 
		new_model = no
	} 
	division_development = {
		name  = "I-6" 
		type  = nuclear_submarine
		model = 0 
		cost  = 0.1
		id    = {  type = 13016 id = 271  } 
		date  = {  year = 1935 month = may day = 14  } 
		new_model = no
		extra1 = floatplane
		brigade_model1 = 4
	} 

	landdivision = { dormant = yes id = { type = 13016 id = 2000 } name = "1 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2001 } name = "22 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2002 } name = "2 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2003 } name = "3 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2004 } name = "4 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2005 } name = "5 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2006 } name = "6 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2007 } name = "7 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2008 } name = "8 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2009 } name = "9 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2010 } name = "10 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2011 } name = "11 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2012 } name = "12 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2013 } name = "13 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2014 } name = "14 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2015 } name = "15 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2016 } name = "16 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2017 } name = "17 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2018 } name = "18 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2019 } name = "19 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2020 } name = "20 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2021 } name = "21 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2022 } name = "Teishin-Shudan" type = paratrooper model = 0 }
	
	#Divisions to help AI guard Manchuria if Japan is brought into the Axis
	
	landdivision = { dormant = yes id = { type = 13016 id = 2029 } name = "9 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2030 } name = "10 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2031 } name = "11 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2032 } name = "12 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2033 } name = "13 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2034 } name = "14 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2035 } name = "15 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2036 } name = "16 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2037 } name = "17 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2038 } name = "18 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2039 } name = "19 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2040 } name = "20 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2041 } name = "21 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	
	#Divisions to help AI guard Siam and Indochina
	
	landdivision = { dormant = yes id = { type = 13016 id = 2042 } name = "9 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2043 } name = "10 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2044 } name = "11 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2045 } name = "12 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2046 } name = "13 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2047 } name = "14 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2048 } name = "15 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2049 } name = "16 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2050 } name = "17 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2051 } name = "18 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2052 } name = "19 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2053 } name = "20 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }
	landdivision = { dormant = yes id = { type = 13016 id = 2054 } name = "21 Hendan" type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes }

   landunit = 
   {  id       = {  type = 13016 id =  2023 } 
     name     = "Hirohito and Staff" 
     location = 1552 #Tokyo
     Division =
     { id       = {  type = 13016 id = 2024  } 
       name     = "Hirohito and Staff" 
       type     = d_10
       model    = 0
       experience = 100
       locked   = yes 
      }
    }
	landdivision = { dormant = yes id = { type = 13016 id = 2025 } name = "121 Hendan" type = infantry model = 8 }
	landdivision = { dormant = yes id = { type = 13016 id = 2026 } name = "122 Hendan" type = infantry model = 8 }
	landdivision = { dormant = yes id = { type = 13016 id = 2027 } name = "123 Hendan" type = infantry model = 8 }
	landdivision = { dormant = yes id = { type = 13016 id = 2028 } name = "124 Hendan" type = infantry model = 8 }
 } 
