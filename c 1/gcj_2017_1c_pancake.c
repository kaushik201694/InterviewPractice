#include <stdio.h>
#include <math.h>

void result(int *r, int *h, int k) {
    float res=0.0;
    for(int i=0;i<k;i++) {
        if(i<k-1){
            res+=((2*3.14*r[i]*h[i]) + (3.14*pow((r[i]-r[i+1]),2))); 
        }
        else if(i==k-1) {
            res+=((2*3.14*r[i]*h[i]) + (3.14*pow(r[i],2)));
        }
    }
    printf("\nThe Max surface area possible is : %f\n",res);
}

int *revsort(int *arr, int n) {
    int temp=0;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(arr[i]<arr[j]) {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return arr;
}

int main() {
    printf("Hello World\n");
    int n,k,i,j;
    printf("Enter the total number of pancakes available\n");
    scanf("%d",&n);
    printf("Enter the total number of pancakes required\n");
    scanf("%d",&k);
    int r[n],h[n];
    printf("Enter the Radius and height of all the available pancakes\n");
    for(i=0;i<n;i++)
    {
        printf("Radius and height of pancake #%d:\t",i+1);
        scanf("%d %d",&r[i],&h[i]);
        printf("\n");
    }
    int *rad = revsort(r,n);
   /* printf("\n");
    for(int a=0;a<n;a++) {
        printf("%d\t",rad[a]);
    }
    printf("\n");
    */
    
    result(rad, h, k);
    
    return 0;
}
