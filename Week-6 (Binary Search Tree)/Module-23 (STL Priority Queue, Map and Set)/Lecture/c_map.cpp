#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    mp["tamim"] = 2;
    mp["ramim"] = 5;
    mp["shamim"] = 50;
    mp["hamim"] = 0;

    // cout << mp["tamim"] << endl;
    // cout << mp["ramim"] << endl;
    // cout << mp["shamim"] << endl;

    // for(auto it = mp.begin(); it!=mp.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    if(mp.count("hamim"))
        cout << "Ache" << endl;
    else
        cout << "Nei" << endl;
    return 0;
}