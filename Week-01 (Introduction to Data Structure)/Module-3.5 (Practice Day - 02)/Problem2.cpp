#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    // prefix sum
    vector<int> prefixSum(n);
    prefixSum[0] = v[0];
    for(int i=0; i<n; i++) {
        prefixSum[i+1] = prefixSum[i] + v[i+1];
    }

    // index
    for(int i=1; i<n-1; i++) {
        if(prefixSum[i-1] == (prefixSum[n-1] - prefixSum[i])) {
            cout << i << endl;
        }
    }

    return 0;
}