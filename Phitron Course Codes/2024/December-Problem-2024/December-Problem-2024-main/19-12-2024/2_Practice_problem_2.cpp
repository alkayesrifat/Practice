#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int value;
    Node *next;
    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};


void add_at_tail(Node* &head,Node* &tail,int val){

    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
    

}

void reverseprinting(Node *head){
    if (head == NULL)
    {
        return;
    }
    reverseprinting(head->next);
    cout << head->value << " ";
}


int main(){

    Node *head = NULL;
    Node *tail = NULL;

    int value;
    while (1)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }
        add_at_tail(head,tail,value);
        
    }
    reverseprinting(head);
    
    return 0;
}