#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    queue<int> q;

    int n, m;
    cin >> n >> m;
    while (n--)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    while (m--)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    if (st.size() != q.size())
    {
        cout << "NO" << endl;
    }
    else
    {
        bool flag = true;
        while(!st.empty())
        {
            if(st.top() != q.front())
            {
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }

        if(flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}