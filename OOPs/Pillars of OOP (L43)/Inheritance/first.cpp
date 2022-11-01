#include<iostream>
using namespace std;

class human
{
    public:
    int height;
    int weight;
    int age;

    int getAge()
    {
        return age;
    }
    void setWeight(int weight)
    {
        this -> weight = weight;
    }
};

class male: public human
{
    public:
    string color;
    male(int age, int height, string color)
    {
        this -> age = age;
        this -> height = height;
        this -> color = color;
    }
    void sleep()
    { cout << "male sleeping\n";
       
    }
};
int main()
{
    male object1(30, 6, "Red");
    object1.setWeight(70);

    cout << object1.age << endl;   
    cout << object1.height << endl;
    cout << object1.weight << endl;
    cout << object1.color << endl;
    object1.sleep();
return 0;
}