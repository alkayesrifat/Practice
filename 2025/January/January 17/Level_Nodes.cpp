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



Node* input_binary_tree(){

   
    int first_number ; cin >> first_number;

  

    Node *root ;

    if(first_number == -1) root = NULL;
    else root = new Node(first_number);

  

    queue<Node*>q;

    if(root != NULL) q.push(root);
    else return root;

    
    while (q.empty() == false)
    {
        
        Node *front_node = q.front();
        q.pop();

        
       int left_value , right_value; 

       cin >> left_value >> right_value;

       Node *left_node , *right_node;

       if(left_value == -1) left_node = NULL;
       else left_node = new Node(left_value);

       if(right_value == -1) right_node = NULL;
       else right_node = new Node(right_value);



       front_node->left = left_node;
       front_node->right = right_node;



       

       if(front_node->left != NULL) q.push(front_node->left);
       if(front_node->right != NULL) q.push(front_node->right);





    }
    

    return root;

}


void level(pair<Node *,int>a , int x){

    
    queue<pair<Node *,int>>q;

    q.push({a.first,a.second});
    pair<Node *,int>tt;

    while (q.empty() == false)
    {
        pair<Node *,int>t = q.front();
        q.pop();

        if (t.second == x)
        {
            cout << t.first->val << " ";
        }
        

        

        
        if(t.first->left != NULL)q.push({t.first->left,t.second + 1});
        if(t.first->right != NULL)q.push({t.first->right,t.second + 1});

        tt = t;
        
        
    }
    if (x > tt.second)
    {
        cout << "Invalid";
        
    }

    
    


}


int main(){

    
    Node *root = input_binary_tree();
    int x; cin >>x;

    level({root,0},x);

    
    
    
    
    return 0;
}