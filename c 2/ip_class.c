#include <stdio.h>
#include <stdlib.h>

char fun(char *str) {
    char *arr;
    int i = 0;
    while(str[i] != '.') {
        i++;
    }
    i--;
    arr = malloc(sizeof(char)*i);
    i=0;
    while(str[i] != '.') {
        arr[i] = str[i];
        i++;
    }
    int ip = atoi(arr);
    // Class A 
    if (ip >=1 && ip <= 126) 
        return 'A'; 
  
    // Class B 
    else if (ip >= 128 && ip <= 191) 
        return 'B'; 
  
    // Class C 
    else if (ip >= 192 && ip <= 223) 
        return 'C'; 
  
    // Class D 
    else if (ip >= 224 && ip <= 239) 
        return 'D'; 
  
    // Class E 
    else
        return 'E'; 
}

int main() {
    char *str;
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    str = malloc(sizeof(char)*n);
    printf("Enter the IP\n");
    scanf("%s",str);
    printf("Str = %s",str);
    printf("\nClass = %c\n", fun(str));
    free(str);
    return 0;
}

