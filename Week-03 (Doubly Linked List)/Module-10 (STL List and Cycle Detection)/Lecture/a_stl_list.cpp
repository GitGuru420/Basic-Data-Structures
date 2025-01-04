#include <bits/stdc++.h>
using namespace std;

int main()
{
    // list<int> l;
    // cout << "List Size: " << l.size() << endl;

    // list<int> l(10);
    // cout << "List Size: " << l.size() << endl;

    // list<int> l(10, 3);
    // cout << *l.begin() << endl;
    // for(auto it = l.begin(); it != l.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    // list<int> l(3, 10);
    // for(int val : l)
    // {
    //     cout << val << endl;
    // }

    list<int> l = {1, 2, 3, 4, 5};
    // int a[] = {10, 20, 30};
    vector<int> v = {100, 200, 300};
    // list<int> l2(l);

    // list<int> l2(a, a+3);
    list<int> l2(v.begin(), v.end());

    for(int val : l2)
    {
        cout << val << endl;
    }

    return 0;
}