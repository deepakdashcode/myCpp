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

void add_left(Node *&head, int data)
{
    // Create a new node in heap
    Node *temp = new Node(data);
    temp->next = head;

    head = temp;
}

void print(Node *&head)
{
    Node *start = head;
    while (start != NULL)
    {
        cout << start->data << " ";
        start = start->next;
    }
    cout << "\n";
}

int main()
{

    Node *node = new Node(10);

    // cout << node->data << "\n";
    // cout << node->next << endl;

    Node *head = node;

    print(head);
    add_left(head, 12);
    print(head);
    add_left(head, 15);
    print(head);

    return 0;
}