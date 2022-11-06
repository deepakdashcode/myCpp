#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Linked_List
{
public:
    Node *head;
    Node *tail;

    Linked_List(int data)
    {
        head = new Node(data);
        tail = head;
    }

    void add_left(int data)
    {
        Node *temp = new Node(data);

        temp->next = head;

        head = temp;
    }

    void add_right(int data)
    {
        Node *temp = new Node(data);
        tail->next = temp;
        tail = temp;
    }
    void print()
    {
        Node *start = head;

        while (start != NULL)
        {
            cout << start->data << " ";
            start = start->next;
        }

        cout << "\n";
    }
};

int main()
{
    Linked_List ll(10);

    ll.print();

    ll.add_left(20);

    ll.print();

    ll.add_left(50);

    ll.print();

    ll.add_right(100);

    ll.print();

    return 0;
}