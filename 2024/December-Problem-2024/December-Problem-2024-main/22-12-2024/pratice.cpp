#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data = data;
        this->next= NULL;
        this->prev = NULL;
    }
    
};


void printll_forward(Node *head){
    Node *temp = head;
    while (temp!=NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    
}


void printll_backward(Node *tail){
    Node *temp = tail;
    while (temp!=NULL)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    
}


int main(){

    Node *head = new Node(10);
    Node *a = new Node(100);
    Node *tail = new Node(1000);

    head->next = a;
    a->next = tail;
    a->prev = head;
    tail->prev =a ;
    printll_forward(head);
    cout << endl;
    printll_backward(tail);
    
    return 0;
}