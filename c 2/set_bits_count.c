#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void count_ones(int n)
{
    int count=0 , i=0, len=0 , d;
    while(n>0 && i>=0)
    {
        d= n%2;
        if(d == 1)
            count++;
        n=n/2;
    }
    printf("\nThe number of ones is\n %d",count);
    
}

int main()
{
    int n = 24;
    count_ones(n);
    return 0;
}