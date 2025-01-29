#include <bits/stdc++.h>
using namespace std;

int main()
{
    // natural number summation
    int n; cin >> n;

    // using loop
    /*
    int sum = 0;
    for(int i=1; i<=n; i++) // loop iterate n times
        sum += i;
    cout << sum << endl;
    */

    // using formula
    int sum = (n*(n+1))/2;
    cout << sum << endl;

    return 0;
}