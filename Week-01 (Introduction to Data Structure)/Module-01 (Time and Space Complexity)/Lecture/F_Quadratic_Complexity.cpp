#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

   /*
    for(int i=1; i<=n; i++) {   // --> O(n);
        for(int j=1; j<=n; j++) {   // --> O(n)
            cout << "Hello" << endl;
        }
    }
    // total time complexity O(n*n)
   */

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout << "Hello" << endl;
        }
    }
    // total time complexity O(n*m)

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            for(int k=0; k<n; k++) {
                cout << "Hello" << endl;
            }
        }
    }
    // total time complexity O(n*n*n)
    
    return 0;
}