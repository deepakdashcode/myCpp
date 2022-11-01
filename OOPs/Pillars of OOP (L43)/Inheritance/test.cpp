#include<iostream>
using namespace std;

class human
{
    public:
    int age;

};

class male : protected human
{
    public:
    void print()
    {
        cout << "inside male, age is : " << age << endl;
    }

};

class boy : public male
{
    public:
    void print()
    {
        cout << "I am a subclass of male, age is : "<< age << endl;
    }
};
int main()
{
    boy a;
    a.print();
    
return 0;
}