#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // problem-1
    /*
    for(int i=n; i>1; i/=2) {
        cout << i << endl;
    }   // time complexity: O(logN)
    */

    // problem-2
    /*
    for(int i=1; i<n; i*=2) {
        cout << i << endl;
    }   // time complexity: O(logN)
    */
    
    // problem-3
    int k=2;
    for(int i=0; i<n; i++) {
        i*=k;
    }   // time complexity: O(logN)

    return 0;
}