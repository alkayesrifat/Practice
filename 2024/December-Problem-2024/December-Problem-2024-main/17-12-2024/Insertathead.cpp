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

void print_linked_list(Node *head){

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    
}

void insert_at_head(Node* &head,int val){
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}

int main(){

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(320);
    head->next = a;
    a->next = b;

    print_linked_list(head);

    cout << endl <<endl <<endl;

    insert_at_head(head,5);

    print_linked_list(head);

    return 0;
}