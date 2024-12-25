#include <bits/stdc++.h>
using namespace std;

int main()
{   
    list<int> lst = {1, 2, 3, 4, 5};
    cout << lst.size() << endl;
    cout << lst.max_size() << endl;

    // lst.clear();
    // cout << lst.size() << endl;
    if(lst.empty())
    {
        cout << "Yes, list is Empty" << endl;
    }
    else 
    {
        cout << "No, list is Not Empty" << endl;
    }

    // lst.resize(2);
    // lst.resize(5);
    // lst.resize(7);
    lst.resize(7, 100);
    for(int val : lst)
    {
        cout << val << " ";
    }

    return 0;
}