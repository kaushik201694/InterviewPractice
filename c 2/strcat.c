
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fun1(char** s1) {
    (*s1) = "Hulk";
}

void fun2(char** s2) {
	char hero[10] = "&Superman";
	strcat((*s2),hero);
}

void fun3(char* s3) {
    char temp[10] = "&Flash";
    strcat((s3),temp);
}

int main()
{
    char *str;
    str = malloc(sizeof(char)*15);
	
    scanf("%s",str); 
    fun1(&str);	
    printf("1st string %s\n",str);
	
    str = "Batman";
    fun2(&str);
    printf("2nd string %s\n",str);
	
	str = "Batman";
	fun3(str);
	printf("3rd string %s\n",str);
	
    return 0;
}
