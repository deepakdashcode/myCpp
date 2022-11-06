/*
Runtime polymorphism can be achieved by method overriding

*/

#include <iostream>
using namespace std;

class parent
{
public:
    void money()
    {
        cout << "Money is 100000\n";
    }

    void land()
    {
        cout << "1 acre\n";
    }
    void bride()
    {
        cout << "Sneha\n";
    }

    void laptop()
    {
        cout << "Asus Vivobook\n";
    }
};

class child : public parent
{
public:
    void bride()
    {
        cout << "NA\n";
    }

    void laptop()
    {
        cout << "MSI bravo 15\n";
    }
};

int main()
{
    child a;
    a.money();
    a.bride();
    a.land();
    a.laptop();

    return 0;
}