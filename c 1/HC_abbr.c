#include<string.h>
#include<stdlib.h>
#include<stdio.h>

char *fun1(char *a, char *b) {
    int len1 = strlen(a);
    int len2 = strlen(b);
    int k=0,flag = 0,flag1=0;
    char *ret = malloc(3);
    
    char temp1,temp2;
    
    if(len2>len1) {
        ret = "NO";
        return ret;
    }
    for(int i=0;i<len1;i++) {
        temp1 = a[i];
        temp2 = b[k];
        int x = a[i];
        int y = b[k];
        
        if(flag1 == 1 && x>=65 && x<=90 && b[k-1] == x) {
            flag1 =0;
            continue;
        }
        
        if(x == y || x == y+32) {
            flag ++;
            k++;
            if(x == y+32) {
                flag1 = 1;
            }
        }
        else if(x!=y && x != y+32 && x>=65 && x<=90) {
            flag --;
        }    
        else {
            continue;
        }
        
    }
    
    if(flag == len2)  
        ret = "YES";
    else
        ret = "NO";
    
    return ret;
}

int main()
{
    char s1[1000], s2[1000];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%s",s1);
        scanf("%s",s2);
        char *s3 = fun1(s1,s2);
        printf("%s\n",s3);
    }
	return 0;
}
