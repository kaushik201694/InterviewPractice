#include <iostream>

using namespace std;

#define LOG(x) cout << x << endl

void increment(int *val) {
    (*val)++;               /*
                                We need to use dereference operator "*" else without it, we will be just icrementing the
                                pointer variable value. ALSO, if we just do *val++ , because of the order of exection,
                                it will increment the pointer variable first and then de-reference. Which we dont want.
                                So we will do (*val)++ to first perfrom derefernce and then perform the increment operation
                            */
}

void increment2(int &ref) {
    ref++;                    //Performing the increment operation uses less complex syntax.
}

int main() {
    int a =10;

    int &ref1 = a;
    ref1 = 5;              //ref1 is a reference to variable a. It is basically an alias for a.
    LOG(a);

    int b = 20;
    increment( &b );       //Passing the memory address of b
    LOG(b);

    int c = 30;
    increment2(c);
    LOG(c);


    return 0;
}