#include <stdio.h>

int main()
{
    printf("Hello World\n");
    int x[5]={32,12,56,90,67};
    printf("%d\n",*(x+3));
    *(x+3)=45;
    printf("%d\n",x[3]);
    int *p = &x[3];
    printf("*p = %d  %p\n",*p,*p);
    printf("*(p+1)= %d  %p\n",*(p+1),*(p+1));
    return 0;
}


/*
O/P
-----
Hello World
90
45
*p = 45  0x2d
*(p+1)= 67  0x43
*/