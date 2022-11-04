#include <iostream>
using namespace std;

class a
{
public:
    void intro()
    {
        cout << "I am a\n";
    }
};

class b
{
public:
    void intro()
    {
        cout << "I am b\n";
    }
};

class c : public a, public b
{
};
int main()
{
    c obj;
    obj.a::intro();
    obj.b::intro();

    return 0;
}