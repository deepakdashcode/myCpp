#include<iostream>
#include<string.h>
using namespace std;

class hero
{
    public:
    char *name;
    char level;
    int health;

    // hero(hero &obj)
    // {
    //     char *ptr = new char[strlen(obj.name) + 1];
    //     strcpy(ptr, obj.name);
    //     this -> name = ptr;
    // }
    hero(char name[], char level, int health)
    {
        strcpy(this-> name, name);
        this -> level = level;
        this -> health = health;
    }

    void setName(char name[])
    {
        strcpy(this -> name, name);
    }
    void setLevel(char level)
    {
        this -> level = level;
    }

    void setHealth(int health)
    {
        this -> health = health;
    }

    void print()
    {
        cout << "Name : " << this -> name << ", ";
        cout << "Level : " << this -> level << ", ";
        cout << "Health : " << this -> health << "\n\n";
    }

};

int main()
{
    char name[4] = "Raj";
    hero h1(name, 'A', 100);

    h1.print();

    hero h2(h1);
    h2.print();

    // Changed h1
    h1.name[0] = 'T';
    h1.level = 'B';

    // Now print Both
    h1.print();
    h2.print();
    // End of code
return 0;
}