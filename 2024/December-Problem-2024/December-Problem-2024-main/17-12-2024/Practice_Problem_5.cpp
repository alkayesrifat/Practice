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

void addback(Node* &head,Node* &tail,int val){

    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    tail->next = newnode;
    tail = newnode;
}

void issort(Node *head){
    int found = 0;
    while (head->next != NULL)
    {
        if (head->value > head->next->value)
        {
            found = 1;
            break;
        }
        head = head->next;
    }
    if (found == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    
}

int main(){

    Node *head = NULL;
    Node *tail = NULL;

    while (1)
    {
        int num;
        cin >> num;
        if (num == -1)
        {
            break;
        }
        addback(head,tail,num);
        
    }
    issort(head);
    
    return 0;
}