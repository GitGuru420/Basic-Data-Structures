#include <bits/stdc++.h>
using namespace std;

int main()
{
    // way-1: TC -> O(1)
    // list<int> lst;    // constructs a list with 0 elements
    // cout << lst.size() << endl;

    // way-2: TC -> O(N)
    // list<int> lst(5);   // constructs a list with 5 elements and the value will be garbage
    // cout << lst.size() << endl;

    // print way-1
    // for(int val : lst)
    // {
    //     cout << val << " ";
    // }

    // print way-2
    // for(auto it = lst.begin(); it != lst.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    // way-3: TC -> O(N)
    // list<int> lst(5, 2);    // constructs a list with 5 elements and the value will be 2
    // for(int val : lst)
    // {
    //     cout << val << " ";
    // }

    // way-4: TC -> O(N)
    // list<int> lst = {1, 2, 3, 4, 5};
    // list<int> lst2(lst);    // constructs a list by coping lst to lst2
    // for(int val : lst2)
    // {
    //     cout << val << " ";
    // }

    // way-5: TC -> O(N)
    // int arr[] = {10, 20, 30, 40, 50};
    // list<int> lst(arr, arr+5);
    // for(int val : lst)
    // {
    //     cout << val << " ";
    // }

    // way-6: TC -> O(N)
    vector<int> v = {100, 200, 300};
    list<int> lst(v.begin(), v.end());
    for(int val : lst)
    {
        cout << val << " ";
    }

    return 0;
}