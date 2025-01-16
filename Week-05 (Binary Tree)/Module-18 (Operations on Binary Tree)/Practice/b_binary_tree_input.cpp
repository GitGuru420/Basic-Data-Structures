/*          
            8
          /   \
        3      10
       /       / \
      1       9   14     
*/
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

void level_order(Node *root)
{
    if(root == NULL)
        return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        // Step-1: Node Ber Kore Ana
        Node *f = q.front();
        q.pop();

        // Step-2: Ber Kora Node Niye Kaj Kora
        cout << f->value << " ";

        // Step-3: Node er children push kora
        if(f->left != NULL)
            q.push(f->left);
        if(f->right != NULL)
            q.push(f->right);
    }
}

int main()
{
    Node *root = input_tree();

    // level order
    level_order(root);

    return 0;
}