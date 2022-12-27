#include<iostream>

using namespace std;

class node
{
    public:
        int data;
        node* next;
    
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class ll
{
    public:
        node* head;
    
    ll()
    {
        head = NULL;
    }

    void add(int data)
    {
        if(head)
        {
            node* temp = new node(data);
            temp->next = head;
            head = temp;
        }
        else{
            head = new node(data);

        }

    }
    void print()
    {
        node* start = head;
        while(start)
        {
            cout << start->data << " ";
            start = start->next;
        }
        cout << "\n";
        
    }

    void reverse()
    {
        if(!(head) || (!(head->next)))
        {
            return;
        }
        node* prv = NULL;
        node* nxt = head->next;
        while(nxt)
        {
            head->next = prv;
            prv = head;
            head = nxt;
            nxt = head->next;
        }
        head->next = prv;
    }

    

};
int main()
{
    ll ls;
    ls.add(10);
    // ls.add(30);
    // ls.add(50);
    ls.print();
    ls.reverse();
    ls.print();
    return 0;
}