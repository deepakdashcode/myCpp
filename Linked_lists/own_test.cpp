#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

class linked_list
{
public:
    node *head;

    linked_list(int data)
    {
        node newNode;
        newNode.data = data;
        newNode.next = NULL;

        head = &newNode;
    }

    void add_left(int data)
    {
        node newNode;
        newNode.data = data;
        newNode.next = head;

        head = &newNode;
    }

    void print()
    {
        node start = *head;

        while (start.next != NULL)
        {
            cout << start.data << " ";

            start = *start.next;
        }
    }
};
int main()
{
    linked_list ll(10);
    ll.add_left(20);
    ll.add_left(30);
    ll.print();

    return 0;
}