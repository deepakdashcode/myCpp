#include <iostream>
using namespace std;

class a
{
public:
    void show()
    {
        cout << "inside a\n";
    }
};

class b : public a
{
public:
    void show_b()
    {
        cout << "inside b\n";
    }
};

class c : public a
{
public:
    void show_c()
    {
        cout << "inside c\n";
    }
};

int main()
{
    a obj1;
    b obj2;
    c obj3;

    obj1.show();

    obj2.show();
    obj2.show_b();

    obj3.show();
    obj3.show_c();

    return 0;
}