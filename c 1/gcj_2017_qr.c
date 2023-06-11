#include<stdio.h>
#include<stdlib.h>

char str[10];
int c =0;

void flip(int i, int k) {
    printf("\n String received Flip %d %s\n",i,str);
    c++;
    for(int j=i;j<i+k;j++) {
        if(str[j] == '+') {
            str[j]='-';
        }
        else if(str[j] == '-') {
            str[j] = '+';
        }
    }
    printf("\n String send Flip %d %s",i,str);
}

void count( int k) {
    int i=0;
    printf("\nString received count %s\n",str);
    /*int n=(sizeof(str)/sizeof(str[0]));
    printf("\n%d\n",n);
    */
    if(k<2)
        return;
    while(i>=0 && i<10) {
        if(str[i]=='+') {
            i++;
            continue;
        }     
        else if(str[i]=='-') {
            flip(i,k);
            i++;
        }
    }
    printf("\nString End Count %s\n",str);
    printf("\n Count = %d\n",c);
}

int main() {
    int k; 
   // printf("\nEnter the no. of iterations\n");
    //scanf("%d",&s); 
    printf("\nEnter the string\n");
    scanf("%s",str);
    printf("Enter the flipper size\n");
    scanf("%d",&k);
    
    count( k);
    //count();
    return 0;
}
