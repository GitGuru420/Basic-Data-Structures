#include <bits/stdc++.h>
using namespace std;

class myStack
{
    public:
        list<int> l;
    
    // push
    void push(int value)
    {
        l.push_back(value);
    }   
    // pop
    void pop()
    {
        l.pop_back();
    }
    // top
    int top()
    {
        return l.back();
    }
    // size
    int size()
    {
        return l.size();
    }
    // empty
    bool empty()
    {
        return l.empty();
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