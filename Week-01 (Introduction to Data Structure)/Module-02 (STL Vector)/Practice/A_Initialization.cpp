#include <bits/stdc++.h>
using namespace std;

int main() {
    // type-1
    /*
    vector<int> v;
    cout << "Size of vector: " << v.size() << endl;
    */

    // type-2
    /*
    vector<int> v(5);
    cout << "Size of vector: " << v.size() << endl;
    */

    // type-3
    /*
    vector<int> v(5, -1);
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }

    for(int x:v) {
        cout << x << " ";
    }
    */

    // type-4
    /*
    vector<int> v(5, 100);
    vector<int> v2(v);
    for(int x:v2) {
        cout << x << " ";
    }
    */

    // type-5
    /*
    int ar[5] = {1,2,3,4,5};
    vector<int> v(ar, ar+5);
    for(int x:v) {
        cout << x << " ";
    }
    */

    // type-6
    vector<int> v = {10, 20, 30, 40, 50};
    for(int x:v) {
        cout << x << " ";
    }

    return 0;
}