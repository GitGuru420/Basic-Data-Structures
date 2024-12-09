#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // example-1
    /*
    int result = 0;
    for(int i=0; i<n; i++) {
        result += i;
    }
    // here is no new variable to get in, so space complexity: O(1)
    */

    // example-2
    int ar[n];  // space complexity: O(N)
    for(int i=0; i<n; i++) {
        cout << ar[i] << " ";
    }
    // so sc: O(N)

    return 0;
}