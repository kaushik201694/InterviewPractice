#include <stdio.h>

void print() {
    printf("Hello using Function Pointers\n");
}

int add(int a, int b) {
    return a+b;
}

int main()
{
    printf("Hello World\n");
    int c;
    int (*func_ptr)(int,int) = add;
    c=func_ptr(19,4);
    void (*func_ptr2)()=print;
    func_ptr2();
    printf("%d\n",c);
    
    return 0;
}
