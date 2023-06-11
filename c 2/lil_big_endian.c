#include <stdio.h>
#include <arpa/inet.h>

int main()
{
    printf("Hello World\n");
    unsigned int i = 0x12345678;
    printf("%x %u\n",i,i);
    i = ntohl(i);
    printf("%x %u\n",i,i);
    i = htonl(i);
    printf("%x %u\n",i,i);
    
    return 0;
}


/*
O/P :

Hello World
12345678 305419896
78563412 2018915346
12345678 305419896

*/