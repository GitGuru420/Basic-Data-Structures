#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        stack<char> st;
        string s;
        cin >> s;
        
        for(int i = 0; i < s.size(); i++)
        {
            if(!st.empty())
            {
                if(st.top() == '0' && s[i] == '1')
                {
                    st.pop();
                }
                else if(st.top() == '1' && s[i] == '0')
                {
                    st.pop();
                }
                else 
                {
                    st.push(s[i]);
                }
            }
            else
            {
                st.push(s[i]);
            }
        }

        if(!st.empty())
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}