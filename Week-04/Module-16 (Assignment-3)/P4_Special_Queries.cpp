#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> q;
    int Q;
    cin >> Q;

    while (Q--)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            string s;
            cin >> s;
            q.push(s);
        }
        else
        {
            if (q.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
    }
    
    return 0;
}