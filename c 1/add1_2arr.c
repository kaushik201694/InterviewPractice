    int car=0,sum=0;
    *len1 = n1+1;
    int* B = (int*)malloc((n1+1)*sizeof(int));
    int i,pos=n1;
    for(i=n1-1;i>=0;i--) {
        if(i = n1-1) {
            sum = A[i]+1;
            if(sum>10) {
                B[pos] = sum%10;
                car=1;
            }
            else {
                B[pos] = sum;
                car=0;
            }
        }
        else {
            sum = A[i]+car;
            if(sum>10) {
                B[pos] = sum%10;
                car=1;
            }
            else {
                B[pos] = sum;
                car = 0;
            }
        }
        pos --;
    }
    
    B[pos]=car;
    
    return B;