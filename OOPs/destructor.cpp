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
        cout << "Copy Constructor called !!\n";
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

    ~hero()
    {
        
    }

};

int main()
{
    char name[4] = "Raj";
    hero a(name, 'A', 100);
    cout << "Working\n";


    
    
return 0;
}