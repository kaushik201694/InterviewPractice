print ('Hello World')

'''
Creation of Dictionary using Key-Value Pair
'''

monthConversions = {
    "Jan": "January",
    "Feb": "February",
    'Mar': 'March',
    'Apr': 'April',
    'May': 'May',
}

print (monthConversions['Jan'])
print (monthConversions.get('Feb'))  #same functionality as the previous print statement
print (monthConversions.get('Ram'))


'''
OUTPUT
-------------

Hello World                                                                                                                    
January                                                                                                                        
February                                                                                                                       
None 

'''