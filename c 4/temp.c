#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[] = "KaushikChattere";
    printf("The initital string is: %s\n", s);
    int size = sizeof(s)/sizeof(s[0]);
    printf("Sizeof string = %d\n", size);
    int i=0;
    int j=size-2;

    while(i<size/2 -1 )
    {
        s[i] ^= s[j] ^= s[i] ^= s[j];
        i++;
        j--;
        
    }
    printf("The modified string is: %s", s);
}