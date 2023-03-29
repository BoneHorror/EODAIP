 
 ############################## 
 # Country definition for SAU # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = SAU 
	ai = "sau_1936.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
	dissent = 20
	# Resource Reserves 
	energy                 = 360
	metal                  = 180
	rare_materials         = 90
	transports = 10
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
	capital                = 1045 
	manpower               = 0 
      
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     freedom           = 3 
     free_market       = 3 
     professional_army = 5 
     defense_lobby     = 5 
     interventionism   = 3 
    } 

   nationalprovinces      = {  1040 1044 1045 1046 1047 1048 1049  } 
   ownedprovinces         = {  1040 1044 1045 1046 1047 1048 1049  } 
   controlledprovinces    = {  1040 1044 1045 1046 1047 1048 1049  } 
   # ROTW Minor Tech '36 
   # Group E 1936 techs 
   # ###################### 
   # GW fighter 
   techapps               = {  
#Interwar Fighter  
4500 4510 4520 4530
#Interwar Armoured Car  
2860
#Light Field Artillery  
2290
#SW Tank 
7600 7610
#1916 lgt. Infantry Division  
1010  1020 1030 1040 1050 1060
#Interbellum Supply 
1910 1920 1930 1940 1950 1960
#1916 Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Early Agriculture
5700 
# Land Doctrines WWI - Entente Line
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
#Land Doctrines WWII - none

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
 } 
 inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = AFG value = 50  } 
     relation = {  tag = AST value = 50  } 
     relation = {  tag = ENG value = 100  } 
     relation = {  tag = FRA value = 10  } 
     relation = {  tag = IRQ value = 125  } 
     relation = {  tag = ITA value = -25  } 
     relation = {  tag = OMN value = 125  } 
     relation = {  tag = PER value = 100  } 
     relation = {  tag = SOV value = 1  } 
     relation = {  tag = TUR value = 50  } 
     relation = {  tag = YEM value = 125  } 
    } 
   SpyInfo                = {  country = "SAU" NumberOfSpies = 4  } 
   headofstate            = {  type = 9 id = 295001  } 
   headofgovernment       = {  type = 9 id = 295002  } 
   foreignminister        = {  type = 9 id = 295003  } 
   armamentminister       = {  type = 9 id = 295004  } 
   ministerofsecurity     = {  type = 9 id = 295005  } 
   ministerofintelligence = {  type = 9 id = 295006  } 
   chiefofstaff           = {  type = 9 id = 295007  } 
   chiefofarmy            = {  type = 9 id = 295008  } 
   chiefofnavy            = {  type = 9 id = 295009  } 
   chiefofair             = {  type = 9 id = 295010  } 
  landunit = 
   {   location = 1045 
     name     = "Nejd Command" 
     id       = {   type = 22600 id = 1   } 
     Division = 
     {   id   = {   type = 22600 id = 2   } 
       name = "Royal Guard" 
       type = infantry
	   model = 5
       strength = 15
       } 
     Division = 
     {   id   = {   type = 22600 id = 3   } 
       name = "Camel Corps" 
       type     = cavalry
	   model = 6
       strength = 100 
       } 
     Division = 
     {   id   = {   type = 22600 id = 4   } 
       name = "Riyad Garrison" 
       type = garrison
	   model = 2
       strength = 90 
       } 
     } 
  landunit = 
   {   location = 1048 
     name     = "Hejaz Command" 
     id       = {   type = 22600 id = 5   } 
     Division = 
     {   id   = {   type = 22600 id = 6   } 
       name = "Medina Garrison" 
       type = garrison
	   model = 2
       strength = 90 
       } 
     } 
  landunit = 
   {   location = 1049 
     name     = "Asir Command" 
     id       = {   type = 22600 id = 7   } 
     Division = 
     {   id   = {   type = 22600 id = 8   } 
       name = "Mecca Garrison" 
       type = garrison
	   model = 2
       strength = 90 
       } 
     } 
  } 
 
