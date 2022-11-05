#include <iostream>
using namespace std;

class student
{
public:
    int abilities;

    student(int abilities)
    {
        this->abilities = abilities;
    }

    student operator+(student &other)
    {
        cout << "Called + " << endl;
        return this->abilities + other.abilities;
    }
};
int main()
{
    student a(48);
    student b(37);

    student total = a + b + a + a;
    cout << total.abilities << endl;
    return 0;
}