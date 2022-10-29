#include<iostream>
using namespace std;

class hero
{
    public:
    char level;
    int health;

    hero(int health, char level)
    {   //cout << "this : " << this << endl;
        this->health = health;
        this->level = level;
    }

    hero(int health)
    {
        this->health = health;
        level = 'A';
    }
};

int main()
{
    hero a(100, 'S');
    hero b(100);

    cout << a.level << " " << a.health << endl;
    cout << b.level << " " << b.health << endl;

    cout << "\n";

    /*
    Now the default constructor is vanished 
    and can not be called until defined explicitly
    
    hero test; --> Error
    */

return 0;
}