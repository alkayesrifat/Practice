#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node *left ;
    Node *right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelorder(Node *root){
    
    queue<Node*>q;
    q.push(root);

    while (q.empty() == false)
    {
        Node *front = q.front();
        q.pop();
        cout << front->val << " ";
        if (front->left != NULL)
        {
            q.push(front->left);
        }
        if (front->right != NULL)
        {
            q.push(front->right);
        }
        
        
    }
    

}

int main(){

    
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);

    root->left = a ;
    root->right = b;

    a->left = c;
    b->left = d;
    b->right = e;


    levelorder(root);



    return 0;
}