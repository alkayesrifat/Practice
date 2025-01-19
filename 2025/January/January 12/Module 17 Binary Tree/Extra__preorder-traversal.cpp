#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node *left;
    Node *right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void preorder(Node *root){
    if (root == NULL)
    {
        return;
    }
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
    
}


int main(){


    Node *root = new Node(1);
    Node *b = new Node(7);
    Node *c = new Node(2);
    Node *d = new Node(6);
    Node *e = new Node(5);
    Node *f = new Node(11);
    Node *g = new Node(9);
    Node *h = new Node(9);
    Node *i = new Node(5);



    root->left = b;
    b->left = c;
    b->right =d ;
    d->left = e;
    d->right = f;
    root->right = g;
    g->left = h;
    h->left = i;

    preorder(root);


    
    return 0;
}