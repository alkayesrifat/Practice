

#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int value;
    Node *next ;
    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};


void inserttail(Node* &head,int val){
    Node *newnode = new Node(val);
    Node *temp = head;
    while (temp->next != NULL)
    {
        
        temp = temp->next;
    }
    temp->next = newnode;
    
}

void printlinkedlist(Node *head){
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
    
}

int main(){

    Node *head = new Node(10);
    Node *b = new Node(50);
    head->next = b;
    


    inserttail(head,5000);
    inserttail(head,5000);
    inserttail(head,5000);
    printlinkedlist(head);
    return 0;
}