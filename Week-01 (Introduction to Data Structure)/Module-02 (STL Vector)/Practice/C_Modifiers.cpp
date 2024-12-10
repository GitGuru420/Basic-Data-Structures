#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50, 20};
    /*
    vector<int> v2;
    v2 = v;
    for(int x:v2) {
        cout << x << " ";
    }
    cout << endl;
    // v.push_back(60);
    v2.push_back(60);
    for(int x:v2) {
        cout << x << " ";
    }
    // cout << endl;
    // v2.pop_back();
    // v2.pop_back();
    // v2.pop_back();
    // for(int x:v2) {
    //     cout << x << " ";
    // }
    cout << endl;
    v2.insert(v2.begin()+2, 99);
    for(int x:v2) {
        cout << x << " ";
    }
    cout << endl;
    vector<int> v3 = {100, 200, 300};
    v2.insert(v2.begin()+3, v3.begin(), v3.end());
    for(int x:v2) {
        cout << x << " ";
    }
    cout << endl;
    v2.erase(v2.begin()+2);
    for(int x:v2) {
        cout << x << " ";
    }
    cout << endl;
    v2.erase(v2.begin()+2, v2.end()-4);
    for(int x:v2) {
        cout << x << " ";
    }
    */

    replace(v.begin(), v.end(), 20, 100);
    for(int x:v) {
        cout << x << " ";
    }
    cout << endl;

    // vector<int>::iterator it = find(v.begin(), v.end(), 100);
    // vector<int>::iterator it = find(v.begin(), v.end(), 150);
    // cout << *it << endl;

    // auto it = find(v.begin(), v.end(), 100);
    auto it = find(v.begin(), v.end(), 200);
    cout << *it << endl;
    if(it == v.end()) {
        cout << "Not Found" << endl;
    }
    else {
        cout << "Found" << endl;
    }

    return 0;
}