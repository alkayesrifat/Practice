#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int value;
    Node *next = NULL;
    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};




void printlinkedlist(Node *head){
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
    
}

void countlinkedlist(Node *head){
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    cout << endl << count << endl;
    
}


void addtaillinkedlist(Node* &head,Node* &tail,int value){
    Node *newnode = new Node(value);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail  = newnode;
    
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

        addtaillinkedlist(head,tail,value);
        
    }
    printlinkedlist(head);
    countlinkedlist(head);
    

    return 0;
}