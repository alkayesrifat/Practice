#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    string val;
    Node *prev;
    Node *next;
    Node(string val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }

};

void ttail(Node* &head,Node* &tail,string val){

    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
    
}

void printt(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* find(Node *head,string f){
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->val == f)
        {
            return temp;
        }
        temp = temp->next;
        
    }
    return NULL;
    
}

int main(){

    
    Node *head= NULL;
    Node *tail = NULL;
    Node *current = head;


    string a;

    while (1)
    {
        cin >>a;
        if (a == "end")
        {
            break;
        }
        ttail(head,tail,a);

        
    }
    
    int q; cin >>q;

    while (q--)
    {
        string s;
        cin >>s;
        if (s == "next")
        {
            if (current == NULL)
            {
                cout << "Not Available" << endl;
            }
            
            if (current->next == NULL)
            {
                cout << "Not Available" << endl;
                
            }
            else
            {
                current = current->next;
                cout << current->val << endl;
            }
            
        }
        else if (s == "prev")
        {
            if (current == NULL)
            {
                cout << "Not Available" << endl;
            }
            
            if (current->prev == NULL)
            {
                cout << "Not Available" << endl;
                
            }
            else
            {
                current = current->prev;
                cout << current->val << endl;
            }
        }
        else
        {
            string where;
            cin >> where;
            Node *c = find(head,where);
            if (c != NULL)
            {
                cout << c->val << endl;
                current =c;
            }
            else
            {
                cout << "Not Available" << endl;
                
            }   
            
        }
        
        
        
    }
    
    

    
    
    return 0;
}