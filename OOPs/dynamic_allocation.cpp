#include<iostream>
using namespace std;

class hero
{
    public:
    int health;
    char level;

};

int main()
{
    hero h;
    cout << sizeof(h) << endl;

    // dynamic

    hero *b = new hero;
    (*b).health = 5;
    (*b).level = 'A';
    cout << "Level is : " << (*b).level << endl;
    cout << "Health is : " << (*b).health << endl;
    b -> health = 10;
    cout << "Health is : " << b -> health << endl;

return 0;
}