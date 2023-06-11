//Balanced array pivot element is the one which is situated in such place in the array where the left sum and 
//right sum (wrt to the pivot element) are equal.

#include <stdio.h>

int findPivot(int *arr, int n) {
    int res;
    int ls=0, rs=0;

    if(n <=1)
        return -1;

    for (int i=1; i<n; i++) {
        rs+=arr[i];
    }

    for (int i=0,j=1; i<n; i++,j++) {
        ls+=arr[i];
        rs-=arr[j];
        if(ls == rs) {
            res = j+1;
            break;
        }
    }
    return res;
}

int main() {

    int n;
    printf("Enter the length of the integer array\n");
    scanf("%d",&n);

    int *arr = malloc(sizeof(int)*n);
    printf("Enter the elements of the array\n");

    for(int i=0; i<n ;i++) {
        scanf("%d",&arr[i]);
    }

    int pivot = findPivot(arr, n);
    printf("The pivot element position is %d from the left\n5", pivot);

}