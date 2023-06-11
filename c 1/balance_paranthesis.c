#include <stdio.h>
#include <string.h>
void balanceCheck(char *arr, int len) {
    char arr2[len];
    int len1 = 0 , pos = 0;
    for(int i=0;i<len; i++) {
        if(arr[i] == '(' || arr[i] == '{' || arr[i] == '[') {
            arr2[pos] = arr[i];
            pos++;
            len1++;
        }
        else if((arr[i] == ')' && arr2[pos-1] == '(') || (arr[i] == '}' && arr2[pos-1] == '{') || (arr[i] == ']' && arr2[pos-1] == '[')) {
            arr2[pos-1] = '\0';
            arr2[pos] == '\0';
            pos--;
            len1--;
        }
        else
            len1++;
    }
    if(len1 == 0)
        printf("\nBalanced\n");
    else
        printf("\nNot Balanced\n");
}

int main() {
    int n;
    printf("Enter the length of the character array: ");
    scanf("%d",&n);
    char arr1[n];
    printf("\nEnter the character array to check for parantheseis balance: ");
    scanf("%s",arr1);
    int len = strlen(arr1);
    balanceCheck(arr1, len);
	return 0;
}