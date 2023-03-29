############################## 
# Country definition for EGY - Egypt #  
##############################  

#####################  
# Country main data #  
#####################  

country =  
{  tag                    = EGY  
	ai = "egy_1936.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes revolter_set = yes } }
	dissent = 20
	capital	= 787 # Cairo / Al-Qahirah  
	puppet	= ENG # UK  
	# Resource Reserves  
	energy                 = 540
	metal                  = 270
	rare_materials         = 135
	oil                    = 500  
	supplies               = 50 # No army - no supply reserves  
	money                  = 50  
	manpower               = 292 # No army - no reserves  
	transports             = 10  
	escorts                = 0  


diplomacy = {   
    relation = {   tag = GER value = 80 access = no   }   
      }  
    SpyInfo                = {   country = "EGY" NumberOfSpies = 3   }  
    
      
    nationalprovinces      = {   778 779 780 781 782 783 784 785 786 787 788 789 790 791 792 793 794 795 796 797 798 799 800 801 802 1004 1005 1006 1007 1009  
  }  
    ownedprovinces         = {   778 779 780 781 782 783 784 785 786 787 788 789 790 791 792 793 794 795 796 797 798 799 800 801 802 1004 1005 1006 1007  
  }  
    controlledprovinces    = {   778 779 780 781 782 783 784 785 786 787 788 789 790 791 792 793 794 795 796 797 798 799 800 801 802 1004 1005 1006 1007  
  }  
     
       techapps = {  
#Great War Infantry Division  
1010  1020 1030 1040 1050 1060 
#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960
#1930 Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 1350 1360 1370
#Basic Armoured Car  
2860 2870 2880 2020
#Great War Heavy Field Artillery 
2290 2300 2310 
#Early Anti-Tank Artillery 
#2400
#Early Static Anti-Air Artillery 
2800 2450 
#Great War Destroyer 
3010 3020 3030 3040
#Interwar Light Cruiser 
3110 3120 3130 3140
#Early Heavy Cruiser 
3210 3220 3230
#Early Fighter  
4500 4510 4520 4530 4540 4550 4010 4020
#Improved Construction Engineering 
5800 5080 

1830 1840   
#Torpedo & ASW 18
3720 3730 3736 3740 3750 3900
#Troopships
3810

#Engineers
#Medicine
5600 5610 5620


#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
# Defensive Focus Grand Battleplan Path (FRA / UK)
6560
#Naval Doctrines
8010 8020 8050  

 }  
     inventions = { 3000027 }    
      
    policy =  
    {   date              = {   year = 0 month = january day = 0   }  
      democratic        = 7  
      political_left    = 3  
      free_market       = 8  
      freedom           = 10  
      professional_army = 6  
      defense_lobby     = 3  
      interventionism   = 2  
      }  

    headofstate            = {   type = 9 id = 340001   }  # Fuad I  
    headofgovernment       = {   type = 9 id = 340002   }  # Ali Mahir Pasha  
    foreignminister        = {   type = 9 id = 340003   }  # Ali Mahir Pasha  
    armamentminister       = {   type = 9 id = 340004   } # Mohammed al Fransawi  
    ministerofsecurity     = {   type = 9 id = 340005   } # Mustafa an-Nahhas Pasha  
    ministerofintelligence = {   type = 9 id = 340006   } # Mohammed Hilmi Issa  
    chiefofstaff           = {   type = 9 id = 340007   } # Hassan Sabry Pasha  
    chiefofarmy            = {   type = 9 id = 340008   } # Hassan Sabry Pasha  
    chiefofnavy            = {   type = 9 id = 340009   } # Abdallah Ziwar Pasha;  
    chiefofair             = {   type = 9 id = 340010   }  # Fuad I  
     
     landunit = {   
        id = {  type = 19600 id = 1  }  
        location = 787  
        name = "Royal Egyptian Army"  
           Division = {   
              id = {  type = 19600 id = 3  }  
                      name = "1st Egyptian Infantry Division" # No army for Egypt allowed, except some 10,000 men  
              strength = 100  
              type = infantry 
				model = 6			  
            }  
         }  
    

    
         }