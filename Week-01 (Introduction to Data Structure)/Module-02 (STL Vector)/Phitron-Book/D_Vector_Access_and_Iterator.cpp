#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1,2,3,4,5,6};
    // index access
    // v[1] = 10;
    // cout << v[2] << endl;
    // cout << v.front() << endl;
    // cout << v.back() << endl;

    // iterator
    // vector<int>::iterator it = v.begin();
    // cout << *it << endl;
    auto it = v.begin();
    while(it != v.end()) {
        cout << *it << endl;
        it++;
    }

    return 0;
}