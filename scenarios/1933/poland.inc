 
 ############################## 
 # Country definition for POL # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = POL 
	ai = "pol_1936.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
	dissent = 10
	capital                = 232 
	manpower               = 150 
	# Resource Reserves 
	energy                 = 2460
	metal                  = 1230
	rare_materials         = 615
	transports = 20
	oil                    = 500 
	supplies               = 500 
	money                  = 20 
   diplomacy = 
   {  relation = 
     {  tag        = CZE 
       value      = -1 
       guaranteed = {  day = 29 month = december year = 1932  } 
      } 
     relation = {  tag = ENG value = 50  } 
     relation = {  tag = EST value = 75  } 
     relation = {  tag = FIN value = 100  } 
     relation = {  tag = FRA value = 100  } 
     relation = {  tag = GER value = -10  } 
     relation = {  tag = GRE value = 35  } 
     relation = {  tag = HUN value = 50  } 
     relation = {  tag = LAT value = 75  } 
     relation = {  tag = LIT value = -125  } 
     relation = 
     {  tag        = ROM 
       value      = 40 
       guaranteed = {  day = 29 month = december year = 1932  } 
      } 
     relation = {  tag = SOV value = -50  } 
    } 
   SpyInfo                = {  country = "POL" NumberOfSpies = 9  } 
   nationalprovinces      = {  168 185 203 221 222 223 224 225 226 227 228 229 230 231 232 233 234 235 236 237 238 239 240 241 242 243 244 245 246 247 248 249 250 251 252 253 254 255 256 257 258 614 618 } 
   ownedprovinces         = {  221 222 223 224 225 226 227 228 229 230 231 232 233 234 235 236 237 238 239 240 241 242 243 244 245 246 247 248 249 250 251 252 253 254 255 256 257 258  } 
   controlledprovinces    = {  221 222 223 224 225 226 227 228 229 230 231 232 233 234 235 236 237 238 239 240 241 242 243 244 245 246 247 248 249 250 251 252 253 254 255 256 257 258  } 

	# Poland 1933 techs
	techapps = {
	#Early Infantry Division  
	1010  1020 1030 1040 1050 1060 1070 1080 1090
	#Early Mountain Division 
	1160  1170 1180 1190 1200 1210 1220 1230 1240
	#1930 Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370
	#Interbellum 1930 Supply 
	1910 1920 1930 1940 1950 1960
	#Great War Hospital System 
	14000 14010 14020
	#Naval Infantry
	##1560
	#Engineers
	1830 1840 1850 1860
	#Tankette 
	7600 7610 2620 2010 2630 2640
	#Basic Armoured Car  
	2860 2870 2880 2020
	#Field Artillery 
	2290 2300 2310 2900 
	#Early Anti-Tank Artillery
	#2400
	#Early Static Anti-Air Artillery 
	2800 2450
	#Basic Anti-Air Artillery Brigade 
	2810 2820
	# Heavy Cruiser
	3210 3220
	# Destroyer 
	3010 3020 3030 3040 3050 
	#Short Range Submarine 
	3610 3620 3630 3640
	#Torpedo & ASW 18
	3720 3730 3736 3740 3750 3900
	#Troopships
	3810
	
	#Early Fighter  
	4500 4510 4520 4530 4540 4550 4010 4020
	#Early Bomber 
	4600 4610 4620 4630 4120 4130
	#Multirole fighter
	4300 4310 4320 4330
	#ww1 strategic bomber
	4800 4810
	#ww1 navalbomber
	#4700 4710

	#Modern Agriculture  
	5700 5710
	#Computers & cryptografi
	5310 54010 54020 5316 5326
	#Manufactoring
	5810 5820 5050 5830
	#Improved Construction Engineering 
	5800 5080 
	#Medicine
	5600 5610 5620
	# Land Doctrines WWI - Entente line (default)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
	# Land Doctrines WWII - Defensive Focus 
	6560 
	#Naval Doctrines  
	8010 8040  8050
	#Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470  
	#Carrier Pigeons
	30020 30030
} 
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 7 
     political_left    = 1 
     freedom           = 4 
     free_market       = 5 
     professional_army = 5 
     defense_lobby     = 8 
     interventionism   = 6 
    } 

   headofstate            = {  type = 9 id = 60001  } 
   headofgovernment       = {  type = 9 id = 60002  } 
   foreignminister        = {  type = 9 id = 60003  } 
   armamentminister       = {  type = 9 id = 60004  } 
   ministerofsecurity     = {  type = 9 id = 60005  } 
   ministerofintelligence = {  type = 9 id = 60006  } 
   chiefofstaff           = {  type = 9 id = 60007  } 
   chiefofarmy            = {  type = 9 id = 60008  } 
   chiefofnavy            = {  type = 9 id = 60009  } 
   chiefofair             = {  type = 9 id = 60010  } 
   landunit = 
   {  id       = {  type = 18600 id = 1  } 
     location = 232 
     name     = "1 Okreg Wojskowy" 
     Division = 
     {  id   = {  type = 18600 id = 2  } 
       name = "8 Dywizja Piechoty" 
	   strength  = 50
       type = infantry 
	   model    = 7
       extra = artillery 
	   brigade_model = 2
      } 
     Division = 
     {  id    = {  type = 18600 id = 3  } 
       name  = "9 Dywizja Piechoty" 
	   strength  = 50
       type  = infantry 
	   model    = 7
       extra = anti_air 
	   brigade_model = 1
      } 
     Division = 
     {  id   = {  type = 18600 id = 4  } 
       name = "28 Dywizja Piechoty" 
	   strength  = 50
       type = infantry 
	   model    = 7
       extra = artillery 
	   brigade_model = 3
      } 
     Division = 
     {  id   = {  type = 18600 id = 5  } 
       name = "1 Dywizja Kawalerii" 
	   strength  = 40
       type = cavalry 
	   model    = 9
       extra = artillery 
	   brigade_model = 4
      } 
     Division = 
     {  id   = {  type = 18600 id = 6  } 
       name = "Podlaska Brygada Kawalerii" 
	   strength  = 25
	max_strength = 60
       type = cavalry
	   model    = 8
	extra = light_armor_brigade
	brigade_model = 1	   
      } 
     Division = 
     {  id   = {  type = 18600 id = 7  } 
       name = "Mazowiecka Brygada Kawalerii" 
	   strength  = 25
	max_strength = 60
       type = cavalry
	   model    = 8
	extra = armored_car
	brigade_model = 1	   
      } 
    } 
   landunit = 
   {  id       = {  type = 18600 id = 8  } 
     location = 243 
     name     = "2 Okreg Wojskowy" 
     Division = 
     {  id   = {  type = 18600 id = 9  } 
       name = "3 Dywizja Piechoty Legionów" 
	   strength  = 50
       type = infantry 
	   model    = 8
       extra = artillery 
	   brigade_model = 2
      } 
     Division = 
     {  id    = {  type = 18600 id = 10  } 
       name  = "13 Dywizja Piechoty" 
	   strength  = 50
       type  = infantry 
	   model    = 7
      } 
     Division = 
     {  id   = {  type = 18600 id = 11  } 
       name = "27 Dywizja Piechoty" 
	   strength  = 50
       type = infantry 
	   model    = 7
      } 
     Division = 
     {  id   = {  type = 18600 id = 12  } 
       name = "Wolynska Brygada Kawalerii" 
	   strength  = 30
	max_strength = 70
       type = cavalry
	   model    = 8
      } 
     Division = 
     {  id   = {  type = 18600 id = 13  } 
       name = "41 Dywizja Piechoty" 
	   strength  = 5
       type = infantry 
	   model    = 6
      } 
    } 
   landunit = 
   {  id       = {  type = 18600 id = 14  } 
     location = 255 
     name     = "3 Okreg Wojskowy" 
     Division = 
     {  id   = {  type = 18600 id = 15  } 
       name = "1 Dywizja Piechoty Legionów" 
	   strength  = 50
       type = infantry 
	   model    = 8
       extra = artillery 
	   brigade_model = 2
      } 
     Division = 
     {  id   = {  type = 18600 id = 16  } 
       name = "19 Dywizja Piechoty" 
	   strength  = 50
       type = infantry 
	   model    = 7
      } 
     Division = 
     {  id    = {  type = 18600 id = 17  } 
       name  = "29 Dywizja Piechoty" 
	   strength  = 45
       type  = infantry 
	   model    = 7
      } 
     Division = 
     {  id   = {  type = 18600 id = 18  } 
       name = "Suwalska Brygada Kawalerii" 
	   strength  = 25
	max_strength = 60
       type = cavalry
	   model    = 8
      } 
     Division = 
     {  id   = {  type = 18600 id = 19  } 
       name = "Wilenska Brygada Kawalerii" 
	   strength  = 25
	max_strength = 60
       type = cavalry
	   model    = 8
      } 
     Division = 
     {  id   = {  type = 18600 id = 20  } 
       name = "39 Dywizja Piechoty" 
	   strength  = 5
       type = infantry 
	   model    = 6
      } 
     Division = 
     {  id   = {  type = 18600 id = 21  } 
       name = "35 Dywizja Piechoty" 
	   strength  = 5
       type = infantry 
	   model    = 6
      } 
     Division = 
     {  id   = {  type = 18600 id = 22  } 
       name = "33 Dywizja Piechoty" 
	   strength  = 5
       type = infantry 
	   model    = 6
      } 
    } 
   landunit = 
   {  id       = {  type = 18600 id = 23  } 
     location = 223 
     name     = "4 Okreg Wojskowy" 
     Division = 
     {  id   = {  type = 18600 id = 24  } 
       name = "7 Dywizja Piechoty" 
	   strength  = 50
       type = infantry 
	   model    = 7
       extra = artillery 
	   brigade_model = 2
      } 
     Division = 
     {  id    = {  type = 18600 id = 25  } 
       name  = "10 Dywizja Piechoty" 
	   strength  = 50
       type  = infantry 
	   model    = 7
       extra = engineer 
	   brigade_model = 2
      } 
     Division = 
     {  id    = {  type = 18600 id = 26  } 
       name  = "26 Dywizja Piechoty" 
	   strength  = 50
       type  = infantry 
	   model    = 7
      } 
     Division = 
     {  id   = {  type = 18600 id = 27  } 
       name = "Lodzka Brygada Kawalerii" 
	   strength  = 30
	max_strength = 70
       type = cavalry
	   model    = 8
      } 
     Division = 
     {  id   = {  type = 18600 id = 28  } 
       name = "45 Dywizja Piechoty" 
	   strength  = 5
       type = infantry 
	   model    = 6
      } 
    } 
   landunit = 
   {  id       = {  type = 18600 id = 29  } 
     location = 235 
     name     = "5 Okreg Wojskowy" 
     Division = 
     {  id   = {  type = 18600 id = 30  } 
       name = "6 Dywizja Piechoty" 
	   strength  = 50
       type = infantry 
	   model    = 7
       extra = artillery 
	   brigade_model = 2
      } 
     Division = 
     {  id   = {  type = 18600 id = 31  } 
       name = "21 Dywizja Piechoty Górskiej" 
	   strength  = 50
       type = bergsjaeger
	   model    = 7
      } 
     Division = 
     {  id    = {  type = 18600 id = 32  } 
       name  = "23 Dywizja Piechoty" 
	   strength  = 50
       type  = infantry 
	   model    = 7
       extra = engineer
	   brigade_model = 2
      } 
     Division = 
     {  id   = {  type = 18600 id = 33  } 
       name = "Krakowska Brygada Kawalerii" 
	   strength  = 30
	max_strength = 70
       type = cavalry
	   model    = 8
      } 
     Division = 
     {  id   = {  type = 18600 id = 34  } 
       name = "55 Dywizja Piechoty" 
	   strength  = 5
       type = infantry 
	   model    = 6
      } 
    } 
   landunit = 
   {  id       = {  type = 18600 id = 35  } 
     location = 242 
     name     = "6 Okreg Wojskowy" 
     Division = 
     {  id   = {  type = 18600 id = 36  } 
       name = "5 Dywizja Piechoty" 
	   strength  = 50
       type = infantry 
	   model    = 7
       extra = artillery 
	   brigade_model = 2
      } 
     Division = 
     {  id   = {  type = 18600 id = 37  } 
       name = "11 Dywizja Piechoty" 
	   strength  = 50
       type = infantry 
	   model    = 7
      } 
     Division = 
     {  id   = {  type = 18600 id = 38  } 
       name = "12 Dywizja Piechoty" 
	   strength  = 50
       type = infantry 
	   model    = 7
      } 
     Division = 
     {  id   = {  type = 18600 id = 39  } 
       name = "Podolska Brygada Kawalerii" 
	   strength  = 30
	max_strength = 70
       type = cavalry
	   model    = 8
      } 
     Division = 
     {  id   = {  type = 18600 id = 40  } 
       name = "36 Dywizja Piechoty" 
	   strength  = 5
       type = infantry 
	   model    = 6
      } 
    } 
   landunit = 
   {  id       = {  type = 18600 id = 41  } 
     location = 224 
     name     = "7 Okreg Wojskowy" 
     Division = 
     {  id   = {  type = 18600 id = 42  } 
       name = "14 Dywizja Piechoty" 
	   strength  = 50
       type = infantry 
	   model    = 7
       extra = artillery 
	   brigade_model = 2
      } 
     Division = 
     {  id    = {  type = 18600 id = 43  } 
       name  = "17 Dywizja Piechoty" 
	   strength  = 50
       type  = infantry 
	   model    = 7
       extra = engineer
	   brigade_model = 2
      } 
     Division = 
     {  id   = {  type = 18600 id = 44  } 
       name = "25 Dywizja Piechoty" 
	   strength  = 50
       type = infantry 
	   model    = 7
      } 
     Division = 
     {  id   = {  type = 18600 id = 45  } 
       name = "Wielkopolska Brygada Kawalerii" 
	   strength  = 30
	max_strength = 70
       type = cavalry
	   model    = 8
      } 
    } 
   landunit = 
   {  id       = {  type = 18600 id = 46  } 
     location = 222 
     name     = "8 Okreg Wojskowy" 
     Division = 
     {  id   = {  type = 18600 id = 47  } 
       name = "4 Dywizja Piechoty" 
	   strength  = 50
       type = infantry 
	   model    = 7
       extra = artillery 
	   brigade_model = 2
      } 
     Division = 
     {  id   = {  type = 18600 id = 48  } 
       name = "15 Dywizja Piechoty" 
	   strength  = 50
       type = infantry 
	   model    = 7
       extra = engineer
	   brigade_model = 2
      } 
     Division = 
     {  id   = {  type = 18600 id = 49  } 
       name = "16 Dywizja Piechoty" 
	   strength  = 50
       type = infantry 
	   model    = 7
      } 
     Division = 
     {  id   = {  type = 18600 id = 50  } 
       name = "Pomorska Brygada Kawalerii" 
	   strength  = 30
	max_strength = 70
       type = cavalry
	   model    = 8
      } 
    } 
   landunit = 
   {  id       = {  type = 18600 id = 51  } 
     name     = "9 Okreg Wojskowy" 
     location = 247 
     Division = 
     {  id   = {  type = 18600 id = 52  } 
       name = "18 Dywizja Piechoty" 
	   strength  = 50
       type = infantry 
	   model    = 7
       extra = artillery 
	   brigade_model = 2
      } 
     Division = 
     {  id   = {  type = 18600 id = 53  } 
       name = "20 Dywizja Piechoty" 
	   strength  = 50
       type = infantry 
	   model    = 7
      } 
     Division = 
     {  id   = {  type = 18600 id = 54  } 
       name = "30 Dywizja Piechoty" 
	   strength  = 50
       type = infantry 
	   model    = 7
      } 
     Division = 
     {  id   = {  type = 18600 id = 55  } 
       name = "Nowogródzka Brygada Kawalerii" 
	   strength  = 30
	max_strength = 70
       type = cavalry
	   model    = 8
      } 
     Division = 
     {  id   = {  type = 18600 id = 56  } 
       name = "38 Dywizja Piechoty" 
	   strength  = 5
       type = infantry 
	   model    = 6
      } 
     Division = 
     {  id   = {  type = 18600 id = 57  } 
       name = "44 Dywizja Piechoty" 
	   strength  = 5
       type = infantry 
	   model    = 6
      } 
    } 
   landunit = 
   {  id       = {  type = 18600 id = 58  } 
     location = 239 
     name     = "10 Okreg Wojskowy" 
     Division = 
     {  id   = {  type = 18600 id = 59  } 
       name = "2 Dywizja Piechoty Legionów" 
	   strength  = 50
       type = infantry 
	   model    = 8
       extra = artillery 
	   brigade_model = 2
      } 
     Division = 
     {  id   = {  type = 18600 id = 60  } 
       name = "22 Dywizja Piechoty Górskiej" 
	   strength  = 50
       type = bergsjaeger
	   model    = 7
      } 
     Division = 
     {  id   = {  type = 18600 id = 61  } 
       name = "24 Dywizja Piechoty" 
	   strength  = 50
       type = infantry 
	   model    = 7
      } 
     Division = 
     {  id   = {  type = 18600 id = 62  } 
       name = "Kresowa Brygada Kawalerii" 
	   strength  = 30
	max_strength = 70
       type = cavalry
	   model    = 8
      } 
    } 

   navalunit = 
   {  id       = {  type = 18600 id = 63  } 
     name     = "Marynarka Wojenna" 
     location = 226 
     base     = 226 
     Division = 
     {  id       = {  type = 18600 id = 64  } 
       name     = "Flotylla Niszczycieli" 
       type     = destroyer 
       model    = 4
       strength = 40 
      } 
     Division = 
     {  id       = {  type = 18600 id = 65  } 
       name     = "Flotylla Dozorowców" 
       type     = destroyer 
       model    = 2
       strength = 100 
      } 
     Division = 
     {  id    = {  type = 18600 id = 66  } 
       name  = "Flotylla Okretów Podwodnych" 
       type  = submarine 
       model = 3
       strength = 60
      } 
    } 
   airunit = 
   {  id       = {  type = 18600 id = 67  } 
     name     = "Wojska Lotnicze" 
     location = 232 
     base     = 232 
     Division = 
     {  id    = {  type = 18600 id = 68  } 
       name  = "3 Korpus Lotnictwa Mysliwskiego" 
       type  = interceptor 
       model = 7
       strength = 80
      } 
     Division = 
     {  id    = {  type = 18600 id = 69  } 
       name  = "4 Korpus Lotnictwa Szturmowego" 
       type  = interceptor 
       model = 6
	strength = 40 
      } 
     Division = 
     {  id    = {  type = 18600 id = 70  } 
       name  = "15 Dywizja Lotnictwa Bombowego" 
       type  = tactical_bomber 
       model = 3
	strength = 15
      } 
     Division = 
     {  id    = {  type = 18600 id = 71  } 
       name  = "36 Specjalny Pulk Lotnictwa Transportowego" 
       type  = transport_plane 
       model = 0
	strength = 10
      } 
    } 
  } 
 
