#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node *next = NULL;
    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};
void addback(Node* &head,Node* &back,int val){

    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        back = newnode;
        return;
    }
    back->next = newnode;
    back = newnode;
    
}
void printre(Node* head){
    if (head == NULL)
    {
        return;
    }
    printre(head->next);
    cout << head->value << endl;
    
}

int main(){

    Node *head = NULL;
    Node *back = NULL;

    int val;

    while (1)
    {

        cin >> val;
        if (val == -1)
        {
            break;
        }
        addback(head,back,val);
        
    }
    printre(head);
    
    
    return 0;
}