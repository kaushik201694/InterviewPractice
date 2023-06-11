#include <stdio.h>

int arr[5][5];

void zigzag() {
    int i=0,j=0;
    printf("prting the given matrix after zigzag traversal\n");
    while(i<5 && j<5) {
        printf("%d ",arr[i][j]);
        if((i==0 && j%2==0 && j!=4) || (i==4 && j%2!=0)) {
            i+=0;
            j++;
            continue;
        }
        else if((j==0 && i%2!=0) || (j==4 && i%2==0)) {
            j+=0;
            i++;
            continue;
        }
        else if((i%2==0 && j%2!=0) || (i%2!=0 && j%2==0)) {
            i++;
            j--;
            continue;
        }
        else if((i%2!=0 && j%2!=0) || (i%2==0 && j%2==0)) {
            i--;
            j++;
            continue;
        }
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
    zigzag();
    return 0;
}


/*
O/P
-----

Hello World
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
prting the given matrix after zigzag traversal
1 2 6 11 7 3 4 8 12 16 21 17 13 9 5 10 14 18 22 23 19 15 20 24 25 


*/