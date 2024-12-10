#include<bits/stdc++.h>
using namespace std;

int main() {
    // type-1: vector<data_type> vector_name;
    vector<int> v;
    vector<char> v;
    vector<float> v;
    vector<long long> v;

    // type-2: vector<data_type> vector_name(size);
    vector<int> v(100);
    vector<char> v(50);
    vector<float> v(30);
    vector<long long> v(40);

    // type-3: vector<data_type> vector_name(size, initial_value);
    vector<int> v(100, 10);
    vector<char> v(50, 'a');
    vector<int> v(30, 2.5);
    vector<int> v(40, 100);

    // type-4
    vector<int> v1 = {1,2,3,4,5};
    vector<int> v2(v1);

    int arr[5] = {1,2,3,4,5};
    vector<int> copy_vector(arr, arr+5);


    return 0;
}