#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {19,29,39,49,59};
    cout << v[2] << endl;
    cout << v.at(3) << endl;
    cout << v.back() << endl;
    cout << v[v.size()-1] << endl;
    cout << v.front() << endl;
    cout << v[0] << endl;

    return 0;
}