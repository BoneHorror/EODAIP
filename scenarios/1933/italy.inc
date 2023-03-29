# Ministres OK
# OOB OK
# Sliders OK

########################################
# Country definition for ITA by Cardus #
########################################

#####################
# Country main data #
#####################

country =
{  tag                    = ITA
	ai = "ita_1933.ai"
	ai_settings	= { flags = { ITABuildStandard = yes MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes ItaEthPeace = yes } }
	manpower               = 779 #was 460
	# Resource Reserves
	energy                 = 3600
	metal                  = 1800
	rare_materials         = 1000
	oil                    = 1000
	supplies               = 2000
	money                  = 500
	belligerence           = 0 # to avoid MP problems
	capital                = 419
	transports             = 550
	escorts                = 100

	dissent = 10
 
   
       diplomacy =
       {  relation = {  tag = AFG value = 50  }
         relation =
         {  tag        = ALB
           value      = 10
           guaranteed = {  day = 29 month = december year = 1932  } 
          }
         relation = {  tag = ARG value = 30  }
         relation = {  tag = AST value = 1  }
         relation =
         {  tag        = AUS
           value      = 125
           guaranteed = {  day = 29 month = december year = 1932  } 
          }
         relation = {  tag = BEL value = -5  }
         relation = {  tag = BHU value = 1  }
         relation = {  tag = BUL value = 150  }
         relation = {  tag = CAN value = 1  }
         relation = {  tag = CHL value = 30  }
         relation = {  tag = CZE value = 15  }
         relation = {  tag = ENG value = 50  }
         relation = {  tag = ETH value = -50  }
         relation = {  tag = FIN value = 50  }
         relation = {  tag = FRA value = 50  }
         relation = {  tag = GER value = -50  }
         relation =
         {  tag        = GRE
           value      = -35
           guaranteed = {  day = 29 month = december year = 1932  } 
          }
         relation = {  tag = HOL value = -20  }
         relation =
         {  tag        = HUN
           value      = 125
           guaranteed = {  day = 29 month = december year = 1932  } 
          }
         relation = {  tag = IRE value = 20  }
         relation = {  tag = IRQ value = 25  }
         relation = {  tag = NEP value = 1  }
         relation = {  tag = NZL value = 1  }
         relation = {  tag = OMN value = 50  }
         relation = {  tag = POR value = 65  }
         relation =
         {  tag        = ROM
           value      = 50
           guaranteed = {  day = 29 month = december year = 1932  } 
          }
         relation = {  tag = SAF value = 1  }
         relation = {  tag = SAU value = -25  }
         relation =
         {  tag        = SCH
           value      = 1
       guaranteed = {  day = 29 month = december year = 1932  } 
          }
         relation = {  tag = SPR value = -50  }
         relation =
         {  tag        = TUR
           value      = 1
           guaranteed = {  day = 29 month = december year = 1932  } 
          }
         relation = {  tag = YEM value = 50  }
         relation = {  tag = YUG value = 75  }
      relation = {  tag = USA value = 90  } #USA ignored the embargo and provided Italy with the oil required
        }
       SpyInfo                = {  country = "ITA" NumberOfSpies = 9  }
       # Somaliland
       nationalprovinces      = {  87 94 343 350 390 393 394 395 396 398 399 400 401 402 403 404 405 406 407 408 410 411 412 413 414 415 416 417 418 419 420 421 422 423 424 425 426 427 428 429 430 431 432 433 434 435 }
                              
       ownedprovinces         = { 378 379 393 394 395 396 398 399 400 401 402 403 404 405 406 407 408 410 411 412 413 414 415 416 417 418 419 420 421 422 423 424 425 426 427 428 430 431 432 433 434 435 750 751 752 753 754 755 756 757 758 759 760 761 762 763 764 765 766 767 768 769 770 771 772 773 774 775 776 777 815 816 817 834 835 836 837 838 }

       controlledprovinces    = {  378 379 393 394 395 396 398 399 400 401 402 403 404 405 406 407 408 410 411 412 413 414 415 416 417 418 419 420 421 422 423 424 425 426 427 428 430 431 432 433 434 435 750 751 752 753 754 755 756 757 758 759 760 761 762 763 764 765 766 767 768 769 770 771 772 773 774 775 776 777 815 816 817 834 835 836 837 838 }
		claimedprovinces =  {   740 741 742 744 745 746 747 748 749 #Tunisia
                                750 751 752 753 754 755 756 757 758 759 760 761 762 763 764 765 766 767 768 769 770 771 772 773 774 775 776 777 #Libya
                                91 #Savoie
				359 360 361 362 #Albania
				349 #Ljubljana
				371 378 379 #GreekIslands
							} 

	# Italy 1933 techs
	#######################
	techapps = {  
	
	# Manufacturing
	5810 5820 5050 5830 5060 
	# Construction Engineering 
	5800 5080 5090
	# Agriculture 
	5700 5710 5010 5020
	# Computers
	5310 54010 54020 54030 
	# Cryptography
	5316 5326 5327  
	# Radar
	
	# Oil Refining
	5190
	# Atomic Research

	# Medicine
	5600 5610 5620 
	# Exp. Rocket
	5560

	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080 1090
	# Mountain Division
	1160 1170 1180 1190 1200 1210 1220 1230 1240
	# Cavalry Division
	13060 13070 13080 1310 1320 1330 1340 1350 1360   
	# Motorized Infantry
	
	# Naval Infantry
	1560 1570 1580 
	# Paratroopers
	
	# Engineers
	1830 1840 1850 
	# Supply 
	1910 1920 1930 1940 1950 1960 1970 

	# Tanks
	7600 7610 2620 2010 2630 2640 2646
	# Armored Car 
	2860 2870 2880 2020 
	# Artillery
	2290 2300 2310 2900 2910 2920 
	# Anti-tank Artillery
	
	# Static Anti-Air Artillery 
	2800 2450
	# Anti-Air Artillery
	2810 2820  

	# Hospital System 
	14000 14010 14020
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
	# WWII Land Doctrines
	6560

	# Light Cruiser 
	3110 3120 3130 3140 3150
	# Battleship 
	3410 3420 3430 3440 3450 3456 3460
	# Battlecruiser  
	3310 3320
	# Heavy Cruiser 
	3210 3220 3230 3240 3250 
	# Destroyer 
	3010 3020 3030 3040 3050 3060 
	# Submarine 
	3610 3620 3630 3640 3650 
	# Light Carrier 
	12100 12110 12120 
	# Carrier
	3510 
	# Torpedo & ASW 18
	3720 3730 3736 3740 3750 3900
	# Troopships
	3810 3820

	# Naval Doctrines
	# Engagement Theories
	8010 8020 8040 8050 8060 8070 8080
	# Amphibious Warfare
	82300
	# Logistic Support
	82500
	# Naval Interdiction
	8500 8510 8520 8550
	# Trade Interdiction Submarine
	8600 8610
	# Engagement Tactics - Fleet-in-Being column
	8900 8910 8920 8930 8940
	# Naval Supremacy
	8100 8110 8120 8150 8160 8200 8210

	# Interceptor Fighter  
	4500 4510 4520 4530 4540 4550 4010 4020
	# Multirole Fighter
	4300 4310 4320 4330 
	# Escort Fighter
	
	# Close Air Support
	
	# Tactical Bomber 
	4600 4610 4620 4630 4120 
	# Strategic Bomber
	4800 4810 4820
	# Naval Bomber 
	4700 4710 
	#CAG 
	4900 
	# Seaplanes
	4740 4750 4760 4770 4780
	# CAG
	
	# Air Transport 
	4290 

	#Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470  
	#Carrier Pigeons
	30020 30030	
	}

	inventions = { 3000027 }
       policy =
       {  date              = {  year = 0 month = january day = 0  }
         democratic        = 2
         political_left    = 3
         freedom           = 4
         free_market       = 6
         professional_army = 6
         defense_lobby     = 7
         interventionism   = 6
        }

		industrial_modifier = 0.84 # 1929 crisis (1.14-0.2); Restored by events 2006026(Economic Recovery Policy) + 10%, 2006027 (Unemployment rate down to 10 percent) + 10%
       headofstate            = {  type = 9 id = 25001  }
       headofgovernment       = {  type = 9 id = 25002  }
       foreignminister        = {  type = 9 id = 25003  }
       armamentminister       = {  type = 9 id = 25054  }
       ministerofsecurity     = {  type = 9 id = 25005  }
       ministerofintelligence = {  type = 9 id = 25006  }
       chiefofstaff           = {  type = 9 id = 25007  }
       chiefofarmy            = {  type = 9 id = 25008  }
       chiefofnavy            = {  type = 9 id = 25009  }
       chiefofair             = {  type = 9 id = 25010  }
       # ######################
       # ITA 1936 LAND OOB
       # ######################
       landunit =
       {  id       = {  type = 23500 id = 1  }
         location = 398 # Torino
         name     = "I Corpo d'Armata"
         # Gen. C. Vecchiarelli#
         Division =
         {  id      = {  type = 23500 id = 2  }
           name     = "1a Divisione 'Superga'"
           type     = infantry
		   model    = 7 
           extra    = artillery
           strength = 85
		    brigade_model    = 3 		   
          }
         Division =
         {  id       = {  type = 23500 id = 258 }
           name     = "2a Divisione 'Sforzesca'"
           type     = infantry
	       model    = 7 
           extra    = engineer
           brigade_model = 2
           strength = 85
          }
         Division =
         {  id       = {  type = 23500 id = 56  }
           name     = "26a Divisione 'Assietta'"
		   type     = infantry
           model    = 7
           extra = anti_air
           brigade_model = 1		   
           strength = 85
          }
        }
		landunit =
       {  id       = {  type = 23500 id = 5  }
         location = 396 # Genova
         name     = "II Corpo d'Armata"
         Division =
         {  id       = {  type = 23500 id = 4  }
           name     = "3a Divisione 'Ravenna'"
           type     = infantry
           strength = 85
		   model    = 7
            extra    = artillery
		    brigade_model    = 3
          }
         Division =
         {  id       = {  type = 23500 id = 6  }
           name     = "4a Divisione 'Livorno'"
           type     = infantry
           strength = 85
            model    = 7 
           extra    = engineer
           brigade_model = 2
          }
         Division =
         {  id       = {  type = 23500 id = 68  }
           name     = "5a Divisione 'Cosseria'"
           type     = infantry
           model    = 7
           extra = anti_air
           brigade_model = 1 
           strength = 85
          }
		}
       landunit =
       {  id       = {  type = 23500 id = 7  }
         location = 398 # Torino
         name     = "Comando Superiore Truppe Alpine"
         Division =
         {  id       = {  type = 23500 id = 12  }
           name     = "1a Divisione Alpina 'Taurinense'"
           type     = bergsjaeger
           strength = 60
	   model    = 7 
           extra    = artillery
	   brigade_model = 3		   
          }
         Division =
         {  id      = {  type = 23500 id = 14  }
           name     = "2a Divisione Alpina 'Tridentina'"
           type     = bergsjaeger
           strength = 50
		   model    = 7 
		   }
		Division =
         {  id       = {  type = 23500 id = 278  }
           name     = "3a Divisione Alpina 'Julia'"
           type     = bergsjaeger
           strength = 60
	   model    = 7 
           extra    = artillery
	   brigade_model = 3	
          }
		}
		landunit =
       {  id       = {  type = 23500 id = 9  }
        location = 407 # Milano
         name     = "III Corpo d'Armata"
         Division =
         {  id       = {  type = 23500 id = 10  }
           name     = "6a Divisione 'Cuneo'"
           type     = infantry
           strength = 85
	       model    = 7
            extra    = artillery
		    brigade_model    = 3
          }
        Division =
         {  id       = {  type = 23500 id = 43  }
           name     = "7a Divisione 'Lupi di Toscana'"
           type     = infantry
		    model    = 7 
           strength = 85
           extra    = engineer
           brigade_model = 2
          }
       Division =
        {  id      = {  type = 23500 id = 27  }
           name     = "8a Divisione 'Po'"
           type     = infantry
		    model   = 7 
          strength = 85
            extra = anti_air
           brigade_model = 1 
          }
        } 
       landunit =
       {  id       = {  type = 23500 id = 13  }
         location = 400 
         name     = "IV Corpo d'Armata"
         Division =
         {  id       = {  type = 23500 id = 35  }
           name     = "9a Divisione 'Pasubio'"
           type     = infantry
		    model    = 7
          strength = 85
            extra    = artillery
		    brigade_model    = 3
          }
         Division =
         {  id           = {  type = 23500 id = 256  }
           name          = "11a Divisione 'Brennero'"
           type          = infantry
		   model         = 7
           extra         = engineer
           brigade_model = 2
           strength      = 85
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 15  }
         location = 404
         name     = "V Corpo d'Armata"
         Division =
         {  id      = {  type = 23500 id = 16  }
           name     = "12a Divisione 'Sassari'"
           type     = infantry
	       model    = 7
           strength = 85
            extra    = artillery
		    brigade_model    = 3
          }
		 Division =
         {  id      = {  type = 23500 id = 18  }
           name     = "15a Divisione 'Bergamo'"
           type     = infantry
	       model    = 7
           strength = 85
           extra         = engineer
           brigade_model = 2
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 19  }
         location = 411 # Bologna
        name     = "VI Corpo d'Armata"
        Division =
         {  id		= {  type = 23500 id = 20  }
           name		= "16a Divisione 'Pistoia'"
           type     = infantry
		   model    = 7
          extra    = artillery
           brigade_model = 3
          strength = 85
          }
		 Division =
         {  id       = {  type = 23500 id = 48  }
           name     = "17a Divisione 'Pavia'"
           type     = infantry
	       model    = 7 
           strength = 85
           extra         = engineer
           brigade_model = 2
          }
		Division =
         {  id       = {  type = 23500 id = 260  }
           name     = "18a Divisione 'Messina'"     
           type     = infantry
            model    = 7
           strength = 85
            extra = anti_air
           brigade_model = 1 
          }
       }
       landunit =
	   {  id       = {  type = 23500 id = 21  }
         location = 410 # Firenze
         name     = "VII Corpo d'Armata"
        Division =
         {  id       = {  type = 23500 id = 46  }
           name     = "19a Divisione 'Venezia'"
           type     = infantry
           model    = 7 
           extra    = artillery
		   brigade_model = 3
           strength = 85
         }
		 Division =
         {  id       = {  type = 23500 id = 45  }
           name     = "20a Divisione 'Friuli'"
           type     = infantry
		    model    = 7
           strength = 85
           extra         = engineer
           brigade_model = 2
         }
        }
       landunit =
	   {  id       = {  type = 23500 id = 24  }
         location = 419 # Roma
         name     = "VIII Corpo d'Armata"
         Division =
         {  id      = {  type = 23500 id = 25  }
           name     = "21a Divisione 'Granatieri di Sardegna'"
           type     = infantry
		   model    = 7 
           strength = 85 
           extra    = artillery
		   brigade_model = 3
          }
         Division =
         { id       = {  type = 23500 id = 41  }
           name     = "22a Divisione 'Cacciatori delle Alpi'"
           type     = infantry
		    model    = 7
           strength = 85
           extra         = engineer
           brigade_model = 2
          }
        }
       landunit =
	   {  id       = {  type = 23500 id = 26  }
         location = 426 # Bari
         name     = "IX Corpo d'Armata"
         Division =
         {  id       = {  type = 23500 id = 252  }
           name     = "23a Divisione 'Ferrara'"
           type     = infantry
		   model    = 7
           strength = 85
           extra    = artillery
		   brigade_model = 3
          }
         Division =
         {  id       = {  type = 23500 id = 262  }
           name     = "24a Divisione 'Pinerolo'"
           type     = infantry
          model    = 7			
           strength = 85
           extra         = engineer
           brigade_model = 2
        }
        }
       landunit =
       {  id       = {  type = 23500 id = 28  }
         location = 421
         name     = "X Corpo d'Armata"
	     Division =
         {  id       = {  type = 23500 id = 29  }
           name     = "25a Divisione 'Bologna'"
           type     = infantry
		   model    = 7 
           strength = 85
           extra    = artillery
		   brigade_model = 3
          }
         Division =
         { id       = {  type = 23500 id = 50  }
           name     = "27a Divisione 'Brescia'"
           type     = infantry
            model    = 7
           strength = 85
           extra         = engineer
           brigade_model = 2
          }
        }
		landunit =
       {  id       = {  type = 23500 id = 30  }
         location = 405 # Udine
         name     = "XI Corpo d'Armata"
         Division =
         {  id            = {  type = 23500 id = 31  }
           name          = "13a Divisione 'Re'"
           type          = infantry
	       model         = 7
          extra         = artillery
           brigade_model = 3
           strength      = 85
         }
         Division =
         {  id       = {  type = 23500 id = 37  }
           name     = "10a Divisione 'Piave'"
           type     = infantry
	       model    = 7
           strength = 85
           extra         = engineer
           brigade_model = 2
          }
         Division =
         {  id       = {  type = 23500 id = 39  }
           name     = "14a Divisione 'Isonzo'"
           type     = infantry
	        model    = 7
           strength = 85
		extra = anti_air
		brigade_model = 1
          }
       }
       landunit =
       { id       = {  type = 23500 id = 32  }
         location = 430 # Palermo
         name     = "Comando militare di Sicilia"
         Division =
         {  id       = {  type = 23500 id = 33  }
           name     = "28a Divisione 'Aosta'"
           type     = infantry
		   model    = 7
           strength = 85
         extra         = artillery
           brigade_model = 3
          }
        Division =
         {  id       = {  type = 23500 id = 264  }
           name     = "29a Divisione 'Piemonte'"
           type     = infantry
            model   = 7
          strength = 85
           extra         = engineer
           brigade_model = 2
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 34  }
        location = 434 # Cagliari
         name     = "Comando militare di Sardegna"
         Division =
         {  id       = {  type = 23500 id = 57  }
           name     = "30a Divisione 'Sabauda'"
           type     = infantry
           model    = 7
           strength = 85
           extra    = artillery
	   brigade_model = 3
          }
         }
       landunit =
       {  id       = {  type = 23500 id = 269  }
         location = 400 # Venezia
         name     = "Corpo d'Armata Celere"
         Division =
         {  id       = {  type = 23500 id = 270  }
           name     = "1a Divisione Celere 'Eugenio di Savoia'"
           type     = cavalry
           strength = 100
           model    = 8
           extra    = armored_car 
           brigade_model = 2
         }
         Division =
         {  id       = {  type = 23500 id = 271  }
           name     = "2a Divisione Celere 'Emanuele Filiberto Testa di Ferro'"
           type     = cavalry
           strength = 100
           model    = 8
           extra    = armored_car 
           brigade_model = 2
         }
         Division =
         {  id       = {  type = 23500 id = 164  }
           name     = "3a Divisione Celere 'Principe Amedeo'"
           type     = cavalry
           strength = 100
           model    = 8
           extra    = armored_car 
           brigade_model = 2
        }
       }
      landunit =   
      {  id       = {  type = 23500 id = 275  }
        location = 419 # Roma
        name     = "Superesercito" 
         Division =
         {  id      = {  type = 23500 id = 276  }
           name     = "Comando Supremo"   
           type     = hq
           model    = 2
           strength = 100 
          }
		} 
       landunit =
       {  id       = {  type = 23500 id = 240  }
         location = 761 # Benghazi
         name     = "Comando militare della Cirenaica" 
         Division =
         {  id       = {  type = 23500 id = 241  }
           name     = "Divisione 'Cirenaica'"
           type     = infantry
           model    = 6
           strength = 100
          }
       }
       landunit =
       {  id       = {  type = 23500 id = 242  }
         location = 750 # Tripoli 
         name     = "Comando militare della Tripolitana"
         Division =
         {  id       = {  type = 23500 id = 243 }
           name     = "Divisione 'Tripolitana'"   
           type     = garrison
           model    = 3
           strength = 100 
          }
       }
       landunit =
       {  id       = {  type = 23500 id = 55  }
         location = 817
         name     = "Comando militare dell'Eritreo"
        Division =
        {  id       = {  type = 23500 id = 61  }
          name     = "Ia Divisione Indigini"
          type     = infantry
          model    = 5
          strength = 10
        }
        Division =
        {  id       = {  type = 23500 id = 62  }
          name     = "IIa Divisione Indigini"
          type     = infantry
          model    = 5
          strength = 10
        }
         Division =
         {  id       = {  type = 23500 id = 66  }
           name     = "1o Gruppo di Battaglioni CCNN dell'Eritrea"
           type     = militia
           model = 4 
           strength = 10
          }
         Division =
      {  id       = {  type = 23500 id = 180  }
           name     = "V/XV Battaglioni Indigeni"
           type     = militia
		   model = 3  
           strength = 10
          }
         Division =
         {  id       = {  type = 23500 id = 63  }
           name     = "XXVII/XXVIII Battaglioni Indigeni"
           type     = militia
           model = 3 
           strength = 10
          }
         Division =
         {  id       = {  type = 23500 id = 184  }
           name     = "XXIV/XXVI Battaglioni Indigeni"
		   type     = militia
           model = 3 
           strength = 10
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 74  }
         location = 836
         name     = "Comando militare della Somalia"
         Division =
         {  id       = {  type = 23500 id = 77  }
           name     = "1o Gruppo di Battaglioni Regio Corpo Truppe Coloniali"
           type     = militia
           model = 3 
           strength = 30
          }
         Division =
         {  id       = {  type = 23500 id = 197  }
           name     = "2o Gruppo di Battaglioni Regio Corpo Truppe Coloniali"
           type     = militia
           model = 3 
           strength = 30
          }
		} 

     
    ####################################################################
       ### Italian Navy OOB by Cardus ###
       
	navalunit = { 
		id = { type = 23500 id = 79 } 
		name = "Prima Squadra" 
		location = 422 
		base = 422 
	division = {
		id    = { type = 23500 id = 81 }
		name  = "RN Andrea Doria"
		type  = battleship
		model = 3
	}
	division = {
		id    = { type = 23500 id = 82 }
		name  = "RN Caio Duilio"
		type  = battleship
		model = 3
	}
	division = { 
		id    = { type = 23500 id = 83 }
		name  = "RN Conte di Cavour"
		type  = battleship
		model = 3
    }
    division = {
		id    = { type = 23500 id = 84 }
		name  = "RN Giulio Cesare"
		type  = battleship
		model = 3
	}
		division = { 
			id = { type = 23500 id = 212 } 
			name = "RN Giuseppe Miraglia" 
			type = escort_carrier 
			model = 0
			} 
		division = { 
			id = { type = 23500 id = 99 } 
			name = "RN Zara" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
	extra2 = naval_improved_hull_s
	brigade_model2 = 0
			} 
		division = { 
			id = { type = 23500 id = 100 } 
			name = "RN Gorizia" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
	extra2 = naval_improved_hull_s
	brigade_model2 = 0
			} 
		division = { 
			id = { type = 23500 id = 101 } 
			name = "RN Fiume" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
	extra2 = naval_improved_hull_s
	brigade_model2 = 0
			} 
		division = { 
			id = { type = 23500 id = 106 } 
			name = "RN Alberico da Barbiano" 
			type = light_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 3
			} 
		division = { 
			id = { type = 23500 id = 108 } 
			name = "RN Alberto da Giussano" 
			type = light_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 3
			} 
		division = { 
			id = { type = 23500 id = 94 } 
			name = "14a Divisione di cacciaorpediniere" 
			type = destroyer 
			model = 4 
			} 
		division = { 
			id = { type = 23500 id = 102 } 
			name = "15a Divisione di cacciaorpediniere" 
			type = destroyer 
			model = 4 
			} 
		division = { 
			id = { type = 23500 id = 89 } 
			name = "16a Divisione di cacciaorpediniere" 
			type = destroyer 
			model = 4 
			} 
		division = { 
			id = { type = 23500 id = 132 } 
			name = "7a Divisione di cacciaorpediniere" 
			type = destroyer 
			model = 4 
			} 
		division = { 
			id = { type = 23500 id = 95 } 
			name = "8a Divisione di cacciaorpediniere" 
			type = destroyer 
			model = 4 
			} 
		division = { 
			id = { type = 23500 id = 114 } 
			name = "1a Divisione di trasporti" 
			type = transport 
			model = 1 
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 98 } 
		name = "Seconda Squadra" 
		location = 413 
		base = 413 
		division = { 
			id = { type = 23500 id = 118 } 
			name = "RN Pola" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
	extra2 = naval_improved_hull_s
	brigade_model2 = 0
			} 
		division = { 
			id = { type = 23500 id = 124 } 
			name = "RN Trento" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 23500 id = 126 } 
			name = "RN Trieste" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 23500 id = 125 } 
			name = "RN Pisa" 
			type = heavy_cruiser 
			model = 1 
			} 
		division = { 
			id = { type = 23500 id = 121 } 
			name = "RN Bartolomeo Colleoni" 
			type = light_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 3
			} 
		division = { 
			id = { type = 23500 id = 120 } 
			name = "RN Giovanni dalle Bande Nere" 
			type = light_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 3
			} 
		division = { 
			id = { type = 23500 id = 129 } 
			name = "RN Ancona" 
			type = light_cruiser 
			model = 2 
			} 
		division = { 
			id = { type = 23500 id = 130 } 
			name = "RN Campania" 
			type = light_cruiser 
			model = 2 
			} 
		division = { 
			id = { type = 23500 id = 88 } 
			name = "RN Libia" 
			type = light_cruiser 
			model = 2 
			} 
		division = { 
			id = { type = 23500 id = 131 } 
			name = "RN Quarto" 
			type = light_cruiser 
			model = 1 
			} 
		division = { 
			id = { type = 23500 id = 96 } 
			name = "4a Divisione di torpediniere" 
			type = destroyer 
			model = 2 
			} 
		division = { 
			id = { type = 23500 id = 110 } 
			name = "2a Divisione di trasporti" 
			type = transport 
			model = 1 
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 133 } 
		name = "1o Squadrone di sommergibili" 
		location = 413 
		base = 413 
		division = { 
			id = { type = 23500 id = 134 } 
			name = "16a Divisione di sommergibili" 
			type = submarine 
			model = 2 
			strength = 40
			} 
		division = { 
			id = { type = 23500 id = 135 } 
			name = "17a Divisione di sommergibili" 
			type = submarine 
			model = 1 
			strength = 80
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 128 } 
		name = "3o Squadrone di sommergibili" 
		location = 432 
		base = 430 
		division = { 
			id = { type = 23500 id = 136 } 
			name = "31a Divisione di sommergibili" 
			type = submarine 
			model = 3 
			} 
		division = { 
			id = { type = 23500 id = 138 } 
			name = "33a Divisione di sommergibili" 
			type = submarine 
			model = 3 
			} 
		division = { 
			id = { type = 23500 id = 142 } 
			name = "34a Divisione di sommergibili" 
			type = submarine 
			model = 3 
			} 
		division = { 
			id = { type = 23500 id = 139 } 
			name = "37a Divisione di sommergibili" 
			type = submarine 
			model = 1 
			strength = 80
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 137 } 
		name = "4o Squadrone di sommergibili" 
		location = 422 
		base = 422 
		division = { 
			id = { type = 23500 id = 147 } 
			name = "40a Divisione di sommergibili" 
			type = submarine 
			model = 3 
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 141 } 
		name = "Circoscrizione Alto Tirreno" 
		location = 413 
		base = 413 
		division = { 
			id = { type = 23500 id = 154 } 
			name = "16a Divisione di torpediniere" 
			type = destroyer 
			model = 3 
			} 
		division = { 
			id = { type = 23500 id = 127 } 
			name = "3a Divisione di trasporti" 
			type = transport 
			model = 1 
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 146 } 
		name = "Circoscrizione Basso Tirreno" 
		location = 421 
		base = 421 
		division = { 
			id = { type = 23500 id = 90 } 
			name = "3a Divisione di torpediniere" 
			type = destroyer 
			model = 3 
			} 
		division = { 
			id = { type = 23500 id = 103 } 
			name = "4a Divisione di trasporti" 
			type = transport 
			model = 1 
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 150 } 
		name = "Comando Militare Marittimo Sicilia" 
		location = 432 
		base = 430
 		division = { 
			id = { type = 23500 id = 2271 } 
			name = "1a Divisione di torpediniere" 
			type = destroyer 
			model = 2
			} 
		division = { 
			id = { type = 23500 id = 2273 } 
			name = "5a Divisione di torpediniere" 
			type = destroyer 
			model = 2
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 217 } 
		name = "Comando Militare Marittimo Sardegna" 
		location = 435 
		base = 435
 		division = { 
			id = { type = 23500 id = 80 } 
			name = "2a Divisione di torpediniere" 
			type = destroyer 
			model = 3 
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 222 } 
		name = "Circoscrizione Alto Adriatico" 
		location = 400 
		base = 400
 		division = { 
			id = { type = 23500 id = 2268 } 
			name = "15a Divisione di torpediniere" 
			type = destroyer 
			model = 3
			} 
		division = { 
			id = { type = 23500 id = 104 } 
			name = "5a Divisione di trasporti" 
			type = transport 
			model = 1 
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 152 } 
		name = "Dipartimento Ionio e Basso Adriatico" 
		location = 422 
		base = 422 
		division = { 
			id = { type = 23500 id = 86 } 
			name = "RN Taranto" 
			type = light_cruiser 
			model = 1 
			} 
		division = { 
			id = { type = 23500 id = 87 } 
			name = "RN Bari" 
			type = light_cruiser 
			model = 2 
			} 
		division = { 
			id = { type = 23500 id = 2269 } 
			name = "6a Divisione di torpediniere" 
			type = destroyer 
			model = 3
			} 
		division = { 
			id = { type = 23500 id = 2270 } 
			name = "2a Divisione di cacciatorpediniere" 
			type = destroyer 
			model = 3
			} 
		division = { 
			id = { type = 23500 id = 2272 } 
			name = "7a Divisione di torpediniere" 
			type = destroyer 
			model = 3
			} 
		division = { 
			id = { type = 23500 id = 232 } 
			name = "6a Divisione di trasporti" 
			type = transport 
			model = 1 
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 231 } 
		name = "Comando Navale Egeo" 
		location = 379 
		base = 379 
		division = { 
			id = { type = 23500 id = 159 } 
			name = "8a Divisione di torpediniere" 
			type = destroyer 
			model = 2 
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 111 } 
		name = "Comando Navale Libia" 
		location = 761 
		base = 761 
		division = { 
			id = { type = 23500 id = 85 } 
			name = "RN San Giorgio" 
			type = heavy_cruiser 
			model = 1 
			} 
		division = { 
			id = { type = 23500 id = 149 } 
			name = "11a Divisione di torpediniere" 
			type = destroyer 
			model = 2 
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 148 } 
		name = "Comando Navale Africa Orientale Italiana" 
		location = 815 
		base = 815 
		division = { 
			id = { type = 23500 id = 153 } 
			name = "3a Divisione cacciatorpediere" 
			type = destroyer 
			model = 3 
			} 
		division = { 
			id = { type = 23500 id = 140 } 
			name = "81a Divisione di sommergibili" 
			type = submarine 
			model = 3 
			} 
		division = { 
			id = { type = 23500 id = 122 } 
			name = "7a Divisione di trasporti" 
			type = transport 
			model = 1 
			} 
		} 


      ### Italian Air OOB ###
       airunit =
       {  location = 407 #Milano
         base     = 407
         id       = {  type = 23500 id = 155  }
         name     = "1a Zona Aerea Territoriale"
         Division =
         {  id       = {  type = 23500 id = 156  }
           name     = "2a Divisione Aerea 'Borea'"
           strength = 95
           type     = interceptor
           model    = 6
          }
         Division =
         {  id       = {  type = 23500 id = 161  }
           name     = "6a Divisione Aerea 'Falco'"
           strength = 95
           type     = interceptor
           model    = 6
          }
         Division =
         {  id       = {  type = 23500 id = 158  }
           name     = "4a Divisione Aerea 'Drago'"
           strength = 40
           type     = tactical_bomber
           model    = 4
          }
        }
       airunit =
       {  location = 430 #Palermo
         base     = 430
         id       = {  type = 23500 id = 157  }
         name     = "2a Zona Aerea Territoriale"
         Division =
         {  id       = {  type = 23500 id = 165  }
           name     = "1a Divisione Aerea 'Aquila'"
           strength = 95
           type     = interceptor
           model    = 6
          }
         Division =
         {  id       = {  type = 23500 id = 163  }
           name     = "3a Divisione Aerea 'Centauro'"
           strength = 95
           type     = naval_bomber
           model    = 1
          }
        }
       airunit =
       {  location = 419 #Roma
         base     = 419
         id       = {  type = 23500 id = 160  }
         name     = "3a Zona Aerea Territoriale"
         Division =
      {  id       = {  type = 23500 id = 177  }  
           name     = "5a Divisione Aerea 'Eolo'"
           strength = 100
           type     = interceptor
           model    = 6
          }
        }


	division_development = { 
		id    = { type = 23500 id = 1001 } 
		name  = "RN Bolzano" 
		type  = heavy_cruiser 
		model = 3 
		cost = 0.3
		date  = { year = 1933 month = august day = 19 }
		new_model = no
		extra1 = floatplane
		brigade_model1 = 4
	}
	division_development = { 
		id    = { type = 23500 id = 250 } 
		name  = "RN Raimondo Montecuccoli" 
		type  = light_cruiser 
		model = 4 
		cost = 0.2
		date  = { year = 1935 month = june day = 16 }
		new_model = no
		extra1 = floatplane
		brigade_model1 = 3
	}
	division_development = { 
		id    = { type = 23500 id = 249 } 
		name  = "RN Emanuele Filiberto Duca d'Aosta" 
		type  = light_cruiser 
		model = 4
		cost = 0.2
		date  = { year = 1935 month = july day = 13 }
		new_model = no
		extra1 = floatplane
		brigade_model1 = 3
		extra2 = naval_improved_hull_s
		brigade_model2 = 0
	}	
	division_development = { 
		id    = { type = 23500 id = 248 } 
		name  = "RN Muzio Attendolo" 
		type  = light_cruiser 
		model = 4 
		cost = 0.2
		date  = { year = 1935 month = august day = 7 }
		new_model = no
		extra1 = floatplane
		brigade_model1 = 3
	}	
	division_development = { 
		id    = { type = 23500 id = 1002 } 
		name  = "RN Armando Diaz" 
		type  = light_cruiser 
		model = 3
		cost = 0.1		
		date  = { year = 1933 month = april day = 29 }
		new_model = no
		extra1 = floatplane
		brigade_model1 = 3
	}	
	division_development = { 
		id    = { type = 23500 id = 1003 } 
		name  = "RN Luigi Cadorna" 
		type  = light_cruiser 
		model = 3 
		cost = 0.1		
		date  = { year = 1933 month = august day = 11 }
		new_model = no
		extra1 = floatplane
		brigade_model1 = 3
	}	
	division_development = { 
		id = { type = 23500 id = 215 } 
		name = "10a Divisione di cacciatorpediniere" 
		type = destroyer 
		model = 4 
		cost  = 0.1
		date  = { year = 1934 month = september day = 2 }
		new_model = no
	} 
	division_development = { 
		id    = { type = 23500 id = 234 } 
		name  = "51a Divisione di sommergibili" 
		type  = submarine 
		model = 3 
		cost  = 0.1
		date  = { year = 1933 month = march day = 16 }
		new_model = no
	} 
	division_development = { 
		id    = { type = 23500 id = 1004 } 
		name  = "21a Divisione di sommergibili" 
		type  = submarine 
		model = 3 
		cost  = 0.1
		date  = { year = 1933 month = october day = 2 }
		new_model = no
	} 
	division_development = { 
		id    = { type = 23500 id = 1005 } 
		name  = "71a Divisione di sommergibili" 
		type  = submarine 
		model = 3 
		cost  = 0.1
		date  = { year = 1934 month = august day = 1 }
		new_model = no
	} 
	division_development = { 
		id    = { type = 23500 id = 1006 } 
		name  = "61a Divisione di sommergibili" 
		type  = submarine 
		model = 3 
		cost  = 0.1
		date  = { year = 1935 month = september day = 20 }
		new_model = no
	} 
	division_development = { 
		id    = { type = 23500 id = 1007 } 
		name  = "11a Divisione di sommergibili" 
		type  = submarine 
		model = 4 
		cost  = 0.1
		date  = { year = 1935 month = october day = 16 }
		new_model = no
	} 
landdivision = { dormant = yes id = { type = 23500 id = 1008 }  name = "133a Divisione 'Littorio'"  type = light_armor  model = 0  strength = 10 }
landdivision = { dormant = yes id = { type = 23500 id = 1009 }  name = "133a Divisione 'Littorio'"  type = motorized  model = 0  strength = 85 }
         
   landunit = 
   {  id       = {  type = 23500 id =  1010 } 
     name     = "Mussolini and Staff" 
     location = 419 #Rome
     Division =
     { id       = { type = 23500 id = 1011 } 
       name     = "Mussolini and Staff" 
       type     = d_10
       model    = 0
       experience = 100
       locked   = yes 
      }
   }
landdivision = 
     {   dormant = yes 
         id       = {  type = 23500 id = 1012  } 
        name     = "Divisione 'Benghazi'" 
        type     = garrison 
	model    = 3
        locked   = yes
      } 
 landdivision = 
     {   dormant = yes 
         id       = {  type = 23500 id = 1013  } 
        name     = "Divisione 'Tripoli'" 
        type     = garrison 
	model    = 3
        locked   = yes 
      } 
 landdivision = 
     {   dormant = yes 
         id       = {  type = 23500 id = 1014  } 
        name     = "Divisione 'Tobruk'" 
        type     = garrison 
	model    = 3
        locked   = yes
      } 
}
