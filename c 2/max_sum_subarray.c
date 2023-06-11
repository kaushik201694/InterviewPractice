#include <limits.h>

int maxSubArray(const int* A, int n1) {
    int max_all=0, max=0,neg_max=INT_MIN,i,flag=0;
    for(i=0;i<n1;i++) {
        if(A[i]<0) {
            flag ++;
            if(A[i]>neg_max)
                neg_max=A[i];
        }
        max+=A[i];
        if(max<0)
            max=0;
        if(max_all<max)
            max_all=max;
    }
    if(flag == n1)
        max_all=neg_max;;    
    return max_all;
}