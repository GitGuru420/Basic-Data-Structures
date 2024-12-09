#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // for(int i=1; i<=n; i++)     // O(N)
    // for(int i=1; i<=n/2; i++)     // O(N)
    // for(int i=1; i<=n*2; i++)     // O(N)
    // for(int i=1; i<=n+5; i++)     // O(N)
    // for(int i=1; i<=n-5; i++)     // O(N)
    // for(int i=1; i<=n; i+=2)     // O(N)
    for(int i=1; i<=n; i-=2)     // O(N)
    {
        cout << i << " ";
    }
    // Linear Time Complexity: O(N)

    return 0;
}