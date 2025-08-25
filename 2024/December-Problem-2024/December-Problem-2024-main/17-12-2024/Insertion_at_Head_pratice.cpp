/*


Insertion at Head
Insertion at Tail
Insertion at Specific Position

ei tinda baki sokale kormu
*/

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


void inserthead(Node* &head,int val){
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
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
    


    inserthead(head,5000);
    printlinkedlist(head);
    return 0;
}