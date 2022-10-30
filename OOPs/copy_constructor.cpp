#include<iostream>
using namespace std;

class hero
{
    public:
    int health;
    char level;

    hero(int health, char level)
    {
        this -> health = health;
        this -> level = level;
    
    }

    hero(hero &obj)
    {
        this -> health = obj.health;
        this -> level = obj.level;
    }

    void print()
    {
        cout << "Level : " << level << endl;
        cout << "Health : " << health << endl;
        cout << "\n\n";
    }

};
int main()
{
    hero a(100, 'A');
    a.print();

    hero b(a);
    b.print();

    a.level = 'D';

    a.print();
    b.print();

    

    
return 0;
}