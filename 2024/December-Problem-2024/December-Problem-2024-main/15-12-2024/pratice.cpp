#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node* next;
    Node(int value){
        this->value=value;
        this->next = NULL;
    }
    
};

int main(){

    Node *head = new Node (100);

    Node *a = new Node (10);
    Node *b = new Node (20);
    Node *c = new Node (30);
    
    head->next = a;
    a->next = b;
    b->next = c;
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value<<" ";
        temp = temp->next;
    }
    
    



    return 0;
}