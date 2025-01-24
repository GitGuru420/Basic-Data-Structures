#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> freq;
    int t; cin >> t;
    while(t--)
    {
        string username; cin >> username;
        if(freq[username] == 0)
            cout << "OK" << endl;
        else
        {
            cout << username << freq[username] << endl;
        }
        freq[username]++;
    }
    return 0;
}