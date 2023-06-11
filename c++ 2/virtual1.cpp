#include <iostream>
using namespace std;

class Base
{
    public:
        virtual void fun1()
        {
            cout<< "This is the base fun1()" << endl;
        }
        virtual void fun2()
        {
            cout<< "This is the base fun2()" << endl;
        }
};

class Derived: public Base
{
    public:
        void fun1()
        {
            cout<< "This is the child fun1()" << endl;
        }
        virtual void fun2()
        {
            cout<< "This is the child fun2()" << endl;
        }

};

int main()
{
    Base *bp = new Derived();
    bp->fun1();
    bp->fun2();

    return 0;
}