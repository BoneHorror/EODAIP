# Zhang Peiyuan
 country = { 
  tag       	 = REB
  
  nationalprovinces    = {  } 
  ownedprovinces       = {  } 
  controlledprovinces  = { 1280 1276 1273 1240 } 
  capital	= 1280

  #Notice: For balance reason (due to lack of event chain to simulate Soviet intervention against rebels and inability to have rebel vs rebel fighting
  #to simulate infighting that caused Sheng Shicai to win the war with a worse army), rebels have been weakened from their historic strength. Also, KMT rebels
  #are not included since not possible to have rebels fight another rebel group.
  landunit = 
   {  location = 1280
     name     = "Ili Garrison" 
     id       = {  type = 25600 id = 16  } 
     Division = 
     {  id   = {  type = 25600 id = 17 } 
       name = "Ili Garrison" 
       type = militia 
	   strength = 30
	   model    = 3
      } 
    }
  landunit = 
   {  location = 1276
     name     = "NRA 36th Division" 
     id       = {  type = 25600 id = 18  } 
     Division = 
     {  id   = {  type = 25600 id = 19 } 
       name = "NRA 36th Division" 
       type = infantry
	   strength = 100
	   model    = 7
      } 
    }

  #Chahar People's Anti-Japanese Army, 10k
  landunit = 
   {  location = 1240
     name     = "Chahar People's Anti-Japanese Army" 
     id       = {  type = 22300 id = 22  } 
     Division = 
     {  id   = {  type = 22300 id = 23} 
       name = "1st CPAJ Corps" 
       type = infantry
	   strength = 100
	   model    = 6
      } 
	 Division = 
     {  id   = {  type = 22300 id = 24 } 
       name = "2nd CPAJ Corps" 
       type = infantry
	   strength = 100
	   model    = 6
	   extra = cavalry_brigade
	   brigade_model = 5
      } 
	 Division = 
     {  id   = {  type = 22300 id = 25 } 
       name = "6th Herald Corps" 
       type = militia
	   strength = 30
	   model    = 4
      } 
    }
	  landunit = 
   {  location = 1240
     name     = "Resisting Japan and Saving China Army" 
     id       = {  type = 22300 id = 26 } 
     Division = 
     {  id   = {  type = 22300 id = 27 } 
       name = "1st RJSC Corps" 
       type = militia
	   strength = 100
	   model    = 4
	   extra = cavalry_brigade
	   brigade_model = 5
      } 
	 Division = 
     {  id   = {  type = 22300 id = 28 } 
       name = "4th RJSC Corps" 
       type = infantry
	   strength = 30
	   model    = 6
      } 
	 Division = 
     {  id   = {  type = 22300 id = 29 } 
       name = "5th RJSC Corps" 
       type = militia
	   strength = 100
	   model    = 4
      } 
    }
    landunit = 
   {  location = 1240
     name     = "Northeastern Loyal and Brave Army" 
     id       = {  type = 22300 id = 30  } 
     Division = 
     {  id   = {  type = 22300 id = 31 } 
       name = "Northeastern Loyal and Brave Army" 
       type = cavalry
	   strength = 100
	   model    = 5

      } 
   }
   landunit = 
   {  location = 1240
     name     = "18th Corps" 
     id       = {  type = 22300 id = 32  } 
	 Division = 
     {  id   = {  type = 22300 id = 33 } 
       name = "18th Corps" 
       type = militia
	   strength = 100
	   model    = 4
      } 
    }
   landunit = 
   {  location = 1240
     name     = "Chahar Self-Defense Army" 
     id       = {  type = 22300 id = 34  } 
	 Division = 
     {  id   = {  type = 22300 id = 35 } 
       name = "Chahar Self-Defense Army" 
       type = militia
	   strength = 100
	   model    = 4 #Attach Ethnic Mongol Army and bandits
	   extra = cavalry_brigade
	   brigade_model = 5
      } 
    }
}
 