#include <bits/stdc++.h>
using namespace std;

void prefixSum(int n) {
    // vector element input
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

    // print prefix sum
    for(int i=0; i<n; i++) {
        cout << prefixSum[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;
    prefixSum(n);

    return 0;
}