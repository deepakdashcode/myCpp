#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;
    
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }

};

class cll
{
    public:
        Node* tail;



    void insertNodeAfter(int data, int newData)
    {
        // If cll is empty
        if(this->tail == NULL)
        {
            this->tail = new Node(data);
            tail->next = tail;
            return;
        }
        Node* start = this->tail;
        
        // If cll is not empty
        if(tail->next == tail)
        {
            // One element
            Node* temp = tail;
            Node* newNode = new Node(newData);
            temp->next = newNode;
            newNode->next = tail;
            tail = newNode;
        }
        while(start->data != data)
        {
            start = start->next;
            
            if(start->next == tail->next)
            {
                Node* temp = tail;
                Node* newNode = new Node(newData);
                newNode->next = tail->next;
                tail->next = newNode;

            }

            else
            {
                Node* newNode = new Node(newData);
                newNode->next = start->next;
                start->next = newNode;
            }

        }
    }
    cll(int data)
    {
        Node* temp = new Node(data);
        tail = temp;
        tail->next = temp;
    }
};
int main()
{

    cll ll(10);
    ll.insertNodeAfter(10, 100);
    ll.insertNodeAfter(100, 30);
    ll.insertNodeAfter(30, 70);

    return 0;
}