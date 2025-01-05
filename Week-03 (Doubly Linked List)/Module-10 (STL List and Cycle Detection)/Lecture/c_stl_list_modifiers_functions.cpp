#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 40, 50, 60, 70};
    list<int> l2 = {100, 200, 300};
    vector<int> v = {2, 3, 4};
    // list<int> l2;

    // l2 = l;
    // l2.assign(l.begin(), l.end());
    // for(int val : l2)
    // {
    //     cout << val << " ";
    // }

    // l.push_back(40);
    // l.push_front(100);
    // for(int val : l)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;

    // l.pop_back();
    // l.pop_front();
    // for(int val : l)
    // {
    //     cout << val << " ";
    // }

    // cout << *next(l.begin(), 2) << endl;
    // l.insert(next(l.begin(), 2), 100);
    // l.insert(next(l.begin(), 2), l2.begin(), l2.end());
    // l.insert(next(l.begin(), 2), v.begin(), v.end());

    // l.erase(next(l.begin(), 3));
    // l.erase(next(l.begin(), 2), next(l.begin(), 5));

    // replace(l.begin(), l.end(), 20, 100);

    // auto it = find(l.begin(), l.end(), 200);
    auto it = find(l.begin(), l.end(), 20);
    if(it == l.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }
    for(int val : l)
    {
        cout << val << " ";
    }

    return 0;
}