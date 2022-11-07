#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *previous;

    Node(int data)
    {
        this->data = data;
        next = NULL;
        previous = NULL;
    }
};

class deque
{
public:
    Node *head;

    Node *tail;
    deque(int data)
    {
        Node *temp = new Node(data);

        head = temp;
        tail = temp;
    }

    void push_back(int data)
    {
        Node *temp = new Node(data);

        temp->previous = this->tail;

        this->tail->next = temp;

        this->tail = temp;
    }

    void push_front(int data)
    {
        Node *temp = new Node(data);

        this->head->previous = temp;

        temp->next = head;

        head = temp;
    }

    void pop_back()
    {
        this->tail->previous->next = NULL;
        Node *temp = this->tail;
        this->tail = this->tail->previous;
        delete temp;
    }

    void pop_front()
    {
        Node *temp = this->head;
        head = head->next;
        head->previous = NULL;
        delete temp;
    }
    void print()
    {
        Node *start = this->head;

        while (start != NULL)
        {
            cout << start->data << " ";

            start = start->next;
        }

        cout << "\n";
    }

    void insert(int data, int index)
    {
        Node *start = this->head;
        if (index == 0)
        {
            push_front(data);
            return;
        }
        for (int i = 1; i < index; i++)
        {
            start = start->next;
        }

        if (start->next == NULL)
        {
            push_back(data);
            return;
        }
        Node *temp = new Node(data);

        temp->previous = start;
        temp->next = start->next;

        start->next->previous = temp;
        start->next = temp;
    }
};

int main()
{
    deque d(10);
    d.print();
    d.push_back(100);
    d.print();
    d.push_back(200);
    d.print();

    d.push_front(50);
    d.print();
    d.push_front(80);
    d.print();

    d.pop_back();
    d.print();

    // d.pop_front();
    // d.print();

    // d.pop_front();
    // d.print();

    // d.insert(20, 1);
    // d.print();

    d.insert(70, 3);
    d.print();
    return 0;
}