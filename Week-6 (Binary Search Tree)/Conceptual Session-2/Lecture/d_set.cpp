#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;

    // s.insert(10);
    // s.insert(10);
    // s.insert(1);
    // s.insert(2);
    // s.insert(5);
    // s.insert(2);
    // s.insert(5);
    // s.insert(10);
    // s.insert(12);
    // s.insert(7);
    for(int i=0; i<5; i++)
    {
        int x; cin >> x;
        s.insert(x);
    }

    for (auto it : s)
    {
        cout << it << " ";
    }

    return 0;
}