#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1,2,3,2,5,4,7,2};
    // replace(v.begin(), v.end(), 2, 100);
    // replace(v.begin(), v.end()-1, 2, 100);
    /*
    for(int x:v) {
        cout << x << " ";
    }
    */

    // vector<int>::iterator it = find(v.begin(), v.end(), 100);
    auto it = find(v.begin(), v.end(), 100);
    cout << *it << endl;
    if(it == v.end()) {
        cout << "Not found" << endl;
    }
    else {
        cout << "Found" << endl;
    }

    return 0;
}