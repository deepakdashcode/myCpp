// The protected members of the calss can be accessed only
// inside the calss and the sub-classes inheriting it

// Example
#include<iostream>
using namespace std;

class human
{
    protected:
    int age;

};

class male : public human
{
    public:
    void printAge()
    {
        cout << "I am inside male and I can access age " << this ->age << endl;

    }

};
int main()
{
    male a;
    a.printAge();
    //cout << a.age << endl;
return 0;
}