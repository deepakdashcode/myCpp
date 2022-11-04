#include<iostream>
using namespace std;

class animal
{
    public:
    int age;
    int weight;

    public:
    void speak()
    {
        cout << "Speaking\n";
    }
};
class dog: public animal
{
    
};

int main()
{
    dog a;
    a.speak();
    
    cout << a.age << endl;
return 0;
} 