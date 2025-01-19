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

    int firstnumber ; cin >> firstnumber;

    Node *root;

    if(firstnumber == -1) root = NULL;
    else root = new Node(firstnumber);

    queue<Node*>q;

    if(root == NULL) return root;
    else q.push(root);

    while (q.empty() == false)
    {
        Node* frontnode = q.front();
        q.pop();

        int leftnum ; int rightnum;
        cin >> leftnum >> rightnum;

        Node *leftnode , *rightnode;

        if(leftnum == -1) leftnode = NULL;
        else leftnode = new Node(leftnum);

        if(rightnum == -1) rightnode = NULL;
        else rightnode = new Node(rightnum);

        frontnode->left = leftnode;
        frontnode->right = rightnode;


        if(frontnode->left != NULL) q.push(frontnode->left);
        if(frontnode->right != NULL) q.push(frontnode->right);

    }
    return root;
    

    

}


int maximum(Node *root){
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return 0;
    }

    int leftmax = maximum(root->left);
    int rightmax = maximum(root->right);

    return max(leftmax,rightmax) +1;
    
    

}



int main(){

    Node *root = input_tree();

    cout << maximum(root);



    
    return 0;
}






