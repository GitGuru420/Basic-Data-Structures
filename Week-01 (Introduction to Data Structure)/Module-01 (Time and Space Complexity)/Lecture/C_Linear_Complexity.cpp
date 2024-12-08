#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;  // --> O(1)
    cin >> n;   // --> O(1)

    // for(int i=1; i<=n; i++)     // --> O(n)
    // for(int i=1; i<=n/2; i++)     // --> O(n)
    // for(int i=1; i<=2*n; i++)     // --> O(n)
    // for(int i=1; i<=n+5; i++)     // --> O(n)
    // for(int i=1; i<=n-5; i++)     // --> O(n)
    for(int i=1; i<=n-5; i += 2)     // --> O(n)
    {
        cout << i << " ";
    }
    cout << endl;   // --> O(1)
    for(int i=1; i<=n; i++)     // --> O(n)
    {
        cout << i << " ";
    }

    return 0;   // --> O(1)
}
// total complexity --> O(n)