#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    // cout << "Size: " << v.size() << endl;
    // cout << "Max_Size: " << v.max_size() << endl;
    
    // capacity() function
    /*
    cout << "Capacity: " << v.capacity() << endl;
    v.push_back(10);
    cout << "Capacity: " << v.capacity() << endl;
    v.push_back(20);
    cout << "Capacity: " << v.capacity() << endl;
    v.push_back(30);
    cout << "Capacity: " << v.capacity() << endl;
    v.push_back(40);
    cout << "Capacity: " << v.capacity() << endl;
    v.push_back(50);
    cout << "Capacity: " << v.capacity() << endl;
    for(int x:v) {
        cout << x << " ";
    }
    */

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    
    // clear() function
    /*
     cout << v.size() << endl;
    v.clear();
    cout << v.size() << endl;
    // for(int x:v) {
    //     cout << x << " ";
    // }
    cout << v[0] << endl;
    cout << v[1] << endl;
    cout << v[2] << endl;
    cout << v[3] << endl;
    */

    // empty() function
    /*
    if(v.empty() == true) {
        cout << "The vector is empty" << endl;
    }
    else {
        cout << "The vector is not empty" << endl;
    }
    */

    // resize() function
    cout << "Size : " << v.size() << endl; 
    // v.resize(5); 
    v.resize(5, 50); 
    cout << "Size : " << v.size() << endl;
    for(int x:v) {
        cout << x << " ";
    }
    cout << endl;
    v.resize(2);
    for(int x:v) {
        cout << x << " ";
    }
    return 0;
}