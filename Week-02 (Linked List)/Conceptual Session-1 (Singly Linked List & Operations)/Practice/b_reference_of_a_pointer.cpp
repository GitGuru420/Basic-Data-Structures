#include <bits/stdc++.h>
using namespace std;

// pass by value
void fun1(int a, int b) 
{
    a = b + 10;
    b = a + 20;
    cout << "In fun1: " << a << " " << b << endl;
}

// pass by reference
void fun2(int &a, int &b) 
{
    a = b + 15;
    b = a + 25;
    cout << "In fun2: " << a << " " << b << endl;
}

void fun3(int* &q)
{
    cout << "In fun3: " << *q << endl;
    q = NULL;
    cout << "In fun3: " << q << endl;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "In main: " << a << " " << b << endl;
    fun1(a, b);
    cout << "In main: " << a << " " << b << endl;
    fun2(a, b);
    cout << "In main: " << a << " " << b << endl;

    int x;
    cin >> x;
    int* p = &x;
    fun3(p);
    cout << "In main: " << p << endl;

    return 0;
}