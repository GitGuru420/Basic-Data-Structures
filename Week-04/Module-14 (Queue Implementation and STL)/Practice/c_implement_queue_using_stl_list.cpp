#include <bits/stdc++.h>
using namespace std;

class myQueue
{
    public:
        list<int> l;
    
    void push(int value)
    {
        l.push_back(value);
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    int back()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    myQueue q;
    int n;
    cin >> n;
    while(n--)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    
    return 0;
}