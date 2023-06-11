
#include <stdio.h>

void fun1(int *temp1) {
    (*temp1)++;
}

int fun2(int temp2) {
    temp2++;
    //printf("inside fun2 temp2=%d\n",temp2);
    return temp2;
}

int main()
{
    int a =10;
    fun1(&a);
    printf("after fun1 a=%d\n",a);
    int b = fun2(a);
    printf("after fun2 b=%d\n",b);
    return 0;
}
