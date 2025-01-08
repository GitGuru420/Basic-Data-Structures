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
    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;

    // st.pop();
    // cout << st.top() << endl;

    // line 44, 45 corner case handling
    // if(st.empty() == false)
    if(!st.empty()) // shortcut
        cout << st.top() << endl;

    // if(st.empty() == false)
    if(!st.empty())
        st.pop();

    return 0;
}