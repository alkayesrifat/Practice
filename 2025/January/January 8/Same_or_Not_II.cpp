#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node *next ;
    Node *prev;
    Node(int val){
        this->val = val ;
        this->next = NULL;
        this->prev = NULL;
    }
};

class mystack{
    public:
    Node *head = NULL;
    Node *tail = NULL;
    int len = 0; int lenn = 0;

    void spush(int v){

        Node *newnode = new Node(v);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode; len++; 
            return;
        }
        tail->next = newnode;
        newnode->prev = tail; len++; 
        tail = newnode;
    }
    void qpush(int v){

        Node *newnode = new Node(v);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;  lenn++;
            return;
        }
        tail->next = newnode;
        newnode->prev = tail;  lenn++;
        tail = newnode;
    }
    void spop(){
        Node *deln = tail;
        tail = tail->prev;
        delete deln;
        if (tail == NULL)
        {
            head = NULL;len--; return;
        }
        tail->next = NULL; len--;
        
    }

    void qpop(){
        Node *hdel = head;
        head = head->next;
        delete hdel;
        if (head == NULL)
        {
            tail = NULL;lenn--; return;
        }
        head->prev = NULL; lenn--;
        
    }

    int top(){
        return tail->val;
    }
    int front(){
        return head->val;
    }

    bool empty(){
        if (head == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
        
        
    }
    int ssize(){
        return len;
        

    }
    int qsize(){
        return lenn;

    }
    



};


int main(){

    int nn; cin >> nn ; int mm ; cin >> mm;
    mystack n; mystack m; 

    for (int i = 0; i < nn; i++)
    {
        int v;
        cin >>v ;
        n.spush(v);

    }

    for (int i = 0; i < mm; i++)
    {
        int v;
        cin >>v ;
        m.qpush(v);

    }
    int f = 1;
    if (n.ssize() == m.qsize())
    {
        while (n.empty() == false)
        {
            if (n.top() != m.front())
            {
                f = 0; break;
            }
            n.spop();m.qpop();
            
        }
        
    }
    else
    {
        f = 0;
    }
    
    if (f == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    

    return 0;
}