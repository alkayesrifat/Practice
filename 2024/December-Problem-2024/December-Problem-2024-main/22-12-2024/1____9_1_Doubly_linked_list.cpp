#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int value;
    Node *prev;
    Node *next;
    Node(int value){
        this->value = value;
        this->prev = NULL;
        this->next = NULL;
    }
};



int main(){

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = new Node(40);

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev =a ;
    b->next = tail;

    
    return 0;
}