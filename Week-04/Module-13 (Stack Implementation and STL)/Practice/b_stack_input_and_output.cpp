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
    int n;  // Stack Size
    cin >> n;

    // Input
    while(n--)
    {
        int value;
        cin >> value;
        st.push(value);
    }

    // Output
    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}