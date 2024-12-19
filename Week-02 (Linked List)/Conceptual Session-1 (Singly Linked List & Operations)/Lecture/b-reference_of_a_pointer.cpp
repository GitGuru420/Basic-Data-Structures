#include <bits/stdc++.h>
using namespace std;

// pass by value
// void sum(int a, int b)
// {
//     a += 10;
//     cout << a+b << endl;
// }

// pass by reference
// void sum1(int &a, int &b)
// {
//     a += 10;
//     cout << a+b << endl;
// }

void null_converter(int* &p)
{
    p = NULL;
}

int main()
{
    // int a, b;
    // cin >> a >> b;
    // cout << a << " " << b << endl;
    // // sum(a, b);
    // sum1(a, b);
    // cout << a << " " << b << endl;

    int a;
    cin >> a;
    int* p = &a;
    null_converter(p);
    // cout << p << endl;
    if(p!=NULL)
    {
        cout << *p << endl;
    }
    else
    {
        cout << "P is pointed to null" << endl;
    }
    
    return 0;
}