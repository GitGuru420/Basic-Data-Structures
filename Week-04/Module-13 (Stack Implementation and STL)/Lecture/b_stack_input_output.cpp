#include <bits/stdc++.h>
using namespace std;

class myStack
{
    public:
        vector<int> v;

    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};

int main()
{
    myStack st;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    // cout << st.top() << endl;

    // way-1
    // for(int i=0; i<n; i++)
    // {
    //     cout << st.top() << " ";
    //     st.pop();
    // }

    // way-2
    // while (!st.empty())
    // while (st.empty() != true)
    while (st.empty() == false)
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}