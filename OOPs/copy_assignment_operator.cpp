#include<iostream>
#include<string.h>
using namespace std;

class hero
{
    public:
    char *name;
    char level;
    int health;

    hero(hero &obj)
    {
        char *ptr = new char[strlen(obj.name) + 1];
        strcpy(ptr, obj.name);
        this -> name = ptr;

        this -> level = obj.level;
        this -> health = obj.health;        
    }
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
    hero h(name, 'A', 100);

    hero b = h;

    h.print();
    b.print();

    h.name[0] = 'T';

    h.print();
    b.print();   
return 0;
}