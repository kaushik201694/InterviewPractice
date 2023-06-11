
#include <stdio.h>
#include <stdlib.h>

void *fun1(void *a) {
    int temp = *((int*)a);
    temp++;
    int *p = &temp;
    return ((void*)p);  /*This procedure of returning a pointer which is pointing to a address of a local variable of a function
						 is WRONG. This program will probably execute without any errors/warnings. But the thing is once the function scopes ends,
						 so does its local variables. After the funtion finishes its execution, the address allocated to its local variables will 
						 get "freed" imeediately. So our pointer here, is acutally pointing to a memory address that is very very insecure. For the
						 time being, it can show the value at that memory location(outside the scope of the funtion) , but that can be chnaged anytime.
						 that memory is essentially free to use by the CPU. It can allocate it anytime to a different variable. Most of the good compilers
						 might throw an error/waring at such cases. In conclusion, getting error or not, this procedure isnt right.
						 We can alternatively chnage the vriable that we are sending 
						*/
}

int main()
{
    printf("Hello World\n");
    int a =5;
    int *p = &a;
    int b = *p;
    
    printf("%d %d",a,b);
    
    int x = *((int*)fun1((void*)&b));     /*
											Here I am trying to send "b" to "fun1" function after doing a typecast.
											Once a value is receievd from "fun1" , I am typecasting it to int*.
											Then I am deferencing the whole thing to get the value in int format.
										*/
    printf("\n%d",x);

    return 0;
}
