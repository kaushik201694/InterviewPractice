#include <stdio.h>
#include <stdlib.h>

int subCount(int n)
{
    int count = 0;
    while(n>0)
    {
        if(n%10 == 2)
            count++;
        n/=10;
    }

    return count;
}

int countNumberOf2s(int n)
{
    int count =0;
    for(int i=0; i<n; i++)
    {
        count+= subCount(i);
    }

    return count;
}

int main()
{
    printf("%d\n", countNumberOf2s(67));
    printf("%d\n", countNumberOf2s(180));

    return 0;

}