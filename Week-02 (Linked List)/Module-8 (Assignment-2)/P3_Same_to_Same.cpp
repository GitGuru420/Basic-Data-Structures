#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void linked_list1(Node *&head1, Node *&tail1, int value1)
{
    Node *newNode = new Node(value1);
    if (head1 == NULL)
    {
        head1 = newNode;
        tail1 = newNode;
        return;
    }
    tail1->next = newNode;
    tail1 = tail1->next;
}
void linked_list2(Node *&head2, Node *&tail2, int value2)
{
    Node *newNode = new Node(value2);
    if (head2 == NULL)
    {
        head2 = newNode;
        tail2 = newNode;
        return;
    }
    tail2->next = newNode;
    tail2 = tail2->next;
}

void compare(Node* head1, Node* head2)
{
    Node* temp1 = head1;
    Node* temp2 = head2;
    int idx1 = 0, idx2 = 0, flag = 0;
    
    while (temp1 != NULL)
    {
        temp1 = temp1->next;
        idx1++;
    }
    while (temp2 != NULL)
    {
        temp2 = temp2->next;
        idx2++;
    }

    if(idx1 != idx2) {
        cout << "NO" << endl;
    }
    else 
    {
        while(head1 != NULL && head2 != NULL) 
        {
            if(head1->value == head2->value) 
            {
                flag++;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        if(flag == idx1)
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
    }
    
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int value1;
    while(true)
    {
        cin >> value1;
        if(value1 == -1)
        {
            break;
        }
        linked_list1(head1, tail1, value1);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;
    int value2;
    while(true)
    {
        cin >> value2;
        if(value2 == -1)
        {
            break;
        }
        linked_list2(head2, tail2, value2);
    }

    compare(head1, head2);

    return 0;
}