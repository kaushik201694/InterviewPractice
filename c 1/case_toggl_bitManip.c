#include <stdio.h>

int main()
{
    printf("Hello World\n");
    char arr[5];
    printf("Enter the string:");
    scanf("%s",arr);
    printf("String before toggling upper/lower case is %s\n",arr);
    printf("After toggling:\n");
    for(int i=0;i<5;i++) {
        arr[i]=arr[i]^' ';
        printf("%c",arr[i]);
    }
    return 0;
}


/*
O/P
----

Hello World
Enter the string:ToMmY
String before toggling upper/lower case is ToMmY
After toggling:
tOmMy


*/
