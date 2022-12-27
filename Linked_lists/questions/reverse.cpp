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

    node* rev(node* start)
    {
        if(!(start) || (!(start->next)))
        {
            return start;
        }

        node* newHead = rev(start -> next);
        start->next->next = start;
        start->next = NULL;
        return newHead;
    }

    void recursiveRev()
    {
        this->head = rev(this->head);

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
    ls.add(30);
    ls.add(50);
    ls.add(80);
    ls.print();
    ls.reverse();
    ls.print();
    ls.recursiveRev();
    ls.print();


    return 0;
}