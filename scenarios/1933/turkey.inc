 
############################## 
# Country definition for TUR # 
############################## 

##################### 
# Country main data # 
##################### 
  
 country = 
 {  tag                    = TUR 
	ai = "tur_1936.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
	dissent = 20
	# Resource Reserves 
	energy                 = 1320
	metal                  = 660
	rare_materials         = 330
	oil                    = 500 
	supplies               = 500 
	money                  = 20 
	capital                = 1075 
	manpower               = 26 

	transports             = 30 
	escorts                = 10 
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 6 
     political_left    = 2 
     freedom           = 4 
     free_market       = 6 
     professional_army = 5 
     defense_lobby     = 6 
     interventionism   = 3 
    } 

   nationalprovinces      = {  370 384 385 386 409 1054 1055 1056 1057 1058 1059 1060 1061 1062 1063 1064 1065 1066 1067 1068 1071 1072 1073 1074 1075 1076 1077 1078 1079  } 
   ownedprovinces         = {  384 385 386 409 1055 1056 1057 1058 1059 1060 1061 1062 1063 1064 1065 1066 1067 1068 1071 1072 1073 1074 1075 1076 1077 1078 1079  } 
   controlledprovinces    = {  384 385 386 409 1055 1056 1057 1058 1059 1060 1061 1062 1063 1064 1065 1066 1067 1068 1071 1072 1073 1074 1075 1076 1077 1078 1079  } 
   # Semi-Major Tech '36 
   # Group C 1936 techs 
   # ###################### 
   techapps               = {
#Early Fighter  
4500 4510 4520 4530 4540 4550 4010 4020
#Interwar Bomber 
4600 4610 4620 4630 4120
#Multirole fighter
4300 4310 4320 4330
#ww1 strategic bomber
4800 4810 4820
#ww1 navalbomber
4700 4710
#Engineers
1830 1840  
#Basic Armoured Car 
2860 2870 2880 2020
#Tankette
7600 7610 2620 2010 2630 2640
#Great War Heavy Field Artillery 
2290 2300 2310 
#Early Static Anti-Air Artillery 
2800 2450 21180 21190
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Great War Infantry Division  
1010  1020 1030 1040 1050 1060 1070
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240
#Interbellum Supply 
1910 1920 1930 1940 1950 1960
#Great War Hospital System
 14000 14010 14020
#Modern Agriculture  
5700 5710 5010
#Manufactoring
5810 5820 5050 5830
#Improved Construction Engineering
5800 5080 5090 
#Great War Battlecruiser  
3310 3320 3330
#Improved Destroyer 
3010 3020 3030 3040 3050 3060
#Early Light Cruiser 
3110 3120 3130
#Early Heavy Cruiser
 3210 3220 3230
#Short Range Submarine
 3610 3620
 #Torpedo & ASW 18
3720 3730 3736 3740 3750 3900
#Troopships
3810
#Medicine
5600 5610 5620 
 
 
 
# Land doctrines WWI - Central Powers line: germany, turkey, austr, hun, bul, russia
6500 6510 6530 6590 6600 6610 6680 6620 6690 6700 6650 6710 6670 6550 6910
# Land Doctrines WWII - Manpower Focus
6570 6300
#Naval Doctrines
 8010  8020  8040  8050 

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
#Carrier Pigeons
30020 30030 
 
} 
inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = AFG value = 50  } 
     relation = {  tag = BUL value = 75  } 
     relation = {  tag = ENG value = 75  } 
     relation = {  tag = FRA value = 50  } 
     relation = {  tag = GER value = 10  } 
     relation = 
     {  tag        = GRE 
       value      = 100 
       guaranteed = {  day = 29 month = december year = 1932  } 
      } 
     relation = {  tag = ITA value = 1  } 
     relation = {  tag = OMN value = 35  } 
     relation = {  tag = PER value = -50  } 
     relation = 
     {  tag        = ROM 
       value      = 100 
       guaranteed = {  day = 29 month = december year = 1932  } 
      } 
     relation = {  tag = SAU value = 50  } 
     relation = {  tag = SOV value = 100  } 
     relation = {  tag = YEM value = 35  } 
     relation = 
     {  tag        = YUG 
       value      = 100 
       guaranteed = {  day = 29 month = december year = 1932  } 
      } 
    } 
   SpyInfo                = {  country = "TUR" NumberOfSpies = 7  } 
   headofstate            = {  type = 9 id = 45001  } 
   headofgovernment       = {  type = 9 id = 45002  } 
   foreignminister        = {  type = 9 id = 45003  } 
   armamentminister       = {  type = 9 id = 45004  } 
   ministerofsecurity     = {  type = 9 id = 45005  } 
   ministerofintelligence = {  type = 9 id = 45006  } 
   chiefofstaff           = {  type = 9 id = 45007  } 
   chiefofarmy            = {  type = 9 id = 45008  } 
   chiefofnavy            = {  type = 9 id = 45009  } 
   chiefofair             = {  type = 9 id = 45010  } 
   landunit = 
   {  location = 1075 
     name     = "Türk Kara Kuvvetleri" 
     id       = {  type = 11700 id = 1  } 
     Division = 
     {  id           = {  type = 11700 id = 2  } 
       type         = cavalry
	   model = 7
       strength     = 10 
       name         = "3. Süvari Tümeni" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 3  } 
       type         = cavalry
	   model = 7
       strength     = 10 
       name         = "4. Süvari Tümeni" 
      } 
    } 
   landunit = 
   {  location = 1075 
     name     = "1. Ordu Muayene" 
     id       = {  type = 11700 id = 4  } 
     Division = 
     {  id           = {  type = 11700 id = 5  } 
       type         = cavalry
	   model = 8
       strength     = 100 
       name         = "1. Süvari Tümeni" 
      } 
    } 
   landunit = 
   {  location = 1074 
     name     = "2. Ordu Muayene" 
     id       = {  type = 11700 id = 6  } 
     Division = 
     {  id           = {  type = 11700 id = 7  } 
       type         = cavalry
	   model = 8
       strength     = 100 
       name         = "2. Süvari Tümeni" 
      } 
    } 
   landunit = 
   {  location = 1067 
     name     = "3. Ordu Muayene" 
     id       = {  type = 11700 id = 8  } 
     Division = 
     {  id           = {  type = 11700 id = 9  } 
       type         = cavalry
	   model = 8
       strength     = 100 
       name         = "14. Süvari Tümeni" 
      } 
    } 
   landunit = 
   {  location = 1071 
     name     = "I. Kolordu" 
     id       = {  type = 11700 id = 10  } 
     Division = 
     {  id           = {  type = 11700 id = 11  } 
       type         = infantry 
	   model = 7
       extra        = artillery 
	   brigade_model = 3
       strength     = 50 
       name         = "16. Piyade Tümeni" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 12  } 
       type         = infantry 
	   model = 7
       extra        = cavalry_brigade 
	   brigade_model = 7
       strength     = 50 
       name         = "57. Piyade Tümeni" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 13  } 
       type         = infantry 
	   model = 6
       strength     = 5 
       name         = "70. Piyade Tümeni" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 14  } 
       type         = infantry 
	   model = 6
       strength     = 5 
       name         = "71. Piyade Tümeni" 
      } 
    } 
   landunit = 
   {  location = 1078 
     name     = "II. Kolordu" 
     id       = {  type = 11700 id = 15  } 
     Division = 
     {  id           = {  type = 11700 id = 16  } 
       type         = infantry 
	   model = 7
       extra        = artillery 
	   brigade_model = 3
       strength     = 50 
       name         = "4. Piyade Tümeni" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 17  } 
       type         = infantry 
	   model = 7
       extra        = cavalry_brigade 
	   brigade_model = 7
       strength     = 50 
       name         = "69. Piyade Tümeni" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 18  } 
       type         = infantry 
	   model = 6
       strength     = 5 
       name         = "32. Piyade Tümeni" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 19  } 
       type         = infantry 
	   model = 6
       strength     = 5 
       name         = "66. Piyade Tümeni" 
      } 
    } 
   landunit = 
   {  location = 385 
     name     = "III. Kolordu" 
     id       = {  type = 11700 id = 20  } 
     Division = 
     {  id           = {  type = 11700 id = 21  } 
       type         = infantry 
	   model = 7
       extra        = artillery 
	   brigade_model = 3
       strength     = 50 
       name         = "1. Piyade Tümeni" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 22  } 
       type         = infantry 
	   model = 7
       extra        = cavalry_brigade 
	   brigade_model = 7
       strength     = 50 
       name         = "61. Piyade Tümeni" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 23  } 
       type         = infantry 
	   model = 6
       strength     = 5 
       name         = "46. Piyade Tümeni" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 24  } 
       type         = infantry 
	   model = 6
       strength     = 5 
       name         = "62. Piyade Tümeni" 
      } 
    } 
   landunit = 
   {  location = 1068 
     name     = "IV. Kolordu" 
     id       = {  type = 11700 id = 25  } 
     Division = 
     {  id           = {  type = 11700 id = 26  } 
       type         = infantry 
	   model = 7
       extra        = artillery 
	   brigade_model = 3
       strength     = 50 
       name         = "8. Piyade Tümeni" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 27  } 
       type         = infantry 
	   model = 7
       extra        = cavalry_brigade 
	   brigade_model = 7
       strength     = 50 
       name         = "22. Piyade Tümeni" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 28  } 
       type         = infantry 
	   model = 6
       strength     = 5 
       name         = "28. Piyade Tümeni" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 29  } 
       type         = infantry 
	   model = 6
       strength     = 5 
       name         = "64. Piyade Tümeni" 
      } 
    } 
   landunit = 
   {  location = 1074 
     name     = "V. Kolordu" 
     id       = {  type = 11700 id = 30  } 
     Division = 
     {  id           = {  type = 11700 id = 31  } 
       type         = infantry 
	   model = 7
       extra        = artillery 
	   brigade_model = 3
       strength     = 50 
       name         = "5. Piyade Tümeni" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 32  } 
       type         = infantry 
	   model = 7
       extra        = cavalry_brigade 
	   brigade_model = 7
       strength     = 50 
       name         = "6. Piyade Tümeni" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 33  } 
       type         = infantry 
	   model = 6
       strength     = 5 
       name         = "63. Piyade Tümeni" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 34  } 
       type         = infantry 
	   model = 6
       strength     = 5 
       name         = "47. Piyade Tümeni" 
      } 
    } 
   landunit = 
   {  location = 1073 
     name     = "VI. Kolordu" 
     id       = {  type = 11700 id = 35  } 
     Division = 
     {  id           = {  type = 11700 id = 36  } 
       type         = infantry 
	   model = 7
       extra        = artillery 
	   brigade_model = 3
       strength     = 50 
       name         = "7. Piyade Tümeni" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 37  } 
       type         = infantry 
	   model = 7
       extra        = cavalry_brigade 
	   brigade_model = 7
       strength     = 50 
       name         = "41. Piyade Tümeni" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 38  } 
       type         = infantry 
	   model = 6
       strength     = 5 
       name         = "17. Piyade Tümeni" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 39  } 
       type         = infantry 
	   model = 6
       strength     = 5 
       name         = "20. Piyade Tümeni" 
      } 
    } 
   landunit = 
   {  location = 1060 
     name     = "VII. Kolordu" 
     id       = {  type = 11700 id = 40  } 
     Division = 
     {  id           = {  type = 11700 id = 41  } 
       type         = infantry 
	   model = 7
       extra        = artillery 
	   brigade_model = 3
       strength     = 50 
       name         = "2. Piyade Tümeni" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 42  } 
       type         = infantry 
	   model = 7
       extra        = cavalry_brigade 
	   brigade_model = 7
       strength     = 50 
       name         = "10. Piyade Tümeni" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 43  } 
       type         = infantry 
	   model = 6
       strength     = 5 
       name         = "53. Piyade Tümeni" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 44  } 
       type         = infantry 
	   model = 6
       strength     = 5 
       name         = "39. Piyade Tümeni" 
      } 
    } 
   landunit = 
   {  location = 1066 
     name     = "VIII. Kolordu" 
     id       = {  type = 11700 id = 45  } 
     Division = 
     {  id           = {  type = 11700 id = 46  } 
       type         = infantry 
	   model = 7
       extra        = artillery 
	   brigade_model = 3
       strength     = 50 
       name         = "12. Piyade Tümeni" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 47  } 
       type         = infantry 
	   model = 7
       extra        = cavalry_brigade 
	   brigade_model = 7
       strength     = 50 
       name         = "15. Piyade Tümeni" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 48  } 
       type         = infantry 
	   model = 6
       strength     = 5 
       name         = "48. Piyade Tümeni" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 49  } 
       type         = infantry 
	   model = 6
       strength     = 5 
       name         = "51. Piyade Tümeni" 
      } 
    } 
   landunit = 
   {  location = 1063 
     name     = "IX. Kolordu" 
     id       = {  type = 11700 id = 50  } 
     Division = 
     {  id           = {  type = 11700 id = 51  } 
       type         = infantry 
	   model = 7
       extra        = artillery 
	   brigade_model = 3
       strength     = 50 
       name         = "9. Piyade Tümeni" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 52  } 
       type         = infantry 
	   model = 7
       extra        = cavalry_brigade 
	   brigade_model = 7
       strength     = 50 
       name         = "3. Piyade Tümeni" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 53  } 
       type         = infantry 
	   model = 6
       strength     = 5 
       name         = "29. Piyade Tümeni" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 54  } 
       type         = infantry 
	   model = 6
       strength     = 5 
       name         = "67. Piyade Tümeni" 
      } 
    } 
   landunit = 
   {  location = 409 
     name     = "Istanbul Komut" 
     id       = {  type = 11700 id = 55  } 
     Division = 
     {  id           = {  type = 11700 id = 56  } 
       type         = infantry 
	   model = 6
       strength     = 5 
       name         = "33. Piyade Tümeni" 
      } 
     Division = 
     {  id           = {  type = 11700 id = 57  } 
       type         = infantry 
	   model = 6
       strength     = 5 
       name         = "52. Piyade Tümeni" 
      } 
    } 
   # #####Turkey `36 ###### 
	navalunit = { 
		id = { type = 11700 id = 58 } 
		name = "Türkc Deniz Kuvvetleri" 
		location = 1076 
		base = 1076 
		division = { 
			id = { type = 11700 id = 59 } 
			name = "TCG Turgut Reis" 
			type = battleship 
			model = 0 
			} 
		division = { 
			id = { type = 11700 id = 60 } 
			name = "TCG Yavuz" 
			type = battlecruiser 
			model = 0 
			} 
		division = { 
			id = { type = 11700 id = 61 } 
			name = "TCG Hamidyie" 
			type = light_cruiser 
			model = 0 
			} 
		division = { 
			id = { type = 11700 id = 62 } 
			name = "2. Torpido Botu Filo" 
			type = destroyer
			model = 4
			strength = 80
			} 
		division = { 
			id = { type = 11700 id = 63 } 
			name = "1. Torpido Botu Filo" 
			type = destroyer 
			model = 1
			strength = 100 
			} 
		division = { 
			id = { type = 11700 id = 64 } 
			name = "1. Denizalti Filo" 
			type = submarine 
			model = 3
			strength = 100 
			} 
		}  

   airunit = 
   {  location = 1075 
     base     = 1075 
     name     = "Hava Mutesarligi" 
     id       = {  type = 11700 id = 65  } 
     Division = 
     {  id           = {  type = 25635 id = 66  } 
       type         = interceptor 
       model        = 6
       strength     = 15 
       name         = "1. Filo" 
      } 
    } 
  } 
 
