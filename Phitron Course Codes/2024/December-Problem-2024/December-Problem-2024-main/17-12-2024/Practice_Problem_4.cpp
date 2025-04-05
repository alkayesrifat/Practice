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
void printlinkedlist(Node *head){
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
    
}

void addback(Node* &head, Node* &tail, int val) {
    Node *newnode = new Node(val);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
    } else {
        tail->next = newnode;
        tail = newnode;
    }
}

int coutlinkedlist(Node *head){

    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count = count +1;
        temp = temp->next;
    }
    return count;
    
}

void insertany(Node* &head,int index,int val){

    Node *newnode = new Node(val);
    Node *temp = head;

    for (int i = 0; i < index-1; i++)
    {
        if (temp->next == NULL)
        {
            break;
        }
        temp = temp->next;
        
    }
    newnode->next = temp->next;
    temp->next = newnode;


}


void inserthead(Node* &head,int val){
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
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
    int index,value;
    while (cin >> index>>value)
    {
        int len = coutlinkedlist(head);
        if (index <= len)
        {
            if (index == 0)
            {
                inserthead(head,value);
                printlinkedlist(head);
            }
            else if (index == len)
            {
                addback(head,tail,value);
                printlinkedlist(head);
            }
            
            else
            {
                insertany(head,index,value);
                printlinkedlist(head);
            }
            
            
        }
        else
        {
            cout << "Invalid" << endl;
        }
        
        
    }
    
    
    return 0;
}