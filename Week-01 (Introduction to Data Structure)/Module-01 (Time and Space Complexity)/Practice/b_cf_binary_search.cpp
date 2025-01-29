#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q; cin >> n >> q;
    int arr[n];
    for(int i=0; i<n; i++) 
        cin >> arr[i];

    for(int i=0; i<q; i++) {
        int x; cin >> x;
        bool flag = false;
        
        for(int i=0; i<n; i++) {
            if(arr[i] == x) 
                flag = true;
        }
        if(flag == true)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }
    
    return 0;
}