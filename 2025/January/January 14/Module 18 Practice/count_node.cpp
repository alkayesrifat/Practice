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

    int root_Number ; cin >> root_Number;

    Node *root;

    if(root_Number == -1) root = NULL;
    else root = new Node(root_Number);

    queue<Node*>q;

    if(root == NULL) return root;
    else q.push(root);

    while (q.empty() == false)
    {
        Node *front_node = q.front();
        q.pop();

        int left_num ,right_num ; 
        cin >> left_num >> right_num;

        Node *right_node ; Node *left_node;

        if(left_num == -1) left_node = NULL;
        else left_node = new Node(left_num);

        if(right_num == -1) right_node = NULL;
        else right_node = new Node(right_num);

        front_node->left = left_node;
        front_node->right = right_node;


        if(front_node->left != NULL) q.push(front_node->left);
        if(front_node->right != NULL) q.push(front_node->right);

    }
    return root;
    
}

int count_node(Node *root){

    if (root == NULL)
    {
        return 0;

    }

    int left_count = count_node(root->left);
    int right_count = count_node(root->right);

    return left_count + right_count +1;
    
}

int main(){


    Node *root = input_tree();

    cout << count_node(root);



    
    return 0;
}