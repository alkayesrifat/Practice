#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_binary_tree(){

    int root_number ; cin >> root_number;

    queue<Node*>q;

    Node *root ;

    if(root_number == -1) root = NULL;
    else root = new Node(root_number);

    if(root == NULL)return root;
    else q.push(root);

    

    
}




int main(){


    return 0;
}