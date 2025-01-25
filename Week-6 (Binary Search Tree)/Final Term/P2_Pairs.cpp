#include <bits/stdc++.h>
using namespace std;

class comparator
{
public:
    bool operator()(pair<string, int> a, pair<string, int> b)
    {
        if(a.first == b.first)
        {
            if(a.second < b.second)
                return true;
            else
                return false;
        }
        else
        {
            if(a.first > b.first)
                return true;
            else
                return false;
        }
    }
};

int main()
{
    priority_queue<pair<string, int>, vector<pair<string, int>>, comparator> pq;
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s; cin >> s;
        int r; cin >> r;
        pq.push({s, r});
    }

    while (!pq.empty())
    {
        pair<string, int> pr = pq.top();
        cout << pr.first << " " << pr.second << endl;
        pq.pop();
    }
}