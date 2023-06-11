#include <stdio.h>
#include <string.h>

struct {
   unsigned int age : 3;
} Age;

int main( ) {

   Age.age = 4;
   printf( "Sizeof( Age ) : %d\n", sizeof(Age) );
   printf( "Age.age : %d\n", Age.age );

   Age.age = 7;
   printf( "Age.age : %d\n", Age.age );

   Age.age = 9;
   printf( "Age.age : %d\n", Age.age );

   return 0;
}


/*
O/P

Sizeof( Age ) : 4
Age.age : 4
Age.age : 7
Age.age : 1
*/