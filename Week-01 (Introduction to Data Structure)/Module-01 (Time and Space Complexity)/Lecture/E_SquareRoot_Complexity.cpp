#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    /*
    for(int i=1; i<=sqrt(n); i++) {   // --> O(sqrt(N)) 
        cout << i << endl;
    }
    */

    /*
    for(int i=1; i<=n; i++) {
        if(n%i == 0) {
            cout << i << " ";
        }
    }
    */

    for(int i=1; i<=sqrt(n); i++) {   // --> O(sqrt(N)) 
        if(n%i == 0) {
            cout << i << " " << n/i << " ";
        }
    }

    return 0;
}