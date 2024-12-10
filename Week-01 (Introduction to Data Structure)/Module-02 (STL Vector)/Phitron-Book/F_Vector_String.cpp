#include <bits/stdc++.h>
using namespace std;

int main() {
    // type-1: without space
    // int n;
    // cin >> n;
    // vector<string> v(n);
    // for(int i=0; i<n; i++) {
    //     cin >> v[i];
    // }

    // type-2: with space
    int n;
    cin >> n;
    cin.ignore();
    vector<string> v(n);
    for(int i=0; i<n; i++) {
        getline(cin, v[i]);
    }
    for(int i=0; i<n; i++) {
        cout << v[i] << " ||";
    }

    return 0;
}