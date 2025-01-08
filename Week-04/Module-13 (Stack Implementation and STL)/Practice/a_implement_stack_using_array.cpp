#include <bits/stdc++.h>
using namespace std;

class myStack
{
    public:
        vector<int> v;
    
    // push
    void push(int value)
    {
        v.push_back(value);
    }   
    // pop
    void pop()
    {
        v.pop_back();
    }
    // top
    int top()
    {
        return v.back();
    }
    // size
    int size()
    {
        return v.size();
    }
    // empty
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
    st.push(40);
    st.push(50);

    /*
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    // cout << st.top() << endl;
    // if(!st.empty())
    // if(st.empty() == false)
    if(st.empty() != true)
        cout << st.top() << endl;
    
    if(!st.empty())
        st.pop();
    */

    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}