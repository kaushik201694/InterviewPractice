#include <iostream>
using namespace std;

struct node
{
    int a1;
    int a2;
};

class newClass
{
    public:
        newClass():a(13)
        {
            cout<<"Constructor a= "<< a << endl;
        }
        void myFunction(int a)
        {
            cout<<"myFunction class a =" << ++(this->a) <<" parameter a=" << a <<endl;
        }
        ~newClass()
        {
            cout<<"Destructor is called"<<endl;
        }
    private:
        int a;
};

class Base
{
    public:
        Base()
        {
            cout<<"Base constructor"<<endl;
        }
        ~Base()
        {
            cout<<"Base desctructor"<<endl;
        }
};

class Child: public Base
{
    public:
        Child()
        {
            cout<<"Child constructor"<<endl;
        }
        ~Child()
        {
            cout<<"Child desctructor"<<endl;
        }
};

int main()
{
    // Diff between new node  & new node()
    node *n1 = new node(); 
    node *n2 = new node;
    cout<< "n1::a1=" << n1->a1 << " n1::a2=" << n1->a2 <<endl;
    cout<< "n2::a1=" << n1->a1 << " n2::a2=" << n1->a2 <<endl;


    //use of this pointer and calling destructor
    newClass *c = new newClass();
    c->myFunction(7);
    delete(c);  // once delete is called, destructor will be automatically called.
                // This is because the object was created on heap using dynamic memory allocaiton ("new" keyword). 
                // If the object was created in stack, then we wont had to manually call delete.
                // Going out of scope would have automatically called desctructor.
 
    
    //Inheritance sequence of calling constructor and desctructor
    Child *c1 = new Child();
    delete(c1);


    return 0; 
}
