#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);

    for(long long i=0; i<n; i++) {
        cin >> a[i];
    }

    // prefix sum
    vector<long long> prefixSum(n);
    prefixSum[0] = a[0];
    for(long long i=1; i<n; i++) {
        prefixSum[i] += prefixSum[i-1] + a[i];
    }

    reverse(prefixSum.begin(), prefixSum.end());
    for(long long i=0; i<n; i++) {
        cout << prefixSum[i] << " ";
    }

    return 0;
}