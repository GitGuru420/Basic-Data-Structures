#include <bits/stdc++.h>
using namespace std;

void sort(int n)
{
    list<int> l;
    while(n--)
    {
        int val;
        cin >> val;
        l.push_back(val);
    }
    l.sort();
    l.unique();
    for(int val : l)
    {
        cout << val << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        sort(n);
    }
    
    return 0;
}