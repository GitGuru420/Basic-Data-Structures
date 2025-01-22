#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int root_val;
    cin >> root_val;
    Node *root;
    if (root_val == -1)
        root = NULL;
    else
        root = new Node(root_val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);
        f->left = myLeft;
        f->right = myRight;

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}

void level_order(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();

        cout << f->value << " ";

        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }
}

void insert(Node* &root, int val)
{
    if(root == NULL)
        root = new Node(val);
    if(root->value < val)
    {
        if(root->right == NULL)
            root->right = new Node(val);
        else
            insert(root->right, val);
    }
    else
    {
        if(root->left == NULL)
            root->left = new Node(val);
        else
            insert(root->left, val);
    }
}

int main()
{
    Node *root = input_tree();
    int insert_val;
    cin >> insert_val;
    insert(root, insert_val);
    level_order(root);
    
    return 0;
}