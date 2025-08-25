#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value ;
    Node *next;
    Node(int value){
        this->value = value;
        this->next = NULL;
    }

};
void print_linkedlist(Node* head){
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }
    
}
void insertlinkedlist(Node* &head,int i){
    Node *newnode = new Node(i);
    newnode->next = head;
    head = newnode;
}

int main(){

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    head->next = a;
    a->next = b;

    print_linkedlist(head);

    insertlinkedlist(head,100);
    insertlinkedlist(head,100);
    insertlinkedlist(head,100);


    cout << endl << endl<<endl;
    print_linkedlist(head);

    return 0;
}