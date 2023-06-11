#include <iostream>

using namespace std;

class Ex1 {

    private:
        string newName;
    
    public:
        Ex1() {
            newName = "Tenma";
        }
        Ex1(const string &tempName) {
            newName = tempName;
        }

        const string &GetName() const {
            return newName;
        }
};


/*
in this class (Ex2) we are gonna perfrom member initialize list. this means that the way we will initialize the variables
though the constructors is different than the traditinal method. Initializing the member variables in this way has
2 major advantages:

1) if we initialize the variables like how we have done it here (below) , we can perfrom more important inside the  contructors
    and keep all the initialization work while outside it. In large programs with a lot of member variables this style is 
    much more preferrable as all those variables initialization will be done outside the constructor parenthesis and hence the
    code will look much cleaner.

2) Secondly, and more importantly, this way of initilizing the member variables will result in only ONE time initialization when
    the constructor is called. In normal style of member variable initialization inside a constructor, the variables are initialized
    2 times. Once when the constructor is called and once when the variables are explicitly initialized inside the constructor.
    When a default constructor is called, the member variables are automatically initialized. So if we initialize them again inside
    the constructor, we are just throwing away the default initialization and replace with the new one. So it is a waste of
    performance. Instead, if we use the below style, the default constrctor is initializing the member variable only once and
    with the specific value that we intended to assign. So here there is no wastage of performance.
*/
class Ex2 {
    private:
        string newName2;
        int roll;
    public:
        Ex2() : newName2("Tenma2"), roll(27) {
        }
        Ex2(const string &tempName2, const int &tempRoll) : newName2(tempName2), roll(tempRoll) {
        }

        const string &GetName2() const {
            return newName2;
        }

        const int &GetRoll() const {
            return roll;
        }
};

int main() {

    Ex1 e1;
    cout << "The name is " << e1.GetName() << endl;

    Ex1 e2("Kaushik");
    cout << "The name is -- " << e2.GetName() << endl;


    Ex2 e3;
    cout << "The name is " << e3.GetName2() << " and the roll is " << e3.GetRoll() << endl;

    Ex2 e4("Kaushik2",45);
    cout << "The name is -- " << e4.GetName2() <<" and the roll is " << e4.GetRoll() << endl;

}