#include <stdio.h>

int add(int a, int b) {
    return a+b;
}

int main()
{
    printf("Hello World\n");
    int (*func_ptr)(int,int) = add;    /*int (*func_ptr)(int,int) = &add  --> This would aslo work
										OR,
										int (*func_ptr) (int,int);
										func_ptr = &add;  --> This would also work
										OR,
										int (*func_ptr)(int,int);
										func_ptr = add;  ---> this will also work
										
										This is because writing function name ("add" in our case) in this context is
										converted to address of the function. So we dont have to expicitly give the & operator.
										*/	
    
    
    int c=func_ptr(5,4);            // int c= (*func_ptr)(5,4);  --> this should aslo work  
                                // Here we are doing de-referencing and executing the function
    printf("%d\n",c);
    
    return 0;
}
