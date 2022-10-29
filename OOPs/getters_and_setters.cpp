#include<iostream>
using namespace std;

class dog
{
    private:
    int age = 10;
    
    
    public:
    int getAge()
    {
        return age;
    }

    void setAge(int newAge)
    {
        age  = newAge;
    }

    int compare(dog second)
    {
        if(this->age >= second.age)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

};


int main()
{
    // dog bull;
    // cout << "Age is : " << bull.getAge() << endl;
    // //bull.age = 11;
    // bull.setAge(11);
    // cout << "Age is : " << bull.getAge() << endl;

    dog bull;
    bull.setAge(1);
    dog street;
    street.setAge(5);

    cout << bull.compare(street) << endl;

return 0;
}