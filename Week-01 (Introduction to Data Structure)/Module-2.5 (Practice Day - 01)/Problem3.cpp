#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    int count = 0;
    for(int i=0; i<n; i++) {    // O(n)
        auto it = find(v.begin(), v.end(), v[i]+1);     // O(n)
        if(it != v.end()) {
            count++;
        }
    }
    cout << count << endl;

    // time complexity: O(n*n)

    return 0;
}