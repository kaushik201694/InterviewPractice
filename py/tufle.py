#tufle are immutable objects , ie, once declared, they cant be modified unlike lists
#In python we will use tufle where data will not be changed anytime

coordinates = (4,7,5)
print (coordinates)
print (coordinates[2])
coordinates[2] = 6

'''

OUTPUT
---------
(4, 7, 5)                                                                                                                        
5                                                                                                                                
Traceback (most recent call last):                                                                                               
  File "main.py", line 4, in <module>                                                                                            
    coordinates[2] = 6                                                                                                           
TypeError: 'tuple' object does not support item assignment

'''              