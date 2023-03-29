 
 ############################## 
 # Country definition for YUG # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = YUG 
	ai = "yug_1936.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
	dissent = 20
	# Resource Reserves 
	energy                 = 1500
	metal                  = 750
	rare_materials         = 375
	transports = 50
	oil                    = 500 
	supplies               = 500 
	money                  = 15 
	capital                = 338 
	manpower 			  = 24
      
   diplomacy = 
   {  relation = {  tag = BUL value = 25  } 
     relation = {  tag = CZE value = 50 guaranteed = {  day = 29 month = december year = 1932  } } 
     relation = {  tag = FIN value = 35  } 
     relation = {  tag = FRA value = 50  } 
     relation = {  tag = GER value = 50  } 
     relation = 
     {  tag        = GRE 
       value      = 100 
       guaranteed = {  day = 29 month = december year = 1932  } 
      } 
     relation = {  tag = HUN value = 80  } 
     relation = {  tag = ITA value = 75  } 
     relation = 
     {  tag        = ROM 
       value      = 100 
       guaranteed = {  day = 29 month = december year = 1932  } 
      } 
     relation = 
     {  tag        = TUR 
       value      = 100 
       guaranteed = {  day = 29 month = december year = 1932  } 
      } 
    } 
   SpyInfo                = {  country = "YUG" NumberOfSpies = 7  } 
   nationalprovinces      = {  327 328 329 330 331 332 333 334 335 336 337 338 339 340 341 342 343 344 345 346 347 349 350 351 352 353 354 355 356 357 358  } 
   ownedprovinces         = {  327 328 329 330 331 332 333 334 335 336 337 338 339 340 341 342 343 344 345 346 347 349 350 351 352 353 354 355 356 357 358  } 
   controlledprovinces    = {  327 328 329 330 331 332 333 334 335 336 337 338 339 340 341 342 343 344 345 346 347 349 350 351 352 353 354 355 356 357 358  } 
   # Eastern Minor Tech '36 
   # Group D 1936 techs 
   # ###################### 
   # GW fighter 
   techapps               = {  
#Interwar Fighter  
4500 4510 4520 4530 4540 4550 4010
#Basic Armoured Car  
2860 2870 2880 2020
#Great War Heavy Field Artillery 
2290 2300 2310
#SW Tank 
7600 7610 2620 2010
#Great War Infantry Division  
1010 1020 1030 1040 1050 1060 
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340
#Early Mountain Division 
1160 1170 1180 1190 1200 1210 1220 1230 1240
#Engineers
1830 1840 
#Early Static Anti-Air Artillery 
2800 2450 21180 21190
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Modern Agriculture  
5700 5710 5010
#Manufactoring
5810 5820 5050 5830
#Computers & cryptografi
5310 54010 54020 54030 5316 5326
#Improved Construction Engineering 
5800 5080 5090 
#Basic Oil Refining 
#5190
#Interwar Bomber 
4600 4610 4620 4630 4120
#Improved Destroyer 
3010 3020 3030 3040 3050 3060
#Short Range Submarine 
3610 3620
#Torpedo & ASW 18
3720 3730 3736 3740 3750 3900
#Troopships
3810
#Medicine
5600 5610 #5620
#Interbellum Supply 
1910 1920 1930 1940 1950 1960
#Naval Doctrines
8010 8040 8050
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
# Land doctrines WWI - Entente line
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
#Landdoctrine ww2 - none?
#Improved Great War Hospital System
14000 #14010
#Carrier Pigeons
30020 30030
} 
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 4 
     political_left    = 3 
     freedom           = 5 
     free_market       = 5 
     professional_army = 5 
     defense_lobby     = 4 
     interventionism   = 6 
    } 

   headofstate            = {  type = 9 id = 100086  } #Aleksandar I
   headofgovernment       = {  type = 9 id = 100092  } 
   foreignminister        = {  type = 9 id = 100003  } 
   armamentminister       = {  type = 9 id = 100004  } 
   ministerofsecurity     = {  type = 9 id = 100005  } 
   ministerofintelligence = {  type = 9 id = 100006  } 
   chiefofstaff           = {  type = 9 id = 100007  } 
   chiefofarmy            = {  type = 9 id = 100008  } 
   chiefofnavy            = {  type = 9 id = 100009  } 
   chiefofair             = {  type = 9 id = 100010  } 
   landunit = 
   {  id       = {  type = 19800 id = 1  } 
     location = 338 
     name     = "Kraljevske Jugoslavenske Vojske" 
     Division = 
     {  id       = {  type = 19800 id = 2  } 
       name     = "Strazhari Pesadijska Divizija" 
       strength = 85
       type     = infantry 
	   model    = 8
       extra    = engineer
	   brigade_model = 2
      } 
     Division = 
     {  id       = {  type = 19800 id = 3  } 
       name     = "1. 'Cerska' Pesadijska Divizija" 
       strength = 10
       type     = infantry 
	   model    = 6
      } 
     Division = 
     {  id       = {  type = 19800 id = 4  } 
       name     = "33. 'Licka' Pesadijska Divizija" 
       strength = 10
       type     = infantry 
	   model    = 6
      } 
     Division = 
     {  id       = {  type = 19800 id = 5  } 
       name     = "44. 'Unska' Pesadijska Divizija" 
       strength = 10
       type     = infantry 
	   model    = 6
      } 
     Division = 
     {  id       = {  type = 19800 id = 6  } 
       name     = "47. 'Dinarska' Pesadijska Divizija" 
       strength = 10
       type     = infantry 
	   model    = 6
      } 
    } 
   landunit = 
   {  id       = {  type = 19800 id = 7  } 
     location = 341 
     name     = "I. Armija" 
     Division = 
     {  id       = {  type = 19800 id = 8  } 
       name     = "7. 'Potiska' Pesadijska Divizija" 
       strength = 60
       type     = infantry 
	   model    = 7
       extra    = artillery 
	   brigade_model = 3
      } 
     Division = 
     {  id       = {  type = 19800 id = 9  } 
       name     = "3. Konjicka Divizija" 
       strength = 100
       type     = cavalry 
	   model    = 8
      } 
    } 
   landunit = 
   {  id       = {  type = 19800 id = 10  } 
     name     = "II. Armija" 
     location = 355 
     Division = 
     {  id       = {  type = 19800 id = 11  } 
       name     = "10. 'Bosanska' Pesadijska Divizija" 
       strength = 60
       type     = infantry 
	   model    = 7
       extra    = artillery 
	   brigade_model = 3
      } 
     Division = 
     {  id       = {  type = 19800 id = 12  } 
       name     = "17. 'Vrbaska' Pesadijska Divizija" 
       strength = 60
       type     = infantry 
	   model    = 7
       extra    = anti_air
	   brigade_model = 1
      } 
     Division = 
     {  id       = {  type = 19800 id = 13  } 
       name     = "30. 'Osijecka' Pesadijska Divizija" 
       strength = 60
       type     = infantry 
	   model    = 7
      } 
     Division = 
     {  id       = {  type = 19800 id = 14  } 
       name     = "12. 'Jadranska' Pesadijska Divizija" 
       strength = 10
       type     = infantry 
	   model    = 6
      } 
    } 
   landunit = 
   {  id       = {  type = 19800 id = 15  } 
     location = 333 
     name     = "III. Armija" 
     Division = 
     {  id       = {  type = 19800 id = 16  } 
       name     = "13. 'Hercegovacka' Pesadijska Divizija" 
       strength = 60
       type     = infantry 
	   model    = 7
       extra    = artillery 
	   brigade_model = 3
      } 
     Division = 
     {  id       = {  type = 19800 id = 17  } 
       name     = "15. 'Zetska' Pesadijska Divizija" 
       strength = 60
       type     = infantry 
	   model    = 7
       extra    = anti_air
	   brigade_model = 1
      } 
     Division = 
     {  id       = {  type = 19800 id = 18  } 
       name     = "25. 'Vardarska' Pesadijska Divizija" 
       strength = 60
       type     = infantry 
	   model    = 7
      } 
     Division = 
     {  id       = {  type = 19800 id = 19  } 
       name     = "31. 'Kosovska' Pesadijska Divizija" 
       strength = 60
       type     = infantry 
	   model    = 7
      } 
     Division = 
     {  id       = {  type = 19800 id = 20  } 
       name     = "5. 'Sumadiska' Pesadijska Divizija" 
       strength = 10
       type     = infantry 
	   model    = 6
      } 
     Division = 
     {  id       = {  type = 19800 id = 21  } 
       name     = "20. 'Breganilcka' Pesadijska Divizija" 
       strength = 10
       type     = infantry 
	   model    = 6
      } 
     Division = 
     {  id       = {  type = 19800 id = 22  } 
       name     = "22. 'Ibarska' Pesadijska Divizija" 
       strength = 10
       type     = infantry 
	   model    = 6
      } 
     Division = 
     {  id       = {  type = 19800 id = 23  } 
       name     = "46. 'Moravska' Pesadijska Divizija" 
       strength = 10
       type     = infantry 
	   model    = 6
      } 
    } 
   landunit = 
   {  id       = {  type = 19800 id = 24  } 
     location = 352
     name     = "IV. Armija" 
     Division = 
     {  id       = {  type = 19800 id = 25  } 
       name     = "27. 'Savska' Pesadijska Divizija" 
       strength = 60
       type     = infantry 
	   model    = 7
       extra    = artillery 
	   brigade_model = 3
      } 
     Division = 
     {  id       = {  type = 19800 id = 26  } 
       name     = "40. 'Slavonska' Pesadijska Divizija" 
       strength = 60
       type     = infantry 
	   model    = 7
       extra    = anti_air
	   brigade_model = 1
      } 	
     Division = 
     {  id       = {  type = 19800 id = 27  } 
       name     = "42. 'Murska' Pesadijska Divizija" 
       strength = 60
       type     = infantry 
	   model    = 7
      } 
     Division = 
     {  id       = {  type = 19800 id = 28  } 
       name     = "32. 'Triglavska' Pesadijska Divizija" 
       strength = 10
       type     = infantry 
	   model    = 6
      } 
     Division = 
     {  id       = {  type = 19800 id = 29  } 
       name     = "1. Konjicka Divizija" 
       strength = 10
       type     = cavalry
	   model    = 7
      } 
    } 
   landunit = 
   {  id       = {  type = 19800 id = 30  } 
     location = 330 
     name     = "V. Armija" 
     Division = 
     {  id       = {  type = 19800 id = 31  } 
       name     = "8. 'Krajinska' Pesadijska Divizija" 
       strength = 60
       type     = infantry 
	   model    = 7
       extra    = artillery 
	   brigade_model = 3
      } 
     Division = 
     {  id       = {  type = 19800 id = 32  } 
       name     = "9. 'Timocka' Pesadijska Divizija" 
       strength = 60
       type     = infantry 
	   model    = 7
       extra    = engineer
	   brigade_model = 2
      } 
     Division = 
     {  id       = {  type = 19800 id = 33  } 
       name     = "34. 'Toplicka' Pesadijska Divizija" 
       strength = 60
       type     = infantry 
	   model    = 7
      } 
     Division = 
     {  id       = {  type = 19800 id = 34  } 
       name     = "50. 'Drinska' Pesadijska Divizija" 
       strength = 60
       type     = infantry 
	   model    = 7
      } 
     Division = 
     {  id       = {  type = 19800 id = 35  } 
       name     = "2. Konjicka Divizija" 
       strength = 100
       type     = cavalry
	   model    = 8
      } 
     Division = 
     {  id       = {  type = 19800 id = 36  } 
       name     = "3. 'Dunavska' Pesadijska Divizija" 
       strength = 10
       type     = infantry 
	   model    = 6
      } 
     Division = 
     {  id       = {  type = 19800 id = 37  } 
       name     = "49. 'Sremska' Pesadijska Divizija" 
       strength = 10
       type     = infantry 
	   model    = 6
      } 	
    } 

   # ########################## 
   # ########################## 
   navalunit = 
   {  id       = {  type = 19800 id = 38  } 
     name     = "Jugoslovenska Kraljevska Ratna Mornarica" 
     location = 332
     base     = 332
     Division = 
     {  id       = {  type = 19800 id = 39  } 
       name     = "JRM Dalmacija" 
       type     = light_cruiser
       model    = 0 
       strength = 100
      } 
     Division = 
     {  id       = {  type = 19800 id = 40  } 
       name     = "JRM Dubrovnik" 
       type     = destroyer 
       model    = 4 
       strength = 20 
	max_strength = 20
      } 
     Division = 
     {  id       = {  type = 19800 id = 41  } 
       name     = "1. Razaracka Flotila" 
       type     = destroyer 
       model    = 0 
       strength = 80 
      } 
     Division = 
     {  id       = {  type = 19800 id = 42  } 
       name     = "2. Razaracka Flotila" 
       type     = destroyer 
       model    = 0 
       strength = 80 
      } 
     Division = 
     {  id    = {  type = 19800 id = 43  } 
       name  = "1. Podmornicka Flotila" 
       type  = submarine 
       model = 3
	strength = 80 
      } 
     Division = 
     {  id       = {  type = 19800 id = 44  } 
       name     = "1. Prevoz Flotila" 
       type     = transport
       model    = 1 
       strength = 100 
      } 
    } 

   airunit = 
   {  location = 338 
     base     = 338 
     id       = {  type = 19800 id = 45  } 
     name     = "Jugoslovensko Kraljevsko Ratno Vazduhoplovstvo" 
     Division = 
     {  id       = {  type = 19800 id = 46  } 
       name     = "1. Vazduhoplovna Brigada" 
       strength = 10
       type     = interceptor 
       model    = 6
      } 
     Division = 
     {  id       = {  type = 19800 id = 47  } 
       name     = "2. Vazduhoplovna Brigada" 
       strength = 15 
       type     = transport_plane 
       model    = 0 
      } 
    } 
  } 
 
