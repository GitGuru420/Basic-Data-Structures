#include <bits/stdc++.h>
using namespace std;

int main() {
    // vector assign
    vector<int> v = {1,2,3,4,5};
    // vector<int> v1;
    // v1 = v;

    // push_back()
    // v.push_back(6);
    // for(int i=0; i<v.size(); i++) {
    //     cout << v[i] << " ";
    // }

    // pop_back()
    // v.pop_back();
    // for(int i=0; i<v.size(); i++) {
    //     cout << v[i] << " ";
    // }

    // insert()
    // v.insert(v.begin()+2, 10);
    // for(int i=0; i<v.size(); i++) {
    //     cout << v[i] << " ";
    // }
    // vector<int> v2 = {90, 99};
    // v.insert(v.begin()+3, v2.begin(), v2.end());
    // for(int i=0; i<v.size(); i++) {
    //     cout << v[i] << " ";
    // }

    // erase()
    // v.erase(v.begin()+2);
    // v.erase(v.begin()+1, v.begin()+3);
    // for(int i=0; i<v.size(); i++) {
    //     cout << v[i] << " ";
    // }
    

    // replace()
    // replace(v.begin(), v.end(), 4, 44);
    // for(int i=0; i<v.size(); i++) {
    //     cout << v[i] << " ";
    // }

    // find()
    auto it = find(v.begin(), v.end(), 3);
    if(it != v.end()) {
        cout << "found the value " << *it << endl;
    }
    else {
        cout << "not found" << endl;
    }

    return 0;
}