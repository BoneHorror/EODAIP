 
 ############################## 
 # Country definition for CGX # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = CGX 
	flag_ext 	= _PNE
	ai = "cgx_1933.ai"
	ai_settings = { flags = { MOB1 = yes MOB2 = yes RES = yes} }
	dissent = 40
	regular_id             = CHI 
	intrinsic_gov_type     = paternal_autocrat 
	extra_tc               = 10 
	puppet                 = CHI 
	# Resource Reserves 
	energy                 = 600
	metal                  = 300
	rare_materials         = 150
	transports = 60
	oil                    = 100 
	supplies               = 100 
	money                  = 50 
	capital                = 1378 # Guilin 
	manpower               = 32 
   diplomacy = 
   {  relation = {  tag = CHC value = -200  } 
     relation = {  tag = CHI value = 100  } 
     relation = {  tag = CSX value = 200  } 
     relation = {  tag = CXB value = 200  } 
     relation = {  tag = CYN value = 200  } 
     relation = {  tag = U67 value = 150  } 
     relation = {  tag = JAP value = -75  } 
     relation = {  tag = MAN value = -75  } 
     relation = {  tag = SIK value = 100 guaranteed = {  day = 29 month = december year = 1936 }  } 
    } 
   SpyInfo                = {  country = "CGX" NumberOfSpies = 2  } 
   nationalprovinces      = {   1365 1367 1368 1369 1370 1373 1374 1375 1376 1377 1378 1379 1380 1381 1382 1383  } 
   ownedprovinces         = {   1365 1367 1368 1369 1370 1373 1374 1375 1376 1377 1378 1379 1380 1381 1382 1383  } 
   controlledprovinces    = {   1365 1367 1368 1369 1370 1373 1374 1375 1376 1377 1378 1379 1380 1381 1382 1383  } 
   # Guangxi 
 	techapps = { 
	
	# Manufacturing - Up to 1915
	5810 5820
	# Construction Engineering - Up to 1910
	5800 5080

	# Agriculture
	5700

	#Computers
	5310 54010

	# Crypto - Up to 1923
	5316 5326 5327

	# Infantry Division
	1010 1020 1030 1040 1050 1060 1070
	# Mountain Division
	1160 1170 1180 1190 1200 1210 1220
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340
	# Engineers
	1830
	# Supply 
	1910 1920 1930 1940 1950 1960 1970

	# Armoured Car  
	2860 2870
	# Field Artillery 
	2290 2300 2310 2900 2910

	# Medicine
	5600 5610

	# Hospital System
	14000 14010 14020
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910

	# Destroyers
	3010 
	# Light Cruiser 
	3110 3120
	# Heavy Cruiser 
	3210 3220
	# Troopships
	3810
	#Early Torpedoes
	3720
	#Early Battleship
	3410
	

	# Naval Doctrines
	8010 8020 8050 8060 8070 8080

	# Interceptor Fighter  
	4500 4510 4520 4530 4540  
	# Multirole Fighter
	4300 4310 4320 
	# Tactical Bomber 
	4600 4610 4620 4630 
	# Strategic Bomber
	4800 4810 
	# Naval Bomber
	4700 
	# Seaplane
	4740 4750 4760

	# Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 
	} 

blueprints = {
	# Infantry (from GER/SOV)
	1080 1090
	
	# Marines
	1560

	# Mountain
	1230

	# Cavalry
	1350 1360

	# Engineers
	1840 1850


	
	# Tank 
	7600 7610 2620 2010
	
	# Armored Car
	2880

	# Artillery (from GER/SOV)
	2920 2930

	# Anti-Air (from HK)
	2800

	#Mobility Focus
	6210

	#Manpower Focus
	6570
	
	#Interwar Bomber
	4120
}
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     freedom           = 3 
     free_market       = 3 
     professional_army = 2 
     defense_lobby     = 1 
     interventionism   = 2 
    } 
   headofstate            = {  type = 9 id = 585001  } 
   headofgovernment       = {  type = 9 id = 585002  } 
   foreignminister        = {  type = 9 id = 585003  } 
   armamentminister       = {  type = 9 id = 585004  } 
   ministerofintelligence = {  type = 9 id = 585006  } 
   chiefofstaff           = {  type = 9 id = 585007  } 
   chiefofarmy            = {  type = 9 id = 585009  } 
   chiefofnavy            = {  type = 9 id = 585010  } 
   chiefofair             = {  type = 9 id = 585012  } 
   # ###### 
   # GUANGXI OOB 
   # ###### 
      #######
   # Guangxi 1933
   # http://forum.paradoxplaza.com/forum/showthread.php?687389-OOB-and-information-of-China-for-moders&s=314a65228a52202163eda8b7e564664a&p=15495339&viewfull=1#post15495339
   landunit = 
   {  location = 1378 # Guiling
     name     = "7th Corps" 
     # leader =  
     id       = {  type = 22400 id = 1  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 2  } 
       name       = "19th Division" 
       type     = infantry 
       strength   = 33
       model      = 5
      }
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 4  } 
       name       = "24th Division" 
       type       = infantry 
       strength   = 33
       model      = 5
      }
    }
	landunit = 
   {  location = 1378 # Guiling
     name     = "15th Corps" 
     # leader =  
     id       = {  type = 22400 id = 9  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 10  } 
       name       = "43rd Division" 
       type     = infantry 
       strength   = 40 
       model      = 5
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 11  } 
       name       = "44th Division" 
       type       = infantry 
       strength   = 40
       model      = 5
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 12  } 
       name       = "45th Division" 
       type       = infantry 
       strength   = 40
       model      = 5
      }
    }
	# German Trained Divisions #
	division_development = {
		name  = "25th Division" 
        type       = infantry 
        model      = 5
	    extra1    = engineer
	    brigade_model1 = 0
	    extra2 = artillery
	    brigade_model2 = 2
		cost  = 0.5
		id    = {  type = 22400 id = 14  } 
		date  = {  year = 1934 month = january day = 1  } 
	}
	division_development = {
		name  = "27th Division" 
        type       = infantry 
        model      = 5
	    extra1    = engineer
	    brigade_model1 = 0
	    extra2 = artillery
	    brigade_model2 = 2
		cost  = 0.5
		id    = {  type = 22400 id = 16  } 
		date  = {  year = 1934 month = january day = 1  } 
	}
	# Guangdong 1936
	# http://forum.paradoxplaza.com/forum/showthread.php?687389-OOB-and-information-of-China-for-moders&s=314a65228a52202163eda8b7e564664a&p=15499068&viewfull=1#post15499068
    landunit = 
   {  location = 1369 # Guangzhou
     name     = "1st Corps" 
     # leader =  
     id       = {  type = 22400 id = 26  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 27  } 
       name       = "1st Division" 
       type     = infantry 
       strength   = 60 
       model      = 5
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 28  } 
       name       = "2nd Division" 
       type       = infantry 
       strength   = 60
       model      = 5
	   extra1    = engineer
	   brigade_model1 = 0
	   extra2 = artillery
	   brigade_model2 = 2
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 29  } 
       name       = "3rd Division" 
       type       = infantry 
       strength   = 60
       model      = 5
	   extra1    = engineer
	   brigade_model1 = 0
	   extra2 = artillery
	   brigade_model2 = 4
      }
    }
    landunit = 
   {  location = 1369 # Guangzhou
     name     = "2nd Corps" 
     # leader =  
     id       = {  type = 22400 id = 30  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 31  } 
       name       = "4th Division" 
       type     = infantry 
       strength   = 60
       model      = 5
	   extra1    = engineer
	   brigade_model1 = 0
	   extra2 = artillery
	   brigade_model2 = 2
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 32  } 
       name       = "5th Division" 
       type       = infantry 
       strength   = 60
       model      = 5
      }
	  Division = 
     {  experience = 40 
       id         = {  type = 22400 id = 33  } 
       name       = "6th Division" 
       type       = infantry 
       strength   = 60
       model      = 5
	   extra1    = engineer
	   brigade_model1 = 0
	   extra2 = artillery
	   brigade_model2 = 4
      }
    }
    landunit = 
   {  location = 1369 # Guangzhou
     name     = "3rd Corps" 
     # leader =  
     id       = {  type = 22400 id = 34  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 35  } 
       name       = "7th Division" 
       type     = infantry 
       strength   = 60 
       model      = 5
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 36  } 
       name       = "8th Division" 
       type       = infantry 
       strength   = 60
       model      = 5
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 37  } 
       name       = "9th Division" 
       type       = infantry 
       strength   = 60
       model      = 5
	   extra1    = engineer
	   brigade_model1 = 0
	   extra2 = artillery
	   brigade_model2 = 4
      }
    }
	  landunit = 
   {  location = 1369 # Guangzhou
     name     = "4th Army" 
     # leader =  
     id       = {  type = 22400 id = 38  } 
	  Division = 
     {  
       id         = {  type = 22400 id = 39  } 
       name       = "1st Independent Division" 
       type       = militia 
       strength   = 100
       model      = 3
      }
	  Division = 
     {  
       id         = {  type = 22400 id = 40  } 
       name       = "2nd Independent Division" 
       type       = militia 
       strength   = 100
       model      = 3
      }
	  Division = 
     {  
       id         = {  type = 22400 id = 41  } 
       name       = "3rd Independent Division" 
       type       = militia 
       strength   = 100
       model      = 3
      }
	  Division = 
     {  
       id         = {  type = 22400 id = 42  } 
       name       = "4th Independent Division" 
       type       = militia 
       strength   = 100
       model      = 3
      }
	  Division =
	  	  {  
       id         = {  type = 22400 id = 43  } 
       name       = "Training Division" 
       type       = infantry 
       strength   = 100
       model      = 5
	   extra1    = engineer
	   brigade_model1 = 0
	   extra2 = artillery
	   brigade_model2 = 4
      }
	  Division =
	  	  {  
       id         = {  type = 22400 id = 44  } 
       name       = "4th Army HQ" 
       type       = hq 
       strength   = 100
       model      = 1
	   extra1    = police
	   brigade_model1 = 1
      }
    }
   # ##### NAVY OOB ###### 
   # http://forum.paradoxplaza.com/forum/showthread.php?687389-OOB-and-information-of-China-for-moders&p=15450671&viewfull=1#post15450671
   navalunit = 
   {  location = 1369 # Guangzhou 
     name     = "4th Fleet" 
     id       = {  type = 22400 id = 45  } 
     base     = 1369 
     Division = 
     {  id    = {  type = 22400 id = 46  } 
       name  = "Haizhou, Haihu" 
       type  = destroyer
	   strength = 40
       model = 0  #Gunboat
	   experience = 20
	   extra1 = naval_torpedoes_s
	   brigade_model1 = 1
      } 
	  Division = 
     {  id    = {  type = 22400 id = 47  } 
       name  = "Haiqiang, Haiji, Jiangda, Jianggong, Guangjin"
       type  = destroyer
	   strength = 100
       model = 0  #Gunboat
      } 
	  Division = 
     {  id    = {  type = 22400 id = 48  } 
       name  = "Guangcheng, Anbei, Fengwu, Jianru, Zhixin"
       type  = destroyer
	   strength = 100
       model = 0  #Gunboat
      } 
	  Division = 
     {  id    = {  type = 22400 id = 49  } 
       name  = "Hushan, Guanghua, Zhili, Jinma, Feipeng"
       type  = destroyer
	   strength = 100
       model = 0  #Gunboat
      } 
	  Division = 
     {  id    = {  type = 22400 id = 50  } 
       name  = "Jiangcheng, Jiangping, Pingxi, Jingdong, Guangan"
       type  = destroyer
	   strength = 100
       model = 0  #Gunboat
      } 
	  Division = 
     {  id    = {  type = 22400 id = 51  } 
       name  = "Guangyuan, Lichen, Suijiang, Haiou, Zhujiang "
       type  = destroyer
	   strength = 100
       model = 0  #Gunboat
      } 
	  Division = 
     {  id    = {  type = 22400 id = 52  } 
       name  = "Xixing, Zhongyuan, Zhongkai, Xinsongjiang"
       type  = destroyer
	   strength = 80
       model = 0  #Gunboat
      }
	  Division = 
     {  id    = {  type = 22400 id = 53  } 
       name  = "S-1, S-2, S-3, S-4"
       type  = destroyer
	   strength = 80
       model = 0  #Gunboat
	   extra1 = naval_torpedoes_s
	   brigade_model1 = 0
      } 
	  Division = 
     {  id    = {  type = 22400 id = 54  } 
       name  = "Zhaohe"
       type  = light_cruiser
	   strength = 100
       model = 2  #Early Light
      } 
	  Division = 
     {  id    = {  type = 22400 id = 55  } 
       name  = "Hairui, Fuan"
       type  = transport
	   strength = 40
       model = 0  
      } 
    } 
   # ##### AIR FORCE OOB ###### 
   # http://forum.paradoxplaza.com/forum/showthread.php?687389-OOB-and-information-of-China-for-moders&p=15445629&viewfull=1#post15445629
   airunit = 
   {  location = 1369 # Guangzhou
     name     = "Guangdong Fighter Force" 
     base     = 1369 # Guangzhou 
     id       = {  type = 22400 id = 56  } 
     Division = 
     {  id           = {  type = 22400 id = 57  } 
       name         = "16th Squadron" 
       type         = interceptor 
       model        = 0
       strength     = 9 
      } 
	  Division = 
     {  id           = {  type = 22400 id = 58  } 
       name         = "17th Squadron" 
       type         = interceptor 
       model        = 4
       strength     = 10
      } 
	  Division = 
     {  id           = {  type = 22400 id = 59  } 
       name         = "28th Squadron" 
       type         = interceptor 
       model        = 5
       strength     = 10 
      } 
	  Division = 
     {  id           = {  type = 22400 id = 60  } 
       name         = "29th Squadron" 
       type         = interceptor 
       model        = 3
       strength     = 20 
      } 
	}
	airunit = 
   {  location = 1369 # Guangzhou
     name     = "Guangdong Bomber Force" 
     base     = 1369 # Guangzhou 
     id       = {  type = 22400 id = 61  } 
	  Division = 
     {  id           = {  type = 22400 id = 62  } 
       name         = "18th 19th 20th 31st Squadrons" 
       type         = tactical_bomber
       model        = 2
       strength     = 37 
      } 
	  Division = 
     {  id           = {  type = 22400 id = 63  } 
       name         = "30th Squadron" 
       type         = tactical_bomber 
       model        = 3
       strength     = 6 
      } 
    }
	airunit = 
   {  location = 1369 # Guangzhou 
     name     = "Guangxi Air Force" 
     base     = 1369 # Guangzhou 
     id       = {  type = 22400 id = 64  } 
     Division = 
     {  id           = {  type = 22400 id = 65  } 
       name         = "7th 8th 34th Squadrons" 
       type         = interceptor 
       model        = 5
       strength     = 25
      } 
 	  Division = 
     {  id           = {  type = 22400 id = 66 } 
       name         = "32nd Squadron" 
       type         = tactical_bomber
       model        = 2
       strength     = 9 
      } 
    }
  } 
 