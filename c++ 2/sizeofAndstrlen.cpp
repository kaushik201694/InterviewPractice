#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    cout<<"Hello World"<<endl;
    
    char c[] = "ajit";
    cout<<c<<endl;
    int n = sizeof(c)/sizeof(c[0]);
    cout<<"sizeof of c=" << n<<endl;
    int n1 = strlen(c);
    cout<<"sizeof of c=" << n1<<endl;
    
    char *buff = new char[n];
    memcpy(buff, c, n);
    cout<<buff<<endl;
    
    char *c1 = new char[7];
    c1 = "kaush";
    cout<<c1<<endl;
    int m = sizeof(c1)/sizeof(c1[0]);
    cout<<"sizeof of c1=" << m<<endl;
    int m1 = strlen(c1);
    cout<<"sizeof of c1=" << m1<<endl;

    return 0;
}