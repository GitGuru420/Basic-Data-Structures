// array and vector sequential memory allocation
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    // array
    int arr[5] = {10, 20, 40, 80, 160};
    for(int i=0; i<5; i++) {
        cout << arr[i] << " " << (uintptr_t)&arr[i] << endl;
    }
    cout << endl;

    // vector
    vector<int> v = {1, 2, 4, 8, 16};
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " " << (uintptr_t)&v[i] << endl;
    }
    cout << endl;
    v.push_back(32);
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " " << (uintptr_t)&v[i] << endl;
    }

    return 0;
}