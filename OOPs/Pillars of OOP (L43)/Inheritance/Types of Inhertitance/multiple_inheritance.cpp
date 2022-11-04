#include<iostream>
using namespace std;

class animal
{
    public:
    int age;
    int weight;

    void bark()
    {
        cout << "Barking\n";
    }
};

class human
{
    public:
    string color;

    void speak()
    {
        cout << "Speaking\n";
    }

};

class hybrid : public animal, public human
{
    
    public:
    void tell()
    {
        speak();
        bark();
    }

};
int main()
{
    hybrid a;
    a.tell();
return 0;
}