#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {20, 30, 10, 50, 30, 60, 60, 10};
    // l.remove(10);
    // l.sort();
    // l.sort(greater<int>());
    // l.unique();     // it's work when list are sort
    l.reverse();
    
    for(int val : l)
    {
        cout << val << " ";
    }
    return 0;
}