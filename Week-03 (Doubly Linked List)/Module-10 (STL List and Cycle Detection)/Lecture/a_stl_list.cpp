#include <bits/stdc++.h>
using namespace std;

int main()
{
    // list<int> l;
    // cout << l.size() << endl;

    // list<int> l(10);
    // cout << l.size() << endl;

    list<int> l(10, 3);
    cout << l.size() << endl;

    // print list
    // cout << *l.begin() << endl;

    // iterator based for loop
    for(auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    // ranged based for loop
    for(int val:l)
    {
        cout << val << " ";
    }

    cout << endl;

    list<int> l1 = {1,2,3,4,5};
    list<int> l2(l1);
    for(int value:l2)
    {
        cout << value << " ";
    }
    
    cout << endl;

    int a[] = {10, 20, 30};
    list<int> l3(a, a+3);
    for(int val1: l3)
    {
        cout << val1 << " ";
    }

    cout << endl;

    vector<int> v = {100, 200, 300};
    list<int> l4(v.begin(), v.end());
    for(int i:l4)
    {
        cout << i << " ";
    }

    return 0;
}