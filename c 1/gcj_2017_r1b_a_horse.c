#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void calc(int i, int d, int n, int* pos, int* sp) {
    int j;
    float ti[n],tot_time=0.0,res=0.0;
    for(j=0;j<n;j++) {
        ti[j]=(d-pos[j])/sp[j];
    }
    for(j=0;j<n;j++) {
        if(tot_time<ti[j])
            tot_time=ti[j];
    }
    res=d/tot_time;
    printf("\n Case #%d: %f",i,res);
}

int main() {
    int i,j,t,d,n;
    printf("\n Enter the no. of testcases\n");
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        printf("\nTest Case:%d\n",i+1);
        printf("\nEnter the max dist and the total number of horses\n");
        scanf("%d %d",&d,&n);
        int pos[n],sp[n];
        for(j=0;j<n;j++) {
            printf("\nEnter the Ini pos and speed of Horse #%d\n",j+1);
            scanf("%d %d",&pos[j],&sp[j]);
        }
        calc(i,d,n,pos,sp);
    }
}
