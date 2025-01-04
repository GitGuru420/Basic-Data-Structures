#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {100, 200, 300};
    list<int> l2(v.begin(), v.end());

    // l2.clear();
    cout << "List size: " << l2.size() << endl;
    if(l2.empty())
    {
        cout << "Empty" << endl;
    }
    else 
    {
        cout << "Not Empty" << endl;
    }

    // l2.resize(2);
    // l2.resize(5);
    l2.resize(5, 99);
    for(int val : l2)
    {
        cout << val << endl;
    }
    return 0;
}