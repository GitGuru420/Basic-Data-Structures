#include <bits/stdc++.h>
using namespace std;

int main() {
    // vector<int> v(10);
    // cout << v.size() << endl;
    // cout << v.max_size() << endl;

    vector<int> v = {1,2,3,4};
    // cout << v.size() << endl;
    // v.clear();
    // cout << v.size() << endl;
    // cout << v[2] << endl;

    // cout << v.empty() << endl;
    // v.clear();
    // cout << v.empty() << endl;

    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    // v.resize(10);
    v.resize(10, 100);
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}