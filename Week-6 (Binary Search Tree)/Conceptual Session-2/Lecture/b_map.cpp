#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<char, int> frequency;
    string s; cin >> s;
    for(int i=0; i<s.size(); i++)
    {
        char current_char = s[i];
        frequency[current_char]++;
    }

    int q; cin >> q;
    while(q--)
    {
        char ch; cin >> ch;
        cout << frequency[ch] << endl;
    }
    return 0;
}