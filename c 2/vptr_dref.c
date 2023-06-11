#include <stdio.h>

int main()
{
    printf("Hello World\n");
    char *ptr = "void pointer";
    void *vptr;
    vptr = &ptr;
    /*printf("%s\n" , *(char*)vptr);  --> this won't work as unlike float/int variables,  
                                          here we are dealing with char array or char *
     */
    printf("void_ptr displaying char array: %s\n" , *(char**)vptr);
    int a=13;
    float b=3.256;
    vptr=&a;
    printf("void_ptr displaying int: %d\n",*(int*)vptr);// Void pointer cannot be dereferenced without typecasting. That's we wrote *(int*)vptr instead of just *vptr
    vptr=&b;
    printf("void_ptr displaying float: %f\n",*(float*)vptr);
    return 0;
}

/*
O/P
-----

Hello World
void_ptr displaying char array: void pointer
void_ptr displaying int: 13
void_ptr displaying float: 3.256000
*/