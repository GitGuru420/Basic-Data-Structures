#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class comparator
{
public:
    bool operator()(Student a, Student b)
    {
        if(a.marks == b.marks)
        {
            if(a.roll  > b.roll)
                return true;
            else
                return false;
        }
        else
        {
            if(a.marks < b.marks)
                return true;
            else
                return false;
        }
    }
};

void give_current_max(priority_queue<Student, vector<Student>, comparator> &pq)
{
    if(!pq.empty())
    {
        Student pr = pq.top();
        cout << pr.name << " " << pr.roll << " " << pr.marks << endl;
    }  
    else
    {
        cout << "Empty" << endl;
    }
}

int main()
{
    priority_queue<Student, vector<Student>, comparator> pq;

    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name; cin >> name;
        int roll, marks; cin >> roll >> marks;
        pq.push(Student(name, roll, marks));
    }

    int q;
    cin >> q;
    while(q--)
    {
        int x; cin >> x;
        if(x == 0)
        {
            string name; cin >> name;
            int roll, marks; cin >> roll >> marks;
            pq.push(Student(name, roll, marks));
        }
        else if(x == 2)
        {
            if(!pq.empty())
                pq.pop();
        }
        give_current_max(pq);
    }
}