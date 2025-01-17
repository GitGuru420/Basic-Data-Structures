#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int value;
        Node* left;
        Node* right;
    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if(val == -1)
        root = NULL;
    else    
        root = new Node(val);
    queue<Node*> q;
    if(root != NULL)
        q.push(root);
    
    while(!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;
        if(l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);

        if(r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);
        
        p->left = myLeft;
        p->right = myRight;

        if(p->left != NULL)
            q.push(p->left);
        if(p->right != NULL)
            q.push(p->right);
    }
    return root;
}

void leaf_nodes(Node* root)
{
    vector<int> v;
    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        if(f->left == NULL && f->right == NULL)
            v.push_back(f->value);
        
        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }
    sort(v.begin(), v.end(), greater<>());
    for(int val : v)
    {
        cout << val << " ";
    }
}

int main()
{
    Node *root = input_tree();
    leaf_nodes(root);
    
    return 0;
}