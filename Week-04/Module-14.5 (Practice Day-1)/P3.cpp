#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st1, st2;
    int n;
    cin >> n;
    while(n--)
    {
        int val;
        cin >> val;
        st1.push(val);
    }

    while(!st1.empty())
    {
        st2.push(st1.top());
        st1.pop();
    }

    while(!st2.empty())
    {
        cout << st2.top() << " ";
        st2.pop();
    }
    
    return 0;
}