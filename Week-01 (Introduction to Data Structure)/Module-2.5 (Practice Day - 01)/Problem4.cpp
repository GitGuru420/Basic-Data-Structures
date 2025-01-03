#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> freq(26, 0);
    for(int i=0; i<s.size(); i++) {
        int index = s[i] - 'a';
        freq[index]++;
    }

    for(int i=0; i<26; i++) {
        if(freq[i] != 0) {
            cout << char(i+'a') <<" : " << freq[i] << endl;
        }
    }

    // time complexity: O(n)
    
    return 0;
}