#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // problem-1
    /*
    for(int i=1; i<sqrt(n); i++) {
        if(n%i == 0) {
            cout << i << " " << n/i << " ";
        }
    }   // time complexity: O(sqrt(N))
    */

    // problem-2
    int i=1, s=1;
    while(s<n) {
        s+=i;
        i++;
    }   // time complexity: O(sqrt(N))

    return 0;
}