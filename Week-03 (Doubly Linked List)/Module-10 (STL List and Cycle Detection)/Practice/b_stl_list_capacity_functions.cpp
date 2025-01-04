#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 40};
    // cout << "List size: " << l.size() << endl;
    // cout << "List max size: " << l.max_size() << endl;

    // l.clear();
    // cout << "List size: " << l.size() << endl;

    // l.clear();
    // if(l.empty())
    // {
    //     cout << "Empty" << endl;
    // }
    // else 
    // {
    //     cout << "Not Empty" << endl;
    // }

    // l.resize(2);
    // l.resize(6);
    l.resize(6, 99);
    for(int val : l)
    {
        cout << val << " ";
    }
    return 0;
}