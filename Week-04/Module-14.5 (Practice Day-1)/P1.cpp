#include <bits/stdc++.h>
using namespace std;

class myStack
{
    public:
        list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    myStack st1, st2;
    int n;
    cin >> n;
    while(n--)
    {
        int val;
        cin >> val;
        st1.push(val);
    }

    int m;
    cin >> m;
    while(m--)
    {
        int val;
        cin >> val;
        st2.push(val);
    }

    if(n != m)
    {
        cout << "NO" << endl;
    }
    else
    {
        bool flag = true;
        while(!st1.empty())
        {
            if(st1.top() != st2.top())
            {
                flag = false;
                break;
            }
            st1.pop();
            st2.pop();
        }
        if(flag == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}