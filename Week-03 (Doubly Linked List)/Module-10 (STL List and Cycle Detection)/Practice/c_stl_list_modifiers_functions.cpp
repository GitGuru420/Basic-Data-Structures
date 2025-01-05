#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30};
    // list<int> l2;
    // l2 = l;
    // l2.assign(l.begin(), l.end());
    // for(int val : l2)
    // {
    //     cout << val << " ";
    // }

    l.push_back(40);
    l.push_back(50);

    l.push_front(100);
    l.push_front(200);

    l.pop_back();
    l.pop_front();

    // list<int> l2 = {99, 999, 9999};
    list<int> l2 = {99, 999, 99};
    l.insert(next(l.begin(), 2), l2.begin(), l2.end());
    
    // l.erase(next(l.begin(), 2));
    // l.erase(next(l.begin(), 2), next(l.begin(), 5));

    replace(l.begin(), l.end(), 99, 1111);
    // auto it = find(l.begin(), l.end(), 99);
    auto it = find(l.begin(), l.end(), 100);
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
    cout << endl;

    // cout << *next(l.begin(), 3) << endl;
    return 0;
}