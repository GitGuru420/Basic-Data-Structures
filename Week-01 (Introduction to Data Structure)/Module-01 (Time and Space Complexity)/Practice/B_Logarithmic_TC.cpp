#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // for(int i=1; i<=n; i*=2)    // O(logN)
    for(int i=n; i>1; i/=2)    // O(logN)
    {  
        cout << i << " ";
    }

    return 0;
}