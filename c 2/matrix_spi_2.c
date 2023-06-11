#include <stdio.h>
int arr[5][5];

void spiral() {
    int arr1[25]={0} , pos=0;
    int i=0,j=0,a=4,b=4,c=0,d=0;
    while(i<5 && j<5) {
        arr1[pos]=arr[i][j];
        pos++;
       // printf("%d\t",arr[i][j]);
        if(i==c && c<3 && j!=a) {
            printf("Entered 1st if case:\n");
            i+=0;
            j++;
            if(j==a-1)
                {c++;}
        }
        else if(j==a && a>1 && i!=b) {
            printf("Entered 2nd if case:\n");
            j+=0;
            i++;
            if(i==b-1)
                {a--;}
        }
        else if(i==b && b>2 && j!=d) {
            printf("Entered 3rd if case:\n");
            i+=0;
            j--;
            if(j==d+1)
               {b--;}
        }
        else if(j==d && j<2 && i!=c) {
            printf("Entered 4th if case:\n");
            j+=0;
            i--;
            if(i==c+1)
                {d++;}
        }
    }
    for(int k=0;k<25;k++) {
        printf("%d\t",arr1[k]);
    }
    
}

int main()
{
    printf("Hello World\n");
    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    spiral();    
    return 0;
}











1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 


