#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1,2,3,2,5,4,7,2};
    for(auto it = v.begin(); it<v.end(); it++) {
        cout << *it << " ";
    }

    return 0;
}