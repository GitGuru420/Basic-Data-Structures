#include <bits/stdc++.h>
using namespace std;

int main() {
    // example-1
    /*
    int n, m, x, y;
    cin >> n >> m;
    for(int i=0; i<n; i++) {    // O(N)
        x++;
    }
    for(int i=0; i<m; i++) {    // O(M)
        y++;
    }
    // total time complexity: O(N+M)
    */

    // example-2
    /*
    int n, a=0;
    cin >> n;
    for(int i=0; i<n; i++) {    // O(N)
        for(int j=n; j>i; j--) {    // O(N)
            a = a+i+j;
        }
    }
    // total time complexity: O(N*N)
    */

    // example-3
    /*
    int n, k=0;
    cin >> n;
    for(int i=2; i<=n/2; i++) {     // O(N)
        for(int j=2; j<=n; j*=2) {      // O(logN)
            k = k+n/2;
        }
    }
    // total time complexity: O(NlogN)
    */

    // example-4
    /*
    int n=20;   // O(1)
    int sum = (n*(n+1))/2;  // O(1)
    if(sum % 2 == 0) {  // O(1)
        cout << "Even" << endl;
    }
    else {  // O(1)
        cout << "Odd" << endl;
    }
    // total time complexity: O(1)
    */

    // example-5
    /*
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {    // O(N)
        for(int j=0; j<n; j++) {    // O(N)
            for(int k=0; k<n; k++) {    // O(N)
                cout << i+j+k << endl;
            }
        }
    }
    // time complexity: O(N*N*N)

    for(int j=0; j<n; j++) {    // O(N)
        for(int k=0; k<n; k++) {    // O(N)
            cout << j+k << endl;    
        }
    }
    // time complexity: O(N*N)
    // total time complexity: O(N*N*N) + O(N*N) = O(N*N*N)
    */

    // example-6
    /*
    int n;
    cin >> n;
    int i=1; 
    while(i<n) {    // O(logN)
        int j=n;
        while(j>0) {    // O(logN)
            j /= 2;
        }
        i *= 2;
    }
    // total time complexity: O(logN*logN)
    */

    // example-7
    /*
    int n, m;
    cin >> n, m;

    for(int i=0; i<n; i++) {    // O(N)
        for(int j=0; j<m; j++) {    // O(M)
            cout << i*j << endl;
        }
    }
    // total time complexity: O(N*M)
    */

    // example-8
    int n;
    cin >> n;
    for(int i=0; i<n/2; i++) {      // O(N)
        for(int j=1; j+n/2 <= n; j++) {     // O(N)
            for(int k=1; k<=n; k*=2) {      // O(logN)
                cout << "Phitron" << endl;
            }
        }
    }
    // total time complexity: O(N*N*logN)

    return 0;
}