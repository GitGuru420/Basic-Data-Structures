#include <bits/stdc++.h>
using namespace std;

int main()
{   
    list<int> lst = {1, 2, 3, 4, 5};
    // lst.clear();
    // for(int val : lst)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;
    // cout << lst.size() << endl;

    // if(lst.empty())
    // {
    //     cout << "Empty" << endl;
    // }
    // else
    // {
    //     cout << "Not Empty" << endl;
    // }

    // lst.resize(2);
    // lst.resize(5);
    lst.resize(5, 100);
    for(int val : lst)
    {
        cout << val << " ";
    }
    return 0;
}