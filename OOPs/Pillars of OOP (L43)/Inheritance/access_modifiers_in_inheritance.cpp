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

    
    string food;
};

class male: public human
{
    public:
    string color;
    male()
    {

    }
    male(int age, int height, string color)
    {
        this -> age = age;
        this -> height = height;
        this -> color = color;
    }
    void sleep()
    {
        cout << "male sleeping\n";
    }
};
int main()
{
    male boy1;
    boy1.food = "pasta";
    cout << boy1.food << endl;   
return 0;
}