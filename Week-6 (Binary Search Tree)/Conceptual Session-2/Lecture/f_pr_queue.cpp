#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int > pq;
    for(int i=0; i<5; i++)
    {
        int x; cin >> x;
        pq.push(x);
    }

    while(!pq.empty())
    {
        cout << pq.top() << endl;
        pq.top();
    }
    
    return 0;
}