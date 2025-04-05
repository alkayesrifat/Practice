#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int val;
    Node *left;
    Node *right;
    Node(int val){
        this->left = NULL;
        this->right = NULL;
        this->val = val;
    }
};


Node* input_tree(){

// --------------------------------------------------------------------------------------------

    int root_number ; cin >> root_number;

    Node *root ;

    if (root_number != -1)
    {
        root = new Node(root_number);
    }
    else
    {
        root = NULL;
    }

    queue<Node *>q;

    if (root != NULL)
    {
        q.push(root);
    }
    else
    {
        return root;
    }

// --------------------------------------------------------------------------------------------
    
    
    while (q.empty() == false)
    {
        Node *frontnode = q.front();
        q.pop();

        int leftnum , rightnum ; cin >> leftnum >> rightnum;

        Node *leftnode , *rightnode;

        if (leftnum != -1)
        {
            leftnode = new Node(leftnum);
        }
        else
        {
            leftnode = NULL;
        }

        if (rightnum != -1)
        {
            rightnode = new Node(rightnum);
        }
        else
        {
            rightnode = NULL;
        }

        frontnode->left = leftnode;
        frontnode->right = rightnode;



        if (frontnode->left != NULL)
        {
            q.push(frontnode->left);
        }
        if (frontnode->right != NULL)
        {
            q.push(frontnode->right);
        }
        



    }
    return root;   


}


void leef(Node *root){

    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        cout << root->val<<" ";
    }

    

    leef(root->right);
    
    leef(root->left);

    


}



int main(){


    Node *root =input_tree();

    


    leef(root);


    
    return 0;
}