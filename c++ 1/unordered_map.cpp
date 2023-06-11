#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    string s = "kaushikchatterjee";
    
    unordered_map<char, int> m1 ;
    
    for(int i=0; i<s.length(); i++)
    {
        if(m1.count(s[i]) == 0)
            m1[s[i]]=1;
        else
            m1[s[i]] ++;
    }
    
    for(auto x: m1)
    {
        cout<< x.first << "-->" << x.second << endl;
    }
    

    return 0;
}