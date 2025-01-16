/*          
            8
          /   \
        3       10
       / \      / \
      1   6    9   14     
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

void level_order(Node *root)
{
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
    Node *root = new Node(8);
    Node *a = new Node(3);
    Node *b = new Node(10);
    Node *c = new Node(1);
    Node *d = new Node(6);
    Node *e = new Node(9);
    Node *f = new Node(14);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    b->left = e;
    b->right = f;

    // level order
    level_order(root);

    return 0;
}