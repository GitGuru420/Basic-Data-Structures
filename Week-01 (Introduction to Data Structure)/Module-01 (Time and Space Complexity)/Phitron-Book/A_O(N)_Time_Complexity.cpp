#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // problem-1
    /*
    for(int i=0; i<n; i++) {
        cout << i << " ";
    }   // time complexity: O(N)
    */

    // problem-2
    /*
    for(int i=0; i<n; i+=2) {
        cout << i << " ";
    }   // time complexity: O(N)
    */

    // problem-3
    int m;
    cin >> m;
    for(int i=1; i<=n; i++) {
        cout << i << " ";
    }   // time complexity: O(N)
    
    cout << endl;

    for(int j=1; j<=m; j++) {
        cout << j << " ";
    }   // time complexity: O(M)
    // total time complexity: O(N+M)
    

    return 0;
}