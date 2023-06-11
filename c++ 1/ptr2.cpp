#include <iostream>
#include "Header.h"

using namespace std;

int main() {

    int a = 10;
    int b = 20;

    int &ref = a;             /* 
                                When we declare a reference , we have to immediately assign it to a value.
                                int &ref;
                                ref = a;

                                the above statement wont work.
                               */

    ref = b;                    /*
                                    since ref is a reference which is already assigned to "a" , 
                                    so this statement doesnt mean that the reference is now assigned to "b".
                                    Instead, now, since ref is like an alias of "a", so the value of "a" vhanges in this statement
                                    and it becomes equal to "b"
                                */

    log(a);
    log(b);

    int c = 40;
    int d = 50;

    int *ptr = &c;
    *ptr = 77;
    ptr = &d;
    *ptr = 88;

    log(c);
    log(d);


    return 0;
}