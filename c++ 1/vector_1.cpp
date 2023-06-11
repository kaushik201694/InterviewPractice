#include<iostream>
#include<vector>
#include<iterator>

using namespace std;
 
void print_vec( vector<int> temp) {                  //Major adv of vectors -- we dont need to pass the size of the vector during fuction calls
    vector<int>::iterator printItr;
    cout<<"The elements are:" <<endl;
    for(printItr = temp.begin(); printItr< temp.end(); printItr++)
    {
        cout<< *printItr <<" ";
    }
    cout << endl;
}

int main() {

    vector<int> v1;

    for(int i=50; i<75 ; i++) {
        v1.push_back(i);
    }
    cout<< "Will print the 1st vector now: " << endl;
    print_vec(v1) ;

    vector<int> v2(10,3);              // This will first allocate 10 spaces which all will be initalized to 0 first
                                       // The "3" refers to the  value that will be assigned after that to all the 10 spaces.
    v2.push_back(5);

    cout<< "Will print the 2nd vector now: " << endl;

    print_vec(v2);

    return 0;


}