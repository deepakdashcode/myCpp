#include <iostream>
using namespace std;

class test
{
public:
    int val;

    void operator()()
    {
        cout << "Bracket Called\n";
    }
};

int main()
{
    test a;
    a();

    return 0;
}