#include <bits/stdc++.h>
using namespace std;

class myQueue
{
    public:
        list<int> l;
    
    void push(int value)    // O(1)
    {
        l.push_back(value);
    }
    void pop()  // O(1)
    {
        l.pop_front();
    }
    int front()     // O(1)
    {
        return l.front();
    }
    int back()  // O(1)
    {
        return l.back();
    }
    int size()  // O(1)
    {
        return l.size();
    }
    bool empty()    // O(1)
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
        int value;
        cin >> value;
        q.push(value);
    }

    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}