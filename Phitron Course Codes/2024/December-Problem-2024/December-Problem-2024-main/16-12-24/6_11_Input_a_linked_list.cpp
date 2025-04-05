#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node* next;
    Node(int value){
        this->value = value;
        this->next = NULL;
    }

};

void printll(Node* head){
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
    
}

void addbackll(Node* &head,Node* &back,int val){
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
        addbackll(head,back,val);
        
    }
    printll(head);
    
    
    return 0;
}