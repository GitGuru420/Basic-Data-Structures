#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // for(int i=1; i<=sqrt(n); i++)   // O(sqrt(N))
    for(int i=1; i*i<=n; i++)   // O(sqrt(N))
    { 
        cout << i << " ";
    }

    return 0;
}