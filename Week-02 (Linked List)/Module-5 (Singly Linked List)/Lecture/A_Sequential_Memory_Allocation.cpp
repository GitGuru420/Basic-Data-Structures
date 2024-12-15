#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    // cout << arr[2] << " " << arr[3] << endl;
    // cout << &arr[1] << " " << &arr[2] << endl;
    // cout << (int)&arr[1] << " " << (int)&arr[2] << endl;    // this line give me error, because my windows
    cout << (uintptr_t)&arr[1] << " " << (uintptr_t)&arr[2] << endl;

    // vector
    vector<int> v = {1, 2, 3, 4, 5};
    // cout << v[3] << " " << v[4] << endl;
    cout << (uintptr_t)&v[2] << " " << (uintptr_t)&v[3] << " " <<  (uintptr_t)&v[4] << endl;

    return 0;
}