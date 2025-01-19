#include<bits/stdc++.h>
using namespace std;

// Creating NOde

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

// taking input of the binary three

Node* input_binary_tree(){

    // Taking input the root value
    int first_number ; cin >> first_number;

    // create the root node

    Node *root ;

    if(first_number == -1) root = NULL;
    else root = new Node(first_number);

    // create the queue and push 

    queue<Node*>q;

    if(root != NULL) q.push(root);
    else return root;

    // main body part ... here we will take input the whole binary three by following some steps

    while (q.empty() == false)
    {
        // step 1 ...    queue theke ber kore ana , ar notun ekta node e store rakha , pop kore deoa

        Node *front_node = q.front();
        q.pop();

        /*   step 2 ...    oi node er jonno duita number input neoa , tarpor new node create kora
        , oi number jodi -1 hoy taile taile node er modhe null rakha , ar naile oi value rakha
        */ 

       int left_value , right_value; 

       cin >> left_value >> right_value;

       Node *left_node , *right_node;

       if(left_value == -1) left_node = NULL;
       else left_node = new Node(left_value);

       if(right_value == -1) right_node = NULL;
       else right_node = new Node(right_value);



       front_node->left = left_node;
       front_node->right = right_node;



       // step 3  ...     jodi child take tail queue te push kore deoa

       if(front_node->left != NULL) q.push(front_node->left);
       if(front_node->right != NULL) q.push(front_node->right);





    }
    

    return root;

}


int count_leef(Node *root){
    if (root == NULL)    return 0; 
    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
      
    int leftcount = count_leef(root->left);
    int rightcount = count_leef( root->right);
    return leftcount  + rightcount ;
}




int main(){

    

    Node *root = input_binary_tree();

    
    cout << count_leef(root);
    
    return 0;
}