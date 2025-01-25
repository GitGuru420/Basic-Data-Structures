#include <bits/stdc++.h>
using namespace std;

void give_current_min(priority_queue<int, vector<int>, greater<int>> &pq)
{
    if(!pq.empty())
        cout << pq.top() << endl;
    else
        cout << "Empty" << endl;
}

int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    int n; cin >> n;
    for(int i=0; i<n; i++)
    {
        int x; cin >> x;
        pq.push(x);
    }

    int q;
    cin >> q;
    while(q--)
    {
        int x; cin >> x;
        if(x == 0)
        {
            int val; cin >> val;
            pq.push(val);
        }
        else if(x == 2)
        {
            if(!pq.empty())
                pq.pop();
        }
        give_current_min(pq);
    }

    return 0;
}