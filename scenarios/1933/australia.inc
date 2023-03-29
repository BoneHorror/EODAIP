 
 ############################## 
 # Country definition for AST # 
 ############################## 
  

  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = AST 
	ai = "ast_1933.ai"
	ai_settings = { flags = { MOB1 = yes MOB2 = yes } }
	dissent = 20
	manpower               = 10 
	# Resource Reserves 
	energy                 = 1620
	metal                  = 810
	rare_materials         = 405
	oil                    = 500 
	supplies               = 500 
	money                  = 20 
	capital                = 1707 
    
   # 1st Transport Flotilla# 
   transports             = 130 
   escorts                = 1 
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 9 
     political_left    = 1 
     free_market       = 8 
     freedom           = 10 
     professional_army = 2 
     defense_lobby     = 2 
     interventionism   = 6 
    } 
   nationalprovinces      = {  1688 1689 1690 1691 1692 1693 1694 1695 1696 1697 1698 1699 1700 1701 1702 1703 1704 1705 1706 1707 1708 1709 1710 1711 1712 1713 1714 1715 1716 1717  } 
   ownedprovinces         = {  1234 1587 1602 1603 1604 1605 1606 1607 1608 1609 1610 1688 1689 1690 1691 1692 1693 1694 1695 1696 1697 1698 1699 1700 1701 1702 1703 1704 1705 1706 1707 1708 1709 1710 1711 1712 1713 1714 1715 1716 1717 1724 1725 1726 1727 1682
                             } 
   controlledprovinces    = {  1234 1587 1602 1603 1604 1605 1606 1607 1608 1609 1610 1688 1689 1690 1691 1692 1693 1694 1695 1696 1697 1698 1699 1700 1701 1702 1703 1704 1705 1706 1707 1708 1709 1710 1711 1712 1713 1714 1715 1716 1717 1724 1725 1726 1727 1682
                             } 
   claimedprovinces    = {	1682 }
						
	# AST 1933 techs 
	# ###################### 
	techapps = { 
	# Infantry Division  
	1010  1020 1030 1040 1050 1060 1070 1080 1090
	# CAVALRY 
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 
	# Hospital System 
	14000 14010 14020
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
	#Naval Infantry
	#1560 1570 1580
	#Engineers
	1830 1840 1850 1860
	# Destroyer 
	3010 3020 3030 3040 3050 
	# Light Cruiser 
	3110 3120 3130 3140 3150
	# Heavy Cruiser 
	3210 3220 3230 3240 3250
	# Battlecruiser  
	3310 3320 3330
	# Fighter  
	4500 4510 4520 4530 4540 4550 4010 4020
	# Bomber 
	4600 4610 4620 4630 4120 4130
	# Mechanized Agriculture 
	5700 5710 5010 5020
	# Manufactoring
	5810 5820 5050 5830 5060
	# Construction Engineering 
	5800 5080 5090
	# Computers & cryptography
	5310 54010 54020 54030 5316 5326
	# Supply
	1910 1920 1930 1940 1950 1960 1970
	# Multirole fighter
	4300 4310 4320 4330
	# strategic bomber
	4800 4810 4820
	# SEAPLANES
	4740 4750 4760
	# Torpedo & ASW 18
	3720 3730 3736 3740 3900
	# Troopships
	3810 3820
	# Medicine
	5600 5610 5620 5630
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
	# Air Doctrines
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 
	#Carrier Pigeons
	30020 30030
} 
 inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = BEL value = 75  } 
     relation = {  tag = BHU value = 200  } 
     relation = {  tag = CAN value = 200  } # was access = yes 
     relation = {  tag = ENG value = 200  } # was access = yes 
     relation = {  tag = FIN value = 65  } 
     relation = {  tag = FRA value = 150  } 
     relation = {  tag = GER value = 1  } 
     relation = {  tag = IRE value = 75  } 
     relation = {  tag = IRQ value = 100  } 
     relation = {  tag = ITA value = 1  } 
     relation = {  tag = NEP value = 200  } 
     relation = {  tag = NZL value = 200  } # was access = yes 
     relation = {  tag = OMN value = 150  } 
     relation = {  tag = SAF value = 200  } # was access = yes 
     relation = {  tag = SAU value = 50  } 
     relation = {  tag = USA value = 125  } 
     relation = {  tag = YEM value = 150  } 
    } 
   SpyInfo                = {  country = "AST" NumberOfSpies = 6  } 
   headofstate            = {  type = 9 id = 225001  } 
   headofgovernment       = {  type = 9 id = 225002  } 
   foreignminister        = {  type = 9 id = 225003  } 
   armamentminister       = {  type = 9 id = 225004  } 
   ministerofsecurity     = {  type = 9 id = 225005  } 
   ministerofintelligence = {  type = 9 id = 225006  } 
   chiefofstaff           = {  type = 9 id = 225179  } #Julius Bruche
   chiefofarmy            = {  type = 9 id = 225008  } 
   chiefofnavy            = {  type = 9 id = 225009  } 
   chiefofair             = {  type = 9 id = 225010  } 
   # ## 1932:  The total Militia was only 28,000 men strong 
   # ## Regular Army had about 1500 men (mostly coastal artillery) 
   # ## This was brought upto 46,000 by 1906 
   # ## The Militia was used in New Guinea against Japan 
   # ######### Australian Army ############## 
   landunit = 
   {  id       = {  type = 30001 id = 1  } 
     name     = "1st Military District" 
     location = 1704 
     Division = 
     {  id       = {  type = 30001 id = 2  } 
       name     = "5th Infantry Division" 
       strength = 5
       type     = garrison
	   model    = 3
      } 
    } 
   landunit = 
   {  id       = {  type = 30001 id = 3  } 
     name     = "2nd Military District" 
     location = 1705 
     Division = 
     {  id       = {  type = 30001 id = 4  } 
       name     = "1st Infantry Division" 
       strength = 5 
       type     = garrison
	   model    = 3
      } 
     Division = 
     {  id       = {  type = 30001 id = 5  } 
       name     = "2nd Infantry Division" 
       strength = 5
       type     = garrison
	   model    = 3
      } 
     Division = 
     {  id       = {  type = 30001 id = 6  } 
       name     = "1st Cavalry Division" 
       strength = 5
       type     = cavalry 
       model    = 7
      } 
    } 
   landunit = 
   {  id       = {  type = 30001 id = 7  } 
     name     = "3rd Military District" 
     location = 1708 
     Division = 
     {  id       = {  type = 30001 id = 8  } 
       name     = "3rd Infantry Division" 
       strength = 5
       type     = garrison
	   model    = 3
      } 
     Division = 
     {  id       = {  type = 30001 id = 9  } 
       name     = "4th Infantry Division" 
       strength = 5
       type     = garrison
	   model    = 3
      } 
     Division = 
     {  id       = {  type = 30001 id = 10  } 
       name     = "2nd Cavalry Division" 
       strength = 5 
       type     = cavalry 
       model    = 7
      } 
    } 
   landunit = 
   {  id       = {  type = 30001 id = 11  } 
     name     = "2nd Australian Imperial Force" 
     location = 1707 
     Division = 
     {  id       = {  type = 30001 id = 12  } 
       name     = "6th Australian Division" 
       strength = 5
       type     = infantry 
	   model    = 7
      } 
    } 
   # ######### Australian Navy ############## 
	navalunit = { 
		id = { type = 10500 id = 13 } 
		name = "Royal Australian Navy" 
		location = 1707 
		base = 1707 
		division = { 
			id = { type = 10500 id = 14 } 
			name = "HMAS Albatross" 
			type = escort_carrier 
			model = 0 
			}
		division = { 
			id = { type = 10500 id = 15 } 
			name = "HMAS Australia" 
			type = heavy_cruiser 
			model = 3
			extra1 = floatplane
			brigade_model1 = 4 
			} 
		division = { 
			id = { type = 10500 id = 16 } 
			name = "HMAS Canberra" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4 
			} 
		division = { 
			id = { type = 10500 id = 17 } 
			name = "HMAS Brisbane" 
			type = light_cruiser 
			model = 1 
			} 
		division = { 
			id = { type = 10500 id = 18 } 
			name = "HMAS Adelaide" 
			type = light_cruiser 
			model = 2 
			} 
		division = { 
			id = { type = 10500 id = 19 } 
			name = "1st Transport Flotilla" 
			type = transport 
			model = 1 
			} 
		division = { 
			id = { type = 10500 id = 20 } 
			name = "2nd Transport Flotilla" 
			type = transport  
			model = 1 
			} 
		} 
   # ################## Australian Air Force ####################### 
   # ## An approximation of the 13 squadron airforce in 1936.### 
   airunit = 
   {  location = 1707 
     base     = 1707 
     id       = {  type = 10500 id = 21  } 
     name     = "Royal Australian Air Force" 
     Division = 
     {  id       = {  type = 10500 id = 22  } 
       name     = "No.1 Group RAAF" 
       strength = 10 
       type     = multi_role 
       model    = 3
      } 
    } 
   # Note on Warships Under Construction or Refit# 
   # HMAS Adelaide was refitted by 1939. 
   # Adelaide had a max speed of only 24 knots. 
   division_development = 
   {  name  = "Destroyer Division 2" 
     type  = destroyer 
     model = 3
     cost  = 0.1 
     id    = {  type = 10500 id = 23  } 
     date  = {  year = 1933 month = october day = 11  } 
    } 
landdivision = { dormant = yes id = { type = 30001 id = 1001 }  name = "1. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
  } 
 
