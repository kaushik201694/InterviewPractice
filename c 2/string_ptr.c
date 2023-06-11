
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fun1(char** s1) {
    (*s1) = "Kaushik";
    printf("inside fun1 %s\n",(*s1));
}

char* fun2(char* s2) {
    s2 = "Kumar";
    return s2;
}

void fun3(char* s3) {
	char new[15]= " Chatterjee";
	strcat((s3),new);
}

int main()
{
    char *str;
    str = malloc(sizeof(char)*30);
    scanf("%s",str);			/*Here, since we are allocating memory dynamically,
								its waste of memory to assign str directly(hard-coded).
								Ex --> str = "Batman";
								This type of declaration is bad after performing malloc.
								*/
    fun1(&str);					/* Here since in fun1() we are changing the assignment of str/s1 ,
								   we are passing address of str through main() and then dereference in
								   fun1(). Also since fun1() return void, so this is the only way we can pass
								   the string and the changes made in fun1() will reflect in main().
								*/
    printf("After fun1(): String = %s\n",str);
    
    char *new = fun2(str);       /* Here in fun2() , like in fun1(), we are changing the assignment of str/s2,
	                                         but, in this case , fun2() returns char* value. So for this case, we dont have to 
									pass the address of str as whatever the changes we are making in fun2(), we are returning
									the updated string to main() and thus the changes will reflect in main().
								*/
    printf("After fun2(): String = %s\n",new);
	
	fun3(str);                  /* Here in fun3() , unlike fun1() and fun2() , we aren't changing the assignment of the string.
								   "strcat" changes the memory that the pointer points to. It doesn't change the change the 
								   pointer itself as was the case for fun1() and fun2(). So in this case it isnt necessary to 
								   pass the address of str to fun3(). We can pass it, but the result wont be affected.
								*/
	printf("After fun3(): String = %s\n",str);
	
	free(str);           // ALWAYS FREE MEMORY ALLOCATED FOR POINTERS.
    return 0;
}
