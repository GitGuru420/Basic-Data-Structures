/*
            10
        20          30
    40          50      60
*/

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

Node* input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if(val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    // if(root != NULL)
    if(root)
        q.push(root);

    while (!q.empty())
    {
        // 1. ber kore ana
        Node *p = q.front(); // p->parent
        q.pop();

        // 2. oii node niye kaj
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

        p->left = myLeft;
        p->right = myRight;

        // 3. children push kora
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

int count_leaf_nodes(Node* root)
{
    if(root == NULL)
        return 0;
    if(root->left == NULL && root->right == NULL)
        return 1;
    int l = count_leaf_nodes(root->left);
    int r = count_leaf_nodes(root->right);
    return l+r;
}

int main()
{
    Node *root = input_tree();
    cout << count_leaf_nodes(root) << endl;
    return 0;
}