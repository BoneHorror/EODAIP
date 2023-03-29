##############################
# Country definition for CHI #
##############################

 
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = CHI 
	ai = "CHI_1933.ai"
	ai_settings	= { flags = { RES = yes MOB1 = yes MOB2 = yes CHI_CHC_THIRD_ENCIRCLEMENT = yes 1330110043_HISTORICAL_SCENARIO = yes } }
	capital                = 1337 # Nanjing 
	# Resource Reserves 
	energy                 = 2100
	metal                  = 1050
	rare_materials         = 525
	oil                    = 1000 
	supplies               = 3500 
	money                  = 10 
	manpower               = 855 
	dissent                = 10 
	transports             = 150 
	escorts                = 2 
    
   
   diplomacy = 
   {  relation = {  tag = CHC value = -200  }
     relation = {  tag = CGX value = 100  } 
     relation = {  tag = CSX value = 100 access = yes  } 
     relation = {  tag = CXB value = 200 access = yes  } 
     relation = {  tag = CYN value = 200  } 
     relation = {  tag = JAP value = -100  } 
     relation = {  tag = MAN value = -100  } 
    } 
   SpyInfo                = {  country = "CHI" NumberOfSpies = 5  } 
   # Fujian   
   nationalprovinces      = {   
 #Nationalist China at Start 
 1257 1258 1261 1262 1267 1291 1292 1293 1296 1297 1298 1299 1300 1301 1302 1303 1304 1305 1306 1307 1308 1309 1310 1311 1312 1313 1314 1315 1316 1317 1318 1319 1320 1321 1322 1323 1324 1325 1326 1333 1334 1335 1336 1337 1338 1339 1340 1341 1342 1343 1344 1345 1346 1347 1348 1349 1350 1351 1352 1353 1354 1355 1356 1357 1358 1359 1360      
  
 #Yunnan          
 1384 1385 1386 1387 1388 1389 1390
  
 #Guanxi Clique  
  1365 1367 1368 1369 1370 1373 1374 1375 1376 1377 1378 1379 1380 1381 1382 1383  
  
 #Shanxi       
  1241 1242 1243 1244 1245 1246 1247 1248 1249 1250 1251 1252 1253 1254 1327 1328 1329 1330 1331 1332   
  
 #Manchoukou 
 1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1216 1217 1218 1220 1235 1236 1237  
  
 #Xibei san ma            
 1263 1264 1265 1266 1268 1269 1270 1271 1272 1283 1284 1285   
  
 #Tibet       
 1286 1287 1288 1289 1290 1294 1295 
  
 #Sinkiang        
 1273 1274 1275 1277 1279 1280 1281 1282 
  
 #India        
 1276 1278  
  
 #Communist China      
 1255 1256 1259 1260 
  
 #Japan In China     
 1219 1238 1239 1240 
  
 #European Possessions     
  1371 1372  
   
 #Taiwan     
  1361 1362 1363 1364   
  
 #Mongolia 
 1120 1121 1122 1123 1124 1125 
  
                             } 
   ownedprovinces         = {    
 #Nationalist China at start 
 1241 1242 1243 1244 1247 1261 1267 1296 1297 1298 1299 1300 1301 1302 1303 1304 1305 1306 1307 1308 1309 1310 1311 1312 1313 1315 1316 1317 1318 1319 1320 1321 1323 1324 1326 1327 1328 1329 1330 1331 1332 1333 1334 1335 1336 1337 1339 1340 1341 1342 1343 1346 1347 1348 1350 1351 1353 1356 1358 1360     
                             } 
   # Fujian   
   controlledprovinces    = {   
 #Nationalist China at start 
 1241 1242 1243 1244 1247 1261 1267 1296 1297 1298 1299 1300 1301 1302 1303 1304 1305 1306 1307 1308 1309 1310 1311 1312 1313 1315 1316 1317 1318 1319 1320 1321 1323 1324 1326 1327 1328 1329 1330 1331 1332 1333 1334 1335 1336 1337 1339 1340 1341 1342 1343 1346 1347 1348 1350 1351 1353 1356 1358 1360     
                             } 
	claimedprovinces = { 
	1455 1458 #Arunachal Pradesh
	1119 #Tannu Tuva
	1414 #Kachin 
	1413
	}
						
	# NatChi 1933 techs 
	# ######################  
	techapps = { 
	
	# Manufacturing - Up to 1915
	5810 5820
	# Construction Engineering - Up to 1910
	5800 5080

	# Crypto - Up to 1923
	5316 5326 5327

	# Infantry Division
	1010 1020 1030 1040 1050 1060 1070
	# Mountain Division
	1160 1170 1180 1190 1200 1210 1220 1230 
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 1350 1360
	# Engineers
	1830
	# Supply 
	1910 1920 1930 1940 1950 1960

	# Armoured Car  
	2860 2870
	# Field Artillery 
	2290 2300 2310 2900 2910

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
	#Carrier Pigeons
	30020 30030
	} 

blueprints = {
	# Infantry (from GER/SOV)
	1080 1090
	
	# Engineers
	1840 1850

	# Agriculture
	5700
	
	# Medicine (most were still imported)
	5600
	
	# Supply
	1970

	# Tank 
	7600 7610 2620 2010
	
	# Armored Car
	2880

	# Artillery (from GER/SOV)
	2920 2930

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
     free_market       = 9 
     freedom           = 4 
     professional_army = 2 
     defense_lobby     = 8 
     interventionism   = 4 
    } 
		ic_modifier				= 1.02 #
   headofstate            = {  type = 9 id = 55022  } 
   headofgovernment       = {  type = 9 id = 55020  } 
   foreignminister        = {  type = 9 id = 55027  } 
   armamentminister       = {  type = 9 id = 55051  } 
   ministerofsecurity     = {  type = 9 id = 55065  } 
   ministerofintelligence = {  type = 9 id = 55066  } 
   chiefofstaff           = {  type = 9 id = 55013  } 
   chiefofarmy            = {  type = 9 id = 55014  } 
   chiefofnavy            = {  type = 9 id = 55019  } 
   chiefofair             = {  type = 9 id = 55023  } 
   dormant_leaders        = {  55368 55375  } 
   ##################
   # CHINA 1933 OOB #
   ##################
   # TYPE = 22000
   
   ###################
   # Shandong Clique #
   ###################
   # http://forum.paradoxplaza.com/forum/showthread.php?687389-OOB-and-information-of-China-for-moders&p=15468195&viewfull=1#post15468195

    landunit = 
   {  location = 1330 # Jinan 
     name     = "6th Corps" 
     id       = {  type = 22000 id = 1  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 2  } 
       name       = "22nd Division" 
       type       = infantry 
	   strength  = 65
       model     = 5
	   locked = yes
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 3  } 
       name       = "29th Division" 
       type       = infantry 
	   strength  = 65
       model     = 5
	   extra1 = artillery
	   brigade_model1 = 4
	   locked = yes
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 4  } 
       name       = "74th Division" 
       type       = infantry 
	   strength  = 65
       model     = 5
	   locked = yes
      }
    }
	landunit = 
   {  location = 1330 # Jinan 
     name     = "12th Corps" 
     id       = {  type = 22000 id = 5  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 6  } 
       name       = "20th Division" 
       type       = infantry 
	   strength  = 65
       model     = 5
	   locked = yes
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 7  } 
       name       = "81st Division" 
       type       = infantry 
	   strength  = 65
       model     = 5
	   extra1 = artillery
	   brigade_model1 = 4
	   locked = yes
      }
    }
    landunit = 
   {  location = 1330 # Jinan 
     name     = "3rd Route Army" 
     id       = {  type = 22000 id = 8  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 9  } 
       name       = "3rd Route Army HQ" 
       type       = hq
	   strength  = 80
       model     = 1
	   locked = yes
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 10  } 
       name       = "1st 2nd Independent Artillery Regiments" 
       type       = infantry 
	   strength  = 65
       model     = 5
	   extra1 = artillery
	   brigade_model1 = 5
	   locked = yes
      }
    }
    landunit = 
   {  location = 1330 # Jinan 
     name     = "Shandong Provincial Security Group" 
     id       = {  type = 22000 id = 11  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 12  } 
       name       = "1st Route Militia" 
       type       = militia
	   strength  = 60
       model     = 3
	   locked = yes
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 13  } 
       name       = "2nd Route Militia" 
       type       = militia
	   strength  = 60
       model     = 3
	   locked = yes
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 14  } 
       name       = "3rd Route Militia" 
       type       = militia
	   strength  = 60
       model     = 3
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 15  } 
       name       = "4th Route Militia" 
       type       = militia
	   strength  = 60
       model     = 3
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 16  } 
       name       = "5th Route Militia" 
       type       = militia
	   strength  = 60
       model     = 3
	   locked = yes
      }
    }
	
	##############################################
	# 29th Army (Hebei/Hebei Autonomous Council) #
	##############################################
    landunit = 
   {  location = 1247 # Beijing
     name     = "29th Army" 
     id       = {  type = 22000 id = 17  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 18  } 
       name       = "37th Division" 
       type       = infantry
	   strength  = 100
       model     = 6
	   locked = yes
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 19 } 
       name       = "38th Division" 
       type       = infantry
	   strength  = 100
       model     = 6
	   locked = yes
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 20  } 
       name       = "132nd Division" 
       type       = infantry
	   strength  = 100
       model     = 6
	   locked = yes
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 21  } 
       name       = "143rd Division" 
       type       = infantry
	   strength  = 100
       model     = 6
	   locked = yes
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 22  } 
       name       = "9th Cavalry Division" 
       type       = infantry
	   strength  = 100
       model     = 6
	   locked = yes
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 23  } 
       name       = "39th Independent Brigade" 
       type       = infantry
	   strength  = 100
       model     = 6
	   locked = yes
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 24  } 
       name       = "13th Independent Cavalry Brigade" 
       type       = cavalry
	   strength  = 80
       model     = 6
	   locked = yes
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 25  } 
       name       = "29th Army Special Brigade" 
       type       = infantry
	   strength  = 100
       model     = 7
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 26  } 
       name       = "29th Army HQ" 
       type       = hq
	   strength  = 100
       model     = 1
	   locked = yes
      }
    }
	landunit = 
   {  location = 1247 # Beijing
     name     = "Hebei Provincial Security Group" 
     id       = {  type = 22000 id = 27  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 28  } 
       name       = "North Hebei Security Group" 
       type       = infantry
	   strength  = 25
       model     = 6
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 29  } 
       name       = "South Hebei Security Group" 
       type       = infantry
	   strength  = 25
       model     = 6
	   locked = yes
      }
    }

	#####################
	# Shaanxi Task Force #
	#####################
	# http://forum.paradoxplaza.com/forum/showthread.php?687389-OOB-and-information-of-China-for-moders&p=15499404&viewfull=1#post15499404
	landunit = 
   {  location = 1258 # Xian
     name     = "7th Corps" 
     id       = {  type = 22000 id = 30  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 31  } 
       name       = "42nd Division" 
       type       = infantry
	   strength  = 100
       model     = 5
	   extra1 = cavalry_brigade
	   brigade_model1 = 5
	   locked = yes
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 32  } 
       name       = "17th Division" 
       type       = infantry 
	   strength  = 100
       model     = 5
	   extra1 = cavalry_brigade
	   brigade_model1 = 5
	   locked = yes
      }
    }
	landunit = 
   {  location = 1258 # Xian
     name     = "17th Route Army" 
     id       = {  type = 22000 id = 33  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 34 } 
       name       = "17th Route Army HQ" 
       type       = hq
	   strength  = 100
       model     = 1
	   locked = yes
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 35  } 
       name       = "Shaanxi Guard" 
       type       = militia 
	   strength  = 100
       model     = 3
	   locked = yes
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 36  } 
       name       = "1st 2nd 3rd Special Regiments" 
       type       = infantry
	   strength  = 100
       model     = 6
	   extra1 = cavalry_brigade
	   brigade_model1 = 6
	   locked = yes
      }
    }
	####################
	# Hunan Task Force #
	####################
	landunit = 
   {  location = 1308 # Changsha
     name     = "28th Corps" 
     id       = {  type = 22000 id = 37  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 38 } 
       name       = "15th Division" 
       type       = infantry
	   strength  = 100
       model     = 5

      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 39  } 
       name       = "16th Division" 
       type       = infantry
	   strength  = 100
       model     = 5

      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 40  } 
       name       = "19th Division" # Different from the CGX
       type       = infantry
	   strength  = 100
       model     = 5

      }
    }
	landunit = 
   {  location = 1308 # Changsha
     name     = "4th Route Army" 
     id       = {  type = 22000 id = 41  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 42 } 
       name       = "62nd Division" 
       type       = infantry
	   strength  = 100
       model     = 5

      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 43  } 
       name       = "63rd Division" 
       type       = infantry
	   strength  = 100
       model     = 5

      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 44  } 
       name       = "New 34th Division" 
       type       = infantry
	   strength  = 100
       model     = 5

      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 45  } 
       name       = "4th Route Army Reserve Regiments" 
       type       = infantry
	   strength  = 75
       model     = 5

      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 46  } 
       name       = "4th Route Army Reserve Regiments" 
       type       = infantry
	   strength  = 75
       model     = 5

      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 47 } 
       name       = "4th Route Army HQ" 
       type       = hq
	   strength  = 100
       model     = 1

      }
    }
	landunit = 
   {  location = 1308 # Changsha
     name     = "Hunan Provincial Security Group" 
     id       = {  type = 22000 id = 48  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 49 } 
       name       = "1st Zone Security Command" 
       type       = militia
	   strength  = 50
       model     = 4

      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 50  } 
       name       = "2nd Zone Security Command" 
       type       = militia
	   strength  = 50
       model     = 4

      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 51  } 
       name       = "3rd Zone Security Command" 
       type       = militia
	   strength  = 50
       model     = 4

      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 52  } 
       name       = "4th Zone Security Command" 
       type       = militia
	   strength  = 50
       model     = 4

      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 53  } 
       name       = "5th Zone Security Command" 
       type       = militia
	   strength  = 50
       model     = 4

      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 54  } 
       name       = "6th Zone Security Command" 
       type       = militia
	   strength  = 50
       model     = 4

      }
    }

	######################
	# Guizhou Task Force #
	######################
	landunit = 
   {  location = 1305 # Guiyang
     name     = "25th Corps" 
     id       = {  type = 22000 id = 55  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 56 } 
       name       = "103rd Division" 
       type       = infantry
	   strength  = 100
       model     = 5
	   locked = yes
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 57 } 
       name       = "102nd Division" 
       type       = infantry
	   strength  = 75
       model     = 5
	   locked = yes
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 58  } 
       name       = "New 8th Division" 
       type       = infantry
	   strength  = 50
       model     = 5
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 59 } 
       name       = "121st Division" 
       type       = infantry
	   strength  = 50
       model     = 5
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 60  } 
       name       = "New 25th Division" 
       type       = infantry
	   strength  = 50
       model     = 5
	   locked = yes
      }
    }
	landunit = 
   {  location = 1305 # Guiyang
     name     = "Guizhou Provincial Security Group" 
     id       = {  type = 22000 id = 61  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 62 } 
       name       = "1st Provincial Militia" 
       type       = militia
	   strength  = 50
       model     = 4
	   locked = yes
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 63 } 
       name       = "2nd Provincial Militia" 
       type       = militia
	   strength  = 50
       model     = 4
	   locked = yes
      }
    }
	######################
	# Sichaun Task Force #
	######################
	landunit = 
   {  location = 1297 # Chengdu
     name     = "21st Corps" 
     id       = {  type = 22000 id = 64  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 65 } 
       name       = "146th Division" 
       type       = infantry
	   strength  = 100
       model     = 5
	   locked = yes
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 66 } 
       name       = "147th Division" 
       type       = infantry
	   strength  = 100
       model     = 5
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 67 } 
       name       = "162nd Division" 
       type       = infantry
	   strength  = 100
       model     = 5
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 68 } 
       name       = "12th Independent Brigades" 
       type       = infantry
	   strength  = 65
       model     = 5
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 69 } 
       name       = "15th Independent Brigade" 
       type       = infantry
	   strength  = 65
       model     = 5
	   locked = yes
      }
    }
	landunit = 
   {  location = 1297 # Chengdu
     name     = "23rd Corps" 
     id       = {  type = 22000 id = 70  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 71 } 
       name       = "144th Division" 
       type       = infantry
	   strength  = 100
       model     = 5
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 72 } 
       name       = "148th Division" 
       type       = infantry
	   strength  = 100
       model     = 5
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 73 } 
       name       = "17th Independent Brigade" 
       type       = infantry
	   strength  = 65
       model     = 5
	   locked = yes
      }
    }
	landunit = 
   {  location = 1297 # Chengdu
     name     = "44th Corps" 
     id       = {  type = 22000 id = 74  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 75 } 
       name       = "149th Division" 
       type       = infantry
	   strength  = 100
       model     = 5
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 76 } 
       name       = "150th Division" 
       type       = infantry
	   strength  = 100
       model     = 5
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 77 } 
       name       = "163rd Division" 
       type       = infantry
	   strength  = 100
       model     = 5
	   locked = yes
      }
    }
	landunit = 
   {  location = 1297 # Chengdu
     name     = "7th Route Army" 
     id       = {  type = 22000 id = 78 } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 79 } 
       name       = "145th Division" 
       type       = infantry
	   strength  = 100
       model     = 5
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 80 } 
       name       = "161st Division" 
       type       = infantry
	   strength  = 100
       model     = 5
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 81 } 
       name       = "164th Division" 
       type       = infantry
	   strength  = 100
       model     = 5
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 82 } 
       name       = "11th Independent Brigade" 
       type       = infantry
	   strength  = 65
       model     = 5
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 83 } 
       name       = "13th Independent Brigade" 
       type       = infantry
	   strength  = 65
       model     = 5
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 84 } 
       name       = "16th Independent Brigade" 
       type       = infantry
	   strength  = 65
       model     = 5
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 85 } 
       name       = "7th Route Army HQ" 
       type       = hq
	   strength  = 100
       model     = 2
	   locked = yes
      }
    }
	landunit = 
   {  location = 1299 # Chongqing
     name     = "41st Corps" 
     id       = {  type = 22000 id = 86  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 87 } 
       name       = "122nd Division" 
       type       = infantry
	   strength  = 100
       model     = 5
	   extra1 = cavalry_brigade
	   brigade_model1 = 5
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 88 } 
       name       = "123rd Division" 
       type       = infantry
	   strength  = 100
       model     = 5
	   extra1 = cavalry_brigade
	   brigade_model1 = 5
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 89 } 
       name       = "124th Division" 
       type       = infantry
	   strength  = 100
       model     = 5
	   extra1 = cavalry_brigade
	   brigade_model1 = 5
	   locked = yes
      }
    }
	landunit = 
   {  location = 1299 # Chongqing
     name     = "45th Corps" 
     id       = {  type = 22000 id = 90  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 91 } 
       name       = "125th Division" 
       type       = infantry
	   strength  = 62
       model     = 5
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 92 } 
       name       = "126th Division" 
       type       = infantry
	   strength  = 62
       model     = 5
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 93 } 
       name       = "127th Division" 
       type       = infantry
	   strength  = 62
       model     = 5
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 94 } 
       name       = "128th Division" 
       type       = infantry
	   strength  = 62
       model     = 5
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 95 } 
       name       = "131st Division" 
       type       = infantry
	   strength  = 62
       model     = 5
	   locked = yes
      }
    }
	landunit = 
   {  location = 1299 # Chongqing
     name     = "47th Corps" 
     id       = {  type = 22000 id = 96  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 97 } 
       name       = "104th Division" 
       type       = infantry
	   strength  = 60
       model     = 5
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 98 } 
       name       = "Reinforcement Regiments" 
       type       = infantry
	   strength  = 60
       model     = 5
	   locked = yes
      }
    }
	landunit = 
   {  location = 1299 # Chongqing
     name     = "14th Route Army" 
     id       = {  type = 22000 id = 99  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 100 } 
       name       = "14th Independent Brigade" 
       type       = infantry
	   strength  = 60
       model     = 5
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 101 } 
       name       = "14th Route Army HQ" 
       type       = hq
	   strength  = 60
       model     = 2
	   locked = yes
      }
    }
	landunit = 
   {  location = 1299 # Chongqing
     name     = "Sichuan Provincial Security Group" 
     id       = {  type = 22000 id = 102  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 103 } 
       name       = "1st 2nd 3rd 4th 5th 6th Militia Regiments" 
       type       = militia
	   strength  = 100
       model     = 4
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 104 } 
       name       = "7th 8th 9th 10th 11th 12th Militia Regiments" 
       type       = militia
	   strength  = 100
       model     = 4
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 105 } 
       name       = "13th 14th 15th 16th 17th 18th Militia Regiments" 
       type       = militia
	   strength  = 100
       model     = 4
	   locked = yes
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 106 } 
       name       = "20th 21st 22nd 23rd 24th Militia Regiments" 
       type       = militia
	   strength  = 100
       model     = 4
	   locked = yes
      }
    }

	##################
	# Central Forces #
	##################

	# Five Main Forces

	landunit = 
   {  location = 1337 # Nanjing
     name     = "New 1st Corps" 
     id       = {  type = 22000 id = 107  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 108 } 
       name       = "50th Division" 
       type       = infantry
	   strength  = 80
       model     = 5
	   extra1 = artillery
	   brigade_model1 = 4
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 109 } 
       name       = "New 30th Division" 
       type       = infantry
	   strength  = 80
       model     = 5
	   extra1 = artillery
	   brigade_model1 = 4
      }
	  Division = 
     {  experience = 50 
       id         = {  type = 22000 id = 110 } 
       name       = "New 38th Division" 
       type       = infantry
	   strength  = 80
       model     = 5
	   extra1 = artillery
	   brigade_model1 = 4
      }
    }
	landunit = 
   {  location = 1337 # Nanjing
     name     = "New 6th Corps" 
     id       = {  type = 22000 id = 111  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 112 } 
       name       = "14th Division" 
       type       = infantry
	   strength  = 80
       model     = 6
	   extra1 = engineer
	   brigade_model1 = 2
	   extra2 = artillery
	   brigade_model2 = 4
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 113 } 
       name       = "207th Division" 
       type       = infantry
	   strength  = 80
       model     = 5
	   extra1 = artillery
	   brigade_model1 = 4
      }
	  Division = 
     {  experience = 50 
       id         = {  type = 22000 id = 114 } 
       name       = "New 22nd Division" 
       type       = infantry
	   strength  = 80
       model     = 5
	   extra1 = artillery
	   brigade_model1 = 4
      }
    }
	landunit = 
   {  location = 1337 # Nanjing
     name     = "74th Corps" 
     id       = {  type = 22000 id = 115  } 
     Division = 
     {  experience = 50 
       id         = {  type = 22000 id = 116 } 
       name       = "51st Division" 
       type       = infantry
	   strength  = 80
       model     = 5
	   extra1 = artillery
	   brigade_model1 = 4
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 117 } 
       name       = "57th Division" 
       type       = infantry
	   strength  = 80
       model     = 4
	   extra1 = engineer
	   brigade_model1 = 2
	   extra2 = artillery
	   brigade_model2 = 2
      }
	  Division = 
     {  experience = 40 
       id         = {  type = 22000 id = 118 } 
       name       = "58th Division" 
       type       = infantry
	   strength  = 80
       model     = 5
	   extra1 = artillery
	   brigade_model1 = 4
      }
    }
	landunit = 
   {  location = 1337 # Nanjing
     name     = "18th Corps" 
     id       = {  type = 22000 id = 119  } 
     Division = 
     {  experience = 0 
       id         = {  type = 22000 id = 120 } 
       name       = "11th Division" 
       type       = infantry
	   strength  = 80
       model     = 4
	   extra1 = engineer
	   brigade_model1 = 2
	   extra2 = artillery
	   brigade_model2 = 2
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 121 } 
       name       = "18th Division" 
       type       = infantry
	   strength  = 80
       model     = 5
	   extra1 = artillery
	   brigade_model1 = 4
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 122 } 
       name       = "118th Division" 
       type       = infantry
	   strength  = 80
       model     = 5
	   extra1 = artillery
	   brigade_model1 = 4
      }
    }
	landunit = 
   {  location = 1337 # Nanjing
     name     = "5th Corps" 
     id       = {  type = 22000 id = 123  } 
     Division = 
     {  experience = 30
       id         = {  type = 22000 id = 124 } 
       name       = "45th Division" 
       type       = infantry
	   strength  = 80
       model     = 5
	   extra1 = artillery
	   brigade_model1 = 4
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 125 } 
       name       = "96th Division" 
       type       = infantry
	   strength  = 80
       model     = 5
	   extra1 = artillery
	   brigade_model1 = 4
      }

    }
	landdivision = 
     {  experience = 0 
       id         = {  type = 22000 id = 126 } 
       name       = "200th Division" 
       type       = motorized
	   strength  = 80
       model     = 0
	   dormant = yes
      }

	# Attack Corps
	# 1st/2nd Corps: See CGX
	# 5/74 Corps: See 5 Main Forces Above
	landunit = 
   {  location = 1337 # Nanjing
     name     = "2nd Corps"  # Different than the one in CGX. Includes 9th Division from CGX post 1937.
     id       = {  type = 22000 id = 127  } 
     Division = 
     {  experience = 30
       id         = {  type = 22000 id = 128 } 
       name       = "76th Division" 
       type       = infantry
	   strength  = 80
       model     = 5
	   extra1 = artillery
	   brigade_model1 = 4
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 129 } 
       name       = "2nd Preparation Division" 
       type       = infantry
	   strength  = 80
       model     = 5
	   extra1 = artillery
	   brigade_model1 = 4
      }

    }

	#Other Main Forces
	landunit = 
   {  location = 1337 # Nanjing
     name     = "13th Corps" #Includes 3rd Division from CGX post 1937
     id       = {  type = 22000 id = 130  } 
     Division = 
     {  experience = 30
       id         = {  type = 22000 id = 131 } 
       name       = "54th Division" 
       type       = infantry
	   strength  = 80
       model     = 5
	   extra1 = artillery
	   brigade_model1 = 4
      }
	  Division = 
     {  experience = 0
       id         = {  type = 22000 id = 132 } 
       name       = "89th Division" 
       type       = infantry
	   strength  = 80
       model     = 4
	   extra1 = engineer
	   brigade_model1 = 2
	   extra2 = artillery
	   brigade_model2 = 2
      }

    }
	landunit = 
   {  location = 1337 # Nanjing
     name     = "26th Corps" #Includes 44th Division from CGX post 1937
     id       = {  type = 22000 id = 133  } 
     Division = 
     {  experience = 30
       id         = {  type = 22000 id = 134 } 
       name       = "41st Division" 
       type       = infantry
	   strength  = 80
       model     = 5
	   extra1 = artillery
	   brigade_model1 = 4
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 135 } 
       name       = "169th Division" 
       type       = infantry
	   strength  = 80
       model     = 5
	   extra1 = artillery
	   brigade_model1 = 4
      }

    }

	#Misc Other Corps/Outdated Corps (Upgraded with USA Arms post 1941)
	landunit = 
   {  location = 1337 # Nanjing
     name     = "8th Corps" #Different from the CGX 8th, includes 103rd Division from Guizhou post 1937
     id       = {  type = 22000 id = 136  } 
     Division = 
     {  experience = 15
       id         = {  type = 22000 id = 137 } 
       name       = "1st Honor Division" 
       type       = infantry
	   strength  = 60
       model     = 4
      }
	  Division = 
     {  experience = 10
       id         = {  type = 22000 id = 138 } 
       name       = "166th Division" 
       type       = infantry
	   strength  = 60
       model     = 4
      }

    }
	
	landunit = 
   {  location = 1337 # Nanjing
     name     = "53rd Corps"
     id       = {  type = 22000 id = 139  } 
     Division = 
     {  experience = 10
       id         = {  type = 22000 id = 140 } 
       name       = "2nd Honor Division" 
       type       = infantry
	   strength  = 60
       model     = 4
      }
	  Division = 
     {  experience = 10
       id         = {  type = 22000 id = 141 } 
       name       = "116th Division" 
       type       = infantry
	   strength  = 60
       model     = 4
      }
	  Division = 
     {  experience = 10
       id         = {  type = 22000 id = 142 } 
       name       = "130th Division" 
       type       = infantry
	   strength  = 60
       model     = 4
      }
    }

	landunit = 
   {  location = 1337 # Nanjing
     name     = "54th Corps" # Includes 8th Division from CGX post 1937
     id       = {  type = 22000 id = 143  }
	  Division = 
     {  experience = 40
       id         = {  type = 22000 id = 144 } 
       name       = "36th Division" 
       type       = infantry
	   strength  = 80
       model     = 6
	   extra1 = engineer
	   brigade_model1 = 2
	   extra2 = artillery
	   brigade_model2 = 4
      }
	  Division = 
     {  experience = 10
       id         = {  type = 22000 id = 145 } 
       name       = "198th Division" 
       type       = infantry
	   strength  = 60
       model     = 4
      }
	 Division = 
     {  experience = 0 
       id         = {  type = 22000 id = 182 } 
       name       = "67th Division" 
       type       = infantry
	   strength  = 80
       model     = 4
	   extra1 = engineer
	   brigade_model1 = 2
	   extra2 = artillery
	   brigade_model2 = 2
      }
    }

	
	landunit = 
   {  location = 1337 # Nanjing
     name     = "71st Corps"
     id       = {  type = 22000 id = 146  }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 147 } 
       name       = "87th Division" 
       type       = infantry
	   strength  = 80
       model     = 6
	   extra1 = engineer
	   brigade_model1 = 2
	   extra2 = artillery
	   brigade_model2 = 4
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 148 } 
       name       = "88th Division" 
       type       = infantry
	   strength  = 80
       model     = 6
	   extra1 = engineer
	   brigade_model1 = 2
	   extra2 = artillery
	   brigade_model2 = 4
      }
	  Division = 
     {  experience = 0
       id         = {  type = 22000 id = 149 } 
       name       = "91st Division" 
       type       = infantry
	   strength  = 60
       model     = 4
      }
    }
	
	landunit = 
   {  location = 1337 # Nanjing
     name     = "73rd Corps" # Contains 15th Division from Hunan post 1937
     id       = {  type = 22000 id = 150  }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 151 } 
       name       = "77th Division" 
       type       = infantry
	   strength  = 60
       model     = 4
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 152 } 
       name       = "193rd Division" 
       type       = infantry
	   strength  = 60
       model     = 4
      }
    }
    #name     = "94th Corps" # Contains 5th, 43rd Division from CGX post 1937, 121st Division from Guizhou post 1937.
	#name     = "100th Corps" # Contains 19th, 63rd Division from Hunan post 1937.

	
	landunit = 
   {  location = 1337 # Nanjing
     name     = "20th Corps" # Contains 15th Division from Hunan post 1937
     id       = {  type = 22000 id = 153  }
	  Division = 
     {  experience = 0
       id         = {  type = 22000 id = 154 } 
       name       = "133rd Division" 
       type       = infantry
	   strength  = 60
       model     = 3
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 155 } 
       name       = "134th Division" 
       type       = infantry
	   strength  = 60
       model     = 3
      }
    }
	landunit = 
   {  location = 1337 # Nanjing
     name     = "28th Corps" # Different from the Hunan task force.
     id       = {  type = 22000 id = 156  }
	  Division = 
     {  experience = 0
       id         = {  type = 22000 id = 157 } 
       name       = "52nd Division" 
       type       = infantry
	   strength  = 60
       model     = 3
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 158 } 
       name       = "80th Division" 
       type       = infantry
	   strength  = 80
       model     = 4
	   extra1 = engineer
	   brigade_model1 = 2
	   extra2 = artillery
	   brigade_model2 = 2
      }
	 Division = 
     {  experience = 0
       id         = {  type = 22000 id = 159 } 
       name       = "192nd Division" 
       type       = infantry
	   strength  = 60
       model     = 3
      }
    }

	landunit = 
   {  location = 1337 # Nanjing
     name     = "46th Corps"
     id       = {  type = 22000 id = 160  }
	  Division = 
     {  experience = 0
       id         = {  type = 22000 id = 161 } 
       name       = "175th Division" 
       type       = infantry
	   strength  = 60
       model     = 3
      }
	  Division = 
     {  experience = 0 
       id         = {  type = 22000 id = 162 } 
       name       = "188th Division" 
       type       = infantry
	   strength  = 60
       model     = 3
      }
	  Division = 
     {  experience = 0
       id         = {  type = 22000 id = 163 } 
       name       = "New 19th Division" 
       type       = infantry
	   strength  = 60
       model     = 3
      }
    }

	landunit = 
   {  location = 1337 # Nanjing
     name     = "52nd Corps" # Contains 2nd and 25th Division from CGX post 1937
     id       = {  type = 22000 id = 164  }
	  Division = 
     {  experience = 0
       id         = {  type = 22000 id = 165 } 
       name       = "195th Division" 
       type       = infantry
	   strength  = 60
       model     = 3
      }
    }

	landunit = 
   {  location = 1337 # Nanjing
     name     = "62nd Corps"
     id       = {  type = 22000 id = 166  }
	  Division = 
     {  experience = 0
       id         = {  type = 22000 id = 167 } 
       name       = "95th Division" 
       type       = infantry
	   strength  = 60
       model     = 3
      }
	 Division = 
     {  experience = 0
       id         = {  type = 22000 id = 168 } 
       name       = "151st Division" 
       type       = infantry
	   strength  = 60
       model     = 3
      }
	 Division = 
     {  experience = 0
       id         = {  type = 22000 id = 169 } 
       name       = "157th Division" 
       type       = infantry
	   strength  = 60
       model     = 3
      }
    }

	landunit = 
   {  location = 1337 # Nanjing
     name     = "64th Corps" # Contains 131st Division from Sichuan Task Force post 1937
     id       = {  type = 22000 id = 170  }
	 Division = 
     {  experience = 0
       id         = {  type = 22000 id = 171 } 
       name       = "156th Division" 
       type       = infantry
	   strength  = 60
       model     = 3
      }
	 Division = 
     {  experience = 0
       id         = {  type = 22000 id = 172 } 
       name       = "159th Division" 
       type       = infantry
	   strength  = 60
       model     = 3
      }
    }

	landunit = 
   {  location = 1337 # Nanjing
     name     = "92nd Corps" # Contains 21st Division from CGX post 1937
     id       = {  type = 22000 id = 173  }
	 Division = 
     {  experience = 0
       id         = {  type = 22000 id = 174 } 
       name       = "56th Division" 
       type       = infantry
	   strength  = 60
       model     = 3
      }
	 Division = 
     {  experience = 0
       id         = {  type = 22000 id = 175 } 
       name       = "142nd Division" 
       type       = infantry
	   strength  = 60
       model     = 3
      }
    }

	 landunit = 
   {  location = 1337 # Nanjing
     name     = "93rd Corps"
     id       = {  type = 22000 id = 176  }
	 Division = 
     {  experience = 0
       id         = {  type = 22000 id = 177 } 
       name       = "18th Training Division" 
       type       = infantry
	   strength  = 60
       model     = 3
      }
	 Division = 
     {  experience = 0
       id         = {  type = 22000 id = 178 } 
       name       = "20th Training Division" 
       type       = infantry
	   strength  = 60
       model     = 3
      }
	  Division = 
     {  experience = 0
       id         = {  type = 22000 id = 179 } 
       name       = "22nd Training Division" 
       type       = infantry
	   strength  = 60
       model     = 3
      }
    }

	# Unassigned
	landunit = 
   {  location = 1337 # Nanjing
     name     = "9th Army Group"
     id       = {  type = 22000 id = 180  }
	 Division = 
     {  experience = 0
       id         = {  type = 22000 id = 181 } 
       name       = "10th Division" 
       type       = infantry
	   strength  = 80
       model     = 4
	   extra1 = engineer
	   brigade_model1 = 2
	   extra2 = artillery
	   brigade_model2 = 2
      }
	  	#ID 182 is USED! See 54th Corps
	 Division = 
     {  experience = 0
       id         = {  type = 22000 id = 183 } 
       name       = "83rd Division" 
       type       = infantry
	   strength  = 80
       model     = 4
	   extra1 = engineer
	   brigade_model1 = 2
	   extra2 = artillery
	   brigade_model2 = 2
      }
	 Division = 
     {  experience = 0
       id         = {  type = 22000 id = 230 } 
       name       = "46th Division" 
       type       = infantry
	   strength  = 80
       model     = 6
	   extra1 = engineer
	   brigade_model1 = 2
	   extra2 = artillery
	   brigade_model2 = 4
      }
    }

	landunit = 
   {  location = 1337 # Nanjing
     name     = "10th Corps" #Contains 3rd Division from CGX after 1937
     id       = {  type = 22000 id = 184  }
	 Division = 
     {  experience = 0
       id         = {  type = 22000 id = 185 } 
       name       = "190th Division" 
       type       = infantry
	   strength  = 60
       model     = 3
      }

	 Division = 
     {  experience = 0
       id         = {  type = 22000 id = 186 } 
       name       = "10th Training Division" 
       type       = infantry
	   strength  = 60
       model     = 3
      }
    }

	landunit = 
   {  location = 1337 # Nanjing
     name     = "35th Corps" #Different from the one in CSX
     id       = {  type = 22000 id = 187  }
	 Division = 
     {  experience = 0
       id         = {  type = 22000 id = 188 } 
       name       = "New 32nd Division" 
       type       = infantry
	   strength  = 60
       model     = 3
      }

    }

	landunit = 
   {  location = 1337 # Nanjing
     name     = "NRA Youth Force"
     id       = {  type = 22000 id = 189  }
	 Division = 
     {  experience = 0
       id         = {  type = 22000 id = 190 } 
       name       = "201st Division" 
       type       = militia
	   strength  = 60
       model     = 3
      }

    }
	# Name = "60th Corps" #Contains units from Yunnan 10th Route Army

	# German Trained
	# CGX Controlled: 3rd, 6th, 9th
	# Central Controlled: 14th, 36th, 46th, 87th, 88th

	# In Progress
	# CGX Controlled: 2nd, 4th, 25th (Only in 1936), 27th (Only in 1936)
	# Central Controlled: 10th, 11th, 57th, 67th, 80th, 83rd, 89th 

	################
	# Airforce OOB #
	################
	# Sichuan
	airunit = 
   {  location = 1297 # Chengdu 
     name     = "Sichuan Air Force" 
     base     = 1297 # Guangzhou 
     id       = {  type = 22000 id = 191  } 
     Division = 
     {  id           = {  type = 22000 id = 192 } 
       name         = "33rd Squadron" 
       type         = multi_role 
       model        = 3
       strength     = 9
      } 
    }
	# Hunan
	airunit = 
   {  location = 1312 # Hengyang
     name     = "Hunan Air Force" 
     base     = 1312 # Hengyang
     id       = {  type = 22000 id = 193  } 
     Division = 
     {  id           = {  type = 22000 id = 194  } 
       name         = "11th 13th 14th Squadron" 
       type         = tactical_bomber
       model        = 2
       strength     = 25
      } 
	  Division = 
     {  id           = {  type = 22000 id = 195  } 
       name         = "12th Squadron" 
       type         = interceptor 
       model        = 0
       strength     = 9 
      } 
    }
	# Main
	airunit = 
   {  location = 1358 # Fuzhou
     name     = "RoC Airforce" 
     base     = 1358 # Fuzhou
     id       = {  type = 22000 id = 196  } 
     Division = 
     {  id           = {  type = 22000 id = 197  } 
       name         = "1st 2nd 9th 10th Squadrons" 
       type         = tactical_bomber
       model        = 2
       strength     = 40
      } 
	  Division = 
     {  id           = {  type = 22000 id = 198  } 
       name         = "21st 22nd 23rd 24th 25th Squadrons" 
       type         = interceptor 
       model        = 3
       strength     = 48
      } 
	  Division = 
     {  id           = {  type = 22000 id = 199  } 
       name         = "3rd 4th 5th 15th Squadrons" 
       type         = tactical_bomber 
       model        = 1
       strength     = 36
      }
	  Division = 
     {  id           = {  type = 22000 id = 200  } 
       name         = "15th Squadron" 
       type         = multi_role
       model        = 1
       strength     = 9
      } 
	  Division = 
     {  id           = {  type = 22000 id = 201  } 
       name         = "6th 35th Squadrons" 
       type         = interceptor 
       model        = 0
       strength     = 18
      } 
	   Division = 
     {  id           = {  type = 22000 id = 202  } 
       name         = "26th 27th Squadrons" 
       type         = tactical_bomber
       model        = 3
       strength     = 20
      } 
	  Division = 
     {  id           = {  type = 22000 id = 203  } 
       name         = "Transport Squadron" 
       type         = transport_plane
       model        = 0
       strength     = 100
      }
    }
	
	############
	# Navy OOB #
	############
	navalunit = 
   {  location = 1328 # Qingdao 
     name     = "1st Fleet" 
     id       = {  type = 22000 id = 204  } 
     base     = 1328
	  Division = 
     {  id    = {  type = 22000 id = 205  } 
       name  = "Ninghai"
       type  = light_cruiser
	   strength = 100
       model = 3  #Interwar
      } 
	  Division = 
     {  id    = {  type = 22000 id = 206  } 
       name  = "Pinghai"
       type  = light_cruiser
	   strength = 100
       model = 3  #Interwar
      } 
	 Division = 
     {  id    = {  type = 22000 id = 207  } 
       name  = "Datong, Ziqiang" 
       type  = destroyer
	   strength = 40
       model = 0  #Gunboat
	   experience = 10
      }
	   Division = 
     {  id    = {  type = 22000 id = 208  } 
       name  = "Yixian"
       type  = light_cruiser
	   strength = 100
       model = 2  #Early Light
      } 
	  Division = 
     {  id    = {  type = 22000 id = 209  } 
       name  = "Hairong"
       type  = light_cruiser
	   strength = 100
       model = 1  #Scout Cruiser
      } 
	  Division = 
     {  id    = {  type = 22000 id = 210  } 
       name  = "Haichou"
       type  = light_cruiser
	   strength = 100
       model = 1  #Scout Cruiser
      } 
	 Division = 
     {  id           = {  type = 22000 id = 211  } 
       name  = "Yongjian, Yongji, Zhongshan, Jiankang" 
       type  = destroyer
	   strength = 80
       model = 0  #Gunboat
	   experience = 20
      }

	 Division = 
     {  id           = {  type = 22000 id = 212  } 
       name  = "Dingan, Kean" 
       type  = destroyer
	   strength = 40
       model = 0  #Gunboat
	   experience = 20
	   extra1 = naval_torpedoes_s
	   brigade_model1 = 0
      }
	}
	navalunit = 
   {  location = 1328 # Qingdao 
     name     = "2nd Fleet" 
     id       = {  type = 22000 id = 213  } 
     base     = 1328

	 Division = 
     {  id    = {  type = 22000 id = 214  } 
       name  = "Minquan, Minsheng, Xianning, Chutong, Chutai" 
       type  = destroyer
	   strength = 100
       model = 0  #Gunboat
	   experience = 10
      }
	  Division = 
     {  id    = {  type = 22000 id = 215  } 
       name  = "Chuyou, Chuguan, Chuqian, Jiangyuan, Jiangzhen" 
       type  = destroyer
	   strength = 100
       model = 0  #Gunboat
	   experience = 10
      }
	 Division = 
     {  id           = {  type = 22000 id = 216  } 
       name  = "Jiangkun, Jiangxi" 
       type  = destroyer
	   strength = 40
       model = 0  #Gunboat
	   experience = 20
      }
	 Division = 
     {  id           = {  type = 22000 id = 217  } 
       name  = "Hupeng, Hue, Huying, Hucui" 
       type  = destroyer
	   strength = 80
       model = 0  #Gunboat
	   experience = 20
	   extra1 = naval_torpedoes_s
	   brigade_model1 = 0
      }
	}
     navalunit = 
   {  location = 1328 # Qingdao 
     name     = "Training Fleet" 
     id       = {  type = 22000 id = 218  } 
     base     = 1328
	 Division = 
     {  id    = {  type = 22000 id = 219  } 
       name  = "Yingrui"
       type  = light_cruiser
	   strength = 100
       model = 2  #Early Light
      } 
	 Division = 
     {  id    = {  type = 22000 id = 220  } 
       name  = "Tongji"
       type  = light_cruiser
	   strength = 100
       model = 2  #Early Light
      }
	}
	navalunit = 
   {  location = 1328 # Qingdao 
     name     = "3rd Fleet" 
     id       = {  type = 22000 id = 221  } 
     base     = 1328
	 Division = 
     {  id    = {  type = 22000 id = 222  } 
       name  = "Zhenhai"
       type  = heavy_cruiser
	   strength = 100
       model = 1  #Armored Cruiser
      }
	 Division = 
     {  id           = {  type = 22000 id = 223  } 
       name  = "Tongan, Yongxiang, Chuyu, Jiangli" 
       type  = destroyer
	   strength = 80
       model = 0  #Gunboat
	   experience = 20
      }
	  Division = 
     {  id           = {  type = 22000 id = 224  } 
       name  = "Dinghai" 
       type  = destroyer
	   strength = 20
       model = 0  #Gunboat
	   experience = 20
	   extra1 = naval_torpedoes_s
	   brigade_model1 = 0
      }
	}
	navalunit = 
   {  location = 1328 # Qingdao 
     name     = "RoC Naval Academy Fleet" 
     id       = {  type = 22000 id = 225  } 
     base     = 1328
	   Division = 
     {  id           = {  type = 22000 id = 226  } 
       name  = "Wen-42, Wen-88, Wen-93, Shi-34, Shi-102" 
       type  = destroyer
	   strength = 100
       model = 0  #Gunboat
	   experience = 20
	   extra1 = naval_torpedoes_s
	   brigade_model1 = 0
      }
	  Division = 
     {  id           = {  type = 22000 id = 227  } 
       name  = "Shi-181, Yue-22, Yue-253, Yue-371" 
       type  = destroyer
	   strength = 80
       model = 0  #Gunboat
	   experience = 20
	   extra1 = naval_torpedoes_s
	   brigade_model1 = 0
      }
	 Division = 
     {  id           = {  type = 22000 id = 228  } 
       name  = "Haijing, Junhe, Cedian, Boxian" 
       type  = destroyer
	   strength = 80
       model = 0  #Gunboat
	   experience = 20
      }
     Division = 
     {  id    = {  type = 22000 id = 229  } 
       name  = "Tongxin, Tongde, Ziyouzhongguo"
       type  = transport
	   strength = 60
       model = 0  
      } 
	}
      airdivision = 
     { dormant = yes  id = {  type = 22000 id = 999  } 
       name     = "1st US Volunteer Air Force" 
       type     = multi_role
       model    = 6
       experience = 60
      }
      airdivision = 
     { dormant = yes  id = {  type = 22000 id = 998  } 
       name     = "14th Air Force" 
       type     = tactical_bomber 
       model    = 8
       experience = 80
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 997 } 
       name     = "183rd Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 996 } 
       name     = "184th Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 995 } 
       name     = "185th Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 994 } 
       name     = "186th Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 993 } 
       name     = "183rd Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 992 } 
       name     = "187th Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 991 } 
       name     = "188th Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 990 } 
       name     = "189th Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 989 } 
       name     = "190th Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 988 } 
       name     = "191st Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 987 } 
       name     = "192nd Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 986 } 
       name     = "193rd Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 985 } 
       name     = "194th Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 984 } 
       name     = "195th Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 983 } 
       name     = "196th Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 982 } 
       name     = "197th Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 981 } 
       name     = "198th Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 980 } 
       name     = "199th Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 979 } 
       name     = "200th Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 978 } 
       name     = "201st Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 977 } 
       name     = "202nd Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 976 } 
       name     = "203rd Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 975 } 
       name     = "204th Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 974 } 
       name     = "205th Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 973 } 
       name     = "206th Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 972 } 
       name     = "207th Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 971 } 
       name     = "208th Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 970 } 
       name     = "209th Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 969 } 
       name     = "210th Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 968 } 
       name     = "211th Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 967 } 
       name     = "212th Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 966 } 
       name     = "213th Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 965 } 
       name     = "214th Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 964 } 
       name     = "215th Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 963 } 
       name     = "216th Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 962 } 
       name     = "217th Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 961 } 
       name     = "218th Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 960 } 
       name     = "219th Division" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 959 } 
       name     = "220th Division" 
       type     = infantry
       model    = 9
      }
   landunit = 
   {  id       = {  type = 22000 id =  958 } 
     name     = "Kai-shek and Staff" 
     location = 1297 #Chongjding
     Division =
     { id       = { type = 22000 id = 957 } 
       name     = "Kai-shek and Staff" 
       type     = d_10
       model    = 0
       experience = 100
       locked = yes
      }
   }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 956 } 
       name     = "221st Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 955 } 
       name     = "222nd Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 954 } 
       name     = "223rd Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 953 } 
       name     = "224th Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 952 } 
       name     = "225th Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 951 } 
       name     = "226th Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 950 } 
       name     = "227th Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 949 } 
       name     = "228th Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 948 } 
       name     = "229th Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 947 } 
       name     = "230th Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 946 } 
       name     = "231st Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 945 } 
       name     = "232nd Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 944 } 
       name     = "233rd Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 943 } 
       name     = "234th Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 942 } 
       name     = "235th Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 941 } 
       name     = "236th Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 940 } 
       name     = "237th Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 939 } 
       name     = "238th Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 938 } 
       name     = "239th Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 937 } 
       name     = "240th Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 936 } 
       name     = "241st Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 935 } 
       name     = "242nd Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 934 } 
       name     = "243rd Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 933 } 
       name     = "244th Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 932 } 
       name     = "245th Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 931 } 
       name     = "246th Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 930 } 
       name     = "247th Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 929 } 
       name     = "248th Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 928 } 
       name     = "249th Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 927 } 
       name     = "250th Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 926 } 
       name     = "251st Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 925 } 
       name     = "252nd Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 924 } 
       name     = "253rd Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 923 } 
       name     = "254th Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 922 } 
       name     = "255th Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 921 } 
       name     = "256th Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 920 } 
       name     = "257th Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 919 } 
       name     = "258th Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 918 } 
       name     = "259th Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 917 } 
       name     = "260th Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 916 } 
       name     = "261st Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 915 } 
       name     = "262nd Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 914 } 
       name     = "263rd Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 913 } 
       name     = "264th Division" 
       type     = infantry
       model    = 8
      }
	landdivision = 
     { dormant = yes  id = { type = 22000 id = 912 } 
       name     = "265th Division" 
       type     = infantry
       model    = 8
      }
	# ID 230 USED! See 46th Division
  } 
 