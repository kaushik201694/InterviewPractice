#include <stdio.h>

void A() {                         //A is callback function
    printf("\nHello using function pointers and callback");
}

void B(void(*ptr)()) {             // function pointer as argument in function "B"     
    ptr();                         //call-back function that "ptr" points to
}

int main()
{
    printf("Hello World");
    B(A);                     //void (*func_ptr)()=A;
                              //B(func_ptr);  ---> doing this also the same thing
    
    return 0;
}
