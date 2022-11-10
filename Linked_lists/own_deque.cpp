//    Properties of deque
// 1. Adding an element to start ---> O(1)
// 2. Adding an element to end --> O(1)
// 3. Removing an element from start --> O(1)
// 4. Removing an elemnt from end --> O(1)
// 5. Accessing first element --> O(1)
// 6. Accessing any random element --> O(n)
// 7. Removing any random element --> O(n)
// 8. Inserting an elemnt in any random index  --> O(n)

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

    int pop_back()
    {
        int value = this->tail->data;
        this->tail->previous->next = NULL;
        Node *temp = this->tail;
        this->tail = this->tail->previous;
        delete temp;
        return value;
    }

    int pop_front()
    {
        int value = this->head->data;
        Node *temp = this->head;
        head = head->next;
        head->previous = NULL;
        delete temp;
        return value;
    }

    int pop(int index)
    {
        if (index == 0)
        {
            return pop_front();
        }
        else
        {
            Node *start = head;
            for (int i = 1; i < index; i++)
            {
                start = start->next;
            }

            // To be continued

            // Check if last node is to be deleted

            if (start->next->next == NULL)
            {
                // Last node
                return pop_back();
            }

            else
            {
                Node *temp = start->next;
                int value = temp->data;

                start->next = temp->next;
                temp->next->previous = temp->previous;
                delete temp;

                return value;
            }
        }
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

    void head_and_tail()
    {
        cout << "Head : " << head->data << endl;
        cout << "Tail : " << tail->data << endl;
    }

    int getElement(int index)
    {
        Node *start = head;
        for (int i = 0; i < index; i++)
        {
            start = start->next;
        }

        return start->data;
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

    d.pop_front();
    d.print();

    d.insert(20, 1);
    d.print();

    d.insert(70, 3);
    d.print();

    d.head_and_tail();

    cout << "Element deleted is : " << d.pop(4) << endl;

    d.print();
    d.head_and_tail();

    cout << d.getElement(3) << endl;
    return 0;
}