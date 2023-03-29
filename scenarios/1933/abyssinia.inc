 
 ######################################## 
 # Country definition for ETH by Cardus # 
 ######################################## 
  

 country = 
 {  tag                    = ETH 
	ai = "eth_1936.ai"
	ai_settings	= { flags = { AI_reinforcements = yes RES = yes MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes } }
	dissent = 20
	# Resource Reserves 
	energy                 = 1060
	metal                  = 1180
	rare_materials         = 490
	oil                    = 100 
	supplies               = 100 
	money                  = 500 
	capital                = 825 
	manpower               = 200

#      
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     free_market       = 7 
     freedom           = 3 
     professional_army = 7 
     defense_lobby     = 5 
     interventionism   = 2 
    } 

   nationalprovinces      = {  815 816 817 818 819 820 821 822 823 824 825 826 827 828 829 830 831 } 
   ownedprovinces         = {  818 819 820 821 822 823 824 825 826 827 828 829 830 831  } 
   controlledprovinces    = {  818 819 820 821 822 823 824 825 826 827 828 829 830 831  } 
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
# Inf support 
1910 1920 1930 1940 1950 1960
#Early Static Anti-Air Artillery 
2800
#SW Tank 
7600 7610
#Early Infantry Division  
1010 1020 1030 1040 1050 1060 1070
#Early Mountain Division
1160  1170 1180 1190 1200 1210 1220 
#1916 Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Early Agriculture
5700 
# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 

 }
 inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = ENG value = 50  } 
     relation = {  tag = FRA value = 25  } 
     relation = {  tag = IRE value = 100  } 
     relation = {  tag = ITA value = -200  } 
     relation = {  tag = JAP value = 35  } 
    } 
   SpyInfo                = {  country = "ETH" NumberOfSpies = 2  } 
   headofstate            = {  type = 9 id = 245001  } 
   headofgovernment       = {  type = 9 id = 245002  } 
   foreignminister        = {  type = 9 id = 245003  } 
   armamentminister       = {  type = 9 id = 245004  } 
   ministerofsecurity     = {  type = 9 id = 245005  } 
   ministerofintelligence = {  type = 9 id = 245006  } 
   chiefofstaff           = {  type = 9 id = 245007  } 
   chiefofarmy            = {  type = 9 id = 245008  } 
   chiefofnavy            = {  type = 9 id = 245009  } 
   chiefofair             = {  type = 9 id = 245010  } 
  #################################################################################### 
 #OOB Ethiopian Troops - Second Italo Abyssinian War 1935-1936 by Cardus 
 # ref. http://en.wikipedia.org/wiki/Ethiopian_Order_of_Battle_Second_Italo-Abyssinian_War 
 # ref http://it.wikipedia.org/wiki/Guerra_d%27Etiopia 
 # ref http://en.wikipedia.org/wiki/Ethiopian_Air_Force#Early_years_.281929-1935.29 
 ##################################################################################### 
  
         landunit =
       {  id       = {  type = 31000 id = 1  }
         location = 825
         name     = "Imperial Guard"
         Division =
         {  id       = {  type = 31000 id = 2  }
           name     = "Kebur Zabagna"
           type     = infantry
           strength = 100
	   max_strength = 100
           model    = 6
          }
        }
       landunit =
       {  id       = {  type = 31000 id = 3  }
         location = 823
         name     = "Army of the Left"
      # Ras Imru Haile Selassie
         Division =
         {  id       = {  type = 31000 id = 4  }
           name     = "Gojjam  Sefari"
        # Ras Imru Haile Selassie
           type     = infantry
           strength = 10
	   max_strength = 100
           model    = 4
          }
         Division =
         {  id       = {  type = 31000 id = 5  }
           name     = "Wolqayt Sefari"
        # Fitawrari Ayalew Birru
           type     = militia
           strength = 10
	   max_strength = 100
           model    = 0
          }
         Division =
         {  id       = {  type = 31000 id = 6  }
           name     = "Semien Sefari"
           type     = militia
           strength = 10
	   max_strength = 100
           model    = 0
          }
         Division =
         {  id       = {  type = 31000 id = 7  }
           name     = "1st Gojjam Levies"
           type     = militia
           strength = 2
	   max_strength = 80
           model    = 1
          }
         Division =
         {  id       = {  type = 31000 id = 8  }
           name     = "2nd Gojjam Levies"
           type     = militia
           strength = 2
	   max_strength = 80
           model    = 1
          }
         Division =
         {  id       = {  type = 31000 id = 9  }
           name     = "3rd Gojjam Levies"
           type     = militia
           strength = 2
	   max_strength = 80
           model    = 1
          }
        }
       landunit =
       {  id       = {  type = 31000 id = 10  }
         location = 821
         name     = "Army of the Center" 
      #Ras  Mulugeta Yeggazu of Illubabor
         Division =
         {  id       = {  type = 31000 id = 11  }
           name     = "Amino Sefari"
           type     = infantry
           strength = 10
	   max_strength = 60
           model    = 1
          }
         Division =
         {  id       = {  type = 31000 id = 12  }
           name     = "Gubba Sefari"
           type     = infantry
           strength = 10
	   max_strength = 60
           model    = 1
          }
         Division =
         {  id       = {  type = 31000 id = 13  }
           name     = "Gurage Sefari"
           type     = infantry
           strength = 10
	   max_strength = 60
           model    = 1
          }
         Division =
         {  id       = {  type = 31000 id = 14  }
           name     = "Jimma Sefari"
           type     = infantry
           strength = 10
	   max_strength = 60
           model    = 1
          }
         Division =
         {  id       = {  type = 31000 id = 15  }
           name     = "Mui Sefari"
           type     = infantry
           strength = 10
	   max_strength = 60
           model    = 1
          }
         Division =
         {  id       = {  type = 31000 id = 16  }
           name     = "Om Hajer Sefari"
           type     = infantry
           strength = 10
	   max_strength = 60
           model    = 1
          }
         Division =
         {  id       = {  type = 31000 id = 17  }
           name     = "Sela Sefari"
           type     = infantry
           strength = 10
	   max_strength = 60
           model    = 1
          }
         Division =
         {  id       = {  type = 31000 id = 18  }
           name     = "Sodo Sefari"
           type     = infantry
           strength = 10
	   max_strength = 60
           model    = 1
          }
         Division =
         {  id       = {  type = 31000 id = 19  }
           name     = "Welega Sefari"
           type     = infantry
           strength = 10
	   max_strength = 60
           model    = 1
          }
        }
       landunit =
       {  id       = {  type = 31000 id = 20  }
         location = 821
         name     = "Army of the Right" # about 50,000 men
      #Ras Kassa Haile Darge (Qegnazmach = "General/Commander of the right")
         Division =
         {  id       = {  type = 31000 id = 21  }
           name     = "1. Begemder  Sefari"
           type     = militia
           strength = 1
	   max_strength = 100
           model    = 1
          }
         Division =
         {  id       = {  type = 31000 id = 22  }
           name     = "2. Begemder  Sefari"
           type     = militia
           strength = 1
	   max_strength = 100
           model    = 1
          }
         Division =
         {  id       = {  type = 31000 id = 23  }
           name     = "3. Begemder  Sefari"
           type     = militia
           strength = 1
	   max_strength = 100
           model    = 1
          }
         Division =
         {  id       = {  type = 31000 id = 24  }
           name     = "4. Begemder  Sefari"
           type     = militia
           strength = 1
	   max_strength = 100
           model    = 1
          }
         Division =
         {  id       = {  type = 31000 id = 25  }
           name     = "5. Begemder  Sefari"
           type     = militia
           strength = 1
	   max_strength = 100
           model    = 1
          }
         Division =
         {  id       = {  type = 31000 id = 26  }
           name     = "6. Begemder  Sefari"
           type     = militia
           strength = 1
	   max_strength = 100
           model    = 1
          }
         Division =
         {  id       = {  type = 31000 id = 27  }
           name     = "7. Begemder  Sefari"
           type     = militia
           strength = 1
	   max_strength = 100
           model    = 1
          }
         Division =
         {  id       = {  type = 31000 id = 28  }
           name     = "8. Begemder  Sefari"
           type     = militia
           strength = 1
	   max_strength = 100
           model    = 1
          }
         Division =
         {  id       = {  type = 31000 id = 29  }
           name     = "9. Begemder  Sefari"
           type     = militia
           strength = 1
	   max_strength = 100
           model    = 1
          }
         Division =
         {  id       = {  type = 31000 id = 30  }
           name     = "10. Begemder  Sefari"
           type     = militia
           strength = 1
	   max_strength = 100
           model    = 1
          }
         Division =
         {  id       = {  type = 31000 id = 31  }
           name     = "11. Begemder  Sefari"
           type     = militia
           strength = 1
	   max_strength = 60
           model    = 1
          }
         Division =
         {  id       = {  type = 31000 id = 32  }
           name     = "1. Tigray Sefari"
           type     = infantry
           strength = 3
	   max_strength = 100
           model    = 1
          }
         Division =
         {  id       = {  type = 31000 id = 33  }
           name     = "2. Tigray Sefari"
           type     = infantry
           strength = 3
	   max_strength = 100
           model    = 1
          }
         Division =
         {  id       = {  type = 31000 id = 34  }
           name     = "3. Tigray Sefari"
           type     = infantry
           strength = 3
	   max_strength = 100
           model    = 1
          }
         Division =
         {  id       = {  type = 31000 id = 35  }
           name     = "1. Wag Sefari"
           type     = militia
           strength = 5
	   max_strength = 70
           model    = 0
          }
         Division =
         {  id       = {  type = 31000 id = 36  }
           name     = "2. Wag Sefari"
           type     = militia
           strength = 5
	   max_strength = 70
           model    = 0
          }
         Division =
         {  id       = {  type = 31000 id = 37  }
           name     = "1. Lasta Sefari"
           type     = infantry
           strength = 5
	   max_strength = 90
           model    = 1
          }
         Division =
         {  id       = {  type = 31000 id = 38  }
           name     = "2. Lasta Sefari"
           type     = infantry
           strength = 5
	   max_strength = 90
           model    = 1
          }
         Division =
         {  id       = {  type = 31000 id = 39  }
           name     = "1. Yejju Sefari"
           type     = infantry
           strength = 5
	   max_strength = 90
           model    = 1
          }
         Division =
         {  id       = {  type = 31000 id = 40  }
           name     = "2. Yejju Sefari"
           type     = infantry
           strength = 5
	   max_strength = 90
           model    = 1
          }
        }
       landunit =
       {  id       = {  type = 31000 id = 41  }
         location = 819
         name     = "Danakil region"
      #Dejazmach Kassa Sebhat
         Division =
         {  id       = {  type = 31000 id = 42  }
           name     = "Danakil Sefari"
           type     = militia
           strength = 10
	   max_strength = 60
           model    = 2
          }
        }
       
       landunit =
       {  id       = {  type = 31000 id = 43  }
         location = 820
         name     = "Northern Front Reserves" 
         Division =
         {  id       = {  type = 31000 id = 44  }
           name     = "1. Ifrata Sefari"
           type     = infantry
           strength = 5
	   max_strength = 90
           model    = 1
          }
         Division =
         {  id       = {  type = 31000 id = 45  }
           name     = "2. Ifrata Sefari"
           type     = infantry
           strength = 5
	   max_strength = 90
           model    = 1
          }
         Division =
         {  id       = {  type = 31000 id = 46  }
           name     = "1. Kaffa Sefari"
           type     = infantry
           strength = 5
	   max_strength = 90
           model    = 1
          }
         Division =
         {  id       = {  type = 31000 id = 47  }
           name     = "2. Kaffa Sefari"
           type     = infantry
           strength = 5
	   max_strength = 90
           model    = 1
          }
         Division =
         {  id       = {  type = 31000 id = 48  }
           name     = "Welega-Ardjo Sefari"
           type     = infantry
           strength = 10
	   max_strength = 75
           model    = 5
	   extra = anti_air
	   brigade_model = 0
          }
         Division =
         {  id       = {  type = 31000 id = 49  }
           name     = "Wollo Sefari"
           type     = militia
           strength = 10
	   max_strength = 40
           model    = 1
          }
       }
       landunit =
       {  id       = {  type = 31000 id = 50  }
         location = 826
         name     = "Southern Front"
      #Grazmach Afawarq Walda Samayat
         Division =
         {  id       = {  type = 31000 id = 51  }
           name     = "Ogaden Sefari"
           type     = militia
           strength = 10
	   max_strength = 40
           model    = 1
       }
       }   
       landunit =
       {  id       = {  type = 31000 id = 52  }
         location = 828
         name     = "Hararghe  Sefari"
      #Grazmach Afawarq Walda Samayat
         Division =
         {  id       = {  type = 31000 id = 53  }
           name     = "1. Illubabor Sefari"
           type     = militia
           strength = 3
	   max_strength = 80
           model    = 1
       }
         Division =
         {  id       = {  type = 31000 id = 54  }
           name     = "2. Illubabor Sefari"
           type     = militia
           strength = 3
	   max_strength = 80
           model    = 1
       }
         Division =
         {  id       = {  type = 31000 id = 55  }
           name     = "3. Illubabor Sefari"
           type     = militia
           strength = 3
	   max_strength = 80
           model    = 1
       }
         Division =
         {  id       = {  type = 31000 id = 56  }
           name     = "Gemu Gofa Sefari"
        #Dejazmach Abebe Damtew
           type     = militia
           strength = 10
	   max_strength = 60
           model    = 0
       }
         Division =
         {  id       = {  type = 31000 id = 57  }
           name     = "Arusi Sefari"
        #Dejazmach Amde Mikael
           type     = militia
           strength = 10
	   max_strength = 60
           model    = 1
       }
         Division =
         {  id       = {  type = 31000 id = 58  }
           name     = "Kula Sefari"
        #Dejazmach Hapte Mikael
           type     = militia
           strength = 10
	   max_strength = 20
           model    = 1
       }
       }   
       landunit =
       {  id       = {  type = 31000 id = 59  }
         location = 827
         name     = "Webi Shebelle Front"
      #Dejazmach Beine Merid
         Division =
         {  id       = {  type = 31000 id = 60  }
           name     = "Bale Sefari"
           type     = militia
           strength = 10
	   max_strength = 80
           model    = 1
          }
       } 
       landunit =
       {  id       = {  type = 31000 id = 61  }
         location = 830
         name     = "Juba Front"
      #Dejazmach Beine Merid
         Division =
         {  id       = {  type = 31000 id = 62  }
           name     = "1. Sidamo Sefari"
        #Ras Desta Damtew
           type     = infantry
           strength = 5
	   max_strength = 80
           model    = 3
	   extra = anti_air
	   brigade_model = 0
          }
         Division =
         {  id       = {  type = 31000 id = 63  }
           name     = "2. Sidamo Sefari"
        #Fitawraris Ademe Anbassu and Tedeamme Zelleka
           type     = infantry
           strength = 5
	   max_strength = 80
           model    = 3
          }
       } 
}