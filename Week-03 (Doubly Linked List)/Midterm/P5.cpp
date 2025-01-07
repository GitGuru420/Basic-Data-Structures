#include <bits/stdc++.h>
using namespace std;

void left_to_right(list<int> l)
{
    cout << "L -> ";
    for(int val : l)
    {
        cout << val << " ";
    }
    cout << endl;
}

void right_to_left(list<int> l)
{
    l.reverse();
    cout << "R -> ";
    for(int val : l)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{   
    list<int> l;
    int q;
    cin >> q;
    int x, v;
    while(q--)
    {
        cin >> x >> v;
        if(x == 0)
        {
            l.push_front(v);
            left_to_right(l);
            right_to_left(l);
        }
        else if(x == 1)
        {
            l.push_back(v);
            left_to_right(l);
            right_to_left(l);
        }
        else if(l.size() != NULL)
        {
            if(v == 0)
            {
                l.pop_front();
                left_to_right(l);
                right_to_left(l);
            }
            else
            {
                if(l.size() <= v)
                {
                    left_to_right(l);
                    right_to_left(l);
                    continue;
                }
                else if(l.size()-1 == v)
                {
                    l.pop_back();
                    left_to_right(l);
                    right_to_left(l);
                }
                else
                {
                    l.erase(next(l.begin(), v));
                    left_to_right(l);
                    right_to_left(l);
                }
            }
        }
        else 
        {
            left_to_right(l);
            right_to_left(l);
            continue;
        }
    }
    
    return 0;
}