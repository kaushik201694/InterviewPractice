//1

#include <stdio.h>

int main() {
    static int i= 5;
    if(--i){
        printf("before main: %d\n",i);
        main();
        printf("after main: %d\n",i);
    } 
    return 0;
}

/*
O/p
----
before main: 4
before main: 3
before main: 2
before main: 1
after main: 0
after main: 0
after main: 0
after main: 0
*/


//2

#include<stdio.h> 
char *getString() 
{ 
    char* str= "Kaushik Chatterjee";      /* This type of string declaration will work. It will give te expected O/p.
											But if we would have declared like this :->  char str[] = "Kaushik Chatterjee";
											that wouldnt have worked. Because we are returing str pointer, and declaring just str[] wont work.
										   */
    return str; 
} 
int main() 
{ 
    printf("%s", getString()); 
    getchar(); 
} 

/*
O/p
---
Kaushik Chatterjee
*/


//3

#include<stdio.h> 
int main() 
{ 
    int x; 
    printf("%d",scanf("%d",&x));  
    /* Suppose that input value given  
        for above scanf is 20 */
    return 1; 
} 

/*
O/p
---
1       --> scanf() reurn the number of inputs it has successfully read. Here only 1 i/p is been read by scanf. Thus the o/p is 1.
*/ 


//4

#include<stdio.h> 
int main() 
{ 
    int x,y; 
    printf("%d %d",scanf("%d",&x),scanf("%d",&y));  
   
    return 1; 
} 

/*
O/p
---
1 1    --> this will be the o/p irrespective of the input given.
*/



//5

#include<stdio.h>
int main() {
    int a =9,b=8;
    int rc;
    if(rc=(a!=b)) {
        printf("Enter,rc=%d",rc);
    }
    else
        printf("No");
}

//O/p --> Enter,rc=1



//6
#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

#define A  1024

typedef struct {
    uint8_t x;
    uint8_t arr[A];
}node;

typedef struct {
    uint32_t p;
    uint8_t q;
    uint8_t r;
    uint16_t s;
    uint32_t t;
    uint32_t u;
}node1;


int main() {
    size_t b = A;
    node *obj1;
    node obj2;
    node1 *obj3;
    printf("b=%zu b=%lu",b,b);
    printf("\n size1 = %lu , size2 = %lu",sizeof(*obj1),sizeof(*obj3));
    
    uint8_t g;
    uint16_t h;
    uint32_t i;
    uint8_t arr1[1024];
    uint16_t arr2[1024];
    uint32_t arr3[1024];
    
    printf("\nsize3 = %lu ,size4 = %lu ,size5 = %lu ", sizeof(g),sizeof(h),sizeof(i));
    printf("\nsize6 = %lu ,size7 = %lu ,size8 = %lu ", sizeof(arr1),sizeof(arr2),sizeof(arr3));
    
}

/*
o/p
---------

b=1024 b=1024
 size1 = 1025 , size2 = 16
size3 = 1 ,size4 = 2 ,size5 = 4 
size6 = 1024 ,size7 = 2048 ,size8 = 4096 

*/



//7
#include<stdio.h>
#include<string.h>

int main() {
    char* s;
    s = "kaushik";
    printf("%s",s);
}

/* O/p
kaushik
*/


//8

#include <stdio.h>

int* fun(int *arr,int n) {
    for(int i=0;i<n;i++) {
        arr[i]+=1;  
    }
    return arr;
}

int main()
{
    printf("Hello World\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int *new_arr = fun(arr,n);
    for(int i=0;i<n;i++) {
        printf("%d ",new_arr[i]);
    }

    return 0;
}

/*
O/P
----

Hello World
4
4 3 1 2
5 4 2 3 
*/



//9
#include<stdio.h>

int main() {
    char *a = "Hello";
    char b[] = "Hello";
    printf("%d %d %d",sizeof(a),sizeof(*a),sizeof(b));
}

/*
O/P
-----
8 1 6
*/


//10
#include <stdio.h>
 
int
main(void)
 
{
  int myint=3;
  int *myintp = &myint;         //Assigning value to pointer myintp as the address of myint
  int *myintp2 = myintp;        //Assigning value to pointer myintp2 as the value of pointer myintp
 
  printf("%d %d %d\n", myint, *myintp, *myintp2);
 
  myint++;
 
  printf("%d %d %d\n", myint, *myintp, *myintp2);
 
  return 0;
}

/*
O/P
-----
3 3 3
4 4 4
*/



//11
#include<stdio.h>

int main() {
    char i = '0';
    char j = 0;
    for(;i<52;i++) {
        printf("%d ",i);
    }
    printf("\n");
    for(;j<52;j++) {
        printf("%d ",j);
    }
    
}

/*
48 49 50 51 
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 
*/


//12
#include <stdio.h>

int main()
{
    printf("Hello World\n");
    int a =5;
    int *p = &a;
    int b = *p;
    
    printf("%d %d",a,b);

    return 0;
}

/*O/p
Hello World
5 5

*/


//13
#include <stdio.h>

int fun() {
    static int num = 20;
    num--;
    return num;
}

int main()
{
    printf("Hello World\n");
    for(fun();fun();fun())            
    printf("%d ",fun());                /*When the control enters into the "for" loop for the first time, it will execute the
                                        "intitialization" & "condition" arguments of the for loop. After executing these 2 cases of fun() function call,
                                        the value of "num" will become 18. Now after this the  control will go over to the printf() statement and here
                                        too the fun() will be called again. Thus the value which will be printed for the first time will be 17.
                                        From the second time onwards, the "initialization" argument of the for loop wont be executed. From now on, only
                                        "conditional" and "increment" arguments will be exeuted. And after that printf() statment will be executed. Thus for the
                                        second case, the value printed will be 14 as after the fiest case, fun() fucntion is been called 3 more times.
                                        This process will go on until the value of num gets to 0 and hence no more execution "increment" argument.
                                        */

    return 0;
}

/*
O/P
Hello World
17 14 11 8 5 2 

*/


//14
#include<stdio.h>
#include<stdlib.h>

void fun1() {
    printf("We are inside %s function",__func__);
}

int main() {
    printf("We are inside %s function\n",__func__);
    fun1();
    return 0;
}

/*
O/P
We are inside main function
We are inside fun1 function

*/


//15
#include <stdio.h>
#include <stdlib.h>

static int a=20;
int b = 30;
int c = 40;
static int d = 50;

void fun() {
    printf("Inside funtion %s, the values are: %d %d %d %d\n",__func__, a,b,c,d);
}

int main() {
    int a = 100;
    int c = 200;
    printf("Inside funtion %s, the values are: %d %d\n",__func__,a,c);
    fun();
    return 0;
}
/*O/P

Inside funtion main, the values are: 100 200
Inside funtion fun, the values are: 20 30 40 50
*/


//16
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[7] = "kaushik";
    char str2[] = "Kaushik";
    int n1 = (sizeof(str1)/sizeof(str1[0]));
    int n2 = (sizeof(str2)/sizeof(str2[0]));
    
    printf("n1=%d, n2=%d\n",n1,n2);                           /*Since we are specifying the sizeof str1, its size will 
                                                                be 7. But for str2, the size will be 8 because the size
                                                                isn't specified in this case and we know that every string 
                                                                terminates with a NULL character "\0"
                                                              */
                                                              
    printf("len1=%lu, len2=%lu\n",strlen(str1),strlen(str2));  /*
                                                                As str1 wasnt terminated with "\0" character as its size
                                                                was predefined, so str1 isnt terminated. Thats why while
                                                                performing strlen() on str1, it takes the length of str1+str2.
                                                                If we are gonna print str1, it will show all the contents
                                                                of str1 as well as str2 as str1 wasnt terninated.
                                                                */ 
    
    printf("str1=%s\n",str1);      
    return 0;
}

/*O/P
n1=7, n2=8
len1=14, len2=7
str1=kaushikKaushik

*/



//17
// Example program to demonstrate sprintf() 
#include<stdio.h> 
int main() 
{ 
    char buffer[50]; 
    int a = 10, b = 20, c; 
    c = a + b; 
    sprintf(buffer, "Sum of %d and %d is %d", a, b, c); 
  
    // The string "sum of 10 and 20 is 30" is stored  
    // into buffer instead of printing on stdout 
    printf("%s", buffer); 
  
    return 0; 
} 

/*O/P:
Sum of 10 and 20 is 30
*/



//18
//Demonstration of auto keyword

#include <stdio.h>
int main() {
	auto int i=1;
	{
		auto int i =2;
		{
			auto int i=3;
			printf("%d ",i);
		}
		printf("%d ",i);
	}
	printf("%d",i);
	
	return 0;
}

/*O/p
3 2 1

"auto" keyword has a scope and life limited to the local block in which it is declared.
So, in the innermost printf statement, all the values of "i" (ie, 1, 2 and 3) will be accessible.
But the compiler while executing the printf fucntion, will consider the "local most" declaration. 
*/



//19
//Demonstration of static

#include <stdio.h>
void increment() {
	static int i =1;
	printf("%d ",i);
	i++;
}

int main() {
	increment();
	increment();
	increment();
	
	reutn 0;
}


/*O/P
1 2 3

Since "i" is static, so the value persists throughout different function calls.
*/