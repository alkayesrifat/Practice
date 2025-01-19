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

void printlist(Node *head){
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value<<endl;
        temp = temp->next;
    }
    
}

void insert_at_any_position(Node *head,int index , int val){

    Node *newnode = new Node(val);
    Node *temp = head;
    for (int i = 0; i < index-1; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;



}




int main(){


    Node *head = new Node(10);
    Node *a = new Node(20);   
    Node *b = new Node(30);
    head->next = a;
    a->next = b;

    printlist(head);

    cout << endl<<endl<<endl<<endl<<endl<<endl;

    insert_at_any_position(head,2,1000000);

    printlist(head);



    return 0;
}