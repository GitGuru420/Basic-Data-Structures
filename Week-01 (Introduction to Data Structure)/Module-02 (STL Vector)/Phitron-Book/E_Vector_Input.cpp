#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // way-1
    // vector<int> v;
    // for(int i=0; i<n; i++) {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    return 0;
}