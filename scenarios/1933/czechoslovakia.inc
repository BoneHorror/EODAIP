    ############################## 
     # Country definition for CZE # 
     ############################## 
  
 
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = CZE 
	ai = "cze_1933.ai"
	ai_settings = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }
	dissent = 20
	# Resource Reserves 
	energy                 = 2160
	metal                  = 1080
	rare_materials         = 540
	oil                    = 500
	supplies               = 500 
	money                  = 20 
	manpower               = 43
	capital                = 207 
   diplomacy = 
   {  relation = {  tag = ENG value = 125  } 
     relation = {  tag = FIN value = 50  } 
     relation = {  tag = FRA value = 150  } 
     relation = {  tag = GER value = -25  } 
     relation = {  tag = HUN value = -50  } 
     relation = {  tag = ITA value = 15  } 
     relation = {  tag = POL value = -1  } 
     relation = {  tag = ROM value = 20  guaranteed = {  day = 29 month = december year = 1932  } } 
     relation = {  tag = SOV value = 100  } 
     relation = {  tag = YUG value = 50  guaranteed = {  day = 29 month = december year = 1932  } } 
	 relation = {  tag = LIT value = 65  }
	 relation = {  tag = LAT value = 65  }
	 relation = {  tag = EST value = 65  }
    } 
   SpyInfo                = {  country = "CZE" NumberOfSpies = 7  } 
   nationalprovinces      = {  196 197 198 199 200 201 202 203 204 205 206 207 208 209 210 211 212 213 214 215  } 
   ownedprovinces         = {  196 197 198 199 200 201 202 203 204 205 206 207 208 209 210 211 212 213 214 215  } 
   controlledprovinces    = {  196 197 198 199 200 201 202 203 204 205 206 207 208 209 210 211 212 213 214 215  } 

	# Group C 1933 techs 
	# ###################### 
	techapps = { 
	#Early Infantry Division  
	1010  1020 1030 1040 1050 1060 1070 1080 1090
	#Early Mountain Division 
	1160  1170 1180 1190 1200 1210 1220 1230 1240
	#Great War Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 
	#Interbellum 1930 Supply 
	1910 1920 1930 1940 1950 1960 1970 1980
	#Great War Hospital System 
	14000 14010 14020
	#Engineers
	1830 1840 1850 1860
	#Tankette 
	7600 7610 2620 2010 2630 2640 2646 2650 2030
	#Basic Armoured Car  
	2860 2870 2880 2020 2150
	#Great War Heavy Field Artillery 
	2290 2300 2310
	#Early Static Anti-Air Artillery 
	2800 2450 21180 21190 21200
	#Basic Anti-Air Artillery Brigade 
	2810 2820 2510
	#Early Fighter  
	4500 4510 4520 4530 4540 4550 4010 4020
	#Interwar Bomber 
	4600 4610 4620 4630 4120
	#Multirole fighter
	4300 4310 4320 4330
	#ww1 strategic bomber
	4800 4810 4820
	#Medicine
	5600 5610 5620 5630
	#Computers & cryptografi
	5310 54010 54020 54030 5316 5326
	#Manufactoring
	5810 5820 5050 5830 5060
	#Mechanized Agriculture 
	5700 5710 5010
	#Improved Construction Engineering 
	5800 5080 5090 
	#rocket
	5560
	
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
	#Land Doctrines
	6560
	#Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470
	#Carrier Pigeons
	30020 30030
	}
	inventions = { 3000027 }
	policy = 
	{  date              = {  year = 0 month = january day = 0  } 
		democratic        = 8 
		political_left    = 4 
		free_market       = 9 
		freedom           = 8 
		professional_army = 4 
		defense_lobby     = 9 
		interventionism   = 5 
	} 
	headofstate            = {  type = 9 id = 120141  } #Tomás Masaryk
	headofgovernment       = {  type = 9 id = 120155  } #Ján Malypetr
	foreignminister        = {  type = 9 id = 120003  } #Edouard Benes
	armamentminister       = {  type = 9 id = 120044  } #Emil Franke
	ministerofsecurity     = {  type = 9 id = 120005  } 
	ministerofintelligence = {  type = 9 id = 120006  } 
	chiefofstaff           = {  type = 9 id = 120007  } 
	chiefofarmy            = {  type = 9 id = 120008  } 
	chiefofnavy            = {  type = 9 id = 120009  } 
	chiefofair             = {  type = 9 id = 120010  } 
	
   # ################################ 
   # Czech army 
   # ################################ 
   # The 8th Corps, based as reserves in Slovakia 
   landunit = 
   {  id       = {  type = 26000 id = 1  } 
     location = 201 
     name     = "Generální Rezervy" 
     Division = 
     {  id       = {  type = 26000 id = 2  } 
       name     = "1. Horská Brigada" 
       type     = bergsjaeger
       strength  = 20 
       model    = 7 
      } 
     Division = 
     {  id       = {  type = 26000 id = 3  } 
       name     = "2. Horská Brigada" 
       type     = bergsjaeger
       strength  = 20 
       model    = 7 
      } 
     Division = 
     {  id       = {  type = 26000 id = 4  } 
       name     = "13. Divize" 
       type     = infantry 
       strength  = 5 
       model    = 6 
      } 
     Division = 
     {  id       = {  type = 26000 id = 5  } 
       name     = "15. Divize" 
       type     = infantry 
       strength  = 5 
       model    = 6 
      } 
     Division = 
     {  id       = {  type = 26000 id = 6  } 
       name     = "18. Divize" 
       type     = infantry 
       strength  = 5 
       model    = 6 
      } 
     Division = 
     {  id       = {  type = 26000 id = 7  } 
       name     = "21. Divize" 
       type     = infantry 
       strength  = 5 
       model    = 6 
      } 
     Division = 
     {  id       = {  type = 26000 id = 8  } 
       name     = "22. Divize" 
       type     = infantry 
       strength  = 5 
       model    = 6 
      } 
    } 

   landunit = 
   {  id       = {  type = 26000 id = 9  } 
     location = 207 
     name     = "I. Armáda" 
     Division = 
     {  id       = {  type = 26000 id = 10  } 
       name     = "1. Rychlá Brigada" 
       type     = cavalry 
       model    = 8 
       strength  = 20
       extra = light_armor_brigade
       brigade_model = 3 
      } 
     Division = 
     {  id       = {  type = 26000 id = 11  } 
       name     = "2. Divize" 
       type     = infantry 
       strength  = 60 
       model    = 7 
       extra    = artillery 
	   brigade_model = 2
      } 
     Division = 
     {  id       = {  type = 26000 id = 12  } 
       name     = "1. Divize" 
       type     = garrison
       strength  = 60 
       model    = 3 
      } 
     Division = 
     {  id    = {  type = 26000 id = 13  } 
       name  = "3. Divize" 
       type  = infantry 
       model = 7
	strength = 60
       extra    = anti_air
	   brigade_model = 1
      } 
     Division = 
     {  id       = {  type = 26000 id = 14  } 
       name     = "4. Divize" 
       type     = infantry 
       strength  = 60 
       model    = 7 
       extra    = artillery 
	   brigade_model = 3	   
      } 
     Division = 
     {  id       = {  type = 26000 id = 15  } 
       name     = "5. Divize" 
       type     = infantry 
       strength  = 60 
       model    = 7 
       extra    = artillery 
	   brigade_model = 2
      } 
     Division = 
     {  id       = {  type = 26000 id = 16  } 
       name     = "16. Divize" 
       type     = infantry 
       strength  = 5 
       model    = 6 
       extra    = engineer
	   brigade_model = 2	   
      } 
     Division = 
     {  id       = {  type = 26000 id = 17  } 
       name     = "17. Divize" 
       type     = infantry 
       strength  = 5 
       model    = 6 
      } 
    } 

   landunit = 
   {  id       = {  type = 26000 id = 22  } 
     location = 196 
     name     = "II. Armáda" 
     Division = 
     {  id       = {  type = 26000 id = 23  } 
       name     = "7. Divize" 
       type     = infantry 
       strength  = 60 
       model    = 7 
       extra    = anti_air
	   brigade_model = 1
      } 
     Division = 
     {  id       = {  type = 26000 id = 24  } 
       name     = "8. Divize" 
       type     = infantry 
       strength  = 60 
       model    = 7 
       extra    = artillery 
	   brigade_model = 2
      } 
     Division = 
     {  id       = {  type = 26000 id = 25  } 
       name     = "6. Divize" 
       type     = infantry 
       strength  = 60 
       model    = 7 
       extra    = artillery 
	   brigade_model = 3
      } 
     Division = 
     {  id       = {  type = 26000 id = 26  } 
       name     = "2. Rychlá Brigada" 
       type     = cavalry 
       model    = 8 
       strength  = 20
       extra = light_armor_brigade
       brigade_model = 3 
      } 
    } 

   landunit = 
   {  id       = {  type = 26000 id = 29  } 
     location = 208 
     name     = "III. Armáda" 
     Division = 
     {  id       = {  type = 26000 id = 30  } 
       name     = "10. Divize" 
       type     = infantry 
       strength  = 60 
       model    = 7 
       extra    = artillery 
	   brigade_model = 2
      } 
     Division = 
     {  id       = {  type = 26000 id = 31  } 
       name     = "9. Divize" 
       type     = infantry 
       strength  = 60 
       model    = 7 
       extra    = artillery 
	   brigade_model = 2
      } 
     Division = 
     {  id       = {  type = 26000 id = 32  } 
       name     = "3. Rychlá Brigada" 
       type     = cavalry 
       model    = 8 
       strength  = 20
       extra = light_armor_brigade
       brigade_model = 3 
      } 
    } 

   landunit = 
   {  id       = {  type = 26000 id = 37  } 
     location = 209 
     name     = "IV. Armáda" 
     Division = 
     {  id       = {  type = 26000 id = 39  } 
       name     = "12. Divize" 
       type     = infantry 
       strength  = 60 
       model    = 7 
       extra    = anti_air
	   brigade_model = 1
      } 
     Division = 
     {  id       = {  type = 26000 id = 1040  } 
       name     = "11. Divize" 
       type     = infantry 
       strength  = 60 
       model    = 7 
       extra    = artillery 
	   brigade_model = 2
      } 
     Division = 
     {  id       = {  type = 26000 id = 41  } 
       name     = "19. Divize" 
       type     = infantry 
       strength  = 5 
       model    = 6 
      } 
     Division = 
     {  id       = {  type = 26000 id = 42  } 
       name     = "20. Divize" 
       type     = infantry 
       strength  = 5 
       model    = 6 
      } 
    } 

   landunit = 
   {  id       = {  type = 26000 id = 45  } 
     location = 205 
     name     = "32. Hranicní Oblast" 
     Division = 
     {  id       = {  type = 26000 id = 18  } 
       name     = "32. Hranicní Oblast" 
       type     = garrison
       strength  = 5 
       model    = 2 
      } 
    } 

   landunit = 
   {  id       = {  type = 26000 id = 46  } 
     location = 200
     name     = "33. Hranicní Oblast" 
     Division = 
     {  id       = {  type = 26000 id = 19  } 
       name     = "33. Hranicní Oblast" 
       type     = garrison
       strength  = 5 
       model    = 2 
      } 
    } 

   landunit = 
   {  id       = {  type = 26000 id = 47  } 
     location = 200 
     name     = "34. Hranicní Oblast" 
     Division = 
     {  id       = {  type = 26000 id = 20  } 
       name     = "34. Hranicní Oblast" 
       type     = garrison
       strength  = 5 
       model    = 2 
      } 
    } 

   landunit = 
   {  id       = {  type = 26000 id = 48  } 
     location = 198
     name     = "35. Hranicní Oblast" 
     Division = 
     {  id       = {  type = 26000 id = 21  } 
       name     = "35. Hranicní Oblast" 
       type     = garrison
       strength  = 5 
       model    = 2 
      } 
    } 

   landunit = 
   {  id       = {  type = 26000 id = 49  } 
     location = 206
     name     = "36. Hranicní Oblast" 
     Division = 
     {  id       = {  type = 26000 id = 27  } 
       name     = "36. Hranicní Oblast" 
       type     = garrison
       strength  = 5 
       model    = 2 
      } 
    } 

   landunit = 
   {  id       = {  type = 26000 id = 50  } 
     location = 206 
     name     = "37. Hranicní Oblast" 
     Division = 
     {  id       = {  type = 26000 id = 28  } 
       name     = "37. Hranicní Oblast" 
       type     = garrison
       strength  = 5 
       model    = 2 
      } 
    } 

   landunit = 
   {  id       = {  type = 26000 id = 51  } 
     location = 208 
     name     = "39. Hranicní Oblast" 
     Division = 
     {  id       = {  type = 26000 id = 33  } 
       name     = "39. Hranicní Oblast" 
       type     = garrison
       strength  = 5 
       model    = 2 
      } 
    } 

   landunit = 
   {  id       = {  type = 26000 id = 52  } 
     location = 210 
     name     = "40. Hranicní Oblast" 
     Division = 
     {  id       = {  type = 26000 id = 34  } 
       name     = "40. Hranicní Oblast" 
       type     = garrison
       strength  = 5 
       model    = 2 
      } 
    } 

   landunit = 
   {  id       = {  type = 26000 id = 53  } 
     location = 209 
     name     = "41. Hranicní Oblast" 
     Division = 
     {  id       = {  type = 26000 id = 35  } 
       name     = "41. Hranicní Oblast" 
       type     = garrison
       strength  = 5 
       model    = 2 
      } 
    } 

   landunit = 
   {  id       = {  type = 26000 id = 54  } 
     location = 215 
     name     = "42. Hranicní Oblast" 
     Division = 
     {  id       = {  type = 26000 id = 36  } 
       name     = "42. Hranicní Oblast" 
       type     = garrison
       strength  = 5 
       model    = 2 
      } 
    } 

   landunit = 
   {  id       = {  type = 26000 id = 55  } 
     location = 197 
     name     = "31. Hranicní Oblast" 
     Division = 
     {  id       = {  type = 26000 id = 43  } 
       name     = "31. Hranicní Oblast" 
       type     = garrison
       strength  = 5 
       model    = 2 
      } 
    } 

   landunit = 
   {  id       = {  type = 26000 id = 56  } 
     location = 204 
     name     = "38. Hranicní Oblast" 
     Division = 
     {  id       = {  type = 26000 id = 44  } 
       name     = "38. Hranicní Oblast" 
       type     = garrison
       strength  = 5 
       model    = 2 
      } 
    } 


   airunit = 
   {  id       = {  type = 26000 id = 101  } 
     location = 207 
     base     = 207
     name     = "I. Armada vzduchovy prikaz" 
     Division = 
     {  id       = {  type = 26000 id = 102  } 
       name     = "4. Letecky Pluk" 
       type     = interceptor
       strength  = 100 
       model    = 6 
      } 
    } 
   airunit = 
   {  id       = {  type = 26000 id = 103  } 
     location = 207 
     base     = 207
     name     = "II. Armada vzduchovy prikaz" 
     Division = 
     {  id       = {  type = 26000 id = 104  } 
       name     = "2. Letecky Pluk" 
       type     = interceptor
       strength  = 100 
       model    = 6 
      } 
    } 
   airunit = 
   {  id       = {  type = 26000 id = 105  } 
     location = 208 
     base     = 208
     name     = "III. Armada vzduchovy prikaz" 
     Division = 
     {  id       = {  type = 26000 id = 106  } 
       name     = "4. Letecky Pluk" 
       type     = interceptor
       strength  = 95
       model    = 6 
      } 
    } 
   airunit = 
   {  id       = {  type = 26000 id = 107  } 
     location = 208 
     base     = 208
     name     = "IV. Armada vzduchovy prikaz" 
     Division = 
     {  id       = {  type = 26000 id = 108  } 
       name     = "1. Letecky Pluk" 
       type     = multi_role
       strength  = 30
       model    = 3 
      } 
    } 
  } 
 