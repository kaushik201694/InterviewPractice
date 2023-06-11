#include <iostream>
using namespace std;



class A {public: int a;};
class B : public A {public: int b;};
class C : public A {public: int c;};
class D : public B, public C {public: int d;};



int main() {



D Obj;
Obj.a = 10;
Obj.b = 5;
Obj.c = 15;
Obj.d = 20;
Obj.a++;
Obj.b--;
Obj.++c;
Obj.--d;
cout << Obj.a << Obj.b << Obj.c << Obj.d << endl;



return 0;
}