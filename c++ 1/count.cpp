#include <vector>
#include <string>
#include <algorithm>
#include <map>

int main() {
    vector<int> v{3, 43, 41, 22, -78, 92};

    int c1 =0, c2=0, c3=0;
    int const target = 43;
    for (size_t i=0; i<v.size(); i++) {
        if(v[i] == target) {
            c1++;
        }
    }
    
    c2 = count(v.begin(), v.end(), target);
    c3 = count(begin(v), end(v), target);
    
    odds = count_if(begin(v), end(v), [](auto elem){return elem%2 != 0;});

}
