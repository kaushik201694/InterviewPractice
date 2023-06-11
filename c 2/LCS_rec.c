#include <stdio.h>
#include <stdlib.h>

int max (int a, int b) {
    return (a>b?a:b);
}

int LCS(char *arr1, char *arr2, int i,int j) {
    if(i == 0 || j== 0)
        return 0;
    else if(arr1[i] == arr2[j])
        return 1+LCS(arr1,arr2,i-1,j-1);
    else
        return max(LCS(arr1,arr2,i-1,j),LCS(arr1,arr2,i,j-1));
}

int main()
{
    printf("Hello World\n");
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    char *arr1 = malloc(n1);
    char *arr2 = malloc(n2);
    
    for(int i=0;i<n1;i++) {
        scanf("%c",&arr1[i]);
    }
    
    for(int i=0;i<n2;i++) {
        scanf("%c",&arr2[i]);
    }
    
    int result = LCS(arr1,arr2,n1,n2);
    
    printf("\nThe length of LCS is:%d\n",result);
    
    free(arr1);
    free(arr2);
    

    return 0;
}
