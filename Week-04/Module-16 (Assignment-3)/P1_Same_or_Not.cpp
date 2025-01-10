#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    queue<int> q, q2;

    int n, m;
    cin >> n >> m;
    while (n--)
    {
        int val1;
        cin >> val1;
        st.push(val1);
    }

    while (m--)
    {
        int val2;
        cin >> val2;
        q.push(val2);
    }

    if (n != m)
    {
        cout << "NO" << endl;
    }
    else
    {
        while (!st.empty())
        {
            q2.push(st.top());
            st.pop();
        }
        if (q == q2)
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