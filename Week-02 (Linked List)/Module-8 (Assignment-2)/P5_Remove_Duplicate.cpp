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

void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

void remove_duplicate(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        Node *temp1 = temp;
        while (temp1->next != NULL)
        {
            if (temp->value == temp1->next->value)
            {
                Node *deleteNode = temp1->next;
                temp1->next = temp1->next->next;
                delete deleteNode;
            }
            else
            {
                temp1 = temp1->next;
            }
        }
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    remove_duplicate(head);
    print_linked_list(head);

    return 0;
}