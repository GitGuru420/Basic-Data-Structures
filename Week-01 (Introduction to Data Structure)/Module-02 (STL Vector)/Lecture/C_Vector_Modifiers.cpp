#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1,2,3,4,5};
    vector<int> v2;
    v2 = v;
    /*
    for(int i=0; i<v2.size(); i++) {
        cout << v2[i] << " ";
    }
    */
    /*
    for(int x:v2) {
        cout << x << " ";
    }
    */
    // v2.pop_back();
    /*
    for(int x:v2) {
        cout << x << " ";
    }
    */

    // v.insert(pos, val);
    // v2.insert(v2.begin()+2, 100);
    // vector<int> v3 = {100, 200, 300};
    // v2.insert(v2.begin()+2,v3.begin(), v3.end());
    // v2.erase(v2.begin()+2);
    // v2.erase(v2.begin()+1, v2.begin()+4);
    v2.erase(v2.begin()+1, v2.end()-1);
    for(int x:v2) {
        cout << x << " ";
    }

    return 0;
}