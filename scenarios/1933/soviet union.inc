# Ministres OK
 
 ############################## 
 # Country definition for SOV # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = SOV 
	regular_id             = RUS
	ai			= "sov_1936.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes SOVBuildLand = yes } }	
	intrinsic_gov_type     = leninist 
	capital                = 572 
	# Resource Reserves 
	energy                 = 12000
	metal                  = 6000
	rare_materials         = 3000
	oil                    = 500 
	supplies               = 200 
	money                  = 30 
	manpower               = 2372 
	dissent                = 35 # Ukrainian famine
	transports             = 230 
	escorts                = 20 
   
   diplomacy = 
   {  relation = 
     {  tag        = AFG 
       value      = 1 
      } 
     relation = {  tag = BRA value = -50  } 
     relation = 
     {  tag        = BUL 
       value      = 15 
      } 
     relation = {  tag = CHC value = 100  } 
     relation = {  tag = CZE value = 1  } 
     relation = {  tag = ENG value = -25  } 
     relation = 
     {  tag        = EST 
       value      = -30 
      } 
     relation = {  tag = FIN value = 1  } 
     relation = 
     {  tag        = FRA 
       value      = 1
      } 
     relation = {  tag = GRE value = 15  } 
     relation = {  tag = IRE value = 1  } 
     relation = {  tag = JAP value = -10  } 
     relation = 
     {  tag        = LAT 
       value      = -30 
      } 
     relation = 
     {  tag        = LIT 
       value      = 25 
      } 
     relation = {  tag = MON value = 150 access = yes  } 
     relation = 
     {  tag        = PER 
       value      = -20 
	    guaranteed = {  day = 29 month = december year = 1932  } 
      } 
     relation = {  tag = POL value = -50  } 
     relation = {  tag = ROM value = 1  } 
     relation = {  tag = SAU value = 1  } 
     relation = {  tag = SIK value = 125  } 
     relation = {  tag = SPR value = -10  } 
     relation = 
     {  tag        = TAN 
       value      = 200 
       access     = yes 
      } 
     relation = 
     {  tag        = TUR 
       value      = 1 
      } 
     relation = {  tag = URU value = -100  } 
     relation = 
     {  tag        = SCH 
       value      = 1 
      } 
    } 
   SpyInfo                = {  country = "SOV" NumberOfSpies = 10  } 
    
   nationalprovinces      = {  498 499 500 501 502 503 504 505 506 507 534 535 536 537 538 539 540 541 542 543 544 545 546 547 548 549 550 551 552 553 554 555 556 557 558 559 560 561 562 563 564 565 566 567 568 569 570 571 572 573 574 575 576 577 578 579 580 581 582 583 584 585 586 587 588 589 590 591 592 593 594 595 596 597 598 599 600 601 602 603 604 605 606 607 608 609 610 611 612 613 614 615 616 617 618 619 620 621 622 623 624 625 626 627 628 629 630 631 632 633 634 635 636 637 638 639 640 641 642 643 644 645 646 647 648 649 650 651 652 653 654 655 656 657 658 659 660 661 662 663 664 665 666 667 668 669 670 671 672 673 674 675 676 677 678 679 680 681 682 683 684 685 686 687 688 689 690 691 692 693 694 695 696 697 698 699 700 701 702 703 704 705 706 707 708 709 710 711 712 713 714 1069 1070 1097 1098 1099 1100 1101 1102 1103 1104 1105 1106 1107 1108 1109 1110 1111 1112 1113 1114 1115 1116 1117 1118 1126 1127 1128 1129 1130 1131 1132 1133 1134 1135 1136 1137 1138 1139 1140 1141 1142 1143 1144 1145 1146 1147 1148 1149 1150 1151 1152 1153 1154 1155 1156 1157 1158 1161 1162 1163 1164 1165 1166 1167 1168 1169 1170 1171 1174 1175 1176 1177 1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1192 1193 1194 1195 1196 1541 1542 
                             } 
   ownedprovinces         = {  498 499 500 501 502 503 504 505 506 507 534 535 536 537 538 539 540 541 542 543 544 545 546 547 548 549 550 551 552 553 554 555 556 557 558 559 560 561 562 563 564 565 566 567 568 569 570 571 572 573 574 575 576 577 578 579 580 581 582 583 584 585 586 587 588 589 590 591 592 593 594 595 596 597 598 599 600 601 602 603 604 605 606 607 608 609 610 611 612 613 614 615 616 617 618 619 620 621 622 623 624 625 626 627 628 629 630 631 632 633 634 635 636 637 638 639 640 641 642 643 644 645 646 647 648 649 650 651 652 653 654 655 656 657 658 659 660 661 662 663 664 665 666 667 668 669 670 671 672 673 674 675 676 677 678 679 680 681 682 683 684 685 686 687 688 689 690 691 692 693 694 695 696 697 698 699 700 701 702 703 704 705 706 707 708 709 710 711 712 713 714 1069 1070 1097 1098 1099 1100 1101 1102 1103 1104 1105 1106 1107 1108 1109 1110 1111 1112 1113 1114 1115 1116 1117 1118 1126 1127 1128 1129 1130 1131 1132 1133 1134 1135 1136 1137 1138 1139 1140 1141 1142 1143 1144 1145 1146 1147 1148 1149 1150 1151 1152 1153 1154 1155 1156 1157 1158 1161 1162 1163 1164 1165 1166 1167 1168 1169 1170 1171 1174 1175 1176 1177 1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1192 1193 1194 1195 1196 1541 
                             } 
   controlledprovinces    = {  498 499 500 501 502 503 504 505 506 507 534 535 536 537 538 539 540 541 542 543 544 545 546 547 548 549 550 551 552 553 554 555 556 557 558 559 560 561 562 563 564 565 566 567 568 569 570 571 572 573 574 575 576 577 578 579 580 581 582 583 584 585 586 587 588 589 590 591 592 593 594 595 596 597 598 599 600 601 602 603 604 605 606 607 608 609 610 611 612 613 614 615 616 617 618 619 620 621 622 623 624 625 626 627 628 629 630 631 632 633 634 635 636 637 638 639 640 641 642 643 644 645 646 647 648 649 650 651 652 653 654 655 656 657 658 659 660 661 662 663 664 665 666 667 668 669 670 671 672 673 674 675 676 677 678 679 680 681 682 683 684 685 686 687 688 689 690 691 692 693 694 695 696 697 698 699 700 701 702 703 704 705 706 707 708 709 710 711 712 713 714 1069 1070 1097 1098 1099 1100 1101 1102 1103 1104 1105 1106 1107 1108 1109 1110 1111 1112 1113 1114 1115 1116 1117 1118 1126 1127 1128 1129 1130 1131 1132 1133 1134 1135 1136 1137 1138 1139 1140 1141 1142 1143 1144 1145 1146 1147 1148 1149 1150 1151 1152 1153 1154 1155 1156 1157 1158 1161 1162 1163 1164 1165 1166 1167 1168 1169 1170 1171 1174 1175 1176 1177 1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1192 1193 1194 1195 1196 1541 
                             } 

	# USSR Techs 1933 
	# ################ 
	techapps               = {
	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080 1090
	# Mountain Division 
	1160 1170 1180 1190 1200 1210 1220 1230 1240
	# CAVALRY 
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370
	# Motorized
	1396
	#Engineers
	1830 1840 1850
	#Interbellum 1930 Supply 
	1910 1920 1930 1940 1950 1960 1970
	
	# Tank 
	7600 7610 2620 2010 2630 2640 2646
	# Armoured Car  
	2860 2870 2880 2020
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930
	# Static Anti-Air Artillery 
	2800 2450 21180
	
	# Destroyer 
	3010 3020 3030 3040 3050 
	# Light Cruiser 
	3110 3120 3130 3140 3150 
	# Heavy Cruiser 
	3210 3220 3230 3240 3250 
	# Battlecruiser  
	3310 3320 3330 
	# Battleship 
	3410 3420 3430 3440 3450 3456 3460
	# Submarine 
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
	4300 4310 4320 4330 4340
	#ww1 strategic bomber
	4800 4810 4820
	#ww1 navalbomber
	4700 4710
	# Transports
	4290
	#SEAPLANES
    4740 4750 4760
	
	#Modern Agriculture  
	5700 5710
	#Computers & cryptografi
	5310 54010 54020 54030 5316 5326
	#manufactoring
	5810 5820
	#Construction Engineering 
	5800 5080
	#Basic Oil Refining 
	##5190
	#Medicine
	5600 5610 5620 
	#Exp. Rocket
	5560

	#Great War Hospital System 
	14000

	# Great War Land Doctrines (central powers)
	6500 6510 6530 6550 6590 6600 6620 6650 6670 6610 6680 6690 6700 6710 6910
	#Land Doctrines
	6570 6900

	# Naval Doctrines 
	# Theory
	8070 8010 8020 8030 8040 8050 8060 8080
	# Amphib
	82300
	# Logistics
	82500
	# Naval Interdiction
	8500 8510 8550 8560 8600 8610
	# Indirect Approach
	81300 81310 81320 81330 81340
	# Naval Supremacy
	8100 8110 8120 8150 8160 8200
	
	#Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470
	#Carrier Pigeons
	30020 30030
}
 
inventions = { 3000027 }
   blueprints             = {   } 
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 1 
     political_left    = 10 
     freedom           = 1 
     free_market       = 1 
     professional_army = 6 
     defense_lobby     = 6 
     interventionism   = 2 
    } 
	peacetime_ic_mod       = 0.70
	wartime_ic_mod       = 0.75
	ic_modifier				= 0.95 # 
   headofstate            = {  type = 9 id = 30002  } # Stalin 
   headofgovernment       = {  type = 9 id = 30016  } # Molotov 
   foreignminister        = {  type = 9 id = 30003  } 
   armamentminister       = {  type = 9 id = 30114  } 
   ministerofsecurity     = {  type = 9 id = 30116  } 
   ministerofintelligence = {  type = 9 id = 30006  } 
   chiefofstaff           = {  type = 9 id = 30154  } # Voroshilov
   chiefofarmy            = {  type = 9 id = 30008  } # Voroshilov
   chiefofnavy            = {  type = 9 id = 30009  } 
   chiefofair             = {  type = 9 id = 30010  } 
#1936



# Moscow okrug - Belov I.P.
# Leningrad okrug - Shaposhnikov B.
# Kiev okrug - Yakir
# Kharkov okrug - Dubovoi I.N.
# Belorusskij okrug - Uborevich
# Severokavkazskij - Kashirin N.D.
# Privolzhskij - Dybenko P.E.
# Uralskij - Garkavyj I.I.
# Sredneaziatskij - Velikanov M.D.
# Sibirskij - Kujbyshev N.V.
# Zakavkazskij Voennyj Okrug - Levandovsky
# Zabajkalsky voennyj okrug - Gryaznov I.K.
# Osobaya Krasnoznamennaja Dalnevostochnaja Armiya - Blukher


   landunit = 
   {  id       = {  type = 10848 id =  1 } 
     name     = "Raboche-Krest'yanskaya Krasnaya Armyia" 
     location = 572 #Moscow 
     leader = 30569 #Voroshilov
     Division = 
     {  id       = {  type = 10848 id = 2  } 
       name     = "Generalnyi Shtab RKKA" 
       strength = 30
       type     = HQ
	   model    = 2
	   extra    = anti_air
	   brigade_model    = 1	
	   } 
 } 
landunit = { 
	id = { type = 10848 id = 5 }
	name = "Voiska NKVD" 
	location = 572 # Moscow 	

	division = { 
	id = { type = 10848 id = 6 } 
		name = "1-ya Konvoynaya Diviziya NKVD" 
		strength = 70 
		type = garrison 
		model = 3
			} 
	division = { 
	id = { type = 10848 id = 7 } 
		name = "Diviziya o. n. Dzerzhinskogo" 
		strength = 75 
		type = motorized 
		model = 0 
		} 
	}

   landunit = 
   {  id       = {  type = 10848 id =  8 } 
     name     = "Leningradskyi Voennyi Okrug" 
     location = 553 #Leningrad 
     leader = 30040 #Belov I.P.
     Division = 
     {  id       = {  type = 10848 id = 9  } 
       name     = "Leningradskyi Voennyi Okrug" 
       strength = 30 
       type     = HQ
	   model    = 2
	   extra    = anti_air
	   brigade_model = 1
	   } 
 } 
   landunit = 
   {  id       = {  type = 10848 id =  12 } 
     name     = "1-i Strelkovyi Korpus" 
     location = 553 #Leningrad 
     leader = 30792 #Kurdyumov
     Division = 
     {  id       = {  type = 10848 id = 13  } 
       name     = "16-ya Ulianovskaya Strelkovaya Diviziya" 
       strength = 25 
       type     = infantry 
	   model    = 7
	   extra    = engineer
	   brigade_model = 2
      }
     Division = 
     {  id       = {  type = 10848 id = 14  } 
       name     = "18-ya Yaroslavskaya Strelkovaya Diviziya" 
       strength = 35 
       type     = infantry 
	   model    = 8
	   extra    = artillery
	   brigade_model = 4
      }
     Division = 
     {  id       = {  type = 10848 id = 15  } 
       name     = "20-ya Strelkovaya Diviziya" 
       strength = 25 
       type     = infantry 
	   model    = 7
      }
 } 
   landunit = 
   {  id       = {  type = 10848 id =  16 } 
     name     = "19-i Strelkovyi Korpus" 
     location = 550 #Kingisepp 
     leader = 30726 #Starikov
     Division = 
     {  id       = {  type = 10848 id = 18  } 
       name     = "56-ya Moskovskaya Strelkovaya Diviziya" 
       strength = 25 
       type     = infantry 
	   model    = 7
	   extra    = cavalry_brigade
	   brigade_model = 7
      }
 } 
	landunit = 
   {  id       = {  type = 10848 id = 19  } 
     name     = "5-i Kavaleriiski Korpus" 
     location = 566 # Pskov
     leader = 30473 #Selivanov
      Division = 
     {  id       = {  type = 10848 id = 20  } 
       name     = "3-ya Bessarabskaya Kavaleriiskaya Diviziya" 
       strength = 75 
       type     = cavalry
	   model    = 9
	extra = light_armor_brigade
	brigade_model = 2
      } 
      Division = 
     {  id       = {  type = 10848 id = 21  } 
       name     = "14-ya Maykopskaya Kavaleriiskaya Diviziya" 
       strength = 75 
       type     = cavalry
	   model    = 9
	extra = light_armor_brigade
	brigade_model = 2
      } 
 }
   landunit = 
   {  id       = {  type = 10848 id =  23 } 
     name     = "33-i Strelkovyi Korpus" 
     location = 550 # Kingisepp     	
     Division = 
     {  id       = {  type = 10848 id = 25  } 
       name     = "158-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 5
      }
 } 
   landunit = 
   {  id       = {  type = 10848 id =  26 } 
     name     = "29-i Strelkovyi Korpus" 
     location = 553 #Leningrad 
     Division = 
     {  id       = {  type = 10848 id = 27  } 
       name     = "54-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 5
      }
     Division = 
     {  id       = {  type = 10848 id = 28  } 
       name     = "153-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 5
      }
 } 

   landunit = 
   {  id       = {  type = 10848 id = 29  } 
     name     = "Severnyi Voennyi Kommissariat" 
     location = 542 # Arkhangelsk
     Division = 
     {  id       = {  type = 10848 id =  30 } 
       name     = "10-ya Strelkovaya Diviziya" 
       strength = 15 
       type     = infantry 
	   model    = 6
      } 
      Division = 
     {  id       = {  type = 10848 id =  31 } 
       name     = "88-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
	} 

   landunit = 
   {  id       = {  type = 10848 id = 32  } 
     name     = "Uralskyi Voennyi Okrug" 
     location = 1151 # Sverdlovsk
     leader = 30793 #Garkavyi
     Division = 
     {  id       = {  type = 10848 id =  34 } 
       name     = "65-ya Strelkovaya Diviziya" 
       strength = 15 
       type     = infantry 
	   model    = 6
	extra = engineer
	brigade_model = 2
      } 
      Division = 
     {  id       = {  type = 10848 id =  35 } 
       name     = "82-ya Strelkovaya Diviziya" 
       strength = 15 
       type     = infantry 
	   model    = 6
      } 
     Division = 
     {  id       = {  type = 10848 id = 36  } 
       name     = "85-ya Strelkovaya Diviziya" 
       strength = 15 
       type     = infantry 
	   model    = 6
      } 
     Division = 
     {  id       = {  type = 10848 id = 38  } 
       name     = "110-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 5
      }
     Division = 
     {  id       = {  type = 10848 id = 40  } 
       name     = "86-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 5
      }
     Division = 
     {  id       = {  type = 10848 id = 41  } 
       name     = "87-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 4
      }
	} 

   landunit = 
   {  id       = {  type = 10848 id = 42  } 
     name     = "Belorusskyi Voennyi Okrug" 
     location = 599 # Minsk
     leader = 30547 #Uborevich
     Division = 
     {  id       = {  type = 10848 id = 43  } 
       name     = "Belorusskyi Voennyi Okrug" 
       strength = 30 
       type     = HQ
	   model    = 2
	extra = anti_air
	brigade_model = 1
	   } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 46  } 
     name     = "4-i Strelkovyi Korpus" 
     location = 599 # Minsk
     leader = 30098 #Egorov E.A.
     Division = 
     {  id       = {  type = 10848 id = 47  } 
       name     = "27-ya Omskaya Strelkovaya Diviziya" 
       strength = 25 
       type     = infantry 
	   model    = 7
      } 
      Division = 
     {  id       = {  type = 10848 id = 48  } 
       name     = "2-ya Belorusskaya Strelkovaya Diviziya" 
       strength = 40 
       type     = infantry 
	   model    = 8
	extra = artillery
	brigade_model = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 49  } 
       name     = "8-ya Minskaya Strelkovaya Diviziya" 
       strength = 25 
       type     = infantry 
	   model    = 7
	extra = engineer
	brigade_model = 2
      } 
	} 	
    landunit = 
   {  id       = {  type = 10848 id = 50  } 
     name     = "5-i Strelkovyi Korpus" 
     location = 598 # Rechytsa
      Division = 
     {  id       = {  type = 10848 id = 51  } 
       name     = "4-ya Smolenskaya Strelkovaya Diviziya" 
       strength = 40 
       type     = infantry 
	   model    = 8
	extra = artillery
	brigade_model = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 52  } 
       name     = "37-ya Strelkovaya Diviziya" 
       strength = 25 
       type     = infantry 
	   model    = 7
      } 
     Division = 
     {  id       = {  type = 10848 id = 53  } 
       name     = "43-ya Strelkovaya Diviziya" 
       strength = 25 
       type     = infantry 
	   model    = 7
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 54  } 
     name     = "11-i Strelkovyi Korpus" 
     location = 590 # Vitebsk
      Division = 
     {  id       = {  type = 10848 id = 55  } 
       name     = "5-ya Vitebskaya Strelkovaya Diviziya" 
       strength = 40 
       type     = infantry 
	   model    = 8
	extra = artillery
	brigade_model = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 56  } 
       name     = "29-ya Finskaya Strelkovaya Diviziya" 
       strength = 15 
       type     = infantry 
	   model    = 6
      } 
     Division = 
     {  id       = {  type = 10848 id = 57  } 
       name     = "64-ya Strelkovaya Diviziya" 
       strength = 15 
       type     = infantry 
	   model    = 6
      } 
	} 	
    landunit = 
   {  id       = {  type = 10848 id = 58  } 
     name     = "16-i Strelkovyi Korpus" 
     location = 600 # Mogilev
     Division = 
     {  id       = {  type = 10848 id = 59  } 
       name     = "33-ya Samarskaya Strelkovaya Diviziya" 
       strength = 15 
       type     = infantry 
	   model    = 6
	extra = artillery
	brigade_model = 2
      } 
     Division = 
     {  id       = {  type = 10848 id = 60  } 
       name     = "48-ya Strelkovaya Diviziya" 
       strength = 15 
       type     = infantry 
	   model    = 6
      } 
     Division = 
     {  id       = {  type = 10848 id = 61  } 
       name     = "81-ya Kaluzhskaya Strelkovaya Diviziya" 
       strength = 15 
       type     = infantry 
	   model    = 6
      } 
	} 
		landunit = 
   {  id       = {  type = 10848 id = 62  } 
     name     = "3-i Kavaleriiski Korpus" 
     location = 599 # Minsk
      Division = 
     {  id       = {  type = 10848 id = 63  } 
       name     = "7-ya Samarskaya Kavaleriiskaya Diviziya" 
       strength = 75 
       type     = cavalry
	   model    = 9
	extra = light_armor_brigade
	brigade_model = 2
      } 
      Division = 
     {  id       = {  type = 10848 id = 64  } 
       name     = "11-ya Orenburgskaya Kavaleriiskaya Diviziya" 
       strength = 75 
       type     = cavalry
	   model    = 9
	extra = light_armor_brigade
	brigade_model = 2
      } 
 }		
landunit = 
   {  id       = {  type = 10848 id = 65  } 
     name     = "6-i Kavaleriiski Korpus" 
     location = 609 # Korosten
      Division = 
     {  id       = {  type = 10848 id = 66  } 
       name     = "6-ya Changarskaya Kavaleriiskaya Diviziya" 
       strength = 75 
       type     = cavalry
	   model    = 9
	extra = light_armor_brigade
	brigade_model = 2
      } 
 }		
landunit = 
   {  id       = {  type = 10848 id = 67  } 
     name     = "7-i Kavaleriiski Korpus" 
     location = 596 # Slutsk
      Division = 
     {  id       = {  type = 10848 id = 68  } 
       name     = "4-ya Leningradskaya Kavaleriiskaya Diviziya" 
       strength = 75 
       type     = cavalry
	   model    = 9
	extra = light_armor_brigade
	brigade_model = 2
      } 
 }
    landunit = 
   {  id       = {  type = 10848 id =  69 } 
     name     = "22-i Strelkovyi Korpus" 
     location = 599 # Minsk
     Division = 
     {  id       = {  type = 10848 id = 70  } 
       name     = "63-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 71  } 
       name     = "67-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
	} 	
    landunit = 
   {  id       = {  type = 10848 id =  72 } 
     name     = "23-i Strelkovyi Korpus" 
     location = 598 # Rechytsa
     Division = 
     {  id       = {  type = 10848 id = 73  } 
       name     = "76-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 74  } 
       name     = "155-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
	} 	
    landunit = 
   {  id       = {  type = 10848 id =  75 } 
     name     = "24-i Strelkovyi Korpus" 
     location = 590 # Vitebsk
     Division = 
     {  id       = {  type = 10848 id = 76  } 
       name     = "150-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 77  } 
       name     = "145-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
	} 	
    landunit = 
   {  id       = {  type = 10848 id =  78 } 
     name     = "28-i Strelkovyi Korpus" 
     location = 600 # Mogilev
     Division = 
     {  id       = {  type = 10848 id = 79  } 
       name     = "62-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 80  } 
       name     = "66-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 81  } 
       name     = "120-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
	} 		
	
   landunit = 
   {  id       = {  type = 10848 id = 82 } 
     name     = "Moskovskyi Voennyi Okrug" 
     location = 572 #Moscow 
     leader = 30232 #Kork
     Division = 
     {  id       = {  type = 10848 id =  83 } 
       name     = "Moskovskyi Voennyi Okrug" 
       strength = 30 
       type     = HQ
	   model    = 2
		extra = anti_air
		brigade_model = 1   
	 } 
      Division = 
     {  id       = {  type = 10848 id = 86  } 
       name     = "5-i Mekhanizirovannyi Korpus" 
       strength = 100 
       type     = light_armor
	   model    = 0
	   extra    = armored_car
	   brigade_model    = 2	   
      } 
     Division = 
     {  id       = {  type = 10848 id = 87  } 
       name     = "Moskovskaya Proletarskaya Strelkovaya Diviziya" 
       strength = 35 
       type     = infantry 
	   model    = 8
	extra = cavalry_brigade
	brigade_model = 7
      } 
     Division = 
     {  id       = {  type = 10848 id = 88  } 
       name     = "126-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
  } 
    landunit = 
   {  id       = {  type = 10848 id =  89 } 
     name     = "2-i Territorialnyi Korpus" 
     location = 678 # Vladimir
      Division = 
     {  id       = {  type = 10848 id =  90 } 
       name     = "14-ya Strelkovaya Diviziya" 
       strength = 15 
       type     = infantry 
	   model    = 6
	   extra    = artillery
	   brigade_model    = 2
		} 
      Division = 
     {  id       = {  type = 10848 id =  91 } 
       name     = "49-ya Krasnozamennaya Strelkovaya Diviziya" 
       strength = 15 
       type     = infantry 
	   model    = 6
	   extra    = engineer
	   brigade_model    = 2	
		} 
     Division = 
     {  id       = {  type = 10848 id = 92  } 
       name     = "55-ya Kurskaya Strelkovaya Diviziya" 
       strength = 15 
       type     = infantry 
	   model    = 6
   
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id =  93 } 
     name     = "3-i Territorialnyi Korpus" 
     location = 584 # Tula
      Division = 
     {  id       = {  type = 10848 id =  94 } 
       name     = "6-ya Orlovskaya Strelkovaya Diviziya" 
       strength = 15 
       type     = infantry 
	   model    = 6
	   extra    = artillery
	   brigade_model    = 2
		} 
     Division = 
     {  id       = {  type = 10848 id =  96 } 
       name     = "84-ya Tulskaya Strelkovaya Diviziya" 
       strength = 15 
       type     = infantry 
	   model    = 6
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id =  97 } 
     name     = "10-i Territorialnyi Korpus" 
     location = 571 # Orekhovo
     Division = 
     {  id       = {  type = 10848 id =  98 } 
       name     = "17-ya Gorkovskaya Strelkovaya Diviziya" 
       strength = 15 
       type     = infantry 
	   model    = 6
	   extra    = artillery
	   brigade_model    = 2	
      } 
     Division = 
     {  id       = {  type = 10848 id = 99  } 
       name     = "19-ya Voronezhskaya Strelkovaya Diviziya" 
       strength = 15 
       type     = infantry 
	   model    = 6 
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 100  } 
     name     = "20-i Strelkovyi Korpus" 
     location = 678 # Vladimir
      Division = 
     {  id       = {  type = 10848 id = 101  } 
       name     = "68-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 102  } 
       name     = "113-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 103  } 
       name     = "142-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 104  } 
     name     = "21-i Strelkovyi Korpus" 
     location = 584 # Tula
      Division = 
     {  id       = {  type = 10848 id = 105  } 
       name     = "77-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 106  } 
       name     = "38-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 107  } 
     name     = "30-i Strelkovyi Korpus" 
     location = 571 # Orekhovo
      Division = 
     {  id       = {  type = 10848 id = 108  } 
       name     = "59-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 109  } 
       name     = "39-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 110  } 
     name     = "40-i Strelkovyi Korpus" 
     location = 571 # Orekhovo
     Division = 
     {  id       = {  type = 10848 id = 111  } 
       name     = "60-ya Strelkovaya Diviziya" 
       strength = 5
       type     = infantry 
	   model    = 4
      } 
      Division = 
     {  id       = {  type = 10848 id = 112  } 
       name     = "42-ya Strelkovaya Diviziya" 
       strength = 5
       type     = infantry 
	   model    = 4
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 113  } 
     name     = "41-i Strelkovyi Korpus" 
     location = 678 # Vladimir
     Division = 
     {  id       = {  type = 10848 id = 114  } 
       name     = "127-ya Strelkovaya Diviziya" 
       strength = 5
       type     = infantry 
	   model    = 4
      } 
	} 

   landunit = 
   {  id       = {  type = 10848 id = 115 } 
     name     = "Privolzhskyi Voennyi Okrug" 
     location = 672 # Kazan
     leader = 30111 #Fedko
      Division = 
     {  id       = {  type = 10848 id = 117  } 
       name     = "125-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 118  } 
       name     = "128-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 119  } 
       name     = "159-ya Strelkovaya Diviziya" 
       strength = 5
       type     = infantry 
	   model    = 4
      } 
      Division = 
     {  id       = {  type = 10848 id = 120  } 
       name     = "79-ya Strelkovaya Diviziya" 
       strength = 5
       type     = infantry 
	   model    = 4
      } 
  }
    landunit = 
   {  id       = {  type = 10848 id = 121  } 
     name     = "12-i Territorialnyi Korpus" 
     location = 672 # Kazan
     Division = 
     {  id       = {  type = 10848 id = 122  } 
       name     = "1-ya Strelkovaya Diviziya" 
       strength = 15 
       type     = infantry 
	   model    = 6
	   extra    = artillery
	   brigade_model    = 2		   
      } 
      Division = 
     {  id       = {  type = 10848 id = 123  } 
       name     = "31-ya Stalingradskaya Strelkovaya Diviziya" 
       strength = 15 
       type     = infantry 
	   model    = 6
		extra = engineer
		brigade_model = 2   
      } 
     Division = 
     {  id       = {  type = 10848 id = 124  } 
       name     = "53-ya Strelkovaya Diviziya" 
       strength = 15 
       type     = infantry 
	   model    = 6
		}
     Division = 
     {  id       = {  type = 10848 id = 125  } 
       name     = "61-ya Strelkovaya Diviziya" 
       strength = 15 
       type     = infantry 
	   model    = 6
		}
	} 
    landunit = 
   {  id       = {  type = 10848 id = 127  } 
     name     = "34-i Strelkovyi Korpus" 
     location = 672 # Kazan
     Division = 
     {  id       = {  type = 10848 id = 128  } 
       name     = "111-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 129  } 
       name     = "97-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 130  } 
     name     = "26-i Strelkovyi Korpus" 
     location = 672 # Kazan
     Division = 
     {  id       = {  type = 10848 id = 131  } 
       name     = "129-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 133  } 
     name     = "42-i Strelkovyi Korpus" 
     location = 672 # Kazan
     Division = 
     {  id       = {  type = 10848 id = 134  } 
       name     = "108-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 4
      } 
	} 

   landunit = 
   {  id       = {  type = 10848 id = 135 } 
     name     = "Kievskyi Voennyi Okrug" 
     location = 617 # Kiev 
     leader = 30572 #Yakir
     Division = 
     {  id       = {  type = 10848 id =  136 } 
       name     = "Kievskyi Voennyi Okrug" 
       strength = 30 
       type     = HQ
	   model    = 2
	extra = anti_air
	brigade_model = 1
	 } 
      Division = 
     {  id       = {  type = 10848 id = 140  } 
       name     = "45-i Mekhanizirovannyi Korpus" 
       strength = 100 
       type     = light_armor
	   model    = 0
	   extra    = armored_car
	   brigade_model    = 2	   
      } 
  } 
    landunit = 
   {  id       = {  type = 10848 id = 141  } 
     name     = "6-i Strelkovyi Korpus" 
     location = 617 # Kiev
     Division = 
     {  id       = {  type = 10848 id = 142  } 
       name     = "2-ya Kavkazskaya Strelkovaya Diviziya" 
       strength = 25 
       type     = infantry 
	   model    = 7
      } 
     Division = 
     {  id       = {  type = 10848 id = 143  } 
       name     = "24-ya Zheleznaya Strelkovaya Diviziya" 
       strength = 40 
       type     = infantry 
	   model    = 8
	   extra    = artillery
	   brigade_model    = 5		   
      } 
      Division = 
     {  id       = {  type = 10848 id = 144  } 
       name     = "46-ya Strelkovaya Diviziya" 
       strength = 25 
       type     = infantry 
	   model    = 7
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 145  } 
     name     = "8-i Strelkovyi Korpus" 
     location = 611 # Vinnitsa
     Division = 
     {  id       = {  type = 10848 id = 146  } 
       name     = "44-ya Kievskaya Strelkovaya Diviziya" 
       strength = 40 
       type     = infantry 
	   model    = 8
	   extra    = artillery
	   brigade_model    = 5		   
      } 
      Division = 
     {  id       = {  type = 10848 id = 147  } 
       name     = "51-ya Perekopskaya Strelkovaya Diviziya" 
       strength = 25 
       type     = infantry 
	   model    = 7
	   extra    = engineer
	   brigade_model    = 2	
      } 
      Division = 
     {  id       = {  type = 10848 id = 148  } 
       name     = "95-ya Strelkovaya Diviziya" 
       strength = 25 
       type     = infantry 
	   model    = 7
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 149  } 
     name     = "15-i Strelkovyi Korpus" 
     location = 614 # Proskurov
     Division = 
     {  id       = {  type = 10848 id = 150  } 
       name     = "2-ya Turkestanskaya Strelkovaya Diviziya" 
       strength = 15 
       type     = infantry 
	   model    = 6
	   extra    = cavalry_brigade
	   brigade_model    = 7	
		}
      Division = 
     {  id       = {  type = 10848 id = 151  } 
       name     = "99-ya Strelkovaya Diviziya" 
       strength = 25 
       type     = infantry 
	   model    = 7
	   extra    = artillery
	   brigade_model    = 3
      } 
     Division = 
     {  id       = {  type = 10848 id = 152  } 
       name     = "100-ya Strelkovaya Diviziya" 
       strength = 25 
       type     = infantry 
	   model    = 7
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 153  } 
     name     = "17-i Strelkovyi Korpus" 
     location = 621 # Tiraspol
     Division = 
     {  id       = {  type = 10848 id = 154  } 
       name     = "7-ya Chernigovskaya Strelkovaya Diviziya" 
       strength = 15 
       type     = infantry 
	   model    = 6
		}
     Division = 
     {  id       = {  type = 10848 id = 155  } 
       name     = "15-ya Sivashskaya Strelkovaya Diviziya" 
       strength = 15 
       type     = infantry 
	   model    = 6
		}
      Division = 
     {  id       = {  type = 10848 id = 156  } 
       name     = "96-ya Strelkovaya Diviziya" 
       strength = 25 
       type     = infantry 
	   model    = 7
	   extra    = artillery
	   brigade_model    = 3		
      } 
     Division = 
     {  id       = {  type = 10848 id = 157  } 
       name     = "58-ya Strelkovaya Diviziya" 
       strength = 15 
       type     = infantry 
	   model    = 6
		}
    } 
   landunit = 
   {  id       = {  type = 10848 id = 158  } 
     name     = "1-i Kavaleriiski Korpus" 
     location = 611 # Vinnitsa
     Division = 
     {  id       = {  type = 10848 id = 159  } 
       name     = "1-ya Lenina Kavaleriiskaya Diviziya" 
       strength = 75 
       type     = cavalry
	   model    = 9
	extra = light_armor_brigade
	brigade_model = 2
      } 
     Division = 
     {  id       = {  type = 10848 id = 160  } 
       name     = "2-ya Krasnogo Znameni Kavaleriiskaya Diviziya" 
       strength = 75 
       type     = cavalry
	   model    = 9
	extra = light_armor_brigade
	brigade_model = 2
      } 
  }
   landunit = 
   {  id       = {  type = 10848 id = 161  } 
     name     = "2-i Kavaleriiski Korpus" 
     location = 612 # Zhitomir
     Division = 
     {  id       = {  type = 10848 id = 162  } 
       name     = "5-ya Kavaleriiskaya Diviziya" 
       strength = 75 
       type     = cavalry
	   model    = 9
	extra = light_armor_brigade
	brigade_model = 2
      } 
     Division = 
     {  id       = {  type = 10848 id = 163  } 
       name     = "9-ya Krimskaya Kavaleriiskaya Diviziya" 
       strength = 75 
       type     = cavalry
	   model    = 9
	extra = light_armor_brigade
	brigade_model = 2
      } 
  }
    landunit = 
   {  id       = {  type = 10848 id = 164  } 
     name     = "35-i Strelkovyi Korpus" 
     location = 617 # Kiev
     Division = 
     {  id       = {  type = 10848 id = 165  } 
       name     = "159-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 166  } 
     name     = "36-i Strelkovyi Korpus" 
     location = 611 # Vinnitsa
      Division = 
     {  id       = {  type = 10848 id = 167  } 
       name     = "160-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 168  } 
       name     = "161-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 169  } 
     name     = "27-i Strelkovyi Korpus" 
     location = 614 # Proskurov
      Division = 
     {  id       = {  type = 10848 id = 170  } 
       name     = "89-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 171  } 
       name     = "101-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 172  } 
       name     = "130-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 173  } 
     name     = "37-i Strelkovyi Korpus" 
     location = 621 # Tiraspol
     Division = 
     {  id       = {  type = 10848 id = 174  } 
       name     = "131-ya Strelkovaya Diviziya" 
       strength = 5 
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 175  } 
       name     = "140-ya Strelkovaya Diviziya" 
       strength = 5
       type     = infantry 
	   model    = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 176  } 
       name     = "152-ya Strelkovaya Diviziya" 
       strength = 5
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 177  } 
       name     = "47-ya Strelkovaya Diviziya" 
       strength = 5
       type     = infantry 
	   model    = 5
      } 
	} 

   landunit = 
   {  id       = {  type = 10848 id = 178 } 
     name     = "Kharkovskyi Voennyi Okrug" 
     location = 636 #Kharkov 
     leader = 30781 #Dubovyi
      Division = 
     {  id       = {  type = 10848 id = 180  } 
       name     = "75-ya Strelkovaya Diviziya" 
       strength = 15
       type     = infantry 
	   model    = 6
	   extra    = engineer
	   brigade_model    = 2	
      } 
      Division = 
     {  id       = {  type = 10848 id = 181  } 
       name     = "151-ya Strelkovaya Diviziya" 
       strength = 5
       type     = infantry 
	   model    = 5
      } 
  }
    landunit = 
   {  id       = {  type = 10848 id = 182  } 
     name     = "7-i Territorialnyi Korpus" 
     location = 630 # Zaporozhie
     Division = 
     {  id       = {  type = 10848 id = 183  } 
       name     = "3-ya Krimskaya Strelkovaya Diviziya" 
       strength = 25
       type     = infantry 
	   model    = 7
      } 
      Division = 
     {  id       = {  type = 10848 id = 184  } 
       name     = "25-ya Chapaeva Strelkovaya Diviziya" 
       strength = 35 
       type     = infantry 
	   model    = 8
	extra = artillery
	brigade_model = 4
      } 
      Division = 
     {  id       = {  type = 10848 id = 185  } 
       name     = "41-ya Strelkovaya Diviziya" 
       strength = 15 
       type     = infantry 
	   model    = 6
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 186  } 
     name     = "14-i Territorialnyi Korpus" 
     location = 636 # Kharkov
      Division = 
     {  id       = {  type = 10848 id = 187  } 
       name     = "30-ya Irkutskaya Strelkovaya Diviziya" 
       strength = 15
       type     = infantry 
	   model    = 6
      } 
      Division = 
     {  id       = {  type = 10848 id = 188  } 
       name     = "80-ya Strelkovaya Diviziya" 
       strength = 15
       type     = infantry 
	   model    = 6
      } 
      Division = 
     {  id       = {  type = 10848 id = 189  } 
       name     = "23-ya Kharkovskaya Strelkovaya Diviziya" 
       strength = 15
       type     = infantry 
	   model    = 6
	extra = artillery
	brigade_model = 2
      } 
	} 
    landunit = 
   {  id       = {  type = 10848 id = 190  } 
     name     = "25-i Strelkovyi Korpus" 
     location = 636 # Kharkov
     Division = 
     {  id       = {  type = 10848 id = 191  } 
       name     = "72-ya Strelkovaya Diviziya" 
       strength = 5
       type     = infantry 
	   model    = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 192  } 
       name     = "132-ya Strelkovaya Diviziya" 
       strength = 5
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 193  } 
       name     = "83-ya Strelkovaya Diviziya" 
       strength = 5
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 194  } 
       name     = "141-ya Strelkovaya Diviziya" 
       strength = 5
       type     = infantry 
	   model    = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 195  } 
       name     = "69-ya Strelkovaya Diviziya" 
       strength = 5
       type     = infantry 
	   model    = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 196  } 
       name     = "156-ya Strelkovaya Diviziya" 
       strength = 5
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 197  } 
       name     = "134-ya Strelkovaya Diviziya" 
       strength = 5
       type     = infantry 
	   model    = 4
      } 
      Division = 
     {  id       = {  type = 10848 id = 198  } 
       name     = "139-ya Strelkovaya Diviziya" 
       strength = 5
       type     = infantry 
	   model    = 4
      } 
	} 

   landunit = 
   {  id       = {  type = 10848 id = 199 } 
     name     = "Severokavkazskyi Voennyi Okrug" 
     location =  644 # Rostov
     leader = 30719 #Kashirin  
      Division = 
     {  id       = {  type = 10848 id =  201 } 
       name     = "10-ya Severokavkazskaya Kavaleriiskaya Diviziya" 
       strength = 75
       type     = cavalry
	   model    = 8
      } 
        Division = 
     {  id       = {  type = 10848 id = 202  } 
       name     = "28-ya Gorskaya Strelkovaya Diviziya" 
       strength = 35
       type     = bergsjaeger
	   model    = 8
	extra = cavalry_brigade
	brigade_model = 7
      } 
	  Division = 
     {  id       = {  type = 10848 id = 203  } 
       name     = "12-ya Kubanskaya Kavaleriiskaya Diviziya" 
       strength = 75
       type     = cavalry
	   model    = 8
      } 	 
    }
 landunit = 
   {  id       = {  type = 10848 id = 204  } 
     name     = "9-i Territorialnyi Korpus" 
     location =  691 # Krasnodar
     Division = 
     {  id       = {  type = 10848 id = 205  } 
       name     = "9-ya Krasnodarskaya Strelkovaya Diviziya" 
       strength = 15
       type     = infantry 
	   model    = 6
	extra = artillery
	brigade_model = 2
      } 
     Division = 
     {  id       = {  type = 10848 id = 206  } 
       name     = "13-ya Dagestanskaya Strelkovaya Diviziya" 
       strength = 15
       type     = infantry 
	   model    = 6
      } 
     Division = 
     {  id       = {  type = 10848 id = 207  } 
       name     = "22-ya Strelkovaya Diviziya" 
       strength = 15
       type     = infantry 
	   model    = 6
	extra = engineer
	brigade_model = 2
      } 
     Division = 
     {  id       = {  type = 10848 id = 208  } 
       name     = "74-ya Tamanskaya Strelkovaya Diviziya" 
       strength = 15
       type     = infantry 
	   model    = 6
      } 
	}
    landunit = 
   {  id       = {  type = 10848 id = 209  } 
     name     = "38-i Strelkovyi Korpus" 
     location = 691 # Kharkov
     Division = 
     {  id       = {  type = 10848 id = 210  } 
       name     = "103-ya Strelkovaya Diviziya" 
       strength = 5
       type     = infantry 
	   model    = 5
      } 
      Division = 
     {  id       = {  type = 10848 id = 211  } 
       name     = "118-ya Strelkovaya Diviziya" 
       strength = 5
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 212  } 
       name     = "119-ya Strelkovaya Diviziya" 
       strength = 5
       type     = infantry 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 10848 id = 213  } 
       name     = "157-ya Strelkovaya Diviziya" 
       strength = 5
       type     = infantry 
	   model    = 5
      } 
	} 

   landunit = 
   {  id       = {  type = 10848 id = 214 } 
     name     = "Zakavkazskyi Voennyi Okrug" 
     location =  709 # Tbilisi
     leader = 30283 #Levandovsky
        Division = 
     {  id       = {  type = 10848 id = 217  } 
       name     = "1-ya Gorskaya Kavkazskaya Strelkovaya Diviziya" 
       strength = 35
       type     = bergsjaeger
	   model    = 8
	extra = engineer
	brigade_model = 2
      } 
        Division = 
     {  id       = {  type = 10848 id = 218  } 
       name     = "3-ya Gorskaya Kavkazskaya Strelkovaya Diviziya" 
       strength = 35
       type     = bergsjaeger
	   model    = 8
	extra = artillery
	brigade_model = 4
      } 
        Division = 
     {  id       = {  type = 10848 id = 219  } 
       name     = "1-ya Gorskaya Gruzinskaya Strelkovaya Diviziya" 
       strength = 25
       type     = bergsjaeger
	   model    = 7
      } 
        Division = 
     {  id       = {  type = 10848 id = 220  } 
       name     = "Gorskaya Azerbaidzhanskaya Strelkovaya Diviziya" 
       strength = 25
       type     = bergsjaeger
	   model    = 7
      } 
        Division = 
     {  id       = {  type = 10848 id = 221  } 
       name     = "Gorskaya Armianskaya Strelkovaya Diviziya" 
       strength = 25
       type     = bergsjaeger
	   model    = 7
      } 
        Division = 
     {  id       = {  type = 10848 id = 222  } 
       name     = "2-ya Gruzinskaya Strelkovaya Diviziya" 
       strength = 15
       type     = infantry
	   model    = 6
      }  
    }

   landunit = 
   {  id       = {  type = 10848 id = 223 } 
     name     = "Sredneaziatskyi Voennyi Okrug" 
     location =  1103#
     leader = 30095 #Dybenko
     Division = 
     {  id       = {  type = 10848 id = 225  } 
       name     = "1-ya Gorskaya Turkestanskaya Strelkovaya Diviziya" 
       strength = 35
       type     = bergsjaeger
	   model    = 8
	extra = cavalry_brigade
	brigade_model = 7
      }	 
     Division = 
     {  id       = {  type = 10848 id = 226  } 
       name     = "3-ya Gorskaya Turkestanskaya Strelkovaya Diviziya" 
       strength = 35
       type     = bergsjaeger
	   model    = 8
	extra = cavalry_brigade
	brigade_model = 7
      }	 
 }

 landunit = 
   {  id       = {  type = 10848 id = 231  } 
     name     = "Sibirskyi Voennyi Okrug" 
     location =  1142 #  Novosibirsk
     leader = 30255 #Kuibyshev
     Division = 
     {  id       = {  type = 10848 id = 234  } 
       name     = "73-ya Strelkovaya Diviziya" 
       strength = 15
       type     = infantry 
	   model    = 6
	extra = artillery
	brigade_model = 2
     } 
     Division = 
     {  id       = {  type = 10848 id = 235  } 
       name     = "78-ya Strelkovaya Diviziya" 
       strength = 15
       type     = infantry 
	   model    = 6
	   extra    = engineer 
	   brigade_model    = 2
     } 
     Division = 
     {  id       = {  type = 10848 id = 236  } 
       name     = "94-ya Strelkovaya Diviziya" 
       strength = 15
       type     = infantry 
	   model    = 6
     } 
     Division = 
     {  id       = {  type = 10848 id = 238  } 
       name     = "109-ya Strelkovaya Diviziya" 
       strength = 5
       type     = infantry 
	   model    = 5
     } 
     Division = 
     {  id       = {  type = 10848 id = 239  } 
       name     = "107-ya Strelkovaya Diviziya" 
       strength = 5
       type     = infantry 
	   model    = 5
     } 
     Division = 
     {  id       = {  type = 10848 id = 240  } 
       name     = "91-ya Strelkovaya Diviziya" 
       strength = 5
       type     = infantry 
	   model    = 5
     } 
    }

 landunit = 
   {  id       = {  type = 10848 id = 241  } 
     name     = "Zabaikalskyi Voennyi Okrug" 
     location =  1169 #  Chita
     leader = 30272 #Lapin
     Division = 
     {  id       = {  type = 10848 id = 243 } 
       name     = "36-ya Strelkovaya Diviziya" 
       strength = 35
       type     = infantry 
	   model    = 8
	extra = cavalry_brigade
	brigade_model = 7
     } 
     Division = 
     {  id       = {  type = 10848 id = 244 } 
       name     = "57-ya Uralskaya Strelkovaya Diviziya" 
       strength = 35
       type     = infantry 
	   model    = 8
	extra = cavalry_brigade
	brigade_model = 7
     } 
      Division = # ZabVO
     {  id       = {  type = 10848 id = 246  } 
       name     = "15-ya Kubanskaya Kavaleriiskaya Diviziya" 
       strength = 75
       type     = cavalry
	   model    = 8
	extra = engineer
	brigade_model = 2
      } 
    }


    landunit = 
   {  id       = {  type = 10848 id = 250 } 
     name     = "Osobaya Krasnozamennaya Dalnevostochnaya Armyia" 
     location =  1190 #Khabarovsk
     leader = 30050 #Blucher
     Division = 
     {  id       = {  type = 10848 id = 251  } 
       name     = "Dalnevostochnyi Voennyi Okrug" 
       strength = 30
       type     = HQ
	   model    = 2
	   extra    = anti_air
	   brigade_model    = 1	
     } 
     Division = 
     {  id       = {  type = 10848 id = 252  } 
       name     = "12-ya 'SibRevKoma' Strelkovaya Diviziya" 
       strength = 35
       type     = infantry 
	   model    = 8
 	   extra    = artillery
	   brigade_model = 4
	  } 
     Division = 
     {  id       = {  type = 10848 id = 253  } 
       name     = "21-ya Permskaya Strelkovaya Diviziya" 
       strength = 35
       type     = infantry 
	   model    = 8
 	   extra    = engineer
	   brigade_model = 2
	  } 
     Division = 
     {  id       = {  type = 10848 id = 254  } 
       name     = "34-ya Srednevolzhskaya Strelkovaya Diviziya" 
       strength = 35
       type     = infantry 
	   model    = 8
	  } 
     Division = 
     {  id       = {  type = 10848 id = 255  } 
       name     = "35-ya Sibirskaya Strelkovaya Diviziya" 
       strength = 35
       type     = infantry 
	   model    = 8
	  } 
     Division = 
     {  id       = {  type = 10848 id = 256  } 
       name     = "40-ya Strelkovaya Diviziya" 
       strength = 35
       type     = infantry 
	   model    = 8
	  } 
      Division = 
     {  id       = {  type = 10848 id = 257  } 
       name     = "8-ya Dalnevostochnaya Kavaleriiskaya Diviziya" 
       strength = 75
       type     = cavalry
	   model    = 8
      } 
 }
    landunit = 
	{  id       = {  type = 10848 id = 258  } 
     name     = "18-i Strelkovyi Korpus" 
     location = 1176 # Blagoveschensk
      Division = 
     {  id       = {  type = 10848 id = 259  } 
       name     = "1-ya Tikhookeanskaya Strelkovaya Diviziya" 
       strength = 35
       type     = infantry 
	   model    = 8
 	   extra    = artillery
	   brigade_model = 4
	  } 
     Division = 
     {  id       = {  type = 10848 id = 260  } 
       name     = "26-ya Zlatoustovskaya Strelkovaya Diviziya" 
       strength = 35
       type     = infantry 
	   model    = 8
	  } 
     Division = 
     {  id       = {  type = 10848 id = 261  } 
       name     = "32-ya Saratovskaya Strelkovaya Diviziya" 
       strength = 35
       type     = infantry 
	   model    = 8
	  } 
	} 	
    landunit = 
    {  id       = {  type = 10848 id = 262  } 
     name     = "Osobyi Kolkhoznyi Korpus" 
     location = 1191# Vladivostok
     leader = 30794 #Kalmykov
      Division = 
     {  id       = {  type = 10848 id = 263  } 
       name     = "1-ya Kolkhoznaya Strelkovaya Diviziya" 
       strength = 35
       type     = infantry 
	   model    = 8
	  } 
     Division = 
     {  id       = {  type = 10848 id = 264  } 
       name     = "2-ya Kolkhoznaya Strelkovaya Diviziya" 
       strength = 35
       type     = infantry 
	   model    = 8
	  } 
     Division = 
     {  id       = {  type = 10848 id = 265  } 
       name     = "3-ya Kolkhoznaya Strelkovaya Diviziya" 
       strength = 65
       type     = infantry 
	   model    = 8
 	   extra    = artillery
	   brigade_model = 5
	  } 
      Division = 
     {  id       = {  type = 10848 id = 266  } 
       name     = "Kolkhoznaya Kavaleriiskaya Diviziya" 
       strength = 75
       type     = cavalry
	   model    = 8
      } 
	} 	


	
# Air OOB
#MVO
airunit = { 
	id = { type = 10848 id = 7000 } 
	name = "1 AviaKorpus" 
	location = 572 # Moscow 
	base = 572 # Moscow 

	division = { 
	id = { type = 10848 id = 7001 } 
		name = "403.IABR" 
		strength = 95 
		type = interceptor 
		model = 6 
			} 
	}
airunit = { 
	id = { type = 10848 id = 7003 } 
	name = "11 TBABR MVO" 
	location = 654 # Voronezh 
	base = 654 # Voronezh 
 
	division = { 
	id = { type = 10848 id = 7004 } 
		name = "11.TBABR" 
		strength = 70 
		type = strategic_bomber 
		model = 2 
			}
	}

#LVO
airunit = { 
	id = { type = 10848 id = 7005 } 
	name = "4 AviaKorpus" 
	location = 553 # Leningrad 
	base = 553 # Leningrad 
	division = { 
	id = { type = 10848 id = 7006 } 
		name = "1.TBABR" 
		strength = 55 
		type = tactical_bomber 
		model = 4 
			}
	}
airunit = { 
	id = { type = 10848 id = 7008 } 
	name = "LVO" 
	location = 553 # Leningrad 
	base = 553 # Leningrad 

	division = { 
	id = { type = 10848 id = 7009 } 
		name = "53.LBABR" 
		strength = 90 
		type = multi_role 
		model = 3 
			} 
	}	
airunit = { 
	id = { type = 10848 id = 7011 } 
	name = "3 ABRON LVO" 
	location = 553 # Leningrad 
	base = 553 # Leningrad 

	division = { 
	id = { type = 10848 id = 7012 } 
		name = "3.ABRON" 
		strength = 65 
		type = transport_plane 
		model = 0 
			} 
	}	
airunit = { 
	id = { type = 10848 id = 7013 } 
	name = "200 IABR LVO" 
	location = 566 # Pskov 
	base = 566 # Pskov 

	division = { 
	id = { type = 10848 id = 7014 } 
		name = "3.IABR" 
		strength = 90 
		type = interceptor 
		model = 6 
			} 
	}
	
#BVO
airunit = { 
	id = { type = 10848 id = 7015 } 
	name = "6 AviaKorpus" 
	location = 588 # Bryansk 
	base = 588 # Bryansk 
	division = { 
	id = { type = 10848 id = 7016 } 
		name = "5.TBABR" 
		strength = 55 
		type = tactical_bomber 
		model = 4 
			}
	division = { 
	id = { type = 10848 id = 7018 } 
		name = "402.IABR" 
		strength = 90 
		type = interceptor 
		model = 6 
			} 
		}
airunit = { 
	id = { type = 10848 id = 7019 } 
	name = "40 LBABR BVO" 
	location = 590 #  Vitebsk
	base = 590 # Vitebsk	
	division = { 
	id = { type = 10848 id = 7020 } 
		name = "40.LBABR" 
		strength = 90 
		type = multi_role 
		model = 3  
			}
		}	
#KVO
airunit = { 
	id = { type = 10848 id = 7035 } 
	name = "5 IABR KVO" 
	location = 617 # Kiev
	base = 617 # Kiev
	division = { 
	id = { type = 10848 id = 7036 } 
		name = "5.IABR" 
		strength = 90 
		type = interceptor 
		model = 6 
			} 
		}

#KhVO
airunit = { 
	id = { type = 10848 id = 7047 } 
	name = "16 LBABR KhVO" 
	location = 636 # Kharkov 
	base = 636 # Kharkov	
	division = { 
	id = { type = 10848 id = 7048 } 
		name = "16.LBABR" 
		strength = 85 
		type = multi_role 
		model = 3 
			}
		}

#ZabVO
airunit = { 
	id = { type = 10848 id = 7049 } 
	name = "5 AviaKorpus" 
	location = 1169 #  Chita
	base = 1169 # Chita	
	division = { 
	id = { type = 10848 id = 7050 } 
		name = "29.LBABR" 
		strength = 85 
		type = multi_role 
		model = 3 
			}
		}

#SKVO
airunit = { 
	id = { type = 10848 id = 7080 } 
	name = "55 LBABR SKVO" 
	location = 644 # Rostov-na-Donu
	base = 644 # Rostov-na-Donu	
	division = { 
	id = { type = 10848 id = 7081 } 
		name = "55.LBABR" 
		strength = 85 
		type = multi_role 
		model = 3  
			}
		}


	
	
# Naval OOB
	navalunit = { # Galler L.M.
		id = { type = 10848 id = 5100 } 
		name = "Krasnoznamenny Baltiisky Flot" 
		location = 553 
		base = 553 
		division = { 
			id = { type = 10848 id = 5101 } 
			name = "Marat" 
			type = battleship 
			model = 2 
			extra1 = floatplane
			brigade_model1 = 4
			extra2 = naval_fire_controll_l
			brigade_model2 = 0
			} 
		division = { 
			id = { type = 10848 id = 5102 } 
			name = "Frunze" 
			type = battleship 
			model = 2 
			strength = 10
			} 
		division = { 
			id = { type = 10848 id = 5103 } 
			name = "3 Diviziya Esmintsev" 
			type = destroyer 
			model = 3 
			} 
		division = { 
			id = { type = 10848 id = 5104 } 
			name = "2 Diviziya Esmintsev" 
			type = destroyer 
			model = 2 
			} 
		division = { 
			id = { type = 10848 id = 5105 } 
			name = "1 Diviziya Esmintsev" 
			type = destroyer 
			model = 1 
			} 
		division = { 
			id = { type = 10848 id = 5151 } 
			name = "1 Diviziya Podlodok" 
			type = submarine 
			model = 2 
			} 
		division = { 
			id = { type = 10848 id = 5152 } 
			name = "2 Diviziya Podlodok" 
			type = submarine 
			model = 3 
			} 
		}  	
		
	navalunit = { # Kozhanov I.K.
		id = { type = 10848 id = 5200 } 
		name = "Chernomorskiy Flot" 
		location = 641 
		base = 641 
		division = { 
			id = { type = 10848 id = 5201 } 
			name = "Parizhskaya Kommuna" 
			type = battleship 
			model = 2
			} 
		division = { 
			id = { type = 10848 id = 5202 } 
			name = "Krasni Kavkaz" 
			type = heavy_cruiser 
			model = 2 
			extra1 = floatplane
			brigade_model1 = 3
			} 
		division = { 
			id = { type = 10848 id = 5203 } 
			name = "Profintern" 
			type = light_cruiser 
			model = 2 
			extra1 = floatplane
			brigade_model1 = 3
			extra2 = naval_anti_air_s
			brigade_model2 = 0
			} 
		division = { 
			id = { type = 10848 id = 5204 } 
			name = "Komintern" 
			type = light_cruiser 
			model = 0 
			} 
		division = { 
			id = { type = 10848 id = 5205 } 
			name = "Chervonaya Ukraina" 
			type = light_cruiser 
			model = 2 
			extra1 = floatplane
			brigade_model1 = 3
			} 
		division = { 
			id = { type = 10848 id = 5206 } 
			name = "6 Diviziya Esmintsev" 
			type = destroyer 
			model = 2 
			} 
		division = { 
			id = { type = 10848 id = 5207 } 
			name = "7 Divizya Esmintsev" 
			type = destroyer 
			model = 3 
			}
		division = { 
			id = { type = 10848 id = 5301 } 
			name = "3 Divizya Podlodok" 
			type = submarine 
			model = 3 
			} 
		} 
       

	navalunit = { # Dushenov K.I.
		id = { type = 10848 id = 5400 } 
		name = "Severnyi Flot" 
		location = 535 
		base = 535 
		division = { 
			id = { type = 10848 id = 5401 } 
			name = "8 Diviziya Esmintsev" 
			type = destroyer 
			model = 2 
			} 
		division = { 
			id = { type = 10848 id = 5402 } 
			name = "4 Diviziya Podlodok" 
			type = submarine 
			model = 1 
			} 
		} 	

	navalunit = { # Viktorov M.V.
		id = { type = 10848 id = 5500 } 
		name = "Tikhookeanskiy Flot" 
		location = 1191 
		base = 1191 
		division = { 
			id = { type = 10848 id = 5501 } 
			name = "10. Divizion Esmintsev" 
			type = destroyer 
			model = 1 
			} 
		division = { 
			id = { type = 10848 id = 5502 } 
			name = "9. Divizion Esmintsev" 
			type = destroyer 
			model = 0 
			} 
		division = { 
			id = { type = 10848 id = 5551 } 
			name = "5 Diviziya Podlodok" 
			type = submarine 
			model = 1 
			} 
		division = { 
			id = { type = 10848 id = 5553 } 
			name = "1 Diviziya Vodnyi Transport" 
			type = transport 
			model = 1 
			} 
		} 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5554  } 
       name     = "Worker and Citizens" 
       type     = militia
       model    = 4
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5555  } 
       name     = "Worker and Citizens" 
       type     = militia
       model    = 4
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5556  } 
       name     = "1. Leningrad PMD" 
       type     = garrison
       model    = 5
       extra = artillery
       brigade_model = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5557  } 
       name     = "2. Leningrad PMD" 
       type     = garrison
       model    = 5
       extra = artillery
       brigade_model = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5558  } 
       name     = "3. Leningrad PMD" 
       type     = garrison
       model    = 5
       extra = artillery
       brigade_model = 9
      } 

      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5559  } 
       name     = "Smolninskaya PMD" 
       type     = garrison
       model    = 5
       extra = artillery
       brigade_model = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5560  } 
       name     = "Oktiabrskaya PM" 
       type     = garrison
       model    = 5
       extra = artillery
       brigade_model = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5561  } 
       name     = "2. Guards PMD" 
       type     = garrison
       model    = 5
       extra = artillery
       brigade_model = 9
       experience = 40     
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5562  } 
       name     = "3. Guards PMD" 
       type     = garrison
       model    = 5
       extra = artillery
       brigade_model = 9
       experience = 40     
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5563  } 
       name     = "4. Reserve PMD" 
       type     = garrison
       model    = 5
       extra = artillery
       brigade_model = 9
       experience = 20 
       strength = 30   
      } 

      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5564  } 
       name     = "Worker and Citizens" 
       type     = militia
       model    = 4
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5565 } 
       name     = "Worker and Citizens" 
       type     = militia
       model    = 4
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5566  } 
       name     = "Worker and Citizens" 
       type     = militia
       model    = 4
      }

      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5567  } 
       name     = "1. Stalingrad PMD" 
       type     = garrison
       model    = 5
       extra = artillery
       brigade_model = 9
       experience = 20     
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5568  } 
       name     = "2. Stalingrad PMD" 
       type     = garrison
       model    = 5
       extra = artillery
       brigade_model = 9
       experience = 20     
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5569  } 
       name     = "3. Stalingrad PMD" 
       type     = garrison
       model    = 5
       extra = artillery
       brigade_model = 9
       experience = 20     
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5570  } 
       name     = "Special Cossack cavalry PMD" 
       type     = cavalry
       model    = 10
       experience = 40     
      } 	
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5571  } 
       name     = "436-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5572  } 
       name     = "437-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5573  } 
       name     = "283-ya Garnizonnaya Diviziya" 
       type     = garrison
       model    = 5
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5574  } 
       name     = "438-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5575  } 
       name     = "439-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5576  } 
       name     = "284-ya Garnizonnaya Diviziya" 
       type     = garrison
       model    = 5
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5577  } 
       name     = "440-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5578  } 
       name     = "441-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5579  } 
       name     = "285-ya Garnizonnaya Diviziya" 
       type     = garrison
       model    = 5
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5580  } 
       name     = "442-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5581  } 
       name     = "443-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5582  } 
       name     = "286-ya Garnizonnaya Diviziya" 
       type     = garrison
       model    = 5
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5583  } 
       name     = "444-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5584  } 
       name     = "445-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5585  } 
       name     = "287-ya Garnizonnaya Diviziya" 
       type     = garrison
       model    = 5
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5586  } 
       name     = "446-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5587  } 
       name     = "447-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5588  } 
       name     = "288-ya Garnizonnaya Diviziya" 
       type     = garrison
       model    = 5
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5589  } 
       name     = "448-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5590  } 
       name     = "449-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5591  } 
       name     = "289-ya Garnizonnaya Diviziya" 
       type     = garrison
       model    = 5
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5592  } 
       name     = "450-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5593  } 
       name     = "451-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5594  } 
       name     = "290-ya Garnizonnaya Diviziya" 
       type     = garrison
       model    = 5
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5595  } 
       name     = "452-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5596  } 
       name     = "453-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5597  } 
       name     = "291-ya Garnizonnaya Diviziya" 
       type     = garrison
       model    = 5
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5598  } 
       name     = "454-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5599  } 
       name     = "455-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5600  } 
       name     = "292-ya Garnizonnaya Diviziya" 
       type     = garrison
       model    = 5
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5601  } 
       name     = "456-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5602  } 
       name     = "457-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5603  } 
       name     = "293-ya Garnizonnaya Diviziya" 
       type     = garrison
       model    = 5
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5604  } 
       name     = "458-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5605  } 
       name     = "459-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5606  } 
       name     = "294-ya Garnizonnaya Diviziya" 
       type     = garrison
       model    = 5
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5607  } 
       name     = "460-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5608  } 
       name     = "461-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5609  } 
       name     = "295-ya Garnizonnaya Diviziya" 
       type     = garrison
       model    = 5
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5610  } 
       name     = "462-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5611  } 
       name     = "463-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5612  } 
       name     = "296-ya Garnizonnaya Diviziya" 
       type     = garrison
       model    = 5
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5613  } 
       name     = "464-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5614  } 
       name     = "465-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5615  } 
       name     = "297-ya Garnizonnaya Diviziya" 
       type     = garrison
       model    = 5
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5616  } 
       name     = "466-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5617  } 
       name     = "467-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5618  } 
       name     = "298-ya Garnizonnaya Diviziya" 
       type     = garrison
       model    = 5
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5619  } 
       name     = "468-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5620  } 
       name     = "469-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5621  } 
       name     = "299-ya Garnizonnaya Diviziya" 
       type     = garrison
       model    = 5
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5622  } 
       name     = "470-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5623  } 
       name     = "471-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5624  } 
       name     = "300-ya Garnizonnaya Diviziya" 
       type     = garrison
       model    = 5
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5625  } 
       name     = "472-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5626  } 
       name     = "473-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5627  } 
       name     = "301-ya Garnizonnaya Diviziya" 
       type     = garrison
       model    = 5
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5628  } 
       name     = "474-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5629  } 
       name     = "475-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5630  } 
       name     = "302-ya Garnizonnaya Diviziya" 
       type     = garrison
       model    = 5
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5631  } 
       name     = "476-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5632  } 
       name     = "477-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5633  } 
       name     = "303-ya Garnizonnaya Diviziya" 
       type     = garrison
       model    = 5
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5634  } 
       name     = "478-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5635  } 
       name     = "479-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5636  } 
       name     = "304-ya Garnizonnaya Diviziya" 
       type     = garrison
       model    = 5
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5637  } 
       name     = "480-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5638  } 
       name     = "481-ya Strelkovaya Diviziya" 
       type     = infantry
       model    = 9
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5639  } 
       name     = "305-ya Garnizonnaya Diviziya" 
       type     = garrison
       model    = 5
      }
     landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5640  } 
       name     = "Worker and Citizens" 
       type     = militia
       model    = 4
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5641  } 
       name     = "Worker and Citizens" 
       type     = militia
       model    = 4
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5642  } 
       name     = "1. Sevastopol PMD" 
       type     = garrison
       model    = 5
       extra = artillery
       brigade_model = 9    
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5643  } 
       name     = "2. Sevastopol PMD" 
       type     = garrison
       model    = 5
       extra = artillery
       brigade_model = 9    
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5644  } 
       name     = "3. Sevastopol PMD" 
       type     = garrison
       model    = 5   
      } 
     landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5645  } 
       name     = "Worker and Citizens" 
       type     = militia
       model    = 4
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5646  } 
       name     = "Worker and Citizens" 
       type     = militia
       model    = 4
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5647  } 
       name     = "1. Cossack Divisions" 
       type     = cavalry
       model    = 10
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5648  } 
       name     = "2. Cossack Divisions" 
       type     = cavalry
       model    = 10
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5649  } 
       name     = "3. Cossack Divisions" 
       type     = cavalry
       model    = 10
      }
     landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5650  } 
       name     = "Worker and Citizens" 
       type     = militia
       model    = 4
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5651  } 
       name     = "Worker and Citizens" 
       type     = militia
       model    = 4
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5652  } 
       name     = "Worker and Citizens" 
       type     = militia
       model    = 4
      }
     landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5653  } 
       name     = "Worker and Citizens" 
       type     = militia
       model    = 4
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5654  } 
       name     = "Worker and Citizens" 
       type     = militia
       model    = 4
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5655  } 
       name     = "Worker and Citizens" 
       type     = militia
       model    = 4
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5656  } 
       name     = "Worker and Citizens" 
       type     = militia
       model    = 4
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5657  } 
       name     = "Worker and Citizens" 
       type     = militia
       model    = 4
      }
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5658  } 
       name     = "1. Moscow PMD" 
       type     = garrison
       model    = 5
       extra = artillery
       brigade_model = 9    
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5659  } 
       name     = "2. Moscow PMD" 
       type     = garrison
       model    = 5
       extra = artillery
       brigade_model = 9    
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5660  } 
       name     = "3. Moscow PMD" 
       type     = garrison
       model    = 5   
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5661  } 
       name     = "4. Moscow PMD" 
       type     = garrison
       model    = 5 
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5662  } 
       name     = "5. Moscow PMD" 
       type     = garrison
       model    = 5 
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5663  } 
       name     = "Yaroslavl Communist Rifle Division" 
       type     = infantry
       model    = 10 
       experience = 60
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5664  } 
       name     = "7. Guards PMD" 
       type     = garrison
       model    = 5
       extra = artillery
       brigade_model = 9
       experience = 60     
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5665  } 
       name     = "8. Guards PMD" 
       type     = garrison
       model    = 5
       extra = artillery
       brigade_model = 9
       experience = 60     
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5666  } 
       name     = "9. Guards PMD" 
       type     = garrison
       model    = 5
       extra = artillery
       brigade_model = 9
       experience = 60     
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5667  } 
       name     = "1. Voronezh PMD" 
       type     = garrison
       model    = 5
       extra = artillery
       brigade_model = 9    
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5668  } 
       name     = "2. Voronezh PMD" 
       type     = garrison
       model    = 5
       extra = artillery
       brigade_model = 9    
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5669  } 
       name     = "3. Voronezh PMD" 
       type     = garrison
       model    = 5   
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5670  } 
       name     = "1st Guards Zvenigorod-Bucharest Red Banner Order" 
       type     = paratrooper
       model    = 1   
      } 
      landdivision = 
     { dormant = yes  id       = {  type = 10848 id = 5671  } 
       name     = "Stalingrad NKVD" 
       type     = infantry
       model    = 11  
       experience = 80
      }

	# Starting Build Queue

	# Stalin Line
	province_development = { 
		id = { type = 10848 id = 9000 } 
		location = 550 
		cost = 0.1 
		size = 1
		type = land_fort 
		date  = {  year = 1964 } 
		} 
	province_development = { 
		id = { type = 10848 id = 9001 } 
		location = 566 
		cost = 0.1 
		size = 1
		type = land_fort 
		date  = {  year = 1964 } 
		} 
	province_development = { 
		id = { type = 10848 id = 9002 } 
		location = 564 
		cost = 0.1 
		size = 1
		type = land_fort 
		date  = {  year = 1964 } 
		} 
	province_development = { 
		id = { type = 10848 id = 9003 } 
		location = 593 
		cost = 0.1 
		size = 1
		type = land_fort 
		date  = {  year = 1964 } 
		} 
	province_development = { 
		id = { type = 10848 id = 9004 } 
		location = 618 
		cost = 0.1 
		size = 1
		type = land_fort 
		date  = {  year = 1964 } 
		} 
	province_development = { 
		id = { type = 10848 id = 9005 } 
		location = 592
		cost = 0.1 
		size = 2
		type = land_fort 
		date  = {  year = 1964 } 
		} 
	province_development = { 
		id = { type = 10848 id = 9006 } 
		location = 599
		cost = 0.1 
		size = 2
		type = land_fort 
		date  = {  year = 1964 } 
		} 
	province_development = { 
		id = { type = 10848 id = 9007 } 
		location = 596
		cost = 0.1 
		size = 2
		type = land_fort 
		date  = {  year = 1964 } 
		} 
	province_development = { 
		id = { type = 10848 id = 9008 } 
		location = 595
		cost = 0.1 
		size = 2
		type = land_fort 
		date  = {  year = 1964 } 
		} 
	province_development = { 
		id = { type = 10848 id = 9009 } 
		location = 597
		cost = 0.1 
		size = 2
		type = land_fort 
		date  = {  year = 1964 } 
		} 
	province_development = { 
		id = { type = 10848 id = 9010 } 
		location = 616
		cost = 0.1 
		size = 2
		type = land_fort 
		date  = {  year = 1964 } 
		} 
	province_development = { 
		id = { type = 10848 id = 9011 } 
		location = 614
		cost = 0.1 
		size = 2
		type = land_fort 
		date  = {  year = 1964 } 
		} 
	division_development = {
		name  = "4 Diviziya Esmintsev" 
		type  = destroyer 
		model = 4 
	new_model = no
		cost  = 0.1 
		id    = {  type = 10848 id = 8500  } 
		date  = {  year = 1936 month = december day = 5  } 
	} 
	division_development = {
		name  = "5 Diviziya Esmintsev" 
		type  = destroyer 
		model = 3 
	new_model = no
		cost  = 0.1 
		id    = {  type = 10848 id = 8501  } 
		date  = {  year = 1934 month = november day = 18  } 
	} 
	division_development = {
		name  = "Oktyabrskaya Revolutsiya"
		type  = battleship
		model = 3
      cost  = 1.1  
	unitcost = no
	new_model = no
		id    = { type = 10848 id = 8504 }
		date  = { year = 1934 month = august day = 4 }
	extra1 = naval_anti_air_l
	brigade_model1 = 0
	extra2 = naval_fire_controll_l
	brigade_model2 = 0
	}

    landunit =  
    {  location = 572  
      name     = "Stalin and Staff"  
      id       = {  type = 10848 id =  8505  }  
     Division =
     { id       = {  type = 10848 id = 8506  } 
       name     = "Stalin and Staff" 
       type     = d_10
       model    = 0
       experience = 100
       locked = yes
      }
    }
	
     landdivision =
     { dormant = yes id       = {  type = 10848 id = 8507  } 
       name     = "Stalin and Staff" 
       type     = d_10
       model    = 0
       experience = 100
       locked = yes
      }
 }	
