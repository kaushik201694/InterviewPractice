#include <iostream>

using namespace std;

#define log(x) cout<< x.first << " " << x.second << endl

int main() {

    pair<int, string> p1;
    p1 = {54, "tenma"};
    log(p1);

    pair<int, string> p2 = p1;
    p2 = {56, "kaushik"};
    log(p2);
    log(p1);
    
    pair<int, string> &p3 = p1;    // p3 is reference to p1 ,ie, p3 is an alias to p1
    p3 = {65, "chatterjee"};
    log(p3);
    log(p1);


}