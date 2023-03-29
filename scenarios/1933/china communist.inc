 
 ############################## 
 # Country definition for CHC # 
 ############################## 
  

  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = CHC 
	ai = "chc_1936.ai"
	ai_settings = { flags = { MOB1 = yes MOB2 = yes RES = yes } }
	dissent = 5
	intrinsic_gov_type     = leninist 
	extra_tc               = 7 
	capital                = 1354 # Ganzhou
	# Resource Reserves 
	energy                 = 240
	metal                  = 120
	rare_materials         = 60
	oil                    = 100 
	supplies               = 800 
	money                  = 50 
	manpower               = 220 #120 added to reinforce units 
   diplomacy = 
   {  relation = {  tag = JAP value = -200  } 
     relation = {  tag = MAN value = -100  } 
     relation = {  tag = CHI value = -200  } 
     relation = {  tag = CGX value = -200  } 
     relation = {  tag = CYN value = -200  } 
     # CHC protected by Shaanxi provincial governor who was secret communist
     relation = {  tag = CSX value = -75  } 
     relation = {  tag = CXB value = -100  } 
     relation = {  tag = SOV value = 100  } 
     relation = {  tag = MON value = 25  }
     relation = {  tag = U67 value = 50  } 
     relation = {  tag = SIK value = 40  }
    } 
   SpyInfo                = {  country = "CHC" NumberOfSpies = 3  } 
   nationalprovinces      = {   
  
 #Communist China at start      
 1255 1259 1260
  
 #Nationalist China  
 1256 1257 1258 1261 1262 1267 1291 1292 1293 1296 1297 1298 1299 1300 1301 1302 1303 1304 1305 1306 1307 1308 1309 1310 1311 1312 1313 1314 1315 1316 1317 1318 1319 1320 1321 1322 1323 1324 1325 1326 1333 1334 1335 1336 1337 1338 1339 1340 1341 1342 1343 1344 1345 1346 1347 1348 1349 1350 1351 1352 1353 1354 1355 1356 1357 1358 1359 1360      
  
 #Yunnan          
 1384 1385 1386 1387 1388 1389 1390 
  
 #Guanxi Clique  
  1361 1365 1367 1368 1369 1370 1373 1374 1375 1376 1377 1378 1379 1380 1381 1382 1383  
  
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
  
 #Japan In China     
 1219 1238 1239 1240 
  
 #European Possessions     
  1371 1372  
   
 #Taiwan     
  1362 1363 1364  
  
                             } 
   ownedprovinces         = {  1344 1357 1345 1352 1349 1359 1322 1325 1314 1355 1354 } 
   controlledprovinces    = {  1344 1357 1345 1352 1349 1359 1322 1325 1314 1355 1354 } 
   claimedprovinces = { 
	1455 1458 #Arunachal Pradesh
						} 
	#Communist China
 	techapps = { 
	

	# Construction Engineering - Up to 1910
	5800

	# Crypto - Up to 1922
	5316 5326

	# Infantry Division
	1010 1020 1030 1040 1050 1060
	# Mountain Division
	1160 1170 1180 1190 1200 1210 1220
	# Cavalry Division  
	13060 13070 13080 1310

	# Supply 
	1910 1920 1930 1940 1950

	# Field Artillery 
	2290 2300 2310 2900 2910

	# Hospital System
	14000 14010 14020
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
	6570
	#Carrier Pigeons
	30020 30030

	} 

blueprints = {
	
	# Manufacturing
	5810
	
	#Construction
	5080

	# Infantry
	1070

	# Mountain
	1230

	# Cavalry
	1320 1330 1340 1350

	# Crypto
	5327

	# Supply
	1960

	# Armoured Car  
	2860

	# Interceptor Fighter  
	4500 4510 4520  
	# Multirole Fighter
	4300 4310
	# Tactical Bomber 
	4600 4610 4620
	# Strategic Bomber
	4800
}
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 4 
     political_left    = 8 
     free_market       = 4
     freedom           = 4 
     professional_army = 2 
     defense_lobby     = 10 
     interventionism   = 5 
    } 
		industrial_modifier				= 1.05 # 
   headofstate            = {  type = 9 id = 260838  } 
   headofgovernment       = {  type = 9 id = 260839  } 
   foreignminister        = {  type = 9 id = 260861  } 
   armamentminister       = {  type = 9 id = 260840  } 
   ministerofsecurity     = {  type = 9 id = 260841  } 
   ministerofintelligence = {  type = 9 id = 260855  } 
   chiefofstaff           = {  type = 9 id = 260846  } 
   chiefofarmy            = {  type = 9 id = 260847  } 
   chiefofnavy            = {  type = 9 id = 260830  } 
   chiefofair             = {  type = 9 id = 260831  } 
   # ###### 
   # COMMUNIST CHINA 1933 OOB
   # http://zh.wikipedia.org/wiki/%E4%B8%AD%E5%9B%BD%E5%B7%A5%E5%86%9C%E7%BA%A2%E5%86%9B%E6%88%98%E6%96%97%E5%BA%8F%E5%88%97
   # This OOB is NOT the one CHC starts with before Long March. Note the scenario starts before 4th Encirclement has begun.
   # ######
#	First Red Army Front (Jiangxi) (100000, down to 87000 after 4th encirclement)
#    1st Army Group
#     3rd Army (3000)
#     4th Army (2100)
#    3rd Army Group
#     5th Army (2500)
#     7th Army (2800)
#     14th Army (5600)
#    5th Army Group (13th + 14th + 15th = 17000)
#     13th Army (5600)
#     15th Army (5600)
#    21st Army (???) (17000)
#     61st 62nd 63rd Division
#    22nd Army (???) (17000)
#     36th 64th 65th 66th Division
#    12th Army (3200)
#     34th 35th Division
#    11th Army (???) (17000)
#     31st Division
#    26th Red Army (500) (Destroyed) (Militia)
#     42nd Division
#    23rd Red Army (???) (Destroyed) (17000)
#    18th Red Army (???) (17000)
#   Second Red Army Front (East Guizhou)
#    6th Red Army (9000)
#   Fourth Red Army Front (Jiangxi) (50000)
#    4th Army (12500)
#     10th 11th 12th 13th Division
#    3rd Red Army (???) (17250)
#     7th Division
#     9th Division
#     Training Division
#    25th Red Army (3000)
#     74th Division
#     75th Division
#     73rd Division
#    19th Red Army (???) (17250)
#     Fuzhou Local 7th 8th 9th Division
#     55th 56th Division
#   16th Army (Nanyang) #1325
#    6th Army Group (9000)
  landunit = 
   {  location = 1354 # Ganzhou
     name     = "1st Red Army Front" 
     id       = {  type = 24000 id = 1  } 
	 Division = 
     {  experience = 30 
       id         = {  type = 24000 id = 2  } 
       name       = "1st Army Group" 
       type       = infantry
       strength  = 40 
       model      = 5 
      } 
	  Division = 
     {  experience = 30 
       id         = {  type = 24000 id = 3  } 
       name       = "3rd Army Group" 
       type       = infantry
       strength  = 83
       model      = 5 
      } 
	  Division = 
     {  experience = 30 
       id         = {  type = 24000 id = 4  } 
       name       = "5th Army Group" 
       type       = infantry
       strength  = 87
       model      = 5 
      } 
	  Division = 
     {  experience = 30 
       id         = {  type = 24000 id = 5  } 
       name       = "21st Army" 
       type       = infantry
       strength  = 100
       model      = 5 
	   extra1 = cavalry_brigade
	   brigade_model1 = 4
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 24000 id = 6  } 
       name       = "22nd Army" 
       type       = infantry
       strength  = 100
       model      = 5 
	   extra1 = cavalry_brigade
	   brigade_model1 = 4
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 24000 id = 7  } 
       name       = "12th Army" 
       type       = infantry
       strength  = 24
       model      = 5 
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 24000 id = 8  } 
       name       = "11th Army" 
       type       = infantry
       strength  = 100
       model      = 5 
	   extra1 = cavalry_brigade
	   brigade_model1 = 4
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 24000 id = 9  } 
       name       = "18th Army" 
       type       = infantry
       strength  = 100
       model      = 5 
	   extra1 = cavalry_brigade
	   brigade_model1 = 4
      }
	 }
	landunit = 
   {  location = 1344 # Anqing
     name     = "Anqing Militia" 
     id       = {  type = 24000 id = 10  }
	 Division = 
     {  experience = 30 
       id         = {  type = 24000 id = 11  } 
       name       = "26th Army" 
       type       = militia
       strength  = 5
       model      = 3 
      }
    }
	landunit = 
   {  location = 1345 # Hangzhou
     name     = "1st Red Army Front" 
     id       = {  type = 24000 id = 12  }
	 Division = 
     {  experience = 30 
       id         = {  type = 24000 id = 13 } 
       name       = "23rd Army" 
       type       = infantry
       strength  = 100
       model      = 5 
	   extra1 = cavalry_brigade
	   brigade_model1 = 4
      }
    }
	landunit = 
   {  location = 1355 # Ji'an
     name     = "2nd Red Army Front" 
     id       = {  type = 24000 id = 14  }
	 Division = 
     {  experience = 30 
       id         = {  type = 24000 id = 15 } 
       name       = "6th Red Army" 
       type       = infantry
       strength  = 70
       model      = 5 
      }
    }
		landunit = 
   {  location = 1352 # Nanchang
     name     = "4th Red Army Front" 
     id       = {  type = 24000 id = 16  }
	 Division = 
     {  experience = 30 
       id         = {  type = 24000 id = 17 } 
       name       = "4th Army" 
       type       = infantry
       strength  = 96
       model      = 5 
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 24000 id = 18 } 
       name       = "3rd Red Army" 
       type       = infantry
       strength  = 100
       model      = 5 
	   extra1 = cavalry_brigade
	   brigade_model1 = 4
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 24000 id = 19 } 
       name       = "25th Red Army" 
       type       = infantry
       strength  = 23
       model      = 5 
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 24000 id = 20 } 
       name       = "19th Red Army" 
       type       = infantry
       strength  = 100
       model      = 5 
	   extra1 = cavalry_brigade
	   brigade_model1 = 4
      }
    }
    landunit = 
   {  location = 1325 # Nanyang
     name     = "16th Army" 
     id       = {  type = 24000 id = 21  } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 22  } 
       name       = "6th Army Group" 
       type       = militia
       strength  = 50
       model      = 5 
      } 
     dig_in   = 20.000 
    } 
	landdivision = 
     { dormant = yes  id = { type = 24000 id = 999 } 
       name     = "188th Red Army" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 24000 id = 998 } 
       name     = "189th Red Army" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 24000 id = 997 } 
       name     = "190th Red Army" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 24000 id = 996 } 
       name     = "191st Red Army" 
       type     = infantry
       model    = 9
      }
	landdivision = 
     { dormant = yes  id = { type = 24000 id = 995 } 
       name     = "192nd Red Army" 
       type     = infantry
       model    = 9
      }
    landdivision = 
     { dormant = yes  id       = {  type = 24000 id = 994  } 
       name     = "Zedong and Staff" 
       type     = d_10
       model    = 0
       experience = 100
       location = 1259
       locked = yes
      }
  } 
 