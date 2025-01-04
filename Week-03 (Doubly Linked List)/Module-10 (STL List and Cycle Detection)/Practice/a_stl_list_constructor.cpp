#include <bits/stdc++.h>
using namespace std;

int main()
{
    // way-1
    // list<int> l;    
    // cout << "List size: " << l.size() << endl;
    // cout << "List value: " << *l.begin() << endl;

    // way-2
    // list<int> l(5);
    // cout << "List size: " << l.size() << endl;
    // for(int val : l)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;
    
    // way-3
    // list<int> l(5, 10);
    // for(int val : l)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;

    // way-4
    // list<int> l(5, 12);
    // list<int> l2(l);
    // for(int val : l2)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;

    // way-5
    // int a[] = {1, 2, 3, 4, 5};
    // list<int> l(a, a+5);
    // for(int val : l)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;

    // way-6
    // vector<int> v = {1, 2, 3, 4, 5};
    // list<int> l(v.begin(), v.end());
    // for(int val : l)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;

    // another way to print list
    list<int> l = {100, 20, 30, 40, 50};
    for(auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}