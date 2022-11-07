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

    void insert(int data, int index)
    {

        if (index == 0)
        {

            add_left(data);
        }
        else
        {
            Node *start = head;
            for (int i = 1; i < index; i++)
            {
                start = start->next;
            }

            if (start->next == NULL)
            {
                // Inserting at last

                add_right(data);
                return;
            }
            Node *temp = new Node(data);

            temp->next = start->next;
            start->next = temp;
        }
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

    ll.add_right(100);

    ll.print();

    ll.insert(80, 2);

    ll.print();

    ll.insert(7, 0);

    ll.print();

    ll.insert(40, 4);

    ll.print();

    cout << ll.head->data << endl;
    cout << ll.tail->data << endl;
    return 0;
}