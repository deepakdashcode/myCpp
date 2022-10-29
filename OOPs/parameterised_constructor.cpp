#include<iostream>
using namespace std;

class hero
{
    public:
    char level;
    int health;

    hero(int health, char level)
    {   cout << "this : " << this << endl;
        this->health = health;
        this->level = level;
    }
};

int main()
{
    hero *h = new hero(100,'A');
    cout << "Address of h : " << h << endl;
    cout << h->health << endl;

    cout << "\n\n";
    // Statically

    hero a(150, 'D');    

    cout << "Address of a : " << &a << endl;
    cout << a.health << endl;
    cout << a.level << endl;
return 0;
}