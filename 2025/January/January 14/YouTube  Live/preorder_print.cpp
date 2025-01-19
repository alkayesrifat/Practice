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

Node* input_tree(){

    int first_val  ; cin >> first_val;

    Node *root ;


    if(first_val != -1) root = new Node(first_val);
    else root = NULL;


    queue<Node*>q;

    if(root == NULL) return root;
    else q.push(root);


    while (q.empty() == false)
    {
        Node *front_node = q.front();
        q.pop();

        int left_val , right_val; 
        cin >> left_val >> right_val;

        Node *left_node , *right_node;

        if(left_val == -1) left_node = NULL;
        else left_node = new Node(left_val);

        if(right_val == -1) right_node = NULL;
        else right_node = new Node(right_val);

        front_node->left = left_node;
        front_node->right = right_node;

        if(front_node->left != NULL)q.push(front_node->left);
        if(front_node->right != NULL) q.push(front_node->right);


    }

    return root;
    



}


void preorder_print(Node *root){
    if (root == NULL)
    {
        return;
    }
    cout << root->val << " ";
    preorder_print(root->left);
    preorder_print(root->right);

}


int main(){

    Node *root = input_tree();
    preorder_print(root);
    return 0;
}