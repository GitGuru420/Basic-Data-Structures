#include <bits/stdc++.h>
using namespace std;

// void fun(int* p)
void fun(int* &p)
{
    // cout << "In fun: " << *p << endl;
    // *p = 100;
    // int y = 200;
    // p = &y;
    // cout << "In fun: " << &p << endl;
    p = NULL;
}

int main()
{   
    int x = 10;
    int* p = &x;
    fun(p);
    // cout << "In main: " << *p << endl;
    // cout << x << endl;
    // cout << *p << endl;
    // cout << "In main: " << &p << endl;
    cout << "In main: " << p << endl;

    return 0;
}