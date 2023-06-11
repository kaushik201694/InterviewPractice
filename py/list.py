print ('Hello World')
numbers = [56, 343, 345, 45, 13]
friends = ['Tom','Hanna','Jim' , "JJ" , "Toby"]
print (friends)
friends.extend(numbers)
print (friends)
friends.append("Kevin")
print (friends)
friends.insert(3,"Goro")
print (friends)
friends.remove("Kevin")
print (friends)
friends.pop()
print (friends)
print(friends.index("Jim"))
friends.clear()
print (friends)

newfriends = ["Kaushik" , "Jerry" , "Jerry" ,"jerry", 'Lisa',"Simon", "Abba"]
print(newfriends.count("Jerry"))
print (newfriends.sort())
newfriends.sort()
print (newfriends)
newfriends.reverse()
print(newfriends)
newfriends2 = newfriends.copy()
print (newfriends2)

'''

OUTPUT
------------

Hello World                                                                                                                      
['Tom', 'Hanna', 'Jim', 'JJ', 'Toby']                                                                                            
['Tom', 'Hanna', 'Jim', 'JJ', 'Toby', 56, 343, 345, 45, 13]                                                                      
['Tom', 'Hanna', 'Jim', 'JJ', 'Toby', 56, 343, 345, 45, 13, 'Kevin']                                                             
['Tom', 'Hanna', 'Jim', 'Goro', 'JJ', 'Toby', 56, 343, 345, 45, 13, 'Kevin']                                                     
['Tom', 'Hanna', 'Jim', 'Goro', 'JJ', 'Toby', 56, 343, 345, 45, 13]                                                              
['Tom', 'Hanna', 'Jim', 'Goro', 'JJ', 'Toby', 56, 343, 345, 45]                                                                  
2                                                                                                                                
[]                                                                                                                               
2                                                                                                                                
None                                                                                                                             
['Abba', 'Jerry', 'Jerry', 'Kaushik', 'Lisa', 'Simon', 'jerry']                                                                  
['jerry', 'Simon', 'Lisa', 'Kaushik', 'Jerry', 'Jerry', 'Abba']                                                                  
['jerry', 'Simon', 'Lisa', 'Kaushik', 'Jerry', 'Jerry', 'Abba']                                                                  

'''                     