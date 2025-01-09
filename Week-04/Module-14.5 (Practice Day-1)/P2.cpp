#include <bits/stdc++.h>
using namespace std;

int main()
{   
    stack<int> st, st2;
    queue<int> q, q2;

    int n;
    cin >> n;
    while(n--)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    int m;
    cin >> m;
    while(m--)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    
    if(n != m)
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
        if(flag == true)
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