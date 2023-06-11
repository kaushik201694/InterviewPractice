#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* timeConversion(char* s) {
    int len = strlen(s);
    char *ret = malloc(len-2);
    int temp;

    if(s[len-2] == 'A') {
        if (s[0] == '1' && s[1] == '2') {
            ret[0] = '0';
            ret[1] = '0';
        }
        else {
            ret[0] = s[0];
            ret[1] = s[1];
        }
    }
    else if(s[len-2] == 'P') {
        int carr = 0;
        if (s[0] == '1' && s[1] == '2') {
            ret[0] = s[0];
            ret[1] = s[1];
        }
        else {
            temp = (s[1]-48)+12;
            ret[1] = (temp%10)+48;
            carr = (temp/10);
            ret[0] = s[0]+carr;
        }
    }
    
    for(int i=2;i<len-2;i++) {
        ret[i] = s[i];
    }

    return ret;

}

int main()
{
    printf("Hello World\n");
    char t[] = "12:05:45AM";
    char *result = timeConversion(t);
    printf("The result is %s",result);

    return 0;
}
