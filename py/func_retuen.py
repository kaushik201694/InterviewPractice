print ('Hello World')

def cube(num):
    return num*num*num
    
x = int(input("Enter a number to cube :"))
print('The cube of the number is :',cube(x))

'''
OUTPUT
--------
Hello World                                                                                                                    
Enter a number to cube :4                                                                                                      
The cube of the number is : 64                                                                                                 

'''

'''
I we wouldnt have used return keyword then :

print ('Hello World')

def cube(num):
    num*num*num
    
x = int(input("Enter a number to cube :"))
print(cube(x))

outpu --> 

Hello World                                                                                                                    
Enter a number to cube :5                                                                                                      
None      --> not using return statement causes this

'''


