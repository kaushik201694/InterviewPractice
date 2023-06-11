#include<stdio.h>

void printSpiral(int (*arr)[4], int m, int n) {
    int t=0,b=m-1,l=0,r=n-1,dir=0,i;
    while(t<=b && l<=r) {
        if(dir==0) {
            for(i=l;i<=r;i++) {
                printf("%d ",arr[t][i]);
            }
            t++;
            dir=1;
        }
        else if(dir==1) {
            for(i=t;i<=b;i++) {
                printf("%d ",arr[i][r]);
            }
            r--;
            dir=2;
        }
        else if(dir==2) {
            for(i=r;i>=l;i--) {
                printf("%d ",arr[b][i]);  
            }
            b--;
            dir=3;
        }
        else if(dir==3) {
            for(i=b;i>=t;i--) {
                printf("%d ",arr[i][l]);
            }
            l++;
            dir=0;
        }
    }
}

int main() {
    int arr[4][4] = {10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    printSpiral(arr,4,4);
    return 0;
}
